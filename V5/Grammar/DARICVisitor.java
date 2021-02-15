// Generated from DARIC.g4 by ANTLR 4.9.1
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link DARICParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface DARICVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link DARICParser#prog}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitProg(DARICParser.ProgContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#line}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLine(DARICParser.LineContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#linePlus}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLinePlus(DARICParser.LinePlusContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#content}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitContent(DARICParser.ContentContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#body}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBody(DARICParser.BodyContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#linenumber}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLinenumber(DARICParser.LinenumberContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmt}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmt(DARICParser.StmtContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#coreStmt}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCoreStmt(DARICParser.CoreStmtContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtBREAKPOINT}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtBREAKPOINT(DARICParser.StmtBREAKPOINTContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtCASE}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtCASE(DARICParser.StmtCASEContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtCHAIN}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtCHAIN(DARICParser.StmtCHAINContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtDATA}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtDATA(DARICParser.StmtDATAContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtDIM}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtDIM(DARICParser.StmtDIMContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtEND}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtEND(DARICParser.StmtENDContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtRETURN}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtRETURN(DARICParser.StmtRETURNContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtDEFFN}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtDEFFN(DARICParser.StmtDEFFNContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtDEFPROC}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtDEFPROC(DARICParser.StmtDEFPROCContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtFOR}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtFOR(DARICParser.StmtFORContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtFORIN}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtFORIN(DARICParser.StmtFORINContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtCallFN}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtCallFN(DARICParser.StmtCallFNContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtIF}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtIF(DARICParser.StmtIFContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtIFMultiline}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtIFMultiline(DARICParser.StmtIFMultilineContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtINSTALL}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtINSTALL(DARICParser.StmtINSTALLContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtGOTO}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtGOTO(DARICParser.StmtGOTOContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtGOSUB}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtGOSUB(DARICParser.StmtGOSUBContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtLET}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtLET(DARICParser.StmtLETContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtOSCLI}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtOSCLI(DARICParser.StmtOSCLIContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtCallPROC}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtCallPROC(DARICParser.StmtCallPROCContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtREAD}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtREAD(DARICParser.StmtREADContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtRESTORE}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtRESTORE(DARICParser.StmtRESTOREContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtSWAP}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtSWAP(DARICParser.StmtSWAPContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtTRACEON}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtTRACEON(DARICParser.StmtTRACEONContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtTRACEOFF}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtTRACEOFF(DARICParser.StmtTRACEOFFContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtTYPE}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtTYPE(DARICParser.StmtTYPEContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtREPEAT}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtREPEAT(DARICParser.StmtREPEATContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtWHILE}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtWHILE(DARICParser.StmtWHILEContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#keyMouseStmt}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitKeyMouseStmt(DARICParser.KeyMouseStmtContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtINPUT}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtINPUT(DARICParser.StmtINPUTContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtPRINT}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtPRINT(DARICParser.StmtPRINTContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtMOUSE}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtMOUSE(DARICParser.StmtMOUSEContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtINKEY}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtINKEY(DARICParser.StmtINKEYContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtINKEYS}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtINKEYS(DARICParser.StmtINKEYSContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtGET}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtGET(DARICParser.StmtGETContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtGETS}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtGETS(DARICParser.StmtGETSContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtOperatorEqual}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtOperatorEqual(DARICParser.StmtOperatorEqualContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#ioStmt}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIoStmt(DARICParser.IoStmtContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtBPUTH}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtBPUTH(DARICParser.StmtBPUTHContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtBGETH}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtBGETH(DARICParser.StmtBGETHContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtPTRH}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtPTRH(DARICParser.StmtPTRHContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtCLOSEH}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtCLOSEH(DARICParser.StmtCLOSEHContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtLISTFILES}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtLISTFILES(DARICParser.StmtLISTFILESContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#graphicsStmt}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitGraphicsStmt(DARICParser.GraphicsStmtContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtCLS}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtCLS(DARICParser.StmtCLSContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtCOLOUR}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtCOLOUR(DARICParser.StmtCOLOURContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtCOLOURBG}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtCOLOURBG(DARICParser.StmtCOLOURBGContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtGRAPHICS}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtGRAPHICS(DARICParser.StmtGRAPHICSContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtFLIP}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtFLIP(DARICParser.StmtFLIPContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtCIRCLE}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtCIRCLE(DARICParser.StmtCIRCLEContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtLINE}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtLINE(DARICParser.StmtLINEContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtRECTANGLE}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtRECTANGLE(DARICParser.StmtRECTANGLEContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtTRIANGLE}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtTRIANGLE(DARICParser.StmtTRIANGLEContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtPLOT}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtPLOT(DARICParser.StmtPLOTContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtCLIPON}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtCLIPON(DARICParser.StmtCLIPONContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtCLIPOFF}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtCLIPOFF(DARICParser.StmtCLIPOFFContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtTEXT}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtTEXT(DARICParser.StmtTEXTContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtTEXTRIGHT}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtTEXTRIGHT(DARICParser.StmtTEXTRIGHTContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtTEXTCENTRE}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtTEXTCENTRE(DARICParser.StmtTEXTCENTREContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtSHOWFPS}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtSHOWFPS(DARICParser.StmtSHOWFPSContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtRENDERFRAME}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtRENDERFRAME(DARICParser.StmtRENDERFRAMEContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtCREATEVERTEX}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtCREATEVERTEX(DARICParser.StmtCREATEVERTEXContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtCREATETRIANGLE}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtCREATETRIANGLE(DARICParser.StmtCREATETRIANGLEContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtTRANSLATE}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtTRANSLATE(DARICParser.StmtTRANSLATEContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtROTATE}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtROTATE(DARICParser.StmtROTATEContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtSCALE}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtSCALE(DARICParser.StmtSCALEContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#stmtDELETEOBJECT}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStmtDELETEOBJECT(DARICParser.StmtDELETEOBJECTContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#when}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitWhen(DARICParser.WhenContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#fnName}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFnName(DARICParser.FnNameContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#literal}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLiteral(DARICParser.LiteralContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#var}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVar(DARICParser.VarContext ctx);
	/**
	 * Visit a parse tree produced by the {@code typeVarType}
	 * labeled alternative in {@link DARICParser#typeVar}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTypeVarType(DARICParser.TypeVarTypeContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numVarFloatArray}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumVarFloatArray(DARICParser.NumVarFloatArrayContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numVarIntegerArray}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumVarIntegerArray(DARICParser.NumVarIntegerArrayContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numVarIntegerFieldArray}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumVarIntegerFieldArray(DARICParser.NumVarIntegerFieldArrayContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numVarFloatFieldArray}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumVarFloatFieldArray(DARICParser.NumVarFloatFieldArrayContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numVarFloatFN}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumVarFloatFN(DARICParser.NumVarFloatFNContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numVarIntegerFN}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumVarIntegerFN(DARICParser.NumVarIntegerFNContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numVarFloat}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumVarFloat(DARICParser.NumVarFloatContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numVarInteger}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumVarInteger(DARICParser.NumVarIntegerContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numVarFloatField}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumVarFloatField(DARICParser.NumVarFloatFieldContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numVarIntegerField}
	 * labeled alternative in {@link DARICParser#numVar}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumVarIntegerField(DARICParser.NumVarIntegerFieldContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numVarStringArray}
	 * labeled alternative in {@link DARICParser#strVar}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumVarStringArray(DARICParser.NumVarStringArrayContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numVarStringFieldArray}
	 * labeled alternative in {@link DARICParser#strVar}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumVarStringFieldArray(DARICParser.NumVarStringFieldArrayContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numVarString}
	 * labeled alternative in {@link DARICParser#strVar}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumVarString(DARICParser.NumVarStringContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numVarStringField}
	 * labeled alternative in {@link DARICParser#strVar}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumVarStringField(DARICParser.NumVarStringFieldContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numVarStringFN}
	 * labeled alternative in {@link DARICParser#strVar}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumVarStringFN(DARICParser.NumVarStringFNContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#justVar}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitJustVar(DARICParser.JustVarContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#justNumberVar}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitJustNumberVar(DARICParser.JustNumberVarContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#varName}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVarName(DARICParser.VarNameContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#varNameInteger}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVarNameInteger(DARICParser.VarNameIntegerContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#varNameString}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVarNameString(DARICParser.VarNameStringContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#varNameType}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVarNameType(DARICParser.VarNameTypeContext ctx);
	/**
	 * Visit a parse tree produced by the {@code varDeclInd}
	 * labeled alternative in {@link DARICParser#varDecl}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVarDeclInd(DARICParser.VarDeclIndContext ctx);
	/**
	 * Visit a parse tree produced by the {@code varDeclArrayed}
	 * labeled alternative in {@link DARICParser#varDecl}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVarDeclArrayed(DARICParser.VarDeclArrayedContext ctx);
	/**
	 * Visit a parse tree produced by the {@code varDeclTypeVar}
	 * labeled alternative in {@link DARICParser#varDecl}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVarDeclTypeVar(DARICParser.VarDeclTypeVarContext ctx);
	/**
	 * Visit a parse tree produced by the {@code varDeclTypeVarArrayed}
	 * labeled alternative in {@link DARICParser#varDecl}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVarDeclTypeVarArrayed(DARICParser.VarDeclTypeVarArrayedContext ctx);
	/**
	 * Visit a parse tree produced by the {@code varDeclType}
	 * labeled alternative in {@link DARICParser#varDecl}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVarDeclType(DARICParser.VarDeclTypeContext ctx);
	/**
	 * Visit a parse tree produced by the {@code varDeclTypeArrayed}
	 * labeled alternative in {@link DARICParser#varDecl}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVarDeclTypeArrayed(DARICParser.VarDeclTypeArrayedContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#varDeclWithDimension}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVarDeclWithDimension(DARICParser.VarDeclWithDimensionContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#varList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitVarList(DARICParser.VarListContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#functionVar}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFunctionVar(DARICParser.FunctionVarContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#functionVarList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFunctionVarList(DARICParser.FunctionVarListContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#functionParList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFunctionParList(DARICParser.FunctionParListContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#exprList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExprList(DARICParser.ExprListContext ctx);
	/**
	 * Visit a parse tree produced by the {@code printListExpr}
	 * labeled alternative in {@link DARICParser#printListItem}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPrintListExpr(DARICParser.PrintListExprContext ctx);
	/**
	 * Visit a parse tree produced by the {@code printListSPCP}
	 * labeled alternative in {@link DARICParser#printListItem}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPrintListSPCP(DARICParser.PrintListSPCPContext ctx);
	/**
	 * Visit a parse tree produced by the {@code printListSPC}
	 * labeled alternative in {@link DARICParser#printListItem}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPrintListSPC(DARICParser.PrintListSPCContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#printListTick}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPrintListTick(DARICParser.PrintListTickContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#printListSeparator}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPrintListSeparator(DARICParser.PrintListSeparatorContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#printList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPrintList(DARICParser.PrintListContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#expr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpr(DARICParser.ExprContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#number}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumber(DARICParser.NumberContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#numberInteger}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumberInteger(DARICParser.NumberIntegerContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#numberHex}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumberHex(DARICParser.NumberHexContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#numberBinary}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumberBinary(DARICParser.NumberBinaryContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#numberFloat}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumberFloat(DARICParser.NumberFloatContext ctx);
	/**
	 * Visit a parse tree produced by the {@code strFuncTIMES}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStrFuncTIMES(DARICParser.StrFuncTIMESContext ctx);
	/**
	 * Visit a parse tree produced by the {@code strFuncCHRS}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStrFuncCHRS(DARICParser.StrFuncCHRSContext ctx);
	/**
	 * Visit a parse tree produced by the {@code strFuncLEFTS}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStrFuncLEFTS(DARICParser.StrFuncLEFTSContext ctx);
	/**
	 * Visit a parse tree produced by the {@code strFuncMIDS3}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStrFuncMIDS3(DARICParser.StrFuncMIDS3Context ctx);
	/**
	 * Visit a parse tree produced by the {@code strFuncMIDS2}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStrFuncMIDS2(DARICParser.StrFuncMIDS2Context ctx);
	/**
	 * Visit a parse tree produced by the {@code strFuncRIGHTS}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStrFuncRIGHTS(DARICParser.StrFuncRIGHTSContext ctx);
	/**
	 * Visit a parse tree produced by the {@code strFuncSTRS}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStrFuncSTRS(DARICParser.StrFuncSTRSContext ctx);
	/**
	 * Visit a parse tree produced by the {@code strFuncSTRSHEX}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStrFuncSTRSHEX(DARICParser.StrFuncSTRSHEXContext ctx);
	/**
	 * Visit a parse tree produced by the {@code strFuncSTRINGS}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStrFuncSTRINGS(DARICParser.StrFuncSTRINGSContext ctx);
	/**
	 * Visit a parse tree produced by the {@code strFuncINKEYS}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStrFuncINKEYS(DARICParser.StrFuncINKEYSContext ctx);
	/**
	 * Visit a parse tree produced by the {@code strFuncGETS}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStrFuncGETS(DARICParser.StrFuncGETSContext ctx);
	/**
	 * Visit a parse tree produced by the {@code strFuncGETSH}
	 * labeled alternative in {@link DARICParser#strFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStrFuncGETSH(DARICParser.StrFuncGETSHContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#string}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitString(DARICParser.StringContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#strExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStrExpr(DARICParser.StrExprContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncPI}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncPI(DARICParser.NumFuncPIContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncFALSE}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncFALSE(DARICParser.NumFuncFALSEContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncTRUE}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncTRUE(DARICParser.NumFuncTRUEContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncTIME}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncTIME(DARICParser.NumFuncTIMEContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncRNDRANGE}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncRNDRANGE(DARICParser.NumFuncRNDRANGEContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncRND}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncRND(DARICParser.NumFuncRNDContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncRND0}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncRND0(DARICParser.NumFuncRND0Context ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncRND1}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncRND1(DARICParser.NumFuncRND1Context ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncLN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncLN(DARICParser.NumFuncLNContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncLOG}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncLOG(DARICParser.NumFuncLOGContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncEXP}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncEXP(DARICParser.NumFuncEXPContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncATN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncATN(DARICParser.NumFuncATNContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncTAN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncTAN(DARICParser.NumFuncTANContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncCOS}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncCOS(DARICParser.NumFuncCOSContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncSIN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncSIN(DARICParser.NumFuncSINContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncABS}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncABS(DARICParser.NumFuncABSContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncACS}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncACS(DARICParser.NumFuncACSContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncASN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncASN(DARICParser.NumFuncASNContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncDEG}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncDEG(DARICParser.NumFuncDEGContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncRAD}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncRAD(DARICParser.NumFuncRADContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncSQR}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncSQR(DARICParser.NumFuncSQRContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncSGN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncSGN(DARICParser.NumFuncSGNContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncGET}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncGET(DARICParser.NumFuncGETContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncINKEY}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncINKEY(DARICParser.NumFuncINKEYContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncINT}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncINT(DARICParser.NumFuncINTContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncFLOAT}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncFLOAT(DARICParser.NumFuncFLOATContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncSCREENWIDTH}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncSCREENWIDTH(DARICParser.NumFuncSCREENWIDTHContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncSCREENHEIGHT}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncSCREENHEIGHT(DARICParser.NumFuncSCREENHEIGHTContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncPOINT}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncPOINT(DARICParser.NumFuncPOINTContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncCOLOUR}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncCOLOUR(DARICParser.NumFuncCOLOURContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncLOADTYPEFACE}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncLOADTYPEFACE(DARICParser.NumFuncLOADTYPEFACEContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncCREATEFONT}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncCREATEFONT(DARICParser.NumFuncCREATEFONTContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncSHAPE}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncSHAPE(DARICParser.NumFuncSHAPEContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncOBJECT}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncOBJECT(DARICParser.NumFuncOBJECTContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncBGETH}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncBGETH(DARICParser.NumFuncBGETHContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncEOFH}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncEOFH(DARICParser.NumFuncEOFHContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncOPENIN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncOPENIN(DARICParser.NumFuncOPENINContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncOPENOUT}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncOPENOUT(DARICParser.NumFuncOPENOUTContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncOPENUP}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncOPENUP(DARICParser.NumFuncOPENUPContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncPTR}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncPTR(DARICParser.NumFuncPTRContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncASC}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncASC(DARICParser.NumFuncASCContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncLEN}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncLEN(DARICParser.NumFuncLENContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncINSTR2}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncINSTR2(DARICParser.NumFuncINSTR2Context ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncINSTR3}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncINSTR3(DARICParser.NumFuncINSTR3Context ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncVAL}
	 * labeled alternative in {@link DARICParser#numFunc}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncVAL(DARICParser.NumFuncVALContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numExprNumber}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumExprNumber(DARICParser.NumExprNumberContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numExprSHLSHR}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumExprSHLSHR(DARICParser.NumExprSHLSHRContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numExprFunc}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumExprFunc(DARICParser.NumExprFuncContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numExprVar}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumExprVar(DARICParser.NumExprVarContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numFuncArraySize}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumFuncArraySize(DARICParser.NumFuncArraySizeContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numExprHat}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumExprHat(DARICParser.NumExprHatContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numExprNumRelop}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumExprNumRelop(DARICParser.NumExprNumRelopContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numExprStrRelop}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumExprStrRelop(DARICParser.NumExprStrRelopContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numExprNOT}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumExprNOT(DARICParser.NumExprNOTContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numExprMultiplyDivide}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumExprMultiplyDivide(DARICParser.NumExprMultiplyDivideContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numExprDIVMOD}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumExprDIVMOD(DARICParser.NumExprDIVMODContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numExprANDOREOR}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumExprANDOREOR(DARICParser.NumExprANDOREORContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numExprNested}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumExprNested(DARICParser.NumExprNestedContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numExprUnary}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumExprUnary(DARICParser.NumExprUnaryContext ctx);
	/**
	 * Visit a parse tree produced by the {@code numExprAddSubtract}
	 * labeled alternative in {@link DARICParser#numExpr}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumExprAddSubtract(DARICParser.NumExprAddSubtractContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#numColours}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumColours(DARICParser.NumColoursContext ctx);
	/**
	 * Visit a parse tree produced by {@link DARICParser#defaultFonts}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDefaultFonts(DARICParser.DefaultFontsContext ctx);
}