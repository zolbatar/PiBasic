#pragma once
#include "../exception.h"
#include "../parser/DARICParser.h"
#include "../parser/DARICVisitor.h"
#include "../vm/vm.h"
#include "antlr4-runtime.h"
#include "custom_types.h"

enum class CompilerState {
    NOSTATE,
    DATA,
    ASSIGNMENT,
    DIM,
};

enum class CompilerPhase {
    LOOKAHEAD,
    SIZE,
    COMPILE
};

enum class VariableScope {
    LOCAL,
    GLOBAL
};

class VarReference {
public:
    int id;
    std::string name;
    std::string field_name;
    int field_index;
    Type type;
    Type field_type;
    std::string custom_type_name;
};

class Compiler : public DARICVisitor {
public:
    Compiler();
    void compile(VM* vm, DARICParser::ProgContext* tree, std::string filename);

private:
    VM* vm;
    std::string filename;
    CompilerState state = CompilerState::NOSTATE;
    CompilerPhase phase = CompilerPhase::LOOKAHEAD;

    // Compilation stuff
    void reset();

    // Position
    void set_pos(antlr4::Token* t)
    {
        line_number = static_cast<UINT32>(t->getLine());
        char_position = static_cast<short>(t->getCharPositionInLine());
    }
    UINT32 line_number;
    short file_number, char_position;

    // Creating variables
    std::string function_name;

    // Globals
    UINT32 global_var_index = 0;
    std::map<std::string, Boxed> globals;

    // Arrays
    UINT32 last_array_dimensions = 0;

    // Custom types
    UINT32 custom_type_index = 0;
    std::map<std::string, CustomType> custom_types;
    std::string custom_type_name;
    UINT32 last_type_num_dimensions = 0;

    // Locals and functions
    int local_var_index = 0;
    std::map<std::string, Boxed> locals;
    bool inside_function = false;

    // Constants
    std::list<Boxed> constants;

    // PRINT
    bool print_semicolon_active = false;
    bool print_hex = false;
    bool print_justify = false;
    UINT32 create_print_flag() { return print_justify + (print_hex << 1); }

    // Variable stack, used for assignments etc.
    VarReference current_var;

    // Stack
    void ensure_stack_is_float();
    void ensure_stack_is_integer();
    void ensure_stack_is_string();
    std::stack<Type> type_list;
    void stack_push(Type type)
    {
        type_list.push(type);
    }
    UINT32 stack_size() { return static_cast<UINT32>(type_list.size()); }
    Type stack_pop()
    {
        if (type_list.size() == 0) {
            error("Error compiling");
        }
        auto var_type = type_list.top();
        type_list.pop();
        return var_type;
    }
    Type peek_type() { return type_list.top(); }

    // Arrays
    UINT32 last_array_num_dimensions = 0;

    // Create bytecode
    inline void insert_instruction(Bytecodes bc, Type type, UINT32 data) { vm->helper_bytecodes().insert_instruction(line_number, file_number, char_position, phase == CompilerPhase::COMPILE, bc, type, data); }
    inline void insert_bytecode(Bytecodes bc, Type type) { vm->helper_bytecodes().insert_bytecode(line_number, file_number, char_position, phase == CompilerPhase::COMPILE, bc, type); }

    // 3D types
    void setup_3d_types();

    // Constants
    UINT32 constant_float_create(VM_FLOAT v);
    UINT32 constant_string_create(std::string v);

    // Types of tokens
    void boolean(Bytecodes i);

    // Error handling
    void error(std::string msg)
    {
        throw DARICException(ErrorLocation::COMPILER, filename, line_number, char_position, msg);
    }

protected:
    antlrcpp::Any visitProg(DARICParser::ProgContext* context);
    antlrcpp::Any visitLine(DARICParser::LineContext* context);
    antlrcpp::Any visitLinenumber(DARICParser::LinenumberContext* context);
    antlrcpp::Any visitExprList(DARICParser::ExprListContext* context);
    antlrcpp::Any visitExpr(DARICParser::ExprContext* context);

    /* Statements */
    antlrcpp::Any visitStmt(DARICParser::StmtContext* context);
    antlrcpp::Any visitStmtDIM(DARICParser::StmtDIMContext* context);
    antlrcpp::Any visitStmtEND(DARICParser::StmtENDContext* context);
    antlrcpp::Any visitStmtINPUT(DARICParser::StmtINPUTContext* context);
    antlrcpp::Any visitStmtLET(DARICParser::StmtLETContext* context);
    antlrcpp::Any visitStmtLOCAL(DARICParser::StmtLOCALContext* context);
    antlrcpp::Any visitStmtPRINT(DARICParser::StmtPRINTContext* context);
    antlrcpp::Any visitStmtTYPE(DARICParser::StmtTYPEContext* context);

    /* Literals */
    antlrcpp::Any visitNumber(DARICParser::NumberContext* context);
    antlrcpp::Any visitNumberInteger(DARICParser::NumberIntegerContext* context);
    antlrcpp::Any visitNumberFloat(DARICParser::NumberFloatContext* context);
    antlrcpp::Any visitNumberHex(DARICParser::NumberHexContext* context);
    antlrcpp::Any visitNumberBinary(DARICParser::NumberBinaryContext* context);
    antlrcpp::Any visitString(DARICParser::StringContext* context);

    /* Varibles */
    bool find_variable(bool field, bool fire_error);
    void find_or_create_variable(VariableScope scope);
    void set_custom_type(std::string type);
    antlrcpp::Any visitVar(DARICParser::VarContext* context);
    antlrcpp::Any visitNumVar(DARICParser::NumVarContext* context);
    antlrcpp::Any visitNumVarFloat(DARICParser::NumVarFloatContext* context);
    antlrcpp::Any visitNumVarFloatArray(DARICParser::NumVarFloatArrayContext* context);
    antlrcpp::Any visitNumVarInteger(DARICParser::NumVarIntegerContext* context);
    antlrcpp::Any visitNumVarIntegerArray(DARICParser::NumVarIntegerArrayContext* context);
    antlrcpp::Any visitNumVarString(DARICParser::NumVarStringContext* context);
    antlrcpp::Any visitNumVarStringArray(DARICParser::NumVarStringArrayContext* context);
    antlrcpp::Any visitNumVarFloatField(DARICParser::NumVarFloatFieldContext* context);
    antlrcpp::Any visitNumVarIntegerField(DARICParser::NumVarIntegerFieldContext* context);
    antlrcpp::Any visitStrVar(DARICParser::StrVarContext* context);
    antlrcpp::Any visitVarName(DARICParser::VarNameContext* context);
    antlrcpp::Any visitVarNameInteger(DARICParser::VarNameIntegerContext* context);
    antlrcpp::Any visitVarNameString(DARICParser::VarNameStringContext* context);
    antlrcpp::Any visitVarNameType(DARICParser::VarNameTypeContext* context);
    antlrcpp::Any visitTypeVarType(DARICParser::TypeVarTypeContext* context);
    antlrcpp::Any visitVarDecl(DARICParser::VarDeclContext* context);
    antlrcpp::Any visitVarDeclWithDimension(DARICParser::VarDeclWithDimensionContext* context);
    antlrcpp::Any visitVarDeclInd(DARICParser::VarDeclIndContext* context);
    antlrcpp::Any visitVarDeclType(DARICParser::VarDeclTypeContext* context);
    antlrcpp::Any visitVarDeclArrayed(DARICParser::VarDeclArrayedContext* context);
    antlrcpp::Any visitVarList(DARICParser::VarListContext* context);
    antlrcpp::Any visitJustVar(DARICParser::JustVarContext* context);
    antlrcpp::Any visitJustVarName(DARICParser::JustVarNameContext* context);
    antlrcpp::Any visitJustVarNameInteger(DARICParser::JustVarNameIntegerContext* context);
    antlrcpp::Any visitJustVarNameString(DARICParser::JustVarNameStringContext* context);

    /* String expressions */
    antlrcpp::Any visitStrFunc(DARICParser::StrFuncContext* context);
    antlrcpp::Any visitStrExpr(DARICParser::StrExprContext* context);

    /* String functions */
    antlrcpp::Any visitStrFuncTIMES(DARICParser::StrFuncTIMESContext* context);
    antlrcpp::Any visitStrFuncCHRSP(DARICParser::StrFuncCHRSPContext* context);
    antlrcpp::Any visitStrFuncCHRS(DARICParser::StrFuncCHRSContext* context);
    antlrcpp::Any visitStrFuncLEFTS(DARICParser::StrFuncLEFTSContext* context);
    antlrcpp::Any visitStrFuncMIDS3(DARICParser::StrFuncMIDS3Context* context);
    antlrcpp::Any visitStrFuncMIDS2(DARICParser::StrFuncMIDS2Context* context);
    antlrcpp::Any visitStrFuncRIGHTS(DARICParser::StrFuncRIGHTSContext* context);
    antlrcpp::Any visitStrFuncSTRS(DARICParser::StrFuncSTRSContext* context);
    antlrcpp::Any visitStrFuncSTRSHEX(DARICParser::StrFuncSTRSHEXContext* context);
    antlrcpp::Any visitStrFuncSTRINGS(DARICParser::StrFuncSTRINGSContext* context);

    /* Print & Input */
    antlrcpp::Any visitPrintList(DARICParser::PrintListContext* context);
    antlrcpp::Any visitPrintListItem(DARICParser::PrintListItemContext* context);
    antlrcpp::Any visitPrintListExpr(DARICParser::PrintListExprContext* context);
    antlrcpp::Any visitPrintListTick(DARICParser::PrintListTickContext* context);
    antlrcpp::Any visitPrintListSPCP(DARICParser::PrintListSPCPContext* context);
    antlrcpp::Any visitPrintListSPC(DARICParser::PrintListSPCContext* context);

    /* Numeric expressions */
    antlrcpp::Any visitNumExprNumber(DARICParser::NumExprNumberContext* context);
    antlrcpp::Any visitNumExprVar(DARICParser::NumExprVarContext* context);
    antlrcpp::Any visitNumExprFunc(DARICParser::NumExprFuncContext* context);
    antlrcpp::Any visitNumExprNested(DARICParser::NumExprNestedContext* context);

    /* Numeric functions */
    antlrcpp::Any visitNumFunc(DARICParser::NumFuncContext* context);
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
    antlrcpp::Any visitNumExprStrRelop(DARICParser::NumExprStrRelopContext* context);
    antlrcpp::Any visitNumExprNumRelop(DARICParser::NumExprNumRelopContext* context);
    antlrcpp::Any visitCompare(DARICParser::CompareContext* context);
    antlrcpp::Any visitCompareEQ(DARICParser::CompareEQContext* context);
    antlrcpp::Any visitCompareNE(DARICParser::CompareNEContext* context);
    antlrcpp::Any visitCompareGT(DARICParser::CompareGTContext* context);
    antlrcpp::Any visitCompareGE(DARICParser::CompareGEContext* context);
    antlrcpp::Any visitCompareLT(DARICParser::CompareLTContext* context);
    antlrcpp::Any visitCompareLE(DARICParser::CompareLEContext* context);
};
