#pragma warning(disable : 26812)
#include "compile.h"
#include "../graphics/graphics.h"
#include <cassert>
#include <chrono>
#include <iomanip>
#include <map>
#include <memory>
#include <stdlib.h>

VM *compile(struct ast *ast, Graphics *graphics, bool optimise) {
    VM *vm = new VM(graphics);

    // Hold compile state
    Compiler compiler(vm);
    compiler.state = CompilerState::None;

    // Look ahead and parse functions and types
    compiler.compile_node_lookahead(ast, false);

    // Recurse the tree and compile as we go
    for (int pass = 1; pass <= 2; pass++) {
        compiler.write = pass == 2;
        compiler.compile_node(ast, false);
        compiler.local_var_index = 0;
        vm->insert_bytecode(0, 0, compiler.write, HALT);
        if (pass == 1) {
            std::cout << "-> Bytecode is " << vm->get_pc() << " instructions." << std::endl;
            vm->build_bytecode();
        }
    }

    // Now we MOVE the variables into the VM class
    auto vars = vm->get_variables();
    vars->resize(compiler.global_var_index);
    for (auto g = compiler.globals.begin(); g != compiler.globals.end(); ++g) {
        auto glob = (*g).second;
        vars->at(glob.index) = std::move(glob);
    }
    for (auto g = compiler.constants.begin(); g != compiler.constants.end(); ++g) {
        auto glob = (*g);
        vars->at(glob.index) = std::move(glob);
    }

    // Size to number of functions
    vm->resize_function_locals(static_cast<int>(compiler.functions.size()));

    // Setup each function locals now
    for (auto g = compiler.functions.begin(); g != compiler.functions.end(); ++g) {
        auto func = (*g).second;

        VMFunction b;
        b.id = func.id;
        b.pc_start = func.pc_start;
        b.pc_end = func.pc_end;
        vm->functions.push_back(std::move(b));

        auto locals = vm->get_function_locals(func.id);
        for (auto l = func.local_names.begin(); l != func.local_names.end(); ++l) {
            Boxed b;
            b.name = *l;
            locals->push_back(std::move(b));
        }
    }

    // Optimise
    if (optimise) {
        using namespace std::chrono;
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        compiler.optimise();
        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
        std::cout << "-> Optimisation complete, took " << time_span.count() << " seconds, bytecode is " << vm->get_pc() << " bytes." << std::endl;
    }

    return vm;
}

void Compiler::setup_3d_types() {

    // Pi3D_Vertex
    CustomType custom_type;
    custom_type.id = custom_type_index++;
    custom_type.members.insert(std::pair<std::string, Boxed>("x", std::move(Boxed("x", Type::Float, 0))));
    custom_type.members.insert(std::pair<std::string, Boxed>("y", std::move(Boxed("y", Type::Float, 1))));
    custom_type.members.insert(std::pair<std::string, Boxed>("z", std::move(Boxed("z", Type::Float, 2))));
    custom_type.members.insert(std::pair<std::string, Boxed>("rgb%", std::move(Boxed("rgb%", Type::Integer, 3))));
    custom_types.insert(std::pair<std::string, CustomType>("Vertex3D", std::move(custom_type)));

    // Pi3D_Vertex
    CustomType custom_type2;
    custom_type2.id = custom_type_index++;
    custom_type2.members.insert(std::pair<std::string, Boxed>("v1", std::move(Boxed("v1", Type::Integer, 0))));
    custom_type2.members.insert(std::pair<std::string, Boxed>("v2", std::move(Boxed("v2", Type::Integer, 1))));
    custom_type2.members.insert(std::pair<std::string, Boxed>("v3", std::move(Boxed("v3", Type::Integer, 2))));
    custom_type2.members.insert(std::pair<std::string, Boxed>("rgb%", std::move(Boxed("rgb%", Type::Integer, 3))));
    custom_types.insert(std::pair<std::string, CustomType>("Triangle3D", std::move(custom_type2)));
}

void Compiler::compile_node(struct ast *ast, bool expression) {
    if (ast == NULL) {
        return;
    }
/*    if (ast->type != NodeType::Link) {
        level++;
    }*/
    level++;
    line_number = ast->line_number;
    file_number = ast->file_number;
    switch (ast->type) {
    case NodeType::Link:
        compile_node(ast->l, expression);
        compile_node(ast->r, expression);
        break;
    case NodeType::Token:
        compile_node_token(ast, expression);
        break;
    case NodeType::Assignment:
        compile_node_assignment(ast, expression);
        break;
    case NodeType::Variable:
        compile_node_variable(ast, expression);
        break;
    case NodeType::VariableWithIndex:
        compile_node_variablewithindex(ast, expression);
        break;
    case NodeType::Expression:
        compile_node_expression(ast, expression);
        break;
    case NodeType::Integer:
        compile_node_integer(ast, expression);
        break;
    case NodeType::Float:
        compile_node_float(ast, expression);
        break;
    case NodeType::String:
        compile_node_string(ast, expression);
        break;
    case NodeType::LineNumber:
        if (!write) {
            line_no_to_bytecode.insert(std::pair<UINT32, UINT32>(ast->line_number, vm->get_pc()));
        }
        break;
    case NodeType::StarCommand:
        break;
    case NodeType::Function:
        compile_node_function(ast);
        break;
    case NodeType::Type:
        compile_node_type(ast);
        break;
    default:
        error("Unknown type " + (int)ast->type);
    };
    if (ast->type != NodeType::Link) {
        level--;
    }

    // Do we have to print stuff?
    if (stack_size() >= 1 && state == CompilerState::Print && level == print_level) {
        insert_instruction_based_on_type(
            {
                {Type::Integer, PRINT_I},
                {Type::Float, PRINT_F},
                {Type::String, PRINT_S},
            },
            peek_type(), create_print_flag());
        stack_pop();
    }
}

void Compiler::compile_node_token(struct ast *ast, bool expression) {
    switch (ast->token) {
    case Token::Global:
    case Token::Local:
    case Token::Dim:
    case Token::LocalDim:
        compile_node_token_variable(ast, expression);
        break;

    case Token::Read:
    case Token::Data:
    case Token::Restore:
        compile_node_token_data(ast, expression);
        break;

    case Token::Case:
    case Token::Repeat:
    case Token::Until:
    case Token::For:
    case Token::ForStep:
    case Token::While:
    case Token::If:
    case Token::Goto:
    case Token::Gosub:
        compile_node_token_looping(ast, expression);
        break;

    case Token::Inkey:
    case Token::SInkey:
    case Token::Inkeys:
    case Token::SInkeys:
    case Token::PrintNewLine:
    case Token::PrintSpc:
    case Token::PrintComma:
    case Token::PrintSemiColon:
    case Token::Print:
    case Token::PrintN:
    case Token::PrintHex:
    case Token::Input:
    case Token::InputNoQuestionMark:
        compile_node_token_printinput(ast, expression);
        break;

    case Token::OpenIn:
    case Token::OpenUp:
    case Token::OpenOut:
    case Token::Close:
    case Token::BGet:
    case Token::BPut:
    case Token::Eof:
        compile_node_token_io(ast, expression);
        break;

    case Token::Abs:
    case Token::Sqr:
    case Token::Ln:
    case Token::Log:
    case Token::Exp:
    case Token::Atn:
    case Token::Tan:
    case Token::Sin:
    case Token::Cos:
    case Token::Acs:
    case Token::Asn:
    case Token::Deg:
    case Token::Rad:
    case Token::Not:
    case Token::Sgn:
    case Token::Pi:
    case Token::Rnd:
    case Token::RndRange:
        compile_node_token_maths(ast, expression);
        break;

    case Token::Asc:
    case Token::Chrs:
    case Token::Instr:
    case Token::Lefts:
    case Token::Mids:
    case Token::Rights:
    case Token::Len:
    case Token::Val:
    case Token::Strs:
    case Token::StrsHex:
    case Token::Strings:
        compile_node_token_string(ast, expression);
        break;

    case Token::Cls:
    case Token::ColourHEX:
    case Token::ColourRGB:
    case Token::ColourBgHEX:
    case Token::ColourBgRGB:
    case Token::ColourExpression:
    case Token::Line:
    case Token::Rectangle:
    case Token::Circle:
    case Token::CircleFill:
    case Token::RectangleFill:
    case Token::Triangle:
    case Token::TriangleFill:
    case Token::TriangleShaded:
    case Token::Flip:
    case Token::Graphics:
    case Token::Plot:
    case Token::Clip:
    case Token::ClipOff:
    case Token::ScreenWidth:
    case Token::ScreenHeight:
    case Token::LoadTypeface:
    case Token::CreateFont:
    case Token::Text:
    case Token::TextRight:
    case Token::TextCentre:
        compile_node_token_graphics(ast, expression);
        break;

    case Token::CreateVertex:
    case Token::CreateTriangle:
    case Token::CreateShape:
    case Token::CreateObjectSolid:
    case Token::CreateObjectWireframe:
    case Token::CreateObjectEdgedWireframe:
    case Token::CreateObjectShaded:
    case Token::ObjectTranslate:
    case Token::ObjectRotate:
    case Token::ObjectScale:
    case Token::RenderFrame:
        compile_node_token_graphics_3d(ast, expression);
        break;

    case Token::Type:
    case Token::EndType:
    case Token::Field:
        // Already handled in lookahead phase
        break;

    case Token::FunctionCall:
    case Token::FunctionCallExpression:
    case Token::Return:
    case Token::ReturnValue:
        compile_node_token_functions(ast, expression);
        break;

    case Token::Oscli:
        compile_node(ast->l, true);
        stack_pop();
        vm->insert_bytecode(line_number, file_number, write, PRINT_S);
        break;
    case Token::TraceOn:
        vm->insert_bytecode(line_number, file_number, write, TRACEON);
        break;
    case Token::TraceOff:
        vm->insert_bytecode(line_number, file_number, write, TRACEOFF);
        break;
    case Token::End:
        vm->insert_bytecode(line_number, file_number, write, HALT);
        break;
    case Token::Time:
        vm->insert_bytecode(line_number, file_number, write, TIME);
        stack_push(Type::Integer);
        break;
    case Token::Times:
        vm->insert_bytecode(line_number, file_number, write, TIMES);
        stack_push(Type::String);
        break;
    case Token::False:
        vm->insert_instruction(line_number, file_number, write, CONST_I, 0);
        stack_push(Type::Integer);
        break;
    case Token::True:
        vm->insert_instruction(line_number, file_number, write, CONST_I, 1);
        stack_push(Type::Integer);
        break;
    case Token::Int:
        compile_node(ast->l, true);
        if (peek_type() == Type::Float) {
            vm->insert_bytecode(line_number, file_number, write, F_TO_I);
            stack_pop();
            stack_push(Type::Integer);
        }
        break;
    case Token::Float:
        compile_node(ast->l, true);
        if (peek_type() == Type::Integer) {
            vm->insert_bytecode(line_number, file_number, write, I_TO_F);
            stack_pop();
            stack_push(Type::Float);
        }
        break;

    default:
        error("Unknown token: " + (int)ast->token);
    }
}

void Compiler::compile_node_type(struct ast *ast) {
    custom_type_name.assign(*ast->v_string);
    if (custom_types.count(custom_type_name) == 0) {
        error("Unknown type " + *ast->l->v_string);
    }
}

void Compiler::error(std::string message) {
    std::cout << message << " at line " << line_number << ", file number " << file_number << std::endl;
    exit(1);
}
