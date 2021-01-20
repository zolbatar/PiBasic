#pragma once
#include "../vm.h"

const int fixed_font = 0;
const int manual_font = 9;
const int manual_column_width = 225;

enum class SyntaxElement
{
    OPEN_PARENS,
    CLOSE_PARENS,
};

class ManualSyntax
{
public:
    virtual void render(Graphics *graphics) = 0;
};

class ManualSyntaxDelete : virtual public ManualSyntax
{
public:
    void render(Graphics *graphics) override
    {
        graphics->cursor_back(fixed_font);
    }
};

class ManualSyntaxComma : virtual public ManualSyntax
{
public:
    void render(Graphics *graphics) override
    {
        graphics->colour(255, 255, 255);
        graphics->print_text(fixed_font, ",", -1, -1);
    }
};

class ManualSyntaxSpace : virtual public ManualSyntax
{
public:
    void render(Graphics *graphics) override
    {
        graphics->colour(255, 255, 255);
        graphics->print_text(fixed_font, " ", -1, -1);
    }
};

class ManualSyntaxParensOpen : virtual public ManualSyntax
{
public:
    void render(Graphics *graphics) override
    {
        graphics->colour(255, 255, 255);
        graphics->print_text(fixed_font, "(", -1, -1);
    }
};

class ManualSyntaxExpression : virtual public ManualSyntax
{
public:
    ManualSyntaxExpression(int sequence)
        : sequence(sequence){};
    void render(Graphics *graphics) override
    {
        graphics->colour(100, 100, 255);
        graphics->print_text(fixed_font, "<expression" + std::to_string(sequence) + ">", -1, -1);
    }

private:
    int sequence;
};

class ManualSyntaxNumericExpression : virtual public ManualSyntax
{
public:
    ManualSyntaxNumericExpression(int sequence)
        : sequence(sequence){};
    void render(Graphics *graphics) override
    {
        graphics->colour(100, 100, 255);
        graphics->print_text(fixed_font, "<numeric_expression" + std::to_string(sequence) + ">", -1, -1);
    }

private:
    int sequence;
};

class ManualSyntaxStringExpression : virtual public ManualSyntax
{
public:
    ManualSyntaxStringExpression(int sequence)
        : sequence(sequence){};
    void render(Graphics *graphics) override
    {
        graphics->colour(100, 100, 255);
        graphics->print_text(fixed_font, "<string_expression" + std::to_string(sequence) + ">", -1, -1);
    }

private:
    int sequence;
};

class ManualSyntaxVariable : virtual public ManualSyntax
{
public:
    ManualSyntaxVariable(int sequence)
        : sequence(sequence){};
    void render(Graphics *graphics) override
    {
        graphics->colour(100, 100, 255);
        graphics->print_text(fixed_font, "<variable" + std::to_string(sequence) + ">", -1, -1);
    }

private:
    int sequence;
};

class ManualSyntaxNumericVariable : virtual public ManualSyntax
{
public:
    ManualSyntaxNumericVariable(int sequence)
        : sequence(sequence){};
    void render(Graphics *graphics) override
    {
        graphics->colour(100, 100, 255);
        graphics->print_text(fixed_font, "<numeric_variable" + std::to_string(sequence) + ">", -1, -1);
    }

private:
    int sequence;
};

class ManualSyntaxParensClose : virtual public ManualSyntax
{
public:
    void render(Graphics *graphics) override
    {
        graphics->colour(255, 255, 255);
        graphics->print_text(fixed_font, ")", -1, -1);
    }
};

class ManualSyntaxOptional : virtual public ManualSyntax
{
public:
    ManualSyntaxOptional(std::string text)
        : text(text){};
    void render(Graphics *graphics) override
    {
        graphics->colour(255, 255, 0);
        graphics->print_text(fixed_font, "[" + text + "]", -1, -1);
    }

private:
    std::string text;
};

class ManualSyntaxValue : virtual public ManualSyntax
{
public:
    ManualSyntaxValue(std::string text)
        : text(text){};
    void render(Graphics *graphics) override
    {
        graphics->colour(100, 100, 255);
        graphics->print_text(fixed_font, text, -1, -1);
    }

private:
    std::string text;
};

class ManualKeyword
{
public:
    ManualKeyword(std::string keyword, std::string keywordLong, KeywordCategory category, std::string description, std::vector<ManualSyntax *> syntax, std::string arguments, std::string result, std::string examples)
        : keyword(keyword), keywordLong(keywordLong), category(category), description(description), syntax(syntax), arguments(arguments), result(result), examples(examples){};
    std::string keyword;
    std::string keywordLong;
    KeywordCategory category;
    std::string description;
    std::vector<ManualSyntax *> syntax;
    std::string arguments;
    std::string result;
    std::string examples;
};
