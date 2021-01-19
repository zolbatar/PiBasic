%option 8bit warn nodefault
%option noyywrap
%option yylineno

%{
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
#define _GLIBCXX_USE_C99 1
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_set>
#include <stack>
#include <map>
#include "parser.hpp"
using namespace std;
int yyfileno = 0;
extern int yylex();
extern int statement;
std::string file;
#if defined(__unix__) || defined(RISCOS)
#else
#define strdup _strdup
#endif
std::unordered_set<std::string> included_files;
std::map<std::string, int> files_index;
std::stack<std::string> file_stack;
std::stack<int> yylineno_stack;
%}

comment             .*
ws                  [ \t]+
term				[:\n]+
alpha               [A-Za-z]
alphanumeric        [A-Za-z0-9_]
dig                 [0-9]
hex                 [A-Fa-f0-9]
line_number         ^[ \t]*{dig}+
integer             {dig}+
hexinteger          \&{hex}*
float               {dig}*\.{dig}*([eE][-+]?{dig}+)?
string              \"(\\.|[^"])*\"
variable			{alpha}+{alphanumeric}*
integer_variable	{alpha}+{alphanumeric}*\%
object_variable		{alpha}+{alphanumeric}*\!
string_variable     {alpha}+{alphanumeric}*\$
string_function		(?i:"Fn"){string_variable}
integer_function	(?i:"Fn"){integer_variable}
float_function		(?i:"Fn"){variable}
procedure			(?i:"Proc"){variable}
def_procedure		(?i:"Def")(?i:"Proc"){variable}
def_integer_fn      (?i:"Def")(?i:"Fn"){integer_variable}
def_float_fn        (?i:"Def")(?i:"Fn"){variable}
def_string_fn       (?i:"Def")(?i:"Fn"){string_variable}
install_string      (?i:"Install"){ws}{string}
star                \*\*{alpha}+
%%

(?i:"Rem"){comment}	/* skip comments */
{ws}                /* skip blanks and tabs */
{term}              return TERM;
"//"                return INTEGERDIVIDE;
"="					return E;
"<="				return LE;
">="				return GE;
"<>"				return NE;
"<<"				return SHL;
">>"				return SHR;
";;"                return DOUBLESEMI;
"=>"                return RETURNVALUE;
(?i:"Bget#")		return BGET;
(?i:"Bput#")		return BPUT;
(?i:"Case")			return CASE;
(?i:"Close#")		return CLOSE;
(?i:"Data")			return DATA;
(?i:"Def")			return DEFINE;
(?i:"Dim")			return DIM;
(?i:"Else")			return ELSE;
(?i:"End")			return END;
(?i:"EndCase")		return END_CASE;
(?i:"EndIf")		return END_IF;
(?i:"EndFn")		return END_FUNCTION;
(?i:"EndProc")		return END_PROCEDURE;
(?i:"EndType")		return END_TYPE;
(?i:"EndWhile")		return END_WHILE;
(?i:"Eof#")			return EOFH;
(?i:"Field")		return FIELD;
(?i:"Fn")			return FUNCTION;
(?i:"For")			return FOR;
(?i:"Global")		return GLOBAL;
(?i:"Gosub")		return GOSUB;
(?i:"Goto")		    return GOTO;
(?i:"Inkey")		return INKEY;
(?i:"Inkey$")		return INKEYS;
(?i:"Input")		return INPUT;
(?i:"Let")			return GLOBAL;
(?i:"If")			return IF;
(?i:"Local")        return LOCAL;
(?i:"Next")         return NEXT;
(?i:"Of")			return OF;
(?i:"OpenIn")       return OPENIN;
(?i:"OpenOut")      return OPENOUT;
(?i:"OpenUp")       return OPENUP;
(?i:"Otherwise")    return OTHERWISE;
(?i:"Print")        return PRINT;
(?i:"Read")         return READ;
(?i:"Ref")          return REF;
(?i:"Repeat")       return REPEAT;
(?i:"Restore")      return RESTORE;
(?i:"Rnd")			return RND;
(?i:"Oscli")		return OSCLI;
(?i:"Return")		return RETURN;
(?i:"Spc")			return SPC;
(?i:"Step")			return STEP;
(?i:"Tab")			return TAB;
(?i:"Then")			return THEN;
(?i:"To")			return TO;
(?i:"Time")			return TIME;
(?i:"Time$")		return TIMES;
(?i:"TraceOn")		return TRACEON;
(?i:"TraceOff")		return TRACEOFF;
(?i:"Type")			return TYPE;
(?i:"Until")		return UNTIL;
(?i:"When")			return WHEN;
(?i:"While")		return WHILE;

(?i:"Circle") 		return CIRCLE;
(?i:"Cls") 			return CLS;
(?i:"ClipOn")	    return CLIP;
(?i:"ClipOff")		return CLIPOFF;
(?i:"Colour")		return COLOUR;
(?i:"ColourBg")		return COLOURBG;
(?i:"Ellipse") 		return ELLIPSE;
(?i:"Fill")			return FILL;
(?i:"Flip")			return FLIP;
(?i:"Graphics")     return GRAPHICS;
(?i:"Line")			return LINE;
(?i:"Rectangle")	return RECTANGLE;
(?i:"Plot")			return PLOT;
(?i:"Shaded")		return SHADED;
(?i:"Text")		    return TEXT;
(?i:"TextRight")	return TEXTRIGHT;
(?i:"TextCentre")   return TEXTCENTRE;
(?i:"TextCenter")   return TEXTCENTRE;
(?i:"LoadTypeface") return LOADTYPEFACE;
(?i:"CreateFont")   return CREATEFONT;
(?i:"Mono10")       return MONO10;
(?i:"Mono15")       return MONO15;
(?i:"Mono20")       return MONO20;
(?i:"Mono25")       return MONO25;
(?i:"Mono30")       return MONO30;
(?i:"Mono40")       return MONO40;
(?i:"Mono50")       return MONO50;
(?i:"Mono75")       return MONO75;
(?i:"Mono100")      return MONO100;
(?i:"Prop10")       return PROP10;
(?i:"Prop15")       return PROP15;
(?i:"Prop20")       return PROP20;
(?i:"Prop25")       return PROP25;
(?i:"Prop30")       return PROP30;
(?i:"Prop40")       return PROP40;
(?i:"Prop50")       return PROP50;
(?i:"Prop75")       return PROP75;
(?i:"Prop100")      return PROP100;
(?i:"Triangle")		return TRIANGLE;
(?i:"ScreenWidth")	return SCREENWIDTH;
(?i:"ScreenHeight")	return SCREENHEIGHT;

(?i:"Vertex")		return PI3D_CREATEVERTEX;
(?i:"Face")			return PI3D_CREATETRIANGLE;
(?i:"Shape")		return PI3D_CREATESHAPE;
(?i:"Render")		return PI3D_RENDERFRAME;
(?i:"Object")		return PI3D_CREATEOBJECT;
(?i:"Translate")	return PI3D_TRANSLATE;
(?i:"Rotate")		return PI3D_ROTATE;
(?i:"Scale")		return PI3D_SCALE; 
(?i:"Solid")		return SOLID; 
(?i:"Wireframe")	return WIREFRAME; 
(?i:"EdgedWireframe") return EDGEDWIREFRAME;

(?i:"Asc")			return ASC;
(?i:"Chr$")			return CHRS;
(?i:"Instr")		return INSTR;
(?i:"Left$")		return LEFTS;
(?i:"Mid$")			return MIDS;
(?i:"Right$")		return RIGHTS;
(?i:"Len")			return LEN;
(?i:"Str$")			return STRS;
(?i:"String$")		return STRINGS;

(?i:"And")			return AND;
(?i:"Or")			return OR;
(?i:"Eor")			return EOR;

(?i:"Float")		return FLOAT;
(?i:"Int")			return INT;
(?i:"Acs")			return ACS;
(?i:"Div")			return DIV;
(?i:"Mod")			return MOD;
(?i:"Sqr")			return SQR; 
(?i:"Ln")			return LN;
(?i:"Log")			return LOG;
(?i:"Exp")			return EXP;
(?i:"Atn")			return ATN;
(?i:"Tan")			return TAN;
(?i:"Cos")			return COS;
(?i:"Sin")			return SIN; 
(?i:"Asn")			return ASN; 
(?i:"Abs")			return ABS; 
(?i:"Deg")			return DEG; 
(?i:"Rad")			return RAD; 
(?i:"Sgn")			return SGN; 
(?i:"Val")			return VAL; 
(?i:"Pi")			return PI; 

(?i:"Not")			return NOT; 
(?i:"False")		return FALSE; 
(?i:"True")			return TRUE; 

{install_string}    { 
                        strcpy(yytext, yytext + 7); 
                        auto s = std::string(yytext);
                        size_t pos;
                        while ((pos = s.find(" ")) != std::string::npos) {
                            s.replace(pos, 1, "");
                        }
                        while ((pos = s.find("\"")) != std::string::npos) {
                            s.replace(pos, 1, "");
                        }

                        // Have we already included?
                        if (included_files.count(s) > 0) {
	                        printf("Already included '%s'\n", s.c_str()); 
                        } else {
                            yyfileno++;
                            files_index.insert(std::pair<std::string, int>(s, yyfileno));
                            strcpy(yytext, s.c_str());
                            included_files.insert(std::move(s));
                            yyin = fopen(yytext, "r");
                            if (!yyin) {
                                fprintf(stderr, "Include file '%s' not found", yytext);
                                exit(1);
                            }
	                        std::cout << "Including '" << yytext << "' at line " << yylineno << " as file index " << yyfileno << std::endl;
                            file_stack.push(std::move(file));
                            file = yytext;
                            yylineno_stack.push(yylineno);
                            yylineno = 0;
                            yypush_buffer_state(yy_create_buffer(yyin, YY_BUF_SIZE));
                            BEGIN(INITIAL);
                        }
                    }
<<EOF>>             {
                        yypop_buffer_state();
                        if (file_stack.size() > 0) {
                            file = file_stack.top();
                            yylineno = yylineno_stack.top();
                            yylineno_stack.pop();
                            file_stack.pop();   
                        }
                        if (!YY_CURRENT_BUFFER) {
                            yyterminate();
                        }
                    }
{line_number}       { yylval.v_int = std::stoi(yytext, nullptr, 10); return LINE_NUMBER; }
{integer}           { yylval.v_int = std::stoi(yytext, nullptr, 10); return LITERAL_INT; }
{hexinteger}        { auto v = std::string(yytext); v.erase(0, 1); yylval.v_int = std::stoi(v, nullptr, 16); return LITERAL_INT; }
{float}             { yylval.v_float = std::stod(yytext); return LITERAL_FLOAT; }
{string}            { yylval.v_string = strdup(yytext); return LITERAL_STRING; }
{string_function}	{ yylval.v_string = strdup(yytext); return STRING_FUNCTION; }
{integer_function}  { yylval.v_string = strdup(yytext); return INTEGER_FUNCTION; }
{float_function}	{ yylval.v_string = strdup(yytext); return FLOAT_FUNCTION; }
{procedure}			{ yylval.v_string = strdup(yytext); return PROCEDURE; }
{def_procedure}		{ strcpy(yytext, yytext + 3); yylval.v_string = strdup(yytext); return DEFINE_PROCEDURE; }
{def_integer_fn}	{ strcpy(yytext, yytext + 3); yylval.v_string = strdup(yytext); return DEFINE_INTEGER_FUNCTION; }
{def_string_fn}		{ strcpy(yytext, yytext + 3); yylval.v_string = strdup(yytext); return DEFINE_STRING_FUNCTION; }
{def_float_fn}		{ strcpy(yytext, yytext + 3); yylval.v_string = strdup(yytext); return DEFINE_FLOAT_FUNCTION; }
{integer_variable}  { yylval.v_string = strdup(yytext); return INTEGER_VARIABLE; }
{string_variable}   { yylval.v_string = strdup(yytext); return STRING_VARIABLE; }
{object_variable}   { yylval.v_string = strdup(yytext); return TYPE_VARIABLE; }
{star}              { yylval.v_string = strdup(yytext); return STAR; }
{variable}			{ yylval.v_string = strdup(yytext); return VARIABLE; }

"("                 |
")"                 |
"["                 |
"]"                 |
","                 |   
"+"                 |
"-"                 |
"*"                 |
"/"                 |
"<"					|
">"					|
"~"					|
";"					|
"|"					|
"#"					|
"'"					{ return yytext[0]; }

.                   std::cout << "Unknown character: "  << *yytext << std::endl;

%%