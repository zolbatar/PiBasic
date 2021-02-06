
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "DARICParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by DARICParser.
 */
class  DARICVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by DARICParser.
   */
    virtual antlrcpp::Any visitProg(DARICParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitLine(DARICParser::LineContext *context) = 0;

    virtual antlrcpp::Any visitContent(DARICParser::ContentContext *context) = 0;

    virtual antlrcpp::Any visitBody(DARICParser::BodyContext *context) = 0;

    virtual antlrcpp::Any visitBodyStar(DARICParser::BodyStarContext *context) = 0;

    virtual antlrcpp::Any visitLinenumber(DARICParser::LinenumberContext *context) = 0;

    virtual antlrcpp::Any visitStmtBREAKPOINT(DARICParser::StmtBREAKPOINTContext *context) = 0;

    virtual antlrcpp::Any visitStmtCHAIN(DARICParser::StmtCHAINContext *context) = 0;

    virtual antlrcpp::Any visitStmtDATA(DARICParser::StmtDATAContext *context) = 0;

    virtual antlrcpp::Any visitStmtDIM(DARICParser::StmtDIMContext *context) = 0;

    virtual antlrcpp::Any visitStmtEND(DARICParser::StmtENDContext *context) = 0;

    virtual antlrcpp::Any visitStmtRETURN(DARICParser::StmtRETURNContext *context) = 0;

    virtual antlrcpp::Any visitStmtDEFFN(DARICParser::StmtDEFFNContext *context) = 0;

    virtual antlrcpp::Any visitStmtDEFPROC(DARICParser::StmtDEFPROCContext *context) = 0;

    virtual antlrcpp::Any visitStmtCallFN(DARICParser::StmtCallFNContext *context) = 0;

    virtual antlrcpp::Any visitStmtIF(DARICParser::StmtIFContext *context) = 0;

    virtual antlrcpp::Any visitStmtIFMultiline(DARICParser::StmtIFMultilineContext *context) = 0;

    virtual antlrcpp::Any visitStmtINPUT(DARICParser::StmtINPUTContext *context) = 0;

    virtual antlrcpp::Any visitStmtLET(DARICParser::StmtLETContext *context) = 0;

    virtual antlrcpp::Any visitStmtLOCAL(DARICParser::StmtLOCALContext *context) = 0;

    virtual antlrcpp::Any visitStmtPRINT(DARICParser::StmtPRINTContext *context) = 0;

    virtual antlrcpp::Any visitStmtCallPROC(DARICParser::StmtCallPROCContext *context) = 0;

    virtual antlrcpp::Any visitStmtREAD(DARICParser::StmtREADContext *context) = 0;

    virtual antlrcpp::Any visitStmtRESTORE(DARICParser::StmtRESTOREContext *context) = 0;

    virtual antlrcpp::Any visitStmtTRACEON(DARICParser::StmtTRACEONContext *context) = 0;

    virtual antlrcpp::Any visitStmtTRACEOFF(DARICParser::StmtTRACEOFFContext *context) = 0;

    virtual antlrcpp::Any visitStmtTYPE(DARICParser::StmtTYPEContext *context) = 0;

    virtual antlrcpp::Any visitStmtREPEAT(DARICParser::StmtREPEATContext *context) = 0;

    virtual antlrcpp::Any visitStmtWHILE(DARICParser::StmtWHILEContext *context) = 0;

    virtual antlrcpp::Any visitFnName(DARICParser::FnNameContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(DARICParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitVar(DARICParser::VarContext *context) = 0;

    virtual antlrcpp::Any visitTypeVarType(DARICParser::TypeVarTypeContext *context) = 0;

    virtual antlrcpp::Any visitNumVarFloat(DARICParser::NumVarFloatContext *context) = 0;

    virtual antlrcpp::Any visitNumVarFloatArray(DARICParser::NumVarFloatArrayContext *context) = 0;

    virtual antlrcpp::Any visitNumVarInteger(DARICParser::NumVarIntegerContext *context) = 0;

    virtual antlrcpp::Any visitNumVarIntegerArray(DARICParser::NumVarIntegerArrayContext *context) = 0;

    virtual antlrcpp::Any visitNumVarFloatField(DARICParser::NumVarFloatFieldContext *context) = 0;

    virtual antlrcpp::Any visitNumVarFloatFieldArray(DARICParser::NumVarFloatFieldArrayContext *context) = 0;

    virtual antlrcpp::Any visitNumVarIntegerField(DARICParser::NumVarIntegerFieldContext *context) = 0;

    virtual antlrcpp::Any visitNumVarIntegerFieldArray(DARICParser::NumVarIntegerFieldArrayContext *context) = 0;

    virtual antlrcpp::Any visitNumVarFloatFN(DARICParser::NumVarFloatFNContext *context) = 0;

    virtual antlrcpp::Any visitNumVarIntegerFN(DARICParser::NumVarIntegerFNContext *context) = 0;

    virtual antlrcpp::Any visitNumVarStringFN(DARICParser::NumVarStringFNContext *context) = 0;

    virtual antlrcpp::Any visitNumVarString(DARICParser::NumVarStringContext *context) = 0;

    virtual antlrcpp::Any visitNumVarStringArray(DARICParser::NumVarStringArrayContext *context) = 0;

    virtual antlrcpp::Any visitNumVarStringField(DARICParser::NumVarStringFieldContext *context) = 0;

    virtual antlrcpp::Any visitNumVarStringFieldArray(DARICParser::NumVarStringFieldArrayContext *context) = 0;

    virtual antlrcpp::Any visitJustVar(DARICParser::JustVarContext *context) = 0;

    virtual antlrcpp::Any visitVarName(DARICParser::VarNameContext *context) = 0;

    virtual antlrcpp::Any visitVarNameInteger(DARICParser::VarNameIntegerContext *context) = 0;

    virtual antlrcpp::Any visitVarNameString(DARICParser::VarNameStringContext *context) = 0;

    virtual antlrcpp::Any visitVarNameType(DARICParser::VarNameTypeContext *context) = 0;

    virtual antlrcpp::Any visitVarDeclInd(DARICParser::VarDeclIndContext *context) = 0;

    virtual antlrcpp::Any visitVarDeclArrayed(DARICParser::VarDeclArrayedContext *context) = 0;

    virtual antlrcpp::Any visitVarDeclType(DARICParser::VarDeclTypeContext *context) = 0;

    virtual antlrcpp::Any visitVarDeclTypeArrayed(DARICParser::VarDeclTypeArrayedContext *context) = 0;

    virtual antlrcpp::Any visitVarDeclWithDimension(DARICParser::VarDeclWithDimensionContext *context) = 0;

    virtual antlrcpp::Any visitVarList(DARICParser::VarListContext *context) = 0;

    virtual antlrcpp::Any visitFunctionVarList(DARICParser::FunctionVarListContext *context) = 0;

    virtual antlrcpp::Any visitFunctionParList(DARICParser::FunctionParListContext *context) = 0;

    virtual antlrcpp::Any visitExprList(DARICParser::ExprListContext *context) = 0;

    virtual antlrcpp::Any visitPrintListExpr(DARICParser::PrintListExprContext *context) = 0;

    virtual antlrcpp::Any visitPrintListSPCP(DARICParser::PrintListSPCPContext *context) = 0;

    virtual antlrcpp::Any visitPrintListSPC(DARICParser::PrintListSPCContext *context) = 0;

    virtual antlrcpp::Any visitPrintListTick(DARICParser::PrintListTickContext *context) = 0;

    virtual antlrcpp::Any visitPrintList(DARICParser::PrintListContext *context) = 0;

    virtual antlrcpp::Any visitExpr(DARICParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitNumber(DARICParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitNumberInteger(DARICParser::NumberIntegerContext *context) = 0;

    virtual antlrcpp::Any visitNumberHex(DARICParser::NumberHexContext *context) = 0;

    virtual antlrcpp::Any visitNumberBinary(DARICParser::NumberBinaryContext *context) = 0;

    virtual antlrcpp::Any visitNumberFloat(DARICParser::NumberFloatContext *context) = 0;

    virtual antlrcpp::Any visitStrFuncTIMES(DARICParser::StrFuncTIMESContext *context) = 0;

    virtual antlrcpp::Any visitStrFuncCHRSP(DARICParser::StrFuncCHRSPContext *context) = 0;

    virtual antlrcpp::Any visitStrFuncCHRS(DARICParser::StrFuncCHRSContext *context) = 0;

    virtual antlrcpp::Any visitStrFuncLEFTS(DARICParser::StrFuncLEFTSContext *context) = 0;

    virtual antlrcpp::Any visitStrFuncMIDS3(DARICParser::StrFuncMIDS3Context *context) = 0;

    virtual antlrcpp::Any visitStrFuncMIDS2(DARICParser::StrFuncMIDS2Context *context) = 0;

    virtual antlrcpp::Any visitStrFuncRIGHTS(DARICParser::StrFuncRIGHTSContext *context) = 0;

    virtual antlrcpp::Any visitStrFuncSTRS(DARICParser::StrFuncSTRSContext *context) = 0;

    virtual antlrcpp::Any visitStrFuncSTRSHEX(DARICParser::StrFuncSTRSHEXContext *context) = 0;

    virtual antlrcpp::Any visitStrFuncSTRINGS(DARICParser::StrFuncSTRINGSContext *context) = 0;

    virtual antlrcpp::Any visitString(DARICParser::StringContext *context) = 0;

    virtual antlrcpp::Any visitStrExpr(DARICParser::StrExprContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncPI(DARICParser::NumFuncPIContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncTIME(DARICParser::NumFuncTIMEContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncRND(DARICParser::NumFuncRNDContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncRND0(DARICParser::NumFuncRND0Context *context) = 0;

    virtual antlrcpp::Any visitNumFuncRND1(DARICParser::NumFuncRND1Context *context) = 0;

    virtual antlrcpp::Any visitNumFuncRNDRANGE(DARICParser::NumFuncRNDRANGEContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncLN(DARICParser::NumFuncLNContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncLOG(DARICParser::NumFuncLOGContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncEXP(DARICParser::NumFuncEXPContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncATN(DARICParser::NumFuncATNContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncTAN(DARICParser::NumFuncTANContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncCOS(DARICParser::NumFuncCOSContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncSIN(DARICParser::NumFuncSINContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncABS(DARICParser::NumFuncABSContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncACS(DARICParser::NumFuncACSContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncASN(DARICParser::NumFuncASNContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncDEG(DARICParser::NumFuncDEGContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncRAD(DARICParser::NumFuncRADContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncSQR(DARICParser::NumFuncSQRContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncSGN(DARICParser::NumFuncSGNContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncASC(DARICParser::NumFuncASCContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncLEN(DARICParser::NumFuncLENContext *context) = 0;

    virtual antlrcpp::Any visitNumFuncINSTR2(DARICParser::NumFuncINSTR2Context *context) = 0;

    virtual antlrcpp::Any visitNumFuncINSTR3(DARICParser::NumFuncINSTR3Context *context) = 0;

    virtual antlrcpp::Any visitNumFuncVAL(DARICParser::NumFuncVALContext *context) = 0;

    virtual antlrcpp::Any visitNumExprNumber(DARICParser::NumExprNumberContext *context) = 0;

    virtual antlrcpp::Any visitNumExprFunc(DARICParser::NumExprFuncContext *context) = 0;

    virtual antlrcpp::Any visitNumExprSubtract(DARICParser::NumExprSubtractContext *context) = 0;

    virtual antlrcpp::Any visitNumExprVar(DARICParser::NumExprVarContext *context) = 0;

    virtual antlrcpp::Any visitNumExprEOR(DARICParser::NumExprEORContext *context) = 0;

    virtual antlrcpp::Any visitNumExprHat(DARICParser::NumExprHatContext *context) = 0;

    virtual antlrcpp::Any visitNumExprNumRelop(DARICParser::NumExprNumRelopContext *context) = 0;

    virtual antlrcpp::Any visitNumExprStrRelop(DARICParser::NumExprStrRelopContext *context) = 0;

    virtual antlrcpp::Any visitNumExprSHR(DARICParser::NumExprSHRContext *context) = 0;

    virtual antlrcpp::Any visitNumExprMultiply(DARICParser::NumExprMultiplyContext *context) = 0;

    virtual antlrcpp::Any visitNumExprMOD(DARICParser::NumExprMODContext *context) = 0;

    virtual antlrcpp::Any visitNumExprNOT(DARICParser::NumExprNOTContext *context) = 0;

    virtual antlrcpp::Any visitNumExprNested(DARICParser::NumExprNestedContext *context) = 0;

    virtual antlrcpp::Any visitNumExprSHL(DARICParser::NumExprSHLContext *context) = 0;

    virtual antlrcpp::Any visitNumExprAND(DARICParser::NumExprANDContext *context) = 0;

    virtual antlrcpp::Any visitNumExprPlus(DARICParser::NumExprPlusContext *context) = 0;

    virtual antlrcpp::Any visitNumExprOR(DARICParser::NumExprORContext *context) = 0;

    virtual antlrcpp::Any visitNumExprDivide(DARICParser::NumExprDivideContext *context) = 0;

    virtual antlrcpp::Any visitNumExprDIV(DARICParser::NumExprDIVContext *context) = 0;

    virtual antlrcpp::Any visitCompareEQ(DARICParser::CompareEQContext *context) = 0;

    virtual antlrcpp::Any visitCompareNE(DARICParser::CompareNEContext *context) = 0;

    virtual antlrcpp::Any visitCompareGT(DARICParser::CompareGTContext *context) = 0;

    virtual antlrcpp::Any visitCompareGE(DARICParser::CompareGEContext *context) = 0;

    virtual antlrcpp::Any visitCompareLT(DARICParser::CompareLTContext *context) = 0;

    virtual antlrcpp::Any visitCompareLE(DARICParser::CompareLEContext *context) = 0;


};

