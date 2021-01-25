#define _GLIBCXX_USE_C99 1
#include "../debugger.h"
#include "manual.h"

extern std::vector<ManualKeyword> keywords;

void create_manual_keyboardmouse()
{
    keywords.push_back(ManualKeyword(
        "INKEY",
        "INKEY",
        KeywordCategory::KEYBOARD_AND_MOUSE,
        "Function returning a character code, or checking a specific key is pressed.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxNumericExpression(1),
        },
        "<numeric_expression1> is an integer number.\r(1) If <expression> is -1 or less, then INKEY checks for a specific key being pressed.\r(2) If <expression> is 0 or more then INKEY waits the specified centiseconds.",
        "(1) It returns TRUE if the key was being pressed, otherwise FALSE.\r(2) It returns the ASCII code if a key is pressed before the timeout, otherwise returns -1.",
        "IF INKEY(-99) PRINT \"Space pressed\"\rIF INKEY(100)=-1 PRINT \"Timeout\""));
    keywords.push_back(ManualKeyword(
        "INKEY$",
        "INKEY$",
        KeywordCategory::KEYBOARD_AND_MOUSE,
        "Function returning a string of the key pressed.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxNumericExpression(1),
        },
        "<numeric_expression1> is an integer number.\r<expression> is 0 or more and specifies the wait in centiseconds, similar to INKEY.",
        "It returns a 1 character string with the key pressed, such as \"A\" if a key is pressed before the timeout, otherwise returns an empty string.",
        "IF INKEY$(100)=\"A\" PRINT \"A Pressed\""));
    keywords.push_back(ManualKeyword(
        "GET",
        "GET",
        KeywordCategory::KEYBOARD_AND_MOUSE,
        "Function waiting for a key press and returning the character code.",
        {},
        "",
        "It returns the ASCII code of the next key pressed (or already pressed and in the buffer). It will wait for a key to be pressed.",
        "IF GET=32 PRINT \"Space pressed\"\r"));
    keywords.push_back(ManualKeyword(
        "GET$",
        "GET$",
        KeywordCategory::KEYBOARD_AND_MOUSE,
        "Function waiting for a key press and returning the character.",
        {},
        "",
        "It returns the next key pressed (or already in the buffer) as a 1 character string. It will wait for a key to be pressed.",
        "IF GET$=\"Z\" PRINT \"Z\""));
    keywords.push_back(ManualKeyword(
        "INPUT",
        "INPUT",
        KeywordCategory::KEYBOARD_AND_MOUSE,
        "Statement for inputting data via the keyboard.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxOptional("<string>"),
            new ManualSyntaxOptional(","),
            new ManualSyntaxVariable(1),
            new ManualSyntaxOptional(",<variable>"),
        },
        "INPUT is relatively complex. It's purpose is to receive input from the keyboard. It starts with an optional string that displays a prompt to the user, if this is followed by a comma then a ? is displayed before each variable is input. After the optional prompt is one or more variable names. The user is then requested to enter the value of each variable in turn.",
        "The inputted values are automatically converted to real, integer or string values and the specified variables set.",
        "INPUT \"Please enter your name and age\",name$,age%"));
    keywords.push_back(ManualKeyword(
        "MOUSE",
        "MOUSE",
        KeywordCategory::KEYBOARD_AND_MOUSE,
        "Statement reading the status of the mouse.",
        {
            new ManualSyntaxSpace(),
            new ManualSyntaxNumericVariable(1),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericVariable(2),
            new ManualSyntaxComma(),
            new ManualSyntaxNumericVariable(3),
        },
        "Three numeric variables.",
        "<variable1> is set to the current mouse X position, and <variable2> to the corresponding Y position.\r\r<variable3> is a single integer value representing all 3 mouse buttons - each button being a single bit combined to show the state of all 3 buttons. Button 1 (left) is value 4, button 2 (middle) is value 2 and button 3 (right) is value 1. By using the logical AND operator it's possible to get the state of each.",
        "x%=0,y%=0,buttons%=0\rMOUSE x%,y%,buttons%\rPRINT \"Mouse X is \" + STR$(x%)\rIF state% AND 4 PRINT \"Left pressed\""));
}
