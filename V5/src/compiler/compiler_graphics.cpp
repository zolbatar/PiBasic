#include "compiler.h"

antlrcpp::Any Compiler::visitNumColours(DARICParser::NumColoursContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	if (context->RED() != NULL) {
		insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0xFFFF0000);
	}
	else if (context->GREEN() != NULL) {
		insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0xFF00FF00);
	}
	else if (context->YELLOW() != NULL) {
		insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0xFFFFFF00);
	}
	else if (context->BLUE() != NULL) {
		insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0xFF0000FF);
	}
	else if (context->MAGENTA() != NULL) {
		insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0xFFFF00FF);
	}
	else if (context->CYAN() != NULL) {
		insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0xFF00FFFF);
	}
	else if (context->WHITE() != NULL) {
		insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0xFFFFFFFF);
	}
	else if (context->BLACK() != NULL) {
		insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0xFF000000);
	}
	stack_push(Type::INTEGER);
	return NULL;
}

antlrcpp::Any Compiler::visitDefaultFonts(DARICParser::DefaultFontsContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	if (context->MONO() != NULL) {
		insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0);
	}
	else if (context->PROP() != NULL) {
		insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 1);
	}
	else if (context->SERIF() != NULL) {
		insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 2);
	}
	stack_push(Type::INTEGER);
	return NULL;
}

antlrcpp::Any Compiler::visitStmtCLS(DARICParser::StmtCLSContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	insert_bytecode_notype(Bytecodes::CLS);
	return NULL;
}

antlrcpp::Any Compiler::visitStmtCURSORON(DARICParser::StmtCURSORONContext* context) {
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	insert_bytecode_notype(Bytecodes::CURSORON);
	return NULL;
}

antlrcpp::Any Compiler::visitStmtCURSOROFF(DARICParser::StmtCURSOROFFContext* context) {
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	insert_bytecode_notype(Bytecodes::CURSOROFF);
	return NULL;
}

antlrcpp::Any Compiler::visitStmtRASTERMODE(DARICParser::StmtRASTERMODEContext* context) {
	set_pos(context->start);
	if (context->BLIT() != NULL) {
		insert_instruction(Bytecodes::RASTERMODE, Type::INTEGER, 0);
	}
	else if (context->BLEND() != NULL)
	{
		insert_instruction(Bytecodes::RASTERMODE, Type::INTEGER, 1);
	}
	return NULL;
}

antlrcpp::Any Compiler::visitStmtCOLOUR(DARICParser::StmtCOLOURContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	for (auto i = 0; i < context->numExpr().size(); i++) {
		visit(context->numExpr(i));
		ensure_stack_is_integer();
		stack_pop();
	}
	if (context->numExpr().size() == 1) {
		insert_bytecode_notype(Bytecodes::COLOURHEX);
	}
	else {
		insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, static_cast<int>(context->numExpr().size()));
		insert_bytecode_notype(Bytecodes::COLOURRGB);
	}
	return NULL;
}

antlrcpp::Any Compiler::visitStmtCOLOURBG(DARICParser::StmtCOLOURBGContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	for (auto i = 0; i < context->numExpr().size(); i++) {
		visit(context->numExpr(i));
		ensure_stack_is_integer();
		stack_pop();
	}
	if (context->numExpr().size() == 1) {
		insert_bytecode_notype(Bytecodes::COLOURBGHEX);
	}
	else {
		insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, static_cast<int>(context->numExpr().size()));
		insert_bytecode_notype(Bytecodes::COLOURBGRGB);
	}
	return NULL;
}

antlrcpp::Any Compiler::visitStmtGRAPHICS(DARICParser::StmtGRAPHICSContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;

	// Dimensions?
	if (context->numExpr().size() == 2) {
		visit(context->numExpr(0));
		ensure_stack_is_integer();
		stack_pop();
		visit(context->numExpr(1));
		ensure_stack_is_integer();
		stack_pop();
	}
	else {
		insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, -1);
		insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, -1);
	}

	// Banked?
	if (context->BANKED() != NULL) {
		insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 1);
	}
	else {
		insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, 0);
	}
	insert_bytecode_notype(Bytecodes::GRAPHICS);
	return NULL;
}

antlrcpp::Any Compiler::visitStmtFLIP(DARICParser::StmtFLIPContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	insert_bytecode_notype(Bytecodes::FLIP);
	return NULL;
}

antlrcpp::Any Compiler::visitStmtCIRCLE(DARICParser::StmtCIRCLEContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	for (auto i = 0; i < context->numExpr().size(); i++) {
		visit(context->numExpr(i));
		ensure_stack_is_integer();
		stack_pop();
	}
	if (context->FILL() != NULL) {
		insert_bytecode_notype(Bytecodes::CIRCLEFILL);
	}
	else {
		insert_bytecode_notype(Bytecodes::CIRCLE);
	}
	return NULL;
}

antlrcpp::Any Compiler::visitStmtLINE(DARICParser::StmtLINEContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	for (auto i = 0; i < context->numExpr().size(); i++) {
		visit(context->numExpr(i));
		ensure_stack_is_integer();
		stack_pop();
	}
	insert_bytecode_notype(Bytecodes::LINE);
	return NULL;
}

antlrcpp::Any Compiler::visitStmtRECTANGLE(DARICParser::StmtRECTANGLEContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	for (auto i = 0; i < context->numExpr().size(); i++) {
		visit(context->numExpr(i));
		ensure_stack_is_integer();
		stack_pop();
	}
	if (context->FILL() != NULL) {
		insert_bytecode_notype(Bytecodes::RECTANGLEFILL);
	}
	else {
		insert_bytecode_notype(Bytecodes::RECTANGLE);
	}
	return NULL;
}

antlrcpp::Any Compiler::visitStmtTRIANGLE(DARICParser::StmtTRIANGLEContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	for (auto i = 0; i < context->numExpr().size(); i++) {
		visit(context->numExpr(i));
		ensure_stack_is_integer();
		stack_pop();
	}
	if (context->FILL() != NULL) {
		insert_bytecode_notype(Bytecodes::TRIANGLEFILL);
	}
	else if (context->SHADED() != NULL) {
		insert_bytecode_notype(Bytecodes::TRIANGLESHADED);
	}
	else {
		insert_bytecode_notype(Bytecodes::TRIANGLE);
	}
	return NULL;
}

antlrcpp::Any Compiler::visitStmtPLOT(DARICParser::StmtPLOTContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	for (auto i = 0; i < context->numExpr().size(); i++) {
		visit(context->numExpr(i));
		ensure_stack_is_integer();
		stack_pop();
	}
	insert_bytecode_notype(Bytecodes::PLOT);
	return NULL;
}

antlrcpp::Any Compiler::visitStmtCLIPON(DARICParser::StmtCLIPONContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	for (auto i = 0; i < context->numExpr().size(); i++) {
		visit(context->numExpr(i));
		ensure_stack_is_integer();
		stack_pop();
	}
	insert_bytecode_notype(Bytecodes::CLIP);
	return NULL;
}

antlrcpp::Any Compiler::visitStmtCLIPOFF(DARICParser::StmtCLIPOFFContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	insert_bytecode_notype(Bytecodes::CLIPOFF);
	return NULL;
}

antlrcpp::Any Compiler::visitStmtTEXT(DARICParser::StmtTEXTContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	for (auto i = 0; i < context->numExpr().size(); i++) {
		visit(context->numExpr(i));
		ensure_stack_is_integer();
		stack_pop();
	}
	visit(context->strExpr());
	stack_pop();
	insert_bytecode_notype(Bytecodes::TEXT);
	return NULL;
}

antlrcpp::Any Compiler::visitStmtTEXTRIGHT(DARICParser::StmtTEXTRIGHTContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	for (auto i = 0; i < context->numExpr().size(); i++) {
		visit(context->numExpr(i));
		ensure_stack_is_integer();
		stack_pop();
	}
	visit(context->strExpr());
	stack_pop();
	insert_bytecode_notype(Bytecodes::TEXTRIGHT);
	return NULL;
}

antlrcpp::Any Compiler::visitStmtTEXTCENTRE(DARICParser::StmtTEXTCENTREContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	for (auto i = 0; i < context->numExpr().size(); i++) {
		visit(context->numExpr(i));
		ensure_stack_is_integer();
		stack_pop();
	}
	visit(context->strExpr());
	stack_pop();
	insert_bytecode_notype(Bytecodes::TEXTCENTRE);
	return NULL;
}

antlrcpp::Any Compiler::visitStmtSHOWFPS(DARICParser::StmtSHOWFPSContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	insert_bytecode_notype(Bytecodes::SHOWFPS);
	return NULL;
}

antlrcpp::Any Compiler::visitNumFuncPOINT(DARICParser::NumFuncPOINTContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	for (auto i = 0; i < context->numExpr().size(); i++) {
		visit(context->numExpr(i));
		ensure_stack_is_integer();
		stack_pop();
	}
	insert_bytecode_notype(Bytecodes::POINT);
	stack_push(Type::INTEGER);
	return NULL;
}

antlrcpp::Any Compiler::visitNumFuncCOLOUR(DARICParser::NumFuncCOLOURContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	for (auto i = 0; i < context->numExpr().size(); i++) {
		visit(context->numExpr(i));
		ensure_stack_is_integer();
		stack_pop();
	}
	insert_instruction(Bytecodes::FASTCONST, Type::INTEGER, static_cast<int>(context->numExpr().size()));
	insert_bytecode_notype(Bytecodes::COLOUREXPRESSION);
	stack_push(Type::INTEGER);
	return NULL;
}

antlrcpp::Any Compiler::visitNumFuncSCREENWIDTH(DARICParser::NumFuncSCREENWIDTHContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	insert_bytecode_notype(Bytecodes::SCREENWIDTH);
	stack_push(Type::INTEGER);
	return NULL;
}

antlrcpp::Any Compiler::visitNumFuncSCREENHEIGHT(DARICParser::NumFuncSCREENHEIGHTContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	insert_bytecode_notype(Bytecodes::SCREENHEIGHT);
	stack_push(Type::INTEGER);
	return NULL;
}

antlrcpp::Any Compiler::visitNumFuncLOADTYPEFACE(DARICParser::NumFuncLOADTYPEFACEContext* context)
{
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	visit(context->strExpr());
	stack_pop();
	insert_bytecode_notype(Bytecodes::LOADTYPEFACE);
	stack_push(Type::INTEGER);
	return NULL;
}
