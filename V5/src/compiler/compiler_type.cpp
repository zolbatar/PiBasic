#include "compiler.h"

antlrcpp::Any Compiler::visitStmtTYPE(DARICParser::StmtTYPEContext* context)
{
    set_pos(context->start);

    // We only gather type information in the lookahead phase
    if (phase == CompilerPhase::LOOKAHEAD) {
        auto name = context->varName()->getText();
      
        // Do we have it?
        if (custom_types.count(name) > 0) {
            std::stringstream ss;
            ss << "Type '" << name << "' already exists";
            error(ss.str());
        }

        CustomType custom_type;
        custom_type.id = custom_type_index++;

        // Add fields
        for (auto i = 0; i < context->justVar().size(); i++) {
            visit(context->justVar(i));
            custom_type.members.insert(std::pair<std::string, Boxed>(last_var.name, std::move(Boxed(last_var.name, last_var.type, i))));
        }

        custom_types.insert(std::pair<std::string, CustomType>(name, std::move(custom_type)));
        return NULL;
    }
    return visitChildren(context);
}
