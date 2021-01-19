#include "compile.h"

void Compiler::compile_node_token_graphics_3d(struct ast *ast, bool expression) {
    switch (ast->token) {
    case Token::CreateVertex: {
        var_name = *ast->l->v_string;
        int var_id = find_or_create_variable(VariableType::NoType, false);
        compile_node(ast->l->l, true); // Index
        stack_pop();
        three_coords_and_colour(ast);
        vm->insert_instruction(line_number, file_number, write, CREATEVERTEX, var_id);
        break;
    }
    case Token::CreateTriangle: {
        var_name = *ast->l->v_string;
        int var_id = find_or_create_variable(VariableType::NoType, false);
        compile_node(ast->l->l, true); // Index
        stack_pop();
        three_vertices_and_colour(ast);
        vm->insert_instruction(line_number, file_number, write, CREATETRIANGLE, var_id);
        break;
    }
    case Token::CreateShape: {
        var_name = *ast->l->v_string;
        int var_id1 = find_or_create_variable(VariableType::NoType, false);
        var_name = *ast->r->v_string;
        vm->insert_instruction(line_number, file_number, write, CONST_I, var_id1);
        int var_id2 = find_or_create_variable(VariableType::NoType, false);
        stack_push(Type::Integer);
        vm->insert_instruction(line_number, file_number, write, CREATESHAPE, var_id2);
        break;
    }
    case Token::CreateObjectSolid:
        vm->insert_instruction(line_number, file_number, write, CONST_I, 0);
        get_ensure_is_integer_pop(ast->l->l);     // Shape ID
        get_ensure_is_float_pop(ast->l->r->l);    // X
        get_ensure_is_float_pop(ast->l->r->r->l); // Y
        get_ensure_is_float_pop(ast->l->r->r->r); // Z
        get_ensure_is_float_pop(ast->r->l->l);    // Rotate X
        get_ensure_is_float_pop(ast->r->l->r->l); // Rotate Y
        get_ensure_is_float_pop(ast->r->l->r->r); // Rotate Z
        get_ensure_is_float_pop(ast->r->r);       // Scale
        stack_push(Type::Integer);
        vm->insert_bytecode(line_number, file_number, write, CREATEOBJECT);
        break;
    case Token::CreateObjectWireframe:
        vm->insert_instruction(line_number, file_number, write, CONST_I, 1);
        get_ensure_is_integer_pop(ast->l->l);     // Shape ID
        get_ensure_is_float_pop(ast->l->r->l);    // X
        get_ensure_is_float_pop(ast->l->r->r->l); // Y
        get_ensure_is_float_pop(ast->l->r->r->r); // Z
        get_ensure_is_float_pop(ast->r->l->l);    // Rotate X
        get_ensure_is_float_pop(ast->r->l->r->l); // Rotate Y
        get_ensure_is_float_pop(ast->r->l->r->r); // Rotate Z
        get_ensure_is_float_pop(ast->r->r);       // Scale
        stack_push(Type::Integer);
        vm->insert_bytecode(line_number, file_number, write, CREATEOBJECT);
        break;
    case Token::CreateObjectEdgedWireframe:
        vm->insert_instruction(line_number, file_number, write, CONST_I, 3);
        get_ensure_is_integer_pop(ast->l->l);     // Shape ID
        get_ensure_is_float_pop(ast->l->r->l);    // X
        get_ensure_is_float_pop(ast->l->r->r->l); // Y
        get_ensure_is_float_pop(ast->l->r->r->r); // Z
        get_ensure_is_float_pop(ast->r->l->l);    // Rotate X
        get_ensure_is_float_pop(ast->r->l->r->l); // Rotate Y
        get_ensure_is_float_pop(ast->r->l->r->r); // Rotate Z
        get_ensure_is_float_pop(ast->r->r);       // Scale
        stack_push(Type::Integer);
        vm->insert_bytecode(line_number, file_number, write, CREATEOBJECT);
        break;
    case Token::CreateObjectShaded:
        vm->insert_instruction(line_number, file_number, write, CONST_I, 2);
        get_ensure_is_integer_pop(ast->l->l);     // Shape ID
        get_ensure_is_float_pop(ast->l->r->l);    // X
        get_ensure_is_float_pop(ast->l->r->r->l); // Y
        get_ensure_is_float_pop(ast->l->r->r->r); // Z
        get_ensure_is_float_pop(ast->r->l->l);    // Rotate X
        get_ensure_is_float_pop(ast->r->l->r->l); // Rotate Y
        get_ensure_is_float_pop(ast->r->l->r->r); // Rotate Z
        get_ensure_is_float_pop(ast->r->r);       // Scale
        stack_push(Type::Integer);
        vm->insert_bytecode(line_number, file_number, write, CREATEOBJECT);
        break;
    case Token::ObjectTranslate:
        get_ensure_is_integer_pop(ast->l->l); // Shape ID
        get_ensure_is_float_pop(ast->l->r);   // X
        get_ensure_is_float_pop(ast->r->l);   // Y
        get_ensure_is_float_pop(ast->r->r);   // Z
        vm->insert_bytecode(line_number, file_number, write, OBJECTTRANSLATE);
        break;
    case Token::ObjectRotate:
        get_ensure_is_integer_pop(ast->l->l); // Shape ID
        get_ensure_is_float_pop(ast->l->r);   // X
        get_ensure_is_float_pop(ast->r->l);   // Y
        get_ensure_is_float_pop(ast->r->r);   // Z
        vm->insert_bytecode(line_number, file_number, write, OBJECTROTATE);
        break;
    case Token::ObjectScale:
        get_ensure_is_integer_pop(ast->l); // Shape ID
        get_ensure_is_float_pop(ast->r);   // Scale
        vm->insert_bytecode(line_number, file_number, write, OBJECTSCALE);
        break;
    case Token::RenderFrame:
        vm->insert_bytecode(line_number, file_number, write, RENDERFRAME);
        break;
    }
}
