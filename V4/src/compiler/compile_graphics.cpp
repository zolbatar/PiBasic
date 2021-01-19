#include "compile.h"

void Compiler::compile_node_token_graphics(struct AST* ast)
{
    switch (ast->token) {
    case CLS:
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::CLS);
        break;
    case COLOUR:
        if (ast->items.size() == 1) {
            get_ensure_is_integer_pop(ast->items[0]);
            vm->insert_bytecode(line_number, file_number, write, Bytecodes::COLOURHEX);
        } else {
            get_ensure_is_integer_pop(ast->items[0]);
            get_ensure_is_integer_pop(ast->items[1]);
            get_ensure_is_integer_pop(ast->items[2]);
            vm->insert_bytecode(line_number, file_number, write, Bytecodes::COLOURRGB);
        }
        break;
    case COLOURBG:
        if (ast->items.size() == 1) {
            get_ensure_is_integer_pop(ast->items[0]);
            vm->insert_bytecode(line_number, file_number, write, Bytecodes::COLOURBGHEX);
        } else {
            get_ensure_is_integer_pop(ast->items[0]);
            get_ensure_is_integer_pop(ast->items[1]);
            get_ensure_is_integer_pop(ast->items[2]);
            vm->insert_bytecode(line_number, file_number, write, Bytecodes::COLOURBGRGB);
        }
        break;
    case COLOUREXP:
        get_ensure_is_integer_pop(ast->items[0]);
        get_ensure_is_integer_pop(ast->items[1]);
        get_ensure_is_integer_pop(ast->items[2]);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::COLOUREXPRESSION);
        stack_push(Type::INTEGER);
        break;
    case LINE:
        four_coords(ast);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::LINE);
        break;
    case RECTANGLE:
        four_coords(ast);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::RECTANGLE);
        break;
    case RECTANGLEFILL:
        four_coords(ast);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::RECTANGLEFILL);
        break;
    case TRIANGLE:
        six_coords(ast);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::TRIANGLE);
        break;
    case TRIANGLEFILL:
        six_coords(ast);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::TRIANGLEFILL);
        break;
    case TRIANGLESHADED:
        six_coords_with_colour(ast);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::TRIANGLESHADED);
        break;
    case CIRCLE:
        three_coords(ast);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::CIRCLE);
        break;
    case CIRCLEFILL:
        three_coords(ast);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::CIRCLEFILL);
        break;
    case FLIP:
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::FLIP);
        break;
    case GRAPHICS:
        if (ast->items.size() == 2) {   
            get_ensure_is_integer_pop(ast->items[0]);
            get_ensure_is_integer_pop(ast->items[1]);
        } else {
            vm->insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, -1);
            vm->insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, -1);
        }
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::GRAPHICS);
        break;
    case PLOT:
        x_and_y(ast);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::PLOT);
        break;
    case POINT_:
        x_and_y(ast);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::POINT);
        stack_push(Type::INTEGER);
        break;
    case CLIPON:
        four_coords(ast);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::CLIP);
        break;
    case CLIPOFF:
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::CLIPOFF);
        break;
    case SHOWFPS:
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::SHOWFPS);
        break;
    case SCREENWIDTH:
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::SCREENWIDTH);
        stack_push(Type::INTEGER);
        break;
    case SCREENHEIGHT:
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::SCREENHEIGHT);
        stack_push(Type::INTEGER);
        break;
    case LOADTYPEFACE:
        get_ensure_is_string_pop(ast->items[0]);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::LOADTYPEFACE);
        stack_push(Type::INTEGER);
        break;
    case CREATEFONT:
        get_ensure_is_integer_pop(ast->items[0]);
        get_ensure_is_integer_pop(ast->items[1]);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::CREATEFONT);
        stack_push(Type::INTEGER);
        break;
    case TEXT:
        get_ensure_is_integer_pop(ast->items[0]);
        get_ensure_is_integer_pop(ast->items[1]);
        get_ensure_is_integer_pop(ast->items[2]);
        get_ensure_is_string_pop(ast->items[3]);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::TEXT);
        break;
    case TEXTRIGHT:
        get_ensure_is_integer_pop(ast->items[0]);
        get_ensure_is_integer_pop(ast->items[1]);
        get_ensure_is_integer_pop(ast->items[2]);
        get_ensure_is_string_pop(ast->items[3]);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::TEXTRIGHT);
        break;
    case TEXTCENTRE:
        get_ensure_is_integer_pop(ast->items[0]);
        get_ensure_is_integer_pop(ast->items[1]);
        get_ensure_is_integer_pop(ast->items[2]);
        get_ensure_is_string_pop(ast->items[3]);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::TEXTCENTRE);
        break;
    default:
        error("GRAPHICS: Unknown token");
    }
}
