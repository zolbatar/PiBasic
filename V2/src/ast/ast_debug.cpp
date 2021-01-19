#include <stdlib.h>
#include <iomanip>
#include <iostream>

#include "ast.h"

void debug_element(struct ast *ast, int level, std::ostream *file) {
    if (ast == NULL) {
        return;
    }
    std::string spaces = "";
    for (int i = 0; i < level * 2; i++) {
        spaces.push_back(' ');
    }
    level++;
    switch (ast->type) {
    case NodeType::Link:
        if (ast->l != NULL)
            debug_element(ast->l, level, file);
        if (ast->r != NULL)
            debug_element(ast->r, level, file);
        break;
    case NodeType::Token:
        *file << std::setw(4) << level << ":  ";
        *file << spaces << "Token (";
        switch (ast->token) {
        case Token::End:
            *file << "End)" << std::endl;
            break;
        case Token::Global:
            *file << "Global or Unspecified)" << std::endl;
            break;
        case Token::Local:
            *file << "Local)" << std::endl;
            break;
        case Token::Print:
            *file << "Print)" << std::endl;
            break;
        case Token::PrintN:
            *file << "PrintN)" << std::endl;
            break;
        case Token::PrintComma:
            *file << "Print ,)" << std::endl;
            break;
        case Token::PrintSemiColon:
            *file << "Print ;)" << std::endl;
            break;
        case Token::PrintHex:
            *file << "Print HEX)" << std::endl;
            break;
        case Token::PrintSpc:
            *file << "Print SPC)" << std::endl;
            break;
        case Token::PrintNewLine:
            *file << "Print Newline)" << std::endl;
            break;
        case Token::Data:
            *file << "Data)" << std::endl;
            break;
        case Token::Dim:
            *file << "Dim)" << std::endl;
            break;
        case Token::LocalDim:
            *file << "Local Dim)" << std::endl;
            break;
        case Token::For:
            *file << "For)" << std::endl;
            break;
        case Token::ForStep:
            *file << "For Step)" << std::endl;
            break;
        case Token::Oscli:
            *file << "Oscli)" << std::endl;
            break;
        case Token::If:
            *file << "If)" << std::endl;    
            break;
        case Token::Read:
            *file << "Read)" << std::endl;
            break;
        case Token::TraceOn:
            *file << "Trace On)" << std::endl;
            break;
        case Token::TraceOff:
            *file << "Trace Off)" << std::endl;
            break;
        case Token::Repeat:
            *file << "Repeat)" << std::endl;
            break;
        case Token::Until:
            *file << "Until)" << std::endl;
            break;
        case Token::Goto:
            *file << "Goto)" << std::endl;
            break;
        case Token::Gosub:
            *file << "Gosub)" << std::endl;
            break;
        case Token::While:
            *file << "While)" << std::endl;
            break;
        case Token::Time:
            *file << "Time)" << std::endl;
            break;
        case Token::Times:
            *file << "Time$)" << std::endl;
            break;

        case Token::Close:
            *file << "Close)" << std::endl;
            break;
        case Token::OpenIn:
            *file << "OpenIn)" << std::endl;
            break;
        case Token::OpenUp:
            *file << "OpenUp)" << std::endl;
            break;
        case Token::OpenOut:
            *file << "OpenOut)" << std::endl;
            break;
        case Token::BGet:
            *file << "BGet#)" << std::endl;
            break;
        case Token::BPut:
            *file << "BPut#)" << std::endl;
            break;
        case Token::Eof:
            *file << "Eof#)" << std::endl;
            break;

        case Token::Type:
            *file << "Type)" << std::endl;
            break;
        case Token::EndType:
            *file << "End Type)" << std::endl;
            break;
        case Token::Field:
            *file << "Field)" << std::endl;
            break;

        case Token::False:
            *file << "False)" << std::endl;
            break;
        case Token::True:
            *file << "True)" << std::endl;
            break;
        case Token::Int:
            *file << "Int)" << std::endl;
            break;

        case Token::Sqr:
            *file << "Sqr)" << std::endl;
            break;
        case Token::Ln:
            *file << "Ln)" << std::endl;
            break;
        case Token::Log:
            *file << "Log)" << std::endl;
            break;
        case Token::Exp:
            *file << "Exp)" << std::endl;
            break;
        case Token::Atn:
            *file << "Atn)" << std::endl;
            break;
        case Token::Tan:
            *file << "Tan)" << std::endl;
            break;
        case Token::Cos:
            *file << "Cos)" << std::endl;
            break;
        case Token::Sin:
            *file << "Sin)" << std::endl;
            break;
        case Token::Abs:
            *file << "Abs)" << std::endl;
            break;
        case Token::Acs:
            *file << "Acs)" << std::endl;
            break;
        case Token::Asn:
            *file << "Asn)" << std::endl;
            break;
        case Token::Deg:
            *file << "Deg)" << std::endl;
            break;
        case Token::Rad:
            *file << "Rad)" << std::endl;
            break;
        case Token::Sgn:
            *file << "Sgn)" << std::endl;
            break;
        case Token::Pi:
            *file << "PI)" << std::endl;
            break;

        case Token::Asc:
            *file << "Asc)" << std::endl;
            break;
        case Token::Chrs:
            *file << "Chr$)" << std::endl;
            break;
        case Token::Instr:
            *file << "Instr)" << std::endl;
            break;
        case Token::Lefts:
            *file << "Left$)" << std::endl;
            break;
        case Token::Mids:
            *file << "Mid$)" << std::endl;
            break;
        case Token::Rights:
            *file << "Right$)" << std::endl;
            break;
        case Token::Len:
            *file << "Len)" << std::endl;
            break;
        case Token::Val:
            *file << "Val)" << std::endl;
            break;
        case Token::Strs:
            *file << "Str$)" << std::endl;
            break;
        case Token::StrsHex:
            *file << "Str$ Hex)" << std::endl;
            break;
        case Token::Strings:
            *file << "String$)" << std::endl;
            break;

        case Token::Float:
            *file << "Float)" << std::endl;
            break;
        case Token::Rnd:
            *file << "Rnd)" << std::endl;
            break;
        case Token::RndRange:
            *file << "Rnd with range)" << std::endl;
            break;
        case Token::Not:
            *file << "Not)" << std::endl;
            break;

        case Token::Cls:
            *file << "Cls)" << std::endl;
            break;
        case Token::ColourRGB:
            *file << "Colour RGB)" << std::endl;
            break;
        case Token::ColourHEX:
            *file << "Colour HEX)" << std::endl;
            break;
        case Token::ColourBgRGB:
            *file << "ColourB RGB)" << std::endl;
            break;
        case Token::ColourBgHEX:
            *file << "ColourB HEX)" << std::endl;
            break;
        case Token::ColourExpression:
            *file << "Colour Expression)" << std::endl;
            break;
        case Token::Flip:
            *file << "Flip)" << std::endl;
            break;
        case Token::Graphics:
            *file << "Graphics)" << std::endl;
            break;
        case Token::Plot:
            *file << "Plot)" << std::endl;
            break;
        case Token::Line:
            *file << "Line)" << std::endl;
            break;
        case Token::Rectangle:
            *file << "Rectangle)" << std::endl;
            break;
        case Token::RectangleFill:
            *file << "Rectangle Fill)" << std::endl;
            break;
        case Token::Circle:
            *file << "Circle)" << std::endl;
            break;
        case Token::CircleFill:
            *file << "Circle Fill)" << std::endl;
            break;
        case Token::Ellipse:
            *file << "Ellipse)" << std::endl;
            break;
        case Token::EllipseFill:
            *file << "Ellipse Fill)" << std::endl;
            break;
        case Token::Triangle:
            *file << "Triangle)" << std::endl;
            break;
        case Token::TriangleFill:
            *file << "Triangle Fill)" << std::endl;
            break;
        case Token::TriangleShaded:
            *file << "Triangle Shaded)" << std::endl;
            break;
        case Token::Clip:
            *file << "Clip)" << std::endl;
            break;
        case Token::ClipOff:
            *file << "Clip Off)" << std::endl;
            break;
        case Token::ScreenWidth:
            *file << "Screen Width)" << std::endl;
            break;
        case Token::ScreenHeight:
            *file << "Screen Height)" << std::endl;
            break;
        case Token::LoadTypeface:
            *file << "Load Typeface)" << std::endl;
            break;
        case Token::CreateFont:
            *file << "Create Font)" << std::endl;
            break;
        case Token::Text:
            *file << "Text)" << std::endl;
            break;
        case Token::TextRight:
            *file << "Text Right)" << std::endl;
            break;
        case Token::TextCentre:
            *file << "Text Centre)" << std::endl;
            break;
        case Token::FunctionCall:
            *file << "Function Call)" << std::endl;
            break;
        case Token::FunctionCallExpression:
            *file << "Function Call - Expression)" << std::endl;
            break;
        case Token::Return:
            *file << "Return)" << std::endl;
            break;
        case Token::ReturnValue:
            *file << "Return Value)" << std::endl;
            break;
        case Token::ReturnVariable:
            *file << "Return Variable)" << std::endl;
            break;
        case Token::Restore:
            *file << "Restore)" << std::endl;
            break;
        case Token::Case:
            *file << "Case)" << std::endl;
            break;
        case Token::When:
            *file << "When)" << std::endl;
            break;
        case Token::Of:
            *file << "Of)" << std::endl;
            break;
        case Token::Otherwise:
            *file << "Otherwise)" << std::endl;
            break;

        case Token::CreateVertex:
            *file << "3D Create Vertex)" << std::endl;
            break;
        case Token::CreateTriangle:
            *file << "3D Create Triangle)" << std::endl;
            break;
        case Token::CreateShape:
            *file << "3D Create Shape)" << std::endl;
            break;
        case Token::CreateObjectSolid:
            *file << "3D Create Solid Object)" << std::endl;
            break;
        case Token::CreateObjectShaded:
            *file << "3D Create Shaded Object)" << std::endl;
            break;
        case Token::CreateObjectWireframe:
            *file << "3D Create Wireframe Object)" << std::endl;
            break;
        case Token::CreateObjectEdgedWireframe:
            *file << "3D Create Edged Wireframe Object)" << std::endl;
            break;
        case Token::ObjectTranslate:
            *file << "3D Object Translate)" << std::endl;
            break;
        case Token::ObjectRotate:
            *file << "3D Object Rotate)" << std::endl;
            break;
        case Token::ObjectScale:
            *file << "3D Object Scale)" << std::endl;
            break;
        case Token::RenderFrame:
            *file << "3D RenderFrame)" << std::endl;
            break;
        case Token::Inkey:
            *file << "Inkey)" << std::endl;
            break;
        case Token::Inkeys:
            *file << "Inkey$)" << std::endl;
            break;
        case Token::SInkey:
            *file << "Statement Inkey)" << std::endl;
            break;
        case Token::SInkeys:
            *file << "Statement Inkey$)" << std::endl;
            break;
        case Token::Input:
            *file << "Input)" << std::endl;
            break;
        case Token::InputNoQuestionMark:
            *file << "Input - No Question Mark)" << std::endl;
            break;
        default:
            *file << "Unknown token: " << (int)ast->token << std::endl;
            exit(1);
        }
        if (ast->l != NULL)
            debug_element(ast->l, level, file);
        if (ast->r != NULL)
            debug_element(ast->r, level, file);
        break;
    case NodeType::Assignment:
        *file << std::setw(4) << level << ":  ";
        *file << spaces << "Assignment: " << std::endl;
        if (ast->l != NULL)
            debug_element(ast->l, level, file);
        if (ast->r != NULL)
            debug_element(ast->r, level, file);
        break;
    case NodeType::Variable:
        *file << std::setw(4) << level << ":  ";
        *file << spaces << "Variable: " << *ast->v_string;
        switch (ast->var_type) {
        case Type::None:
            *file << " (None)" << std::endl;
            break;
        case Type::Type:
            *file << " (Type)" << std::endl;
            break;
        case Type::Integer:
            *file << " (Integer)" << std::endl;
            break;
        case Type::Float:
            *file << " (Float)" << std::endl;
            break;
        case Type::String:
            *file << " (String)" << std::endl;
            break;
        case Type::IntegerArray:
            *file << " (Integer Array)" << std::endl;
            break;
        case Type::FloatArray:
            *file << " (Float Array)" << std::endl;
            break;
        case Type::StringArray:
            *file << " (String Array)" << std::endl;
            break;
        }
        if (ast->l != NULL)
            debug_element(ast->l, level, file);
        if (ast->r != NULL)
            debug_element(ast->r, level, file);
        break;
    case NodeType::VariableWithIndex:
        *file << std::setw(4) << level << ":  ";
        *file << spaces << "Variable (with index): " << *ast->v_string;
        switch (ast->var_type) {
        case Type::None:
            *file << " (None)" << std::endl;
            break;
        case Type::Integer:
            *file << " (Integer)" << std::endl;
            break;
        case Type::Float:
            *file << " (Float)" << std::endl;
            break;
        case Type::String:
            *file << " (String)" << std::endl;
            break;
        case Type::IntegerArray:
            *file << " (Integer Array)" << std::endl;
            break;
        case Type::FloatArray:
            *file << " (Float Array)" << std::endl;
            break;
        case Type::StringArray:
            *file << " (String Array)" << std::endl;
            break;
        case Type::TypeArray:
            *file << " (Type Array)" << std::endl;
            break;
        default:
            std::cout << "Unknown\n";
            exit(1);
        }
        if (ast->l != NULL)
            debug_element(ast->l, level, file);
        if (ast->r != NULL)
            debug_element(ast->r, level, file);
        break;
    case NodeType::Function:
        *file << std::setw(4) << level << ":  ";
        *file << spaces << "Function ";
        switch (ast->var_type) {
        case Type::None:
            *file << " (No return)" << std::endl;
            break;
        case Type::Integer:
            *file << " (Integer return)" << std::endl;
            break;
        case Type::Float:
            *file << " (Float return)" << std::endl;
            break;
        case Type::String:
            *file << " (String return)" << std::endl;
            break;
        }
        if (ast->l != NULL)
            debug_element(ast->l, level, file);
        if (ast->r != NULL)
            debug_element(ast->r, level, file);
        break;
    case NodeType::Expression:
        *file << std::setw(4) << level << ":  ";
        *file << spaces << "Expression: " << std::endl;
        if (ast->l != NULL)
            debug_element(ast->l, level, file);
        if (ast->r != NULL)
            debug_element(ast->r, level, file);
        *file << std::setw(4) << level << ":  ";
        switch (ast->oper) {
        case Operator::None:
            *file << spaces << "  NONE" << std::endl;
            break;
        case Operator::Plus:
            *file << spaces << "  +" << std::endl;
            break;
        case Operator::Subtract:
            *file << spaces << "  -" << std::endl;
            break;
        case Operator::Multiply:
            *file << spaces << "  *" << std::endl;
            break;
        case Operator::Divide:
            *file << spaces << "  /" << std::endl;
            break;
        case Operator::IntegerDivide:
            *file << spaces << "  //" << std::endl;
            break;
        case Operator::Mod:
            *file << spaces << "  Modulo" << std::endl;
            break;
        case Operator::Div:
            *file << spaces << "  Quotient" << std::endl;
            break;
        case Operator::ShiftLeft:
            *file << spaces << "  << (Shift left)" << std::endl;
            break;
        case Operator::ShiftRight:
            *file << spaces << "  >> (Shift right)" << std::endl;
            break;

        case Operator::Equal:
            *file << spaces << "  =" << std::endl;
            break;
        case Operator::NotEqual:
            *file << spaces << "  <>" << std::endl;
            break;
        case Operator::GreaterEqual:
            *file << spaces << "  >=" << std::endl;
            break;
        case Operator::LessEqual:
            *file << spaces << "  <=" << std::endl;
            break;
        case Operator::Greater:
            *file << spaces << "  >" << std::endl;
            break;
        case Operator::Less:
            *file << spaces << "  <" << std::endl;
            break;

        case Operator::Or:
            *file << spaces << "  Or" << std::endl;
            break;
        case Operator::And:
            *file << spaces << "  And" << std::endl;
            break;
        case Operator::Eor:
            *file << spaces << "  Eor" << std::endl;
            break;

        default:
            *file << "Unknown operator\n";
            exit(1);
        }
        break;
    case NodeType::Integer:
        *file << std::setw(4) << level << ":  ";
        *file << spaces << "Integer: " << ast->v_int << std::endl;
        break;
    case NodeType::Float:
        *file << std::setw(4) << level << ":  ";
        *file << spaces << "Float: " << ast->v_float << std::endl;
        break;
    case NodeType::String:
        *file << std::setw(4) << level << ":  ";
        *file << spaces << "String: '" << *ast->v_string << "'" << std::endl;
        break;
    case NodeType::LineNumber:
        *file << std::setw(4) << level << ":  ";
        *file << spaces << "Line Number: " << ast->v_int << std::endl;
        break;
    case NodeType::Type:
        *file << std::setw(4) << level << ":  ";
        *file << spaces << "Type: '" << *ast->v_string << "'" << std::endl;
        if (ast->l != NULL)
            debug_element(ast->l, level, file);
        if (ast->r != NULL)
            debug_element(ast->r, level, file);
        break;
    default:
        *file << "Unknown type: " << int(ast->type) << std::endl;
        exit(1);
    }
}

void debug_ast(struct ast *ast, std::ostream *file) {
    *file << "AST Debug Output" << std::endl;
    *file << "----------------" << std::endl;
    debug_element(ast, 0, file);
    *file << std::endl << std::endl;
}