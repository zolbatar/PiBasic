#pragma once
#include "../parser/DARICParser.h"
#include "../parser/DARICVisitor.h"
#include "../vm/vm.h"
#include "antlr4-runtime.h"

enum class CompilerState {
    NOSTATE,
    PRINT,
    DATA
};

enum class CompilerPhase {
    LOOKAHEAD,
    SIZE,
    COMPILE
};

class Compiler : public DARICVisitor {
public:
    Compiler(VM* vm, DARICParser::ProgContext* tree);
    antlrcpp::Any Compile_LET(DARICParser::StmtContext* context);
    antlrcpp::Any Compile_PRINT(DARICParser::StmtContext* context);

private:
    VM* vm;
    CompilerState state = CompilerState::NOSTATE;
    CompilerPhase phase = CompilerPhase::LOOKAHEAD;

    // Creating variables
    Type var_type = Type::NOTYPE;
    std::string var_name;
    std::string function_name;
    Boxed* var = NULL;

    // Globals and locals
    int global_var_index = 0;
    std::map<std::string, Boxed> globals;

    // Constants
    std::list<Boxed> constants;

    // Position etc.
    int line_number = 0;
    short file_number = 0;

    // PRINT
    bool print_semicolon_active = false;
    bool print_hex = false;
    bool print_justify = false;
    UINT32 create_print_flag() { return print_justify + (print_hex << 1); }

    // Stack
    void insert_bytecode_based_on_type(std::map<Type, Bytecodes> m, Type type);
    void insert_instruction_based_on_type(std::map<Type, Bytecodes> m, Type type, UINT32 value);
    void insert_bytecode_based_on_peektype(std::map<Type, Bytecodes> m);
    void ensure_stack_is_float();
    void ensure_stack_is_integer();
    void ensure_stack_is_string();
    std::stack<Type> type_list;
    void stack_push(Type type)
    {
        type_list.push(type);
    }
    UINT32 stack_size() { return static_cast<UINT32>(type_list.size()); }
    void stack_pop()
    {
        var_type = type_list.top();
        type_list.pop();
        if (type_list.empty())
            var_type = Type::NOTYPE;
    }
    void stack_pop_keep()
    {
        var_type = type_list.top();
        type_list.pop();
    }
    Type peek_type() { return type_list.top(); }

    // Create bytecode
    inline void insert_instruction(Bytecodes bc, UINT32 data)
    {
        vm->helper_bytecodes().insert_instruction(line_number, file_number, phase == CompilerPhase::COMPILE, bc, data);
    }

    inline void insert_bytecode(Bytecodes bc)
    {
        vm->helper_bytecodes().insert_bytecode(line_number, file_number, phase == CompilerPhase::COMPILE, bc);
    }

    // Constants
    UINT32 constant_float_create(VM_FLOAT v);
    UINT32 constant_string_create(std::string v);

    // Types of tokens
    void boolean(Bytecodes i);

protected:
    antlrcpp::Any visitProg(DARICParser::ProgContext* context);
    antlrcpp::Any visitLine(DARICParser::LineContext* context);
    antlrcpp::Any visitLinenumber(DARICParser::LinenumberContext* context);
    antlrcpp::Any visitStmt(DARICParser::StmtContext* context);
    antlrcpp::Any visitVar(DARICParser::VarContext* context);
    antlrcpp::Any visitNumVar(DARICParser::NumVarContext* context);
    antlrcpp::Any visitStrVar(DARICParser::StrVarContext* context);
    antlrcpp::Any visitVarName(DARICParser::VarNameContext* context);
    antlrcpp::Any visitVarDecl(DARICParser::VarDeclContext* context);
    antlrcpp::Any visitVarAssign(DARICParser::VarAssignContext* context);
    antlrcpp::Any visitVarList(DARICParser::VarListContext* context);
    antlrcpp::Any visitExprList(DARICParser::ExprListContext* context);
    antlrcpp::Any visitPrintList(DARICParser::PrintListContext* context);
    antlrcpp::Any visitExpr(DARICParser::ExprContext* context);
    antlrcpp::Any visitNumber(DARICParser::NumberContext* context);
    antlrcpp::Any visitNumberInteger(DARICParser::NumberIntegerContext* context);
    antlrcpp::Any visitNumberFloat(DARICParser::NumberFloatContext* context);
    antlrcpp::Any visitNumberHex(DARICParser::NumberHexContext* context);
    antlrcpp::Any visitNumberBinary(DARICParser::NumberBinaryContext* context);
    antlrcpp::Any visitString(DARICParser::StringContext* context);
    antlrcpp::Any visitStrFunc(DARICParser::StrFuncContext* context);
    antlrcpp::Any visitStrExpr(DARICParser::StrExprContext* context);
    antlrcpp::Any visitNumFunc(DARICParser::NumFuncContext* context);

    /* Numeric expressions */
    antlrcpp::Any visitNumExprNumber(DARICParser::NumExprNumberContext* context);
    antlrcpp::Any visitNumExprFunc(DARICParser::NumExprFuncContext* context);
    antlrcpp::Any visitNumExprNested(DARICParser::NumExprNestedContext* context);

    /* Numeric functions */
    antlrcpp::Any visitNumFuncPI(DARICParser::NumFuncPIContext* context);
    antlrcpp::Any visitNumFuncTIME(DARICParser::NumFuncTIMEContext* context);
    antlrcpp::Any visitNumFuncRND(DARICParser::NumFuncRNDContext* context);
    antlrcpp::Any visitNumFuncRND0(DARICParser::NumFuncRND0Context* context);
    antlrcpp::Any visitNumFuncRND1(DARICParser::NumFuncRND1Context* context);
    antlrcpp::Any visitNumFuncRNDRANGE(DARICParser::NumFuncRNDRANGEContext* context);
    antlrcpp::Any visitNumFuncLN(DARICParser::NumFuncLNContext* context);
    antlrcpp::Any visitNumFuncLOG(DARICParser::NumFuncLOGContext* context);
    antlrcpp::Any visitNumFuncEXP(DARICParser::NumFuncEXPContext* context);
    antlrcpp::Any visitNumFuncATN(DARICParser::NumFuncATNContext* context);
    antlrcpp::Any visitNumFuncTAN(DARICParser::NumFuncTANContext* context);
    antlrcpp::Any visitNumFuncCOS(DARICParser::NumFuncCOSContext* context);
    antlrcpp::Any visitNumFuncSIN(DARICParser::NumFuncSINContext* context);
    antlrcpp::Any visitNumFuncABS(DARICParser::NumFuncABSContext* context);
    antlrcpp::Any visitNumFuncACS(DARICParser::NumFuncACSContext* context);
    antlrcpp::Any visitNumFuncASN(DARICParser::NumFuncASNContext* context);
    antlrcpp::Any visitNumFuncDEG(DARICParser::NumFuncDEGContext* context);
    antlrcpp::Any visitNumFuncRAD(DARICParser::NumFuncRADContext* context);
    antlrcpp::Any visitNumFuncSQR(DARICParser::NumFuncSQRContext* context);
    antlrcpp::Any visitNumFuncSGN(DARICParser::NumFuncSGNContext* context);
    
    /* Numeric functions taking string */
    antlrcpp::Any visitNumFuncASC(DARICParser::NumFuncASCContext* context);
    antlrcpp::Any visitNumFuncLEN(DARICParser::NumFuncLENContext* context);
    antlrcpp::Any visitNumFuncINSTR2(DARICParser::NumFuncINSTR2Context* context);
    antlrcpp::Any visitNumFuncINSTR3(DARICParser::NumFuncINSTR3Context* context);
    antlrcpp::Any visitNumFuncVAL(DARICParser::NumFuncVALContext* context);

    /* Numeric maths */
    void expression_type_conversion(DARICParser::NumExprContext* context, bool DIVIDE);
    antlrcpp::Any visitNumExprHat(DARICParser::NumExprHatContext* context);
    antlrcpp::Any visitNumExprMultiply(DARICParser::NumExprMultiplyContext* context);
    antlrcpp::Any visitNumExprDivide(DARICParser::NumExprDivideContext* context);
    antlrcpp::Any visitNumExprDIV(DARICParser::NumExprDIVContext* context);
    antlrcpp::Any visitNumExprMOD(DARICParser::NumExprMODContext* context);
    antlrcpp::Any visitNumExprPlus(DARICParser::NumExprPlusContext* context);
    antlrcpp::Any visitNumExprSubtract(DARICParser::NumExprSubtractContext* context);
    antlrcpp::Any visitNumExprSHL(DARICParser::NumExprSHLContext* context);
    antlrcpp::Any visitNumExprSHR(DARICParser::NumExprSHRContext* context);

    /* Numeric boolean */
    antlrcpp::Any visitNumExprNOT(DARICParser::NumExprNOTContext* context);
    antlrcpp::Any visitNumExprAND(DARICParser::NumExprANDContext* context);
    antlrcpp::Any visitNumExprOR(DARICParser::NumExprORContext* context);
    antlrcpp::Any visitNumExprEOR(DARICParser::NumExprEORContext* context);

    /* Comparisons */
    antlrcpp::Any visitCompare(DARICParser::CompareContext* context);
    antlrcpp::Any visitNumExprStrRelop(DARICParser::NumExprStrRelopContext* context);
    antlrcpp::Any visitNumExprNumRelop(DARICParser::NumExprNumRelopContext* context);
};
