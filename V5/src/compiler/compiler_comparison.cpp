#include "compiler.h"

antlrcpp::Any Compiler::visitNumExprNumRelop(DARICParser::NumExprNumRelopContext* context)
{
    visit(context->numExpr(0));
    visit(context->numExpr(1));
    visit(context->compare());
    return NULL;
}

antlrcpp::Any Compiler::visitNumExprStrRelop(DARICParser::NumExprStrRelopContext* context)
{
    visit(context->strExpr(0));
    visit(context->strExpr(1));
    visit(context->compare());
    return NULL;
}

antlrcpp::Any Compiler::visitCompareEQ(DARICParser::CompareEQContext* context)
{
    comparison(Bytecodes::CMP_E_I, Bytecodes::CMP_E_F, Bytecodes::CMP_E_S);
    return NULL;
}

antlrcpp::Any Compiler::visitCompareNE(DARICParser::CompareNEContext* context)
{
    comparison(Bytecodes::CMP_NE_I, Bytecodes::CMP_NE_F, Bytecodes::CMP_NE_S);
    return NULL;
}

antlrcpp::Any Compiler::visitCompareGT(DARICParser::CompareGTContext* context)
{
    comparison(Bytecodes::CMP_G_I, Bytecodes::CMP_G_F, Bytecodes::CMP_G_S);
    return NULL;
}

antlrcpp::Any Compiler::visitCompareGE(DARICParser::CompareGEContext* context)
{
    comparison(Bytecodes::CMP_GE_I, Bytecodes::CMP_GE_F, Bytecodes::CMP_GE_S);
    return NULL;
}

antlrcpp::Any Compiler::visitCompareLT(DARICParser::CompareLTContext* context)
{
    comparison(Bytecodes::CMP_L_I, Bytecodes::CMP_L_F, Bytecodes::CMP_L_S);
    return NULL;
}

antlrcpp::Any Compiler::visitCompareLE(DARICParser::CompareLEContext* context)
{
    comparison(Bytecodes::CMP_LE_I, Bytecodes::CMP_LE_F, Bytecodes::CMP_LE_S);
    return NULL;
}

void Compiler::comparison(Bytecodes i, Bytecodes f, Bytecodes s)
{
    switch (peek_type()) {
    case Type::INTEGER:
        insert_bytecode(i);
        break;
    case Type::REAL:
        insert_bytecode(f);
        break;
    case Type::STRING:
        insert_bytecode(s);
        break;
    default:
        throw std::runtime_error("Unknown type for comparison");
    }
    stack_pop();
    stack_pop();
    stack_push(Type::INTEGER);
}
