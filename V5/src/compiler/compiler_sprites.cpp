#include "compiler.h"

antlrcpp::Any Compiler::visitStmtRENDERTOSPRITE(DARICParser::StmtRENDERTOSPRITEContext* context) {
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	for (auto i = 0; i < context->numExpr().size(); i++) {
		visit(context->numExpr(i));
		ensure_stack_is_integer();
		stack_pop();
	}
	insert_bytecode_notype(Bytecodes::RENDERTOSPRITE);
	return NULL;
}

antlrcpp::Any Compiler::visitStmtRENDERTOSCREEN(DARICParser::StmtRENDERTOSCREENContext* context) {
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	insert_bytecode_notype(Bytecodes::RENDERTOSCREEN);
	return NULL;
}

antlrcpp::Any Compiler::visitNumFuncCREATESPRITE(DARICParser::NumFuncCREATESPRITEContext* context) {
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	for (auto i = 0; i < context->numExpr().size(); i++) {
		visit(context->numExpr(i));
		ensure_stack_is_integer();
		stack_pop();
	}
	insert_bytecode_notype(Bytecodes::CREATESPRITE);
	stack_push(Type::INTEGER);
	return NULL;
}

antlrcpp::Any Compiler::visitNumFuncLOADSPRITE(DARICParser::NumFuncLOADSPRITEContext* context) {
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	visit(context->strExpr());
	ensure_stack_is_string();
	stack_pop();
	insert_bytecode_notype(Bytecodes::LOADSPRITE);
	stack_push(Type::INTEGER);
	return NULL;
}

antlrcpp::Any Compiler::visitStmtDRAWSPRITE(DARICParser::StmtDRAWSPRITEContext* context) {
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	for (auto i = 0; i < 4; i++) {
		visit(context->numExpr(i));
		ensure_stack_is_integer();
		stack_pop();
	}
	for (auto i = 4; i < 6; i++) {
		visit(context->numExpr(i));
		ensure_stack_is_float();
		stack_pop();
	}
	insert_bytecode_notype(Bytecodes::DRAWSPRITE);
	return NULL;
}

antlrcpp::Any Compiler::visitStmtDELETESPRITE(DARICParser::StmtDELETESPRITEContext* context) {
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	return NULL;
}
