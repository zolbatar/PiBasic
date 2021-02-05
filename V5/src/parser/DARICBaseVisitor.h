
// Generated from DARIC.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "DARICVisitor.h"


/**
 * This class provides an empty implementation of DARICVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  DARICBaseVisitor : public DARICVisitor {
public:

  virtual antlrcpp::Any visitProg(DARICParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLine(DARICParser::LineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContent(DARICParser::ContentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBody(DARICParser::BodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLinenumber(DARICParser::LinenumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtDIM(DARICParser::StmtDIMContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtEND(DARICParser::StmtENDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtRETURN(DARICParser::StmtRETURNContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtDEFFN(DARICParser::StmtDEFFNContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtDEFPROC(DARICParser::StmtDEFPROCContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtCallFN(DARICParser::StmtCallFNContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtINPUT(DARICParser::StmtINPUTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtLET(DARICParser::StmtLETContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtLOCAL(DARICParser::StmtLOCALContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtPRINT(DARICParser::StmtPRINTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtCallPROC(DARICParser::StmtCallPROCContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtTRACEON(DARICParser::StmtTRACEONContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtTRACEOFF(DARICParser::StmtTRACEOFFContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtTYPE(DARICParser::StmtTYPEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFnName(DARICParser::FnNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar(DARICParser::VarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeVarType(DARICParser::TypeVarTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumVarFloat(DARICParser::NumVarFloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumVarFloatArray(DARICParser::NumVarFloatArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumVarInteger(DARICParser::NumVarIntegerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumVarIntegerArray(DARICParser::NumVarIntegerArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumVarFloatField(DARICParser::NumVarFloatFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumVarFloatFieldArray(DARICParser::NumVarFloatFieldArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumVarIntegerField(DARICParser::NumVarIntegerFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumVarIntegerFieldArray(DARICParser::NumVarIntegerFieldArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumVarFloatFN(DARICParser::NumVarFloatFNContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumVarIntegerFN(DARICParser::NumVarIntegerFNContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumVarStringFN(DARICParser::NumVarStringFNContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumVarString(DARICParser::NumVarStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumVarStringArray(DARICParser::NumVarStringArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumVarStringField(DARICParser::NumVarStringFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumVarStringFieldArray(DARICParser::NumVarStringFieldArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitJustVar(DARICParser::JustVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarName(DARICParser::VarNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarNameInteger(DARICParser::VarNameIntegerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarNameString(DARICParser::VarNameStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarNameType(DARICParser::VarNameTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDeclInd(DARICParser::VarDeclIndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDeclArrayed(DARICParser::VarDeclArrayedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDeclType(DARICParser::VarDeclTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDeclTypeArrayed(DARICParser::VarDeclTypeArrayedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDeclWithDimension(DARICParser::VarDeclWithDimensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarList(DARICParser::VarListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionVarList(DARICParser::FunctionVarListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionParList(DARICParser::FunctionParListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprList(DARICParser::ExprListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintListExpr(DARICParser::PrintListExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintListSPCP(DARICParser::PrintListSPCPContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintListSPC(DARICParser::PrintListSPCContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintListTick(DARICParser::PrintListTickContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintList(DARICParser::PrintListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(DARICParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(DARICParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumberInteger(DARICParser::NumberIntegerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumberHex(DARICParser::NumberHexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumberBinary(DARICParser::NumberBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumberFloat(DARICParser::NumberFloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStrFuncTIMES(DARICParser::StrFuncTIMESContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStrFuncCHRSP(DARICParser::StrFuncCHRSPContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStrFuncCHRS(DARICParser::StrFuncCHRSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStrFuncLEFTS(DARICParser::StrFuncLEFTSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStrFuncMIDS3(DARICParser::StrFuncMIDS3Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStrFuncMIDS2(DARICParser::StrFuncMIDS2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStrFuncRIGHTS(DARICParser::StrFuncRIGHTSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStrFuncSTRS(DARICParser::StrFuncSTRSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStrFuncSTRSHEX(DARICParser::StrFuncSTRSHEXContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStrFuncSTRINGS(DARICParser::StrFuncSTRINGSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(DARICParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStrExpr(DARICParser::StrExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncPI(DARICParser::NumFuncPIContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncTIME(DARICParser::NumFuncTIMEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncRND(DARICParser::NumFuncRNDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncRND0(DARICParser::NumFuncRND0Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncRND1(DARICParser::NumFuncRND1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncRNDRANGE(DARICParser::NumFuncRNDRANGEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncLN(DARICParser::NumFuncLNContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncLOG(DARICParser::NumFuncLOGContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncEXP(DARICParser::NumFuncEXPContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncATN(DARICParser::NumFuncATNContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncTAN(DARICParser::NumFuncTANContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncCOS(DARICParser::NumFuncCOSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncSIN(DARICParser::NumFuncSINContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncABS(DARICParser::NumFuncABSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncACS(DARICParser::NumFuncACSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncASN(DARICParser::NumFuncASNContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncDEG(DARICParser::NumFuncDEGContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncRAD(DARICParser::NumFuncRADContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncSQR(DARICParser::NumFuncSQRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncSGN(DARICParser::NumFuncSGNContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncASC(DARICParser::NumFuncASCContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncLEN(DARICParser::NumFuncLENContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncINSTR2(DARICParser::NumFuncINSTR2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncINSTR3(DARICParser::NumFuncINSTR3Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumFuncVAL(DARICParser::NumFuncVALContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExprNumber(DARICParser::NumExprNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExprFunc(DARICParser::NumExprFuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExprSubtract(DARICParser::NumExprSubtractContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExprVar(DARICParser::NumExprVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExprEOR(DARICParser::NumExprEORContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExprHat(DARICParser::NumExprHatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExprNumRelop(DARICParser::NumExprNumRelopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExprStrRelop(DARICParser::NumExprStrRelopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExprSHR(DARICParser::NumExprSHRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExprMultiply(DARICParser::NumExprMultiplyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExprMOD(DARICParser::NumExprMODContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExprNOT(DARICParser::NumExprNOTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExprNested(DARICParser::NumExprNestedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExprSHL(DARICParser::NumExprSHLContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExprAND(DARICParser::NumExprANDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExprPlus(DARICParser::NumExprPlusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExprOR(DARICParser::NumExprORContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExprDivide(DARICParser::NumExprDivideContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExprDIV(DARICParser::NumExprDIVContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompareEQ(DARICParser::CompareEQContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompareNE(DARICParser::CompareNEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompareGT(DARICParser::CompareGTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompareGE(DARICParser::CompareGEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompareLT(DARICParser::CompareLTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompareLE(DARICParser::CompareLEContext *ctx) override {
    return visitChildren(ctx);
  }


};

