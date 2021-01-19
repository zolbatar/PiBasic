#include "compile.h"

void Compiler::compile_node_token_looping(struct ast *ast, bool expression) {
    switch (ast->token) {
    case Token::Case:
        compile_node_case(ast);
        break;
    case Token::Repeat:
        vm->insert_bytecode(line_number, file_number, write, REPEAT);
        break;
    case Token::Until:
        compile_node(ast->l, true);
        vm->insert_bytecode(line_number, file_number, write, JNEREP);
        stack_pop();
        break;
    case Token::For:
        compile_node_for(ast);
        break;
    case Token::ForStep:
        compile_node_for_step(ast);
        break;
    case Token::While:
        compile_node_while(ast);
        break;
    case Token::If:
        compile_node_if(ast);
        break;
    case Token::Goto:
        if (ast->l->type != NodeType::Integer)
            error("GOTO requires a literal integer line number");
        if (!write) {
            vm->insert_instruction(line_number, file_number, write, GOTO, 0);
        } else {
            auto pc = (*line_no_to_bytecode.find(ast->l->v_int)).second;
            vm->insert_instruction(line_number, file_number, write, GOTO, pc);
        }
        break;
    case Token::Gosub:
        if (ast->l->type != NodeType::Integer)
            error("GOSUB requires a literal integer line number");
        if (!write) {
            vm->insert_instruction(line_number, file_number, write, GOSUB, 0);
        } else {
            auto pc = (*line_no_to_bytecode.find(ast->l->v_int)).second;
            vm->insert_instruction(line_number, file_number, write, GOSUB, pc);
        }
        break;
    }
}

void Compiler::compile_node_when_single(struct ast *var, struct ast *expression, struct ast *action) {
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
        {Type::Float, CMP_E_F},
        {Type::Integer, CMP_E_I},
        {Type::String, CMP_E_S},
    });
    stack_pop();
    stack_pop();

    // We don't know the amount to jump ahead yet
    vm->insert_instruction(line_number, file_number, write, JNE, s.end_pc);
    vm->insert_bytecode(line_number, file_number, write, CASE_S);

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

void Compiler::compile_node_when(struct ast *var, struct ast *when) {
    // There could be multiple expressions, so let's keep going down the tree
    struct ast *ast_exp = when->l;
    while (ast_exp != NULL) {
        compile_node_when_single(var, ast_exp->l, when->r);
        ast_exp = ast_exp->r;
    }
}

void Compiler::compile_node_otherwise(struct ast *action) {
    // Treat as an IF, so keep PC
    UINT32 start_pc = vm->get_pc();
    IfStatement s;
    s.end_pc = 0;
    if (write) {
        auto f = if_statements.find(start_pc);
        s.end_pc = (*f).second.end_pc;
    }

    // We don't know the amount to jump ahead yet
    vm->insert_instruction(line_number, file_number, write, JPOSC, s.end_pc);

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

void Compiler::compile_node_case(struct ast *ast) {
    // Case is basically one long if then
    struct ast *ast_when = ast->r;

    // This is the condition
    vm->insert_bytecode(line_number, file_number, write, CASE_C);
    while (ast_when != NULL) {
        if (ast_when->type == NodeType::Link) {
            if (ast_when->l->token == Token::When) {
                compile_node_when(ast->l, ast_when->l);
            } else {
                compile_node_otherwise(ast_when->r);
            }
            ast_when = ast_when->r;
        } else if (ast_when->token == Token::When) {
            compile_node_when(ast->l, ast_when);
            ast_when = NULL;
        } else if (ast_when->token == Token::Otherwise) {
            compile_node_otherwise(ast_when->l);
            ast_when = NULL;
        }
    }
}

void Compiler::compile_node_if(struct ast *ast) {
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
    compile_node(ast->l, true);
    stack_pop();

    // We don't know the amount to jump ahead yet
    vm->insert_instruction(line_number, file_number, write, JNE, s.false_pc);

    // This is the truth section
    compile_node(ast->r->l, false);
    vm->insert_instruction(line_number, file_number, write, JUMP, s.end_pc);

    // and false section (the else bit)
    if (!write) {
        s.false_pc = vm->get_pc();
    }
    if (ast->r->r != NULL) {
        compile_node(ast->r->r, false);
    }
    if (!write) {
        s.end_pc = vm->get_pc();
    }

    // If this is phase 1, save these PC's to use in phase 2
    if (!write) {
        if_statements.insert(std::pair<UINT32, IfStatement>(start_pc, std::move(s)));
    }
}
void Compiler::compile_node_for_step(struct ast *ast) {
    // Get variable type and name
    if (ast->l->l->var_type == Type::None) {
        state = CompilerState::None;
    } else {
        if (!inside_function) {
            state = CompilerState::Globals;
        } else {
            state = CompilerState::Locals;
        }
    }
    compile_node(ast->l, false);
    state = CompilerState::None;

    // Create loop
    var_name = *ast->l->l->v_string;
    int var_id = find_or_create_variable(VariableType::NoType, false);
    if (var_type == Type::Integer) {

        // This is the TO value
        compile_node(ast->r->l, true);
        switch (peek_type()) {
        case Type::Float:
            vm->insert_bytecode(line_number, file_number, write, F_TO_I);
            break;
        }

        // iterations value
        vm->insert_instruction(line_number, file_number, write, LOAD_I, var_id);
        vm->insert_bytecode(line_number, file_number, write, SUBTRACT_I);
        stack_pop();

        // Step
        compile_node(ast->r->r->l, true);
        switch (peek_type()) {
        case Type::Float:
            vm->insert_bytecode(line_number, file_number, write, F_TO_I);
            break;
        }
        stack_pop();

        // PC
        vm->insert_instruction(line_number, file_number, write, CONST_I, vm->get_pc() + 2);

        // Actual FOR loop token
        vm->insert_instruction(line_number, file_number, write, FOR_I, var_id);

        // Process loop content
        compile_node(ast->r->r->r, true);

        // And next
        vm->insert_instruction(line_number, file_number, write, NEXT_I, var_id);
    } else {

        // This is the TO value
        compile_node(ast->r->l, true);
        switch (peek_type()) {
        case Type::Integer:
            vm->insert_bytecode(line_number, file_number, write, I_TO_F);
            break;
        }

        // iterations value
        vm->insert_instruction(line_number, file_number, write, LOAD_F, var_id);
        vm->insert_bytecode(line_number, file_number, write, SUBTRACT_F);
        stack_pop();

        // Step
        compile_node(ast->r->r->l, true);
        switch (peek_type()) {
        case Type::Integer:
            vm->insert_bytecode(line_number, file_number, write, I_TO_F);
            break;
        }
        stack_pop();

        // PC
        vm->insert_instruction(line_number, file_number, write, CONST_I, vm->get_pc() + 2);

        // Actual FOR loop token
        vm->insert_instruction(line_number, file_number, write, FOR_F, var_id);

        // Process loop content
        compile_node(ast->r->r->r, true);

        // And next
        vm->insert_instruction(line_number, file_number, write, NEXT_F, var_id);
    }
}

void Compiler::compile_node_for(struct ast *ast) {
    // Get variable type and name
    if (ast->l->l->var_type == Type::None) {
        state = CompilerState::None;
    } else {
        if (!inside_function) {
            state = CompilerState::Globals;
        } else {
            state = CompilerState::Locals;
        }
    }
    compile_node(ast->l, false);
    state = CompilerState::None;

    // Create loop
    var_name = *ast->l->l->v_string;
    int var_id = find_or_create_variable(VariableType::NoType, false);
    if (var_type == Type::Integer) {

        // This is the TO value
        compile_node(ast->r->l, true);

        // iterations value
        vm->insert_instruction(line_number, file_number, write, LOAD_I, var_id);
        vm->insert_bytecode(line_number, file_number, write, SUBTRACT_I);
        stack_pop();

        // Step
        vm->insert_instruction(line_number, file_number, write, CONST_I, 1);

        // PC
        vm->insert_instruction(line_number, file_number, write, CONST_I, vm->get_pc() + 2);

        // Actual FOR loop token
        vm->insert_instruction(line_number, file_number, write, FOR_I, var_id);

        // Process loop content
        compile_node(ast->r->r, true);

        // And next
        vm->insert_instruction(line_number, file_number, write, NEXT_I, var_id);
    } else {

        // This is the TO value
        compile_node(ast->r->l, true);
        switch (peek_type()) {
        case Type::Integer:
            vm->insert_bytecode(line_number, file_number, write, I_TO_F);
            break;
        }

        // iterations value
        vm->insert_instruction(line_number, file_number, write, LOAD_F, var_id);
        vm->insert_bytecode(line_number, file_number, write, SUBTRACT_F);
        stack_pop();

        // Step
        vm->insert_instruction(line_number, file_number, write, LOAD_F, constant_float_create(1.0));

        // PC
        vm->insert_instruction(line_number, file_number, write, CONST_I, vm->get_pc() + 2);

        // Actual FOR loop token
        vm->insert_instruction(line_number, file_number, write, FOR_F, var_id);

        // Process loop content
        compile_node(ast->r->r, true);

        // And next
        vm->insert_instruction(line_number, file_number, write, NEXT_F, var_id);
    }
}

void Compiler::compile_node_while(struct ast *ast) {
    UINT32 start_pc = vm->get_pc();
    IfStatement s;
    s.end_pc = 0;
    if (write) {
        auto f = if_statements.find(start_pc);
        s.end_pc = (*f).second.end_pc;
    }

    // This is the condition
    compile_node(ast->l, true);
    stack_pop();

    // We don't know the amount to jump ahead yet
    vm->insert_instruction(line_number, file_number, write, JNE, s.end_pc);

    // This is the truth section
    compile_node(ast->r, false);
    vm->insert_instruction(line_number, file_number, write, JUMP, start_pc);

    if (!write) {
        s.end_pc = vm->get_pc();
    }

    // If this is phase 1, save these PC's to use in phase 2
    if (!write) {
        if_statements.insert(std::pair<UINT32, IfStatement>(start_pc, std::move(s)));
    }
}