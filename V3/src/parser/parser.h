#pragma once
#include "../tokeniser/tokeniser.h"
#include <map>
#include <stack>

enum class Type {
    None,
    Integer,
    Float,
    String,
    IntegerArray,
    FloatArray,
    StringArray,
    Type,
    TypeArray
};

enum class NodeType {
    None,
    SubExpression,
    Assignment,
    Expression,
    Function,
    Integer,
    Real,
    String,
    Token,
    Type,
    Variable,
    VariableWithIndex,
    VariableType,
    VariableTypeWithIndex
};

struct ASTNode {
    NodeType type;
    Type var_type;
    VM_INT v_integer;
    VM_FLOAT v_real;
    TokenType token;
    std::string v_string;
    std::list<ASTNode> children;
    int file_number;
    int line_number;
    int char_number;
};

class Parser {
public:
    Parser(Tokeniser* tokeniser);
    void parse();

private:
    void start_of_statement();
    void parse_token();
    void parse_token_DIM();
    void parse_token_IF();
    void parse_token_FOR();
    void parse_token_PRINT();
    void parse_token_graphics();
    void parse_assignment();
    ASTNode create_node(NodeType type);
    ASTNode create_variable_node(bool assignment, bool allow_indexed, bool allow_fields);
    void add_node(ASTNode node);
    void add_child_node(ASTNode& parent, ASTNode node);
    void advance_token();
    void error(std::string error);

    // Expression (shunting yard)
    ASTNode create_expression_node(bool assignment, bool subexpression);
    bool is_expression_terminator(bool assignment);
    void ensure_node_is_token(TokenType oper);
    bool is_left_associative(TokenType type);
    int get_operator_precedence(TokenType type);
    bool token_has_parameters(TokenType type);

    Tokeniser* tokeniser;
    std::list<Token>::iterator tokens_it;
    std::list<Token>::iterator tokens_end;
    std::map<int, std::list<ASTNode>> nodes;
    int last_line_number = -1;
};