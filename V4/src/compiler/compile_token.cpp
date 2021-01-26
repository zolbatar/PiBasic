#define _GLIBCXX_USE_C99 1
#include "compile.h"
#include <cassert>

void Compiler::compile_node_token(struct AST* ast, bool expression)
{
    switch (ast->token) {
    case ARRAYSIZE: {
        get_ensure_is_integer_pop(ast->items[1]);
        var_name = ast->items[0]->string;
        auto var_id = find_or_create_variable(VariableScope::NOSCOPE, false);
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::ARRAYSIZE, var_id);
        stack_push(Type::INTEGER);
        break;
    }
    case GLOBAL:
        state = CompilerState::GLOBALS;
        compile_node(ast->items[0], expression);
        assert(stack_size() == 0);
        state = CompilerState::NOSTATE;
        break;
    case LOCAL:
        state = CompilerState::LOCALS;
        compile_node(ast->items[0], expression);
        assert(stack_size() == 0);
        state = CompilerState::NOSTATE;
        break;

    case DIM: {
        state = CompilerState::DIM;
        compile_node(ast->items[0], expression);
        state = CompilerState::NOSTATE;
        break;
    }
    case LOCALDIM: {
        state = CompilerState::LOCALDIM;
        compile_node(ast->items[0], expression);
        state = CompilerState::NOSTATE;
        break;
    }

    case READ:
    case DATA:
    case RESTORE:
        compile_node_token_data(ast);
        break;

    case CALLPROC:
    case CALLFN:
    case RETURN:
    case RETURN_WITH_VALUE:
        compile_node_token_functions(ast, expression);
        break;

    case DEFPROC:
    case DEFFN:
        // Create nested code inside function
        compile_node_function(ast);
        break;

    case CASE:
    case REPEAT:
    case FOR:
    case FORIN:
    case WHILE:
    case IF:
    case GOTO:
    case GOSUB:
        compile_node_token_looping(ast);
        break;

    case GET:
    case GETS:
    case GET_S:
    case GETS_S:
    case INKEY:
    case SINKEY:
    case INKEYS:
    case SINKEYS:
    case PRINT:
    case SPC:
    case INPUT_:
    case INPUT_NOQUESTIONMARK:
    case MOUSE:
        compile_node_token_printinput(ast);
        break;

    case OPENIN:
    case OPENUP:
    case OPENOUT:
    case CLOSE:
    case BGET:
    case BPUT:
    case EOFH:
    case PTR:
    case PTRA:
    case GETSH:
    case LISTFILES:
        compile_node_token_io(ast);
        break;

    case PLUS:
    case MINUS:
    case DIVIDE:
    case MULTIPLY:
    case INTEGERDIVIDE:
    case MOD:
    case DIV:
    case SHL:
    case SHR:
    case E:
    case NE:
    case LE:
    case GE:
    case LT:
    case GT:
    case OR:
    case EOR:
    case AND:
        compile_node_expression(ast);
        break;

    case ABS:
    case ACS:
    case ASN:
    case ATN:
    case COS:
    case DEG:
    case EXP:
    case LN:
    case LOG:
    case NOT:
    case PI:
    case RAD:
    case RND:
    case RNDREAL:
    case RNDRANGE:
    case SIN:
    case SGN:
    case SQR:
    case TAN:
        compile_node_token_maths(ast);
        break;

    case ASC:
    case CHRS:
    case INSTR:
    case LEFTS:
    case MIDS:
    case RIGHTS:
    case LEN:
    case VAL:
    case STRS:
    case STRSHEX:
    case STRINGS:
        compile_node_token_string(ast);
        break;

    case BANKED:
    case CIRCLE:
    case CIRCLEFILL:
    case CLIPON:
    case CLIPOFF:
    case CLS:
    case COLOUR:
    case COLOURBG:
    case COLOUREXP:
    case CREATEFONT:
    case FLIP:
    case GRAPHICS:
    case LINE:
    case LOADTYPEFACE:
    case PLOT:
    case POINT_:
    case RECTANGLE:
    case RECTANGLEFILL:
    case SCREENWIDTH:
    case SCREENHEIGHT:
    case SHOWFPS:
    case TEXT:
    case TEXTRIGHT:
    case TEXTCENTRE:
    case TRIANGLE:
    case TRIANGLEFILL:
    case TRIANGLESHADED:
        compile_node_token_graphics(ast);
        break;

    case CREATEOBJECT:
    case CREATESHAPE:
    case CREATETRIANGLE:
    case CREATEVERTEX:
    case DELETEOBJECT:
    case RENDERFRAME:
    case ROTATE:
    case SCALE:
    case TRANSLATE:
        compile_node_token_graphics_3d(ast);
        break;

    case TYPE_:
        // Already handled in lookahead phase
        break;

    case SWAP_I: {
        var_name = ast->items[0]->string;
        auto var_id1 = find_or_create_variable(VariableScope::NOSCOPE, false);
        var_name = ast->items[1]->string;
        auto var_id2 = find_or_create_variable(VariableScope::NOSCOPE, false);
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I_VAR, var_id2);
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::SWAP_I, var_id1);
        break;
    }
    case SWAP_F: {
        var_name = ast->items[0]->string;
        auto var_id1 = find_or_create_variable(VariableScope::NOSCOPE, false);
        var_name = ast->items[1]->string;
        auto var_id2 = find_or_create_variable(VariableScope::NOSCOPE, false);
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I_VAR, var_id2);
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::SWAP_F, var_id1);
        break;
    }
    case SWAP_S: {
        var_name = ast->items[0]->string;
        auto var_id1 = find_or_create_variable(VariableScope::NOSCOPE, false);
        var_name = ast->items[1]->string;
        auto var_id2 = find_or_create_variable(VariableScope::NOSCOPE, false);
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I_VAR, var_id2);
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::SWAP_S, var_id1);
        break;
    }

    case CHAIN:
        compile_node_token_chain(ast);
        break;
    case EXPECT:
        compile_node_token_expect(ast);
        break;
    case OSCLI:
        compile_node(ast->items[0], true);
        stack_pop();
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::PRINT_S);
        break;
    case TRACEON:
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::TRACEON);
        break;
    case TRACEOFF:
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::TRACEOFF);
        break;
    case BREAKPOINT:
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::BREAKPOINT);
        break;
    case END:
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::HALT);
        break;
    case TIME:
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::TIME);
        stack_push(Type::INTEGER);
        break;
    case TIMES:
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::TIMES);
        stack_push(Type::STRING);
        break;
    case BOOLFALSE:
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, 0);
        stack_push(Type::INTEGER);
        break;
    case BOOLTRUE:
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, 1);
        stack_push(Type::INTEGER);
        break;
    case INT_:
        compile_node(ast->items[0], true);
        if (peek_type() == Type::REAL) {
            g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::F_TO_I);
            stack_pop();
            stack_push(Type::INTEGER);
        }
        break;
    case FLOAT_:
        compile_node(ast->items[0], true);
        if (peek_type() == Type::INTEGER) {
            g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::I_TO_F);
            stack_pop();
            stack_push(Type::REAL);
        }
        break;

    default:
        error("Unknown token: " + std::to_string((int)ast->token));
    }
}

void Compiler::compile_node_token_chain(struct AST* ast)
{
    if (ast->items.size() == 1) {
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, 0);
    } else {
        struct AST* ast_loop = ast->items[1];
        int count = 0;
        do {
            UINT32 var_id;
            if (ast_loop->type == ASTType::LINK) {
                var_name = ast_loop->l->string;
            } else {
                var_name = ast_loop->string;
            }
            var_id = find_or_create_variable(VariableScope::NOSCOPE, true);
            g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I_VAR, var_id);
            ast_loop = ast_loop->r;
            count++;
        } while (ast_loop != NULL);
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, count);
    }
    compile_node(ast->items[0], true);
    stack_pop();
    g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::CHAIN);
}

void Compiler::compile_node_token_expect(struct AST* ast)
{
    struct AST* ast_loop = ast->items[0];
    do {
        UINT32 var_id;
        if (ast_loop->type == ASTType::LINK) {
            var_type = ast_loop->l->var_type;
            var_name = ast_loop->l->string;
        } else {
            var_type = ast_loop->var_type;
            var_name = ast_loop->string;
        }
        var_id = find_or_create_variable(VariableScope::GLOBAL, false);
        ast_loop = ast_loop->r;
    } while (ast_loop != NULL);
}
