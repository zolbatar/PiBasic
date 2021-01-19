#include "compile.h"
#include <cassert>

void Compiler::compile_node_token_looping(struct AST* ast)
{
    switch (ast->token) {
    case CASE:
        compile_node_case(ast);
        break;
    case REPEAT:
        compile_node_repeat(ast);
        assert(stack_size() == 0);
        break;
    case FOR:
        if (ast->items.size() == 5) {
            compile_node_for(ast);
        } else {
            compile_node_for_step(ast);
        }
        assert(stack_size() == 0);
        break;
    case FORIN:
        compile_node_forin(ast);
        assert(stack_size() == 0);
        break;
    case WHILE:
        compile_node_while(ast);
        assert(stack_size() == 0);
        break;
    case IF:
        compile_node_if(ast);
        assert(stack_size() == 0);
        break;
    case GOTO:
        if (!write) {
            vm->insert_instruction(line_number, file_number, write, Bytecodes::GOTO, 0);
        } else {
            auto pc = (*line_no_to_bytecode.find(ast->items[0]->integer)).second;
            vm->insert_instruction(line_number, file_number, write, Bytecodes::GOTO, pc);
        }
        assert(stack_size() == 0);
        break;
    case GOSUB:
        if (!write) {
            vm->insert_instruction(line_number, file_number, write, Bytecodes::GOSUB, 0);
        } else {
            auto pc = (*line_no_to_bytecode.find(ast->items[0]->integer)).second;
            vm->insert_instruction(line_number, file_number, write, Bytecodes::GOSUB, pc);
        }
        assert(stack_size() == 0);
        break;
    default:
        error("LOOPING: Unknown token");
    }
}

void Compiler::compile_node_if(struct AST* ast)
{
    UINT32 start_pc = vm->get_pc();
    IfStatement s;
    s.end_pc = 0;
    s.false_pc = 0;
    if (write) {
        auto f = if_statements.find(start_pc);
        s.false_pc = (*f).second.false_pc;
        s.end_pc = (*f).second.end_pc;
    }

    // This is the condition
    compile_node(ast->items[0], true);
    stack_pop();

    // We don't know the amount to jump ahead yet
    vm->insert_instruction(line_number, file_number, write, Bytecodes::JNE, s.false_pc);

    // This is the truth section
    compile_node(ast->items[1], false);
    vm->insert_instruction(line_number, file_number, write, Bytecodes::JUMP, s.end_pc);

    // and false section (the else bit)
    if (!write) {
        s.false_pc = vm->get_pc();
    }
    if (ast->items.size() == 3) {
        compile_node(ast->items[2], false);
    }
    if (!write) {
        s.end_pc = vm->get_pc();
    }

    // If this is phase 1, save these PC's to use in phase 2
    if (!write) {
        if_statements.insert(std::pair<UINT32, IfStatement>(start_pc, std::move(s)));
    }
}

void Compiler::compile_node_forin(struct AST* ast)
{
    auto i_variable = ast->items[0];
    auto i_array = ast->items[1];
    auto body = ast->items[2];

    // Calc scope
    auto scope = VariableScope::NOSCOPE;
    switch (ast->items[3]->token) {
    case LOCAL:
        scope = VariableScope::LOCAL;
        break;
    case GLOBAL:
    default:
        scope = VariableScope::GLOBAL;
    }

    // Push array var_id onto stack
    var_name = i_array->string;
    var_type = Type::NOTYPE;
    auto var_id = find_or_create_variable(scope, true);
    auto saved_type = var_type;
    vm->insert_instruction(line_number, file_number, write, Bytecodes::CONST_I_VAR, var_id);

    // Create loop
    var_name = i_variable->string;
    var_type = ast->var_type;
    var_id = find_or_create_variable(scope, false);

    // PC
    vm->insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, vm->get_pc() + 2);

    // Actual FOR loop token
    switch (saved_type) {
    case Type::INTEGER_ARRAY:
        vm->insert_instruction(line_number, file_number, write, Bytecodes::FORIN_I, var_id);
        break;
    case Type::REAL_ARRAY:
        vm->insert_instruction(line_number, file_number, write, Bytecodes::FORIN_F, var_id);
        break;
    case Type::STRING_ARRAY:
        vm->insert_instruction(line_number, file_number, write, Bytecodes::FORIN_S, var_id);
        break;
    }

    // Process loop content
    compile_node(body, false);

    // And next
    switch (saved_type) {
    case Type::INTEGER_ARRAY:
        vm->insert_instruction(line_number, file_number, write, Bytecodes::NEXTIN_I, var_id);
        break;
    case Type::REAL_ARRAY:
        vm->insert_instruction(line_number, file_number, write, Bytecodes::NEXTIN_F, var_id);
        break;
    case Type::STRING_ARRAY:
        vm->insert_instruction(line_number, file_number, write, Bytecodes::NEXTIN_S, var_id);
        break;
    }
}

void Compiler::compile_node_for(struct AST* ast)
{
    auto i_variable = ast->items[0];
    auto i_from = ast->items[1];
    auto i_to = ast->items[2];
    auto body = ast->items[3];

    // Calc scope
    auto scope = VariableScope::NOSCOPE;
    switch (ast->items[4]->token) {
    case LOCAL:
        scope = VariableScope::LOCAL;
        break;
    case GLOBAL:
    default:
        scope = VariableScope::GLOBAL;
    }

    // Put from value on stack
    compile_node(i_from, false);

    // Create loop
    var_name = i_variable->string;
    var_type = ast->var_type;
    auto var_id = find_or_create_variable(scope, false);
    if (var_type == Type::INTEGER) {

        // Store loop from
        switch (peek_type()) {
        case Type::REAL:
            vm->insert_bytecode(line_number, file_number, write, Bytecodes::F_TO_I);
            break;
        default:
            break;
        }
        vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_I, var_id);
        stack_pop();

        // This is the TO value
        compile_node(i_to, true);
        switch (peek_type()) {
        case Type::REAL:
            vm->insert_bytecode(line_number, file_number, write, Bytecodes::F_TO_I);
            break;
        default:
            break;
        }

        // iterations value
        vm->insert_instruction(line_number, file_number, write, Bytecodes::LOAD_I, var_id);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::SUBTRACT_I);
        stack_pop();

        // Step
        vm->insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, 1);

        // PC
        vm->insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, vm->get_pc() + 2);

        // Actual FOR loop token
        vm->insert_instruction(line_number, file_number, write, Bytecodes::FOR_I, var_id);

        // Process loop content
        compile_node(body, false);

        // And next
        vm->insert_instruction(line_number, file_number, write, Bytecodes::NEXT_I, var_id);
    } else {

        // Store loop from
        switch (peek_type()) {
        case Type::INTEGER:
            vm->insert_bytecode(line_number, file_number, write, Bytecodes::I_TO_F);
            break;
        default:
            break;
        }
        vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_F, var_id);
        stack_pop();

        // This is the TO value
        compile_node(i_to, true);
        switch (peek_type()) {
        case Type::INTEGER:
            vm->insert_bytecode(line_number, file_number, write, Bytecodes::I_TO_F);
            break;
        default:
            break;
        }

        // iterations value
        vm->insert_instruction(line_number, file_number, write, Bytecodes::LOAD_F, var_id);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::SUBTRACT_F);
        stack_pop();

        // Step
        vm->insert_instruction(line_number, file_number, write, Bytecodes::LOAD_F, constant_float_create(1.0));

        // PC
        vm->insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, vm->get_pc() + 2);

        // Actual FOR loop token
        vm->insert_instruction(line_number, file_number, write, Bytecodes::FOR_F, var_id);

        // Process loop content
        compile_node(body, false);

        // And next
        vm->insert_instruction(line_number, file_number, write, Bytecodes::NEXT_F, var_id);
    }
}

void Compiler::compile_node_for_step(struct AST* ast)
{
    auto i_variable = ast->items[0];
    auto i_from = ast->items[1];
    auto i_to = ast->items[2];
    auto i_step = ast->items[3];
    auto body = ast->items[4];

    // Calc scope
    auto scope = VariableScope::NOSCOPE;
    switch (ast->items[5]->token) {
    case LOCAL:
        scope = VariableScope::LOCAL;
        break;
    case GLOBAL:
    default:
        scope = VariableScope::GLOBAL;
    }

    // Put from value on stack
    compile_node(i_from, false);

    // Create loop
    var_name = i_variable->string;
    var_type = ast->var_type;
    auto var_id = find_or_create_variable(scope, false);
    if (var_type == Type::INTEGER) {

        // Store loop from
        switch (peek_type()) {
        case Type::REAL:
            vm->insert_bytecode(line_number, file_number, write, Bytecodes::F_TO_I);
            break;
        default:
            break;
        }
        vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_I, var_id);
        stack_pop();

        // This is the TO value
        compile_node(i_to, true);
        switch (peek_type()) {
        case Type::REAL:
            vm->insert_bytecode(line_number, file_number, write, Bytecodes::F_TO_I);
            break;
        default:
            break;
        }

        // iterations value
        vm->insert_instruction(line_number, file_number, write, Bytecodes::LOAD_I, var_id);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::SUBTRACT_I);
        stack_pop();

        // Step
        compile_node(i_step, true);
        switch (peek_type()) {
        case Type::REAL:
            vm->insert_bytecode(line_number, file_number, write, Bytecodes::F_TO_I);
            break;
        default:
            break;
        }
        stack_pop();

        // PC
        vm->insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, vm->get_pc() + 2);

        // Actual FOR loop token
        vm->insert_instruction(line_number, file_number, write, Bytecodes::FOR_I, var_id);

        // Process loop content
        compile_node(body, false);

        // And next
        vm->insert_instruction(line_number, file_number, write, Bytecodes::NEXT_I, var_id);
    } else {

        // Store loop from
        switch (peek_type()) {
        case Type::INTEGER:
            vm->insert_bytecode(line_number, file_number, write, Bytecodes::I_TO_F);
            break;
        default:
            break;
        }
        vm->insert_instruction(line_number, file_number, write, Bytecodes::STORE_F, var_id);
        stack_pop();

        // This is the TO value
        compile_node(i_to, true);
        switch (peek_type()) {
        case Type::INTEGER:
            vm->insert_bytecode(line_number, file_number, write, Bytecodes::I_TO_F);
            break;
        default:
            break;
        }

        // iterations value
        vm->insert_instruction(line_number, file_number, write, Bytecodes::LOAD_F, var_id);
        vm->insert_bytecode(line_number, file_number, write, Bytecodes::SUBTRACT_F);
        stack_pop();

        // Step
        compile_node(i_step, true);
        switch (peek_type()) {
        case Type::INTEGER:
            vm->insert_bytecode(line_number, file_number, write, Bytecodes::I_TO_F);
            break;
        default:
            break;
        }
        stack_pop();

        // PC
        vm->insert_instruction(line_number, file_number, write, Bytecodes::CONST_I, vm->get_pc() + 2);

        // Actual FOR loop token
        vm->insert_instruction(line_number, file_number, write, Bytecodes::FOR_F, var_id);

        // Process loop content
        compile_node(body, false);

        // And next
        vm->insert_instruction(line_number, file_number, write, Bytecodes::NEXT_F, var_id);
    }
}

void Compiler::compile_node_repeat(struct AST* ast)
{
    vm->insert_bytecode(line_number, file_number, write, Bytecodes::REPEAT);

    // Body
    compile_node(ast->items[0], false);

    // Comparison
    //why is this an assignment?
    compile_node(ast->items[1], true);
    vm->insert_bytecode(line_number, file_number, write, Bytecodes::JNEREP);
    stack_pop();
}

void Compiler::compile_node_while(struct AST* ast)
{
    auto test = ast->items[0];
    auto body = ast->items[1];

    UINT32 start_pc = vm->get_pc();
    IfStatement s;
    s.end_pc = 0;
    if (write) {
        auto f = if_statements.find(start_pc);
        s.end_pc = (*f).second.end_pc;
    }

    // This is the condition
    compile_node(test, true);

    // We don't know the amount to jump ahead yet
    vm->insert_instruction(line_number, file_number, write, Bytecodes::JNE, s.end_pc);
    stack_pop();

    // This is the truth section
    compile_node(body, false);
    vm->insert_instruction(line_number, file_number, write, Bytecodes::JUMP, start_pc);

    if (!write) {
        s.end_pc = vm->get_pc();
    }

    // If this is phase 1, save these PC's to use in phase 2
    if (!write) {
        if_statements.insert(std::pair<UINT32, IfStatement>(start_pc, std::move(s)));
    }
}

void Compiler::compile_node_case(struct AST* ast)
{
    auto variable = ast->items[0];
    auto when_list = ast->items[1];

    // This is the condition
    vm->insert_bytecode(line_number, file_number, write, Bytecodes::CASE_C);
    while (when_list != NULL) {
        if (when_list->type == ASTType::LINK) {
            if (when_list->l->token == WHEN) {
                compile_node_when(variable, when_list->l);
            } else {
                compile_node_otherwise(when_list->r);
            }
            when_list = when_list->r;
        } else if (when_list->token == WHEN) {
            compile_node_when(variable, when_list);
            when_list = NULL;
        }
    }
    if (ast->items.size() == 3) {
        compile_node_otherwise(ast->items[2]);
    }
}

void Compiler::compile_node_when(struct AST* var, struct AST* when)
{
    // There could be multiple expressions, so let's keep going down the tree
    struct AST* ast_exp = when->items[0];
    while (ast_exp != NULL) {
        if (ast_exp->l != NULL) {
            compile_node_when_single(var, ast_exp->l, when->items[1]);
        } else {
            compile_node_when_single(var, ast_exp, when->items[1]);
        }
        ast_exp = ast_exp->r;
    }
}

void Compiler::compile_node_otherwise(struct AST* action)
{
    // Treat as an IF, so keep PC
    UINT32 start_pc = vm->get_pc();
    IfStatement s;
    s.end_pc = 0;
    if (write) {
        auto f = if_statements.find(start_pc);
        s.end_pc = (*f).second.end_pc;
    }

    // We don't know the amount to jump ahead yet
    vm->insert_instruction(line_number, file_number, write, Bytecodes::CJUMPT, s.end_pc);

    // This is the code to execute on CASE match
    compile_node(action, true);

    // Set the end PC on write
    if (!write) {
        s.end_pc = vm->get_pc();
    }

    // If this is phase 1, save these PC's to use in phase 2
    if (!write) {
        if_statements.insert(std::pair<UINT32, IfStatement>(start_pc, std::move(s)));
    }
}

void Compiler::compile_node_when_single(struct AST* var, struct AST* expression, struct AST* action)
{
    assert(expression != NULL);
    assert(action != NULL);

    // Treat as an IF, so keep PC
    UINT32 start_pc = vm->get_pc();
    IfStatement s;
    s.end_pc = 0;
    if (write) {
        auto f = if_statements.find(start_pc);
        s.end_pc = (*f).second.end_pc;
    }

    compile_node(expression, true);
    compile_node(var, true);
    insert_bytecode_based_on_peektype({
        { Type::REAL, Bytecodes::CMP_E_F },
        { Type::INTEGER, Bytecodes::CMP_E_I },
        { Type::STRING, Bytecodes::CMP_E_S },
    });
    stack_pop();
    stack_pop();

    // We don't know the amount to jump ahead yet
    vm->insert_instruction(line_number, file_number, write, Bytecodes::JNE, s.end_pc);
    vm->insert_bytecode(line_number, file_number, write, Bytecodes::CASE_S);

    // This is the code to execute on CASE match
    compile_node(action, false);

    // Set the end PC on write
    if (!write) {
        s.end_pc = vm->get_pc();
    }

    // If this is phase 1, save these PC's to use in phase 2
    if (!write) {
        if_statements.insert(std::pair<UINT32, IfStatement>(start_pc, std::move(s)));
    }
}