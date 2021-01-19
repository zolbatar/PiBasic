#include "compile.h"

void Compiler::compile_node_token_graphics(struct ast *ast, bool expression) {
    switch (ast->token) {
    case Token::Cls:
        vm->insert_bytecode(line_number, file_number, write, CLS);
        break;
    case Token::ColourHEX:
        compile_node(ast->l, true);
        ensure_stack_is_integer();
        stack_pop();
        vm->insert_bytecode(line_number, file_number, write, COLOURHEX);
        break;
    case Token::ColourRGB:
        get_ensure_is_integer_pop(ast->l->l);
        get_ensure_is_integer_pop(ast->l->r);
        get_ensure_is_integer_pop(ast->r);
        vm->insert_bytecode(line_number, file_number, write, COLOURRGB);
        break;
    case Token::ColourBgHEX:
        compile_node(ast->l, true);
        ensure_stack_is_integer();
        stack_pop();
        vm->insert_bytecode(line_number, file_number, write, COLOURBGHEX);
        break;
    case Token::ColourBgRGB:
        get_ensure_is_integer_pop(ast->l->l);
        get_ensure_is_integer_pop(ast->l->r);
        get_ensure_is_integer_pop(ast->r);
        vm->insert_bytecode(line_number, file_number, write, COLOURBGRGB);
        break;
    case Token::ColourExpression:
        get_ensure_is_integer_pop(ast->l->l);
        get_ensure_is_integer_pop(ast->l->r);
        get_ensure_is_integer_pop(ast->r);
        stack_push(Type::Integer);
        vm->insert_bytecode(line_number, file_number, write, COLOUREXPRESSION);
        break;
    case Token::Line:
        four_coords(ast);
        vm->insert_bytecode(line_number, file_number, write, LINE);
        break;
    case Token::Rectangle:
        four_coords(ast);
        vm->insert_bytecode(line_number, file_number, write, RECTANGLE);
        break;
    case Token::RectangleFill:
        four_coords(ast);
        vm->insert_bytecode(line_number, file_number, write, RECTANGLEFILL);
        break;
    case Token::Triangle:
        six_coords(ast);
        vm->insert_bytecode(line_number, file_number, write, TRIANGLE);
        break;
    case Token::TriangleFill:
        six_coords(ast);
        vm->insert_bytecode(line_number, file_number, write, TRIANGLEFILL);
        break;
    case Token::TriangleShaded:
        six_coords_with_colour(ast);
        vm->insert_bytecode(line_number, file_number, write, TRIANGLESHADED);
        break;
    case Token::Circle:
        three_coords(ast);
        vm->insert_bytecode(line_number, file_number, write, CIRCLE);
        break;
    case Token::CircleFill:
        three_coords(ast);
        vm->insert_bytecode(line_number, file_number, write, CIRCLEFILL);
        break;
    case Token::Ellipse:
        four_coords(ast);
        vm->insert_bytecode(line_number, file_number, write, ELLIPSE);
        break;
    case Token::EllipseFill:
        four_coords(ast);
        vm->insert_bytecode(line_number, file_number, write, ELLIPSEFILL);
        break;
    case Token::Flip:
        vm->insert_bytecode(line_number, file_number, write, FLIP);
        break;
    case Token::Graphics:
        get_ensure_is_integer_pop(ast->l);
        get_ensure_is_integer_pop(ast->r->l);
        get_ensure_is_integer_pop(ast->r->r);
        vm->insert_bytecode(line_number, file_number, write, GRAPHICS);
        break;
    case Token::Plot:
        x_and_y(ast);
        vm->insert_bytecode(line_number, file_number, write, PLOT);
        break;
    case Token::Clip:
        four_coords(ast);
        vm->insert_bytecode(line_number, file_number, write, CLIP);
        break;
    case Token::ClipOff:
        vm->insert_bytecode(line_number, file_number, write, CLIPOFF);
        break;
    case Token::ScreenWidth:
        vm->insert_bytecode(line_number, file_number, write, SCREENWIDTH);
        stack_push(Type::Integer);
        break;
    case Token::ScreenHeight:
        vm->insert_bytecode(line_number, file_number, write, SCREENHEIGHT);
        stack_push(Type::Integer);
        break;
    case Token::LoadTypeface:
        get_ensure_is_string_pop(ast->l);
        vm->insert_bytecode(line_number, file_number, write, LOADTYPEFACE);
        stack_push(Type::Integer);
        break;
    case Token::CreateFont:
        get_ensure_is_integer_pop(ast->l);
        get_ensure_is_integer_pop(ast->r);
        vm->insert_bytecode(line_number, file_number, write, CREATEFONT);
        stack_push(Type::Integer);
        break;
    case Token::Text:
        get_ensure_is_integer_pop(ast->l->l);
        get_ensure_is_integer_pop(ast->l->r);
        get_ensure_is_integer_pop(ast->r->l);
        get_ensure_is_string_pop(ast->r->r);
        vm->insert_bytecode(line_number, file_number, write, TEXT);
        break;
    case Token::TextRight:
        get_ensure_is_integer_pop(ast->l->l);
        get_ensure_is_integer_pop(ast->l->r);
        get_ensure_is_integer_pop(ast->r->l);
        get_ensure_is_string_pop(ast->r->r);
        vm->insert_bytecode(line_number, file_number, write, TEXTRIGHT);
        break;
    case Token::TextCentre:
        get_ensure_is_integer_pop(ast->l->l);
        get_ensure_is_integer_pop(ast->l->r);
        get_ensure_is_integer_pop(ast->r->l);
        get_ensure_is_string_pop(ast->r->r);
        vm->insert_bytecode(line_number, file_number, write, TEXTCENTRE);
        break;
    }
}
