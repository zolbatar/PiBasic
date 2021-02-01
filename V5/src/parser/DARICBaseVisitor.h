
// Generated from C:\Users\d_dud\source\repos\PiBasic\V5\Grammar\DARIC.g4 by ANTLR 4.9.1

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

  virtual antlrcpp::Any visitLinenumber(DARICParser::LinenumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtDIM(DARICParser::StmtDIMContext *ctx) override {
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

  virtual antlrcpp::Any visitVar(DARICParser::VarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumVarFloat(DARICParser::NumVarFloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumVarInteger(DARICParser::NumVarIntegerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumVarString(DARICParser::NumVarStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarName(DARICParser::VarNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDeclInd(DARICParser::VarDeclIndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDeclArrayed(DARICParser::VarDeclArrayedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDeclWithDimension(DARICParser::VarDeclWithDimensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarList(DARICParser::VarListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprList(DARICParser::ExprListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintListExpr(DARICParser::PrintListExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintListComma(DARICParser::PrintListCommaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintListSemicolon(DARICParser::PrintListSemicolonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintListTilde(DARICParser::PrintListTildeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintListTick(DARICParser::PrintListTickContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintListSPCP(DARICParser::PrintListSPCPContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintListSPC(DARICParser::PrintListSPCContext *ctx) override {
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

