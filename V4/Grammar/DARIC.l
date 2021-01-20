%option 8bit warn nodefault
%option noyywrap
%option yylineno

%{
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#define _GLIBCXX_USE_C99 1
#include <iostream>
#include <string>
#include <unordered_set>
#include <stack>
#include <map>
#include "bison.hpp"
std::string file;
int yyfileno = 0;
std::unordered_set<std::string> included_files;
std::map<std::string, int> files_index;
std::stack<std::string> file_stack;
std::stack<int> yylineno_stack;
%}

comment             .*[\n]+
ws                  [ \t]+
nl                  [\n]+
ss                  [:]+
alpha               [A-Za-z]
alphanumeric        [A-Za-z0-9_]
dig                 [0-9]
hex                 [A-Fa-f0-9]
line_number         ^[ \t]*{dig}+
integer             {dig}+
hexinteger          \&{hex}*
binaryinteger       \%[0|1]*
float               {dig}*\.{dig}*([eE][-+]?{dig}+)?
string              \"(\\.|[^"])*\"
variable			{alpha}+{alphanumeric}*
integer_variable	{alpha}+{alphanumeric}*\%
object_variable		{alpha}+{alphanumeric}*\!
string_variable     {alpha}+{alphanumeric}*\$
def_procedure		(?i:"DefProc"){variable}
def_integer_fn      (?i:"DefFn"){integer_variable}
def_real_fn         (?i:"DefFn"){variable}
def_string_fn       (?i:"DefFn"){string_variable}
string_function		(?i:"Fn"){string_variable}
integer_function	(?i:"Fn"){integer_variable}
real_function		(?i:"Fn"){variable}
procedure			(?i:"Proc"){variable}
install_string      (?i:"Install"){ws}{string}
star                \*\*{alpha}+
%%

(?i:"Rem"){comment}	/* skip comments */
{ws}                /* skip blanks and tabs */
{nl}                return NL;
{ss}                return SS;
"//"                return INTEGERDIVIDE;
"~"					return TILDE;
"'"					return TICK;
"="					return E;
";"					return SEMICOLON;
"<="				return LE;
">="				return GE;

"<<="				return SHL_E;
">>="				return SHR_E;
"+="                return PLUS_E;
"-="                return MINUS_E;
"*="                return MULTIPLY_E;
"/="                return DIVIDE_E;
"//="               return INTEGERDIVIDE_E;

"<>"				return NE;
"<<"				return SHL;
">>"				return SHR;
"+"                 return PLUS;
"-"                 return MINUS;
"*"                 return MULTIPLY;
"/"                 return DIVIDE;
"<"					return LT;
">"					return GT;

(?i:"Banked")	    return BANKED;
(?i:"Bget#")		return BGET;
(?i:"Bput#")		return BPUT;
(?i:"Breakpoint")	return BREAKPOINT;
(?i:"Case")			return CASE;
(?i:"Chain")		return CHAIN;
(?i:"Close#")		return CLOSE;
(?i:"Data")			return DATA;
(?i:"Dim")			return DIM;
(?i:"Else")			return ELSE;
(?i:"End")			return END;
(?i:"EndCase")		return END_CASE;
(?i:"EndIf")		return END_IF;
(?i:"EndFunction")	return END_FN;
(?i:"EndFn")	    return END_FN;
(?i:"EndProc")		return END_PROC;
(?i:"EndType")		return END_TYPE;
(?i:"EndWhile")		return END_WHILE;
(?i:"End Case")		return END_CASE;
(?i:"End If")		return END_IF;
(?i:"End Fn")	    return END_FN;
(?i:"End Function")	return END_FN;
(?i:"End Proc")		return END_PROC;
(?i:"End Type")		return END_TYPE;
(?i:"End While")	return END_WHILE;
(?i:"Eof#")			return EOFH;
(?i:"Expect")		return EXPECT;
(?i:"Field")		return FIELD;
(?i:"For")			return FOR;
(?i:"Get")		    return GET;
(?i:"Get$")		    return GETS;
(?i:"Get$#")		return GETSH;
(?i:"Global")		return GLOBAL;
(?i:"Gosub")		return GOSUB;
(?i:"Goto")		    return GOTO;
(?i:"Inkey")		return INKEY;
(?i:"Inkey$")		return INKEYS;
(?i:"Input")		return INPUT_;
(?i:"Let")			return GLOBAL;
(?i:"If")			return IF;
(?i:"In")			return IN_;
(?i:"ListFiles")    return LISTFILES;
(?i:"Local")        return LOCAL;
(?i:"Mouse")        return MOUSE;
(?i:"Next")         return NEXT;
(?i:"Of")			return OF;
(?i:"OpenIn")       return OPENIN;
(?i:"OpenOut")      return OPENOUT;
(?i:"OpenUp")       return OPENUP;
(?i:"Otherwise")    return OTHERWISE;
(?i:"Print")        return PRINT;
(?i:"Ptr#")         return PTR;
(?i:"Read")         return READ;
(?i:"Repeat")       return REPEAT;
(?i:"Restore")      return RESTORE;
(?i:"Rnd")			return RND;
(?i:"Rnd(0)")		return RND0;
(?i:"Rnd(1)")		return RND1;
(?i:"Oscli")		return OSCLI;
(?i:"Return")		return RETURN;
(?i:"Spc")			return SPC;
(?i:"Step")			return STEP;
(?i:"Swap")			return SWAP;
(?i:"Then")			return THEN;
(?i:"To")			return TO;
(?i:"Time")			return TIME;
(?i:"Time$")		return TIMES;
(?i:"TraceOn")		return TRACEON;
(?i:"TraceOff")		return TRACEOFF;
(?i:"Type")			return TYPE_;
(?i:"Until")		return UNTIL;
(?i:"When")			return WHEN;
(?i:"While")		return WHILE;

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
(?i:"Not")			return NOT; 

(?i:"Float")		return FLOAT_;
(?i:"Int")			return INT_;
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
(?i:"Pi")			return PI; 

(?i:"Val")			return VAL; 

(?i:"False")		return BOOLFALSE; 
(?i:"True")			return BOOLTRUE; 

(?i:"Circle") 		return CIRCLE;
(?i:"Cls") 			return CLS;
(?i:"ClipOn")	    return CLIPON;
(?i:"ClipOff")		return CLIPOFF;
(?i:"Colour")		return COLOUR;
(?i:"ColourBg")		return COLOURBG;
(?i:"Fill")			return FILL;
(?i:"Flip")			return FLIP;
(?i:"ShowFPS")	    return SHOWFPS;
(?i:"Graphics")     return GRAPHICS;
(?i:"Line")			return LINE;
(?i:"Rectangle")	return RECTANGLE;
(?i:"Plot")			return PLOT;
(?i:"Point")		return POINT_;
(?i:"Shaded")		return SHADED;
(?i:"Text")		    return TEXT;
(?i:"TextRight")	return TEXTRIGHT;
(?i:"TextCentre")   return TEXTCENTRE;
(?i:"TextCenter")   return TEXTCENTRE;
(?i:"LoadTypeface") return LOADTYPEFACE;
(?i:"CreateFont")   return CREATEFONT;
(?i:"Mono15")       return MONO15;
(?i:"Mono20")       return MONO20;
(?i:"Mono25")       return MONO25;
(?i:"Mono30")       return MONO30;
(?i:"Mono35")       return MONO35;
(?i:"Mono40")       return MONO40;
(?i:"Mono50")       return MONO50;
(?i:"Mono75")       return MONO75;
(?i:"Mono100")      return MONO100;
(?i:"Prop15")       return PROP15;
(?i:"Prop20")       return PROP20;
(?i:"Prop25")       return PROP25;
(?i:"Prop30")       return PROP30;
(?i:"Prop35")       return PROP35;
(?i:"Prop40")       return PROP40;
(?i:"Prop50")       return PROP50;
(?i:"Prop75")       return PROP75;
(?i:"Prop100")      return PROP100;
(?i:"Triangle")		return TRIANGLE;
(?i:"ScreenWidth")	return SCREENWIDTH;
(?i:"ScreenHeight")	return SCREENHEIGHT;
(?i:"Red")          return RED;
(?i:"Green")        return GREEN;
(?i:"Yellow")       return YELLOW;
(?i:"Blue")         return BLUE;
(?i:"Magenta")      return MAGENTA;
(?i:"Cyan")         return CYAN;
(?i:"White")        return WHITE;
(?i:"Black")        return BLACK;
(?i:"LastPos")      return LASTPOS;

(?i:"DeleteObject")	return DELETEOBJECT;
(?i:"Vertex")		return CREATEVERTEX;
(?i:"Face")			return CREATETRIANGLE;
(?i:"Shape")		return CREATESHAPE;
(?i:"Render")		return RENDERFRAME;
(?i:"Object")		return CREATEOBJECT;
(?i:"Translate")	return TRANSLATE;
(?i:"Rotate")		return ROTATE;
(?i:"Scale")		return SCALE; 
(?i:"Solid")		return SOLID; 
(?i:"Wireframe")	return WIREFRAME; 
(?i:"FILLEDWIREFRAME") return FILLEDWIREFRAME;

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
                        s += ".daric";

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
	                        //std::cout << "Including '" << yytext << "' at line " << yylineno << " as file index " << yyfileno << std::endl;
                            file_stack.push(std::move(file));
                            file = yytext;
                            yylineno_stack.push(yylineno);
                            yylineno = 0;
                            yypush_buffer_state(yy_create_buffer(yyin, YY_BUF_SIZE));
                            BEGIN(INITIAL);
                        }
                    }
<<EOF>>             {
                        static int once = 0; 
                        if (once = !once)
                            return NL;
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
{binaryinteger}     { auto v = std::string(yytext); v.erase(0, 1); yylval.v_int = std::stoi(v, nullptr, 2); return LITERAL_INT; }
{float}             { yylval.v_real = std::stod(yytext); return LITERAL_REAL; }
{string}            { yylval.v_string = strdup(yytext); return LITERAL_STRING; }
{def_procedure}		{ strcpy(yytext, yytext + 3); yylval.v_string = strdup(yytext); return DEFINE_PROCEDURE; }
{def_integer_fn}	{ strcpy(yytext, yytext + 3); yylval.v_string = strdup(yytext); return DEFINE_INTEGER_FUNCTION; }
{def_string_fn}		{ strcpy(yytext, yytext + 3); yylval.v_string = strdup(yytext); return DEFINE_STRING_FUNCTION; }
{def_real_fn}		{ strcpy(yytext, yytext + 3); yylval.v_string = strdup(yytext); return DEFINE_REAL_FUNCTION; }
{string_function}	{ yylval.v_string = strdup(yytext); return STRING_FUNCTION; }
{integer_function}  { yylval.v_string = strdup(yytext); return INTEGER_FUNCTION; }
{real_function}	    { yylval.v_string = strdup(yytext); return REAL_FUNCTION; }
{procedure}			{ yylval.v_string = strdup(yytext); return PROCEDURE; }
{integer_variable}  { yylval.v_string = strdup(yytext); return INTEGER_VARIABLE; }
{string_variable}   { yylval.v_string = strdup(yytext); return STRING_VARIABLE; }
{object_variable}   { yylval.v_string = strdup(yytext); return TYPE_VARIABLE; }
{variable}			{ yylval.v_string = strdup(yytext); return VARIABLE; }

"("                 |
")"                 |
","                 |   
"|"					|
"#"					{ return yytext[0]; }

.                   /* do nothing */

%%