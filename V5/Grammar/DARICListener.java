// Generated from DARIC.g4 by ANTLR 4.9.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link DARICParser}.
 */
public interface DARICListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link DARICParser#prog}.
	 * @param ctx the parse tree
	 */
	void enterProg(DARICParser.ProgContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#prog}.
	 * @param ctx the parse tree
	 */
	void exitProg(DARICParser.ProgContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#line}.
	 * @param ctx the parse tree
	 */
	void enterLine(DARICParser.LineContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#line}.
	 * @param ctx the parse tree
	 */
	void exitLine(DARICParser.LineContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#content}.
	 * @param ctx the parse tree
	 */
	void enterContent(DARICParser.ContentContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#content}.
	 * @param ctx the parse tree
	 */
	void exitContent(DARICParser.ContentContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#body}.
	 * @param ctx the parse tree
	 */
	void enterBody(DARICParser.BodyContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#body}.
	 * @param ctx the parse tree
	 */
	void exitBody(DARICParser.BodyContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#bodyStar}.
	 * @param ctx the parse tree
	 */
	void enterBodyStar(DARICParser.BodyStarContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#bodyStar}.
	 * @param ctx the parse tree
	 */
	void exitBodyStar(DARICParser.BodyStarContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#linenumber}.
	 * @param ctx the parse tree
	 */
	void enterLinenumber(DARICParser.LinenumberContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#linenumber}.
	 * @param ctx the parse tree
	 */
	void exitLinenumber(DARICParser.LinenumberContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtBREAKPOINT}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtBREAKPOINT(DARICParser.StmtBREAKPOINTContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtBREAKPOINT}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtBREAKPOINT(DARICParser.StmtBREAKPOINTContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtCASE}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtCASE(DARICParser.StmtCASEContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtCASE}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtCASE(DARICParser.StmtCASEContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtCHAIN}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtCHAIN(DARICParser.StmtCHAINContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtCHAIN}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtCHAIN(DARICParser.StmtCHAINContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtDATA}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtDATA(DARICParser.StmtDATAContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtDATA}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtDATA(DARICParser.StmtDATAContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtDIM}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtDIM(DARICParser.StmtDIMContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtDIM}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtDIM(DARICParser.StmtDIMContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtEND}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtEND(DARICParser.StmtENDContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtEND}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtEND(DARICParser.StmtENDContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtRETURN}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtRETURN(DARICParser.StmtRETURNContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtRETURN}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtRETURN(DARICParser.StmtRETURNContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtDEFFN}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtDEFFN(DARICParser.StmtDEFFNContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtDEFFN}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtDEFFN(DARICParser.StmtDEFFNContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtDEFPROC}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtDEFPROC(DARICParser.StmtDEFPROCContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtDEFPROC}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtDEFPROC(DARICParser.StmtDEFPROCContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtFOR}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtFOR(DARICParser.StmtFORContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtFOR}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtFOR(DARICParser.StmtFORContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtCallFN}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtCallFN(DARICParser.StmtCallFNContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtCallFN}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtCallFN(DARICParser.StmtCallFNContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtIF}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtIF(DARICParser.StmtIFContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtIF}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtIF(DARICParser.StmtIFContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtIFMultiline}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtIFMultiline(DARICParser.StmtIFMultilineContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtIFMultiline}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtIFMultiline(DARICParser.StmtIFMultilineContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtINPUT}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtINPUT(DARICParser.StmtINPUTContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtINPUT}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtINPUT(DARICParser.StmtINPUTContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtLET}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtLET(DARICParser.StmtLETContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtLET}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtLET(DARICParser.StmtLETContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtLOCAL}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtLOCAL(DARICParser.StmtLOCALContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtLOCAL}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtLOCAL(DARICParser.StmtLOCALContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtLOCALDIM}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtLOCALDIM(DARICParser.StmtLOCALDIMContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtLOCALDIM}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtLOCALDIM(DARICParser.StmtLOCALDIMContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtPRINT}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtPRINT(DARICParser.StmtPRINTContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtPRINT}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtPRINT(DARICParser.StmtPRINTContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtCallPROC}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtCallPROC(DARICParser.StmtCallPROCContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtCallPROC}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtCallPROC(DARICParser.StmtCallPROCContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtREAD}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtREAD(DARICParser.StmtREADContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtREAD}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtREAD(DARICParser.StmtREADContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtRESTORE}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtRESTORE(DARICParser.StmtRESTOREContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtRESTORE}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtRESTORE(DARICParser.StmtRESTOREContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtTRACEON}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtTRACEON(DARICParser.StmtTRACEONContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtTRACEON}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtTRACEON(DARICParser.StmtTRACEONContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtTRACEOFF}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtTRACEOFF(DARICParser.StmtTRACEOFFContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtTRACEOFF}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtTRACEOFF(DARICParser.StmtTRACEOFFContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtTYPE}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtTYPE(DARICParser.StmtTYPEContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtTYPE}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtTYPE(DARICParser.StmtTYPEContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtREPEAT}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtREPEAT(DARICParser.StmtREPEATContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtREPEAT}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtREPEAT(DARICParser.StmtREPEATContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtWHILE}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void enterStmtWHILE(DARICParser.StmtWHILEContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtWHILE}
	 * labeled alternative in {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 */
	void exitStmtWHILE(DARICParser.StmtWHILEContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#when}.
	 * @param ctx the parse tree
	 */
	void enterWhen(DARICParser.WhenContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#when}.
	 * @param ctx the parse tree
	 */
	void exitWhen(DARICParser.WhenContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#fnName}.
	 * @param ctx the parse tree
	 */
	void enterFnName(DARICParser.FnNameContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#fnName}.
	 * @param ctx the parse tree
	 */
	void exitFnName(DARICParser.FnNameContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#literal}.
	 * @param ctx the parse tree
	 */
	void enterLiteral(DARICParser.LiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#literal}.
	 * @param ctx the parse tree
	 */
	void exitLiteral(DARICParser.LiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#var}.
	 * @param ctx the parse tree
	 */
	void enterVar(DARICParser.VarContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#var}.
	 * @param ctx the parse tree
	 */
	void exitVar(DARICParser.VarContext ctx);
	/**
	 * Enter a parse tree produced by the {@code typeVarType}
	 * labeled alternative in {@link DARICParser#typeVar}.
	 * @param ctx the parse tree
	 */
	void enterTypeVarType(DARICParser.TypeVarTypeContext ctx);
	/**
	 * Exit a parse tree produced by the {@code typeVarType}
	 * labeled alternative in {@link DARICParser#typeVar}.
	 * @param ctx the parse tree
	 */
	void exitTypeVarType(DARICParser.TypeVarTypeContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numVarFloat}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void enterNumVarFloat(DARICParser.NumVarFloatContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numVarFloat}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void exitNumVarFloat(DARICParser.NumVarFloatContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numVarFloatArray}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void enterNumVarFloatArray(DARICParser.NumVarFloatArrayContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numVarFloatArray}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void exitNumVarFloatArray(DARICParser.NumVarFloatArrayContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numVarInteger}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void enterNumVarInteger(DARICParser.NumVarIntegerContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numVarInteger}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void exitNumVarInteger(DARICParser.NumVarIntegerContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numVarIntegerArray}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void enterNumVarIntegerArray(DARICParser.NumVarIntegerArrayContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numVarIntegerArray}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void exitNumVarIntegerArray(DARICParser.NumVarIntegerArrayContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numVarFloatField}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void enterNumVarFloatField(DARICParser.NumVarFloatFieldContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numVarFloatField}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void exitNumVarFloatField(DARICParser.NumVarFloatFieldContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numVarFloatFieldArray}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void enterNumVarFloatFieldArray(DARICParser.NumVarFloatFieldArrayContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numVarFloatFieldArray}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void exitNumVarFloatFieldArray(DARICParser.NumVarFloatFieldArrayContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numVarIntegerField}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void enterNumVarIntegerField(DARICParser.NumVarIntegerFieldContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numVarIntegerField}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void exitNumVarIntegerField(DARICParser.NumVarIntegerFieldContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numVarIntegerFieldArray}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void enterNumVarIntegerFieldArray(DARICParser.NumVarIntegerFieldArrayContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numVarIntegerFieldArray}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void exitNumVarIntegerFieldArray(DARICParser.NumVarIntegerFieldArrayContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numVarFloatFN}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void enterNumVarFloatFN(DARICParser.NumVarFloatFNContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numVarFloatFN}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void exitNumVarFloatFN(DARICParser.NumVarFloatFNContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numVarIntegerFN}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void enterNumVarIntegerFN(DARICParser.NumVarIntegerFNContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numVarIntegerFN}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void exitNumVarIntegerFN(DARICParser.NumVarIntegerFNContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numVarStringFN}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void enterNumVarStringFN(DARICParser.NumVarStringFNContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numVarStringFN}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 */
	void exitNumVarStringFN(DARICParser.NumVarStringFNContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numVarString}
	 * labeled alternative in {@link DARICParser#strVar}.
	 * @param ctx the parse tree
	 */
	void enterNumVarString(DARICParser.NumVarStringContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numVarString}
	 * labeled alternative in {@link DARICParser#strVar}.
	 * @param ctx the parse tree
	 */
	void exitNumVarString(DARICParser.NumVarStringContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numVarStringArray}
	 * labeled alternative in {@link DARICParser#strVar}.
	 * @param ctx the parse tree
	 */
	void enterNumVarStringArray(DARICParser.NumVarStringArrayContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numVarStringArray}
	 * labeled alternative in {@link DARICParser#strVar}.
	 * @param ctx the parse tree
	 */
	void exitNumVarStringArray(DARICParser.NumVarStringArrayContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numVarStringField}
	 * labeled alternative in {@link DARICParser#strVar}.
	 * @param ctx the parse tree
	 */
	void enterNumVarStringField(DARICParser.NumVarStringFieldContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numVarStringField}
	 * labeled alternative in {@link DARICParser#strVar}.
	 * @param ctx the parse tree
	 */
	void exitNumVarStringField(DARICParser.NumVarStringFieldContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numVarStringFieldArray}
	 * labeled alternative in {@link DARICParser#strVar}.
	 * @param ctx the parse tree
	 */
	void enterNumVarStringFieldArray(DARICParser.NumVarStringFieldArrayContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numVarStringFieldArray}
	 * labeled alternative in {@link DARICParser#strVar}.
	 * @param ctx the parse tree
	 */
	void exitNumVarStringFieldArray(DARICParser.NumVarStringFieldArrayContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#justVar}.
	 * @param ctx the parse tree
	 */
	void enterJustVar(DARICParser.JustVarContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#justVar}.
	 * @param ctx the parse tree
	 */
	void exitJustVar(DARICParser.JustVarContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#justNumberVar}.
	 * @param ctx the parse tree
	 */
	void enterJustNumberVar(DARICParser.JustNumberVarContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#justNumberVar}.
	 * @param ctx the parse tree
	 */
	void exitJustNumberVar(DARICParser.JustNumberVarContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#varName}.
	 * @param ctx the parse tree
	 */
	void enterVarName(DARICParser.VarNameContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#varName}.
	 * @param ctx the parse tree
	 */
	void exitVarName(DARICParser.VarNameContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#varNameInteger}.
	 * @param ctx the parse tree
	 */
	void enterVarNameInteger(DARICParser.VarNameIntegerContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#varNameInteger}.
	 * @param ctx the parse tree
	 */
	void exitVarNameInteger(DARICParser.VarNameIntegerContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#varNameString}.
	 * @param ctx the parse tree
	 */
	void enterVarNameString(DARICParser.VarNameStringContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#varNameString}.
	 * @param ctx the parse tree
	 */
	void exitVarNameString(DARICParser.VarNameStringContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#varNameType}.
	 * @param ctx the parse tree
	 */
	void enterVarNameType(DARICParser.VarNameTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#varNameType}.
	 * @param ctx the parse tree
	 */
	void exitVarNameType(DARICParser.VarNameTypeContext ctx);
	/**
	 * Enter a parse tree produced by the {@code varDeclInd}
	 * labeled alternative in {@link DARICParser#varDecl}.
	 * @param ctx the parse tree
	 */
	void enterVarDeclInd(DARICParser.VarDeclIndContext ctx);
	/**
	 * Exit a parse tree produced by the {@code varDeclInd}
	 * labeled alternative in {@link DARICParser#varDecl}.
	 * @param ctx the parse tree
	 */
	void exitVarDeclInd(DARICParser.VarDeclIndContext ctx);
	/**
	 * Enter a parse tree produced by the {@code varDeclArrayed}
	 * labeled alternative in {@link DARICParser#varDecl}.
	 * @param ctx the parse tree
	 */
	void enterVarDeclArrayed(DARICParser.VarDeclArrayedContext ctx);
	/**
	 * Exit a parse tree produced by the {@code varDeclArrayed}
	 * labeled alternative in {@link DARICParser#varDecl}.
	 * @param ctx the parse tree
	 */
	void exitVarDeclArrayed(DARICParser.VarDeclArrayedContext ctx);
	/**
	 * Enter a parse tree produced by the {@code varDeclType}
	 * labeled alternative in {@link DARICParser#varDecl}.
	 * @param ctx the parse tree
	 */
	void enterVarDeclType(DARICParser.VarDeclTypeContext ctx);
	/**
	 * Exit a parse tree produced by the {@code varDeclType}
	 * labeled alternative in {@link DARICParser#varDecl}.
	 * @param ctx the parse tree
	 */
	void exitVarDeclType(DARICParser.VarDeclTypeContext ctx);
	/**
	 * Enter a parse tree produced by the {@code varDeclTypeArrayed}
	 * labeled alternative in {@link DARICParser#varDecl}.
	 * @param ctx the parse tree
	 */
	void enterVarDeclTypeArrayed(DARICParser.VarDeclTypeArrayedContext ctx);
	/**
	 * Exit a parse tree produced by the {@code varDeclTypeArrayed}
	 * labeled alternative in {@link DARICParser#varDecl}.
	 * @param ctx the parse tree
	 */
	void exitVarDeclTypeArrayed(DARICParser.VarDeclTypeArrayedContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#varDeclWithDimension}.
	 * @param ctx the parse tree
	 */
	void enterVarDeclWithDimension(DARICParser.VarDeclWithDimensionContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#varDeclWithDimension}.
	 * @param ctx the parse tree
	 */
	void exitVarDeclWithDimension(DARICParser.VarDeclWithDimensionContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#varList}.
	 * @param ctx the parse tree
	 */
	void enterVarList(DARICParser.VarListContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#varList}.
	 * @param ctx the parse tree
	 */
	void exitVarList(DARICParser.VarListContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#functionVarList}.
	 * @param ctx the parse tree
	 */
	void enterFunctionVarList(DARICParser.FunctionVarListContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#functionVarList}.
	 * @param ctx the parse tree
	 */
	void exitFunctionVarList(DARICParser.FunctionVarListContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#functionParList}.
	 * @param ctx the parse tree
	 */
	void enterFunctionParList(DARICParser.FunctionParListContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#functionParList}.
	 * @param ctx the parse tree
	 */
	void exitFunctionParList(DARICParser.FunctionParListContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#exprList}.
	 * @param ctx the parse tree
	 */
	void enterExprList(DARICParser.ExprListContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#exprList}.
	 * @param ctx the parse tree
	 */
	void exitExprList(DARICParser.ExprListContext ctx);
	/**
	 * Enter a parse tree produced by the {@code printListExpr}
	 * labeled alternative in {@link DARICParser#printListItem}.
	 * @param ctx the parse tree
	 */
	void enterPrintListExpr(DARICParser.PrintListExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code printListExpr}
	 * labeled alternative in {@link DARICParser#printListItem}.
	 * @param ctx the parse tree
	 */
	void exitPrintListExpr(DARICParser.PrintListExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code printListSPCP}
	 * labeled alternative in {@link DARICParser#printListItem}.
	 * @param ctx the parse tree
	 */
	void enterPrintListSPCP(DARICParser.PrintListSPCPContext ctx);
	/**
	 * Exit a parse tree produced by the {@code printListSPCP}
	 * labeled alternative in {@link DARICParser#printListItem}.
	 * @param ctx the parse tree
	 */
	void exitPrintListSPCP(DARICParser.PrintListSPCPContext ctx);
	/**
	 * Enter a parse tree produced by the {@code printListSPC}
	 * labeled alternative in {@link DARICParser#printListItem}.
	 * @param ctx the parse tree
	 */
	void enterPrintListSPC(DARICParser.PrintListSPCContext ctx);
	/**
	 * Exit a parse tree produced by the {@code printListSPC}
	 * labeled alternative in {@link DARICParser#printListItem}.
	 * @param ctx the parse tree
	 */
	void exitPrintListSPC(DARICParser.PrintListSPCContext ctx);
	/**
	 * Enter a parse tree produced by the {@code printListTick}
	 * labeled alternative in {@link DARICParser#printStartingTicks}.
	 * @param ctx the parse tree
	 */
	void enterPrintListTick(DARICParser.PrintListTickContext ctx);
	/**
	 * Exit a parse tree produced by the {@code printListTick}
	 * labeled alternative in {@link DARICParser#printStartingTicks}.
	 * @param ctx the parse tree
	 */
	void exitPrintListTick(DARICParser.PrintListTickContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#printList}.
	 * @param ctx the parse tree
	 */
	void enterPrintList(DARICParser.PrintListContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#printList}.
	 * @param ctx the parse tree
	 */
	void exitPrintList(DARICParser.PrintListContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExpr(DARICParser.ExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExpr(DARICParser.ExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#number}.
	 * @param ctx the parse tree
	 */
	void enterNumber(DARICParser.NumberContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#number}.
	 * @param ctx the parse tree
	 */
	void exitNumber(DARICParser.NumberContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#numberInteger}.
	 * @param ctx the parse tree
	 */
	void enterNumberInteger(DARICParser.NumberIntegerContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#numberInteger}.
	 * @param ctx the parse tree
	 */
	void exitNumberInteger(DARICParser.NumberIntegerContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#numberHex}.
	 * @param ctx the parse tree
	 */
	void enterNumberHex(DARICParser.NumberHexContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#numberHex}.
	 * @param ctx the parse tree
	 */
	void exitNumberHex(DARICParser.NumberHexContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#numberBinary}.
	 * @param ctx the parse tree
	 */
	void enterNumberBinary(DARICParser.NumberBinaryContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#numberBinary}.
	 * @param ctx the parse tree
	 */
	void exitNumberBinary(DARICParser.NumberBinaryContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#numberFloat}.
	 * @param ctx the parse tree
	 */
	void enterNumberFloat(DARICParser.NumberFloatContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#numberFloat}.
	 * @param ctx the parse tree
	 */
	void exitNumberFloat(DARICParser.NumberFloatContext ctx);
	/**
	 * Enter a parse tree produced by the {@code strFuncTIMES}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 */
	void enterStrFuncTIMES(DARICParser.StrFuncTIMESContext ctx);
	/**
	 * Exit a parse tree produced by the {@code strFuncTIMES}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 */
	void exitStrFuncTIMES(DARICParser.StrFuncTIMESContext ctx);
	/**
	 * Enter a parse tree produced by the {@code strFuncCHRSP}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 */
	void enterStrFuncCHRSP(DARICParser.StrFuncCHRSPContext ctx);
	/**
	 * Exit a parse tree produced by the {@code strFuncCHRSP}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 */
	void exitStrFuncCHRSP(DARICParser.StrFuncCHRSPContext ctx);
	/**
	 * Enter a parse tree produced by the {@code strFuncCHRS}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 */
	void enterStrFuncCHRS(DARICParser.StrFuncCHRSContext ctx);
	/**
	 * Exit a parse tree produced by the {@code strFuncCHRS}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 */
	void exitStrFuncCHRS(DARICParser.StrFuncCHRSContext ctx);
	/**
	 * Enter a parse tree produced by the {@code strFuncLEFTS}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 */
	void enterStrFuncLEFTS(DARICParser.StrFuncLEFTSContext ctx);
	/**
	 * Exit a parse tree produced by the {@code strFuncLEFTS}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 */
	void exitStrFuncLEFTS(DARICParser.StrFuncLEFTSContext ctx);
	/**
	 * Enter a parse tree produced by the {@code strFuncMIDS3}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 */
	void enterStrFuncMIDS3(DARICParser.StrFuncMIDS3Context ctx);
	/**
	 * Exit a parse tree produced by the {@code strFuncMIDS3}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 */
	void exitStrFuncMIDS3(DARICParser.StrFuncMIDS3Context ctx);
	/**
	 * Enter a parse tree produced by the {@code strFuncMIDS2}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 */
	void enterStrFuncMIDS2(DARICParser.StrFuncMIDS2Context ctx);
	/**
	 * Exit a parse tree produced by the {@code strFuncMIDS2}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 */
	void exitStrFuncMIDS2(DARICParser.StrFuncMIDS2Context ctx);
	/**
	 * Enter a parse tree produced by the {@code strFuncRIGHTS}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 */
	void enterStrFuncRIGHTS(DARICParser.StrFuncRIGHTSContext ctx);
	/**
	 * Exit a parse tree produced by the {@code strFuncRIGHTS}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 */
	void exitStrFuncRIGHTS(DARICParser.StrFuncRIGHTSContext ctx);
	/**
	 * Enter a parse tree produced by the {@code strFuncSTRS}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 */
	void enterStrFuncSTRS(DARICParser.StrFuncSTRSContext ctx);
	/**
	 * Exit a parse tree produced by the {@code strFuncSTRS}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 */
	void exitStrFuncSTRS(DARICParser.StrFuncSTRSContext ctx);
	/**
	 * Enter a parse tree produced by the {@code strFuncSTRSHEX}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 */
	void enterStrFuncSTRSHEX(DARICParser.StrFuncSTRSHEXContext ctx);
	/**
	 * Exit a parse tree produced by the {@code strFuncSTRSHEX}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 */
	void exitStrFuncSTRSHEX(DARICParser.StrFuncSTRSHEXContext ctx);
	/**
	 * Enter a parse tree produced by the {@code strFuncSTRINGS}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 */
	void enterStrFuncSTRINGS(DARICParser.StrFuncSTRINGSContext ctx);
	/**
	 * Exit a parse tree produced by the {@code strFuncSTRINGS}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 */
	void exitStrFuncSTRINGS(DARICParser.StrFuncSTRINGSContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#string}.
	 * @param ctx the parse tree
	 */
	void enterString(DARICParser.StringContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#string}.
	 * @param ctx the parse tree
	 */
	void exitString(DARICParser.StringContext ctx);
	/**
	 * Enter a parse tree produced by {@link DARICParser#strExpr}.
	 * @param ctx the parse tree
	 */
	void enterStrExpr(DARICParser.StrExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link DARICParser#strExpr}.
	 * @param ctx the parse tree
	 */
	void exitStrExpr(DARICParser.StrExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncPI}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncPI(DARICParser.NumFuncPIContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncPI}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncPI(DARICParser.NumFuncPIContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncTIME}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncTIME(DARICParser.NumFuncTIMEContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncTIME}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncTIME(DARICParser.NumFuncTIMEContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncRND}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncRND(DARICParser.NumFuncRNDContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncRND}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncRND(DARICParser.NumFuncRNDContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncRND0}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncRND0(DARICParser.NumFuncRND0Context ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncRND0}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncRND0(DARICParser.NumFuncRND0Context ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncRND1}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncRND1(DARICParser.NumFuncRND1Context ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncRND1}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncRND1(DARICParser.NumFuncRND1Context ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncRNDRANGE}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncRNDRANGE(DARICParser.NumFuncRNDRANGEContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncRNDRANGE}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncRNDRANGE(DARICParser.NumFuncRNDRANGEContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncLN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncLN(DARICParser.NumFuncLNContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncLN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncLN(DARICParser.NumFuncLNContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncLOG}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncLOG(DARICParser.NumFuncLOGContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncLOG}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncLOG(DARICParser.NumFuncLOGContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncEXP}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncEXP(DARICParser.NumFuncEXPContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncEXP}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncEXP(DARICParser.NumFuncEXPContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncATN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncATN(DARICParser.NumFuncATNContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncATN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncATN(DARICParser.NumFuncATNContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncTAN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncTAN(DARICParser.NumFuncTANContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncTAN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncTAN(DARICParser.NumFuncTANContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncCOS}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncCOS(DARICParser.NumFuncCOSContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncCOS}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncCOS(DARICParser.NumFuncCOSContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncSIN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncSIN(DARICParser.NumFuncSINContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncSIN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncSIN(DARICParser.NumFuncSINContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncABS}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncABS(DARICParser.NumFuncABSContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncABS}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncABS(DARICParser.NumFuncABSContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncACS}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncACS(DARICParser.NumFuncACSContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncACS}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncACS(DARICParser.NumFuncACSContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncASN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncASN(DARICParser.NumFuncASNContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncASN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncASN(DARICParser.NumFuncASNContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncDEG}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncDEG(DARICParser.NumFuncDEGContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncDEG}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncDEG(DARICParser.NumFuncDEGContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncRAD}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncRAD(DARICParser.NumFuncRADContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncRAD}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncRAD(DARICParser.NumFuncRADContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncSQR}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncSQR(DARICParser.NumFuncSQRContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncSQR}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncSQR(DARICParser.NumFuncSQRContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncSGN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncSGN(DARICParser.NumFuncSGNContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncSGN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncSGN(DARICParser.NumFuncSGNContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncASC}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncASC(DARICParser.NumFuncASCContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncASC}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncASC(DARICParser.NumFuncASCContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncLEN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncLEN(DARICParser.NumFuncLENContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncLEN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncLEN(DARICParser.NumFuncLENContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncINSTR2}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncINSTR2(DARICParser.NumFuncINSTR2Context ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncINSTR2}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncINSTR2(DARICParser.NumFuncINSTR2Context ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncINSTR3}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncINSTR3(DARICParser.NumFuncINSTR3Context ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncINSTR3}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncINSTR3(DARICParser.NumFuncINSTR3Context ctx);
	/**
	 * Enter a parse tree produced by the {@code numFuncVAL}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void enterNumFuncVAL(DARICParser.NumFuncVALContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numFuncVAL}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 */
	void exitNumFuncVAL(DARICParser.NumFuncVALContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numExprNumber}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void enterNumExprNumber(DARICParser.NumExprNumberContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numExprNumber}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void exitNumExprNumber(DARICParser.NumExprNumberContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numExprFunc}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void enterNumExprFunc(DARICParser.NumExprFuncContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numExprFunc}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void exitNumExprFunc(DARICParser.NumExprFuncContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numExprSubtract}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void enterNumExprSubtract(DARICParser.NumExprSubtractContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numExprSubtract}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void exitNumExprSubtract(DARICParser.NumExprSubtractContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numExprVar}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void enterNumExprVar(DARICParser.NumExprVarContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numExprVar}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void exitNumExprVar(DARICParser.NumExprVarContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numExprEOR}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void enterNumExprEOR(DARICParser.NumExprEORContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numExprEOR}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void exitNumExprEOR(DARICParser.NumExprEORContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numExprHat}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void enterNumExprHat(DARICParser.NumExprHatContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numExprHat}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void exitNumExprHat(DARICParser.NumExprHatContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numExprNumRelop}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void enterNumExprNumRelop(DARICParser.NumExprNumRelopContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numExprNumRelop}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void exitNumExprNumRelop(DARICParser.NumExprNumRelopContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numExprStrRelop}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void enterNumExprStrRelop(DARICParser.NumExprStrRelopContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numExprStrRelop}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void exitNumExprStrRelop(DARICParser.NumExprStrRelopContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numExprSHR}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void enterNumExprSHR(DARICParser.NumExprSHRContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numExprSHR}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void exitNumExprSHR(DARICParser.NumExprSHRContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numExprMultiply}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void enterNumExprMultiply(DARICParser.NumExprMultiplyContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numExprMultiply}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void exitNumExprMultiply(DARICParser.NumExprMultiplyContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numExprMOD}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void enterNumExprMOD(DARICParser.NumExprMODContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numExprMOD}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void exitNumExprMOD(DARICParser.NumExprMODContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numExprNOT}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void enterNumExprNOT(DARICParser.NumExprNOTContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numExprNOT}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void exitNumExprNOT(DARICParser.NumExprNOTContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numExprNested}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void enterNumExprNested(DARICParser.NumExprNestedContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numExprNested}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void exitNumExprNested(DARICParser.NumExprNestedContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numExprSHL}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void enterNumExprSHL(DARICParser.NumExprSHLContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numExprSHL}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void exitNumExprSHL(DARICParser.NumExprSHLContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numExprAND}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void enterNumExprAND(DARICParser.NumExprANDContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numExprAND}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void exitNumExprAND(DARICParser.NumExprANDContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numExprPlus}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void enterNumExprPlus(DARICParser.NumExprPlusContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numExprPlus}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void exitNumExprPlus(DARICParser.NumExprPlusContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numExprOR}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void enterNumExprOR(DARICParser.NumExprORContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numExprOR}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void exitNumExprOR(DARICParser.NumExprORContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numExprDivide}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void enterNumExprDivide(DARICParser.NumExprDivideContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numExprDivide}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void exitNumExprDivide(DARICParser.NumExprDivideContext ctx);
	/**
	 * Enter a parse tree produced by the {@code numExprDIV}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void enterNumExprDIV(DARICParser.NumExprDIVContext ctx);
	/**
	 * Exit a parse tree produced by the {@code numExprDIV}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 */
	void exitNumExprDIV(DARICParser.NumExprDIVContext ctx);
	/**
	 * Enter a parse tree produced by the {@code compareEQ}
	 * labeled alternative in {@link DARICParser#compare}.
	 * @param ctx the parse tree
	 */
	void enterCompareEQ(DARICParser.CompareEQContext ctx);
	/**
	 * Exit a parse tree produced by the {@code compareEQ}
	 * labeled alternative in {@link DARICParser#compare}.
	 * @param ctx the parse tree
	 */
	void exitCompareEQ(DARICParser.CompareEQContext ctx);
	/**
	 * Enter a parse tree produced by the {@code compareNE}
	 * labeled alternative in {@link DARICParser#compare}.
	 * @param ctx the parse tree
	 */
	void enterCompareNE(DARICParser.CompareNEContext ctx);
	/**
	 * Exit a parse tree produced by the {@code compareNE}
	 * labeled alternative in {@link DARICParser#compare}.
	 * @param ctx the parse tree
	 */
	void exitCompareNE(DARICParser.CompareNEContext ctx);
	/**
	 * Enter a parse tree produced by the {@code compareGT}
	 * labeled alternative in {@link DARICParser#compare}.
	 * @param ctx the parse tree
	 */
	void enterCompareGT(DARICParser.CompareGTContext ctx);
	/**
	 * Exit a parse tree produced by the {@code compareGT}
	 * labeled alternative in {@link DARICParser#compare}.
	 * @param ctx the parse tree
	 */
	void exitCompareGT(DARICParser.CompareGTContext ctx);
	/**
	 * Enter a parse tree produced by the {@code compareGE}
	 * labeled alternative in {@link DARICParser#compare}.
	 * @param ctx the parse tree
	 */
	void enterCompareGE(DARICParser.CompareGEContext ctx);
	/**
	 * Exit a parse tree produced by the {@code compareGE}
	 * labeled alternative in {@link DARICParser#compare}.
	 * @param ctx the parse tree
	 */
	void exitCompareGE(DARICParser.CompareGEContext ctx);
	/**
	 * Enter a parse tree produced by the {@code compareLT}
	 * labeled alternative in {@link DARICParser#compare}.
	 * @param ctx the parse tree
	 */
	void enterCompareLT(DARICParser.CompareLTContext ctx);
	/**
	 * Exit a parse tree produced by the {@code compareLT}
	 * labeled alternative in {@link DARICParser#compare}.
	 * @param ctx the parse tree
	 */
	void exitCompareLT(DARICParser.CompareLTContext ctx);
	/**
	 * Enter a parse tree produced by the {@code compareLE}
	 * labeled alternative in {@link DARICParser#compare}.
	 * @param ctx the parse tree
	 */
	void enterCompareLE(DARICParser.CompareLEContext ctx);
	/**
	 * Exit a parse tree produced by the {@code compareLE}
	 * labeled alternative in {@link DARICParser#compare}.
	 * @param ctx the parse tree
	 */
	void exitCompareLE(DARICParser.CompareLEContext ctx);
}