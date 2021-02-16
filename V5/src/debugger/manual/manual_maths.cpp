#define _GLIBCXX_USE_C99 1
#include "../debugger.h"
#include "manual.h"

extern std::vector<ManualKeyword> keywords;

void create_manual_maths()
{
    keywords.push_back(ManualKeyword(
        "ABS",
        "ABS",
        KeywordCategory::MATHS_AND_NUMBERS,
        "Function giving magnitude of its numeric argument.",
        {
            new ManualSyntaxParensOpen(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxParensClose(),
        },
        "Any numeric.",
        "If positive, returns the argument, otherwise -argument if negative.",
        "x%=ABS(y%-100)"));
    keywords.push_back(ManualKeyword(
        "ACS",
        "ACS",
        KeywordCategory::MATHS_AND_NUMBERS,
        "Function giving the arc-cosine of its numeric argument.",
        {
            new ManualSyntaxParensOpen(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxParensClose(),
        },
        "Any numeric between -1 and 1 inclusive.",
        "Real in the range 0 TO PI radians.",
        "ang=ACS(0.5)"));
    keywords.push_back(ManualKeyword(
        "ASN",
        "ASN",
        KeywordCategory::MATHS_AND_NUMBERS,
        "Function giving the arc-sine of its numeric argument.",
        {
            new ManualSyntaxParensOpen(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxParensClose(),
        },
        "Any numeric between -1 and 1 inclusive.",
        "Real in the range -PI/2 TO PI/2 radians.",
        "ang=ASN(0.5)"));
    keywords.push_back(ManualKeyword(
        "ATN",
        "ATN",
        KeywordCategory::MATHS_AND_NUMBERS,
        "Function giving the arc-tangent of its numeric argument.",
        {
            new ManualSyntaxParensOpen(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxParensClose(),
        },
        "Any numeric.",
        "Real in the range -PI/2 TO PI/2 radians.",
        "PRINT ATN(opp/adj)"));
    keywords.push_back(ManualKeyword(
        "COS",
        "COS",
        KeywordCategory::MATHS_AND_NUMBERS,
        "Function giving the cosine of its numeric argument.",
        {
            new ManualSyntaxParensOpen(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxParensClose(),
        },
        "The argument is an angle in radians between -PI and PI, numbers outside this range are scaled down to the range.",
        "Real in the range -1 and 1.",
        "PRINT COS(RAD(30))"));
    keywords.push_back(ManualKeyword(
        "DEG",
        "DEG",
        KeywordCategory::MATHS_AND_NUMBERS,
        "Function converting from radians to degrees.",
        {
            new ManualSyntaxParensOpen(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxParensClose(),
        },
        "Any numeric value.",
        "A real equal to 180*<numeric_expression1>/PI.",
        "PRINT DEG(PI/2)"));
    keywords.push_back(ManualKeyword(
        "EXP",
        "EXP",
        KeywordCategory::MATHS_AND_NUMBERS,
        "Function returning the exponent of its argument.",
        {
            new ManualSyntaxParensOpen(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxParensClose(),
        },
        "A numeric, the range of values depends on the OS.",
        "Positive real from 0 to the largest positive real.",
        "a=EXP(3.2)"));
    keywords.push_back(ManualKeyword(
        "FALSE TRUE",
        "FALSE TRUE",
        KeywordCategory::MATHS_AND_NUMBERS,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "REAL",
        "REAL",
        KeywordCategory::MATHS_AND_NUMBERS,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "INT",
        "INT",
        KeywordCategory::MATHS_AND_NUMBERS,
        "",
        {},
        "",
        "",
        ""));
    keywords.push_back(ManualKeyword(
        "LN",
        "LN",
        KeywordCategory::MATHS_AND_NUMBERS,
        "Function returning the natural logarithm of its arguments.",
        {
            new ManualSyntaxParensOpen(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxParensClose(),
        },
        "Numeric in the range of 0 to the maximum real value.",
        "A real in a limited range.",
        "PRINT LN(10)"));
    keywords.push_back(ManualKeyword(
        "LOG",
        "LOG",
        KeywordCategory::MATHS_AND_NUMBERS,
        "Function returning the logarithm to base 10 of its argument.",
        {
            new ManualSyntaxParensOpen(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxParensClose(),
        },
        "Numeric in the range 0 to the maximum real value, excluding 0 itself.",
        "A real in a limited range.",
        "a=LOG(2.476)"));
    keywords.push_back(ManualKeyword(
        "PI",
        "PI",
        KeywordCategory::MATHS_AND_NUMBERS,
        "Function returning the value of PI.",
        {},
        "",
        "A real representing PI to the highest accuracy supported by the OS.",
        "PRINT PI"));
    keywords.push_back(ManualKeyword(
        "RAD",
        "RAD",
        KeywordCategory::MATHS_AND_NUMBERS,
        "Function returning the value of the argument (specified in degrees) in radians.",
        {
            new ManualSyntaxParensOpen(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxParensClose(),
        },
        "Any numeric value.",
        "A real giving the angle in radians, for the angle in degress argument.",
        "r=RAD(270)"));
    keywords.push_back(ManualKeyword(
        "RND",
        "RND",
        KeywordCategory::MATHS_AND_NUMBERS,
        "Function returning a random (or previous random) number.",
        {
            new ManualSyntaxParensOpen(),
            new ManualSyntaxValue("0 or 1 or >1"),
            new ManualSyntaxParensClose(),
        },
        "Integer value. Either 1) 0, 2) 1 or 3) an integer greater than 1.",
        "Factor = 0 -> Return previous random number.\rFactor = 1 -> Random real between 0 and 1.\rFactor > 1 -> Random integer in the range 1 to n, where n is the expression.",
        "dice%=RND(6)"));
    keywords.push_back(ManualKeyword(
        "SGN",
        "SGN",
        KeywordCategory::MATHS_AND_NUMBERS,
        "Function giving the sign of its numeric argument.",
        {
            new ManualSyntaxParensOpen(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxParensClose(),
        },
        "Any numeric value.",
        "-1 for negative arguments, 0 for zero valued and 1 for poasitive arguments.",
        "IF SGN(A%)=1 THEN FNPos()"));
    keywords.push_back(ManualKeyword(
        "SIN",
        "SIN",
        KeywordCategory::MATHS_AND_NUMBERS,
        "Function giving the sine of its numeric argument.",
        {
            new ManualSyntaxParensOpen(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxParensClose(),
        },
        "The argument is an angle in radians between -PI and PI, numbers outside this range are scaled down to the range.",
        "Real in the range -1 and 1.",
        "PRINT SIN(RND(135))"));
    keywords.push_back(ManualKeyword(
        "SQR",
        "SQR",
        KeywordCategory::MATHS_AND_NUMBERS,
        "Function returning the square root of numeric argument.",
        {
            new ManualSyntaxParensOpen(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxParensClose(),
        },
        "Any positive numeric.",
        "Real number which is the argument's square root.",
        "a=b+SQR(h*l)"));
    keywords.push_back(ManualKeyword(
        "TAN",
        "TAN",
        KeywordCategory::MATHS_AND_NUMBERS,
        "Function giving the tangent of its numeric argument.",
        {
            new ManualSyntaxParensOpen(),
            new ManualSyntaxNumericExpression(1),
            new ManualSyntaxParensClose(),
        },
        "The argument is an angle in radians between -PI/2 and PI/2, numbers outside this range are scaled down to the range.",
        "Real number for the tangent value.",
        "PRINT TAN(RAD(theta))"));
    keywords.push_back(ManualKeyword(
        "TIME",
        "TIME",
        KeywordCategory::MATHS_AND_NUMBERS,
        "",
        {},
        "",
        "",
        ""));
}