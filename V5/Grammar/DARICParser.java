// Generated from DARIC.g4 by ANTLR 4.9.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class DARICParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.9.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		BREAKPOINT=1, CASE=2, CHAIN=3, DATA=4, DEF=5, DIM=6, ELSE=7, END=8, ENDCASE=9, 
		ENDIF=10, ENDFN=11, ENDPROC=12, ENDWHILE=13, FALSE=14, FOR=15, FLOAT_TOKEN=16, 
		FN=17, IF=18, IN=19, INSTALL=20, INT=21, INPUT=22, GLOBAL=23, GOTO=24, 
		GOSUB=25, LOCAL=26, LET=27, NEXT=28, NEW=29, OF=30, OFF=31, ON=32, OSCLI=33, 
		OTHERWISE=34, PRINT=35, PROC=36, READ=37, REM=38, REPEAT=39, RESTORE=40, 
		RETURN=41, SPC=42, STEP=43, SWAP=44, THEN=45, TO=46, TRACE=47, TRACEON=48, 
		TRACEOFF=49, TRUE=50, TYPE=51, UNTIL=52, WHEN=53, WHILE=54, MOUSE=55, 
		INKEY=56, INKEYS=57, GET=58, GETS=59, RED=60, GREEN=61, YELLOW=62, BLUE=63, 
		MAGENTA=64, CYAN=65, WHITE=66, BLACK=67, MONO15=68, MONO20=69, MONO25=70, 
		MONO30=71, MONO35=72, MONO40=73, MONO50=74, MONO75=75, MONO100=76, PROP15=77, 
		PROP20=78, PROP25=79, PROP30=80, PROP35=81, PROP40=82, PROP50=83, PROP75=84, 
		PROP100=85, SERIF15=86, SERIF20=87, SERIF25=88, SERIF30=89, SERIF35=90, 
		SERIF40=91, SERIF50=92, SERIF75=93, SERIF100=94, RENDERFRAME=95, CREATEVERTEX=96, 
		CREATETRIANGLE=97, TRANSLATE=98, ROTATE=99, SCALE=100, DELETEOBJECT=101, 
		CREATESHAPE=102, CREATEOBJECT=103, SOLID=104, WIREFRAME=105, SHADED=106, 
		FILLEDWIREFRAME=107, BGETH=108, BPUTH=109, CLOSEH=110, EOFH=111, GETSH=112, 
		LISTFILES=113, OPENIN=114, OPENOUT=115, OPENUP=116, PTRH=117, BANKED=118, 
		CIRCLE=119, CLS=120, CLIPON=121, CLIPOFF=122, COLOUR=123, COLOURBG=124, 
		CREATEFONT=125, CURSORON=126, CURSOROFF=127, FILL=128, FLIP=129, SHOWFPS=130, 
		GRAPHICS=131, LINE=132, LOADTYPEFACE=133, RECTANGLE=134, PLOT=135, POINT=136, 
		SCREENWIDTH=137, SCREENHEIGHT=138, TEXT=139, TEXTRIGHT=140, TEXTCENTRE=141, 
		TEXTCENTER=142, TRIANGLE=143, LOADSPRITE=144, DRAWSPRITE=145, DELETESPRITE=146, 
		CREATESPRITE=147, DRAWTOSPRITE=148, DRAWTOSCREEN=149, TIME=150, PI=151, 
		SQR=152, LN=153, LOG=154, EXP=155, ATN=156, TAN=157, COS=158, SIN=159, 
		ABS=160, ACS=161, ASN=162, DEG=163, RAD=164, SGN=165, ASC=166, LEN=167, 
		INSTR=168, VAL=169, TIMES=170, STRS=171, STRINGS=172, CHRS=173, LEFTS=174, 
		MIDS=175, RIGHTS=176, RND=177, RND0=178, RND1=179, EQ=180, NE=181, GT=182, 
		GE=183, LT=184, LE=185, NOT=186, AND=187, OR=188, EOR=189, MOD=190, DIV=191, 
		HAT=192, PLUS=193, MINUS=194, MULTIPLY=195, DIVIDE=196, SHL=197, SHR=198, 
		PLUS_E=199, MINUS_E=200, MULTIPLY_E=201, DIVIDE_E=202, SHL_E=203, SHR_E=204, 
		NEWLINE=205, TICK=206, TILDE=207, HASH=208, COLON=209, COMMA=210, DOLLAR=211, 
		LPAREN=212, PERCENT=213, RPAREN=214, SEMICOLON=215, UNDERSCORE=216, COMMENT=217, 
		STRINGLITERAL=218, PROC_NAME=219, FN_INTEGER=220, FN_FLOAT=221, FN_STRING=222, 
		VARIABLE_FLOAT=223, VARIABLE_INTEGER=224, VARIABLE_STRING=225, VARIABLE_TYPE=226, 
		HEXNUMBER=227, BINARYNUMBER=228, NUMBER=229, FLOAT=230, WS=231;
	public static final int
		RULE_prog = 0, RULE_line = 1, RULE_linePlus = 2, RULE_content = 3, RULE_body = 4, 
		RULE_linenumber = 5, RULE_stmt = 6, RULE_coreStmt = 7, RULE_stmtBREAKPOINT = 8, 
		RULE_stmtCASE = 9, RULE_stmtCHAIN = 10, RULE_stmtDATA = 11, RULE_stmtDIM = 12, 
		RULE_stmtEND = 13, RULE_stmtRETURN = 14, RULE_stmtDEFFN = 15, RULE_stmtDEFPROC = 16, 
		RULE_stmtFOR = 17, RULE_stmtFORIN = 18, RULE_stmtCallFN = 19, RULE_stmtIF = 20, 
		RULE_stmtIFMultiline = 21, RULE_stmtINSTALL = 22, RULE_stmtGOTO = 23, 
		RULE_stmtGOSUB = 24, RULE_stmtLET = 25, RULE_stmtOSCLI = 26, RULE_stmtCallPROC = 27, 
		RULE_stmtREAD = 28, RULE_stmtRESTORE = 29, RULE_stmtSWAP = 30, RULE_stmtTRACEON = 31, 
		RULE_stmtTRACEOFF = 32, RULE_stmtTYPE = 33, RULE_stmtREPEAT = 34, RULE_stmtWHILE = 35, 
		RULE_keyMouseStmt = 36, RULE_stmtINPUT = 37, RULE_stmtPRINT = 38, RULE_stmtMOUSE = 39, 
		RULE_stmtINKEY = 40, RULE_stmtINKEYS = 41, RULE_stmtGET = 42, RULE_stmtGETS = 43, 
		RULE_stmtOperatorEqual = 44, RULE_ioStmt = 45, RULE_stmtBPUTH = 46, RULE_stmtBGETH = 47, 
		RULE_stmtPTRH = 48, RULE_stmtCLOSEH = 49, RULE_stmtLISTFILES = 50, RULE_graphicsStmt = 51, 
		RULE_stmtCLS = 52, RULE_stmtCOLOUR = 53, RULE_stmtCOLOURBG = 54, RULE_stmtCURSORON = 55, 
		RULE_stmtCURSOROFF = 56, RULE_stmtGRAPHICS = 57, RULE_stmtFLIP = 58, RULE_stmtCIRCLE = 59, 
		RULE_stmtLINE = 60, RULE_stmtRECTANGLE = 61, RULE_stmtTRIANGLE = 62, RULE_stmtPLOT = 63, 
		RULE_stmtCLIPON = 64, RULE_stmtCLIPOFF = 65, RULE_stmtTEXT = 66, RULE_stmtTEXTRIGHT = 67, 
		RULE_stmtTEXTCENTRE = 68, RULE_stmtSHOWFPS = 69, RULE_stmtRENDERTOSPRITE = 70, 
		RULE_stmtRENDERTOSCREEN = 71, RULE_stmtDRAWSPRITE = 72, RULE_stmtDELETESPRITE = 73, 
		RULE_stmtRENDERFRAME = 74, RULE_stmtCREATEVERTEX = 75, RULE_stmtCREATETRIANGLE = 76, 
		RULE_stmtTRANSLATE = 77, RULE_stmtROTATE = 78, RULE_stmtSCALE = 79, RULE_stmtDELETEOBJECT = 80, 
		RULE_when = 81, RULE_fnName = 82, RULE_literal = 83, RULE_var = 84, RULE_typeVar = 85, 
		RULE_numVar = 86, RULE_strVar = 87, RULE_justVar = 88, RULE_justNumberVar = 89, 
		RULE_varName = 90, RULE_varNameInteger = 91, RULE_varNameString = 92, 
		RULE_varNameType = 93, RULE_varDecl = 94, RULE_varDeclWithDimension = 95, 
		RULE_varList = 96, RULE_functionVar = 97, RULE_functionVarList = 98, RULE_functionParList = 99, 
		RULE_exprList = 100, RULE_printListItem = 101, RULE_printListTick = 102, 
		RULE_printListSeparator = 103, RULE_printList = 104, RULE_expr = 105, 
		RULE_number = 106, RULE_numberInteger = 107, RULE_numberHex = 108, RULE_numberBinary = 109, 
		RULE_numberFloat = 110, RULE_strFunc = 111, RULE_string = 112, RULE_strExpr = 113, 
		RULE_numFunc = 114, RULE_numExpr = 115, RULE_numColours = 116, RULE_defaultFonts = 117;
	private static String[] makeRuleNames() {
		return new String[] {
			"prog", "line", "linePlus", "content", "body", "linenumber", "stmt", 
			"coreStmt", "stmtBREAKPOINT", "stmtCASE", "stmtCHAIN", "stmtDATA", "stmtDIM", 
			"stmtEND", "stmtRETURN", "stmtDEFFN", "stmtDEFPROC", "stmtFOR", "stmtFORIN", 
			"stmtCallFN", "stmtIF", "stmtIFMultiline", "stmtINSTALL", "stmtGOTO", 
			"stmtGOSUB", "stmtLET", "stmtOSCLI", "stmtCallPROC", "stmtREAD", "stmtRESTORE", 
			"stmtSWAP", "stmtTRACEON", "stmtTRACEOFF", "stmtTYPE", "stmtREPEAT", 
			"stmtWHILE", "keyMouseStmt", "stmtINPUT", "stmtPRINT", "stmtMOUSE", "stmtINKEY", 
			"stmtINKEYS", "stmtGET", "stmtGETS", "stmtOperatorEqual", "ioStmt", "stmtBPUTH", 
			"stmtBGETH", "stmtPTRH", "stmtCLOSEH", "stmtLISTFILES", "graphicsStmt", 
			"stmtCLS", "stmtCOLOUR", "stmtCOLOURBG", "stmtCURSORON", "stmtCURSOROFF", 
			"stmtGRAPHICS", "stmtFLIP", "stmtCIRCLE", "stmtLINE", "stmtRECTANGLE", 
			"stmtTRIANGLE", "stmtPLOT", "stmtCLIPON", "stmtCLIPOFF", "stmtTEXT", 
			"stmtTEXTRIGHT", "stmtTEXTCENTRE", "stmtSHOWFPS", "stmtRENDERTOSPRITE", 
			"stmtRENDERTOSCREEN", "stmtDRAWSPRITE", "stmtDELETESPRITE", "stmtRENDERFRAME", 
			"stmtCREATEVERTEX", "stmtCREATETRIANGLE", "stmtTRANSLATE", "stmtROTATE", 
			"stmtSCALE", "stmtDELETEOBJECT", "when", "fnName", "literal", "var", 
			"typeVar", "numVar", "strVar", "justVar", "justNumberVar", "varName", 
			"varNameInteger", "varNameString", "varNameType", "varDecl", "varDeclWithDimension", 
			"varList", "functionVar", "functionVarList", "functionParList", "exprList", 
			"printListItem", "printListTick", "printListSeparator", "printList", 
			"expr", "number", "numberInteger", "numberHex", "numberBinary", "numberFloat", 
			"strFunc", "string", "strExpr", "numFunc", "numExpr", "numColours", "defaultFonts"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			"'='", "'<>'", "'>'", "'>='", "'<'", "'<='", null, null, null, null, 
			null, null, "'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", "'>>'", "'+='", 
			"'-='", "'*='", "'/='", "'<<='", "'>>='", null, "'''", "'~'", "'#'", 
			"':'", "','", "'$'", "'('", "'%'", "')'", "';'", "'_'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "BREAKPOINT", "CASE", "CHAIN", "DATA", "DEF", "DIM", "ELSE", "END", 
			"ENDCASE", "ENDIF", "ENDFN", "ENDPROC", "ENDWHILE", "FALSE", "FOR", "FLOAT_TOKEN", 
			"FN", "IF", "IN", "INSTALL", "INT", "INPUT", "GLOBAL", "GOTO", "GOSUB", 
			"LOCAL", "LET", "NEXT", "NEW", "OF", "OFF", "ON", "OSCLI", "OTHERWISE", 
			"PRINT", "PROC", "READ", "REM", "REPEAT", "RESTORE", "RETURN", "SPC", 
			"STEP", "SWAP", "THEN", "TO", "TRACE", "TRACEON", "TRACEOFF", "TRUE", 
			"TYPE", "UNTIL", "WHEN", "WHILE", "MOUSE", "INKEY", "INKEYS", "GET", 
			"GETS", "RED", "GREEN", "YELLOW", "BLUE", "MAGENTA", "CYAN", "WHITE", 
			"BLACK", "MONO15", "MONO20", "MONO25", "MONO30", "MONO35", "MONO40", 
			"MONO50", "MONO75", "MONO100", "PROP15", "PROP20", "PROP25", "PROP30", 
			"PROP35", "PROP40", "PROP50", "PROP75", "PROP100", "SERIF15", "SERIF20", 
			"SERIF25", "SERIF30", "SERIF35", "SERIF40", "SERIF50", "SERIF75", "SERIF100", 
			"RENDERFRAME", "CREATEVERTEX", "CREATETRIANGLE", "TRANSLATE", "ROTATE", 
			"SCALE", "DELETEOBJECT", "CREATESHAPE", "CREATEOBJECT", "SOLID", "WIREFRAME", 
			"SHADED", "FILLEDWIREFRAME", "BGETH", "BPUTH", "CLOSEH", "EOFH", "GETSH", 
			"LISTFILES", "OPENIN", "OPENOUT", "OPENUP", "PTRH", "BANKED", "CIRCLE", 
			"CLS", "CLIPON", "CLIPOFF", "COLOUR", "COLOURBG", "CREATEFONT", "CURSORON", 
			"CURSOROFF", "FILL", "FLIP", "SHOWFPS", "GRAPHICS", "LINE", "LOADTYPEFACE", 
			"RECTANGLE", "PLOT", "POINT", "SCREENWIDTH", "SCREENHEIGHT", "TEXT", 
			"TEXTRIGHT", "TEXTCENTRE", "TEXTCENTER", "TRIANGLE", "LOADSPRITE", "DRAWSPRITE", 
			"DELETESPRITE", "CREATESPRITE", "DRAWTOSPRITE", "DRAWTOSCREEN", "TIME", 
			"PI", "SQR", "LN", "LOG", "EXP", "ATN", "TAN", "COS", "SIN", "ABS", "ACS", 
			"ASN", "DEG", "RAD", "SGN", "ASC", "LEN", "INSTR", "VAL", "TIMES", "STRS", 
			"STRINGS", "CHRS", "LEFTS", "MIDS", "RIGHTS", "RND", "RND0", "RND1", 
			"EQ", "NE", "GT", "GE", "LT", "LE", "NOT", "AND", "OR", "EOR", "MOD", 
			"DIV", "HAT", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "SHL", "SHR", "PLUS_E", 
			"MINUS_E", "MULTIPLY_E", "DIVIDE_E", "SHL_E", "SHR_E", "NEWLINE", "TICK", 
			"TILDE", "HASH", "COLON", "COMMA", "DOLLAR", "LPAREN", "PERCENT", "RPAREN", 
			"SEMICOLON", "UNDERSCORE", "COMMENT", "STRINGLITERAL", "PROC_NAME", "FN_INTEGER", 
			"FN_FLOAT", "FN_STRING", "VARIABLE_FLOAT", "VARIABLE_INTEGER", "VARIABLE_STRING", 
			"VARIABLE_TYPE", "HEXNUMBER", "BINARYNUMBER", "NUMBER", "FLOAT", "WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "DARIC.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public DARICParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class ProgContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(DARICParser.EOF, 0); }
		public List<LineContext> line() {
			return getRuleContexts(LineContext.class);
		}
		public LineContext line(int i) {
			return getRuleContext(LineContext.class,i);
		}
		public ProgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prog; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitProg(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_prog);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(239);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INSTALL) | (1L << INPUT) | (1L << GLOBAL) | (1L << GOTO) | (1L << GOSUB) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 95)) & ~0x3f) == 0 && ((1L << (_la - 95)) & ((1L << (RENDERFRAME - 95)) | (1L << (CREATEVERTEX - 95)) | (1L << (CREATETRIANGLE - 95)) | (1L << (TRANSLATE - 95)) | (1L << (ROTATE - 95)) | (1L << (SCALE - 95)) | (1L << (DELETEOBJECT - 95)) | (1L << (BGETH - 95)) | (1L << (BPUTH - 95)) | (1L << (CLOSEH - 95)) | (1L << (PTRH - 95)) | (1L << (CIRCLE - 95)) | (1L << (CLS - 95)) | (1L << (CLIPON - 95)) | (1L << (CLIPOFF - 95)) | (1L << (COLOUR - 95)) | (1L << (COLOURBG - 95)) | (1L << (CURSORON - 95)) | (1L << (CURSOROFF - 95)) | (1L << (FLIP - 95)) | (1L << (SHOWFPS - 95)) | (1L << (GRAPHICS - 95)) | (1L << (LINE - 95)) | (1L << (RECTANGLE - 95)) | (1L << (PLOT - 95)) | (1L << (TEXT - 95)) | (1L << (TEXTRIGHT - 95)) | (1L << (TEXTCENTRE - 95)) | (1L << (TEXTCENTER - 95)) | (1L << (TRIANGLE - 95)) | (1L << (DRAWSPRITE - 95)) | (1L << (DELETESPRITE - 95)) | (1L << (DRAWTOSPRITE - 95)) | (1L << (DRAWTOSCREEN - 95)))) != 0) || ((((_la - 205)) & ~0x3f) == 0 && ((1L << (_la - 205)) & ((1L << (NEWLINE - 205)) | (1L << (COLON - 205)) | (1L << (COMMENT - 205)) | (1L << (PROC_NAME - 205)) | (1L << (FN_INTEGER - 205)) | (1L << (FN_FLOAT - 205)) | (1L << (FN_STRING - 205)) | (1L << (VARIABLE_FLOAT - 205)) | (1L << (VARIABLE_INTEGER - 205)) | (1L << (VARIABLE_STRING - 205)) | (1L << (VARIABLE_TYPE - 205)) | (1L << (NUMBER - 205)))) != 0)) {
				{
				{
				setState(236);
				line();
				}
				}
				setState(241);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(242);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LineContext extends ParserRuleContext {
		public TerminalNode NEWLINE() { return getToken(DARICParser.NEWLINE, 0); }
		public LinenumberContext linenumber() {
			return getRuleContext(LinenumberContext.class,0);
		}
		public TerminalNode COMMENT() { return getToken(DARICParser.COMMENT, 0); }
		public TerminalNode REM() { return getToken(DARICParser.REM, 0); }
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public LineContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_line; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitLine(this);
			else return visitor.visitChildren(this);
		}
	}

	public final LineContext line() throws RecognitionException {
		LineContext _localctx = new LineContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_line);
		int _la;
		try {
			setState(265);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(244);
				match(NEWLINE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(246);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(245);
					linenumber();
					}
				}

				setState(249);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REM || _la==COMMENT) {
					{
					setState(248);
					_la = _input.LA(1);
					if ( !(_la==REM || _la==COMMENT) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					}
				}

				setState(251);
				match(NEWLINE);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(253);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(252);
					linenumber();
					}
				}

				setState(256); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(255);
					stmt();
					}
					}
					setState(258); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INSTALL) | (1L << INPUT) | (1L << GLOBAL) | (1L << GOTO) | (1L << GOSUB) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 95)) & ~0x3f) == 0 && ((1L << (_la - 95)) & ((1L << (RENDERFRAME - 95)) | (1L << (CREATEVERTEX - 95)) | (1L << (CREATETRIANGLE - 95)) | (1L << (TRANSLATE - 95)) | (1L << (ROTATE - 95)) | (1L << (SCALE - 95)) | (1L << (DELETEOBJECT - 95)) | (1L << (BGETH - 95)) | (1L << (BPUTH - 95)) | (1L << (CLOSEH - 95)) | (1L << (PTRH - 95)) | (1L << (CIRCLE - 95)) | (1L << (CLS - 95)) | (1L << (CLIPON - 95)) | (1L << (CLIPOFF - 95)) | (1L << (COLOUR - 95)) | (1L << (COLOURBG - 95)) | (1L << (CURSORON - 95)) | (1L << (CURSOROFF - 95)) | (1L << (FLIP - 95)) | (1L << (SHOWFPS - 95)) | (1L << (GRAPHICS - 95)) | (1L << (LINE - 95)) | (1L << (RECTANGLE - 95)) | (1L << (PLOT - 95)) | (1L << (TEXT - 95)) | (1L << (TEXTRIGHT - 95)) | (1L << (TEXTCENTRE - 95)) | (1L << (TEXTCENTER - 95)) | (1L << (TRIANGLE - 95)) | (1L << (DRAWSPRITE - 95)) | (1L << (DELETESPRITE - 95)) | (1L << (DRAWTOSPRITE - 95)) | (1L << (DRAWTOSCREEN - 95)))) != 0) || ((((_la - 209)) & ~0x3f) == 0 && ((1L << (_la - 209)) & ((1L << (COLON - 209)) | (1L << (PROC_NAME - 209)) | (1L << (FN_INTEGER - 209)) | (1L << (FN_FLOAT - 209)) | (1L << (FN_STRING - 209)) | (1L << (VARIABLE_FLOAT - 209)) | (1L << (VARIABLE_INTEGER - 209)) | (1L << (VARIABLE_STRING - 209)) | (1L << (VARIABLE_TYPE - 209)))) != 0) );
				setState(261);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REM || _la==COMMENT) {
					{
					setState(260);
					_la = _input.LA(1);
					if ( !(_la==REM || _la==COMMENT) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					}
				}

				setState(263);
				match(NEWLINE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LinePlusContext extends ParserRuleContext {
		public List<LineContext> line() {
			return getRuleContexts(LineContext.class);
		}
		public LineContext line(int i) {
			return getRuleContext(LineContext.class,i);
		}
		public LinePlusContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_linePlus; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitLinePlus(this);
			else return visitor.visitChildren(this);
		}
	}

	public final LinePlusContext linePlus() throws RecognitionException {
		LinePlusContext _localctx = new LinePlusContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_linePlus);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(268); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(267);
					line();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(270); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ContentContext extends ParserRuleContext {
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public ContentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_content; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitContent(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ContentContext content() throws RecognitionException {
		ContentContext _localctx = new ContentContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_content);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(275);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(272);
					stmt();
					}
					} 
				}
				setState(277);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BodyContext extends ParserRuleContext {
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public List<LineContext> line() {
			return getRuleContexts(LineContext.class);
		}
		public LineContext line(int i) {
			return getRuleContext(LineContext.class,i);
		}
		public BodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_body; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitBody(this);
			else return visitor.visitChildren(this);
		}
	}

	public final BodyContext body() throws RecognitionException {
		BodyContext _localctx = new BodyContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_body);
		int _la;
		try {
			int _alt;
			setState(290);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(281);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INSTALL) | (1L << INPUT) | (1L << GLOBAL) | (1L << GOTO) | (1L << GOSUB) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 95)) & ~0x3f) == 0 && ((1L << (_la - 95)) & ((1L << (RENDERFRAME - 95)) | (1L << (CREATEVERTEX - 95)) | (1L << (CREATETRIANGLE - 95)) | (1L << (TRANSLATE - 95)) | (1L << (ROTATE - 95)) | (1L << (SCALE - 95)) | (1L << (DELETEOBJECT - 95)) | (1L << (BGETH - 95)) | (1L << (BPUTH - 95)) | (1L << (CLOSEH - 95)) | (1L << (PTRH - 95)) | (1L << (CIRCLE - 95)) | (1L << (CLS - 95)) | (1L << (CLIPON - 95)) | (1L << (CLIPOFF - 95)) | (1L << (COLOUR - 95)) | (1L << (COLOURBG - 95)) | (1L << (CURSORON - 95)) | (1L << (CURSOROFF - 95)) | (1L << (FLIP - 95)) | (1L << (SHOWFPS - 95)) | (1L << (GRAPHICS - 95)) | (1L << (LINE - 95)) | (1L << (RECTANGLE - 95)) | (1L << (PLOT - 95)) | (1L << (TEXT - 95)) | (1L << (TEXTRIGHT - 95)) | (1L << (TEXTCENTRE - 95)) | (1L << (TEXTCENTER - 95)) | (1L << (TRIANGLE - 95)) | (1L << (DRAWSPRITE - 95)) | (1L << (DELETESPRITE - 95)) | (1L << (DRAWTOSPRITE - 95)) | (1L << (DRAWTOSCREEN - 95)))) != 0) || ((((_la - 209)) & ~0x3f) == 0 && ((1L << (_la - 209)) & ((1L << (COLON - 209)) | (1L << (PROC_NAME - 209)) | (1L << (FN_INTEGER - 209)) | (1L << (FN_FLOAT - 209)) | (1L << (FN_STRING - 209)) | (1L << (VARIABLE_FLOAT - 209)) | (1L << (VARIABLE_INTEGER - 209)) | (1L << (VARIABLE_STRING - 209)) | (1L << (VARIABLE_TYPE - 209)))) != 0)) {
					{
					{
					setState(278);
					stmt();
					}
					}
					setState(283);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(287);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(284);
						line();
						}
						} 
					}
					setState(289);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LinenumberContext extends ParserRuleContext {
		public TerminalNode NUMBER() { return getToken(DARICParser.NUMBER, 0); }
		public LinenumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_linenumber; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitLinenumber(this);
			else return visitor.visitChildren(this);
		}
	}

	public final LinenumberContext linenumber() throws RecognitionException {
		LinenumberContext _localctx = new LinenumberContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_linenumber);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(292);
			match(NUMBER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtContext extends ParserRuleContext {
		public TerminalNode COLON() { return getToken(DARICParser.COLON, 0); }
		public CoreStmtContext coreStmt() {
			return getRuleContext(CoreStmtContext.class,0);
		}
		public KeyMouseStmtContext keyMouseStmt() {
			return getRuleContext(KeyMouseStmtContext.class,0);
		}
		public StmtOperatorEqualContext stmtOperatorEqual() {
			return getRuleContext(StmtOperatorEqualContext.class,0);
		}
		public IoStmtContext ioStmt() {
			return getRuleContext(IoStmtContext.class,0);
		}
		public GraphicsStmtContext graphicsStmt() {
			return getRuleContext(GraphicsStmtContext.class,0);
		}
		public StmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmt; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmt(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtContext stmt() throws RecognitionException {
		StmtContext _localctx = new StmtContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_stmt);
		try {
			setState(300);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(294);
				match(COLON);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(295);
				coreStmt();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(296);
				keyMouseStmt();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(297);
				stmtOperatorEqual();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(298);
				ioStmt();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(299);
				graphicsStmt();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CoreStmtContext extends ParserRuleContext {
		public StmtBREAKPOINTContext stmtBREAKPOINT() {
			return getRuleContext(StmtBREAKPOINTContext.class,0);
		}
		public StmtCASEContext stmtCASE() {
			return getRuleContext(StmtCASEContext.class,0);
		}
		public StmtCHAINContext stmtCHAIN() {
			return getRuleContext(StmtCHAINContext.class,0);
		}
		public StmtDATAContext stmtDATA() {
			return getRuleContext(StmtDATAContext.class,0);
		}
		public StmtDIMContext stmtDIM() {
			return getRuleContext(StmtDIMContext.class,0);
		}
		public StmtENDContext stmtEND() {
			return getRuleContext(StmtENDContext.class,0);
		}
		public StmtRETURNContext stmtRETURN() {
			return getRuleContext(StmtRETURNContext.class,0);
		}
		public StmtDEFFNContext stmtDEFFN() {
			return getRuleContext(StmtDEFFNContext.class,0);
		}
		public StmtDEFPROCContext stmtDEFPROC() {
			return getRuleContext(StmtDEFPROCContext.class,0);
		}
		public StmtFORContext stmtFOR() {
			return getRuleContext(StmtFORContext.class,0);
		}
		public StmtFORINContext stmtFORIN() {
			return getRuleContext(StmtFORINContext.class,0);
		}
		public StmtGOTOContext stmtGOTO() {
			return getRuleContext(StmtGOTOContext.class,0);
		}
		public StmtGOSUBContext stmtGOSUB() {
			return getRuleContext(StmtGOSUBContext.class,0);
		}
		public StmtIFContext stmtIF() {
			return getRuleContext(StmtIFContext.class,0);
		}
		public StmtIFMultilineContext stmtIFMultiline() {
			return getRuleContext(StmtIFMultilineContext.class,0);
		}
		public StmtINSTALLContext stmtINSTALL() {
			return getRuleContext(StmtINSTALLContext.class,0);
		}
		public StmtLETContext stmtLET() {
			return getRuleContext(StmtLETContext.class,0);
		}
		public StmtOSCLIContext stmtOSCLI() {
			return getRuleContext(StmtOSCLIContext.class,0);
		}
		public StmtCallFNContext stmtCallFN() {
			return getRuleContext(StmtCallFNContext.class,0);
		}
		public StmtCallPROCContext stmtCallPROC() {
			return getRuleContext(StmtCallPROCContext.class,0);
		}
		public StmtREADContext stmtREAD() {
			return getRuleContext(StmtREADContext.class,0);
		}
		public StmtRESTOREContext stmtRESTORE() {
			return getRuleContext(StmtRESTOREContext.class,0);
		}
		public StmtSWAPContext stmtSWAP() {
			return getRuleContext(StmtSWAPContext.class,0);
		}
		public StmtTRACEONContext stmtTRACEON() {
			return getRuleContext(StmtTRACEONContext.class,0);
		}
		public StmtTRACEOFFContext stmtTRACEOFF() {
			return getRuleContext(StmtTRACEOFFContext.class,0);
		}
		public StmtTYPEContext stmtTYPE() {
			return getRuleContext(StmtTYPEContext.class,0);
		}
		public StmtREPEATContext stmtREPEAT() {
			return getRuleContext(StmtREPEATContext.class,0);
		}
		public StmtWHILEContext stmtWHILE() {
			return getRuleContext(StmtWHILEContext.class,0);
		}
		public CoreStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_coreStmt; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitCoreStmt(this);
			else return visitor.visitChildren(this);
		}
	}

	public final CoreStmtContext coreStmt() throws RecognitionException {
		CoreStmtContext _localctx = new CoreStmtContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_coreStmt);
		try {
			setState(330);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(302);
				stmtBREAKPOINT();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(303);
				stmtCASE();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(304);
				stmtCHAIN();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(305);
				stmtDATA();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(306);
				stmtDIM();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(307);
				stmtEND();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(308);
				stmtRETURN();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(309);
				stmtDEFFN();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(310);
				stmtDEFPROC();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(311);
				stmtFOR();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(312);
				stmtFORIN();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(313);
				stmtGOTO();
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(314);
				stmtGOSUB();
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(315);
				stmtIF();
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(316);
				stmtIFMultiline();
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(317);
				stmtINSTALL();
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(318);
				stmtLET();
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(319);
				stmtOSCLI();
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(320);
				stmtCallFN();
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(321);
				stmtCallPROC();
				}
				break;
			case 21:
				enterOuterAlt(_localctx, 21);
				{
				setState(322);
				stmtREAD();
				}
				break;
			case 22:
				enterOuterAlt(_localctx, 22);
				{
				setState(323);
				stmtRESTORE();
				}
				break;
			case 23:
				enterOuterAlt(_localctx, 23);
				{
				setState(324);
				stmtSWAP();
				}
				break;
			case 24:
				enterOuterAlt(_localctx, 24);
				{
				setState(325);
				stmtTRACEON();
				}
				break;
			case 25:
				enterOuterAlt(_localctx, 25);
				{
				setState(326);
				stmtTRACEOFF();
				}
				break;
			case 26:
				enterOuterAlt(_localctx, 26);
				{
				setState(327);
				stmtTYPE();
				}
				break;
			case 27:
				enterOuterAlt(_localctx, 27);
				{
				setState(328);
				stmtREPEAT();
				}
				break;
			case 28:
				enterOuterAlt(_localctx, 28);
				{
				setState(329);
				stmtWHILE();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtBREAKPOINTContext extends ParserRuleContext {
		public TerminalNode BREAKPOINT() { return getToken(DARICParser.BREAKPOINT, 0); }
		public StmtBREAKPOINTContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtBREAKPOINT; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtBREAKPOINT(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtBREAKPOINTContext stmtBREAKPOINT() throws RecognitionException {
		StmtBREAKPOINTContext _localctx = new StmtBREAKPOINTContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_stmtBREAKPOINT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(332);
			match(BREAKPOINT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtCASEContext extends ParserRuleContext {
		public TerminalNode CASE() { return getToken(DARICParser.CASE, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode OF() { return getToken(DARICParser.OF, 0); }
		public TerminalNode NEWLINE() { return getToken(DARICParser.NEWLINE, 0); }
		public TerminalNode ENDCASE() { return getToken(DARICParser.ENDCASE, 0); }
		public List<WhenContext> when() {
			return getRuleContexts(WhenContext.class);
		}
		public WhenContext when(int i) {
			return getRuleContext(WhenContext.class,i);
		}
		public TerminalNode OTHERWISE() { return getToken(DARICParser.OTHERWISE, 0); }
		public BodyContext body() {
			return getRuleContext(BodyContext.class,0);
		}
		public List<LinenumberContext> linenumber() {
			return getRuleContexts(LinenumberContext.class);
		}
		public LinenumberContext linenumber(int i) {
			return getRuleContext(LinenumberContext.class,i);
		}
		public StmtCASEContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtCASE; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCASE(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtCASEContext stmtCASE() throws RecognitionException {
		StmtCASEContext _localctx = new StmtCASEContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_stmtCASE);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(334);
			match(CASE);
			setState(335);
			expr();
			setState(336);
			match(OF);
			setState(337);
			match(NEWLINE);
			setState(339); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(338);
					when();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(341); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			setState(348);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				{
				setState(344);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(343);
					linenumber();
					}
				}

				setState(346);
				match(OTHERWISE);
				setState(347);
				body();
				}
				break;
			}
			setState(351);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(350);
				linenumber();
				}
			}

			setState(353);
			match(ENDCASE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtCHAINContext extends ParserRuleContext {
		public TerminalNode CHAIN() { return getToken(DARICParser.CHAIN, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public StmtCHAINContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtCHAIN; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCHAIN(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtCHAINContext stmtCHAIN() throws RecognitionException {
		StmtCHAINContext _localctx = new StmtCHAINContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_stmtCHAIN);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(355);
			match(CHAIN);
			setState(356);
			strExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtDATAContext extends ParserRuleContext {
		public TerminalNode DATA() { return getToken(DARICParser.DATA, 0); }
		public List<LiteralContext> literal() {
			return getRuleContexts(LiteralContext.class);
		}
		public LiteralContext literal(int i) {
			return getRuleContext(LiteralContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StmtDATAContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtDATA; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtDATA(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtDATAContext stmtDATA() throws RecognitionException {
		StmtDATAContext _localctx = new StmtDATAContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_stmtDATA);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(358);
			match(DATA);
			setState(359);
			literal();
			setState(364);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(360);
				match(COMMA);
				setState(361);
				literal();
				}
				}
				setState(366);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtDIMContext extends ParserRuleContext {
		public TerminalNode DIM() { return getToken(DARICParser.DIM, 0); }
		public List<VarDeclWithDimensionContext> varDeclWithDimension() {
			return getRuleContexts(VarDeclWithDimensionContext.class);
		}
		public VarDeclWithDimensionContext varDeclWithDimension(int i) {
			return getRuleContext(VarDeclWithDimensionContext.class,i);
		}
		public TerminalNode LOCAL() { return getToken(DARICParser.LOCAL, 0); }
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StmtDIMContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtDIM; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtDIM(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtDIMContext stmtDIM() throws RecognitionException {
		StmtDIMContext _localctx = new StmtDIMContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_stmtDIM);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(368);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(367);
				match(LOCAL);
				}
			}

			setState(370);
			match(DIM);
			setState(371);
			varDeclWithDimension();
			setState(376);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(372);
				match(COMMA);
				setState(373);
				varDeclWithDimension();
				}
				}
				setState(378);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtENDContext extends ParserRuleContext {
		public TerminalNode END() { return getToken(DARICParser.END, 0); }
		public StmtENDContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtEND; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtEND(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtENDContext stmtEND() throws RecognitionException {
		StmtENDContext _localctx = new StmtENDContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_stmtEND);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(379);
			match(END);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtRETURNContext extends ParserRuleContext {
		public TerminalNode RETURN() { return getToken(DARICParser.RETURN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public StmtRETURNContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtRETURN; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtRETURN(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtRETURNContext stmtRETURN() throws RecognitionException {
		StmtRETURNContext _localctx = new StmtRETURNContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_stmtRETURN);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(381);
			match(RETURN);
			setState(383);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
			case 1:
				{
				setState(382);
				expr();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtDEFFNContext extends ParserRuleContext {
		public TerminalNode DEF() { return getToken(DARICParser.DEF, 0); }
		public FnNameContext fnName() {
			return getRuleContext(FnNameContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public BodyContext body() {
			return getRuleContext(BodyContext.class,0);
		}
		public TerminalNode ENDFN() { return getToken(DARICParser.ENDFN, 0); }
		public FunctionVarListContext functionVarList() {
			return getRuleContext(FunctionVarListContext.class,0);
		}
		public LinenumberContext linenumber() {
			return getRuleContext(LinenumberContext.class,0);
		}
		public StmtDEFFNContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtDEFFN; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtDEFFN(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtDEFFNContext stmtDEFFN() throws RecognitionException {
		StmtDEFFNContext _localctx = new StmtDEFFNContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_stmtDEFFN);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(385);
			match(DEF);
			setState(386);
			fnName();
			setState(387);
			match(LPAREN);
			setState(389);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN || ((((_la - 223)) & ~0x3f) == 0 && ((1L << (_la - 223)) & ((1L << (VARIABLE_FLOAT - 223)) | (1L << (VARIABLE_INTEGER - 223)) | (1L << (VARIABLE_STRING - 223)))) != 0)) {
				{
				setState(388);
				functionVarList();
				}
			}

			setState(391);
			match(RPAREN);
			setState(392);
			body();
			setState(394);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(393);
				linenumber();
				}
			}

			setState(396);
			match(ENDFN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtDEFPROCContext extends ParserRuleContext {
		public TerminalNode DEF() { return getToken(DARICParser.DEF, 0); }
		public TerminalNode PROC_NAME() { return getToken(DARICParser.PROC_NAME, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public BodyContext body() {
			return getRuleContext(BodyContext.class,0);
		}
		public TerminalNode ENDPROC() { return getToken(DARICParser.ENDPROC, 0); }
		public FunctionVarListContext functionVarList() {
			return getRuleContext(FunctionVarListContext.class,0);
		}
		public LinenumberContext linenumber() {
			return getRuleContext(LinenumberContext.class,0);
		}
		public StmtDEFPROCContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtDEFPROC; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtDEFPROC(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtDEFPROCContext stmtDEFPROC() throws RecognitionException {
		StmtDEFPROCContext _localctx = new StmtDEFPROCContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_stmtDEFPROC);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(398);
			match(DEF);
			setState(399);
			match(PROC_NAME);
			setState(400);
			match(LPAREN);
			setState(402);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN || ((((_la - 223)) & ~0x3f) == 0 && ((1L << (_la - 223)) & ((1L << (VARIABLE_FLOAT - 223)) | (1L << (VARIABLE_INTEGER - 223)) | (1L << (VARIABLE_STRING - 223)))) != 0)) {
				{
				setState(401);
				functionVarList();
				}
			}

			setState(404);
			match(RPAREN);
			setState(405);
			body();
			setState(407);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(406);
				linenumber();
				}
			}

			setState(409);
			match(ENDPROC);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtFORContext extends ParserRuleContext {
		public TerminalNode FOR() { return getToken(DARICParser.FOR, 0); }
		public JustNumberVarContext justNumberVar() {
			return getRuleContext(JustNumberVarContext.class,0);
		}
		public TerminalNode EQ() { return getToken(DARICParser.EQ, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode TO() { return getToken(DARICParser.TO, 0); }
		public BodyContext body() {
			return getRuleContext(BodyContext.class,0);
		}
		public TerminalNode NEXT() { return getToken(DARICParser.NEXT, 0); }
		public TerminalNode LOCAL() { return getToken(DARICParser.LOCAL, 0); }
		public TerminalNode STEP() { return getToken(DARICParser.STEP, 0); }
		public LinenumberContext linenumber() {
			return getRuleContext(LinenumberContext.class,0);
		}
		public StmtFORContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtFOR; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtFOR(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtFORContext stmtFOR() throws RecognitionException {
		StmtFORContext _localctx = new StmtFORContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_stmtFOR);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(411);
			match(FOR);
			setState(413);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(412);
				match(LOCAL);
				}
			}

			setState(415);
			justNumberVar();
			setState(416);
			match(EQ);
			setState(417);
			numExpr(0);
			setState(418);
			match(TO);
			setState(419);
			numExpr(0);
			setState(422);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==STEP) {
				{
				setState(420);
				match(STEP);
				setState(421);
				numExpr(0);
				}
			}

			setState(424);
			body();
			setState(426);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(425);
				linenumber();
				}
			}

			setState(428);
			match(NEXT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtFORINContext extends ParserRuleContext {
		public TerminalNode FOR() { return getToken(DARICParser.FOR, 0); }
		public List<JustVarContext> justVar() {
			return getRuleContexts(JustVarContext.class);
		}
		public JustVarContext justVar(int i) {
			return getRuleContext(JustVarContext.class,i);
		}
		public TerminalNode IN() { return getToken(DARICParser.IN, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public BodyContext body() {
			return getRuleContext(BodyContext.class,0);
		}
		public TerminalNode NEXT() { return getToken(DARICParser.NEXT, 0); }
		public TerminalNode LOCAL() { return getToken(DARICParser.LOCAL, 0); }
		public LinenumberContext linenumber() {
			return getRuleContext(LinenumberContext.class,0);
		}
		public StmtFORINContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtFORIN; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtFORIN(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtFORINContext stmtFORIN() throws RecognitionException {
		StmtFORINContext _localctx = new StmtFORINContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_stmtFORIN);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(430);
			match(FOR);
			setState(432);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(431);
				match(LOCAL);
				}
			}

			setState(434);
			justVar();
			setState(435);
			match(IN);
			setState(436);
			justVar();
			setState(437);
			match(LPAREN);
			setState(438);
			match(RPAREN);
			setState(439);
			body();
			setState(441);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(440);
				linenumber();
				}
			}

			setState(443);
			match(NEXT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtCallFNContext extends ParserRuleContext {
		public FnNameContext fnName() {
			return getRuleContext(FnNameContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public FunctionParListContext functionParList() {
			return getRuleContext(FunctionParListContext.class,0);
		}
		public StmtCallFNContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtCallFN; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCallFN(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtCallFNContext stmtCallFN() throws RecognitionException {
		StmtCallFNContext _localctx = new StmtCallFNContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_stmtCallFN);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(445);
			fnName();
			setState(446);
			match(LPAREN);
			setState(448);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (MAGENTA - 64)) | (1L << (CYAN - 64)) | (1L << (WHITE - 64)) | (1L << (BLACK - 64)) | (1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (GETSH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)))) != 0) || ((((_la - 133)) & ~0x3f) == 0 && ((1L << (_la - 133)) & ((1L << (LOADTYPEFACE - 133)) | (1L << (POINT - 133)) | (1L << (SCREENWIDTH - 133)) | (1L << (SCREENHEIGHT - 133)) | (1L << (LOADSPRITE - 133)) | (1L << (CREATESPRITE - 133)) | (1L << (TIME - 133)) | (1L << (PI - 133)) | (1L << (SQR - 133)) | (1L << (LN - 133)) | (1L << (LOG - 133)) | (1L << (EXP - 133)) | (1L << (ATN - 133)) | (1L << (TAN - 133)) | (1L << (COS - 133)) | (1L << (SIN - 133)) | (1L << (ABS - 133)) | (1L << (ACS - 133)) | (1L << (ASN - 133)) | (1L << (DEG - 133)) | (1L << (RAD - 133)) | (1L << (SGN - 133)) | (1L << (ASC - 133)) | (1L << (LEN - 133)) | (1L << (INSTR - 133)) | (1L << (VAL - 133)) | (1L << (TIMES - 133)) | (1L << (STRS - 133)) | (1L << (STRINGS - 133)) | (1L << (CHRS - 133)) | (1L << (LEFTS - 133)) | (1L << (MIDS - 133)) | (1L << (RIGHTS - 133)) | (1L << (RND - 133)) | (1L << (RND0 - 133)) | (1L << (RND1 - 133)) | (1L << (NOT - 133)) | (1L << (PLUS - 133)) | (1L << (MINUS - 133)))) != 0) || ((((_la - 212)) & ~0x3f) == 0 && ((1L << (_la - 212)) & ((1L << (LPAREN - 212)) | (1L << (STRINGLITERAL - 212)) | (1L << (FN_INTEGER - 212)) | (1L << (FN_FLOAT - 212)) | (1L << (FN_STRING - 212)) | (1L << (VARIABLE_FLOAT - 212)) | (1L << (VARIABLE_INTEGER - 212)) | (1L << (VARIABLE_STRING - 212)) | (1L << (VARIABLE_TYPE - 212)) | (1L << (HEXNUMBER - 212)) | (1L << (BINARYNUMBER - 212)) | (1L << (NUMBER - 212)) | (1L << (FLOAT - 212)))) != 0)) {
				{
				setState(447);
				functionParList();
				}
			}

			setState(450);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtIFContext extends ParserRuleContext {
		public TerminalNode IF() { return getToken(DARICParser.IF, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public List<ContentContext> content() {
			return getRuleContexts(ContentContext.class);
		}
		public ContentContext content(int i) {
			return getRuleContext(ContentContext.class,i);
		}
		public TerminalNode ELSE() { return getToken(DARICParser.ELSE, 0); }
		public StmtIFContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtIF; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtIF(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtIFContext stmtIF() throws RecognitionException {
		StmtIFContext _localctx = new StmtIFContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_stmtIF);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(452);
			match(IF);
			setState(453);
			expr();
			setState(454);
			content();
			setState(457);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
			case 1:
				{
				setState(455);
				match(ELSE);
				setState(456);
				content();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtIFMultilineContext extends ParserRuleContext {
		public TerminalNode IF() { return getToken(DARICParser.IF, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode THEN() { return getToken(DARICParser.THEN, 0); }
		public List<TerminalNode> NEWLINE() { return getTokens(DARICParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(DARICParser.NEWLINE, i);
		}
		public List<LinePlusContext> linePlus() {
			return getRuleContexts(LinePlusContext.class);
		}
		public LinePlusContext linePlus(int i) {
			return getRuleContext(LinePlusContext.class,i);
		}
		public TerminalNode ENDIF() { return getToken(DARICParser.ENDIF, 0); }
		public TerminalNode ELSE() { return getToken(DARICParser.ELSE, 0); }
		public List<LinenumberContext> linenumber() {
			return getRuleContexts(LinenumberContext.class);
		}
		public LinenumberContext linenumber(int i) {
			return getRuleContext(LinenumberContext.class,i);
		}
		public StmtIFMultilineContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtIFMultiline; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtIFMultiline(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtIFMultilineContext stmtIFMultiline() throws RecognitionException {
		StmtIFMultilineContext _localctx = new StmtIFMultilineContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_stmtIFMultiline);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(459);
			match(IF);
			setState(460);
			expr();
			setState(461);
			match(THEN);
			setState(462);
			match(NEWLINE);
			setState(463);
			linePlus();
			setState(470);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
			case 1:
				{
				setState(465);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(464);
					linenumber();
					}
				}

				setState(467);
				match(ELSE);
				setState(468);
				match(NEWLINE);
				setState(469);
				linePlus();
				}
				break;
			}
			setState(473);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(472);
				linenumber();
				}
			}

			setState(475);
			match(ENDIF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtINSTALLContext extends ParserRuleContext {
		public TerminalNode INSTALL() { return getToken(DARICParser.INSTALL, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public StmtINSTALLContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtINSTALL; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtINSTALL(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtINSTALLContext stmtINSTALL() throws RecognitionException {
		StmtINSTALLContext _localctx = new StmtINSTALLContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_stmtINSTALL);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(477);
			match(INSTALL);
			setState(478);
			strExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtGOTOContext extends ParserRuleContext {
		public TerminalNode GOTO() { return getToken(DARICParser.GOTO, 0); }
		public TerminalNode NUMBER() { return getToken(DARICParser.NUMBER, 0); }
		public StmtGOTOContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtGOTO; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtGOTO(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtGOTOContext stmtGOTO() throws RecognitionException {
		StmtGOTOContext _localctx = new StmtGOTOContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_stmtGOTO);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(480);
			match(GOTO);
			setState(481);
			match(NUMBER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtGOSUBContext extends ParserRuleContext {
		public TerminalNode GOSUB() { return getToken(DARICParser.GOSUB, 0); }
		public TerminalNode NUMBER() { return getToken(DARICParser.NUMBER, 0); }
		public StmtGOSUBContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtGOSUB; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtGOSUB(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtGOSUBContext stmtGOSUB() throws RecognitionException {
		StmtGOSUBContext _localctx = new StmtGOSUBContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_stmtGOSUB);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(483);
			match(GOSUB);
			setState(484);
			match(NUMBER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtLETContext extends ParserRuleContext {
		public List<VarDeclContext> varDecl() {
			return getRuleContexts(VarDeclContext.class);
		}
		public VarDeclContext varDecl(int i) {
			return getRuleContext(VarDeclContext.class,i);
		}
		public List<TerminalNode> EQ() { return getTokens(DARICParser.EQ); }
		public TerminalNode EQ(int i) {
			return getToken(DARICParser.EQ, i);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode LOCAL() { return getToken(DARICParser.LOCAL, 0); }
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public TerminalNode LET() { return getToken(DARICParser.LET, 0); }
		public TerminalNode GLOBAL() { return getToken(DARICParser.GLOBAL, 0); }
		public StmtLETContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtLET; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtLET(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtLETContext stmtLET() throws RecognitionException {
		StmtLETContext _localctx = new StmtLETContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_stmtLET);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(490);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case GLOBAL:
			case LET:
			case VARIABLE_FLOAT:
			case VARIABLE_INTEGER:
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(487);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==GLOBAL || _la==LET) {
					{
					setState(486);
					_la = _input.LA(1);
					if ( !(_la==GLOBAL || _la==LET) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					}
				}

				}
				break;
			case LOCAL:
				{
				setState(489);
				match(LOCAL);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(492);
			varDecl();
			setState(493);
			match(EQ);
			setState(494);
			expr();
			setState(502);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(495);
				match(COMMA);
				setState(496);
				varDecl();
				setState(497);
				match(EQ);
				setState(498);
				expr();
				}
				}
				setState(504);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtOSCLIContext extends ParserRuleContext {
		public TerminalNode OSCLI() { return getToken(DARICParser.OSCLI, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public StmtOSCLIContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtOSCLI; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtOSCLI(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtOSCLIContext stmtOSCLI() throws RecognitionException {
		StmtOSCLIContext _localctx = new StmtOSCLIContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_stmtOSCLI);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(505);
			match(OSCLI);
			setState(506);
			strExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtCallPROCContext extends ParserRuleContext {
		public TerminalNode PROC_NAME() { return getToken(DARICParser.PROC_NAME, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public FunctionParListContext functionParList() {
			return getRuleContext(FunctionParListContext.class,0);
		}
		public StmtCallPROCContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtCallPROC; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCallPROC(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtCallPROCContext stmtCallPROC() throws RecognitionException {
		StmtCallPROCContext _localctx = new StmtCallPROCContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_stmtCallPROC);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(508);
			match(PROC_NAME);
			setState(509);
			match(LPAREN);
			setState(511);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (MAGENTA - 64)) | (1L << (CYAN - 64)) | (1L << (WHITE - 64)) | (1L << (BLACK - 64)) | (1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (GETSH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)))) != 0) || ((((_la - 133)) & ~0x3f) == 0 && ((1L << (_la - 133)) & ((1L << (LOADTYPEFACE - 133)) | (1L << (POINT - 133)) | (1L << (SCREENWIDTH - 133)) | (1L << (SCREENHEIGHT - 133)) | (1L << (LOADSPRITE - 133)) | (1L << (CREATESPRITE - 133)) | (1L << (TIME - 133)) | (1L << (PI - 133)) | (1L << (SQR - 133)) | (1L << (LN - 133)) | (1L << (LOG - 133)) | (1L << (EXP - 133)) | (1L << (ATN - 133)) | (1L << (TAN - 133)) | (1L << (COS - 133)) | (1L << (SIN - 133)) | (1L << (ABS - 133)) | (1L << (ACS - 133)) | (1L << (ASN - 133)) | (1L << (DEG - 133)) | (1L << (RAD - 133)) | (1L << (SGN - 133)) | (1L << (ASC - 133)) | (1L << (LEN - 133)) | (1L << (INSTR - 133)) | (1L << (VAL - 133)) | (1L << (TIMES - 133)) | (1L << (STRS - 133)) | (1L << (STRINGS - 133)) | (1L << (CHRS - 133)) | (1L << (LEFTS - 133)) | (1L << (MIDS - 133)) | (1L << (RIGHTS - 133)) | (1L << (RND - 133)) | (1L << (RND0 - 133)) | (1L << (RND1 - 133)) | (1L << (NOT - 133)) | (1L << (PLUS - 133)) | (1L << (MINUS - 133)))) != 0) || ((((_la - 212)) & ~0x3f) == 0 && ((1L << (_la - 212)) & ((1L << (LPAREN - 212)) | (1L << (STRINGLITERAL - 212)) | (1L << (FN_INTEGER - 212)) | (1L << (FN_FLOAT - 212)) | (1L << (FN_STRING - 212)) | (1L << (VARIABLE_FLOAT - 212)) | (1L << (VARIABLE_INTEGER - 212)) | (1L << (VARIABLE_STRING - 212)) | (1L << (VARIABLE_TYPE - 212)) | (1L << (HEXNUMBER - 212)) | (1L << (BINARYNUMBER - 212)) | (1L << (NUMBER - 212)) | (1L << (FLOAT - 212)))) != 0)) {
				{
				setState(510);
				functionParList();
				}
			}

			setState(513);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtREADContext extends ParserRuleContext {
		public TerminalNode READ() { return getToken(DARICParser.READ, 0); }
		public List<VarDeclContext> varDecl() {
			return getRuleContexts(VarDeclContext.class);
		}
		public VarDeclContext varDecl(int i) {
			return getRuleContext(VarDeclContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StmtREADContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtREAD; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtREAD(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtREADContext stmtREAD() throws RecognitionException {
		StmtREADContext _localctx = new StmtREADContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_stmtREAD);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(515);
			match(READ);
			setState(516);
			varDecl();
			setState(521);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(517);
				match(COMMA);
				setState(518);
				varDecl();
				}
				}
				setState(523);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtRESTOREContext extends ParserRuleContext {
		public TerminalNode RESTORE() { return getToken(DARICParser.RESTORE, 0); }
		public StmtRESTOREContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtRESTORE; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtRESTORE(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtRESTOREContext stmtRESTORE() throws RecognitionException {
		StmtRESTOREContext _localctx = new StmtRESTOREContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_stmtRESTORE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(524);
			match(RESTORE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtSWAPContext extends ParserRuleContext {
		public TerminalNode SWAP() { return getToken(DARICParser.SWAP, 0); }
		public List<JustVarContext> justVar() {
			return getRuleContexts(JustVarContext.class);
		}
		public JustVarContext justVar(int i) {
			return getRuleContext(JustVarContext.class,i);
		}
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public StmtSWAPContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtSWAP; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtSWAP(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtSWAPContext stmtSWAP() throws RecognitionException {
		StmtSWAPContext _localctx = new StmtSWAPContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_stmtSWAP);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(526);
			match(SWAP);
			setState(527);
			justVar();
			setState(528);
			match(COMMA);
			setState(529);
			justVar();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtTRACEONContext extends ParserRuleContext {
		public TerminalNode TRACEON() { return getToken(DARICParser.TRACEON, 0); }
		public StmtTRACEONContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtTRACEON; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtTRACEON(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtTRACEONContext stmtTRACEON() throws RecognitionException {
		StmtTRACEONContext _localctx = new StmtTRACEONContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_stmtTRACEON);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(531);
			match(TRACEON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtTRACEOFFContext extends ParserRuleContext {
		public TerminalNode TRACEOFF() { return getToken(DARICParser.TRACEOFF, 0); }
		public StmtTRACEOFFContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtTRACEOFF; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtTRACEOFF(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtTRACEOFFContext stmtTRACEOFF() throws RecognitionException {
		StmtTRACEOFFContext _localctx = new StmtTRACEOFFContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_stmtTRACEOFF);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(533);
			match(TRACEOFF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtTYPEContext extends ParserRuleContext {
		public TerminalNode TYPE() { return getToken(DARICParser.TYPE, 0); }
		public VarNameContext varName() {
			return getRuleContext(VarNameContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public List<JustVarContext> justVar() {
			return getRuleContexts(JustVarContext.class);
		}
		public JustVarContext justVar(int i) {
			return getRuleContext(JustVarContext.class,i);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StmtTYPEContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtTYPE; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtTYPE(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtTYPEContext stmtTYPE() throws RecognitionException {
		StmtTYPEContext _localctx = new StmtTYPEContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_stmtTYPE);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(535);
			match(TYPE);
			setState(536);
			varName();
			setState(537);
			match(LPAREN);
			setState(538);
			justVar();
			setState(543);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(539);
				match(COMMA);
				setState(540);
				justVar();
				}
				}
				setState(545);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(546);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtREPEATContext extends ParserRuleContext {
		public TerminalNode REPEAT() { return getToken(DARICParser.REPEAT, 0); }
		public BodyContext body() {
			return getRuleContext(BodyContext.class,0);
		}
		public TerminalNode UNTIL() { return getToken(DARICParser.UNTIL, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public LinenumberContext linenumber() {
			return getRuleContext(LinenumberContext.class,0);
		}
		public StmtREPEATContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtREPEAT; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtREPEAT(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtREPEATContext stmtREPEAT() throws RecognitionException {
		StmtREPEATContext _localctx = new StmtREPEATContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_stmtREPEAT);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(548);
			match(REPEAT);
			setState(549);
			body();
			setState(551);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(550);
				linenumber();
				}
			}

			setState(553);
			match(UNTIL);
			setState(554);
			expr();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtWHILEContext extends ParserRuleContext {
		public TerminalNode WHILE() { return getToken(DARICParser.WHILE, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public BodyContext body() {
			return getRuleContext(BodyContext.class,0);
		}
		public TerminalNode ENDWHILE() { return getToken(DARICParser.ENDWHILE, 0); }
		public LinenumberContext linenumber() {
			return getRuleContext(LinenumberContext.class,0);
		}
		public StmtWHILEContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtWHILE; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtWHILE(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtWHILEContext stmtWHILE() throws RecognitionException {
		StmtWHILEContext _localctx = new StmtWHILEContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_stmtWHILE);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(556);
			match(WHILE);
			setState(557);
			expr();
			setState(558);
			body();
			setState(560);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(559);
				linenumber();
				}
			}

			setState(562);
			match(ENDWHILE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class KeyMouseStmtContext extends ParserRuleContext {
		public StmtINPUTContext stmtINPUT() {
			return getRuleContext(StmtINPUTContext.class,0);
		}
		public StmtPRINTContext stmtPRINT() {
			return getRuleContext(StmtPRINTContext.class,0);
		}
		public StmtMOUSEContext stmtMOUSE() {
			return getRuleContext(StmtMOUSEContext.class,0);
		}
		public StmtINKEYContext stmtINKEY() {
			return getRuleContext(StmtINKEYContext.class,0);
		}
		public StmtINKEYSContext stmtINKEYS() {
			return getRuleContext(StmtINKEYSContext.class,0);
		}
		public StmtGETContext stmtGET() {
			return getRuleContext(StmtGETContext.class,0);
		}
		public StmtGETSContext stmtGETS() {
			return getRuleContext(StmtGETSContext.class,0);
		}
		public KeyMouseStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_keyMouseStmt; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitKeyMouseStmt(this);
			else return visitor.visitChildren(this);
		}
	}

	public final KeyMouseStmtContext keyMouseStmt() throws RecognitionException {
		KeyMouseStmtContext _localctx = new KeyMouseStmtContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_keyMouseStmt);
		try {
			setState(571);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INPUT:
				enterOuterAlt(_localctx, 1);
				{
				setState(564);
				stmtINPUT();
				}
				break;
			case PRINT:
				enterOuterAlt(_localctx, 2);
				{
				setState(565);
				stmtPRINT();
				}
				break;
			case MOUSE:
				enterOuterAlt(_localctx, 3);
				{
				setState(566);
				stmtMOUSE();
				}
				break;
			case INKEY:
				enterOuterAlt(_localctx, 4);
				{
				setState(567);
				stmtINKEY();
				}
				break;
			case INKEYS:
				enterOuterAlt(_localctx, 5);
				{
				setState(568);
				stmtINKEYS();
				}
				break;
			case GET:
				enterOuterAlt(_localctx, 6);
				{
				setState(569);
				stmtGET();
				}
				break;
			case GETS:
				enterOuterAlt(_localctx, 7);
				{
				setState(570);
				stmtGETS();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtINPUTContext extends ParserRuleContext {
		public TerminalNode INPUT() { return getToken(DARICParser.INPUT, 0); }
		public List<JustVarContext> justVar() {
			return getRuleContexts(JustVarContext.class);
		}
		public JustVarContext justVar(int i) {
			return getRuleContext(JustVarContext.class,i);
		}
		public TerminalNode LOCAL() { return getToken(DARICParser.LOCAL, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StmtINPUTContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtINPUT; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtINPUT(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtINPUTContext stmtINPUT() throws RecognitionException {
		StmtINPUTContext _localctx = new StmtINPUTContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_stmtINPUT);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(573);
			match(INPUT);
			setState(575);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(574);
				match(LOCAL);
				}
			}

			setState(581);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,47,_ctx) ) {
			case 1:
				{
				setState(577);
				strExpr(0);
				setState(579);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(578);
					match(COMMA);
					}
				}

				}
				break;
			}
			setState(583);
			justVar();
			setState(588);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(584);
				match(COMMA);
				setState(585);
				justVar();
				}
				}
				setState(590);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtPRINTContext extends ParserRuleContext {
		public TerminalNode PRINT() { return getToken(DARICParser.PRINT, 0); }
		public PrintListContext printList() {
			return getRuleContext(PrintListContext.class,0);
		}
		public StmtPRINTContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtPRINT; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtPRINT(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtPRINTContext stmtPRINT() throws RecognitionException {
		StmtPRINTContext _localctx = new StmtPRINTContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_stmtPRINT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(591);
			match(PRINT);
			setState(593);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,49,_ctx) ) {
			case 1:
				{
				setState(592);
				printList();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtMOUSEContext extends ParserRuleContext {
		public TerminalNode MOUSE() { return getToken(DARICParser.MOUSE, 0); }
		public List<VarNameIntegerContext> varNameInteger() {
			return getRuleContexts(VarNameIntegerContext.class);
		}
		public VarNameIntegerContext varNameInteger(int i) {
			return getRuleContext(VarNameIntegerContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StmtMOUSEContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtMOUSE; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtMOUSE(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtMOUSEContext stmtMOUSE() throws RecognitionException {
		StmtMOUSEContext _localctx = new StmtMOUSEContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_stmtMOUSE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(595);
			match(MOUSE);
			setState(596);
			varNameInteger();
			setState(597);
			match(COMMA);
			setState(598);
			varNameInteger();
			setState(599);
			match(COMMA);
			setState(600);
			varNameInteger();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtINKEYContext extends ParserRuleContext {
		public TerminalNode INKEY() { return getToken(DARICParser.INKEY, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public StmtINKEYContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtINKEY; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtINKEY(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtINKEYContext stmtINKEY() throws RecognitionException {
		StmtINKEYContext _localctx = new StmtINKEYContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_stmtINKEY);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(602);
			match(INKEY);
			setState(603);
			match(LPAREN);
			setState(604);
			numExpr(0);
			setState(605);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtINKEYSContext extends ParserRuleContext {
		public TerminalNode INKEYS() { return getToken(DARICParser.INKEYS, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public StmtINKEYSContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtINKEYS; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtINKEYS(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtINKEYSContext stmtINKEYS() throws RecognitionException {
		StmtINKEYSContext _localctx = new StmtINKEYSContext(_ctx, getState());
		enterRule(_localctx, 82, RULE_stmtINKEYS);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(607);
			match(INKEYS);
			setState(608);
			match(LPAREN);
			setState(609);
			numExpr(0);
			setState(610);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtGETContext extends ParserRuleContext {
		public TerminalNode GET() { return getToken(DARICParser.GET, 0); }
		public StmtGETContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtGET; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtGET(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtGETContext stmtGET() throws RecognitionException {
		StmtGETContext _localctx = new StmtGETContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_stmtGET);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(612);
			match(GET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtGETSContext extends ParserRuleContext {
		public TerminalNode GETS() { return getToken(DARICParser.GETS, 0); }
		public StmtGETSContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtGETS; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtGETS(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtGETSContext stmtGETS() throws RecognitionException {
		StmtGETSContext _localctx = new StmtGETSContext(_ctx, getState());
		enterRule(_localctx, 86, RULE_stmtGETS);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(614);
			match(GETS);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtOperatorEqualContext extends ParserRuleContext {
		public VarDeclContext varDecl() {
			return getRuleContext(VarDeclContext.class,0);
		}
		public TerminalNode MULTIPLY_E() { return getToken(DARICParser.MULTIPLY_E, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode DIVIDE_E() { return getToken(DARICParser.DIVIDE_E, 0); }
		public TerminalNode PLUS_E() { return getToken(DARICParser.PLUS_E, 0); }
		public TerminalNode MINUS_E() { return getToken(DARICParser.MINUS_E, 0); }
		public TerminalNode SHL_E() { return getToken(DARICParser.SHL_E, 0); }
		public TerminalNode SHR_E() { return getToken(DARICParser.SHR_E, 0); }
		public StmtOperatorEqualContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtOperatorEqual; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtOperatorEqual(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtOperatorEqualContext stmtOperatorEqual() throws RecognitionException {
		StmtOperatorEqualContext _localctx = new StmtOperatorEqualContext(_ctx, getState());
		enterRule(_localctx, 88, RULE_stmtOperatorEqual);
		try {
			setState(640);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,50,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(616);
				varDecl();
				setState(617);
				match(MULTIPLY_E);
				setState(618);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(620);
				varDecl();
				setState(621);
				match(DIVIDE_E);
				setState(622);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(624);
				varDecl();
				setState(625);
				match(PLUS_E);
				setState(626);
				numExpr(0);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(628);
				varDecl();
				setState(629);
				match(MINUS_E);
				setState(630);
				numExpr(0);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(632);
				varDecl();
				setState(633);
				match(SHL_E);
				setState(634);
				numExpr(0);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(636);
				varDecl();
				setState(637);
				match(SHR_E);
				setState(638);
				numExpr(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IoStmtContext extends ParserRuleContext {
		public StmtBPUTHContext stmtBPUTH() {
			return getRuleContext(StmtBPUTHContext.class,0);
		}
		public StmtBGETHContext stmtBGETH() {
			return getRuleContext(StmtBGETHContext.class,0);
		}
		public StmtPTRHContext stmtPTRH() {
			return getRuleContext(StmtPTRHContext.class,0);
		}
		public StmtCLOSEHContext stmtCLOSEH() {
			return getRuleContext(StmtCLOSEHContext.class,0);
		}
		public StmtLISTFILESContext stmtLISTFILES() {
			return getRuleContext(StmtLISTFILESContext.class,0);
		}
		public IoStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ioStmt; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitIoStmt(this);
			else return visitor.visitChildren(this);
		}
	}

	public final IoStmtContext ioStmt() throws RecognitionException {
		IoStmtContext _localctx = new IoStmtContext(_ctx, getState());
		enterRule(_localctx, 90, RULE_ioStmt);
		try {
			setState(647);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BPUTH:
				enterOuterAlt(_localctx, 1);
				{
				setState(642);
				stmtBPUTH();
				}
				break;
			case BGETH:
				enterOuterAlt(_localctx, 2);
				{
				setState(643);
				stmtBGETH();
				}
				break;
			case PTRH:
				enterOuterAlt(_localctx, 3);
				{
				setState(644);
				stmtPTRH();
				}
				break;
			case CLOSEH:
				enterOuterAlt(_localctx, 4);
				{
				setState(645);
				stmtCLOSEH();
				}
				break;
			case LOCAL:
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 5);
				{
				setState(646);
				stmtLISTFILES();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtBPUTHContext extends ParserRuleContext {
		public TerminalNode BPUTH() { return getToken(DARICParser.BPUTH, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public StmtBPUTHContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtBPUTH; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtBPUTH(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtBPUTHContext stmtBPUTH() throws RecognitionException {
		StmtBPUTHContext _localctx = new StmtBPUTHContext(_ctx, getState());
		enterRule(_localctx, 92, RULE_stmtBPUTH);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(649);
			match(BPUTH);
			setState(650);
			numExpr(0);
			setState(651);
			match(COMMA);
			setState(652);
			numExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtBGETHContext extends ParserRuleContext {
		public TerminalNode BGETH() { return getToken(DARICParser.BGETH, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public StmtBGETHContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtBGETH; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtBGETH(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtBGETHContext stmtBGETH() throws RecognitionException {
		StmtBGETHContext _localctx = new StmtBGETHContext(_ctx, getState());
		enterRule(_localctx, 94, RULE_stmtBGETH);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(654);
			match(BGETH);
			setState(655);
			numExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtPTRHContext extends ParserRuleContext {
		public TerminalNode PTRH() { return getToken(DARICParser.PTRH, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public TerminalNode EQ() { return getToken(DARICParser.EQ, 0); }
		public StmtPTRHContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtPTRH; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtPTRH(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtPTRHContext stmtPTRH() throws RecognitionException {
		StmtPTRHContext _localctx = new StmtPTRHContext(_ctx, getState());
		enterRule(_localctx, 96, RULE_stmtPTRH);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(657);
			match(PTRH);
			setState(658);
			match(LPAREN);
			setState(659);
			numExpr(0);
			setState(660);
			match(RPAREN);
			setState(661);
			match(EQ);
			setState(662);
			numExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtCLOSEHContext extends ParserRuleContext {
		public TerminalNode CLOSEH() { return getToken(DARICParser.CLOSEH, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public StmtCLOSEHContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtCLOSEH; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCLOSEH(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtCLOSEHContext stmtCLOSEH() throws RecognitionException {
		StmtCLOSEHContext _localctx = new StmtCLOSEHContext(_ctx, getState());
		enterRule(_localctx, 98, RULE_stmtCLOSEH);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(664);
			match(CLOSEH);
			setState(665);
			numExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtLISTFILESContext extends ParserRuleContext {
		public VarNameStringContext varNameString() {
			return getRuleContext(VarNameStringContext.class,0);
		}
		public List<TerminalNode> LPAREN() { return getTokens(DARICParser.LPAREN); }
		public TerminalNode LPAREN(int i) {
			return getToken(DARICParser.LPAREN, i);
		}
		public List<TerminalNode> RPAREN() { return getTokens(DARICParser.RPAREN); }
		public TerminalNode RPAREN(int i) {
			return getToken(DARICParser.RPAREN, i);
		}
		public TerminalNode EQ() { return getToken(DARICParser.EQ, 0); }
		public TerminalNode LISTFILES() { return getToken(DARICParser.LISTFILES, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public TerminalNode LOCAL() { return getToken(DARICParser.LOCAL, 0); }
		public StmtLISTFILESContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtLISTFILES; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtLISTFILES(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtLISTFILESContext stmtLISTFILES() throws RecognitionException {
		StmtLISTFILESContext _localctx = new StmtLISTFILESContext(_ctx, getState());
		enterRule(_localctx, 100, RULE_stmtLISTFILES);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(668);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(667);
				match(LOCAL);
				}
			}

			setState(670);
			varNameString();
			setState(671);
			match(LPAREN);
			setState(672);
			match(RPAREN);
			setState(673);
			match(EQ);
			setState(674);
			match(LISTFILES);
			setState(675);
			match(LPAREN);
			setState(676);
			strExpr(0);
			setState(677);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class GraphicsStmtContext extends ParserRuleContext {
		public StmtCLSContext stmtCLS() {
			return getRuleContext(StmtCLSContext.class,0);
		}
		public StmtCOLOURContext stmtCOLOUR() {
			return getRuleContext(StmtCOLOURContext.class,0);
		}
		public StmtCOLOURBGContext stmtCOLOURBG() {
			return getRuleContext(StmtCOLOURBGContext.class,0);
		}
		public StmtCURSORONContext stmtCURSORON() {
			return getRuleContext(StmtCURSORONContext.class,0);
		}
		public StmtCURSOROFFContext stmtCURSOROFF() {
			return getRuleContext(StmtCURSOROFFContext.class,0);
		}
		public StmtGRAPHICSContext stmtGRAPHICS() {
			return getRuleContext(StmtGRAPHICSContext.class,0);
		}
		public StmtFLIPContext stmtFLIP() {
			return getRuleContext(StmtFLIPContext.class,0);
		}
		public StmtCIRCLEContext stmtCIRCLE() {
			return getRuleContext(StmtCIRCLEContext.class,0);
		}
		public StmtLINEContext stmtLINE() {
			return getRuleContext(StmtLINEContext.class,0);
		}
		public StmtRECTANGLEContext stmtRECTANGLE() {
			return getRuleContext(StmtRECTANGLEContext.class,0);
		}
		public StmtTRIANGLEContext stmtTRIANGLE() {
			return getRuleContext(StmtTRIANGLEContext.class,0);
		}
		public StmtPLOTContext stmtPLOT() {
			return getRuleContext(StmtPLOTContext.class,0);
		}
		public StmtCLIPONContext stmtCLIPON() {
			return getRuleContext(StmtCLIPONContext.class,0);
		}
		public StmtCLIPOFFContext stmtCLIPOFF() {
			return getRuleContext(StmtCLIPOFFContext.class,0);
		}
		public StmtTEXTContext stmtTEXT() {
			return getRuleContext(StmtTEXTContext.class,0);
		}
		public StmtTEXTRIGHTContext stmtTEXTRIGHT() {
			return getRuleContext(StmtTEXTRIGHTContext.class,0);
		}
		public StmtTEXTCENTREContext stmtTEXTCENTRE() {
			return getRuleContext(StmtTEXTCENTREContext.class,0);
		}
		public StmtSHOWFPSContext stmtSHOWFPS() {
			return getRuleContext(StmtSHOWFPSContext.class,0);
		}
		public StmtRENDERTOSPRITEContext stmtRENDERTOSPRITE() {
			return getRuleContext(StmtRENDERTOSPRITEContext.class,0);
		}
		public StmtRENDERTOSCREENContext stmtRENDERTOSCREEN() {
			return getRuleContext(StmtRENDERTOSCREENContext.class,0);
		}
		public StmtDRAWSPRITEContext stmtDRAWSPRITE() {
			return getRuleContext(StmtDRAWSPRITEContext.class,0);
		}
		public StmtDELETESPRITEContext stmtDELETESPRITE() {
			return getRuleContext(StmtDELETESPRITEContext.class,0);
		}
		public StmtRENDERFRAMEContext stmtRENDERFRAME() {
			return getRuleContext(StmtRENDERFRAMEContext.class,0);
		}
		public StmtCREATEVERTEXContext stmtCREATEVERTEX() {
			return getRuleContext(StmtCREATEVERTEXContext.class,0);
		}
		public StmtCREATETRIANGLEContext stmtCREATETRIANGLE() {
			return getRuleContext(StmtCREATETRIANGLEContext.class,0);
		}
		public StmtTRANSLATEContext stmtTRANSLATE() {
			return getRuleContext(StmtTRANSLATEContext.class,0);
		}
		public StmtROTATEContext stmtROTATE() {
			return getRuleContext(StmtROTATEContext.class,0);
		}
		public StmtSCALEContext stmtSCALE() {
			return getRuleContext(StmtSCALEContext.class,0);
		}
		public StmtDELETEOBJECTContext stmtDELETEOBJECT() {
			return getRuleContext(StmtDELETEOBJECTContext.class,0);
		}
		public GraphicsStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_graphicsStmt; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitGraphicsStmt(this);
			else return visitor.visitChildren(this);
		}
	}

	public final GraphicsStmtContext graphicsStmt() throws RecognitionException {
		GraphicsStmtContext _localctx = new GraphicsStmtContext(_ctx, getState());
		enterRule(_localctx, 102, RULE_graphicsStmt);
		try {
			setState(708);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CLS:
				enterOuterAlt(_localctx, 1);
				{
				setState(679);
				stmtCLS();
				}
				break;
			case COLOUR:
				enterOuterAlt(_localctx, 2);
				{
				setState(680);
				stmtCOLOUR();
				}
				break;
			case COLOURBG:
				enterOuterAlt(_localctx, 3);
				{
				setState(681);
				stmtCOLOURBG();
				}
				break;
			case CURSORON:
				enterOuterAlt(_localctx, 4);
				{
				setState(682);
				stmtCURSORON();
				}
				break;
			case CURSOROFF:
				enterOuterAlt(_localctx, 5);
				{
				setState(683);
				stmtCURSOROFF();
				}
				break;
			case GRAPHICS:
				enterOuterAlt(_localctx, 6);
				{
				setState(684);
				stmtGRAPHICS();
				}
				break;
			case FLIP:
				enterOuterAlt(_localctx, 7);
				{
				setState(685);
				stmtFLIP();
				}
				break;
			case CIRCLE:
				enterOuterAlt(_localctx, 8);
				{
				setState(686);
				stmtCIRCLE();
				}
				break;
			case LINE:
				enterOuterAlt(_localctx, 9);
				{
				setState(687);
				stmtLINE();
				}
				break;
			case RECTANGLE:
				enterOuterAlt(_localctx, 10);
				{
				setState(688);
				stmtRECTANGLE();
				}
				break;
			case TRIANGLE:
				enterOuterAlt(_localctx, 11);
				{
				setState(689);
				stmtTRIANGLE();
				}
				break;
			case PLOT:
				enterOuterAlt(_localctx, 12);
				{
				setState(690);
				stmtPLOT();
				}
				break;
			case CLIPON:
				enterOuterAlt(_localctx, 13);
				{
				setState(691);
				stmtCLIPON();
				}
				break;
			case CLIPOFF:
				enterOuterAlt(_localctx, 14);
				{
				setState(692);
				stmtCLIPOFF();
				}
				break;
			case TEXT:
				enterOuterAlt(_localctx, 15);
				{
				setState(693);
				stmtTEXT();
				}
				break;
			case TEXTRIGHT:
				enterOuterAlt(_localctx, 16);
				{
				setState(694);
				stmtTEXTRIGHT();
				}
				break;
			case TEXTCENTRE:
			case TEXTCENTER:
				enterOuterAlt(_localctx, 17);
				{
				setState(695);
				stmtTEXTCENTRE();
				}
				break;
			case SHOWFPS:
				enterOuterAlt(_localctx, 18);
				{
				setState(696);
				stmtSHOWFPS();
				}
				break;
			case DRAWTOSPRITE:
				enterOuterAlt(_localctx, 19);
				{
				setState(697);
				stmtRENDERTOSPRITE();
				}
				break;
			case DRAWTOSCREEN:
				enterOuterAlt(_localctx, 20);
				{
				setState(698);
				stmtRENDERTOSCREEN();
				}
				break;
			case DRAWSPRITE:
				enterOuterAlt(_localctx, 21);
				{
				setState(699);
				stmtDRAWSPRITE();
				}
				break;
			case DELETESPRITE:
				enterOuterAlt(_localctx, 22);
				{
				setState(700);
				stmtDELETESPRITE();
				}
				break;
			case RENDERFRAME:
				enterOuterAlt(_localctx, 23);
				{
				setState(701);
				stmtRENDERFRAME();
				}
				break;
			case CREATEVERTEX:
				enterOuterAlt(_localctx, 24);
				{
				setState(702);
				stmtCREATEVERTEX();
				}
				break;
			case CREATETRIANGLE:
				enterOuterAlt(_localctx, 25);
				{
				setState(703);
				stmtCREATETRIANGLE();
				}
				break;
			case TRANSLATE:
				enterOuterAlt(_localctx, 26);
				{
				setState(704);
				stmtTRANSLATE();
				}
				break;
			case ROTATE:
				enterOuterAlt(_localctx, 27);
				{
				setState(705);
				stmtROTATE();
				}
				break;
			case SCALE:
				enterOuterAlt(_localctx, 28);
				{
				setState(706);
				stmtSCALE();
				}
				break;
			case DELETEOBJECT:
				enterOuterAlt(_localctx, 29);
				{
				setState(707);
				stmtDELETEOBJECT();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtCLSContext extends ParserRuleContext {
		public TerminalNode CLS() { return getToken(DARICParser.CLS, 0); }
		public StmtCLSContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtCLS; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCLS(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtCLSContext stmtCLS() throws RecognitionException {
		StmtCLSContext _localctx = new StmtCLSContext(_ctx, getState());
		enterRule(_localctx, 104, RULE_stmtCLS);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(710);
			match(CLS);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtCOLOURContext extends ParserRuleContext {
		public TerminalNode COLOUR() { return getToken(DARICParser.COLOUR, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StmtCOLOURContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtCOLOUR; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCOLOUR(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtCOLOURContext stmtCOLOUR() throws RecognitionException {
		StmtCOLOURContext _localctx = new StmtCOLOURContext(_ctx, getState());
		enterRule(_localctx, 106, RULE_stmtCOLOUR);
		try {
			setState(721);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,54,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(712);
				match(COLOUR);
				setState(713);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(714);
				match(COLOUR);
				setState(715);
				numExpr(0);
				setState(716);
				match(COMMA);
				setState(717);
				numExpr(0);
				setState(718);
				match(COMMA);
				setState(719);
				numExpr(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtCOLOURBGContext extends ParserRuleContext {
		public TerminalNode COLOURBG() { return getToken(DARICParser.COLOURBG, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StmtCOLOURBGContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtCOLOURBG; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCOLOURBG(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtCOLOURBGContext stmtCOLOURBG() throws RecognitionException {
		StmtCOLOURBGContext _localctx = new StmtCOLOURBGContext(_ctx, getState());
		enterRule(_localctx, 108, RULE_stmtCOLOURBG);
		try {
			setState(732);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,55,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(723);
				match(COLOURBG);
				setState(724);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(725);
				match(COLOURBG);
				setState(726);
				numExpr(0);
				setState(727);
				match(COMMA);
				setState(728);
				numExpr(0);
				setState(729);
				match(COMMA);
				setState(730);
				numExpr(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtCURSORONContext extends ParserRuleContext {
		public TerminalNode CURSORON() { return getToken(DARICParser.CURSORON, 0); }
		public StmtCURSORONContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtCURSORON; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCURSORON(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtCURSORONContext stmtCURSORON() throws RecognitionException {
		StmtCURSORONContext _localctx = new StmtCURSORONContext(_ctx, getState());
		enterRule(_localctx, 110, RULE_stmtCURSORON);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(734);
			match(CURSORON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtCURSOROFFContext extends ParserRuleContext {
		public TerminalNode CURSOROFF() { return getToken(DARICParser.CURSOROFF, 0); }
		public StmtCURSOROFFContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtCURSOROFF; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCURSOROFF(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtCURSOROFFContext stmtCURSOROFF() throws RecognitionException {
		StmtCURSOROFFContext _localctx = new StmtCURSOROFFContext(_ctx, getState());
		enterRule(_localctx, 112, RULE_stmtCURSOROFF);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(736);
			match(CURSOROFF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtGRAPHICSContext extends ParserRuleContext {
		public TerminalNode GRAPHICS() { return getToken(DARICParser.GRAPHICS, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public TerminalNode BANKED() { return getToken(DARICParser.BANKED, 0); }
		public StmtGRAPHICSContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtGRAPHICS; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtGRAPHICS(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtGRAPHICSContext stmtGRAPHICS() throws RecognitionException {
		StmtGRAPHICSContext _localctx = new StmtGRAPHICSContext(_ctx, getState());
		enterRule(_localctx, 114, RULE_stmtGRAPHICS);
		try {
			setState(752);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,56,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(738);
				match(GRAPHICS);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(739);
				match(GRAPHICS);
				setState(740);
				numExpr(0);
				setState(741);
				match(COMMA);
				setState(742);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(744);
				match(GRAPHICS);
				setState(745);
				match(BANKED);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(746);
				match(GRAPHICS);
				setState(747);
				match(BANKED);
				setState(748);
				numExpr(0);
				setState(749);
				match(COMMA);
				setState(750);
				numExpr(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtFLIPContext extends ParserRuleContext {
		public TerminalNode FLIP() { return getToken(DARICParser.FLIP, 0); }
		public StmtFLIPContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtFLIP; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtFLIP(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtFLIPContext stmtFLIP() throws RecognitionException {
		StmtFLIPContext _localctx = new StmtFLIPContext(_ctx, getState());
		enterRule(_localctx, 116, RULE_stmtFLIP);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(754);
			match(FLIP);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtCIRCLEContext extends ParserRuleContext {
		public TerminalNode CIRCLE() { return getToken(DARICParser.CIRCLE, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public TerminalNode FILL() { return getToken(DARICParser.FILL, 0); }
		public StmtCIRCLEContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtCIRCLE; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCIRCLE(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtCIRCLEContext stmtCIRCLE() throws RecognitionException {
		StmtCIRCLEContext _localctx = new StmtCIRCLEContext(_ctx, getState());
		enterRule(_localctx, 118, RULE_stmtCIRCLE);
		try {
			setState(771);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,57,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(756);
				match(CIRCLE);
				setState(757);
				numExpr(0);
				setState(758);
				match(COMMA);
				setState(759);
				numExpr(0);
				setState(760);
				match(COMMA);
				setState(761);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(763);
				match(CIRCLE);
				setState(764);
				match(FILL);
				setState(765);
				numExpr(0);
				setState(766);
				match(COMMA);
				setState(767);
				numExpr(0);
				setState(768);
				match(COMMA);
				setState(769);
				numExpr(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtLINEContext extends ParserRuleContext {
		public TerminalNode LINE() { return getToken(DARICParser.LINE, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StmtLINEContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtLINE; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtLINE(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtLINEContext stmtLINE() throws RecognitionException {
		StmtLINEContext _localctx = new StmtLINEContext(_ctx, getState());
		enterRule(_localctx, 120, RULE_stmtLINE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(773);
			match(LINE);
			setState(774);
			numExpr(0);
			setState(775);
			match(COMMA);
			setState(776);
			numExpr(0);
			setState(777);
			match(COMMA);
			setState(778);
			numExpr(0);
			setState(779);
			match(COMMA);
			setState(780);
			numExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtRECTANGLEContext extends ParserRuleContext {
		public TerminalNode RECTANGLE() { return getToken(DARICParser.RECTANGLE, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public TerminalNode FILL() { return getToken(DARICParser.FILL, 0); }
		public StmtRECTANGLEContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtRECTANGLE; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtRECTANGLE(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtRECTANGLEContext stmtRECTANGLE() throws RecognitionException {
		StmtRECTANGLEContext _localctx = new StmtRECTANGLEContext(_ctx, getState());
		enterRule(_localctx, 122, RULE_stmtRECTANGLE);
		try {
			setState(801);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,58,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(782);
				match(RECTANGLE);
				setState(783);
				numExpr(0);
				setState(784);
				match(COMMA);
				setState(785);
				numExpr(0);
				setState(786);
				match(COMMA);
				setState(787);
				numExpr(0);
				setState(788);
				match(COMMA);
				setState(789);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(791);
				match(RECTANGLE);
				setState(792);
				match(FILL);
				setState(793);
				numExpr(0);
				setState(794);
				match(COMMA);
				setState(795);
				numExpr(0);
				setState(796);
				match(COMMA);
				setState(797);
				numExpr(0);
				setState(798);
				match(COMMA);
				setState(799);
				numExpr(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtTRIANGLEContext extends ParserRuleContext {
		public TerminalNode TRIANGLE() { return getToken(DARICParser.TRIANGLE, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public TerminalNode FILL() { return getToken(DARICParser.FILL, 0); }
		public TerminalNode SHADED() { return getToken(DARICParser.SHADED, 0); }
		public StmtTRIANGLEContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtTRIANGLE; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtTRIANGLE(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtTRIANGLEContext stmtTRIANGLE() throws RecognitionException {
		StmtTRIANGLEContext _localctx = new StmtTRIANGLEContext(_ctx, getState());
		enterRule(_localctx, 124, RULE_stmtTRIANGLE);
		try {
			setState(850);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,59,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(803);
				match(TRIANGLE);
				setState(804);
				numExpr(0);
				setState(805);
				match(COMMA);
				setState(806);
				numExpr(0);
				setState(807);
				match(COMMA);
				setState(808);
				numExpr(0);
				setState(809);
				match(COMMA);
				setState(810);
				numExpr(0);
				setState(811);
				match(COMMA);
				setState(812);
				numExpr(0);
				setState(813);
				match(COMMA);
				setState(814);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(816);
				match(TRIANGLE);
				setState(817);
				match(FILL);
				setState(818);
				numExpr(0);
				setState(819);
				match(COMMA);
				setState(820);
				numExpr(0);
				setState(821);
				match(COMMA);
				setState(822);
				numExpr(0);
				setState(823);
				match(COMMA);
				setState(824);
				numExpr(0);
				setState(825);
				match(COMMA);
				setState(826);
				numExpr(0);
				setState(827);
				match(COMMA);
				setState(828);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(830);
				match(TRIANGLE);
				setState(831);
				match(SHADED);
				setState(832);
				numExpr(0);
				setState(833);
				match(COMMA);
				setState(834);
				numExpr(0);
				setState(835);
				match(COMMA);
				setState(836);
				numExpr(0);
				setState(837);
				match(COMMA);
				setState(838);
				numExpr(0);
				setState(839);
				match(COMMA);
				setState(840);
				numExpr(0);
				setState(841);
				match(COMMA);
				setState(842);
				numExpr(0);
				setState(843);
				match(COMMA);
				setState(844);
				numExpr(0);
				setState(845);
				match(COMMA);
				setState(846);
				numExpr(0);
				setState(847);
				match(COMMA);
				setState(848);
				numExpr(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtPLOTContext extends ParserRuleContext {
		public TerminalNode PLOT() { return getToken(DARICParser.PLOT, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public StmtPLOTContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtPLOT; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtPLOT(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtPLOTContext stmtPLOT() throws RecognitionException {
		StmtPLOTContext _localctx = new StmtPLOTContext(_ctx, getState());
		enterRule(_localctx, 126, RULE_stmtPLOT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(852);
			match(PLOT);
			setState(853);
			numExpr(0);
			setState(854);
			match(COMMA);
			setState(855);
			numExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtCLIPONContext extends ParserRuleContext {
		public TerminalNode CLIPON() { return getToken(DARICParser.CLIPON, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StmtCLIPONContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtCLIPON; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCLIPON(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtCLIPONContext stmtCLIPON() throws RecognitionException {
		StmtCLIPONContext _localctx = new StmtCLIPONContext(_ctx, getState());
		enterRule(_localctx, 128, RULE_stmtCLIPON);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(857);
			match(CLIPON);
			setState(858);
			numExpr(0);
			setState(859);
			match(COMMA);
			setState(860);
			numExpr(0);
			setState(861);
			match(COMMA);
			setState(862);
			numExpr(0);
			setState(863);
			match(COMMA);
			setState(864);
			numExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtCLIPOFFContext extends ParserRuleContext {
		public TerminalNode CLIPOFF() { return getToken(DARICParser.CLIPOFF, 0); }
		public StmtCLIPOFFContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtCLIPOFF; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCLIPOFF(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtCLIPOFFContext stmtCLIPOFF() throws RecognitionException {
		StmtCLIPOFFContext _localctx = new StmtCLIPOFFContext(_ctx, getState());
		enterRule(_localctx, 130, RULE_stmtCLIPOFF);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(866);
			match(CLIPOFF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtTEXTContext extends ParserRuleContext {
		public TerminalNode TEXT() { return getToken(DARICParser.TEXT, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public StmtTEXTContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtTEXT; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtTEXT(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtTEXTContext stmtTEXT() throws RecognitionException {
		StmtTEXTContext _localctx = new StmtTEXTContext(_ctx, getState());
		enterRule(_localctx, 132, RULE_stmtTEXT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(868);
			match(TEXT);
			setState(869);
			numExpr(0);
			setState(870);
			match(COMMA);
			setState(871);
			numExpr(0);
			setState(872);
			match(COMMA);
			setState(873);
			numExpr(0);
			setState(874);
			match(COMMA);
			setState(875);
			strExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtTEXTRIGHTContext extends ParserRuleContext {
		public TerminalNode TEXTRIGHT() { return getToken(DARICParser.TEXTRIGHT, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public StmtTEXTRIGHTContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtTEXTRIGHT; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtTEXTRIGHT(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtTEXTRIGHTContext stmtTEXTRIGHT() throws RecognitionException {
		StmtTEXTRIGHTContext _localctx = new StmtTEXTRIGHTContext(_ctx, getState());
		enterRule(_localctx, 134, RULE_stmtTEXTRIGHT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(877);
			match(TEXTRIGHT);
			setState(878);
			numExpr(0);
			setState(879);
			match(COMMA);
			setState(880);
			numExpr(0);
			setState(881);
			match(COMMA);
			setState(882);
			numExpr(0);
			setState(883);
			match(COMMA);
			setState(884);
			strExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtTEXTCENTREContext extends ParserRuleContext {
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public TerminalNode TEXTCENTRE() { return getToken(DARICParser.TEXTCENTRE, 0); }
		public TerminalNode TEXTCENTER() { return getToken(DARICParser.TEXTCENTER, 0); }
		public StmtTEXTCENTREContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtTEXTCENTRE; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtTEXTCENTRE(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtTEXTCENTREContext stmtTEXTCENTRE() throws RecognitionException {
		StmtTEXTCENTREContext _localctx = new StmtTEXTCENTREContext(_ctx, getState());
		enterRule(_localctx, 136, RULE_stmtTEXTCENTRE);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(886);
			_la = _input.LA(1);
			if ( !(_la==TEXTCENTRE || _la==TEXTCENTER) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(887);
			numExpr(0);
			setState(888);
			match(COMMA);
			setState(889);
			numExpr(0);
			setState(890);
			match(COMMA);
			setState(891);
			numExpr(0);
			setState(892);
			match(COMMA);
			setState(893);
			strExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtSHOWFPSContext extends ParserRuleContext {
		public TerminalNode SHOWFPS() { return getToken(DARICParser.SHOWFPS, 0); }
		public StmtSHOWFPSContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtSHOWFPS; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtSHOWFPS(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtSHOWFPSContext stmtSHOWFPS() throws RecognitionException {
		StmtSHOWFPSContext _localctx = new StmtSHOWFPSContext(_ctx, getState());
		enterRule(_localctx, 138, RULE_stmtSHOWFPS);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(895);
			match(SHOWFPS);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtRENDERTOSPRITEContext extends ParserRuleContext {
		public TerminalNode DRAWTOSPRITE() { return getToken(DARICParser.DRAWTOSPRITE, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StmtRENDERTOSPRITEContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtRENDERTOSPRITE; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtRENDERTOSPRITE(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtRENDERTOSPRITEContext stmtRENDERTOSPRITE() throws RecognitionException {
		StmtRENDERTOSPRITEContext _localctx = new StmtRENDERTOSPRITEContext(_ctx, getState());
		enterRule(_localctx, 140, RULE_stmtRENDERTOSPRITE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(897);
			match(DRAWTOSPRITE);
			setState(898);
			numExpr(0);
			setState(899);
			match(COMMA);
			setState(900);
			numExpr(0);
			setState(901);
			match(COMMA);
			setState(902);
			numExpr(0);
			setState(903);
			match(COMMA);
			setState(904);
			numExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtRENDERTOSCREENContext extends ParserRuleContext {
		public TerminalNode DRAWTOSCREEN() { return getToken(DARICParser.DRAWTOSCREEN, 0); }
		public StmtRENDERTOSCREENContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtRENDERTOSCREEN; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtRENDERTOSCREEN(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtRENDERTOSCREENContext stmtRENDERTOSCREEN() throws RecognitionException {
		StmtRENDERTOSCREENContext _localctx = new StmtRENDERTOSCREENContext(_ctx, getState());
		enterRule(_localctx, 142, RULE_stmtRENDERTOSCREEN);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(906);
			match(DRAWTOSCREEN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtDRAWSPRITEContext extends ParserRuleContext {
		public TerminalNode DRAWSPRITE() { return getToken(DARICParser.DRAWSPRITE, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StmtDRAWSPRITEContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtDRAWSPRITE; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtDRAWSPRITE(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtDRAWSPRITEContext stmtDRAWSPRITE() throws RecognitionException {
		StmtDRAWSPRITEContext _localctx = new StmtDRAWSPRITEContext(_ctx, getState());
		enterRule(_localctx, 144, RULE_stmtDRAWSPRITE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(908);
			match(DRAWSPRITE);
			setState(909);
			numExpr(0);
			setState(910);
			match(COMMA);
			setState(911);
			numExpr(0);
			setState(912);
			match(COMMA);
			setState(913);
			numExpr(0);
			setState(914);
			match(COMMA);
			setState(915);
			numExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtDELETESPRITEContext extends ParserRuleContext {
		public TerminalNode DELETESPRITE() { return getToken(DARICParser.DELETESPRITE, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public StmtDELETESPRITEContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtDELETESPRITE; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtDELETESPRITE(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtDELETESPRITEContext stmtDELETESPRITE() throws RecognitionException {
		StmtDELETESPRITEContext _localctx = new StmtDELETESPRITEContext(_ctx, getState());
		enterRule(_localctx, 146, RULE_stmtDELETESPRITE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(917);
			match(DELETESPRITE);
			setState(918);
			numExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtRENDERFRAMEContext extends ParserRuleContext {
		public TerminalNode RENDERFRAME() { return getToken(DARICParser.RENDERFRAME, 0); }
		public StmtRENDERFRAMEContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtRENDERFRAME; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtRENDERFRAME(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtRENDERFRAMEContext stmtRENDERFRAME() throws RecognitionException {
		StmtRENDERFRAMEContext _localctx = new StmtRENDERFRAMEContext(_ctx, getState());
		enterRule(_localctx, 148, RULE_stmtRENDERFRAME);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(920);
			match(RENDERFRAME);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtCREATEVERTEXContext extends ParserRuleContext {
		public TerminalNode CREATEVERTEX() { return getToken(DARICParser.CREATEVERTEX, 0); }
		public VarNameTypeContext varNameType() {
			return getRuleContext(VarNameTypeContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StmtCREATEVERTEXContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtCREATEVERTEX; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCREATEVERTEX(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtCREATEVERTEXContext stmtCREATEVERTEX() throws RecognitionException {
		StmtCREATEVERTEXContext _localctx = new StmtCREATEVERTEXContext(_ctx, getState());
		enterRule(_localctx, 150, RULE_stmtCREATEVERTEX);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(922);
			match(CREATEVERTEX);
			setState(923);
			varNameType();
			setState(924);
			match(LPAREN);
			setState(925);
			numExpr(0);
			setState(926);
			match(RPAREN);
			setState(927);
			match(COMMA);
			setState(928);
			numExpr(0);
			setState(929);
			match(COMMA);
			setState(930);
			numExpr(0);
			setState(931);
			match(COMMA);
			setState(932);
			numExpr(0);
			setState(933);
			match(COMMA);
			setState(934);
			numExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtCREATETRIANGLEContext extends ParserRuleContext {
		public TerminalNode CREATETRIANGLE() { return getToken(DARICParser.CREATETRIANGLE, 0); }
		public VarNameTypeContext varNameType() {
			return getRuleContext(VarNameTypeContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StmtCREATETRIANGLEContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtCREATETRIANGLE; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCREATETRIANGLE(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtCREATETRIANGLEContext stmtCREATETRIANGLE() throws RecognitionException {
		StmtCREATETRIANGLEContext _localctx = new StmtCREATETRIANGLEContext(_ctx, getState());
		enterRule(_localctx, 152, RULE_stmtCREATETRIANGLE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(936);
			match(CREATETRIANGLE);
			setState(937);
			varNameType();
			setState(938);
			match(LPAREN);
			setState(939);
			numExpr(0);
			setState(940);
			match(RPAREN);
			setState(941);
			match(COMMA);
			setState(942);
			numExpr(0);
			setState(943);
			match(COMMA);
			setState(944);
			numExpr(0);
			setState(945);
			match(COMMA);
			setState(946);
			numExpr(0);
			setState(947);
			match(COMMA);
			setState(948);
			numExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtTRANSLATEContext extends ParserRuleContext {
		public TerminalNode TRANSLATE() { return getToken(DARICParser.TRANSLATE, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StmtTRANSLATEContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtTRANSLATE; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtTRANSLATE(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtTRANSLATEContext stmtTRANSLATE() throws RecognitionException {
		StmtTRANSLATEContext _localctx = new StmtTRANSLATEContext(_ctx, getState());
		enterRule(_localctx, 154, RULE_stmtTRANSLATE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(950);
			match(TRANSLATE);
			setState(951);
			numExpr(0);
			setState(952);
			match(COMMA);
			setState(953);
			numExpr(0);
			setState(954);
			match(COMMA);
			setState(955);
			numExpr(0);
			setState(956);
			match(COMMA);
			setState(957);
			numExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtROTATEContext extends ParserRuleContext {
		public TerminalNode ROTATE() { return getToken(DARICParser.ROTATE, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StmtROTATEContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtROTATE; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtROTATE(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtROTATEContext stmtROTATE() throws RecognitionException {
		StmtROTATEContext _localctx = new StmtROTATEContext(_ctx, getState());
		enterRule(_localctx, 156, RULE_stmtROTATE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(959);
			match(ROTATE);
			setState(960);
			numExpr(0);
			setState(961);
			match(COMMA);
			setState(962);
			numExpr(0);
			setState(963);
			match(COMMA);
			setState(964);
			numExpr(0);
			setState(965);
			match(COMMA);
			setState(966);
			numExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtSCALEContext extends ParserRuleContext {
		public TerminalNode SCALE() { return getToken(DARICParser.SCALE, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public StmtSCALEContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtSCALE; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtSCALE(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtSCALEContext stmtSCALE() throws RecognitionException {
		StmtSCALEContext _localctx = new StmtSCALEContext(_ctx, getState());
		enterRule(_localctx, 158, RULE_stmtSCALE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(968);
			match(SCALE);
			setState(969);
			numExpr(0);
			setState(970);
			match(COMMA);
			setState(971);
			numExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StmtDELETEOBJECTContext extends ParserRuleContext {
		public TerminalNode DELETEOBJECT() { return getToken(DARICParser.DELETEOBJECT, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public StmtDELETEOBJECTContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtDELETEOBJECT; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtDELETEOBJECT(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtDELETEOBJECTContext stmtDELETEOBJECT() throws RecognitionException {
		StmtDELETEOBJECTContext _localctx = new StmtDELETEOBJECTContext(_ctx, getState());
		enterRule(_localctx, 160, RULE_stmtDELETEOBJECT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(973);
			match(DELETEOBJECT);
			setState(974);
			numExpr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WhenContext extends ParserRuleContext {
		public TerminalNode WHEN() { return getToken(DARICParser.WHEN, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode COLON() { return getToken(DARICParser.COLON, 0); }
		public BodyContext body() {
			return getRuleContext(BodyContext.class,0);
		}
		public LinenumberContext linenumber() {
			return getRuleContext(LinenumberContext.class,0);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public WhenContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_when; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitWhen(this);
			else return visitor.visitChildren(this);
		}
	}

	public final WhenContext when() throws RecognitionException {
		WhenContext _localctx = new WhenContext(_ctx, getState());
		enterRule(_localctx, 162, RULE_when);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(977);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(976);
				linenumber();
				}
			}

			setState(979);
			match(WHEN);
			setState(980);
			expr();
			setState(985);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(981);
				match(COMMA);
				setState(982);
				expr();
				}
				}
				setState(987);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(988);
			match(COLON);
			setState(989);
			body();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FnNameContext extends ParserRuleContext {
		public TerminalNode FN_FLOAT() { return getToken(DARICParser.FN_FLOAT, 0); }
		public TerminalNode FN_INTEGER() { return getToken(DARICParser.FN_INTEGER, 0); }
		public TerminalNode FN_STRING() { return getToken(DARICParser.FN_STRING, 0); }
		public FnNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fnName; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitFnName(this);
			else return visitor.visitChildren(this);
		}
	}

	public final FnNameContext fnName() throws RecognitionException {
		FnNameContext _localctx = new FnNameContext(_ctx, getState());
		enterRule(_localctx, 164, RULE_fnName);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(991);
			_la = _input.LA(1);
			if ( !(((((_la - 220)) & ~0x3f) == 0 && ((1L << (_la - 220)) & ((1L << (FN_INTEGER - 220)) | (1L << (FN_FLOAT - 220)) | (1L << (FN_STRING - 220)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LiteralContext extends ParserRuleContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public StringContext string() {
			return getRuleContext(StringContext.class,0);
		}
		public LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literal; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitLiteral(this);
			else return visitor.visitChildren(this);
		}
	}

	public final LiteralContext literal() throws RecognitionException {
		LiteralContext _localctx = new LiteralContext(_ctx, getState());
		enterRule(_localctx, 166, RULE_literal);
		try {
			setState(995);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case RED:
			case GREEN:
			case YELLOW:
			case BLUE:
			case MAGENTA:
			case CYAN:
			case WHITE:
			case BLACK:
			case MONO15:
			case MONO20:
			case MONO25:
			case MONO30:
			case MONO35:
			case MONO40:
			case MONO50:
			case MONO75:
			case MONO100:
			case PROP15:
			case PROP20:
			case PROP25:
			case PROP30:
			case PROP35:
			case PROP40:
			case PROP50:
			case PROP75:
			case PROP100:
			case SERIF15:
			case SERIF20:
			case SERIF25:
			case SERIF30:
			case SERIF35:
			case SERIF40:
			case SERIF50:
			case SERIF75:
			case SERIF100:
			case PLUS:
			case MINUS:
			case HEXNUMBER:
			case BINARYNUMBER:
			case NUMBER:
			case FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(993);
				number();
				}
				break;
			case STRINGLITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(994);
				string();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VarContext extends ParserRuleContext {
		public NumVarContext numVar() {
			return getRuleContext(NumVarContext.class,0);
		}
		public StrVarContext strVar() {
			return getRuleContext(StrVarContext.class,0);
		}
		public TypeVarContext typeVar() {
			return getRuleContext(TypeVarContext.class,0);
		}
		public VarContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_var; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitVar(this);
			else return visitor.visitChildren(this);
		}
	}

	public final VarContext var() throws RecognitionException {
		VarContext _localctx = new VarContext(_ctx, getState());
		enterRule(_localctx, 168, RULE_var);
		try {
			setState(1000);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,63,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(997);
				numVar();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(998);
				strVar();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(999);
				typeVar();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeVarContext extends ParserRuleContext {
		public TypeVarContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeVar; }
	 
		public TypeVarContext() { }
		public void copyFrom(TypeVarContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class TypeVarTypeContext extends TypeVarContext {
		public VarNameTypeContext varNameType() {
			return getRuleContext(VarNameTypeContext.class,0);
		}
		public TypeVarTypeContext(TypeVarContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitTypeVarType(this);
			else return visitor.visitChildren(this);
		}
	}

	public final TypeVarContext typeVar() throws RecognitionException {
		TypeVarContext _localctx = new TypeVarContext(_ctx, getState());
		enterRule(_localctx, 170, RULE_typeVar);
		try {
			_localctx = new TypeVarTypeContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(1002);
			varNameType();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NumVarContext extends ParserRuleContext {
		public NumVarContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_numVar; }
	 
		public NumVarContext() { }
		public void copyFrom(NumVarContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class NumVarFloatFieldContext extends NumVarContext {
		public TypeVarContext typeVar() {
			return getRuleContext(TypeVarContext.class,0);
		}
		public VarNameContext varName() {
			return getRuleContext(VarNameContext.class,0);
		}
		public NumVarFloatFieldContext(NumVarContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumVarFloatField(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumVarIntegerFNContext extends NumVarContext {
		public TerminalNode FN_INTEGER() { return getToken(DARICParser.FN_INTEGER, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public FunctionParListContext functionParList() {
			return getRuleContext(FunctionParListContext.class,0);
		}
		public NumVarIntegerFNContext(NumVarContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumVarIntegerFN(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumVarIntegerFieldArrayContext extends NumVarContext {
		public TypeVarContext typeVar() {
			return getRuleContext(TypeVarContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public VarNameIntegerContext varNameInteger() {
			return getRuleContext(VarNameIntegerContext.class,0);
		}
		public NumVarIntegerFieldArrayContext(NumVarContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumVarIntegerFieldArray(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumVarFloatArrayContext extends NumVarContext {
		public VarNameContext varName() {
			return getRuleContext(VarNameContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public NumVarFloatArrayContext(NumVarContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumVarFloatArray(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumVarFloatFNContext extends NumVarContext {
		public TerminalNode FN_FLOAT() { return getToken(DARICParser.FN_FLOAT, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public FunctionParListContext functionParList() {
			return getRuleContext(FunctionParListContext.class,0);
		}
		public NumVarFloatFNContext(NumVarContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumVarFloatFN(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumVarFloatContext extends NumVarContext {
		public VarNameContext varName() {
			return getRuleContext(VarNameContext.class,0);
		}
		public NumVarFloatContext(NumVarContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumVarFloat(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumVarIntegerArrayContext extends NumVarContext {
		public VarNameIntegerContext varNameInteger() {
			return getRuleContext(VarNameIntegerContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public NumVarIntegerArrayContext(NumVarContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumVarIntegerArray(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumVarFloatFieldArrayContext extends NumVarContext {
		public TypeVarContext typeVar() {
			return getRuleContext(TypeVarContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public VarNameContext varName() {
			return getRuleContext(VarNameContext.class,0);
		}
		public NumVarFloatFieldArrayContext(NumVarContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumVarFloatFieldArray(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumVarIntegerContext extends NumVarContext {
		public VarNameIntegerContext varNameInteger() {
			return getRuleContext(VarNameIntegerContext.class,0);
		}
		public NumVarIntegerContext(NumVarContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumVarInteger(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumVarIntegerFieldContext extends NumVarContext {
		public TypeVarContext typeVar() {
			return getRuleContext(TypeVarContext.class,0);
		}
		public VarNameIntegerContext varNameInteger() {
			return getRuleContext(VarNameIntegerContext.class,0);
		}
		public NumVarIntegerFieldContext(NumVarContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumVarIntegerField(this);
			else return visitor.visitChildren(this);
		}
	}

	public final NumVarContext numVar() throws RecognitionException {
		NumVarContext _localctx = new NumVarContext(_ctx, getState());
		enterRule(_localctx, 172, RULE_numVar);
		int _la;
		try {
			setState(1054);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,68,_ctx) ) {
			case 1:
				_localctx = new NumVarFloatArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1004);
				varName();
				setState(1005);
				match(LPAREN);
				setState(1006);
				numExpr(0);
				setState(1009);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(1007);
					match(COMMA);
					setState(1008);
					numExpr(0);
					}
				}

				setState(1011);
				match(RPAREN);
				}
				break;
			case 2:
				_localctx = new NumVarIntegerArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1013);
				varNameInteger();
				setState(1014);
				match(LPAREN);
				setState(1015);
				numExpr(0);
				setState(1018);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(1016);
					match(COMMA);
					setState(1017);
					numExpr(0);
					}
				}

				setState(1020);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new NumVarIntegerFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1022);
				typeVar();
				setState(1023);
				match(LPAREN);
				setState(1024);
				numExpr(0);
				setState(1025);
				match(RPAREN);
				setState(1026);
				varNameInteger();
				}
				break;
			case 4:
				_localctx = new NumVarFloatFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1028);
				typeVar();
				setState(1029);
				match(LPAREN);
				setState(1030);
				numExpr(0);
				setState(1031);
				match(RPAREN);
				setState(1032);
				varName();
				}
				break;
			case 5:
				_localctx = new NumVarFloatFNContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1034);
				match(FN_FLOAT);
				setState(1035);
				match(LPAREN);
				setState(1037);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (MAGENTA - 64)) | (1L << (CYAN - 64)) | (1L << (WHITE - 64)) | (1L << (BLACK - 64)) | (1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (GETSH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)))) != 0) || ((((_la - 133)) & ~0x3f) == 0 && ((1L << (_la - 133)) & ((1L << (LOADTYPEFACE - 133)) | (1L << (POINT - 133)) | (1L << (SCREENWIDTH - 133)) | (1L << (SCREENHEIGHT - 133)) | (1L << (LOADSPRITE - 133)) | (1L << (CREATESPRITE - 133)) | (1L << (TIME - 133)) | (1L << (PI - 133)) | (1L << (SQR - 133)) | (1L << (LN - 133)) | (1L << (LOG - 133)) | (1L << (EXP - 133)) | (1L << (ATN - 133)) | (1L << (TAN - 133)) | (1L << (COS - 133)) | (1L << (SIN - 133)) | (1L << (ABS - 133)) | (1L << (ACS - 133)) | (1L << (ASN - 133)) | (1L << (DEG - 133)) | (1L << (RAD - 133)) | (1L << (SGN - 133)) | (1L << (ASC - 133)) | (1L << (LEN - 133)) | (1L << (INSTR - 133)) | (1L << (VAL - 133)) | (1L << (TIMES - 133)) | (1L << (STRS - 133)) | (1L << (STRINGS - 133)) | (1L << (CHRS - 133)) | (1L << (LEFTS - 133)) | (1L << (MIDS - 133)) | (1L << (RIGHTS - 133)) | (1L << (RND - 133)) | (1L << (RND0 - 133)) | (1L << (RND1 - 133)) | (1L << (NOT - 133)) | (1L << (PLUS - 133)) | (1L << (MINUS - 133)))) != 0) || ((((_la - 212)) & ~0x3f) == 0 && ((1L << (_la - 212)) & ((1L << (LPAREN - 212)) | (1L << (STRINGLITERAL - 212)) | (1L << (FN_INTEGER - 212)) | (1L << (FN_FLOAT - 212)) | (1L << (FN_STRING - 212)) | (1L << (VARIABLE_FLOAT - 212)) | (1L << (VARIABLE_INTEGER - 212)) | (1L << (VARIABLE_STRING - 212)) | (1L << (VARIABLE_TYPE - 212)) | (1L << (HEXNUMBER - 212)) | (1L << (BINARYNUMBER - 212)) | (1L << (NUMBER - 212)) | (1L << (FLOAT - 212)))) != 0)) {
					{
					setState(1036);
					functionParList();
					}
				}

				setState(1039);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new NumVarIntegerFNContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1040);
				match(FN_INTEGER);
				setState(1041);
				match(LPAREN);
				setState(1043);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (MAGENTA - 64)) | (1L << (CYAN - 64)) | (1L << (WHITE - 64)) | (1L << (BLACK - 64)) | (1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (GETSH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)))) != 0) || ((((_la - 133)) & ~0x3f) == 0 && ((1L << (_la - 133)) & ((1L << (LOADTYPEFACE - 133)) | (1L << (POINT - 133)) | (1L << (SCREENWIDTH - 133)) | (1L << (SCREENHEIGHT - 133)) | (1L << (LOADSPRITE - 133)) | (1L << (CREATESPRITE - 133)) | (1L << (TIME - 133)) | (1L << (PI - 133)) | (1L << (SQR - 133)) | (1L << (LN - 133)) | (1L << (LOG - 133)) | (1L << (EXP - 133)) | (1L << (ATN - 133)) | (1L << (TAN - 133)) | (1L << (COS - 133)) | (1L << (SIN - 133)) | (1L << (ABS - 133)) | (1L << (ACS - 133)) | (1L << (ASN - 133)) | (1L << (DEG - 133)) | (1L << (RAD - 133)) | (1L << (SGN - 133)) | (1L << (ASC - 133)) | (1L << (LEN - 133)) | (1L << (INSTR - 133)) | (1L << (VAL - 133)) | (1L << (TIMES - 133)) | (1L << (STRS - 133)) | (1L << (STRINGS - 133)) | (1L << (CHRS - 133)) | (1L << (LEFTS - 133)) | (1L << (MIDS - 133)) | (1L << (RIGHTS - 133)) | (1L << (RND - 133)) | (1L << (RND0 - 133)) | (1L << (RND1 - 133)) | (1L << (NOT - 133)) | (1L << (PLUS - 133)) | (1L << (MINUS - 133)))) != 0) || ((((_la - 212)) & ~0x3f) == 0 && ((1L << (_la - 212)) & ((1L << (LPAREN - 212)) | (1L << (STRINGLITERAL - 212)) | (1L << (FN_INTEGER - 212)) | (1L << (FN_FLOAT - 212)) | (1L << (FN_STRING - 212)) | (1L << (VARIABLE_FLOAT - 212)) | (1L << (VARIABLE_INTEGER - 212)) | (1L << (VARIABLE_STRING - 212)) | (1L << (VARIABLE_TYPE - 212)) | (1L << (HEXNUMBER - 212)) | (1L << (BINARYNUMBER - 212)) | (1L << (NUMBER - 212)) | (1L << (FLOAT - 212)))) != 0)) {
					{
					setState(1042);
					functionParList();
					}
				}

				setState(1045);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new NumVarFloatContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1046);
				varName();
				}
				break;
			case 8:
				_localctx = new NumVarIntegerContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1047);
				varNameInteger();
				}
				break;
			case 9:
				_localctx = new NumVarFloatFieldContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(1048);
				typeVar();
				setState(1049);
				varName();
				}
				break;
			case 10:
				_localctx = new NumVarIntegerFieldContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(1051);
				typeVar();
				setState(1052);
				varNameInteger();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StrVarContext extends ParserRuleContext {
		public StrVarContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_strVar; }
	 
		public StrVarContext() { }
		public void copyFrom(StrVarContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class NumVarStringFNContext extends StrVarContext {
		public TerminalNode FN_STRING() { return getToken(DARICParser.FN_STRING, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public FunctionParListContext functionParList() {
			return getRuleContext(FunctionParListContext.class,0);
		}
		public NumVarStringFNContext(StrVarContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumVarStringFN(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumVarStringArrayContext extends StrVarContext {
		public VarNameStringContext varNameString() {
			return getRuleContext(VarNameStringContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public NumVarStringArrayContext(StrVarContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumVarStringArray(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumVarStringFieldArrayContext extends StrVarContext {
		public TypeVarContext typeVar() {
			return getRuleContext(TypeVarContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public VarNameStringContext varNameString() {
			return getRuleContext(VarNameStringContext.class,0);
		}
		public NumVarStringFieldArrayContext(StrVarContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumVarStringFieldArray(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumVarStringContext extends StrVarContext {
		public VarNameStringContext varNameString() {
			return getRuleContext(VarNameStringContext.class,0);
		}
		public NumVarStringContext(StrVarContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumVarString(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumVarStringFieldContext extends StrVarContext {
		public TypeVarContext typeVar() {
			return getRuleContext(TypeVarContext.class,0);
		}
		public VarNameStringContext varNameString() {
			return getRuleContext(VarNameStringContext.class,0);
		}
		public NumVarStringFieldContext(StrVarContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumVarStringField(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StrVarContext strVar() throws RecognitionException {
		StrVarContext _localctx = new StrVarContext(_ctx, getState());
		enterRule(_localctx, 174, RULE_strVar);
		int _la;
		try {
			setState(1081);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,71,_ctx) ) {
			case 1:
				_localctx = new NumVarStringArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1056);
				varNameString();
				setState(1057);
				match(LPAREN);
				setState(1058);
				numExpr(0);
				setState(1061);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(1059);
					match(COMMA);
					setState(1060);
					numExpr(0);
					}
				}

				setState(1063);
				match(RPAREN);
				}
				break;
			case 2:
				_localctx = new NumVarStringFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1065);
				typeVar();
				setState(1066);
				match(LPAREN);
				setState(1067);
				numExpr(0);
				setState(1068);
				match(RPAREN);
				setState(1069);
				varNameString();
				}
				break;
			case 3:
				_localctx = new NumVarStringContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1071);
				varNameString();
				}
				break;
			case 4:
				_localctx = new NumVarStringFieldContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1072);
				typeVar();
				setState(1073);
				varNameString();
				}
				break;
			case 5:
				_localctx = new NumVarStringFNContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1075);
				match(FN_STRING);
				setState(1076);
				match(LPAREN);
				setState(1078);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (MAGENTA - 64)) | (1L << (CYAN - 64)) | (1L << (WHITE - 64)) | (1L << (BLACK - 64)) | (1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (GETSH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)))) != 0) || ((((_la - 133)) & ~0x3f) == 0 && ((1L << (_la - 133)) & ((1L << (LOADTYPEFACE - 133)) | (1L << (POINT - 133)) | (1L << (SCREENWIDTH - 133)) | (1L << (SCREENHEIGHT - 133)) | (1L << (LOADSPRITE - 133)) | (1L << (CREATESPRITE - 133)) | (1L << (TIME - 133)) | (1L << (PI - 133)) | (1L << (SQR - 133)) | (1L << (LN - 133)) | (1L << (LOG - 133)) | (1L << (EXP - 133)) | (1L << (ATN - 133)) | (1L << (TAN - 133)) | (1L << (COS - 133)) | (1L << (SIN - 133)) | (1L << (ABS - 133)) | (1L << (ACS - 133)) | (1L << (ASN - 133)) | (1L << (DEG - 133)) | (1L << (RAD - 133)) | (1L << (SGN - 133)) | (1L << (ASC - 133)) | (1L << (LEN - 133)) | (1L << (INSTR - 133)) | (1L << (VAL - 133)) | (1L << (TIMES - 133)) | (1L << (STRS - 133)) | (1L << (STRINGS - 133)) | (1L << (CHRS - 133)) | (1L << (LEFTS - 133)) | (1L << (MIDS - 133)) | (1L << (RIGHTS - 133)) | (1L << (RND - 133)) | (1L << (RND0 - 133)) | (1L << (RND1 - 133)) | (1L << (NOT - 133)) | (1L << (PLUS - 133)) | (1L << (MINUS - 133)))) != 0) || ((((_la - 212)) & ~0x3f) == 0 && ((1L << (_la - 212)) & ((1L << (LPAREN - 212)) | (1L << (STRINGLITERAL - 212)) | (1L << (FN_INTEGER - 212)) | (1L << (FN_FLOAT - 212)) | (1L << (FN_STRING - 212)) | (1L << (VARIABLE_FLOAT - 212)) | (1L << (VARIABLE_INTEGER - 212)) | (1L << (VARIABLE_STRING - 212)) | (1L << (VARIABLE_TYPE - 212)) | (1L << (HEXNUMBER - 212)) | (1L << (BINARYNUMBER - 212)) | (1L << (NUMBER - 212)) | (1L << (FLOAT - 212)))) != 0)) {
					{
					setState(1077);
					functionParList();
					}
				}

				setState(1080);
				match(RPAREN);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class JustVarContext extends ParserRuleContext {
		public VarNameContext varName() {
			return getRuleContext(VarNameContext.class,0);
		}
		public VarNameIntegerContext varNameInteger() {
			return getRuleContext(VarNameIntegerContext.class,0);
		}
		public VarNameStringContext varNameString() {
			return getRuleContext(VarNameStringContext.class,0);
		}
		public JustVarContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_justVar; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitJustVar(this);
			else return visitor.visitChildren(this);
		}
	}

	public final JustVarContext justVar() throws RecognitionException {
		JustVarContext _localctx = new JustVarContext(_ctx, getState());
		enterRule(_localctx, 176, RULE_justVar);
		try {
			setState(1086);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(1083);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(1084);
				varNameInteger();
				}
				break;
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(1085);
				varNameString();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class JustNumberVarContext extends ParserRuleContext {
		public VarNameContext varName() {
			return getRuleContext(VarNameContext.class,0);
		}
		public VarNameIntegerContext varNameInteger() {
			return getRuleContext(VarNameIntegerContext.class,0);
		}
		public JustNumberVarContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_justNumberVar; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitJustNumberVar(this);
			else return visitor.visitChildren(this);
		}
	}

	public final JustNumberVarContext justNumberVar() throws RecognitionException {
		JustNumberVarContext _localctx = new JustNumberVarContext(_ctx, getState());
		enterRule(_localctx, 178, RULE_justNumberVar);
		try {
			setState(1090);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(1088);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(1089);
				varNameInteger();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VarNameContext extends ParserRuleContext {
		public TerminalNode VARIABLE_FLOAT() { return getToken(DARICParser.VARIABLE_FLOAT, 0); }
		public VarNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_varName; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitVarName(this);
			else return visitor.visitChildren(this);
		}
	}

	public final VarNameContext varName() throws RecognitionException {
		VarNameContext _localctx = new VarNameContext(_ctx, getState());
		enterRule(_localctx, 180, RULE_varName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1092);
			match(VARIABLE_FLOAT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VarNameIntegerContext extends ParserRuleContext {
		public TerminalNode VARIABLE_INTEGER() { return getToken(DARICParser.VARIABLE_INTEGER, 0); }
		public VarNameIntegerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_varNameInteger; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitVarNameInteger(this);
			else return visitor.visitChildren(this);
		}
	}

	public final VarNameIntegerContext varNameInteger() throws RecognitionException {
		VarNameIntegerContext _localctx = new VarNameIntegerContext(_ctx, getState());
		enterRule(_localctx, 182, RULE_varNameInteger);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1094);
			match(VARIABLE_INTEGER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VarNameStringContext extends ParserRuleContext {
		public TerminalNode VARIABLE_STRING() { return getToken(DARICParser.VARIABLE_STRING, 0); }
		public VarNameStringContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_varNameString; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitVarNameString(this);
			else return visitor.visitChildren(this);
		}
	}

	public final VarNameStringContext varNameString() throws RecognitionException {
		VarNameStringContext _localctx = new VarNameStringContext(_ctx, getState());
		enterRule(_localctx, 184, RULE_varNameString);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1096);
			match(VARIABLE_STRING);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VarNameTypeContext extends ParserRuleContext {
		public TerminalNode VARIABLE_TYPE() { return getToken(DARICParser.VARIABLE_TYPE, 0); }
		public VarNameTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_varNameType; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitVarNameType(this);
			else return visitor.visitChildren(this);
		}
	}

	public final VarNameTypeContext varNameType() throws RecognitionException {
		VarNameTypeContext _localctx = new VarNameTypeContext(_ctx, getState());
		enterRule(_localctx, 186, RULE_varNameType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1098);
			match(VARIABLE_TYPE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VarDeclContext extends ParserRuleContext {
		public VarDeclContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_varDecl; }
	 
		public VarDeclContext() { }
		public void copyFrom(VarDeclContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class VarDeclTypeVarContext extends VarDeclContext {
		public TypeVarContext typeVar() {
			return getRuleContext(TypeVarContext.class,0);
		}
		public VarNameContext varName() {
			return getRuleContext(VarNameContext.class,0);
		}
		public VarNameIntegerContext varNameInteger() {
			return getRuleContext(VarNameIntegerContext.class,0);
		}
		public VarDeclTypeVarContext(VarDeclContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitVarDeclTypeVar(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class VarDeclTypeVarArrayedContext extends VarDeclContext {
		public TypeVarContext typeVar() {
			return getRuleContext(TypeVarContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public VarNameContext varName() {
			return getRuleContext(VarNameContext.class,0);
		}
		public VarNameIntegerContext varNameInteger() {
			return getRuleContext(VarNameIntegerContext.class,0);
		}
		public VarDeclTypeVarArrayedContext(VarDeclContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitVarDeclTypeVarArrayed(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class VarDeclIndContext extends VarDeclContext {
		public JustVarContext justVar() {
			return getRuleContext(JustVarContext.class,0);
		}
		public VarDeclIndContext(VarDeclContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitVarDeclInd(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class VarDeclArrayedContext extends VarDeclContext {
		public JustVarContext justVar() {
			return getRuleContext(JustVarContext.class,0);
		}
		public List<TerminalNode> LPAREN() { return getTokens(DARICParser.LPAREN); }
		public TerminalNode LPAREN(int i) {
			return getToken(DARICParser.LPAREN, i);
		}
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public List<TerminalNode> RPAREN() { return getTokens(DARICParser.RPAREN); }
		public TerminalNode RPAREN(int i) {
			return getToken(DARICParser.RPAREN, i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public VarDeclArrayedContext(VarDeclContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitVarDeclArrayed(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class VarDeclTypeContext extends VarDeclContext {
		public TypeVarContext typeVar() {
			return getRuleContext(TypeVarContext.class,0);
		}
		public VarDeclTypeContext(VarDeclContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitVarDeclType(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class VarDeclTypeArrayedContext extends VarDeclContext {
		public TypeVarContext typeVar() {
			return getRuleContext(TypeVarContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public VarDeclTypeArrayedContext(VarDeclContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitVarDeclTypeArrayed(this);
			else return visitor.visitChildren(this);
		}
	}

	public final VarDeclContext varDecl() throws RecognitionException {
		VarDeclContext _localctx = new VarDeclContext(_ctx, getState());
		enterRule(_localctx, 188, RULE_varDecl);
		int _la;
		try {
			setState(1139);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,76,_ctx) ) {
			case 1:
				_localctx = new VarDeclIndContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1100);
				justVar();
				}
				break;
			case 2:
				_localctx = new VarDeclArrayedContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1101);
				justVar();
				setState(1112);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==LPAREN) {
					{
					{
					setState(1102);
					match(LPAREN);
					setState(1103);
					numExpr(0);
					setState(1106);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==COMMA) {
						{
						setState(1104);
						match(COMMA);
						setState(1105);
						numExpr(0);
						}
					}

					setState(1108);
					match(RPAREN);
					}
					}
					setState(1114);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 3:
				_localctx = new VarDeclTypeVarContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1115);
				typeVar();
				setState(1116);
				varName();
				}
				break;
			case 4:
				_localctx = new VarDeclTypeVarContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1118);
				typeVar();
				setState(1119);
				varNameInteger();
				}
				break;
			case 5:
				_localctx = new VarDeclTypeVarArrayedContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1121);
				typeVar();
				setState(1122);
				match(LPAREN);
				setState(1123);
				numExpr(0);
				setState(1124);
				match(RPAREN);
				setState(1125);
				varName();
				}
				break;
			case 6:
				_localctx = new VarDeclTypeVarArrayedContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1127);
				typeVar();
				setState(1128);
				match(LPAREN);
				setState(1129);
				numExpr(0);
				setState(1130);
				match(RPAREN);
				setState(1131);
				varNameInteger();
				}
				break;
			case 7:
				_localctx = new VarDeclTypeContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1133);
				typeVar();
				}
				break;
			case 8:
				_localctx = new VarDeclTypeArrayedContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1134);
				typeVar();
				setState(1135);
				match(LPAREN);
				setState(1136);
				numExpr(0);
				setState(1137);
				match(RPAREN);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VarDeclWithDimensionContext extends ParserRuleContext {
		public JustVarContext justVar() {
			return getRuleContext(JustVarContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public TypeVarContext typeVar() {
			return getRuleContext(TypeVarContext.class,0);
		}
		public VarNameContext varName() {
			return getRuleContext(VarNameContext.class,0);
		}
		public VarDeclWithDimensionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_varDeclWithDimension; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitVarDeclWithDimension(this);
			else return visitor.visitChildren(this);
		}
	}

	public final VarDeclWithDimensionContext varDeclWithDimension() throws RecognitionException {
		VarDeclWithDimensionContext _localctx = new VarDeclWithDimensionContext(_ctx, getState());
		enterRule(_localctx, 190, RULE_varDeclWithDimension);
		int _la;
		try {
			setState(1160);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
			case VARIABLE_INTEGER:
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 1);
				{
				setState(1141);
				justVar();
				setState(1142);
				match(LPAREN);
				setState(1143);
				numExpr(0);
				setState(1148);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(1144);
					match(COMMA);
					setState(1145);
					numExpr(0);
					}
					}
					setState(1150);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1151);
				match(RPAREN);
				}
				break;
			case VARIABLE_TYPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(1153);
				typeVar();
				setState(1154);
				match(LPAREN);
				setState(1155);
				numExpr(0);
				setState(1156);
				match(COMMA);
				setState(1157);
				varName();
				setState(1158);
				match(RPAREN);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VarListContext extends ParserRuleContext {
		public List<VarDeclContext> varDecl() {
			return getRuleContexts(VarDeclContext.class);
		}
		public VarDeclContext varDecl(int i) {
			return getRuleContext(VarDeclContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public VarListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_varList; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitVarList(this);
			else return visitor.visitChildren(this);
		}
	}

	public final VarListContext varList() throws RecognitionException {
		VarListContext _localctx = new VarListContext(_ctx, getState());
		enterRule(_localctx, 192, RULE_varList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1162);
			varDecl();
			setState(1167);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1163);
				match(COMMA);
				setState(1164);
				varDecl();
				}
				}
				setState(1169);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionVarContext extends ParserRuleContext {
		public JustVarContext justVar() {
			return getRuleContext(JustVarContext.class,0);
		}
		public TerminalNode RETURN() { return getToken(DARICParser.RETURN, 0); }
		public FunctionVarContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionVar; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitFunctionVar(this);
			else return visitor.visitChildren(this);
		}
	}

	public final FunctionVarContext functionVar() throws RecognitionException {
		FunctionVarContext _localctx = new FunctionVarContext(_ctx, getState());
		enterRule(_localctx, 194, RULE_functionVar);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1171);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN) {
				{
				setState(1170);
				match(RETURN);
				}
			}

			setState(1173);
			justVar();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionVarListContext extends ParserRuleContext {
		public List<FunctionVarContext> functionVar() {
			return getRuleContexts(FunctionVarContext.class);
		}
		public FunctionVarContext functionVar(int i) {
			return getRuleContext(FunctionVarContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public FunctionVarListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionVarList; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitFunctionVarList(this);
			else return visitor.visitChildren(this);
		}
	}

	public final FunctionVarListContext functionVarList() throws RecognitionException {
		FunctionVarListContext _localctx = new FunctionVarListContext(_ctx, getState());
		enterRule(_localctx, 196, RULE_functionVarList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1175);
			functionVar();
			setState(1180);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1176);
				match(COMMA);
				setState(1177);
				functionVar();
				}
				}
				setState(1182);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionParListContext extends ParserRuleContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public FunctionParListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionParList; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitFunctionParList(this);
			else return visitor.visitChildren(this);
		}
	}

	public final FunctionParListContext functionParList() throws RecognitionException {
		FunctionParListContext _localctx = new FunctionParListContext(_ctx, getState());
		enterRule(_localctx, 198, RULE_functionParList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1183);
			expr();
			setState(1188);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1184);
				match(COMMA);
				setState(1185);
				expr();
				}
				}
				setState(1190);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprListContext extends ParserRuleContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public ExprListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exprList; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitExprList(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ExprListContext exprList() throws RecognitionException {
		ExprListContext _localctx = new ExprListContext(_ctx, getState());
		enterRule(_localctx, 200, RULE_exprList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1191);
			expr();
			setState(1196);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1192);
				match(COMMA);
				setState(1193);
				expr();
				}
				}
				setState(1198);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PrintListItemContext extends ParserRuleContext {
		public PrintListItemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_printListItem; }
	 
		public PrintListItemContext() { }
		public void copyFrom(PrintListItemContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class PrintListExprContext extends PrintListItemContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode TILDE() { return getToken(DARICParser.TILDE, 0); }
		public PrintListExprContext(PrintListItemContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitPrintListExpr(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class PrintListSPCContext extends PrintListItemContext {
		public TerminalNode SPC() { return getToken(DARICParser.SPC, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public PrintListSPCContext(PrintListItemContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitPrintListSPC(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class PrintListSPCPContext extends PrintListItemContext {
		public TerminalNode SPC() { return getToken(DARICParser.SPC, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public PrintListSPCPContext(PrintListItemContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitPrintListSPCP(this);
			else return visitor.visitChildren(this);
		}
	}

	public final PrintListItemContext printListItem() throws RecognitionException {
		PrintListItemContext _localctx = new PrintListItemContext(_ctx, getState());
		enterRule(_localctx, 202, RULE_printListItem);
		int _la;
		try {
			setState(1210);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,85,_ctx) ) {
			case 1:
				_localctx = new PrintListExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1200);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TILDE) {
					{
					setState(1199);
					match(TILDE);
					}
				}

				setState(1202);
				expr();
				}
				break;
			case 2:
				_localctx = new PrintListSPCPContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1203);
				match(SPC);
				setState(1204);
				match(LPAREN);
				setState(1205);
				numExpr(0);
				setState(1206);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new PrintListSPCContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1208);
				match(SPC);
				setState(1209);
				numExpr(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PrintListTickContext extends ParserRuleContext {
		public List<TerminalNode> TICK() { return getTokens(DARICParser.TICK); }
		public TerminalNode TICK(int i) {
			return getToken(DARICParser.TICK, i);
		}
		public PrintListTickContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_printListTick; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitPrintListTick(this);
			else return visitor.visitChildren(this);
		}
	}

	public final PrintListTickContext printListTick() throws RecognitionException {
		PrintListTickContext _localctx = new PrintListTickContext(_ctx, getState());
		enterRule(_localctx, 204, RULE_printListTick);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1213); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(1212);
				match(TICK);
				}
				}
				setState(1215); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==TICK );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PrintListSeparatorContext extends ParserRuleContext {
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public TerminalNode SEMICOLON() { return getToken(DARICParser.SEMICOLON, 0); }
		public PrintListTickContext printListTick() {
			return getRuleContext(PrintListTickContext.class,0);
		}
		public PrintListSeparatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_printListSeparator; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitPrintListSeparator(this);
			else return visitor.visitChildren(this);
		}
	}

	public final PrintListSeparatorContext printListSeparator() throws RecognitionException {
		PrintListSeparatorContext _localctx = new PrintListSeparatorContext(_ctx, getState());
		enterRule(_localctx, 206, RULE_printListSeparator);
		try {
			setState(1220);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COMMA:
				enterOuterAlt(_localctx, 1);
				{
				setState(1217);
				match(COMMA);
				}
				break;
			case SEMICOLON:
				enterOuterAlt(_localctx, 2);
				{
				setState(1218);
				match(SEMICOLON);
				}
				break;
			case TICK:
				enterOuterAlt(_localctx, 3);
				{
				setState(1219);
				printListTick();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PrintListContext extends ParserRuleContext {
		public Token s1;
		public Token s2;
		public List<PrintListItemContext> printListItem() {
			return getRuleContexts(PrintListItemContext.class);
		}
		public PrintListItemContext printListItem(int i) {
			return getRuleContext(PrintListItemContext.class,i);
		}
		public PrintListTickContext printListTick() {
			return getRuleContext(PrintListTickContext.class,0);
		}
		public List<PrintListSeparatorContext> printListSeparator() {
			return getRuleContexts(PrintListSeparatorContext.class);
		}
		public PrintListSeparatorContext printListSeparator(int i) {
			return getRuleContext(PrintListSeparatorContext.class,i);
		}
		public List<TerminalNode> SEMICOLON() { return getTokens(DARICParser.SEMICOLON); }
		public TerminalNode SEMICOLON(int i) {
			return getToken(DARICParser.SEMICOLON, i);
		}
		public PrintListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_printList; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitPrintList(this);
			else return visitor.visitChildren(this);
		}
	}

	public final PrintListContext printList() throws RecognitionException {
		PrintListContext _localctx = new PrintListContext(_ctx, getState());
		enterRule(_localctx, 208, RULE_printList);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1223);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TICK) {
				{
				setState(1222);
				printListTick();
				}
			}

			setState(1226);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(1225);
				((PrintListContext)_localctx).s1 = match(SEMICOLON);
				}
			}

			setState(1228);
			printListItem();
			setState(1234);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,90,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1229);
					printListSeparator();
					setState(1230);
					printListItem();
					}
					} 
				}
				setState(1236);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,90,_ctx);
			}
			setState(1238);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(1237);
				((PrintListContext)_localctx).s2 = match(SEMICOLON);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ExprContext expr() throws RecognitionException {
		ExprContext _localctx = new ExprContext(_ctx, getState());
		enterRule(_localctx, 210, RULE_expr);
		try {
			setState(1242);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,92,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1240);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1241);
				strExpr(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NumberContext extends ParserRuleContext {
		public NumberIntegerContext numberInteger() {
			return getRuleContext(NumberIntegerContext.class,0);
		}
		public NumberFloatContext numberFloat() {
			return getRuleContext(NumberFloatContext.class,0);
		}
		public NumberHexContext numberHex() {
			return getRuleContext(NumberHexContext.class,0);
		}
		public NumberBinaryContext numberBinary() {
			return getRuleContext(NumberBinaryContext.class,0);
		}
		public NumColoursContext numColours() {
			return getRuleContext(NumColoursContext.class,0);
		}
		public DefaultFontsContext defaultFonts() {
			return getRuleContext(DefaultFontsContext.class,0);
		}
		public NumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_number; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumber(this);
			else return visitor.visitChildren(this);
		}
	}

	public final NumberContext number() throws RecognitionException {
		NumberContext _localctx = new NumberContext(_ctx, getState());
		enterRule(_localctx, 212, RULE_number);
		try {
			setState(1250);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,93,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1244);
				numberInteger();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1245);
				numberFloat();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1246);
				numberHex();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1247);
				numberBinary();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1248);
				numColours();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1249);
				defaultFonts();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NumberIntegerContext extends ParserRuleContext {
		public TerminalNode NUMBER() { return getToken(DARICParser.NUMBER, 0); }
		public TerminalNode PLUS() { return getToken(DARICParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(DARICParser.MINUS, 0); }
		public NumberIntegerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_numberInteger; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumberInteger(this);
			else return visitor.visitChildren(this);
		}
	}

	public final NumberIntegerContext numberInteger() throws RecognitionException {
		NumberIntegerContext _localctx = new NumberIntegerContext(_ctx, getState());
		enterRule(_localctx, 214, RULE_numberInteger);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1253);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(1252);
				_la = _input.LA(1);
				if ( !(_la==PLUS || _la==MINUS) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			setState(1255);
			match(NUMBER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NumberHexContext extends ParserRuleContext {
		public TerminalNode HEXNUMBER() { return getToken(DARICParser.HEXNUMBER, 0); }
		public NumberHexContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_numberHex; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumberHex(this);
			else return visitor.visitChildren(this);
		}
	}

	public final NumberHexContext numberHex() throws RecognitionException {
		NumberHexContext _localctx = new NumberHexContext(_ctx, getState());
		enterRule(_localctx, 216, RULE_numberHex);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1257);
			match(HEXNUMBER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NumberBinaryContext extends ParserRuleContext {
		public TerminalNode BINARYNUMBER() { return getToken(DARICParser.BINARYNUMBER, 0); }
		public NumberBinaryContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_numberBinary; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumberBinary(this);
			else return visitor.visitChildren(this);
		}
	}

	public final NumberBinaryContext numberBinary() throws RecognitionException {
		NumberBinaryContext _localctx = new NumberBinaryContext(_ctx, getState());
		enterRule(_localctx, 218, RULE_numberBinary);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1259);
			match(BINARYNUMBER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NumberFloatContext extends ParserRuleContext {
		public TerminalNode FLOAT() { return getToken(DARICParser.FLOAT, 0); }
		public TerminalNode PLUS() { return getToken(DARICParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(DARICParser.MINUS, 0); }
		public NumberFloatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_numberFloat; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumberFloat(this);
			else return visitor.visitChildren(this);
		}
	}

	public final NumberFloatContext numberFloat() throws RecognitionException {
		NumberFloatContext _localctx = new NumberFloatContext(_ctx, getState());
		enterRule(_localctx, 220, RULE_numberFloat);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1262);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(1261);
				_la = _input.LA(1);
				if ( !(_la==PLUS || _la==MINUS) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			setState(1264);
			match(FLOAT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StrFuncContext extends ParserRuleContext {
		public StrFuncContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_strFunc; }
	 
		public StrFuncContext() { }
		public void copyFrom(StrFuncContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class StrFuncTIMESContext extends StrFuncContext {
		public TerminalNode TIMES() { return getToken(DARICParser.TIMES, 0); }
		public StrFuncTIMESContext(StrFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStrFuncTIMES(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StrFuncSTRSContext extends StrFuncContext {
		public TerminalNode STRS() { return getToken(DARICParser.STRS, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public StrFuncSTRSContext(StrFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStrFuncSTRS(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StrFuncGETSContext extends StrFuncContext {
		public TerminalNode GETS() { return getToken(DARICParser.GETS, 0); }
		public StrFuncGETSContext(StrFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStrFuncGETS(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StrFuncINKEYSContext extends StrFuncContext {
		public TerminalNode INKEYS() { return getToken(DARICParser.INKEYS, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public StrFuncINKEYSContext(StrFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStrFuncINKEYS(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StrFuncRIGHTSContext extends StrFuncContext {
		public TerminalNode RIGHTS() { return getToken(DARICParser.RIGHTS, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public StrFuncRIGHTSContext(StrFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStrFuncRIGHTS(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StrFuncLEFTSContext extends StrFuncContext {
		public TerminalNode LEFTS() { return getToken(DARICParser.LEFTS, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public StrFuncLEFTSContext(StrFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStrFuncLEFTS(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StrFuncCHRSContext extends StrFuncContext {
		public TerminalNode CHRS() { return getToken(DARICParser.CHRS, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public StrFuncCHRSContext(StrFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStrFuncCHRS(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StrFuncMIDS3Context extends StrFuncContext {
		public TerminalNode MIDS() { return getToken(DARICParser.MIDS, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public StrFuncMIDS3Context(StrFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStrFuncMIDS3(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StrFuncSTRSHEXContext extends StrFuncContext {
		public TerminalNode STRS() { return getToken(DARICParser.STRS, 0); }
		public TerminalNode TILDE() { return getToken(DARICParser.TILDE, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public StrFuncSTRSHEXContext(StrFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStrFuncSTRSHEX(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StrFuncMIDS2Context extends StrFuncContext {
		public TerminalNode MIDS() { return getToken(DARICParser.MIDS, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public StrFuncMIDS2Context(StrFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStrFuncMIDS2(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StrFuncSTRINGSContext extends StrFuncContext {
		public TerminalNode STRINGS() { return getToken(DARICParser.STRINGS, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public StrFuncSTRINGSContext(StrFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStrFuncSTRINGS(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StrFuncGETSHContext extends StrFuncContext {
		public TerminalNode GETSH() { return getToken(DARICParser.GETSH, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public StrFuncGETSHContext(StrFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStrFuncGETSH(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StrFuncContext strFunc() throws RecognitionException {
		StrFuncContext _localctx = new StrFuncContext(_ctx, getState());
		enterRule(_localctx, 222, RULE_strFunc);
		try {
			setState(1325);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,96,_ctx) ) {
			case 1:
				_localctx = new StrFuncTIMESContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1266);
				match(TIMES);
				}
				break;
			case 2:
				_localctx = new StrFuncCHRSContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1267);
				match(CHRS);
				setState(1268);
				match(LPAREN);
				setState(1269);
				numExpr(0);
				setState(1270);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new StrFuncLEFTSContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1272);
				match(LEFTS);
				setState(1273);
				match(LPAREN);
				setState(1274);
				strExpr(0);
				setState(1275);
				match(COMMA);
				setState(1276);
				numExpr(0);
				setState(1277);
				match(RPAREN);
				}
				break;
			case 4:
				_localctx = new StrFuncMIDS3Context(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1279);
				match(MIDS);
				setState(1280);
				match(LPAREN);
				setState(1281);
				strExpr(0);
				setState(1282);
				match(COMMA);
				setState(1283);
				numExpr(0);
				setState(1284);
				match(COMMA);
				setState(1285);
				numExpr(0);
				setState(1286);
				match(RPAREN);
				}
				break;
			case 5:
				_localctx = new StrFuncMIDS2Context(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1288);
				match(MIDS);
				setState(1289);
				match(LPAREN);
				setState(1290);
				strExpr(0);
				setState(1291);
				match(COMMA);
				setState(1292);
				numExpr(0);
				setState(1293);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new StrFuncRIGHTSContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1295);
				match(RIGHTS);
				setState(1296);
				match(LPAREN);
				setState(1297);
				strExpr(0);
				setState(1298);
				match(COMMA);
				setState(1299);
				numExpr(0);
				setState(1300);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new StrFuncSTRSContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1302);
				match(STRS);
				setState(1303);
				match(LPAREN);
				setState(1304);
				numExpr(0);
				setState(1305);
				match(RPAREN);
				}
				break;
			case 8:
				_localctx = new StrFuncSTRSHEXContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1307);
				match(STRS);
				setState(1308);
				match(TILDE);
				setState(1309);
				match(LPAREN);
				setState(1310);
				numExpr(0);
				setState(1311);
				match(RPAREN);
				}
				break;
			case 9:
				_localctx = new StrFuncSTRINGSContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(1313);
				match(STRINGS);
				setState(1314);
				match(LPAREN);
				setState(1315);
				numExpr(0);
				setState(1316);
				match(COMMA);
				setState(1317);
				strExpr(0);
				setState(1318);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new StrFuncINKEYSContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(1320);
				match(INKEYS);
				setState(1321);
				numExpr(0);
				}
				break;
			case 11:
				_localctx = new StrFuncGETSContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(1322);
				match(GETS);
				}
				break;
			case 12:
				_localctx = new StrFuncGETSHContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(1323);
				match(GETSH);
				setState(1324);
				numExpr(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StringContext extends ParserRuleContext {
		public TerminalNode STRINGLITERAL() { return getToken(DARICParser.STRINGLITERAL, 0); }
		public StringContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_string; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitString(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StringContext string() throws RecognitionException {
		StringContext _localctx = new StringContext(_ctx, getState());
		enterRule(_localctx, 224, RULE_string);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1327);
			match(STRINGLITERAL);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StrExprContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public List<StrExprContext> strExpr() {
			return getRuleContexts(StrExprContext.class);
		}
		public StrExprContext strExpr(int i) {
			return getRuleContext(StrExprContext.class,i);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public StrFuncContext strFunc() {
			return getRuleContext(StrFuncContext.class,0);
		}
		public StrVarContext strVar() {
			return getRuleContext(StrVarContext.class,0);
		}
		public StringContext string() {
			return getRuleContext(StringContext.class,0);
		}
		public TerminalNode PLUS() { return getToken(DARICParser.PLUS, 0); }
		public StrExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_strExpr; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStrExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StrExprContext strExpr() throws RecognitionException {
		return strExpr(0);
	}

	private StrExprContext strExpr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		StrExprContext _localctx = new StrExprContext(_ctx, _parentState);
		StrExprContext _prevctx = _localctx;
		int _startState = 226;
		enterRecursionRule(_localctx, 226, RULE_strExpr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1337);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LPAREN:
				{
				setState(1330);
				match(LPAREN);
				setState(1331);
				strExpr(0);
				setState(1332);
				match(RPAREN);
				}
				break;
			case INKEYS:
			case GETS:
			case GETSH:
			case TIMES:
			case STRS:
			case STRINGS:
			case CHRS:
			case LEFTS:
			case MIDS:
			case RIGHTS:
				{
				setState(1334);
				strFunc();
				}
				break;
			case FN_STRING:
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(1335);
				strVar();
				}
				break;
			case STRINGLITERAL:
				{
				setState(1336);
				string();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(1344);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,98,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StrExprContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_strExpr);
					setState(1339);
					if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
					setState(1340);
					match(PLUS);
					setState(1341);
					strExpr(4);
					}
					} 
				}
				setState(1346);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,98,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class NumFuncContext extends ParserRuleContext {
		public NumFuncContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_numFunc; }
	 
		public NumFuncContext() { }
		public void copyFrom(NumFuncContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class NumFuncRNDRANGEContext extends NumFuncContext {
		public TerminalNode RND() { return getToken(DARICParser.RND, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncRNDRANGEContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncRNDRANGE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncRND0Context extends NumFuncContext {
		public TerminalNode RND0() { return getToken(DARICParser.RND0, 0); }
		public NumFuncRND0Context(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncRND0(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncGETContext extends NumFuncContext {
		public TerminalNode GET() { return getToken(DARICParser.GET, 0); }
		public NumFuncGETContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncGET(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncRND1Context extends NumFuncContext {
		public TerminalNode RND1() { return getToken(DARICParser.RND1, 0); }
		public NumFuncRND1Context(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncRND1(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncLNContext extends NumFuncContext {
		public TerminalNode LN() { return getToken(DARICParser.LN, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncLNContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncLN(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncSINContext extends NumFuncContext {
		public TerminalNode SIN() { return getToken(DARICParser.SIN, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncSINContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncSIN(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncOPENINContext extends NumFuncContext {
		public TerminalNode OPENIN() { return getToken(DARICParser.OPENIN, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncOPENINContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncOPENIN(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncLOADSPRITEContext extends NumFuncContext {
		public TerminalNode LOADSPRITE() { return getToken(DARICParser.LOADSPRITE, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncLOADSPRITEContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncLOADSPRITE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncCREATEFONTContext extends NumFuncContext {
		public TerminalNode CREATEFONT() { return getToken(DARICParser.CREATEFONT, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public NumFuncCREATEFONTContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncCREATEFONT(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncRADContext extends NumFuncContext {
		public TerminalNode RAD() { return getToken(DARICParser.RAD, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncRADContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncRAD(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncSQRContext extends NumFuncContext {
		public TerminalNode SQR() { return getToken(DARICParser.SQR, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncSQRContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncSQR(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncSHAPEContext extends NumFuncContext {
		public TerminalNode CREATESHAPE() { return getToken(DARICParser.CREATESHAPE, 0); }
		public List<VarNameTypeContext> varNameType() {
			return getRuleContexts(VarNameTypeContext.class);
		}
		public VarNameTypeContext varNameType(int i) {
			return getRuleContext(VarNameTypeContext.class,i);
		}
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public NumFuncSHAPEContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncSHAPE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncLENContext extends NumFuncContext {
		public TerminalNode LEN() { return getToken(DARICParser.LEN, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public NumFuncLENContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncLEN(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncSCREENWIDTHContext extends NumFuncContext {
		public TerminalNode SCREENWIDTH() { return getToken(DARICParser.SCREENWIDTH, 0); }
		public NumFuncSCREENWIDTHContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncSCREENWIDTH(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncFLOATContext extends NumFuncContext {
		public TerminalNode FLOAT_TOKEN() { return getToken(DARICParser.FLOAT_TOKEN, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncFLOATContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncFLOAT(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncBGETHContext extends NumFuncContext {
		public TerminalNode BGETH() { return getToken(DARICParser.BGETH, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public NumFuncBGETHContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncBGETH(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncACSContext extends NumFuncContext {
		public TerminalNode ACS() { return getToken(DARICParser.ACS, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncACSContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncACS(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncPIContext extends NumFuncContext {
		public TerminalNode PI() { return getToken(DARICParser.PI, 0); }
		public NumFuncPIContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncPI(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncFALSEContext extends NumFuncContext {
		public TerminalNode FALSE() { return getToken(DARICParser.FALSE, 0); }
		public NumFuncFALSEContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncFALSE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncCREATESPRITEContext extends NumFuncContext {
		public TerminalNode CREATESPRITE() { return getToken(DARICParser.CREATESPRITE, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncCREATESPRITEContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncCREATESPRITE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncRNDContext extends NumFuncContext {
		public TerminalNode RND() { return getToken(DARICParser.RND, 0); }
		public NumFuncRNDContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncRND(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncOPENOUTContext extends NumFuncContext {
		public TerminalNode OPENOUT() { return getToken(DARICParser.OPENOUT, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncOPENOUTContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncOPENOUT(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncOPENUPContext extends NumFuncContext {
		public TerminalNode OPENUP() { return getToken(DARICParser.OPENUP, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncOPENUPContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncOPENUP(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncINKEYContext extends NumFuncContext {
		public TerminalNode INKEY() { return getToken(DARICParser.INKEY, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncINKEYContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncINKEY(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncINSTR3Context extends NumFuncContext {
		public TerminalNode INSTR() { return getToken(DARICParser.INSTR, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public List<StrExprContext> strExpr() {
			return getRuleContexts(StrExprContext.class);
		}
		public StrExprContext strExpr(int i) {
			return getRuleContext(StrExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncINSTR3Context(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncINSTR3(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncINSTR2Context extends NumFuncContext {
		public TerminalNode INSTR() { return getToken(DARICParser.INSTR, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public List<StrExprContext> strExpr() {
			return getRuleContexts(StrExprContext.class);
		}
		public StrExprContext strExpr(int i) {
			return getRuleContext(StrExprContext.class,i);
		}
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncINSTR2Context(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncINSTR2(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncTANContext extends NumFuncContext {
		public TerminalNode TAN() { return getToken(DARICParser.TAN, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncTANContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncTAN(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncEOFHContext extends NumFuncContext {
		public TerminalNode EOFH() { return getToken(DARICParser.EOFH, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public NumFuncEOFHContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncEOFH(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncVALContext extends NumFuncContext {
		public TerminalNode VAL() { return getToken(DARICParser.VAL, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public NumFuncVALContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncVAL(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncSCREENHEIGHTContext extends NumFuncContext {
		public TerminalNode SCREENHEIGHT() { return getToken(DARICParser.SCREENHEIGHT, 0); }
		public NumFuncSCREENHEIGHTContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncSCREENHEIGHT(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncATNContext extends NumFuncContext {
		public TerminalNode ATN() { return getToken(DARICParser.ATN, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncATNContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncATN(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncSGNContext extends NumFuncContext {
		public TerminalNode SGN() { return getToken(DARICParser.SGN, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncSGNContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncSGN(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncEXPContext extends NumFuncContext {
		public TerminalNode EXP() { return getToken(DARICParser.EXP, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncEXPContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncEXP(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncCOLOURContext extends NumFuncContext {
		public TerminalNode COLOUR() { return getToken(DARICParser.COLOUR, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncCOLOURContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncCOLOUR(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncTIMEContext extends NumFuncContext {
		public TerminalNode TIME() { return getToken(DARICParser.TIME, 0); }
		public NumFuncTIMEContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncTIME(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncABSContext extends NumFuncContext {
		public TerminalNode ABS() { return getToken(DARICParser.ABS, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncABSContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncABS(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncPTRContext extends NumFuncContext {
		public TerminalNode PTRH() { return getToken(DARICParser.PTRH, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public NumFuncPTRContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncPTR(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncINTContext extends NumFuncContext {
		public TerminalNode INT() { return getToken(DARICParser.INT, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncINTContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncINT(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncTRUEContext extends NumFuncContext {
		public TerminalNode TRUE() { return getToken(DARICParser.TRUE, 0); }
		public NumFuncTRUEContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncTRUE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncASCContext extends NumFuncContext {
		public TerminalNode ASC() { return getToken(DARICParser.ASC, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public NumFuncASCContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncASC(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncPOINTContext extends NumFuncContext {
		public TerminalNode POINT() { return getToken(DARICParser.POINT, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncPOINTContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncPOINT(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncDEGContext extends NumFuncContext {
		public TerminalNode DEG() { return getToken(DARICParser.DEG, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncDEGContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncDEG(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncCOSContext extends NumFuncContext {
		public TerminalNode COS() { return getToken(DARICParser.COS, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncCOSContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncCOS(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncLOGContext extends NumFuncContext {
		public TerminalNode LOG() { return getToken(DARICParser.LOG, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncLOGContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncLOG(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncASNContext extends NumFuncContext {
		public TerminalNode ASN() { return getToken(DARICParser.ASN, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncASNContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncASN(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncLOADTYPEFACEContext extends NumFuncContext {
		public TerminalNode LOADTYPEFACE() { return getToken(DARICParser.LOADTYPEFACE, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public NumFuncLOADTYPEFACEContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncLOADTYPEFACE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncOBJECTContext extends NumFuncContext {
		public TerminalNode CREATEOBJECT() { return getToken(DARICParser.CREATEOBJECT, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public TerminalNode SOLID() { return getToken(DARICParser.SOLID, 0); }
		public TerminalNode WIREFRAME() { return getToken(DARICParser.WIREFRAME, 0); }
		public TerminalNode SHADED() { return getToken(DARICParser.SHADED, 0); }
		public TerminalNode FILLEDWIREFRAME() { return getToken(DARICParser.FILLEDWIREFRAME, 0); }
		public NumFuncOBJECTContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncOBJECT(this);
			else return visitor.visitChildren(this);
		}
	}

	public final NumFuncContext numFunc() throws RecognitionException {
		NumFuncContext _localctx = new NumFuncContext(_ctx, getState());
		enterRule(_localctx, 228, RULE_numFunc);
		try {
			setState(1556);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,100,_ctx) ) {
			case 1:
				_localctx = new NumFuncPIContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1347);
				match(PI);
				}
				break;
			case 2:
				_localctx = new NumFuncFALSEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1348);
				match(FALSE);
				}
				break;
			case 3:
				_localctx = new NumFuncTRUEContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1349);
				match(TRUE);
				}
				break;
			case 4:
				_localctx = new NumFuncTIMEContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1350);
				match(TIME);
				}
				break;
			case 5:
				_localctx = new NumFuncRNDRANGEContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1351);
				match(RND);
				setState(1352);
				match(LPAREN);
				setState(1353);
				numExpr(0);
				setState(1354);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new NumFuncRNDContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1356);
				match(RND);
				}
				break;
			case 7:
				_localctx = new NumFuncRND0Context(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1357);
				match(RND0);
				}
				break;
			case 8:
				_localctx = new NumFuncRND1Context(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1358);
				match(RND1);
				}
				break;
			case 9:
				_localctx = new NumFuncLNContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(1359);
				match(LN);
				setState(1360);
				match(LPAREN);
				setState(1361);
				numExpr(0);
				setState(1362);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new NumFuncLOGContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(1364);
				match(LOG);
				setState(1365);
				match(LPAREN);
				setState(1366);
				numExpr(0);
				setState(1367);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new NumFuncEXPContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(1369);
				match(EXP);
				setState(1370);
				match(LPAREN);
				setState(1371);
				numExpr(0);
				setState(1372);
				match(RPAREN);
				}
				break;
			case 12:
				_localctx = new NumFuncATNContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(1374);
				match(ATN);
				setState(1375);
				match(LPAREN);
				setState(1376);
				numExpr(0);
				setState(1377);
				match(RPAREN);
				}
				break;
			case 13:
				_localctx = new NumFuncTANContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(1379);
				match(TAN);
				setState(1380);
				match(LPAREN);
				setState(1381);
				numExpr(0);
				setState(1382);
				match(RPAREN);
				}
				break;
			case 14:
				_localctx = new NumFuncCOSContext(_localctx);
				enterOuterAlt(_localctx, 14);
				{
				setState(1384);
				match(COS);
				setState(1385);
				match(LPAREN);
				setState(1386);
				numExpr(0);
				setState(1387);
				match(RPAREN);
				}
				break;
			case 15:
				_localctx = new NumFuncSINContext(_localctx);
				enterOuterAlt(_localctx, 15);
				{
				setState(1389);
				match(SIN);
				setState(1390);
				match(LPAREN);
				setState(1391);
				numExpr(0);
				setState(1392);
				match(RPAREN);
				}
				break;
			case 16:
				_localctx = new NumFuncABSContext(_localctx);
				enterOuterAlt(_localctx, 16);
				{
				setState(1394);
				match(ABS);
				setState(1395);
				match(LPAREN);
				setState(1396);
				numExpr(0);
				setState(1397);
				match(RPAREN);
				}
				break;
			case 17:
				_localctx = new NumFuncACSContext(_localctx);
				enterOuterAlt(_localctx, 17);
				{
				setState(1399);
				match(ACS);
				setState(1400);
				match(LPAREN);
				setState(1401);
				numExpr(0);
				setState(1402);
				match(RPAREN);
				}
				break;
			case 18:
				_localctx = new NumFuncASNContext(_localctx);
				enterOuterAlt(_localctx, 18);
				{
				setState(1404);
				match(ASN);
				setState(1405);
				match(LPAREN);
				setState(1406);
				numExpr(0);
				setState(1407);
				match(RPAREN);
				}
				break;
			case 19:
				_localctx = new NumFuncDEGContext(_localctx);
				enterOuterAlt(_localctx, 19);
				{
				setState(1409);
				match(DEG);
				setState(1410);
				match(LPAREN);
				setState(1411);
				numExpr(0);
				setState(1412);
				match(RPAREN);
				}
				break;
			case 20:
				_localctx = new NumFuncRADContext(_localctx);
				enterOuterAlt(_localctx, 20);
				{
				setState(1414);
				match(RAD);
				setState(1415);
				match(LPAREN);
				setState(1416);
				numExpr(0);
				setState(1417);
				match(RPAREN);
				}
				break;
			case 21:
				_localctx = new NumFuncSQRContext(_localctx);
				enterOuterAlt(_localctx, 21);
				{
				setState(1419);
				match(SQR);
				setState(1420);
				match(LPAREN);
				setState(1421);
				numExpr(0);
				setState(1422);
				match(RPAREN);
				}
				break;
			case 22:
				_localctx = new NumFuncSGNContext(_localctx);
				enterOuterAlt(_localctx, 22);
				{
				setState(1424);
				match(SGN);
				setState(1425);
				match(LPAREN);
				setState(1426);
				numExpr(0);
				setState(1427);
				match(RPAREN);
				}
				break;
			case 23:
				_localctx = new NumFuncGETContext(_localctx);
				enterOuterAlt(_localctx, 23);
				{
				setState(1429);
				match(GET);
				}
				break;
			case 24:
				_localctx = new NumFuncINKEYContext(_localctx);
				enterOuterAlt(_localctx, 24);
				{
				setState(1430);
				match(INKEY);
				setState(1431);
				match(LPAREN);
				setState(1432);
				numExpr(0);
				setState(1433);
				match(RPAREN);
				}
				break;
			case 25:
				_localctx = new NumFuncINTContext(_localctx);
				enterOuterAlt(_localctx, 25);
				{
				setState(1435);
				match(INT);
				setState(1436);
				match(LPAREN);
				setState(1437);
				numExpr(0);
				setState(1438);
				match(RPAREN);
				}
				break;
			case 26:
				_localctx = new NumFuncFLOATContext(_localctx);
				enterOuterAlt(_localctx, 26);
				{
				setState(1440);
				match(FLOAT_TOKEN);
				setState(1441);
				match(LPAREN);
				setState(1442);
				numExpr(0);
				setState(1443);
				match(RPAREN);
				}
				break;
			case 27:
				_localctx = new NumFuncSCREENWIDTHContext(_localctx);
				enterOuterAlt(_localctx, 27);
				{
				setState(1445);
				match(SCREENWIDTH);
				}
				break;
			case 28:
				_localctx = new NumFuncSCREENHEIGHTContext(_localctx);
				enterOuterAlt(_localctx, 28);
				{
				setState(1446);
				match(SCREENHEIGHT);
				}
				break;
			case 29:
				_localctx = new NumFuncPOINTContext(_localctx);
				enterOuterAlt(_localctx, 29);
				{
				setState(1447);
				match(POINT);
				setState(1448);
				match(LPAREN);
				setState(1449);
				numExpr(0);
				setState(1450);
				match(COMMA);
				setState(1451);
				numExpr(0);
				setState(1452);
				match(RPAREN);
				}
				break;
			case 30:
				_localctx = new NumFuncCOLOURContext(_localctx);
				enterOuterAlt(_localctx, 30);
				{
				setState(1454);
				match(COLOUR);
				setState(1455);
				match(LPAREN);
				setState(1456);
				numExpr(0);
				setState(1457);
				match(COMMA);
				setState(1458);
				numExpr(0);
				setState(1459);
				match(COMMA);
				setState(1460);
				numExpr(0);
				setState(1461);
				match(RPAREN);
				}
				break;
			case 31:
				_localctx = new NumFuncLOADTYPEFACEContext(_localctx);
				enterOuterAlt(_localctx, 31);
				{
				setState(1463);
				match(LOADTYPEFACE);
				setState(1464);
				strExpr(0);
				}
				break;
			case 32:
				_localctx = new NumFuncCREATEFONTContext(_localctx);
				enterOuterAlt(_localctx, 32);
				{
				setState(1465);
				match(CREATEFONT);
				setState(1466);
				numExpr(0);
				setState(1467);
				match(COMMA);
				setState(1468);
				numExpr(0);
				}
				break;
			case 33:
				_localctx = new NumFuncCREATESPRITEContext(_localctx);
				enterOuterAlt(_localctx, 33);
				{
				setState(1470);
				match(CREATESPRITE);
				setState(1471);
				match(LPAREN);
				setState(1472);
				numExpr(0);
				setState(1473);
				match(COMMA);
				setState(1474);
				numExpr(0);
				setState(1475);
				match(COMMA);
				setState(1476);
				numExpr(0);
				setState(1477);
				match(RPAREN);
				}
				break;
			case 34:
				_localctx = new NumFuncLOADSPRITEContext(_localctx);
				enterOuterAlt(_localctx, 34);
				{
				setState(1479);
				match(LOADSPRITE);
				setState(1480);
				match(LPAREN);
				setState(1481);
				strExpr(0);
				setState(1482);
				match(RPAREN);
				}
				break;
			case 35:
				_localctx = new NumFuncSHAPEContext(_localctx);
				enterOuterAlt(_localctx, 35);
				{
				setState(1484);
				match(CREATESHAPE);
				setState(1485);
				varNameType();
				setState(1486);
				match(COMMA);
				setState(1487);
				varNameType();
				}
				break;
			case 36:
				_localctx = new NumFuncOBJECTContext(_localctx);
				enterOuterAlt(_localctx, 36);
				{
				setState(1489);
				match(CREATEOBJECT);
				setState(1490);
				numExpr(0);
				setState(1491);
				match(COMMA);
				setState(1492);
				numExpr(0);
				setState(1493);
				match(COMMA);
				setState(1494);
				numExpr(0);
				setState(1495);
				match(COMMA);
				setState(1496);
				numExpr(0);
				setState(1497);
				match(COMMA);
				setState(1498);
				numExpr(0);
				setState(1499);
				match(COMMA);
				setState(1500);
				numExpr(0);
				setState(1501);
				match(COMMA);
				setState(1502);
				numExpr(0);
				setState(1503);
				match(COMMA);
				setState(1504);
				numExpr(0);
				setState(1505);
				match(COMMA);
				setState(1511);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case FALSE:
				case FLOAT_TOKEN:
				case INT:
				case TRUE:
				case INKEY:
				case INKEYS:
				case GET:
				case GETS:
				case RED:
				case GREEN:
				case YELLOW:
				case BLUE:
				case MAGENTA:
				case CYAN:
				case WHITE:
				case BLACK:
				case MONO15:
				case MONO20:
				case MONO25:
				case MONO30:
				case MONO35:
				case MONO40:
				case MONO50:
				case MONO75:
				case MONO100:
				case PROP15:
				case PROP20:
				case PROP25:
				case PROP30:
				case PROP35:
				case PROP40:
				case PROP50:
				case PROP75:
				case PROP100:
				case SERIF15:
				case SERIF20:
				case SERIF25:
				case SERIF30:
				case SERIF35:
				case SERIF40:
				case SERIF50:
				case SERIF75:
				case SERIF100:
				case CREATESHAPE:
				case CREATEOBJECT:
				case BGETH:
				case EOFH:
				case GETSH:
				case OPENIN:
				case OPENOUT:
				case OPENUP:
				case PTRH:
				case COLOUR:
				case CREATEFONT:
				case LOADTYPEFACE:
				case POINT:
				case SCREENWIDTH:
				case SCREENHEIGHT:
				case LOADSPRITE:
				case CREATESPRITE:
				case TIME:
				case PI:
				case SQR:
				case LN:
				case LOG:
				case EXP:
				case ATN:
				case TAN:
				case COS:
				case SIN:
				case ABS:
				case ACS:
				case ASN:
				case DEG:
				case RAD:
				case SGN:
				case ASC:
				case LEN:
				case INSTR:
				case VAL:
				case TIMES:
				case STRS:
				case STRINGS:
				case CHRS:
				case LEFTS:
				case MIDS:
				case RIGHTS:
				case RND:
				case RND0:
				case RND1:
				case NOT:
				case PLUS:
				case MINUS:
				case LPAREN:
				case STRINGLITERAL:
				case FN_INTEGER:
				case FN_FLOAT:
				case FN_STRING:
				case VARIABLE_FLOAT:
				case VARIABLE_INTEGER:
				case VARIABLE_STRING:
				case VARIABLE_TYPE:
				case HEXNUMBER:
				case BINARYNUMBER:
				case NUMBER:
				case FLOAT:
					{
					setState(1506);
					numExpr(0);
					}
					break;
				case SOLID:
					{
					setState(1507);
					match(SOLID);
					}
					break;
				case WIREFRAME:
					{
					setState(1508);
					match(WIREFRAME);
					}
					break;
				case SHADED:
					{
					setState(1509);
					match(SHADED);
					}
					break;
				case FILLEDWIREFRAME:
					{
					setState(1510);
					match(FILLEDWIREFRAME);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			case 37:
				_localctx = new NumFuncBGETHContext(_localctx);
				enterOuterAlt(_localctx, 37);
				{
				setState(1513);
				match(BGETH);
				setState(1514);
				numExpr(0);
				}
				break;
			case 38:
				_localctx = new NumFuncEOFHContext(_localctx);
				enterOuterAlt(_localctx, 38);
				{
				setState(1515);
				match(EOFH);
				setState(1516);
				numExpr(0);
				}
				break;
			case 39:
				_localctx = new NumFuncOPENINContext(_localctx);
				enterOuterAlt(_localctx, 39);
				{
				setState(1517);
				match(OPENIN);
				setState(1518);
				match(LPAREN);
				setState(1519);
				strExpr(0);
				setState(1520);
				match(RPAREN);
				}
				break;
			case 40:
				_localctx = new NumFuncOPENOUTContext(_localctx);
				enterOuterAlt(_localctx, 40);
				{
				setState(1522);
				match(OPENOUT);
				setState(1523);
				match(LPAREN);
				setState(1524);
				strExpr(0);
				setState(1525);
				match(RPAREN);
				}
				break;
			case 41:
				_localctx = new NumFuncOPENUPContext(_localctx);
				enterOuterAlt(_localctx, 41);
				{
				setState(1527);
				match(OPENUP);
				setState(1528);
				match(LPAREN);
				setState(1529);
				strExpr(0);
				setState(1530);
				match(RPAREN);
				}
				break;
			case 42:
				_localctx = new NumFuncPTRContext(_localctx);
				enterOuterAlt(_localctx, 42);
				{
				setState(1532);
				match(PTRH);
				setState(1533);
				numExpr(0);
				}
				break;
			case 43:
				_localctx = new NumFuncASCContext(_localctx);
				enterOuterAlt(_localctx, 43);
				{
				setState(1534);
				match(ASC);
				setState(1535);
				strExpr(0);
				}
				break;
			case 44:
				_localctx = new NumFuncLENContext(_localctx);
				enterOuterAlt(_localctx, 44);
				{
				setState(1536);
				match(LEN);
				setState(1537);
				strExpr(0);
				}
				break;
			case 45:
				_localctx = new NumFuncINSTR2Context(_localctx);
				enterOuterAlt(_localctx, 45);
				{
				setState(1538);
				match(INSTR);
				setState(1539);
				match(LPAREN);
				setState(1540);
				strExpr(0);
				setState(1541);
				match(COMMA);
				setState(1542);
				strExpr(0);
				setState(1543);
				match(RPAREN);
				}
				break;
			case 46:
				_localctx = new NumFuncINSTR3Context(_localctx);
				enterOuterAlt(_localctx, 46);
				{
				setState(1545);
				match(INSTR);
				setState(1546);
				match(LPAREN);
				setState(1547);
				strExpr(0);
				setState(1548);
				match(COMMA);
				setState(1549);
				strExpr(0);
				setState(1550);
				match(COMMA);
				setState(1551);
				numExpr(0);
				setState(1552);
				match(RPAREN);
				}
				break;
			case 47:
				_localctx = new NumFuncVALContext(_localctx);
				enterOuterAlt(_localctx, 47);
				{
				setState(1554);
				match(VAL);
				setState(1555);
				strExpr(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NumExprContext extends ParserRuleContext {
		public NumExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_numExpr; }
	 
		public NumExprContext() { }
		public void copyFrom(NumExprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class NumExprNumberContext extends NumExprContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public NumExprNumberContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprNumber(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprSHLSHRContext extends NumExprContext {
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode SHL() { return getToken(DARICParser.SHL, 0); }
		public TerminalNode SHR() { return getToken(DARICParser.SHR, 0); }
		public NumExprSHLSHRContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprSHLSHR(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprFuncContext extends NumExprContext {
		public NumFuncContext numFunc() {
			return getRuleContext(NumFuncContext.class,0);
		}
		public NumExprFuncContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprFunc(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprVarContext extends NumExprContext {
		public NumVarContext numVar() {
			return getRuleContext(NumVarContext.class,0);
		}
		public NumExprVarContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprVar(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncArraySizeContext extends NumExprContext {
		public TerminalNode LEN() { return getToken(DARICParser.LEN, 0); }
		public List<TerminalNode> LPAREN() { return getTokens(DARICParser.LPAREN); }
		public TerminalNode LPAREN(int i) {
			return getToken(DARICParser.LPAREN, i);
		}
		public JustVarContext justVar() {
			return getRuleContext(JustVarContext.class,0);
		}
		public List<TerminalNode> RPAREN() { return getTokens(DARICParser.RPAREN); }
		public TerminalNode RPAREN(int i) {
			return getToken(DARICParser.RPAREN, i);
		}
		public NumFuncArraySizeContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncArraySize(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprHatContext extends NumExprContext {
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode HAT() { return getToken(DARICParser.HAT, 0); }
		public NumExprHatContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprHat(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprNumRelopContext extends NumExprContext {
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode EQ() { return getToken(DARICParser.EQ, 0); }
		public TerminalNode NE() { return getToken(DARICParser.NE, 0); }
		public TerminalNode GT() { return getToken(DARICParser.GT, 0); }
		public TerminalNode GE() { return getToken(DARICParser.GE, 0); }
		public TerminalNode LT() { return getToken(DARICParser.LT, 0); }
		public TerminalNode LE() { return getToken(DARICParser.LE, 0); }
		public NumExprNumRelopContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprNumRelop(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprStrRelopContext extends NumExprContext {
		public List<StrExprContext> strExpr() {
			return getRuleContexts(StrExprContext.class);
		}
		public StrExprContext strExpr(int i) {
			return getRuleContext(StrExprContext.class,i);
		}
		public TerminalNode EQ() { return getToken(DARICParser.EQ, 0); }
		public TerminalNode NE() { return getToken(DARICParser.NE, 0); }
		public TerminalNode GT() { return getToken(DARICParser.GT, 0); }
		public TerminalNode GE() { return getToken(DARICParser.GE, 0); }
		public TerminalNode LT() { return getToken(DARICParser.LT, 0); }
		public TerminalNode LE() { return getToken(DARICParser.LE, 0); }
		public NumExprStrRelopContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprStrRelop(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprNOTContext extends NumExprContext {
		public TerminalNode NOT() { return getToken(DARICParser.NOT, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public NumExprNOTContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprNOT(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprMultiplyDivideContext extends NumExprContext {
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode MULTIPLY() { return getToken(DARICParser.MULTIPLY, 0); }
		public TerminalNode DIVIDE() { return getToken(DARICParser.DIVIDE, 0); }
		public NumExprMultiplyDivideContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprMultiplyDivide(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprDIVMODContext extends NumExprContext {
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode DIV() { return getToken(DARICParser.DIV, 0); }
		public TerminalNode MOD() { return getToken(DARICParser.MOD, 0); }
		public NumExprDIVMODContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprDIVMOD(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprANDOREORContext extends NumExprContext {
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode AND() { return getToken(DARICParser.AND, 0); }
		public TerminalNode OR() { return getToken(DARICParser.OR, 0); }
		public TerminalNode EOR() { return getToken(DARICParser.EOR, 0); }
		public NumExprANDOREORContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprANDOREOR(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprNestedContext extends NumExprContext {
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumExprNestedContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprNested(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprUnaryContext extends NumExprContext {
		public TerminalNode MINUS() { return getToken(DARICParser.MINUS, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public NumExprUnaryContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprUnary(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprAddSubtractContext extends NumExprContext {
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode PLUS() { return getToken(DARICParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(DARICParser.MINUS, 0); }
		public NumExprAddSubtractContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprAddSubtract(this);
			else return visitor.visitChildren(this);
		}
	}

	public final NumExprContext numExpr() throws RecognitionException {
		return numExpr(0);
	}

	private NumExprContext numExpr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		NumExprContext _localctx = new NumExprContext(_ctx, _parentState);
		NumExprContext _prevctx = _localctx;
		int _startState = 230;
		enterRecursionRule(_localctx, 230, RULE_numExpr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1581);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,101,_ctx) ) {
			case 1:
				{
				_localctx = new NumExprVarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(1559);
				numVar();
				}
				break;
			case 2:
				{
				_localctx = new NumExprNumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1560);
				number();
				}
				break;
			case 3:
				{
				_localctx = new NumExprNestedContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1561);
				match(LPAREN);
				setState(1562);
				numExpr(0);
				setState(1563);
				match(RPAREN);
				}
				break;
			case 4:
				{
				_localctx = new NumExprUnaryContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1565);
				match(MINUS);
				setState(1566);
				numExpr(12);
				}
				break;
			case 5:
				{
				_localctx = new NumExprNOTContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1567);
				match(NOT);
				setState(1568);
				numExpr(11);
				}
				break;
			case 6:
				{
				_localctx = new NumExprFuncContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1569);
				numFunc();
				}
				break;
			case 7:
				{
				_localctx = new NumExprStrRelopContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1570);
				strExpr(0);
				setState(1571);
				_la = _input.LA(1);
				if ( !(((((_la - 180)) & ~0x3f) == 0 && ((1L << (_la - 180)) & ((1L << (EQ - 180)) | (1L << (NE - 180)) | (1L << (GT - 180)) | (1L << (GE - 180)) | (1L << (LT - 180)) | (1L << (LE - 180)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(1572);
				strExpr(0);
				}
				break;
			case 8:
				{
				_localctx = new NumFuncArraySizeContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1574);
				match(LEN);
				setState(1575);
				match(LPAREN);
				setState(1576);
				justVar();
				setState(1577);
				match(LPAREN);
				setState(1578);
				match(RPAREN);
				setState(1579);
				match(RPAREN);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1606);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,103,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1604);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,102,_ctx) ) {
					case 1:
						{
						_localctx = new NumExprHatContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1583);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(1584);
						match(HAT);
						setState(1585);
						numExpr(9);
						}
						break;
					case 2:
						{
						_localctx = new NumExprMultiplyDivideContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1586);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(1587);
						_la = _input.LA(1);
						if ( !(_la==MULTIPLY || _la==DIVIDE) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1588);
						numExpr(9);
						}
						break;
					case 3:
						{
						_localctx = new NumExprDIVMODContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1589);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(1590);
						_la = _input.LA(1);
						if ( !(_la==MOD || _la==DIV) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1591);
						numExpr(8);
						}
						break;
					case 4:
						{
						_localctx = new NumExprAddSubtractContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1592);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(1593);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1594);
						numExpr(7);
						}
						break;
					case 5:
						{
						_localctx = new NumExprSHLSHRContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1595);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(1596);
						_la = _input.LA(1);
						if ( !(_la==SHL || _la==SHR) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1597);
						numExpr(6);
						}
						break;
					case 6:
						{
						_localctx = new NumExprNumRelopContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1598);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(1599);
						_la = _input.LA(1);
						if ( !(((((_la - 180)) & ~0x3f) == 0 && ((1L << (_la - 180)) & ((1L << (EQ - 180)) | (1L << (NE - 180)) | (1L << (GT - 180)) | (1L << (GE - 180)) | (1L << (LT - 180)) | (1L << (LE - 180)))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1600);
						numExpr(5);
						}
						break;
					case 7:
						{
						_localctx = new NumExprANDOREORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1601);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1602);
						_la = _input.LA(1);
						if ( !(((((_la - 187)) & ~0x3f) == 0 && ((1L << (_la - 187)) & ((1L << (AND - 187)) | (1L << (OR - 187)) | (1L << (EOR - 187)))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1603);
						numExpr(3);
						}
						break;
					}
					} 
				}
				setState(1608);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,103,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class NumColoursContext extends ParserRuleContext {
		public TerminalNode RED() { return getToken(DARICParser.RED, 0); }
		public TerminalNode GREEN() { return getToken(DARICParser.GREEN, 0); }
		public TerminalNode YELLOW() { return getToken(DARICParser.YELLOW, 0); }
		public TerminalNode BLUE() { return getToken(DARICParser.BLUE, 0); }
		public TerminalNode MAGENTA() { return getToken(DARICParser.MAGENTA, 0); }
		public TerminalNode CYAN() { return getToken(DARICParser.CYAN, 0); }
		public TerminalNode WHITE() { return getToken(DARICParser.WHITE, 0); }
		public TerminalNode BLACK() { return getToken(DARICParser.BLACK, 0); }
		public NumColoursContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_numColours; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumColours(this);
			else return visitor.visitChildren(this);
		}
	}

	public final NumColoursContext numColours() throws RecognitionException {
		NumColoursContext _localctx = new NumColoursContext(_ctx, getState());
		enterRule(_localctx, 232, RULE_numColours);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1609);
			_la = _input.LA(1);
			if ( !(((((_la - 60)) & ~0x3f) == 0 && ((1L << (_la - 60)) & ((1L << (RED - 60)) | (1L << (GREEN - 60)) | (1L << (YELLOW - 60)) | (1L << (BLUE - 60)) | (1L << (MAGENTA - 60)) | (1L << (CYAN - 60)) | (1L << (WHITE - 60)) | (1L << (BLACK - 60)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DefaultFontsContext extends ParserRuleContext {
		public TerminalNode MONO15() { return getToken(DARICParser.MONO15, 0); }
		public TerminalNode MONO20() { return getToken(DARICParser.MONO20, 0); }
		public TerminalNode MONO25() { return getToken(DARICParser.MONO25, 0); }
		public TerminalNode MONO30() { return getToken(DARICParser.MONO30, 0); }
		public TerminalNode MONO35() { return getToken(DARICParser.MONO35, 0); }
		public TerminalNode MONO40() { return getToken(DARICParser.MONO40, 0); }
		public TerminalNode MONO50() { return getToken(DARICParser.MONO50, 0); }
		public TerminalNode MONO75() { return getToken(DARICParser.MONO75, 0); }
		public TerminalNode MONO100() { return getToken(DARICParser.MONO100, 0); }
		public TerminalNode PROP15() { return getToken(DARICParser.PROP15, 0); }
		public TerminalNode PROP20() { return getToken(DARICParser.PROP20, 0); }
		public TerminalNode PROP25() { return getToken(DARICParser.PROP25, 0); }
		public TerminalNode PROP30() { return getToken(DARICParser.PROP30, 0); }
		public TerminalNode PROP35() { return getToken(DARICParser.PROP35, 0); }
		public TerminalNode PROP40() { return getToken(DARICParser.PROP40, 0); }
		public TerminalNode PROP50() { return getToken(DARICParser.PROP50, 0); }
		public TerminalNode PROP75() { return getToken(DARICParser.PROP75, 0); }
		public TerminalNode PROP100() { return getToken(DARICParser.PROP100, 0); }
		public TerminalNode SERIF15() { return getToken(DARICParser.SERIF15, 0); }
		public TerminalNode SERIF20() { return getToken(DARICParser.SERIF20, 0); }
		public TerminalNode SERIF25() { return getToken(DARICParser.SERIF25, 0); }
		public TerminalNode SERIF30() { return getToken(DARICParser.SERIF30, 0); }
		public TerminalNode SERIF35() { return getToken(DARICParser.SERIF35, 0); }
		public TerminalNode SERIF40() { return getToken(DARICParser.SERIF40, 0); }
		public TerminalNode SERIF50() { return getToken(DARICParser.SERIF50, 0); }
		public TerminalNode SERIF75() { return getToken(DARICParser.SERIF75, 0); }
		public TerminalNode SERIF100() { return getToken(DARICParser.SERIF100, 0); }
		public DefaultFontsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_defaultFonts; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitDefaultFonts(this);
			else return visitor.visitChildren(this);
		}
	}

	public final DefaultFontsContext defaultFonts() throws RecognitionException {
		DefaultFontsContext _localctx = new DefaultFontsContext(_ctx, getState());
		enterRule(_localctx, 234, RULE_defaultFonts);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1611);
			_la = _input.LA(1);
			if ( !(((((_la - 68)) & ~0x3f) == 0 && ((1L << (_la - 68)) & ((1L << (MONO15 - 68)) | (1L << (MONO20 - 68)) | (1L << (MONO25 - 68)) | (1L << (MONO30 - 68)) | (1L << (MONO35 - 68)) | (1L << (MONO40 - 68)) | (1L << (MONO50 - 68)) | (1L << (MONO75 - 68)) | (1L << (MONO100 - 68)) | (1L << (PROP15 - 68)) | (1L << (PROP20 - 68)) | (1L << (PROP25 - 68)) | (1L << (PROP30 - 68)) | (1L << (PROP35 - 68)) | (1L << (PROP40 - 68)) | (1L << (PROP50 - 68)) | (1L << (PROP75 - 68)) | (1L << (PROP100 - 68)) | (1L << (SERIF15 - 68)) | (1L << (SERIF20 - 68)) | (1L << (SERIF25 - 68)) | (1L << (SERIF30 - 68)) | (1L << (SERIF35 - 68)) | (1L << (SERIF40 - 68)) | (1L << (SERIF50 - 68)) | (1L << (SERIF75 - 68)) | (1L << (SERIF100 - 68)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 113:
			return strExpr_sempred((StrExprContext)_localctx, predIndex);
		case 115:
			return numExpr_sempred((NumExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean strExpr_sempred(StrExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 3);
		}
		return true;
	}
	private boolean numExpr_sempred(NumExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return precpred(_ctx, 9);
		case 2:
			return precpred(_ctx, 8);
		case 3:
			return precpred(_ctx, 7);
		case 4:
			return precpred(_ctx, 6);
		case 5:
			return precpred(_ctx, 5);
		case 6:
			return precpred(_ctx, 4);
		case 7:
			return precpred(_ctx, 2);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00e9\u0650\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4H\tH\4I"+
		"\tI\4J\tJ\4K\tK\4L\tL\4M\tM\4N\tN\4O\tO\4P\tP\4Q\tQ\4R\tR\4S\tS\4T\tT"+
		"\4U\tU\4V\tV\4W\tW\4X\tX\4Y\tY\4Z\tZ\4[\t[\4\\\t\\\4]\t]\4^\t^\4_\t_\4"+
		"`\t`\4a\ta\4b\tb\4c\tc\4d\td\4e\te\4f\tf\4g\tg\4h\th\4i\ti\4j\tj\4k\t"+
		"k\4l\tl\4m\tm\4n\tn\4o\to\4p\tp\4q\tq\4r\tr\4s\ts\4t\tt\4u\tu\4v\tv\4"+
		"w\tw\3\2\7\2\u00f0\n\2\f\2\16\2\u00f3\13\2\3\2\3\2\3\3\3\3\5\3\u00f9\n"+
		"\3\3\3\5\3\u00fc\n\3\3\3\3\3\5\3\u0100\n\3\3\3\6\3\u0103\n\3\r\3\16\3"+
		"\u0104\3\3\5\3\u0108\n\3\3\3\3\3\5\3\u010c\n\3\3\4\6\4\u010f\n\4\r\4\16"+
		"\4\u0110\3\5\7\5\u0114\n\5\f\5\16\5\u0117\13\5\3\6\7\6\u011a\n\6\f\6\16"+
		"\6\u011d\13\6\3\6\7\6\u0120\n\6\f\6\16\6\u0123\13\6\5\6\u0125\n\6\3\7"+
		"\3\7\3\b\3\b\3\b\3\b\3\b\3\b\5\b\u012f\n\b\3\t\3\t\3\t\3\t\3\t\3\t\3\t"+
		"\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3"+
		"\t\3\t\3\t\3\t\5\t\u014d\n\t\3\n\3\n\3\13\3\13\3\13\3\13\3\13\6\13\u0156"+
		"\n\13\r\13\16\13\u0157\3\13\5\13\u015b\n\13\3\13\3\13\5\13\u015f\n\13"+
		"\3\13\5\13\u0162\n\13\3\13\3\13\3\f\3\f\3\f\3\r\3\r\3\r\3\r\7\r\u016d"+
		"\n\r\f\r\16\r\u0170\13\r\3\16\5\16\u0173\n\16\3\16\3\16\3\16\3\16\7\16"+
		"\u0179\n\16\f\16\16\16\u017c\13\16\3\17\3\17\3\20\3\20\5\20\u0182\n\20"+
		"\3\21\3\21\3\21\3\21\5\21\u0188\n\21\3\21\3\21\3\21\5\21\u018d\n\21\3"+
		"\21\3\21\3\22\3\22\3\22\3\22\5\22\u0195\n\22\3\22\3\22\3\22\5\22\u019a"+
		"\n\22\3\22\3\22\3\23\3\23\5\23\u01a0\n\23\3\23\3\23\3\23\3\23\3\23\3\23"+
		"\3\23\5\23\u01a9\n\23\3\23\3\23\5\23\u01ad\n\23\3\23\3\23\3\24\3\24\5"+
		"\24\u01b3\n\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\5\24\u01bc\n\24\3\24"+
		"\3\24\3\25\3\25\3\25\5\25\u01c3\n\25\3\25\3\25\3\26\3\26\3\26\3\26\3\26"+
		"\5\26\u01cc\n\26\3\27\3\27\3\27\3\27\3\27\3\27\5\27\u01d4\n\27\3\27\3"+
		"\27\3\27\5\27\u01d9\n\27\3\27\5\27\u01dc\n\27\3\27\3\27\3\30\3\30\3\30"+
		"\3\31\3\31\3\31\3\32\3\32\3\32\3\33\5\33\u01ea\n\33\3\33\5\33\u01ed\n"+
		"\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\7\33\u01f7\n\33\f\33\16\33"+
		"\u01fa\13\33\3\34\3\34\3\34\3\35\3\35\3\35\5\35\u0202\n\35\3\35\3\35\3"+
		"\36\3\36\3\36\3\36\7\36\u020a\n\36\f\36\16\36\u020d\13\36\3\37\3\37\3"+
		" \3 \3 \3 \3 \3!\3!\3\"\3\"\3#\3#\3#\3#\3#\3#\7#\u0220\n#\f#\16#\u0223"+
		"\13#\3#\3#\3$\3$\3$\5$\u022a\n$\3$\3$\3$\3%\3%\3%\3%\5%\u0233\n%\3%\3"+
		"%\3&\3&\3&\3&\3&\3&\3&\5&\u023e\n&\3\'\3\'\5\'\u0242\n\'\3\'\3\'\5\'\u0246"+
		"\n\'\5\'\u0248\n\'\3\'\3\'\3\'\7\'\u024d\n\'\f\'\16\'\u0250\13\'\3(\3"+
		"(\5(\u0254\n(\3)\3)\3)\3)\3)\3)\3)\3*\3*\3*\3*\3*\3+\3+\3+\3+\3+\3,\3"+
		",\3-\3-\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3"+
		".\3.\3.\3.\5.\u0283\n.\3/\3/\3/\3/\3/\5/\u028a\n/\3\60\3\60\3\60\3\60"+
		"\3\60\3\61\3\61\3\61\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\63\3\63\3\63"+
		"\3\64\5\64\u029f\n\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\65"+
		"\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65"+
		"\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65"+
		"\5\65\u02c7\n\65\3\66\3\66\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67"+
		"\5\67\u02d4\n\67\38\38\38\38\38\38\38\38\38\58\u02df\n8\39\39\3:\3:\3"+
		";\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\5;\u02f3\n;\3<\3<\3=\3=\3=\3"+
		"=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\5=\u0306\n=\3>\3>\3>\3>\3>\3>\3>\3"+
		">\3>\3?\3?\3?\3?\3?\3?\3?\3?\3?\3?\3?\3?\3?\3?\3?\3?\3?\3?\3?\5?\u0324"+
		"\n?\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@"+
		"\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@"+
		"\3@\3@\5@\u0355\n@\3A\3A\3A\3A\3A\3B\3B\3B\3B\3B\3B\3B\3B\3B\3C\3C\3D"+
		"\3D\3D\3D\3D\3D\3D\3D\3D\3E\3E\3E\3E\3E\3E\3E\3E\3E\3F\3F\3F\3F\3F\3F"+
		"\3F\3F\3F\3G\3G\3H\3H\3H\3H\3H\3H\3H\3H\3H\3I\3I\3J\3J\3J\3J\3J\3J\3J"+
		"\3J\3J\3K\3K\3K\3L\3L\3M\3M\3M\3M\3M\3M\3M\3M\3M\3M\3M\3M\3M\3M\3N\3N"+
		"\3N\3N\3N\3N\3N\3N\3N\3N\3N\3N\3N\3N\3O\3O\3O\3O\3O\3O\3O\3O\3O\3P\3P"+
		"\3P\3P\3P\3P\3P\3P\3P\3Q\3Q\3Q\3Q\3Q\3R\3R\3R\3S\5S\u03d4\nS\3S\3S\3S"+
		"\3S\7S\u03da\nS\fS\16S\u03dd\13S\3S\3S\3S\3T\3T\3U\3U\5U\u03e6\nU\3V\3"+
		"V\3V\5V\u03eb\nV\3W\3W\3X\3X\3X\3X\3X\5X\u03f4\nX\3X\3X\3X\3X\3X\3X\3"+
		"X\5X\u03fd\nX\3X\3X\3X\3X\3X\3X\3X\3X\3X\3X\3X\3X\3X\3X\3X\3X\3X\5X\u0410"+
		"\nX\3X\3X\3X\3X\5X\u0416\nX\3X\3X\3X\3X\3X\3X\3X\3X\3X\5X\u0421\nX\3Y"+
		"\3Y\3Y\3Y\3Y\5Y\u0428\nY\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y"+
		"\5Y\u0439\nY\3Y\5Y\u043c\nY\3Z\3Z\3Z\5Z\u0441\nZ\3[\3[\5[\u0445\n[\3\\"+
		"\3\\\3]\3]\3^\3^\3_\3_\3`\3`\3`\3`\3`\3`\5`\u0455\n`\3`\3`\7`\u0459\n"+
		"`\f`\16`\u045c\13`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`"+
		"\3`\3`\3`\3`\3`\3`\3`\5`\u0476\n`\3a\3a\3a\3a\3a\7a\u047d\na\fa\16a\u0480"+
		"\13a\3a\3a\3a\3a\3a\3a\3a\3a\3a\5a\u048b\na\3b\3b\3b\7b\u0490\nb\fb\16"+
		"b\u0493\13b\3c\5c\u0496\nc\3c\3c\3d\3d\3d\7d\u049d\nd\fd\16d\u04a0\13"+
		"d\3e\3e\3e\7e\u04a5\ne\fe\16e\u04a8\13e\3f\3f\3f\7f\u04ad\nf\ff\16f\u04b0"+
		"\13f\3g\5g\u04b3\ng\3g\3g\3g\3g\3g\3g\3g\3g\5g\u04bd\ng\3h\6h\u04c0\n"+
		"h\rh\16h\u04c1\3i\3i\3i\5i\u04c7\ni\3j\5j\u04ca\nj\3j\5j\u04cd\nj\3j\3"+
		"j\3j\3j\7j\u04d3\nj\fj\16j\u04d6\13j\3j\5j\u04d9\nj\3k\3k\5k\u04dd\nk"+
		"\3l\3l\3l\3l\3l\3l\5l\u04e5\nl\3m\5m\u04e8\nm\3m\3m\3n\3n\3o\3o\3p\5p"+
		"\u04f1\np\3p\3p\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q"+
		"\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q"+
		"\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\5q\u0530\nq\3r"+
		"\3r\3s\3s\3s\3s\3s\3s\3s\3s\5s\u053c\ns\3s\3s\3s\7s\u0541\ns\fs\16s\u0544"+
		"\13s\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3"+
		"t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3"+
		"t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3"+
		"t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3"+
		"t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3"+
		"t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3"+
		"t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3"+
		"t\3t\3t\3t\3t\5t\u05ea\nt\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3"+
		"t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3"+
		"t\3t\3t\3t\3t\3t\5t\u0617\nt\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3"+
		"u\3u\3u\3u\3u\3u\3u\3u\3u\3u\5u\u0630\nu\3u\3u\3u\3u\3u\3u\3u\3u\3u\3"+
		"u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\7u\u0647\nu\fu\16u\u064a\13u\3v\3v"+
		"\3w\3w\3w\2\4\u00e4\u00e8x\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$"+
		"&(*,.\60\62\64\668:<>@BDFHJLNPRTVXZ\\^`bdfhjlnprtvxz|~\u0080\u0082\u0084"+
		"\u0086\u0088\u008a\u008c\u008e\u0090\u0092\u0094\u0096\u0098\u009a\u009c"+
		"\u009e\u00a0\u00a2\u00a4\u00a6\u00a8\u00aa\u00ac\u00ae\u00b0\u00b2\u00b4"+
		"\u00b6\u00b8\u00ba\u00bc\u00be\u00c0\u00c2\u00c4\u00c6\u00c8\u00ca\u00cc"+
		"\u00ce\u00d0\u00d2\u00d4\u00d6\u00d8\u00da\u00dc\u00de\u00e0\u00e2\u00e4"+
		"\u00e6\u00e8\u00ea\u00ec\2\16\4\2((\u00db\u00db\4\2\31\31\35\35\3\2\u008f"+
		"\u0090\3\2\u00de\u00e0\3\2\u00c3\u00c4\3\2\u00b6\u00bb\3\2\u00c5\u00c6"+
		"\3\2\u00c0\u00c1\3\2\u00c7\u00c8\3\2\u00bd\u00bf\3\2>E\3\2F`\2\u06ea\2"+
		"\u00f1\3\2\2\2\4\u010b\3\2\2\2\6\u010e\3\2\2\2\b\u0115\3\2\2\2\n\u0124"+
		"\3\2\2\2\f\u0126\3\2\2\2\16\u012e\3\2\2\2\20\u014c\3\2\2\2\22\u014e\3"+
		"\2\2\2\24\u0150\3\2\2\2\26\u0165\3\2\2\2\30\u0168\3\2\2\2\32\u0172\3\2"+
		"\2\2\34\u017d\3\2\2\2\36\u017f\3\2\2\2 \u0183\3\2\2\2\"\u0190\3\2\2\2"+
		"$\u019d\3\2\2\2&\u01b0\3\2\2\2(\u01bf\3\2\2\2*\u01c6\3\2\2\2,\u01cd\3"+
		"\2\2\2.\u01df\3\2\2\2\60\u01e2\3\2\2\2\62\u01e5\3\2\2\2\64\u01ec\3\2\2"+
		"\2\66\u01fb\3\2\2\28\u01fe\3\2\2\2:\u0205\3\2\2\2<\u020e\3\2\2\2>\u0210"+
		"\3\2\2\2@\u0215\3\2\2\2B\u0217\3\2\2\2D\u0219\3\2\2\2F\u0226\3\2\2\2H"+
		"\u022e\3\2\2\2J\u023d\3\2\2\2L\u023f\3\2\2\2N\u0251\3\2\2\2P\u0255\3\2"+
		"\2\2R\u025c\3\2\2\2T\u0261\3\2\2\2V\u0266\3\2\2\2X\u0268\3\2\2\2Z\u0282"+
		"\3\2\2\2\\\u0289\3\2\2\2^\u028b\3\2\2\2`\u0290\3\2\2\2b\u0293\3\2\2\2"+
		"d\u029a\3\2\2\2f\u029e\3\2\2\2h\u02c6\3\2\2\2j\u02c8\3\2\2\2l\u02d3\3"+
		"\2\2\2n\u02de\3\2\2\2p\u02e0\3\2\2\2r\u02e2\3\2\2\2t\u02f2\3\2\2\2v\u02f4"+
		"\3\2\2\2x\u0305\3\2\2\2z\u0307\3\2\2\2|\u0323\3\2\2\2~\u0354\3\2\2\2\u0080"+
		"\u0356\3\2\2\2\u0082\u035b\3\2\2\2\u0084\u0364\3\2\2\2\u0086\u0366\3\2"+
		"\2\2\u0088\u036f\3\2\2\2\u008a\u0378\3\2\2\2\u008c\u0381\3\2\2\2\u008e"+
		"\u0383\3\2\2\2\u0090\u038c\3\2\2\2\u0092\u038e\3\2\2\2\u0094\u0397\3\2"+
		"\2\2\u0096\u039a\3\2\2\2\u0098\u039c\3\2\2\2\u009a\u03aa\3\2\2\2\u009c"+
		"\u03b8\3\2\2\2\u009e\u03c1\3\2\2\2\u00a0\u03ca\3\2\2\2\u00a2\u03cf\3\2"+
		"\2\2\u00a4\u03d3\3\2\2\2\u00a6\u03e1\3\2\2\2\u00a8\u03e5\3\2\2\2\u00aa"+
		"\u03ea\3\2\2\2\u00ac\u03ec\3\2\2\2\u00ae\u0420\3\2\2\2\u00b0\u043b\3\2"+
		"\2\2\u00b2\u0440\3\2\2\2\u00b4\u0444\3\2\2\2\u00b6\u0446\3\2\2\2\u00b8"+
		"\u0448\3\2\2\2\u00ba\u044a\3\2\2\2\u00bc\u044c\3\2\2\2\u00be\u0475\3\2"+
		"\2\2\u00c0\u048a\3\2\2\2\u00c2\u048c\3\2\2\2\u00c4\u0495\3\2\2\2\u00c6"+
		"\u0499\3\2\2\2\u00c8\u04a1\3\2\2\2\u00ca\u04a9\3\2\2\2\u00cc\u04bc\3\2"+
		"\2\2\u00ce\u04bf\3\2\2\2\u00d0\u04c6\3\2\2\2\u00d2\u04c9\3\2\2\2\u00d4"+
		"\u04dc\3\2\2\2\u00d6\u04e4\3\2\2\2\u00d8\u04e7\3\2\2\2\u00da\u04eb\3\2"+
		"\2\2\u00dc\u04ed\3\2\2\2\u00de\u04f0\3\2\2\2\u00e0\u052f\3\2\2\2\u00e2"+
		"\u0531\3\2\2\2\u00e4\u053b\3\2\2\2\u00e6\u0616\3\2\2\2\u00e8\u062f\3\2"+
		"\2\2\u00ea\u064b\3\2\2\2\u00ec\u064d\3\2\2\2\u00ee\u00f0\5\4\3\2\u00ef"+
		"\u00ee\3\2\2\2\u00f0\u00f3\3\2\2\2\u00f1\u00ef\3\2\2\2\u00f1\u00f2\3\2"+
		"\2\2\u00f2\u00f4\3\2\2\2\u00f3\u00f1\3\2\2\2\u00f4\u00f5\7\2\2\3\u00f5"+
		"\3\3\2\2\2\u00f6\u010c\7\u00cf\2\2\u00f7\u00f9\5\f\7\2\u00f8\u00f7\3\2"+
		"\2\2\u00f8\u00f9\3\2\2\2\u00f9\u00fb\3\2\2\2\u00fa\u00fc\t\2\2\2\u00fb"+
		"\u00fa\3\2\2\2\u00fb\u00fc\3\2\2\2\u00fc\u00fd\3\2\2\2\u00fd\u010c\7\u00cf"+
		"\2\2\u00fe\u0100\5\f\7\2\u00ff\u00fe\3\2\2\2\u00ff\u0100\3\2\2\2\u0100"+
		"\u0102\3\2\2\2\u0101\u0103\5\16\b\2\u0102\u0101\3\2\2\2\u0103\u0104\3"+
		"\2\2\2\u0104\u0102\3\2\2\2\u0104\u0105\3\2\2\2\u0105\u0107\3\2\2\2\u0106"+
		"\u0108\t\2\2\2\u0107\u0106\3\2\2\2\u0107\u0108\3\2\2\2\u0108\u0109\3\2"+
		"\2\2\u0109\u010a\7\u00cf\2\2\u010a\u010c\3\2\2\2\u010b\u00f6\3\2\2\2\u010b"+
		"\u00f8\3\2\2\2\u010b\u00ff\3\2\2\2\u010c\5\3\2\2\2\u010d\u010f\5\4\3\2"+
		"\u010e\u010d\3\2\2\2\u010f\u0110\3\2\2\2\u0110\u010e\3\2\2\2\u0110\u0111"+
		"\3\2\2\2\u0111\7\3\2\2\2\u0112\u0114\5\16\b\2\u0113\u0112\3\2\2\2\u0114"+
		"\u0117\3\2\2\2\u0115\u0113\3\2\2\2\u0115\u0116\3\2\2\2\u0116\t\3\2\2\2"+
		"\u0117\u0115\3\2\2\2\u0118\u011a\5\16\b\2\u0119\u0118\3\2\2\2\u011a\u011d"+
		"\3\2\2\2\u011b\u0119\3\2\2\2\u011b\u011c\3\2\2\2\u011c\u0125\3\2\2\2\u011d"+
		"\u011b\3\2\2\2\u011e\u0120\5\4\3\2\u011f\u011e\3\2\2\2\u0120\u0123\3\2"+
		"\2\2\u0121\u011f\3\2\2\2\u0121\u0122\3\2\2\2\u0122\u0125\3\2\2\2\u0123"+
		"\u0121\3\2\2\2\u0124\u011b\3\2\2\2\u0124\u0121\3\2\2\2\u0125\13\3\2\2"+
		"\2\u0126\u0127\7\u00e7\2\2\u0127\r\3\2\2\2\u0128\u012f\7\u00d3\2\2\u0129"+
		"\u012f\5\20\t\2\u012a\u012f\5J&\2\u012b\u012f\5Z.\2\u012c\u012f\5\\/\2"+
		"\u012d\u012f\5h\65\2\u012e\u0128\3\2\2\2\u012e\u0129\3\2\2\2\u012e\u012a"+
		"\3\2\2\2\u012e\u012b\3\2\2\2\u012e\u012c\3\2\2\2\u012e\u012d\3\2\2\2\u012f"+
		"\17\3\2\2\2\u0130\u014d\5\22\n\2\u0131\u014d\5\24\13\2\u0132\u014d\5\26"+
		"\f\2\u0133\u014d\5\30\r\2\u0134\u014d\5\32\16\2\u0135\u014d\5\34\17\2"+
		"\u0136\u014d\5\36\20\2\u0137\u014d\5 \21\2\u0138\u014d\5\"\22\2\u0139"+
		"\u014d\5$\23\2\u013a\u014d\5&\24\2\u013b\u014d\5\60\31\2\u013c\u014d\5"+
		"\62\32\2\u013d\u014d\5*\26\2\u013e\u014d\5,\27\2\u013f\u014d\5.\30\2\u0140"+
		"\u014d\5\64\33\2\u0141\u014d\5\66\34\2\u0142\u014d\5(\25\2\u0143\u014d"+
		"\58\35\2\u0144\u014d\5:\36\2\u0145\u014d\5<\37\2\u0146\u014d\5> \2\u0147"+
		"\u014d\5@!\2\u0148\u014d\5B\"\2\u0149\u014d\5D#\2\u014a\u014d\5F$\2\u014b"+
		"\u014d\5H%\2\u014c\u0130\3\2\2\2\u014c\u0131\3\2\2\2\u014c\u0132\3\2\2"+
		"\2\u014c\u0133\3\2\2\2\u014c\u0134\3\2\2\2\u014c\u0135\3\2\2\2\u014c\u0136"+
		"\3\2\2\2\u014c\u0137\3\2\2\2\u014c\u0138\3\2\2\2\u014c\u0139\3\2\2\2\u014c"+
		"\u013a\3\2\2\2\u014c\u013b\3\2\2\2\u014c\u013c\3\2\2\2\u014c\u013d\3\2"+
		"\2\2\u014c\u013e\3\2\2\2\u014c\u013f\3\2\2\2\u014c\u0140\3\2\2\2\u014c"+
		"\u0141\3\2\2\2\u014c\u0142\3\2\2\2\u014c\u0143\3\2\2\2\u014c\u0144\3\2"+
		"\2\2\u014c\u0145\3\2\2\2\u014c\u0146\3\2\2\2\u014c\u0147\3\2\2\2\u014c"+
		"\u0148\3\2\2\2\u014c\u0149\3\2\2\2\u014c\u014a\3\2\2\2\u014c\u014b\3\2"+
		"\2\2\u014d\21\3\2\2\2\u014e\u014f\7\3\2\2\u014f\23\3\2\2\2\u0150\u0151"+
		"\7\4\2\2\u0151\u0152\5\u00d4k\2\u0152\u0153\7 \2\2\u0153\u0155\7\u00cf"+
		"\2\2\u0154\u0156\5\u00a4S\2\u0155\u0154\3\2\2\2\u0156\u0157\3\2\2\2\u0157"+
		"\u0155\3\2\2\2\u0157\u0158\3\2\2\2\u0158\u015e\3\2\2\2\u0159\u015b\5\f"+
		"\7\2\u015a\u0159\3\2\2\2\u015a\u015b\3\2\2\2\u015b\u015c\3\2\2\2\u015c"+
		"\u015d\7$\2\2\u015d\u015f\5\n\6\2\u015e\u015a\3\2\2\2\u015e\u015f\3\2"+
		"\2\2\u015f\u0161\3\2\2\2\u0160\u0162\5\f\7\2\u0161\u0160\3\2\2\2\u0161"+
		"\u0162\3\2\2\2\u0162\u0163\3\2\2\2\u0163\u0164\7\13\2\2\u0164\25\3\2\2"+
		"\2\u0165\u0166\7\5\2\2\u0166\u0167\5\u00e4s\2\u0167\27\3\2\2\2\u0168\u0169"+
		"\7\6\2\2\u0169\u016e\5\u00a8U\2\u016a\u016b\7\u00d4\2\2\u016b\u016d\5"+
		"\u00a8U\2\u016c\u016a\3\2\2\2\u016d\u0170\3\2\2\2\u016e\u016c\3\2\2\2"+
		"\u016e\u016f\3\2\2\2\u016f\31\3\2\2\2\u0170\u016e\3\2\2\2\u0171\u0173"+
		"\7\34\2\2\u0172\u0171\3\2\2\2\u0172\u0173\3\2\2\2\u0173\u0174\3\2\2\2"+
		"\u0174\u0175\7\b\2\2\u0175\u017a\5\u00c0a\2\u0176\u0177\7\u00d4\2\2\u0177"+
		"\u0179\5\u00c0a\2\u0178\u0176\3\2\2\2\u0179\u017c\3\2\2\2\u017a\u0178"+
		"\3\2\2\2\u017a\u017b\3\2\2\2\u017b\33\3\2\2\2\u017c\u017a\3\2\2\2\u017d"+
		"\u017e\7\n\2\2\u017e\35\3\2\2\2\u017f\u0181\7+\2\2\u0180\u0182\5\u00d4"+
		"k\2\u0181\u0180\3\2\2\2\u0181\u0182\3\2\2\2\u0182\37\3\2\2\2\u0183\u0184"+
		"\7\7\2\2\u0184\u0185\5\u00a6T\2\u0185\u0187\7\u00d6\2\2\u0186\u0188\5"+
		"\u00c6d\2\u0187\u0186\3\2\2\2\u0187\u0188\3\2\2\2\u0188\u0189\3\2\2\2"+
		"\u0189\u018a\7\u00d8\2\2\u018a\u018c\5\n\6\2\u018b\u018d\5\f\7\2\u018c"+
		"\u018b\3\2\2\2\u018c\u018d\3\2\2\2\u018d\u018e\3\2\2\2\u018e\u018f\7\r"+
		"\2\2\u018f!\3\2\2\2\u0190\u0191\7\7\2\2\u0191\u0192\7\u00dd\2\2\u0192"+
		"\u0194\7\u00d6\2\2\u0193\u0195\5\u00c6d\2\u0194\u0193\3\2\2\2\u0194\u0195"+
		"\3\2\2\2\u0195\u0196\3\2\2\2\u0196\u0197\7\u00d8\2\2\u0197\u0199\5\n\6"+
		"\2\u0198\u019a\5\f\7\2\u0199\u0198\3\2\2\2\u0199\u019a\3\2\2\2\u019a\u019b"+
		"\3\2\2\2\u019b\u019c\7\16\2\2\u019c#\3\2\2\2\u019d\u019f\7\21\2\2\u019e"+
		"\u01a0\7\34\2\2\u019f\u019e\3\2\2\2\u019f\u01a0\3\2\2\2\u01a0\u01a1\3"+
		"\2\2\2\u01a1\u01a2\5\u00b4[\2\u01a2\u01a3\7\u00b6\2\2\u01a3\u01a4\5\u00e8"+
		"u\2\u01a4\u01a5\7\60\2\2\u01a5\u01a8\5\u00e8u\2\u01a6\u01a7\7-\2\2\u01a7"+
		"\u01a9\5\u00e8u\2\u01a8\u01a6\3\2\2\2\u01a8\u01a9\3\2\2\2\u01a9\u01aa"+
		"\3\2\2\2\u01aa\u01ac\5\n\6\2\u01ab\u01ad\5\f\7\2\u01ac\u01ab\3\2\2\2\u01ac"+
		"\u01ad\3\2\2\2\u01ad\u01ae\3\2\2\2\u01ae\u01af\7\36\2\2\u01af%\3\2\2\2"+
		"\u01b0\u01b2\7\21\2\2\u01b1\u01b3\7\34\2\2\u01b2\u01b1\3\2\2\2\u01b2\u01b3"+
		"\3\2\2\2\u01b3\u01b4\3\2\2\2\u01b4\u01b5\5\u00b2Z\2\u01b5\u01b6\7\25\2"+
		"\2\u01b6\u01b7\5\u00b2Z\2\u01b7\u01b8\7\u00d6\2\2\u01b8\u01b9\7\u00d8"+
		"\2\2\u01b9\u01bb\5\n\6\2\u01ba\u01bc\5\f\7\2\u01bb\u01ba\3\2\2\2\u01bb"+
		"\u01bc\3\2\2\2\u01bc\u01bd\3\2\2\2\u01bd\u01be\7\36\2\2\u01be\'\3\2\2"+
		"\2\u01bf\u01c0\5\u00a6T\2\u01c0\u01c2\7\u00d6\2\2\u01c1\u01c3\5\u00c8"+
		"e\2\u01c2\u01c1\3\2\2\2\u01c2\u01c3\3\2\2\2\u01c3\u01c4\3\2\2\2\u01c4"+
		"\u01c5\7\u00d8\2\2\u01c5)\3\2\2\2\u01c6\u01c7\7\24\2\2\u01c7\u01c8\5\u00d4"+
		"k\2\u01c8\u01cb\5\b\5\2\u01c9\u01ca\7\t\2\2\u01ca\u01cc\5\b\5\2\u01cb"+
		"\u01c9\3\2\2\2\u01cb\u01cc\3\2\2\2\u01cc+\3\2\2\2\u01cd\u01ce\7\24\2\2"+
		"\u01ce\u01cf\5\u00d4k\2\u01cf\u01d0\7/\2\2\u01d0\u01d1\7\u00cf\2\2\u01d1"+
		"\u01d8\5\6\4\2\u01d2\u01d4\5\f\7\2\u01d3\u01d2\3\2\2\2\u01d3\u01d4\3\2"+
		"\2\2\u01d4\u01d5\3\2\2\2\u01d5\u01d6\7\t\2\2\u01d6\u01d7\7\u00cf\2\2\u01d7"+
		"\u01d9\5\6\4\2\u01d8\u01d3\3\2\2\2\u01d8\u01d9\3\2\2\2\u01d9\u01db\3\2"+
		"\2\2\u01da\u01dc\5\f\7\2\u01db\u01da\3\2\2\2\u01db\u01dc\3\2\2\2\u01dc"+
		"\u01dd\3\2\2\2\u01dd\u01de\7\f\2\2\u01de-\3\2\2\2\u01df\u01e0\7\26\2\2"+
		"\u01e0\u01e1\5\u00e4s\2\u01e1/\3\2\2\2\u01e2\u01e3\7\32\2\2\u01e3\u01e4"+
		"\7\u00e7\2\2\u01e4\61\3\2\2\2\u01e5\u01e6\7\33\2\2\u01e6\u01e7\7\u00e7"+
		"\2\2\u01e7\63\3\2\2\2\u01e8\u01ea\t\3\2\2\u01e9\u01e8\3\2\2\2\u01e9\u01ea"+
		"\3\2\2\2\u01ea\u01ed\3\2\2\2\u01eb\u01ed\7\34\2\2\u01ec\u01e9\3\2\2\2"+
		"\u01ec\u01eb\3\2\2\2\u01ed\u01ee\3\2\2\2\u01ee\u01ef\5\u00be`\2\u01ef"+
		"\u01f0\7\u00b6\2\2\u01f0\u01f8\5\u00d4k\2\u01f1\u01f2\7\u00d4\2\2\u01f2"+
		"\u01f3\5\u00be`\2\u01f3\u01f4\7\u00b6\2\2\u01f4\u01f5\5\u00d4k\2\u01f5"+
		"\u01f7\3\2\2\2\u01f6\u01f1\3\2\2\2\u01f7\u01fa\3\2\2\2\u01f8\u01f6\3\2"+
		"\2\2\u01f8\u01f9\3\2\2\2\u01f9\65\3\2\2\2\u01fa\u01f8\3\2\2\2\u01fb\u01fc"+
		"\7#\2\2\u01fc\u01fd\5\u00e4s\2\u01fd\67\3\2\2\2\u01fe\u01ff\7\u00dd\2"+
		"\2\u01ff\u0201\7\u00d6\2\2\u0200\u0202\5\u00c8e\2\u0201\u0200\3\2\2\2"+
		"\u0201\u0202\3\2\2\2\u0202\u0203\3\2\2\2\u0203\u0204\7\u00d8\2\2\u0204"+
		"9\3\2\2\2\u0205\u0206\7\'\2\2\u0206\u020b\5\u00be`\2\u0207\u0208\7\u00d4"+
		"\2\2\u0208\u020a\5\u00be`\2\u0209\u0207\3\2\2\2\u020a\u020d\3\2\2\2\u020b"+
		"\u0209\3\2\2\2\u020b\u020c\3\2\2\2\u020c;\3\2\2\2\u020d\u020b\3\2\2\2"+
		"\u020e\u020f\7*\2\2\u020f=\3\2\2\2\u0210\u0211\7.\2\2\u0211\u0212\5\u00b2"+
		"Z\2\u0212\u0213\7\u00d4\2\2\u0213\u0214\5\u00b2Z\2\u0214?\3\2\2\2\u0215"+
		"\u0216\7\62\2\2\u0216A\3\2\2\2\u0217\u0218\7\63\2\2\u0218C\3\2\2\2\u0219"+
		"\u021a\7\65\2\2\u021a\u021b\5\u00b6\\\2\u021b\u021c\7\u00d6\2\2\u021c"+
		"\u0221\5\u00b2Z\2\u021d\u021e\7\u00d4\2\2\u021e\u0220\5\u00b2Z\2\u021f"+
		"\u021d\3\2\2\2\u0220\u0223\3\2\2\2\u0221\u021f\3\2\2\2\u0221\u0222\3\2"+
		"\2\2\u0222\u0224\3\2\2\2\u0223\u0221\3\2\2\2\u0224\u0225\7\u00d8\2\2\u0225"+
		"E\3\2\2\2\u0226\u0227\7)\2\2\u0227\u0229\5\n\6\2\u0228\u022a\5\f\7\2\u0229"+
		"\u0228\3\2\2\2\u0229\u022a\3\2\2\2\u022a\u022b\3\2\2\2\u022b\u022c\7\66"+
		"\2\2\u022c\u022d\5\u00d4k\2\u022dG\3\2\2\2\u022e\u022f\78\2\2\u022f\u0230"+
		"\5\u00d4k\2\u0230\u0232\5\n\6\2\u0231\u0233\5\f\7\2\u0232\u0231\3\2\2"+
		"\2\u0232\u0233\3\2\2\2\u0233\u0234\3\2\2\2\u0234\u0235\7\17\2\2\u0235"+
		"I\3\2\2\2\u0236\u023e\5L\'\2\u0237\u023e\5N(\2\u0238\u023e\5P)\2\u0239"+
		"\u023e\5R*\2\u023a\u023e\5T+\2\u023b\u023e\5V,\2\u023c\u023e\5X-\2\u023d"+
		"\u0236\3\2\2\2\u023d\u0237\3\2\2\2\u023d\u0238\3\2\2\2\u023d\u0239\3\2"+
		"\2\2\u023d\u023a\3\2\2\2\u023d\u023b\3\2\2\2\u023d\u023c\3\2\2\2\u023e"+
		"K\3\2\2\2\u023f\u0241\7\30\2\2\u0240\u0242\7\34\2\2\u0241\u0240\3\2\2"+
		"\2\u0241\u0242\3\2\2\2\u0242\u0247\3\2\2\2\u0243\u0245\5\u00e4s\2\u0244"+
		"\u0246\7\u00d4\2\2\u0245\u0244\3\2\2\2\u0245\u0246\3\2\2\2\u0246\u0248"+
		"\3\2\2\2\u0247\u0243\3\2\2\2\u0247\u0248\3\2\2\2\u0248\u0249\3\2\2\2\u0249"+
		"\u024e\5\u00b2Z\2\u024a\u024b\7\u00d4\2\2\u024b\u024d\5\u00b2Z\2\u024c"+
		"\u024a\3\2\2\2\u024d\u0250\3\2\2\2\u024e\u024c\3\2\2\2\u024e\u024f\3\2"+
		"\2\2\u024fM\3\2\2\2\u0250\u024e\3\2\2\2\u0251\u0253\7%\2\2\u0252\u0254"+
		"\5\u00d2j\2\u0253\u0252\3\2\2\2\u0253\u0254\3\2\2\2\u0254O\3\2\2\2\u0255"+
		"\u0256\79\2\2\u0256\u0257\5\u00b8]\2\u0257\u0258\7\u00d4\2\2\u0258\u0259"+
		"\5\u00b8]\2\u0259\u025a\7\u00d4\2\2\u025a\u025b\5\u00b8]\2\u025bQ\3\2"+
		"\2\2\u025c\u025d\7:\2\2\u025d\u025e\7\u00d6\2\2\u025e\u025f\5\u00e8u\2"+
		"\u025f\u0260\7\u00d8\2\2\u0260S\3\2\2\2\u0261\u0262\7;\2\2\u0262\u0263"+
		"\7\u00d6\2\2\u0263\u0264\5\u00e8u\2\u0264\u0265\7\u00d8\2\2\u0265U\3\2"+
		"\2\2\u0266\u0267\7<\2\2\u0267W\3\2\2\2\u0268\u0269\7=\2\2\u0269Y\3\2\2"+
		"\2\u026a\u026b\5\u00be`\2\u026b\u026c\7\u00cb\2\2\u026c\u026d\5\u00e8"+
		"u\2\u026d\u0283\3\2\2\2\u026e\u026f\5\u00be`\2\u026f\u0270\7\u00cc\2\2"+
		"\u0270\u0271\5\u00e8u\2\u0271\u0283\3\2\2\2\u0272\u0273\5\u00be`\2\u0273"+
		"\u0274\7\u00c9\2\2\u0274\u0275\5\u00e8u\2\u0275\u0283\3\2\2\2\u0276\u0277"+
		"\5\u00be`\2\u0277\u0278\7\u00ca\2\2\u0278\u0279\5\u00e8u\2\u0279\u0283"+
		"\3\2\2\2\u027a\u027b\5\u00be`\2\u027b\u027c\7\u00cd\2\2\u027c\u027d\5"+
		"\u00e8u\2\u027d\u0283\3\2\2\2\u027e\u027f\5\u00be`\2\u027f\u0280\7\u00ce"+
		"\2\2\u0280\u0281\5\u00e8u\2\u0281\u0283\3\2\2\2\u0282\u026a\3\2\2\2\u0282"+
		"\u026e\3\2\2\2\u0282\u0272\3\2\2\2\u0282\u0276\3\2\2\2\u0282\u027a\3\2"+
		"\2\2\u0282\u027e\3\2\2\2\u0283[\3\2\2\2\u0284\u028a\5^\60\2\u0285\u028a"+
		"\5`\61\2\u0286\u028a\5b\62\2\u0287\u028a\5d\63\2\u0288\u028a\5f\64\2\u0289"+
		"\u0284\3\2\2\2\u0289\u0285\3\2\2\2\u0289\u0286\3\2\2\2\u0289\u0287\3\2"+
		"\2\2\u0289\u0288\3\2\2\2\u028a]\3\2\2\2\u028b\u028c\7o\2\2\u028c\u028d"+
		"\5\u00e8u\2\u028d\u028e\7\u00d4\2\2\u028e\u028f\5\u00e8u\2\u028f_\3\2"+
		"\2\2\u0290\u0291\7n\2\2\u0291\u0292\5\u00e8u\2\u0292a\3\2\2\2\u0293\u0294"+
		"\7w\2\2\u0294\u0295\7\u00d6\2\2\u0295\u0296\5\u00e8u\2\u0296\u0297\7\u00d8"+
		"\2\2\u0297\u0298\7\u00b6\2\2\u0298\u0299\5\u00e8u\2\u0299c\3\2\2\2\u029a"+
		"\u029b\7p\2\2\u029b\u029c\5\u00e8u\2\u029ce\3\2\2\2\u029d\u029f\7\34\2"+
		"\2\u029e\u029d\3\2\2\2\u029e\u029f\3\2\2\2\u029f\u02a0\3\2\2\2\u02a0\u02a1"+
		"\5\u00ba^\2\u02a1\u02a2\7\u00d6\2\2\u02a2\u02a3\7\u00d8\2\2\u02a3\u02a4"+
		"\7\u00b6\2\2\u02a4\u02a5\7s\2\2\u02a5\u02a6\7\u00d6\2\2\u02a6\u02a7\5"+
		"\u00e4s\2\u02a7\u02a8\7\u00d8\2\2\u02a8g\3\2\2\2\u02a9\u02c7\5j\66\2\u02aa"+
		"\u02c7\5l\67\2\u02ab\u02c7\5n8\2\u02ac\u02c7\5p9\2\u02ad\u02c7\5r:\2\u02ae"+
		"\u02c7\5t;\2\u02af\u02c7\5v<\2\u02b0\u02c7\5x=\2\u02b1\u02c7\5z>\2\u02b2"+
		"\u02c7\5|?\2\u02b3\u02c7\5~@\2\u02b4\u02c7\5\u0080A\2\u02b5\u02c7\5\u0082"+
		"B\2\u02b6\u02c7\5\u0084C\2\u02b7\u02c7\5\u0086D\2\u02b8\u02c7\5\u0088"+
		"E\2\u02b9\u02c7\5\u008aF\2\u02ba\u02c7\5\u008cG\2\u02bb\u02c7\5\u008e"+
		"H\2\u02bc\u02c7\5\u0090I\2\u02bd\u02c7\5\u0092J\2\u02be\u02c7\5\u0094"+
		"K\2\u02bf\u02c7\5\u0096L\2\u02c0\u02c7\5\u0098M\2\u02c1\u02c7\5\u009a"+
		"N\2\u02c2\u02c7\5\u009cO\2\u02c3\u02c7\5\u009eP\2\u02c4\u02c7\5\u00a0"+
		"Q\2\u02c5\u02c7\5\u00a2R\2\u02c6\u02a9\3\2\2\2\u02c6\u02aa\3\2\2\2\u02c6"+
		"\u02ab\3\2\2\2\u02c6\u02ac\3\2\2\2\u02c6\u02ad\3\2\2\2\u02c6\u02ae\3\2"+
		"\2\2\u02c6\u02af\3\2\2\2\u02c6\u02b0\3\2\2\2\u02c6\u02b1\3\2\2\2\u02c6"+
		"\u02b2\3\2\2\2\u02c6\u02b3\3\2\2\2\u02c6\u02b4\3\2\2\2\u02c6\u02b5\3\2"+
		"\2\2\u02c6\u02b6\3\2\2\2\u02c6\u02b7\3\2\2\2\u02c6\u02b8\3\2\2\2\u02c6"+
		"\u02b9\3\2\2\2\u02c6\u02ba\3\2\2\2\u02c6\u02bb\3\2\2\2\u02c6\u02bc\3\2"+
		"\2\2\u02c6\u02bd\3\2\2\2\u02c6\u02be\3\2\2\2\u02c6\u02bf\3\2\2\2\u02c6"+
		"\u02c0\3\2\2\2\u02c6\u02c1\3\2\2\2\u02c6\u02c2\3\2\2\2\u02c6\u02c3\3\2"+
		"\2\2\u02c6\u02c4\3\2\2\2\u02c6\u02c5\3\2\2\2\u02c7i\3\2\2\2\u02c8\u02c9"+
		"\7z\2\2\u02c9k\3\2\2\2\u02ca\u02cb\7}\2\2\u02cb\u02d4\5\u00e8u\2\u02cc"+
		"\u02cd\7}\2\2\u02cd\u02ce\5\u00e8u\2\u02ce\u02cf\7\u00d4\2\2\u02cf\u02d0"+
		"\5\u00e8u\2\u02d0\u02d1\7\u00d4\2\2\u02d1\u02d2\5\u00e8u\2\u02d2\u02d4"+
		"\3\2\2\2\u02d3\u02ca\3\2\2\2\u02d3\u02cc\3\2\2\2\u02d4m\3\2\2\2\u02d5"+
		"\u02d6\7~\2\2\u02d6\u02df\5\u00e8u\2\u02d7\u02d8\7~\2\2\u02d8\u02d9\5"+
		"\u00e8u\2\u02d9\u02da\7\u00d4\2\2\u02da\u02db\5\u00e8u\2\u02db\u02dc\7"+
		"\u00d4\2\2\u02dc\u02dd\5\u00e8u\2\u02dd\u02df\3\2\2\2\u02de\u02d5\3\2"+
		"\2\2\u02de\u02d7\3\2\2\2\u02dfo\3\2\2\2\u02e0\u02e1\7\u0080\2\2\u02e1"+
		"q\3\2\2\2\u02e2\u02e3\7\u0081\2\2\u02e3s\3\2\2\2\u02e4\u02f3\7\u0085\2"+
		"\2\u02e5\u02e6\7\u0085\2\2\u02e6\u02e7\5\u00e8u\2\u02e7\u02e8\7\u00d4"+
		"\2\2\u02e8\u02e9\5\u00e8u\2\u02e9\u02f3\3\2\2\2\u02ea\u02eb\7\u0085\2"+
		"\2\u02eb\u02f3\7x\2\2\u02ec\u02ed\7\u0085\2\2\u02ed\u02ee\7x\2\2\u02ee"+
		"\u02ef\5\u00e8u\2\u02ef\u02f0\7\u00d4\2\2\u02f0\u02f1\5\u00e8u\2\u02f1"+
		"\u02f3\3\2\2\2\u02f2\u02e4\3\2\2\2\u02f2\u02e5\3\2\2\2\u02f2\u02ea\3\2"+
		"\2\2\u02f2\u02ec\3\2\2\2\u02f3u\3\2\2\2\u02f4\u02f5\7\u0083\2\2\u02f5"+
		"w\3\2\2\2\u02f6\u02f7\7y\2\2\u02f7\u02f8\5\u00e8u\2\u02f8\u02f9\7\u00d4"+
		"\2\2\u02f9\u02fa\5\u00e8u\2\u02fa\u02fb\7\u00d4\2\2\u02fb\u02fc\5\u00e8"+
		"u\2\u02fc\u0306\3\2\2\2\u02fd\u02fe\7y\2\2\u02fe\u02ff\7\u0082\2\2\u02ff"+
		"\u0300\5\u00e8u\2\u0300\u0301\7\u00d4\2\2\u0301\u0302\5\u00e8u\2\u0302"+
		"\u0303\7\u00d4\2\2\u0303\u0304\5\u00e8u\2\u0304\u0306\3\2\2\2\u0305\u02f6"+
		"\3\2\2\2\u0305\u02fd\3\2\2\2\u0306y\3\2\2\2\u0307\u0308\7\u0086\2\2\u0308"+
		"\u0309\5\u00e8u\2\u0309\u030a\7\u00d4\2\2\u030a\u030b\5\u00e8u\2\u030b"+
		"\u030c\7\u00d4\2\2\u030c\u030d\5\u00e8u\2\u030d\u030e\7\u00d4\2\2\u030e"+
		"\u030f\5\u00e8u\2\u030f{\3\2\2\2\u0310\u0311\7\u0088\2\2\u0311\u0312\5"+
		"\u00e8u\2\u0312\u0313\7\u00d4\2\2\u0313\u0314\5\u00e8u\2\u0314\u0315\7"+
		"\u00d4\2\2\u0315\u0316\5\u00e8u\2\u0316\u0317\7\u00d4\2\2\u0317\u0318"+
		"\5\u00e8u\2\u0318\u0324\3\2\2\2\u0319\u031a\7\u0088\2\2\u031a\u031b\7"+
		"\u0082\2\2\u031b\u031c\5\u00e8u\2\u031c\u031d\7\u00d4\2\2\u031d\u031e"+
		"\5\u00e8u\2\u031e\u031f\7\u00d4\2\2\u031f\u0320\5\u00e8u\2\u0320\u0321"+
		"\7\u00d4\2\2\u0321\u0322\5\u00e8u\2\u0322\u0324\3\2\2\2\u0323\u0310\3"+
		"\2\2\2\u0323\u0319\3\2\2\2\u0324}\3\2\2\2\u0325\u0326\7\u0091\2\2\u0326"+
		"\u0327\5\u00e8u\2\u0327\u0328\7\u00d4\2\2\u0328\u0329\5\u00e8u\2\u0329"+
		"\u032a\7\u00d4\2\2\u032a\u032b\5\u00e8u\2\u032b\u032c\7\u00d4\2\2\u032c"+
		"\u032d\5\u00e8u\2\u032d\u032e\7\u00d4\2\2\u032e\u032f\5\u00e8u\2\u032f"+
		"\u0330\7\u00d4\2\2\u0330\u0331\5\u00e8u\2\u0331\u0355\3\2\2\2\u0332\u0333"+
		"\7\u0091\2\2\u0333\u0334\7\u0082\2\2\u0334\u0335\5\u00e8u\2\u0335\u0336"+
		"\7\u00d4\2\2\u0336\u0337\5\u00e8u\2\u0337\u0338\7\u00d4\2\2\u0338\u0339"+
		"\5\u00e8u\2\u0339\u033a\7\u00d4\2\2\u033a\u033b\5\u00e8u\2\u033b\u033c"+
		"\7\u00d4\2\2\u033c\u033d\5\u00e8u\2\u033d\u033e\7\u00d4\2\2\u033e\u033f"+
		"\5\u00e8u\2\u033f\u0355\3\2\2\2\u0340\u0341\7\u0091\2\2\u0341\u0342\7"+
		"l\2\2\u0342\u0343\5\u00e8u\2\u0343\u0344\7\u00d4\2\2\u0344\u0345\5\u00e8"+
		"u\2\u0345\u0346\7\u00d4\2\2\u0346\u0347\5\u00e8u\2\u0347\u0348\7\u00d4"+
		"\2\2\u0348\u0349\5\u00e8u\2\u0349\u034a\7\u00d4\2\2\u034a\u034b\5\u00e8"+
		"u\2\u034b\u034c\7\u00d4\2\2\u034c\u034d\5\u00e8u\2\u034d\u034e\7\u00d4"+
		"\2\2\u034e\u034f\5\u00e8u\2\u034f\u0350\7\u00d4\2\2\u0350\u0351\5\u00e8"+
		"u\2\u0351\u0352\7\u00d4\2\2\u0352\u0353\5\u00e8u\2\u0353\u0355\3\2\2\2"+
		"\u0354\u0325\3\2\2\2\u0354\u0332\3\2\2\2\u0354\u0340\3\2\2\2\u0355\177"+
		"\3\2\2\2\u0356\u0357\7\u0089\2\2\u0357\u0358\5\u00e8u\2\u0358\u0359\7"+
		"\u00d4\2\2\u0359\u035a\5\u00e8u\2\u035a\u0081\3\2\2\2\u035b\u035c\7{\2"+
		"\2\u035c\u035d\5\u00e8u\2\u035d\u035e\7\u00d4\2\2\u035e\u035f\5\u00e8"+
		"u\2\u035f\u0360\7\u00d4\2\2\u0360\u0361\5\u00e8u\2\u0361\u0362\7\u00d4"+
		"\2\2\u0362\u0363\5\u00e8u\2\u0363\u0083\3\2\2\2\u0364\u0365\7|\2\2\u0365"+
		"\u0085\3\2\2\2\u0366\u0367\7\u008d\2\2\u0367\u0368\5\u00e8u\2\u0368\u0369"+
		"\7\u00d4\2\2\u0369\u036a\5\u00e8u\2\u036a\u036b\7\u00d4\2\2\u036b\u036c"+
		"\5\u00e8u\2\u036c\u036d\7\u00d4\2\2\u036d\u036e\5\u00e4s\2\u036e\u0087"+
		"\3\2\2\2\u036f\u0370\7\u008e\2\2\u0370\u0371\5\u00e8u\2\u0371\u0372\7"+
		"\u00d4\2\2\u0372\u0373\5\u00e8u\2\u0373\u0374\7\u00d4\2\2\u0374\u0375"+
		"\5\u00e8u\2\u0375\u0376\7\u00d4\2\2\u0376\u0377\5\u00e4s\2\u0377\u0089"+
		"\3\2\2\2\u0378\u0379\t\4\2\2\u0379\u037a\5\u00e8u\2\u037a\u037b\7\u00d4"+
		"\2\2\u037b\u037c\5\u00e8u\2\u037c\u037d\7\u00d4\2\2\u037d\u037e\5\u00e8"+
		"u\2\u037e\u037f\7\u00d4\2\2\u037f\u0380\5\u00e4s\2\u0380\u008b\3\2\2\2"+
		"\u0381\u0382\7\u0084\2\2\u0382\u008d\3\2\2\2\u0383\u0384\7\u0096\2\2\u0384"+
		"\u0385\5\u00e8u\2\u0385\u0386\7\u00d4\2\2\u0386\u0387\5\u00e8u\2\u0387"+
		"\u0388\7\u00d4\2\2\u0388\u0389\5\u00e8u\2\u0389\u038a\7\u00d4\2\2\u038a"+
		"\u038b\5\u00e8u\2\u038b\u008f\3\2\2\2\u038c\u038d\7\u0097\2\2\u038d\u0091"+
		"\3\2\2\2\u038e\u038f\7\u0093\2\2\u038f\u0390\5\u00e8u\2\u0390\u0391\7"+
		"\u00d4\2\2\u0391\u0392\5\u00e8u\2\u0392\u0393\7\u00d4\2\2\u0393\u0394"+
		"\5\u00e8u\2\u0394\u0395\7\u00d4\2\2\u0395\u0396\5\u00e8u\2\u0396\u0093"+
		"\3\2\2\2\u0397\u0398\7\u0094\2\2\u0398\u0399\5\u00e8u\2\u0399\u0095\3"+
		"\2\2\2\u039a\u039b\7a\2\2\u039b\u0097\3\2\2\2\u039c\u039d\7b\2\2\u039d"+
		"\u039e\5\u00bc_\2\u039e\u039f\7\u00d6\2\2\u039f\u03a0\5\u00e8u\2\u03a0"+
		"\u03a1\7\u00d8\2\2\u03a1\u03a2\7\u00d4\2\2\u03a2\u03a3\5\u00e8u\2\u03a3"+
		"\u03a4\7\u00d4\2\2\u03a4\u03a5\5\u00e8u\2\u03a5\u03a6\7\u00d4\2\2\u03a6"+
		"\u03a7\5\u00e8u\2\u03a7\u03a8\7\u00d4\2\2\u03a8\u03a9\5\u00e8u\2\u03a9"+
		"\u0099\3\2\2\2\u03aa\u03ab\7c\2\2\u03ab\u03ac\5\u00bc_\2\u03ac\u03ad\7"+
		"\u00d6\2\2\u03ad\u03ae\5\u00e8u\2\u03ae\u03af\7\u00d8\2\2\u03af\u03b0"+
		"\7\u00d4\2\2\u03b0\u03b1\5\u00e8u\2\u03b1\u03b2\7\u00d4\2\2\u03b2\u03b3"+
		"\5\u00e8u\2\u03b3\u03b4\7\u00d4\2\2\u03b4\u03b5\5\u00e8u\2\u03b5\u03b6"+
		"\7\u00d4\2\2\u03b6\u03b7\5\u00e8u\2\u03b7\u009b\3\2\2\2\u03b8\u03b9\7"+
		"d\2\2\u03b9\u03ba\5\u00e8u\2\u03ba\u03bb\7\u00d4\2\2\u03bb\u03bc\5\u00e8"+
		"u\2\u03bc\u03bd\7\u00d4\2\2\u03bd\u03be\5\u00e8u\2\u03be\u03bf\7\u00d4"+
		"\2\2\u03bf\u03c0\5\u00e8u\2\u03c0\u009d\3\2\2\2\u03c1\u03c2\7e\2\2\u03c2"+
		"\u03c3\5\u00e8u\2\u03c3\u03c4\7\u00d4\2\2\u03c4\u03c5\5\u00e8u\2\u03c5"+
		"\u03c6\7\u00d4\2\2\u03c6\u03c7\5\u00e8u\2\u03c7\u03c8\7\u00d4\2\2\u03c8"+
		"\u03c9\5\u00e8u\2\u03c9\u009f\3\2\2\2\u03ca\u03cb\7f\2\2\u03cb\u03cc\5"+
		"\u00e8u\2\u03cc\u03cd\7\u00d4\2\2\u03cd\u03ce\5\u00e8u\2\u03ce\u00a1\3"+
		"\2\2\2\u03cf\u03d0\7g\2\2\u03d0\u03d1\5\u00e8u\2\u03d1\u00a3\3\2\2\2\u03d2"+
		"\u03d4\5\f\7\2\u03d3\u03d2\3\2\2\2\u03d3\u03d4\3\2\2\2\u03d4\u03d5\3\2"+
		"\2\2\u03d5\u03d6\7\67\2\2\u03d6\u03db\5\u00d4k\2\u03d7\u03d8\7\u00d4\2"+
		"\2\u03d8\u03da\5\u00d4k\2\u03d9\u03d7\3\2\2\2\u03da\u03dd\3\2\2\2\u03db"+
		"\u03d9\3\2\2\2\u03db\u03dc\3\2\2\2\u03dc\u03de\3\2\2\2\u03dd\u03db\3\2"+
		"\2\2\u03de\u03df\7\u00d3\2\2\u03df\u03e0\5\n\6\2\u03e0\u00a5\3\2\2\2\u03e1"+
		"\u03e2\t\5\2\2\u03e2\u00a7\3\2\2\2\u03e3\u03e6\5\u00d6l\2\u03e4\u03e6"+
		"\5\u00e2r\2\u03e5\u03e3\3\2\2\2\u03e5\u03e4\3\2\2\2\u03e6\u00a9\3\2\2"+
		"\2\u03e7\u03eb\5\u00aeX\2\u03e8\u03eb\5\u00b0Y\2\u03e9\u03eb\5\u00acW"+
		"\2\u03ea\u03e7\3\2\2\2\u03ea\u03e8\3\2\2\2\u03ea\u03e9\3\2\2\2\u03eb\u00ab"+
		"\3\2\2\2\u03ec\u03ed\5\u00bc_\2\u03ed\u00ad\3\2\2\2\u03ee\u03ef\5\u00b6"+
		"\\\2\u03ef\u03f0\7\u00d6\2\2\u03f0\u03f3\5\u00e8u\2\u03f1\u03f2\7\u00d4"+
		"\2\2\u03f2\u03f4\5\u00e8u\2\u03f3\u03f1\3\2\2\2\u03f3\u03f4\3\2\2\2\u03f4"+
		"\u03f5\3\2\2\2\u03f5\u03f6\7\u00d8\2\2\u03f6\u0421\3\2\2\2\u03f7\u03f8"+
		"\5\u00b8]\2\u03f8\u03f9\7\u00d6\2\2\u03f9\u03fc\5\u00e8u\2\u03fa\u03fb"+
		"\7\u00d4\2\2\u03fb\u03fd\5\u00e8u\2\u03fc\u03fa\3\2\2\2\u03fc\u03fd\3"+
		"\2\2\2\u03fd\u03fe\3\2\2\2\u03fe\u03ff\7\u00d8\2\2\u03ff\u0421\3\2\2\2"+
		"\u0400\u0401\5\u00acW\2\u0401\u0402\7\u00d6\2\2\u0402\u0403\5\u00e8u\2"+
		"\u0403\u0404\7\u00d8\2\2\u0404\u0405\5\u00b8]\2\u0405\u0421\3\2\2\2\u0406"+
		"\u0407\5\u00acW\2\u0407\u0408\7\u00d6\2\2\u0408\u0409\5\u00e8u\2\u0409"+
		"\u040a\7\u00d8\2\2\u040a\u040b\5\u00b6\\\2\u040b\u0421\3\2\2\2\u040c\u040d"+
		"\7\u00df\2\2\u040d\u040f\7\u00d6\2\2\u040e\u0410\5\u00c8e\2\u040f\u040e"+
		"\3\2\2\2\u040f\u0410\3\2\2\2\u0410\u0411\3\2\2\2\u0411\u0421\7\u00d8\2"+
		"\2\u0412\u0413\7\u00de\2\2\u0413\u0415\7\u00d6\2\2\u0414\u0416\5\u00c8"+
		"e\2\u0415\u0414\3\2\2\2\u0415\u0416\3\2\2\2\u0416\u0417\3\2\2\2\u0417"+
		"\u0421\7\u00d8\2\2\u0418\u0421\5\u00b6\\\2\u0419\u0421\5\u00b8]\2\u041a"+
		"\u041b\5\u00acW\2\u041b\u041c\5\u00b6\\\2\u041c\u0421\3\2\2\2\u041d\u041e"+
		"\5\u00acW\2\u041e\u041f\5\u00b8]\2\u041f\u0421\3\2\2\2\u0420\u03ee\3\2"+
		"\2\2\u0420\u03f7\3\2\2\2\u0420\u0400\3\2\2\2\u0420\u0406\3\2\2\2\u0420"+
		"\u040c\3\2\2\2\u0420\u0412\3\2\2\2\u0420\u0418\3\2\2\2\u0420\u0419\3\2"+
		"\2\2\u0420\u041a\3\2\2\2\u0420\u041d\3\2\2\2\u0421\u00af\3\2\2\2\u0422"+
		"\u0423\5\u00ba^\2\u0423\u0424\7\u00d6\2\2\u0424\u0427\5\u00e8u\2\u0425"+
		"\u0426\7\u00d4\2\2\u0426\u0428\5\u00e8u\2\u0427\u0425\3\2\2\2\u0427\u0428"+
		"\3\2\2\2\u0428\u0429\3\2\2\2\u0429\u042a\7\u00d8\2\2\u042a\u043c\3\2\2"+
		"\2\u042b\u042c\5\u00acW\2\u042c\u042d\7\u00d6\2\2\u042d\u042e\5\u00e8"+
		"u\2\u042e\u042f\7\u00d8\2\2\u042f\u0430\5\u00ba^\2\u0430\u043c\3\2\2\2"+
		"\u0431\u043c\5\u00ba^\2\u0432\u0433\5\u00acW\2\u0433\u0434\5\u00ba^\2"+
		"\u0434\u043c\3\2\2\2\u0435\u0436\7\u00e0\2\2\u0436\u0438\7\u00d6\2\2\u0437"+
		"\u0439\5\u00c8e\2\u0438\u0437\3\2\2\2\u0438\u0439\3\2\2\2\u0439\u043a"+
		"\3\2\2\2\u043a\u043c\7\u00d8\2\2\u043b\u0422\3\2\2\2\u043b\u042b\3\2\2"+
		"\2\u043b\u0431\3\2\2\2\u043b\u0432\3\2\2\2\u043b\u0435\3\2\2\2\u043c\u00b1"+
		"\3\2\2\2\u043d\u0441\5\u00b6\\\2\u043e\u0441\5\u00b8]\2\u043f\u0441\5"+
		"\u00ba^\2\u0440\u043d\3\2\2\2\u0440\u043e\3\2\2\2\u0440\u043f\3\2\2\2"+
		"\u0441\u00b3\3\2\2\2\u0442\u0445\5\u00b6\\\2\u0443\u0445\5\u00b8]\2\u0444"+
		"\u0442\3\2\2\2\u0444\u0443\3\2\2\2\u0445\u00b5\3\2\2\2\u0446\u0447\7\u00e1"+
		"\2\2\u0447\u00b7\3\2\2\2\u0448\u0449\7\u00e2\2\2\u0449\u00b9\3\2\2\2\u044a"+
		"\u044b\7\u00e3\2\2\u044b\u00bb\3\2\2\2\u044c\u044d\7\u00e4\2\2\u044d\u00bd"+
		"\3\2\2\2\u044e\u0476\5\u00b2Z\2\u044f\u045a\5\u00b2Z\2\u0450\u0451\7\u00d6"+
		"\2\2\u0451\u0454\5\u00e8u\2\u0452\u0453\7\u00d4\2\2\u0453\u0455\5\u00e8"+
		"u\2\u0454\u0452\3\2\2\2\u0454\u0455\3\2\2\2\u0455\u0456\3\2\2\2\u0456"+
		"\u0457\7\u00d8\2\2\u0457\u0459\3\2\2\2\u0458\u0450\3\2\2\2\u0459\u045c"+
		"\3\2\2\2\u045a\u0458\3\2\2\2\u045a\u045b\3\2\2\2\u045b\u0476\3\2\2\2\u045c"+
		"\u045a\3\2\2\2\u045d\u045e\5\u00acW\2\u045e\u045f\5\u00b6\\\2\u045f\u0476"+
		"\3\2\2\2\u0460\u0461\5\u00acW\2\u0461\u0462\5\u00b8]\2\u0462\u0476\3\2"+
		"\2\2\u0463\u0464\5\u00acW\2\u0464\u0465\7\u00d6\2\2\u0465\u0466\5\u00e8"+
		"u\2\u0466\u0467\7\u00d8\2\2\u0467\u0468\5\u00b6\\\2\u0468\u0476\3\2\2"+
		"\2\u0469\u046a\5\u00acW\2\u046a\u046b\7\u00d6\2\2\u046b\u046c\5\u00e8"+
		"u\2\u046c\u046d\7\u00d8\2\2\u046d\u046e\5\u00b8]\2\u046e\u0476\3\2\2\2"+
		"\u046f\u0476\5\u00acW\2\u0470\u0471\5\u00acW\2\u0471\u0472\7\u00d6\2\2"+
		"\u0472\u0473\5\u00e8u\2\u0473\u0474\7\u00d8\2\2\u0474\u0476\3\2\2\2\u0475"+
		"\u044e\3\2\2\2\u0475\u044f\3\2\2\2\u0475\u045d\3\2\2\2\u0475\u0460\3\2"+
		"\2\2\u0475\u0463\3\2\2\2\u0475\u0469\3\2\2\2\u0475\u046f\3\2\2\2\u0475"+
		"\u0470\3\2\2\2\u0476\u00bf\3\2\2\2\u0477\u0478\5\u00b2Z\2\u0478\u0479"+
		"\7\u00d6\2\2\u0479\u047e\5\u00e8u\2\u047a\u047b\7\u00d4\2\2\u047b\u047d"+
		"\5\u00e8u\2\u047c\u047a\3\2\2\2\u047d\u0480\3\2\2\2\u047e\u047c\3\2\2"+
		"\2\u047e\u047f\3\2\2\2\u047f\u0481\3\2\2\2\u0480\u047e\3\2\2\2\u0481\u0482"+
		"\7\u00d8\2\2\u0482\u048b\3\2\2\2\u0483\u0484\5\u00acW\2\u0484\u0485\7"+
		"\u00d6\2\2\u0485\u0486\5\u00e8u\2\u0486\u0487\7\u00d4\2\2\u0487\u0488"+
		"\5\u00b6\\\2\u0488\u0489\7\u00d8\2\2\u0489\u048b\3\2\2\2\u048a\u0477\3"+
		"\2\2\2\u048a\u0483\3\2\2\2\u048b\u00c1\3\2\2\2\u048c\u0491\5\u00be`\2"+
		"\u048d\u048e\7\u00d4\2\2\u048e\u0490\5\u00be`\2\u048f\u048d\3\2\2\2\u0490"+
		"\u0493\3\2\2\2\u0491\u048f\3\2\2\2\u0491\u0492\3\2\2\2\u0492\u00c3\3\2"+
		"\2\2\u0493\u0491\3\2\2\2\u0494\u0496\7+\2\2\u0495\u0494\3\2\2\2\u0495"+
		"\u0496\3\2\2\2\u0496\u0497\3\2\2\2\u0497\u0498\5\u00b2Z\2\u0498\u00c5"+
		"\3\2\2\2\u0499\u049e\5\u00c4c\2\u049a\u049b\7\u00d4\2\2\u049b\u049d\5"+
		"\u00c4c\2\u049c\u049a\3\2\2\2\u049d\u04a0\3\2\2\2\u049e\u049c\3\2\2\2"+
		"\u049e\u049f\3\2\2\2\u049f\u00c7\3\2\2\2\u04a0\u049e\3\2\2\2\u04a1\u04a6"+
		"\5\u00d4k\2\u04a2\u04a3\7\u00d4\2\2\u04a3\u04a5\5\u00d4k\2\u04a4\u04a2"+
		"\3\2\2\2\u04a5\u04a8\3\2\2\2\u04a6\u04a4\3\2\2\2\u04a6\u04a7\3\2\2\2\u04a7"+
		"\u00c9\3\2\2\2\u04a8\u04a6\3\2\2\2\u04a9\u04ae\5\u00d4k\2\u04aa\u04ab"+
		"\7\u00d4\2\2\u04ab\u04ad\5\u00d4k\2\u04ac\u04aa\3\2\2\2\u04ad\u04b0\3"+
		"\2\2\2\u04ae\u04ac\3\2\2\2\u04ae\u04af\3\2\2\2\u04af\u00cb\3\2\2\2\u04b0"+
		"\u04ae\3\2\2\2\u04b1\u04b3\7\u00d1\2\2\u04b2\u04b1\3\2\2\2\u04b2\u04b3"+
		"\3\2\2\2\u04b3\u04b4\3\2\2\2\u04b4\u04bd\5\u00d4k\2\u04b5\u04b6\7,\2\2"+
		"\u04b6\u04b7\7\u00d6\2\2\u04b7\u04b8\5\u00e8u\2\u04b8\u04b9\7\u00d8\2"+
		"\2\u04b9\u04bd\3\2\2\2\u04ba\u04bb\7,\2\2\u04bb\u04bd\5\u00e8u\2\u04bc"+
		"\u04b2\3\2\2\2\u04bc\u04b5\3\2\2\2\u04bc\u04ba\3\2\2\2\u04bd\u00cd\3\2"+
		"\2\2\u04be\u04c0\7\u00d0\2\2\u04bf\u04be\3\2\2\2\u04c0\u04c1\3\2\2\2\u04c1"+
		"\u04bf\3\2\2\2\u04c1\u04c2\3\2\2\2\u04c2\u00cf\3\2\2\2\u04c3\u04c7\7\u00d4"+
		"\2\2\u04c4\u04c7\7\u00d9\2\2\u04c5\u04c7\5\u00ceh\2\u04c6\u04c3\3\2\2"+
		"\2\u04c6\u04c4\3\2\2\2\u04c6\u04c5\3\2\2\2\u04c7\u00d1\3\2\2\2\u04c8\u04ca"+
		"\5\u00ceh\2\u04c9\u04c8\3\2\2\2\u04c9\u04ca\3\2\2\2\u04ca\u04cc\3\2\2"+
		"\2\u04cb\u04cd\7\u00d9\2\2\u04cc\u04cb\3\2\2\2\u04cc\u04cd\3\2\2\2\u04cd"+
		"\u04ce\3\2\2\2\u04ce\u04d4\5\u00ccg\2\u04cf\u04d0\5\u00d0i\2\u04d0\u04d1"+
		"\5\u00ccg\2\u04d1\u04d3\3\2\2\2\u04d2\u04cf\3\2\2\2\u04d3\u04d6\3\2\2"+
		"\2\u04d4\u04d2\3\2\2\2\u04d4\u04d5\3\2\2\2\u04d5\u04d8\3\2\2\2\u04d6\u04d4"+
		"\3\2\2\2\u04d7\u04d9\7\u00d9\2\2\u04d8\u04d7\3\2\2\2\u04d8\u04d9\3\2\2"+
		"\2\u04d9\u00d3\3\2\2\2\u04da\u04dd\5\u00e8u\2\u04db\u04dd\5\u00e4s\2\u04dc"+
		"\u04da\3\2\2\2\u04dc\u04db\3\2\2\2\u04dd\u00d5\3\2\2\2\u04de\u04e5\5\u00d8"+
		"m\2\u04df\u04e5\5\u00dep\2\u04e0\u04e5\5\u00dan\2\u04e1\u04e5\5\u00dc"+
		"o\2\u04e2\u04e5\5\u00eav\2\u04e3\u04e5\5\u00ecw\2\u04e4\u04de\3\2\2\2"+
		"\u04e4\u04df\3\2\2\2\u04e4\u04e0\3\2\2\2\u04e4\u04e1\3\2\2\2\u04e4\u04e2"+
		"\3\2\2\2\u04e4\u04e3\3\2\2\2\u04e5\u00d7\3\2\2\2\u04e6\u04e8\t\6\2\2\u04e7"+
		"\u04e6\3\2\2\2\u04e7\u04e8\3\2\2\2\u04e8\u04e9\3\2\2\2\u04e9\u04ea\7\u00e7"+
		"\2\2\u04ea\u00d9\3\2\2\2\u04eb\u04ec\7\u00e5\2\2\u04ec\u00db\3\2\2\2\u04ed"+
		"\u04ee\7\u00e6\2\2\u04ee\u00dd\3\2\2\2\u04ef\u04f1\t\6\2\2\u04f0\u04ef"+
		"\3\2\2\2\u04f0\u04f1\3\2\2\2\u04f1\u04f2\3\2\2\2\u04f2\u04f3\7\u00e8\2"+
		"\2\u04f3\u00df\3\2\2\2\u04f4\u0530\7\u00ac\2\2\u04f5\u04f6\7\u00af\2\2"+
		"\u04f6\u04f7\7\u00d6\2\2\u04f7\u04f8\5\u00e8u\2\u04f8\u04f9\7\u00d8\2"+
		"\2\u04f9\u0530\3\2\2\2\u04fa\u04fb\7\u00b0\2\2\u04fb\u04fc\7\u00d6\2\2"+
		"\u04fc\u04fd\5\u00e4s\2\u04fd\u04fe\7\u00d4\2\2\u04fe\u04ff\5\u00e8u\2"+
		"\u04ff\u0500\7\u00d8\2\2\u0500\u0530\3\2\2\2\u0501\u0502\7\u00b1\2\2\u0502"+
		"\u0503\7\u00d6\2\2\u0503\u0504\5\u00e4s\2\u0504\u0505\7\u00d4\2\2\u0505"+
		"\u0506\5\u00e8u\2\u0506\u0507\7\u00d4\2\2\u0507\u0508\5\u00e8u\2\u0508"+
		"\u0509\7\u00d8\2\2\u0509\u0530\3\2\2\2\u050a\u050b\7\u00b1\2\2\u050b\u050c"+
		"\7\u00d6\2\2\u050c\u050d\5\u00e4s\2\u050d\u050e\7\u00d4\2\2\u050e\u050f"+
		"\5\u00e8u\2\u050f\u0510\7\u00d8\2\2\u0510\u0530\3\2\2\2\u0511\u0512\7"+
		"\u00b2\2\2\u0512\u0513\7\u00d6\2\2\u0513\u0514\5\u00e4s\2\u0514\u0515"+
		"\7\u00d4\2\2\u0515\u0516\5\u00e8u\2\u0516\u0517\7\u00d8\2\2\u0517\u0530"+
		"\3\2\2\2\u0518\u0519\7\u00ad\2\2\u0519\u051a\7\u00d6\2\2\u051a\u051b\5"+
		"\u00e8u\2\u051b\u051c\7\u00d8\2\2\u051c\u0530\3\2\2\2\u051d\u051e\7\u00ad"+
		"\2\2\u051e\u051f\7\u00d1\2\2\u051f\u0520\7\u00d6\2\2\u0520\u0521\5\u00e8"+
		"u\2\u0521\u0522\7\u00d8\2\2\u0522\u0530\3\2\2\2\u0523\u0524\7\u00ae\2"+
		"\2\u0524\u0525\7\u00d6\2\2\u0525\u0526\5\u00e8u\2\u0526\u0527\7\u00d4"+
		"\2\2\u0527\u0528\5\u00e4s\2\u0528\u0529\7\u00d8\2\2\u0529\u0530\3\2\2"+
		"\2\u052a\u052b\7;\2\2\u052b\u0530\5\u00e8u\2\u052c\u0530\7=\2\2\u052d"+
		"\u052e\7r\2\2\u052e\u0530\5\u00e8u\2\u052f\u04f4\3\2\2\2\u052f\u04f5\3"+
		"\2\2\2\u052f\u04fa\3\2\2\2\u052f\u0501\3\2\2\2\u052f\u050a\3\2\2\2\u052f"+
		"\u0511\3\2\2\2\u052f\u0518\3\2\2\2\u052f\u051d\3\2\2\2\u052f\u0523\3\2"+
		"\2\2\u052f\u052a\3\2\2\2\u052f\u052c\3\2\2\2\u052f\u052d\3\2\2\2\u0530"+
		"\u00e1\3\2\2\2\u0531\u0532\7\u00dc\2\2\u0532\u00e3\3\2\2\2\u0533\u0534"+
		"\bs\1\2\u0534\u0535\7\u00d6\2\2\u0535\u0536\5\u00e4s\2\u0536\u0537\7\u00d8"+
		"\2\2\u0537\u053c\3\2\2\2\u0538\u053c\5\u00e0q\2\u0539\u053c\5\u00b0Y\2"+
		"\u053a\u053c\5\u00e2r\2\u053b\u0533\3\2\2\2\u053b\u0538\3\2\2\2\u053b"+
		"\u0539\3\2\2\2\u053b\u053a\3\2\2\2\u053c\u0542\3\2\2\2\u053d\u053e\f\5"+
		"\2\2\u053e\u053f\7\u00c3\2\2\u053f\u0541\5\u00e4s\6\u0540\u053d\3\2\2"+
		"\2\u0541\u0544\3\2\2\2\u0542\u0540\3\2\2\2\u0542\u0543\3\2\2\2\u0543\u00e5"+
		"\3\2\2\2\u0544\u0542\3\2\2\2\u0545\u0617\7\u0099\2\2\u0546\u0617\7\20"+
		"\2\2\u0547\u0617\7\64\2\2\u0548\u0617\7\u0098\2\2\u0549\u054a\7\u00b3"+
		"\2\2\u054a\u054b\7\u00d6\2\2\u054b\u054c\5\u00e8u\2\u054c\u054d\7\u00d8"+
		"\2\2\u054d\u0617\3\2\2\2\u054e\u0617\7\u00b3\2\2\u054f\u0617\7\u00b4\2"+
		"\2\u0550\u0617\7\u00b5\2\2\u0551\u0552\7\u009b\2\2\u0552\u0553\7\u00d6"+
		"\2\2\u0553\u0554\5\u00e8u\2\u0554\u0555\7\u00d8\2\2\u0555\u0617\3\2\2"+
		"\2\u0556\u0557\7\u009c\2\2\u0557\u0558\7\u00d6\2\2\u0558\u0559\5\u00e8"+
		"u\2\u0559\u055a\7\u00d8\2\2\u055a\u0617\3\2\2\2\u055b\u055c\7\u009d\2"+
		"\2\u055c\u055d\7\u00d6\2\2\u055d\u055e\5\u00e8u\2\u055e\u055f\7\u00d8"+
		"\2\2\u055f\u0617\3\2\2\2\u0560\u0561\7\u009e\2\2\u0561\u0562\7\u00d6\2"+
		"\2\u0562\u0563\5\u00e8u\2\u0563\u0564\7\u00d8\2\2\u0564\u0617\3\2\2\2"+
		"\u0565\u0566\7\u009f\2\2\u0566\u0567\7\u00d6\2\2\u0567\u0568\5\u00e8u"+
		"\2\u0568\u0569\7\u00d8\2\2\u0569\u0617\3\2\2\2\u056a\u056b\7\u00a0\2\2"+
		"\u056b\u056c\7\u00d6\2\2\u056c\u056d\5\u00e8u\2\u056d\u056e\7\u00d8\2"+
		"\2\u056e\u0617\3\2\2\2\u056f\u0570\7\u00a1\2\2\u0570\u0571\7\u00d6\2\2"+
		"\u0571\u0572\5\u00e8u\2\u0572\u0573\7\u00d8\2\2\u0573\u0617\3\2\2\2\u0574"+
		"\u0575\7\u00a2\2\2\u0575\u0576\7\u00d6\2\2\u0576\u0577\5\u00e8u\2\u0577"+
		"\u0578\7\u00d8\2\2\u0578\u0617\3\2\2\2\u0579\u057a\7\u00a3\2\2\u057a\u057b"+
		"\7\u00d6\2\2\u057b\u057c\5\u00e8u\2\u057c\u057d\7\u00d8\2\2\u057d\u0617"+
		"\3\2\2\2\u057e\u057f\7\u00a4\2\2\u057f\u0580\7\u00d6\2\2\u0580\u0581\5"+
		"\u00e8u\2\u0581\u0582\7\u00d8\2\2\u0582\u0617\3\2\2\2\u0583\u0584\7\u00a5"+
		"\2\2\u0584\u0585\7\u00d6\2\2\u0585\u0586\5\u00e8u\2\u0586\u0587\7\u00d8"+
		"\2\2\u0587\u0617\3\2\2\2\u0588\u0589\7\u00a6\2\2\u0589\u058a\7\u00d6\2"+
		"\2\u058a\u058b\5\u00e8u\2\u058b\u058c\7\u00d8\2\2\u058c\u0617\3\2\2\2"+
		"\u058d\u058e\7\u009a\2\2\u058e\u058f\7\u00d6\2\2\u058f\u0590\5\u00e8u"+
		"\2\u0590\u0591\7\u00d8\2\2\u0591\u0617\3\2\2\2\u0592\u0593\7\u00a7\2\2"+
		"\u0593\u0594\7\u00d6\2\2\u0594\u0595\5\u00e8u\2\u0595\u0596\7\u00d8\2"+
		"\2\u0596\u0617\3\2\2\2\u0597\u0617\7<\2\2\u0598\u0599\7:\2\2\u0599\u059a"+
		"\7\u00d6\2\2\u059a\u059b\5\u00e8u\2\u059b\u059c\7\u00d8\2\2\u059c\u0617"+
		"\3\2\2\2\u059d\u059e\7\27\2\2\u059e\u059f\7\u00d6\2\2\u059f\u05a0\5\u00e8"+
		"u\2\u05a0\u05a1\7\u00d8\2\2\u05a1\u0617\3\2\2\2\u05a2\u05a3\7\22\2\2\u05a3"+
		"\u05a4\7\u00d6\2\2\u05a4\u05a5\5\u00e8u\2\u05a5\u05a6\7\u00d8\2\2\u05a6"+
		"\u0617\3\2\2\2\u05a7\u0617\7\u008b\2\2\u05a8\u0617\7\u008c\2\2\u05a9\u05aa"+
		"\7\u008a\2\2\u05aa\u05ab\7\u00d6\2\2\u05ab\u05ac\5\u00e8u\2\u05ac\u05ad"+
		"\7\u00d4\2\2\u05ad\u05ae\5\u00e8u\2\u05ae\u05af\7\u00d8\2\2\u05af\u0617"+
		"\3\2\2\2\u05b0\u05b1\7}\2\2\u05b1\u05b2\7\u00d6\2\2\u05b2\u05b3\5\u00e8"+
		"u\2\u05b3\u05b4\7\u00d4\2\2\u05b4\u05b5\5\u00e8u\2\u05b5\u05b6\7\u00d4"+
		"\2\2\u05b6\u05b7\5\u00e8u\2\u05b7\u05b8\7\u00d8\2\2\u05b8\u0617\3\2\2"+
		"\2\u05b9\u05ba\7\u0087\2\2\u05ba\u0617\5\u00e4s\2\u05bb\u05bc\7\177\2"+
		"\2\u05bc\u05bd\5\u00e8u\2\u05bd\u05be\7\u00d4\2\2\u05be\u05bf\5\u00e8"+
		"u\2\u05bf\u0617\3\2\2\2\u05c0\u05c1\7\u0095\2\2\u05c1\u05c2\7\u00d6\2"+
		"\2\u05c2\u05c3\5\u00e8u\2\u05c3\u05c4\7\u00d4\2\2\u05c4\u05c5\5\u00e8"+
		"u\2\u05c5\u05c6\7\u00d4\2\2\u05c6\u05c7\5\u00e8u\2\u05c7\u05c8\7\u00d8"+
		"\2\2\u05c8\u0617\3\2\2\2\u05c9\u05ca\7\u0092\2\2\u05ca\u05cb\7\u00d6\2"+
		"\2\u05cb\u05cc\5\u00e4s\2\u05cc\u05cd\7\u00d8\2\2\u05cd\u0617\3\2\2\2"+
		"\u05ce\u05cf\7h\2\2\u05cf\u05d0\5\u00bc_\2\u05d0\u05d1\7\u00d4\2\2\u05d1"+
		"\u05d2\5\u00bc_\2\u05d2\u0617\3\2\2\2\u05d3\u05d4\7i\2\2\u05d4\u05d5\5"+
		"\u00e8u\2\u05d5\u05d6\7\u00d4\2\2\u05d6\u05d7\5\u00e8u\2\u05d7\u05d8\7"+
		"\u00d4\2\2\u05d8\u05d9\5\u00e8u\2\u05d9\u05da\7\u00d4\2\2\u05da\u05db"+
		"\5\u00e8u\2\u05db\u05dc\7\u00d4\2\2\u05dc\u05dd\5\u00e8u\2\u05dd\u05de"+
		"\7\u00d4\2\2\u05de\u05df\5\u00e8u\2\u05df\u05e0\7\u00d4\2\2\u05e0\u05e1"+
		"\5\u00e8u\2\u05e1\u05e2\7\u00d4\2\2\u05e2\u05e3\5\u00e8u\2\u05e3\u05e9"+
		"\7\u00d4\2\2\u05e4\u05ea\5\u00e8u\2\u05e5\u05ea\7j\2\2\u05e6\u05ea\7k"+
		"\2\2\u05e7\u05ea\7l\2\2\u05e8\u05ea\7m\2\2\u05e9\u05e4\3\2\2\2\u05e9\u05e5"+
		"\3\2\2\2\u05e9\u05e6\3\2\2\2\u05e9\u05e7\3\2\2\2\u05e9\u05e8\3\2\2\2\u05ea"+
		"\u0617\3\2\2\2\u05eb\u05ec\7n\2\2\u05ec\u0617\5\u00e8u\2\u05ed\u05ee\7"+
		"q\2\2\u05ee\u0617\5\u00e8u\2\u05ef\u05f0\7t\2\2\u05f0\u05f1\7\u00d6\2"+
		"\2\u05f1\u05f2\5\u00e4s\2\u05f2\u05f3\7\u00d8\2\2\u05f3\u0617\3\2\2\2"+
		"\u05f4\u05f5\7u\2\2\u05f5\u05f6\7\u00d6\2\2\u05f6\u05f7\5\u00e4s\2\u05f7"+
		"\u05f8\7\u00d8\2\2\u05f8\u0617\3\2\2\2\u05f9\u05fa\7v\2\2\u05fa\u05fb"+
		"\7\u00d6\2\2\u05fb\u05fc\5\u00e4s\2\u05fc\u05fd\7\u00d8\2\2\u05fd\u0617"+
		"\3\2\2\2\u05fe\u05ff\7w\2\2\u05ff\u0617\5\u00e8u\2\u0600\u0601\7\u00a8"+
		"\2\2\u0601\u0617\5\u00e4s\2\u0602\u0603\7\u00a9\2\2\u0603\u0617\5\u00e4"+
		"s\2\u0604\u0605\7\u00aa\2\2\u0605\u0606\7\u00d6\2\2\u0606\u0607\5\u00e4"+
		"s\2\u0607\u0608\7\u00d4\2\2\u0608\u0609\5\u00e4s\2\u0609\u060a\7\u00d8"+
		"\2\2\u060a\u0617\3\2\2\2\u060b\u060c\7\u00aa\2\2\u060c\u060d\7\u00d6\2"+
		"\2\u060d\u060e\5\u00e4s\2\u060e\u060f\7\u00d4\2\2\u060f\u0610\5\u00e4"+
		"s\2\u0610\u0611\7\u00d4\2\2\u0611\u0612\5\u00e8u\2\u0612\u0613\7\u00d8"+
		"\2\2\u0613\u0617\3\2\2\2\u0614\u0615\7\u00ab\2\2\u0615\u0617\5\u00e4s"+
		"\2\u0616\u0545\3\2\2\2\u0616\u0546\3\2\2\2\u0616\u0547\3\2\2\2\u0616\u0548"+
		"\3\2\2\2\u0616\u0549\3\2\2\2\u0616\u054e\3\2\2\2\u0616\u054f\3\2\2\2\u0616"+
		"\u0550\3\2\2\2\u0616\u0551\3\2\2\2\u0616\u0556\3\2\2\2\u0616\u055b\3\2"+
		"\2\2\u0616\u0560\3\2\2\2\u0616\u0565\3\2\2\2\u0616\u056a\3\2\2\2\u0616"+
		"\u056f\3\2\2\2\u0616\u0574\3\2\2\2\u0616\u0579\3\2\2\2\u0616\u057e\3\2"+
		"\2\2\u0616\u0583\3\2\2\2\u0616\u0588\3\2\2\2\u0616\u058d\3\2\2\2\u0616"+
		"\u0592\3\2\2\2\u0616\u0597\3\2\2\2\u0616\u0598\3\2\2\2\u0616\u059d\3\2"+
		"\2\2\u0616\u05a2\3\2\2\2\u0616\u05a7\3\2\2\2\u0616\u05a8\3\2\2\2\u0616"+
		"\u05a9\3\2\2\2\u0616\u05b0\3\2\2\2\u0616\u05b9\3\2\2\2\u0616\u05bb\3\2"+
		"\2\2\u0616\u05c0\3\2\2\2\u0616\u05c9\3\2\2\2\u0616\u05ce\3\2\2\2\u0616"+
		"\u05d3\3\2\2\2\u0616\u05eb\3\2\2\2\u0616\u05ed\3\2\2\2\u0616\u05ef\3\2"+
		"\2\2\u0616\u05f4\3\2\2\2\u0616\u05f9\3\2\2\2\u0616\u05fe\3\2\2\2\u0616"+
		"\u0600\3\2\2\2\u0616\u0602\3\2\2\2\u0616\u0604\3\2\2\2\u0616\u060b\3\2"+
		"\2\2\u0616\u0614\3\2\2\2\u0617\u00e7\3\2\2\2\u0618\u0619\bu\1\2\u0619"+
		"\u0630\5\u00aeX\2\u061a\u0630\5\u00d6l\2\u061b\u061c\7\u00d6\2\2\u061c"+
		"\u061d\5\u00e8u\2\u061d\u061e\7\u00d8\2\2\u061e\u0630\3\2\2\2\u061f\u0620"+
		"\7\u00c4\2\2\u0620\u0630\5\u00e8u\16\u0621\u0622\7\u00bc\2\2\u0622\u0630"+
		"\5\u00e8u\r\u0623\u0630\5\u00e6t\2\u0624\u0625\5\u00e4s\2\u0625\u0626"+
		"\t\7\2\2\u0626\u0627\5\u00e4s\2\u0627\u0630\3\2\2\2\u0628\u0629\7\u00a9"+
		"\2\2\u0629\u062a\7\u00d6\2\2\u062a\u062b\5\u00b2Z\2\u062b\u062c\7\u00d6"+
		"\2\2\u062c\u062d\7\u00d8\2\2\u062d\u062e\7\u00d8\2\2\u062e\u0630\3\2\2"+
		"\2\u062f\u0618\3\2\2\2\u062f\u061a\3\2\2\2\u062f\u061b\3\2\2\2\u062f\u061f"+
		"\3\2\2\2\u062f\u0621\3\2\2\2\u062f\u0623\3\2\2\2\u062f\u0624\3\2\2\2\u062f"+
		"\u0628\3\2\2\2\u0630\u0648\3\2\2\2\u0631\u0632\f\13\2\2\u0632\u0633\7"+
		"\u00c2\2\2\u0633\u0647\5\u00e8u\13\u0634\u0635\f\n\2\2\u0635\u0636\t\b"+
		"\2\2\u0636\u0647\5\u00e8u\13\u0637\u0638\f\t\2\2\u0638\u0639\t\t\2\2\u0639"+
		"\u0647\5\u00e8u\n\u063a\u063b\f\b\2\2\u063b\u063c\t\6\2\2\u063c\u0647"+
		"\5\u00e8u\t\u063d\u063e\f\7\2\2\u063e\u063f\t\n\2\2\u063f\u0647\5\u00e8"+
		"u\b\u0640\u0641\f\6\2\2\u0641\u0642\t\7\2\2\u0642\u0647\5\u00e8u\7\u0643"+
		"\u0644\f\4\2\2\u0644\u0645\t\13\2\2\u0645\u0647\5\u00e8u\5\u0646\u0631"+
		"\3\2\2\2\u0646\u0634\3\2\2\2\u0646\u0637\3\2\2\2\u0646\u063a\3\2\2\2\u0646"+
		"\u063d\3\2\2\2\u0646\u0640\3\2\2\2\u0646\u0643\3\2\2\2\u0647\u064a\3\2"+
		"\2\2\u0648\u0646\3\2\2\2\u0648\u0649\3\2\2\2\u0649\u00e9\3\2\2\2\u064a"+
		"\u0648\3\2\2\2\u064b\u064c\t\f\2\2\u064c\u00eb\3\2\2\2\u064d\u064e\t\r"+
		"\2\2\u064e\u00ed\3\2\2\2j\u00f1\u00f8\u00fb\u00ff\u0104\u0107\u010b\u0110"+
		"\u0115\u011b\u0121\u0124\u012e\u014c\u0157\u015a\u015e\u0161\u016e\u0172"+
		"\u017a\u0181\u0187\u018c\u0194\u0199\u019f\u01a8\u01ac\u01b2\u01bb\u01c2"+
		"\u01cb\u01d3\u01d8\u01db\u01e9\u01ec\u01f8\u0201\u020b\u0221\u0229\u0232"+
		"\u023d\u0241\u0245\u0247\u024e\u0253\u0282\u0289\u029e\u02c6\u02d3\u02de"+
		"\u02f2\u0305\u0323\u0354\u03d3\u03db\u03e5\u03ea\u03f3\u03fc\u040f\u0415"+
		"\u0420\u0427\u0438\u043b\u0440\u0444\u0454\u045a\u0475\u047e\u048a\u0491"+
		"\u0495\u049e\u04a6\u04ae\u04b2\u04bc\u04c1\u04c6\u04c9\u04cc\u04d4\u04d8"+
		"\u04dc\u04e4\u04e7\u04f0\u052f\u053b\u0542\u05e9\u0616\u062f\u0646\u0648";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}