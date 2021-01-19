#include "compile_c.h"

CCompile::CCompile(std::ostream *file, struct ast *ast) {
    compile_node(ast, false);
    *file << "#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS" << std::endl << "#include \"shared.h\"" << std::endl << std::endl;
    *file << "#define _CRT_SECURE_NO_WARNINGS" << std::endl;
    *file << globals_code.str();
    *file << "int main(int argc, char *argv[]) {" << std::endl
          << "graphics_init();" << std::endl
          << data_code.str() << std::endl
          << text_code.str() << "graphics_shutdown();" << std::endl
          << "return 0;" << std::endl
          << "}" << std::endl;
}

std::string CCompile::munge_variable_name(std::string name) {
    if (name.back() == '%') {
        name.pop_back();
        name.append("_I");
    } else if (name.back() == '$') {
        name.pop_back();
        name.append("_S");
    }
    return name;
}

void CCompile::compile_node(struct ast *ast, bool expression) {
    if (ast == NULL)
        return;

    if (ast->type != NodeType::Link) {
        level++;
    }

    // Write to globals?
    std::ostringstream *out = &text_code;

    switch (ast->type) {
    case NodeType::Assignment: {
        switch (state) {
        case CompilerState::Globals: {
            auto munged = munge_variable_name(*ast->l->v_string);
            if (local_variables.count(munged) == 0 && global_variables.count(munged) == 0) {
                compile_variable_type_and_name(globals_code, ast->l->var_type, munged, true);
                global_variables.insert(munged);
            }
            compile_node(ast->l, false);
            *out << "=";
            compile_node(ast->r, true);
            *out << ";" << std::endl;
            break;
        }
        case CompilerState::Locals: {
            auto munged = munge_variable_name(*ast->l->v_string);
            if (local_variables.count(munged) == 0) {
                compile_variable_type_and_name(text_code, ast->l->var_type, munged, true);
                local_variables.insert(munged);
            }
            compile_node(ast->l, false);
            *out << "=";
            compile_node(ast->r, true);
            *out << ";" << std::endl;
            break;
        }
        };
        break;
    }
    case NodeType::Expression:
        compile_node_expression(ast, expression);
        break;
    case NodeType::Float:
        switch (state) {
        case CompilerState::Data:
            data_code << "data_float(" << ast->v_float << ");" << std::endl;
            break;
        case CompilerState::Dim:
            globals_code << ast->v_float;
            break;
        default:
            *out << ast->v_float;
            break;
        }
        break;
    case NodeType::Integer:
        switch (state) {
        case CompilerState::Data:
            data_code << "data_int(" << ast->v_int << ");" << std::endl;
            break;
        case CompilerState::Dim:
            globals_code << ast->v_int;
            break;
        default:
            *out << ast->v_int;
            break;
        }
        break;
    case NodeType::String:
        switch (state) {
        case CompilerState::Data:
            data_code << "data_string(\"" << *ast->v_string << "\");" << std::endl;
            break;
        case CompilerState::Dim:
            globals_code << "\"" << *ast->v_string << "\"";
            break;
        default:
            *out << "VM_STRING(\"" << *ast->v_string << "\")";
            break;
        }
        break;
    case NodeType::Function: {
        auto munged = munge_variable_name(*ast->l->v_string);

        // Start inline def
        auto pos1 = text_code.tellp();
        switch (ast->var_type) {
        case Type::None:
            text_code << "void ";
            break;
        case Type::Integer:
            text_code << "VM_INT ";
            break;
        case Type::Float:
            text_code << "VM_FLOAT ";
            break;
        case Type::String:
            text_code << "VM_STRING ";
            break;
        }
        text_code << munged << "(";

        // Function parameters
        state = CompilerState::Function;
        compile_node(ast->r->l, false);
        strip_trailing_comma(&text_code);
        state = CompilerState::None;

        text_code << ") {" << std::endl;

        // Function body
        inside_function = true;
        compile_node(ast->r->r, false);
        inside_function = false;
        local_variables.clear();
        text_code << "};" << std::endl;

        // Now move this to globals
        auto pos2 = text_code.tellp();
        auto a = text_code.str().substr(pos1, pos2 - pos1);
        auto b = text_code.str().substr(0, pos1);
        text_code.str(b);
        text_code.seekp(0, std::ios::end);
        globals_code << a;
        break;
    }
    case NodeType::Link:
        if (ast->l != NULL)
            compile_node(ast->l, expression);
        if (ast->r != NULL)
            compile_node(ast->r, expression);
        break;
    case NodeType::Variable:
        compile_node_variable(ast, expression);
        break;
    case NodeType::VariableWithIndex:
        compile_node_variablewithindex(ast, expression);
        break;
    case NodeType::Token:
        switch (ast->token) {
        case Token::Dim:
            state = CompilerState::Dim;
            compile_node(ast->l, false);
            state = CompilerState::None;
            break;
        case Token::LocalDim:
            state = CompilerState::LocalDim;
            compile_node(ast->l, false);
            state = CompilerState::None;
            break;
        case Token::If: {
            // This is the condition
            text_code << "if ";
            compile_node(ast->l, true);
            text_code << " {" << std::endl;

            // This is the truth section
            compile_node(ast->r->l, false);

            // The false bit
            if (ast->r->r != NULL) {
                text_code << "} else {" << std::endl;
                compile_node(ast->r->r, false);
            }
            text_code << "}" << std::endl;
            break;
        }
        case Token::FunctionCall: {
            auto munged = munge_variable_name(*ast->l->v_string);
            text_code << munged << "(";
            // Parameters
            state = CompilerState::FunctionParameters;
            parameters_level = 0;
            compile_node(ast->r, true);
            strip_trailing_comma(&text_code);
            state = CompilerState::None;
            if (!expression) {
                text_code << ");" << std::endl;
            } else {
                text_code << ")";
            }
            break;
        }
        case Token::For: {
            bool global = false;
            if (ast->l->l->var_type != Type::None && !inside_function) {
                global = true;
            }
            std::string munged = munge_variable_name(*ast->l->l->v_string);

            // Check and define variable if needed
            if (global_variables.count(munged) == 0 && local_variables.count(munged) == 0) {
                if (global) {
                    compile_variable_type_and_name(globals_code, ast->l->l->var_type, munged, true);
                    global_variables.insert(munged);
                } else {
                    compile_variable_type_and_name(text_code, ast->l->l->var_type, munged, true);
                    local_variables.insert(munged);
                }
            }

            // Starter value
            text_code << "auto __fs" << for_index << "=";
            compile_node(ast->l->r, true);
            text_code << ";";

            // This is the TO value
            text_code << "auto __fe" << for_index << "=";
            bool step = ast->r->type == NodeType::Link;
            if (!step) {
                compile_node(ast->r, true);
            } else {
                compile_node(ast->r->l, true);
            }
            text_code << ";";

            // This is the step value
            text_code << "auto __fst" << for_index << "=";
            if (!step) {
                text_code << "1";
            } else {
                compile_node(ast->r->r, true);
            }
            text_code << ";";

            // Direction
            text_code << "auto __fd" << for_index << " = 0;";
            text_code << "if (__fs" << for_index << " <= __fe" << for_index << ") __fd" << for_index << " = 1; else __fd" << for_index << " = -1;" << std::endl;

            text_code << "for (" << munged << "= __fs" << for_index;
            text_code << ";" << munged << "!=__fe" << for_index << "+__fd" << for_index;

            // Step
            text_code << ";" << munged << "+=__fst" << for_index << ") {" << std::endl;

            for_index++;
            break;
        }
/*        case Token::Next:
            text_code << "}" << std::endl;
            break;*/
        case Token::Repeat:
            text_code << "do {" << std::endl;
            break;
        case Token::Until:
            text_code << "} while (!(";
            compile_node(ast->l, true);
            text_code << "));" << std::endl;
            break;
        case Token::While:
            text_code << "while (";
            compile_node(ast->l, true);
            text_code << ") {" << std::endl;
            compile_node(ast->r, true);
            text_code << "};" << std::endl;
            break;
        case Token::Case:
        case Token::When:
        case Token::Otherwise:
            text_code << "//CASE not supported" << std::endl;
            break;

        case Token::Global:
            state = CompilerState::Globals;
            compile_node(ast->l, false);
            compile_node(ast->r, true);
            state = CompilerState::None;
            break;
        case Token::Local:
            state = CompilerState::Locals;
            compile_node(ast->l, false);
            compile_node(ast->r, true);
            state = CompilerState::None;
            break;
        case Token::Print:
            state = CompilerState::Print;
            if (ast->l == NULL) {
                text_code << "std::cout << std::endl;" << std::endl;
            } else {
                text_code << "std::cout <<";
                compile_node(ast->l, true);
                text_code << "<< std::endl;" << std::endl;
            }
            state = CompilerState::None;
            break;
        case Token::PrintN:
            state = CompilerState::Print;
            text_code << "std::cout <<";
            compile_node(ast->l, true);
            text_code << ";" << std::endl;
            state = CompilerState::None;
            break;
        case Token::PrintSemiColon:
            break;

        // Maths
        case Token::True:
            *out << "true";
            break;
        case Token::False:
            *out << "false";
            break;
        case Token::Not:
            *out << "!(";
            compile_node(ast->l, true);
            strip_trailing_comma(out);
            *out << ")";
            break;
        case Token::Pi:
            *out << "M_PI";
            break;
        case Token::Atn:
            *out << "std::atan(";
            compile_node(ast->l, true);
            strip_trailing_comma(out);
            *out << ")";
            break;
        case Token::Cos:
            *out << "std::cos(";
            compile_node(ast->l, true);
            strip_trailing_comma(out);
            *out << ")";
            break;
        case Token::Sin:
            *out << "std::sin(";
            compile_node(ast->l, true);
            strip_trailing_comma(out);
            *out << ")";
            break;
        case Token::Sqr:
            *out << "std::sqrt(";
            compile_node(ast->l, true);
            strip_trailing_comma(out);
            *out << ")";
            break;
        case Token::Tan:
            *out << "std::tan(";
            compile_node(ast->l, true);
            strip_trailing_comma(out);
            *out << ")";
            break;
        case Token::Abs:
            *out << "abs(";
            compile_node(ast->l, true);
            strip_trailing_comma(out);
            *out << ")";
            break;
        case Token::Ln:
            *out << "std::log(";
            compile_node(ast->l, true);
            strip_trailing_comma(out);
            *out << ")";
            break;
        case Token::Log:
            *out << "std::log10(";
            compile_node(ast->l, true);
            strip_trailing_comma(out);
            *out << ")";
            break;
        case Token::Exp:
            *out << "std::exp(";
            compile_node(ast->l, true);
            strip_trailing_comma(out);
            *out << ")";
            break;
        case Token::Acs:
            *out << "std::acos(";
            compile_node(ast->l, true);
            strip_trailing_comma(out);
            *out << ")";
            break;
        case Token::Asn:
            *out << "std::asin(";
            compile_node(ast->l, true);
            strip_trailing_comma(out);
            *out << ")";
            break;
        case Token::Rad:
            *out << "(((";
            compile_node(ast->l, true);
            strip_trailing_comma(out);
            *out << ") * 180.0) / M_PI)";
            break;
        case Token::Deg:
            *out << "(((";
            compile_node(ast->l, true);
            strip_trailing_comma(out);
            *out << ") * M_PI) / 180.0)";
            break;
        case Token::Sgn:
            *out << "sgn(";
            compile_node(ast->l, true);
            strip_trailing_comma(out);
            *out << ")";
            break;

            // Strings
        case Token::Instr:
            *out << "instr(";
            compile_node(ast->l, true);
            *out << ",";
            compile_node(ast->r->l, true);
            *out << ",";
            compile_node(ast->r->r, true);
            *out << ")";
            break;
        case Token::Lefts:
            *out << "lefts(";
            compile_node(ast->l, true);
            *out << ",";
            compile_node(ast->r, true);
            *out << ")";
            break;
        case Token::Rights:
            *out << "rights(";
            compile_node(ast->l, true);
            *out << ",";
            compile_node(ast->r, true);
            *out << ")";
            break;
        case Token::Mids:
            *out << "mids(";
            compile_node(ast->l, true);
            *out << ",";
            compile_node(ast->r->l, true);
            *out << ",";
            compile_node(ast->r->r, true);
            *out << ")";
            break;
        case Token::Len:
            *out << "len(";
            compile_node(ast->l, true);
            *out << ")";
            break;
        case Token::Strs:
            *out << "strs(";
            compile_node(ast->l, true);
            *out << ")";
            break;
        case Token::StrsHex:
            *out << "strs_hex(";
            compile_node(ast->l, true);
            *out << ")";
            break;
        case Token::Strings:
            *out << "strings(";
            compile_node(ast->l, true);
            *out << ",";
            compile_node(ast->r, true);
            *out << ")";
            break;

            // Static stuff
        case Token::Time:
            *out << "get_clock()";
            break;
        case Token::Times:
            *out << "times()";
            break;

            // Files
        case Token::BGet:
            *out << "bget(";
            compile_node(ast->l, true);
            *out << ");" << std::endl;
            break;
        case Token::Close:
            *out << "close(";
            compile_node(ast->l, true);
            *out << ");" << std::endl;
            break;
        case Token::Eof:
            *out << "eof(";
            compile_node(ast->l, true);
            *out << ")";
            break;
        case Token::OpenIn:
            *out << "open_in";
            compile_node(ast->l, true);
            break;

            // Conversion
        case Token::Asc:
            *out << "asc(";
            compile_node(ast->l, true);
            *out << ")";
            break;
        case Token::Chrs:
            *out << "chrs(";
            compile_node(ast->l, true);
            *out << ")";
            break;
        case Token::Val:
            *out << "std::stod(";
            compile_node(ast->l, true);
            *out << ")";
            break;
        case Token::Int:
            *out << "static_cast<VM_INT>(";
            compile_node(ast->l, true);
            *out << ")";
            break;

        case Token::End:
            *out << "exit(0);" << std::endl;
            break;
        case Token::Return:
            *out << "return ";
            compile_node(ast->l, true);
            *out << ";" << std::endl;
            break;
        case Token::ReturnValue:
            *out << "return ";
            compile_node(ast->l, true);
            *out << ";" << std::endl;
            break;

            // Data statements
        case Token::Data:
            state = CompilerState::Data;
            compile_node(ast->l, false);
            state = CompilerState::None;
            break;
        case Token::Read:
            state = CompilerState::Read;
            compile_node(ast->l, false);
            state = CompilerState::None;
            break;
        case Token::Restore:
            text_code << "data_restore();" << std::endl;
            break;

        case Token::Oscli:
            text_code << "//OSCLI not supported;\n";
            break;

        default:
            std::cout << "Unknown token " << static_cast<int>(ast->token) << " in C compiler" << std::endl;
            break;
        }
        break;
    default:
        std::cout << "Unhandled node type " << static_cast<int>(ast->type) << " << in C compiler" << std::endl;
        exit(1);
    }
    if (parameters_level == 0 && state == CompilerState::FunctionParameters) {
        text_code << ",";
    }
    if (ast->type != NodeType::Link) {
        level--;
    }
}

void CCompile::strip_trailing_comma(std::ostringstream *out) {
    bool done = false;
    while (!done) {
        out->seekp(-1, std::ios::cur);
        auto a = out->str();
        auto p = out->tellp();
        if (a[p] != ',') {
            out->seekp(1, std::ios::cur);
            done = true;
        }
    }
}

void CCompile::compile_variable_type_and_name(std::ostringstream &s, Type type, std::string munged, bool terminate) {
    switch (type) {
    case Type::Integer:
        s << "VM_INT " << munged;
        break;
    case Type::Float:
        s << "VM_FLOAT " << munged;
        break;
    case Type::String:
        s << "VM_STRING " << munged;
        break;
    default:
        std::cout << "Unknown variable type " << static_cast<int>(type) << std::endl;
        exit(1);
    }
    if (terminate) {
        s << ";" << std::endl;
    }
}

void CCompile::compile_node_variable(struct ast *ast, bool expression) {
    auto munged = munge_variable_name(*ast->v_string);
    switch (state) {
    case CompilerState::Function:
        compile_variable_type_and_name(text_code, ast->var_type, munged, false);
        text_code << ",";
        break;
    case CompilerState::Read:
        text_code << munged << " ";
        switch (ast->var_type) {
        case Type::Integer:
            text_code << "=read_int();" << std::endl;
            break;
        case Type::Float:
            text_code << "=read_float();" << std::endl;
            break;
        case Type::String:
            text_code << "=read_string();" << std::endl;
            break;
        }
        break;
    default:
        text_code << munged;
    }
}

void CCompile::compile_node_variablewithindex(struct ast *ast, bool expression) {
    // Find variable
    auto var_type = ast->var_type;
    auto var_name = *ast->v_string;
    auto munged = munge_variable_name(var_name);

    switch (state) {
    case CompilerState::Globals:
    case CompilerState::Locals:
    case CompilerState::FunctionParameters:
    case CompilerState::None: {
        text_code << munged << "[";
        if (ast->l->type == NodeType::Link) {
            compile_node(ast->l->l, true);
            text_code << ",";
            compile_node(ast->l->r, true);
            strip_trailing_comma(&text_code);
        } else {
            compile_node(ast->l, true);
            strip_trailing_comma(&text_code);
        }
        text_code << "]";
        break;
    }
    case CompilerState::Read: {
        text_code << munged << "[";
        state = CompilerState::None;
        if (ast->l->type == NodeType::Link) {
            compile_node(ast->l->l, true);
            text_code << ",";
            compile_node(ast->l->r, true);
            strip_trailing_comma(&text_code);
        } else {
            compile_node(ast->l, true);
            strip_trailing_comma(&text_code);
        }
        text_code << "]";
        state = CompilerState::Read;
        switch (ast->var_type) {
        case Type::IntegerArray:
            text_code << "=read_int();" << std::endl;
            break;
        case Type::FloatArray:
            text_code << "=read_float();" << std::endl;
            break;
        case Type::StringArray:
            text_code << "=read_string();" << std::endl;
            break;
        }
        break;
    }
    case CompilerState::Dim: {
        if (global_variables.count(munged) == 0) {
            switch (var_type) {
            case Type::Integer:
                globals_code << "int ";
                break;
            case Type::Float:
                globals_code << "double ";
                break;
            case Type::FloatArray:
                globals_code << "std::array<VM_FLOAT,";
                break;
            case Type::IntegerArray:
                globals_code << "std::array<VM_INT,";
                break;
            case Type::StringArray:
                globals_code << "std::array<VM_STRING,";
                break;
            default:
                std::cout << "Unknown variable type " << static_cast<int>(var_type) << std::endl;
                exit(1);
            }
            global_variables.insert(munged);
        }

        // Work out dimensions
        if (ast->l->type == NodeType::Link) {
            globals_code << " static_cast<int>(";
            compile_node(ast->l->l, true);
            globals_code << ",";
            compile_node(ast->l->r, true);
            globals_code << ")";
        } else {
            globals_code << " static_cast<int>(";
            compile_node(ast->l, true);
            globals_code << ")";
        }

        globals_code << ">" << munged << ";" << std::endl;
        break;
    }
    case CompilerState::LocalDim: {
        if (global_variables.count(munged) == 0) {
            switch (var_type) {
            case Type::Integer:
                text_code << "int ";
                break;
            case Type::Float:
                text_code << "double ";
                break;
            case Type::FloatArray:
                text_code << "std::array<VM_FLOAT,";
                break;
            case Type::IntegerArray:
                text_code << "std::array<VM_INT,";
                break;
            case Type::StringArray:
                text_code << "std::array<VM_STRING,";
                break;
            default:
                std::cout << "Unknown variable type " << static_cast<int>(var_type) << std::endl;
                exit(1);
            }
            local_variables.insert(munged);
        }

        // Work out dimensions
        if (ast->l->type == NodeType::Link) {
            text_code << " static_cast<int>(";
            compile_node(ast->l->l, true);
            text_code << ",";
            compile_node(ast->l->r, true);
            text_code << ")";
        } else {
            text_code << " static_cast<int>(";
            compile_node(ast->l, true);
            text_code << ")";
        }

        text_code << ">" << munged << ";" << std::endl;
        break;
    }
    default:
        std::cout << "Unhandled state in variablewithindex\n";
        exit(1);
    }
}

void CCompile::compile_node_expression(struct ast *ast, bool expression) {
    // Write to globals?
    std::ostringstream *out = &text_code;

    parameters_level++;
    if (ast->oper == Operator::Div) {
        *out << "static_cast<VM_INT>(";
    } else {
        *out << "(";
    }
    compile_node(ast->l, true);
    switch (ast->oper) {
    case Operator::None:
        break;
    case Operator::Plus:
        *out << " + ";
        break;
    case Operator::Subtract:
        *out << " - ";
        break;
    case Operator::Multiply:
        *out << " * ";
        break;
    case Operator::Divide:
        *out << " / ";
        break;

    case Operator::Mod:
        *out << " % ";
        break;
    case Operator::Div:
        *out << ") / static_cast<VM_INT>(";
        break;
    case Operator::ShiftLeft:
        *out << " << ";
        break;
    case Operator::ShiftRight:
        *out << " >> ";
        break;
    case Operator::Equal:
        *out << " == ";
        break;
    case Operator::NotEqual:
        *out << " != ";
        break;
    case Operator::LessEqual:
        *out << " <= ";
        break;
    case Operator::GreaterEqual:
        *out << " >= ";
        break;
    case Operator::Greater:
        *out << " > ";
        break;
    case Operator::Less:
        *out << " < ";
        break;

    case Operator::Or:
        *out << "|";
        break;
    case Operator::And:
        *out << "&";
        break;
    case Operator::Eor:
        *out << "^";
        break;
    default:
        std::cout << "Unknown operator" << std::endl;
        exit(1);
    }
    compile_node(ast->r, true);
    parameters_level--;
    *out << ")";
}
