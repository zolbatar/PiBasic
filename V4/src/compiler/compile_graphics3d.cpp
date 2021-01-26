#include "compile.h"

void Compiler::compile_node_token_graphics_3d(struct AST* ast)
{
    switch (ast->token) {
    case CREATEVERTEX: {
        var_name = ast->items[0]->string;
        auto var_id = find_or_create_variable(VariableScope::NOSCOPE, false);
        compile_node(ast->items[1], true); // Index
        stack_pop();
        three_coords_and_colour(ast, 2);
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CREATEVERTEX, var_id);
        break;
    }
    case CREATETRIANGLE: {
        var_name = ast->items[0]->string;
        auto var_id = find_or_create_variable(VariableScope::NOSCOPE, false);
        compile_node(ast->items[1], true); // Index
        stack_pop();
        three_vertices_and_colour(ast, 2);
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CREATETRIANGLE, var_id);
        break;
    }
    case CREATESHAPE: {
        var_name = ast->items[0]->string;
        auto var_id1 = find_or_create_variable(VariableScope::NOSCOPE, false);
        var_name = ast->items[1]->string;
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CONST_I_VAR, var_id1);
        auto var_id2 = find_or_create_variable(VariableScope::NOSCOPE, false);
        stack_push(Type::INTEGER);
        g_vm->helper_bytecodes().insert_instruction(line_number, file_number, write, Bytecodes::CREATESHAPE, var_id2);
        break;
    }
    case CREATEOBJECT:
        get_ensure_is_integer_pop(ast->items[0]); // Shape ID
        get_ensure_is_float_pop(ast->items[1]); // X
        get_ensure_is_float_pop(ast->items[2]); // Y
        get_ensure_is_float_pop(ast->items[3]); // Z
        get_ensure_is_float_pop(ast->items[4]); // Rotate X
        get_ensure_is_float_pop(ast->items[5]); // Rotate Y
        get_ensure_is_float_pop(ast->items[6]); // Rotate Z
        get_ensure_is_float_pop(ast->items[7]); // Scale
        get_ensure_is_integer_pop(ast->items[8]); // Type
        stack_push(Type::INTEGER);
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::CREATEOBJECT);
        break;
    case TRANSLATE:
        get_ensure_is_integer_pop(ast->items[0]); // Shape ID
        get_ensure_is_float_pop(ast->items[1]); // X
        get_ensure_is_float_pop(ast->items[2]); // Y
        get_ensure_is_float_pop(ast->items[3]); // Z
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::OBJECTTRANSLATE);
        break;
    case ROTATE:
        get_ensure_is_integer_pop(ast->items[0]); // Shape ID
        get_ensure_is_float_pop(ast->items[1]); // X
        get_ensure_is_float_pop(ast->items[2]); // Y
        get_ensure_is_float_pop(ast->items[3]); // Z
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::OBJECTROTATE);
        break;
    case SCALE:
        get_ensure_is_integer_pop(ast->items[0]); // Shape ID
        get_ensure_is_float_pop(ast->items[1]); // Scale
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::OBJECTSCALE);
        break;
    case DELETEOBJECT:
        get_ensure_is_integer_pop(ast->items[0]); // Object ID
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::DELETEOBJECT);
        break;
    case RENDERFRAME:
        g_vm->helper_bytecodes().insert_bytecode(line_number, file_number, write, Bytecodes::RENDERFRAME);
        break;
    default:
        error("GRAPHICS3D: Unknown token");
    }
}
