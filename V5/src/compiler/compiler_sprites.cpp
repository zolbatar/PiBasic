#include "compiler.h"

antlrcpp::Any visitStmtRENDERTOSPRITE(DARICParser::StmtRENDERTOSPRITEContext* context) {
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	return NULL;
}

antlrcpp::Any visitStmtRENDERTOSPRITE(DARICParser::StmtRENDERTOSPRITEContext* context) {
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	return NULL;
}

antlrcpp::Any Compiler::visitNumCREATESPRITE(DARICParser::NumCREATESPRITEContext* context) {
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	return NULL;
}

antlrcpp::Any visitStmtDRAWSPRITE(DARICParser::StmtDRAWSPRITEContext* context) {
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	return NULL;
}

antlrcpp::Any visitStmtDELETESPRITE(DARICParser::StmtDELETESPRITEContext* context) {
	set_pos(context->start);
	if (phase == CompilerPhase::LOOKAHEAD)
		return NULL;
	return NULL;
}

