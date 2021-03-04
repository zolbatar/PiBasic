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
		MAGENTA=64, CYAN=65, WHITE=66, BLACK=67, MONO=68, PROP=69, SERIF=70, RENDERFRAME=71, 
		CREATEVERTEX=72, CREATETRIANGLE=73, TRANSLATE=74, ROTATE=75, SCALE=76, 
		DELETEOBJECT=77, CREATESHAPE=78, CREATEOBJECT=79, SOLID=80, WIREFRAME=81, 
		SHADED=82, FILLEDWIREFRAME=83, BGETH=84, BPUTH=85, CLOSEH=86, EOFH=87, 
		GETSH=88, LISTFILES=89, OPENIN=90, OPENOUT=91, OPENUP=92, PTRH=93, BANKED=94, 
		CIRCLE=95, CLS=96, CLIPON=97, CLIPOFF=98, COLOUR=99, COLOURBG=100, CURSORON=101, 
		CURSOROFF=102, FILL=103, FLIP=104, SHOWFPS=105, GRAPHICS=106, LINE=107, 
		LOADTYPEFACE=108, RECTANGLE=109, PLOT=110, POINT=111, SCREENWIDTH=112, 
		SCREENHEIGHT=113, TEXT=114, TEXTRIGHT=115, TEXTCENTRE=116, TEXTCENTER=117, 
		TRIANGLE=118, LOADSPRITE=119, DRAWSPRITE=120, DELETESPRITE=121, CREATESPRITE=122, 
		DRAWTOSPRITE=123, DRAWTOSCREEN=124, TIME=125, PI=126, SQR=127, LN=128, 
		LOG=129, EXP=130, ATN=131, TAN=132, COS=133, SIN=134, ABS=135, ACS=136, 
		ASN=137, DEG=138, RAD=139, SGN=140, ASC=141, LEN=142, INSTR=143, VAL=144, 
		TIMES=145, STRS=146, STRINGS=147, CHRS=148, LEFTS=149, MIDS=150, RIGHTS=151, 
		RND=152, RND0=153, RND1=154, EQ=155, NE=156, GT=157, GE=158, LT=159, LE=160, 
		NOT=161, AND=162, OR=163, EOR=164, MOD=165, DIV=166, HAT=167, PLUS=168, 
		MINUS=169, MULTIPLY=170, DIVIDE=171, SHL=172, SHR=173, PLUS_E=174, MINUS_E=175, 
		MULTIPLY_E=176, DIVIDE_E=177, SHL_E=178, SHR_E=179, NEWLINE=180, TICK=181, 
		TILDE=182, HASH=183, COLON=184, COMMA=185, DOLLAR=186, PERCENT=187, LPAREN=188, 
		RPAREN=189, SEMICOLON=190, UNDERSCORE=191, COMMENT=192, STRINGLITERAL=193, 
		PROC_NAME=194, FN_INTEGER=195, FN_FLOAT=196, FN_STRING=197, VARIABLE_FLOAT=198, 
		VARIABLE_INTEGER=199, VARIABLE_STRING=200, VARIABLE_TYPE=201, HEXNUMBER=202, 
		BINARYNUMBER=203, NUMBER=204, FLOAT=205, WS=206;
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
			null, null, null, null, null, null, null, null, null, null, null, "'='", 
			"'<>'", "'>'", "'>='", "'<'", "'<='", null, null, null, null, null, null, 
			"'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", "'>>'", "'+='", "'-='", "'*='", 
			"'/='", "'<<='", "'>>='", null, "'''", "'~'", "'#'", "':'", "','", "'$'", 
			"'%'", "'('", "')'", "';'", "'_'"
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
			"BLACK", "MONO", "PROP", "SERIF", "RENDERFRAME", "CREATEVERTEX", "CREATETRIANGLE", 
			"TRANSLATE", "ROTATE", "SCALE", "DELETEOBJECT", "CREATESHAPE", "CREATEOBJECT", 
			"SOLID", "WIREFRAME", "SHADED", "FILLEDWIREFRAME", "BGETH", "BPUTH", 
			"CLOSEH", "EOFH", "GETSH", "LISTFILES", "OPENIN", "OPENOUT", "OPENUP", 
			"PTRH", "BANKED", "CIRCLE", "CLS", "CLIPON", "CLIPOFF", "COLOUR", "COLOURBG", 
			"CURSORON", "CURSOROFF", "FILL", "FLIP", "SHOWFPS", "GRAPHICS", "LINE", 
			"LOADTYPEFACE", "RECTANGLE", "PLOT", "POINT", "SCREENWIDTH", "SCREENHEIGHT", 
			"TEXT", "TEXTRIGHT", "TEXTCENTRE", "TEXTCENTER", "TRIANGLE", "LOADSPRITE", 
			"DRAWSPRITE", "DELETESPRITE", "CREATESPRITE", "DRAWTOSPRITE", "DRAWTOSCREEN", 
			"TIME", "PI", "SQR", "LN", "LOG", "EXP", "ATN", "TAN", "COS", "SIN", 
			"ABS", "ACS", "ASN", "DEG", "RAD", "SGN", "ASC", "LEN", "INSTR", "VAL", 
			"TIMES", "STRS", "STRINGS", "CHRS", "LEFTS", "MIDS", "RIGHTS", "RND", 
			"RND0", "RND1", "EQ", "NE", "GT", "GE", "LT", "LE", "NOT", "AND", "OR", 
			"EOR", "MOD", "DIV", "HAT", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "SHL", 
			"SHR", "PLUS_E", "MINUS_E", "MULTIPLY_E", "DIVIDE_E", "SHL_E", "SHR_E", 
			"NEWLINE", "TICK", "TILDE", "HASH", "COLON", "COMMA", "DOLLAR", "PERCENT", 
			"LPAREN", "RPAREN", "SEMICOLON", "UNDERSCORE", "COMMENT", "STRINGLITERAL", 
			"PROC_NAME", "FN_INTEGER", "FN_FLOAT", "FN_STRING", "VARIABLE_FLOAT", 
			"VARIABLE_INTEGER", "VARIABLE_STRING", "VARIABLE_TYPE", "HEXNUMBER", 
			"BINARYNUMBER", "NUMBER", "FLOAT", "WS"
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
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INSTALL) | (1L << INPUT) | (1L << GLOBAL) | (1L << GOTO) | (1L << GOSUB) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 71)) & ~0x3f) == 0 && ((1L << (_la - 71)) & ((1L << (RENDERFRAME - 71)) | (1L << (CREATEVERTEX - 71)) | (1L << (CREATETRIANGLE - 71)) | (1L << (TRANSLATE - 71)) | (1L << (ROTATE - 71)) | (1L << (SCALE - 71)) | (1L << (DELETEOBJECT - 71)) | (1L << (BGETH - 71)) | (1L << (BPUTH - 71)) | (1L << (CLOSEH - 71)) | (1L << (PTRH - 71)) | (1L << (CIRCLE - 71)) | (1L << (CLS - 71)) | (1L << (CLIPON - 71)) | (1L << (CLIPOFF - 71)) | (1L << (COLOUR - 71)) | (1L << (COLOURBG - 71)) | (1L << (CURSORON - 71)) | (1L << (CURSOROFF - 71)) | (1L << (FLIP - 71)) | (1L << (SHOWFPS - 71)) | (1L << (GRAPHICS - 71)) | (1L << (LINE - 71)) | (1L << (RECTANGLE - 71)) | (1L << (PLOT - 71)) | (1L << (TEXT - 71)) | (1L << (TEXTRIGHT - 71)) | (1L << (TEXTCENTRE - 71)) | (1L << (TEXTCENTER - 71)) | (1L << (TRIANGLE - 71)) | (1L << (DRAWSPRITE - 71)) | (1L << (DELETESPRITE - 71)) | (1L << (DRAWTOSPRITE - 71)) | (1L << (DRAWTOSCREEN - 71)))) != 0) || ((((_la - 180)) & ~0x3f) == 0 && ((1L << (_la - 180)) & ((1L << (NEWLINE - 180)) | (1L << (COLON - 180)) | (1L << (COMMENT - 180)) | (1L << (PROC_NAME - 180)) | (1L << (FN_INTEGER - 180)) | (1L << (FN_FLOAT - 180)) | (1L << (FN_STRING - 180)) | (1L << (VARIABLE_FLOAT - 180)) | (1L << (VARIABLE_INTEGER - 180)) | (1L << (VARIABLE_STRING - 180)) | (1L << (VARIABLE_TYPE - 180)) | (1L << (NUMBER - 180)))) != 0)) {
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
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INSTALL) | (1L << INPUT) | (1L << GLOBAL) | (1L << GOTO) | (1L << GOSUB) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 71)) & ~0x3f) == 0 && ((1L << (_la - 71)) & ((1L << (RENDERFRAME - 71)) | (1L << (CREATEVERTEX - 71)) | (1L << (CREATETRIANGLE - 71)) | (1L << (TRANSLATE - 71)) | (1L << (ROTATE - 71)) | (1L << (SCALE - 71)) | (1L << (DELETEOBJECT - 71)) | (1L << (BGETH - 71)) | (1L << (BPUTH - 71)) | (1L << (CLOSEH - 71)) | (1L << (PTRH - 71)) | (1L << (CIRCLE - 71)) | (1L << (CLS - 71)) | (1L << (CLIPON - 71)) | (1L << (CLIPOFF - 71)) | (1L << (COLOUR - 71)) | (1L << (COLOURBG - 71)) | (1L << (CURSORON - 71)) | (1L << (CURSOROFF - 71)) | (1L << (FLIP - 71)) | (1L << (SHOWFPS - 71)) | (1L << (GRAPHICS - 71)) | (1L << (LINE - 71)) | (1L << (RECTANGLE - 71)) | (1L << (PLOT - 71)) | (1L << (TEXT - 71)) | (1L << (TEXTRIGHT - 71)) | (1L << (TEXTCENTRE - 71)) | (1L << (TEXTCENTER - 71)) | (1L << (TRIANGLE - 71)) | (1L << (DRAWSPRITE - 71)) | (1L << (DELETESPRITE - 71)) | (1L << (DRAWTOSPRITE - 71)) | (1L << (DRAWTOSCREEN - 71)))) != 0) || ((((_la - 184)) & ~0x3f) == 0 && ((1L << (_la - 184)) & ((1L << (COLON - 184)) | (1L << (PROC_NAME - 184)) | (1L << (FN_INTEGER - 184)) | (1L << (FN_FLOAT - 184)) | (1L << (FN_STRING - 184)) | (1L << (VARIABLE_FLOAT - 184)) | (1L << (VARIABLE_INTEGER - 184)) | (1L << (VARIABLE_STRING - 184)) | (1L << (VARIABLE_TYPE - 184)))) != 0) );
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
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INSTALL) | (1L << INPUT) | (1L << GLOBAL) | (1L << GOTO) | (1L << GOSUB) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 71)) & ~0x3f) == 0 && ((1L << (_la - 71)) & ((1L << (RENDERFRAME - 71)) | (1L << (CREATEVERTEX - 71)) | (1L << (CREATETRIANGLE - 71)) | (1L << (TRANSLATE - 71)) | (1L << (ROTATE - 71)) | (1L << (SCALE - 71)) | (1L << (DELETEOBJECT - 71)) | (1L << (BGETH - 71)) | (1L << (BPUTH - 71)) | (1L << (CLOSEH - 71)) | (1L << (PTRH - 71)) | (1L << (CIRCLE - 71)) | (1L << (CLS - 71)) | (1L << (CLIPON - 71)) | (1L << (CLIPOFF - 71)) | (1L << (COLOUR - 71)) | (1L << (COLOURBG - 71)) | (1L << (CURSORON - 71)) | (1L << (CURSOROFF - 71)) | (1L << (FLIP - 71)) | (1L << (SHOWFPS - 71)) | (1L << (GRAPHICS - 71)) | (1L << (LINE - 71)) | (1L << (RECTANGLE - 71)) | (1L << (PLOT - 71)) | (1L << (TEXT - 71)) | (1L << (TEXTRIGHT - 71)) | (1L << (TEXTCENTRE - 71)) | (1L << (TEXTCENTER - 71)) | (1L << (TRIANGLE - 71)) | (1L << (DRAWSPRITE - 71)) | (1L << (DELETESPRITE - 71)) | (1L << (DRAWTOSPRITE - 71)) | (1L << (DRAWTOSCREEN - 71)))) != 0) || ((((_la - 184)) & ~0x3f) == 0 && ((1L << (_la - 184)) & ((1L << (COLON - 184)) | (1L << (PROC_NAME - 184)) | (1L << (FN_INTEGER - 184)) | (1L << (FN_FLOAT - 184)) | (1L << (FN_STRING - 184)) | (1L << (VARIABLE_FLOAT - 184)) | (1L << (VARIABLE_INTEGER - 184)) | (1L << (VARIABLE_STRING - 184)) | (1L << (VARIABLE_TYPE - 184)))) != 0)) {
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
			if (_la==RETURN || ((((_la - 198)) & ~0x3f) == 0 && ((1L << (_la - 198)) & ((1L << (VARIABLE_FLOAT - 198)) | (1L << (VARIABLE_INTEGER - 198)) | (1L << (VARIABLE_STRING - 198)))) != 0)) {
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
			if (_la==RETURN || ((((_la - 198)) & ~0x3f) == 0 && ((1L << (_la - 198)) & ((1L << (VARIABLE_FLOAT - 198)) | (1L << (VARIABLE_INTEGER - 198)) | (1L << (VARIABLE_STRING - 198)))) != 0)) {
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
			if (((((_la - 14)) & ~0x3f) == 0 && ((1L << (_la - 14)) & ((1L << (FALSE - 14)) | (1L << (FLOAT_TOKEN - 14)) | (1L << (INT - 14)) | (1L << (TRUE - 14)) | (1L << (INKEY - 14)) | (1L << (INKEYS - 14)) | (1L << (GET - 14)) | (1L << (GETS - 14)) | (1L << (RED - 14)) | (1L << (GREEN - 14)) | (1L << (YELLOW - 14)) | (1L << (BLUE - 14)) | (1L << (MAGENTA - 14)) | (1L << (CYAN - 14)) | (1L << (WHITE - 14)) | (1L << (BLACK - 14)) | (1L << (MONO - 14)) | (1L << (PROP - 14)) | (1L << (SERIF - 14)))) != 0) || ((((_la - 78)) & ~0x3f) == 0 && ((1L << (_la - 78)) & ((1L << (CREATESHAPE - 78)) | (1L << (CREATEOBJECT - 78)) | (1L << (BGETH - 78)) | (1L << (EOFH - 78)) | (1L << (GETSH - 78)) | (1L << (OPENIN - 78)) | (1L << (OPENOUT - 78)) | (1L << (OPENUP - 78)) | (1L << (PTRH - 78)) | (1L << (COLOUR - 78)) | (1L << (LOADTYPEFACE - 78)) | (1L << (POINT - 78)) | (1L << (SCREENWIDTH - 78)) | (1L << (SCREENHEIGHT - 78)) | (1L << (LOADSPRITE - 78)) | (1L << (CREATESPRITE - 78)) | (1L << (TIME - 78)) | (1L << (PI - 78)) | (1L << (SQR - 78)) | (1L << (LN - 78)) | (1L << (LOG - 78)) | (1L << (EXP - 78)) | (1L << (ATN - 78)) | (1L << (TAN - 78)) | (1L << (COS - 78)) | (1L << (SIN - 78)) | (1L << (ABS - 78)) | (1L << (ACS - 78)) | (1L << (ASN - 78)) | (1L << (DEG - 78)) | (1L << (RAD - 78)) | (1L << (SGN - 78)) | (1L << (ASC - 78)))) != 0) || ((((_la - 142)) & ~0x3f) == 0 && ((1L << (_la - 142)) & ((1L << (LEN - 142)) | (1L << (INSTR - 142)) | (1L << (VAL - 142)) | (1L << (TIMES - 142)) | (1L << (STRS - 142)) | (1L << (STRINGS - 142)) | (1L << (CHRS - 142)) | (1L << (LEFTS - 142)) | (1L << (MIDS - 142)) | (1L << (RIGHTS - 142)) | (1L << (RND - 142)) | (1L << (RND0 - 142)) | (1L << (RND1 - 142)) | (1L << (NOT - 142)) | (1L << (PLUS - 142)) | (1L << (MINUS - 142)) | (1L << (LPAREN - 142)) | (1L << (STRINGLITERAL - 142)) | (1L << (FN_INTEGER - 142)) | (1L << (FN_FLOAT - 142)) | (1L << (FN_STRING - 142)) | (1L << (VARIABLE_FLOAT - 142)) | (1L << (VARIABLE_INTEGER - 142)) | (1L << (VARIABLE_STRING - 142)) | (1L << (VARIABLE_TYPE - 142)) | (1L << (HEXNUMBER - 142)) | (1L << (BINARYNUMBER - 142)) | (1L << (NUMBER - 142)) | (1L << (FLOAT - 142)))) != 0)) {
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
			if (((((_la - 14)) & ~0x3f) == 0 && ((1L << (_la - 14)) & ((1L << (FALSE - 14)) | (1L << (FLOAT_TOKEN - 14)) | (1L << (INT - 14)) | (1L << (TRUE - 14)) | (1L << (INKEY - 14)) | (1L << (INKEYS - 14)) | (1L << (GET - 14)) | (1L << (GETS - 14)) | (1L << (RED - 14)) | (1L << (GREEN - 14)) | (1L << (YELLOW - 14)) | (1L << (BLUE - 14)) | (1L << (MAGENTA - 14)) | (1L << (CYAN - 14)) | (1L << (WHITE - 14)) | (1L << (BLACK - 14)) | (1L << (MONO - 14)) | (1L << (PROP - 14)) | (1L << (SERIF - 14)))) != 0) || ((((_la - 78)) & ~0x3f) == 0 && ((1L << (_la - 78)) & ((1L << (CREATESHAPE - 78)) | (1L << (CREATEOBJECT - 78)) | (1L << (BGETH - 78)) | (1L << (EOFH - 78)) | (1L << (GETSH - 78)) | (1L << (OPENIN - 78)) | (1L << (OPENOUT - 78)) | (1L << (OPENUP - 78)) | (1L << (PTRH - 78)) | (1L << (COLOUR - 78)) | (1L << (LOADTYPEFACE - 78)) | (1L << (POINT - 78)) | (1L << (SCREENWIDTH - 78)) | (1L << (SCREENHEIGHT - 78)) | (1L << (LOADSPRITE - 78)) | (1L << (CREATESPRITE - 78)) | (1L << (TIME - 78)) | (1L << (PI - 78)) | (1L << (SQR - 78)) | (1L << (LN - 78)) | (1L << (LOG - 78)) | (1L << (EXP - 78)) | (1L << (ATN - 78)) | (1L << (TAN - 78)) | (1L << (COS - 78)) | (1L << (SIN - 78)) | (1L << (ABS - 78)) | (1L << (ACS - 78)) | (1L << (ASN - 78)) | (1L << (DEG - 78)) | (1L << (RAD - 78)) | (1L << (SGN - 78)) | (1L << (ASC - 78)))) != 0) || ((((_la - 142)) & ~0x3f) == 0 && ((1L << (_la - 142)) & ((1L << (LEN - 142)) | (1L << (INSTR - 142)) | (1L << (VAL - 142)) | (1L << (TIMES - 142)) | (1L << (STRS - 142)) | (1L << (STRINGS - 142)) | (1L << (CHRS - 142)) | (1L << (LEFTS - 142)) | (1L << (MIDS - 142)) | (1L << (RIGHTS - 142)) | (1L << (RND - 142)) | (1L << (RND0 - 142)) | (1L << (RND1 - 142)) | (1L << (NOT - 142)) | (1L << (PLUS - 142)) | (1L << (MINUS - 142)) | (1L << (LPAREN - 142)) | (1L << (STRINGLITERAL - 142)) | (1L << (FN_INTEGER - 142)) | (1L << (FN_FLOAT - 142)) | (1L << (FN_STRING - 142)) | (1L << (VARIABLE_FLOAT - 142)) | (1L << (VARIABLE_INTEGER - 142)) | (1L << (VARIABLE_STRING - 142)) | (1L << (VARIABLE_TYPE - 142)) | (1L << (HEXNUMBER - 142)) | (1L << (BINARYNUMBER - 142)) | (1L << (NUMBER - 142)) | (1L << (FLOAT - 142)))) != 0)) {
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
			setState(728);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,54,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(712);
				match(COLOUR);
				setState(713);
				numExpr(0);
				setState(714);
				match(COMMA);
				setState(715);
				numExpr(0);
				setState(716);
				match(COMMA);
				setState(717);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(719);
				match(COLOUR);
				setState(720);
				numExpr(0);
				setState(721);
				match(COMMA);
				setState(722);
				numExpr(0);
				setState(723);
				match(COMMA);
				setState(724);
				numExpr(0);
				setState(725);
				match(COMMA);
				setState(726);
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
			setState(746);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,55,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(730);
				match(COLOURBG);
				setState(731);
				numExpr(0);
				setState(732);
				match(COMMA);
				setState(733);
				numExpr(0);
				setState(734);
				match(COMMA);
				setState(735);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(737);
				match(COLOURBG);
				setState(738);
				numExpr(0);
				setState(739);
				match(COMMA);
				setState(740);
				numExpr(0);
				setState(741);
				match(COMMA);
				setState(742);
				numExpr(0);
				setState(743);
				match(COMMA);
				setState(744);
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
			setState(748);
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
			setState(750);
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
			setState(766);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,56,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(752);
				match(GRAPHICS);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(753);
				match(GRAPHICS);
				setState(754);
				numExpr(0);
				setState(755);
				match(COMMA);
				setState(756);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(758);
				match(GRAPHICS);
				setState(759);
				match(BANKED);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(760);
				match(GRAPHICS);
				setState(761);
				match(BANKED);
				setState(762);
				numExpr(0);
				setState(763);
				match(COMMA);
				setState(764);
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
			setState(768);
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
			setState(785);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,57,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(770);
				match(CIRCLE);
				setState(771);
				numExpr(0);
				setState(772);
				match(COMMA);
				setState(773);
				numExpr(0);
				setState(774);
				match(COMMA);
				setState(775);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(777);
				match(CIRCLE);
				setState(778);
				match(FILL);
				setState(779);
				numExpr(0);
				setState(780);
				match(COMMA);
				setState(781);
				numExpr(0);
				setState(782);
				match(COMMA);
				setState(783);
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
			setState(787);
			match(LINE);
			setState(788);
			numExpr(0);
			setState(789);
			match(COMMA);
			setState(790);
			numExpr(0);
			setState(791);
			match(COMMA);
			setState(792);
			numExpr(0);
			setState(793);
			match(COMMA);
			setState(794);
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
			setState(815);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,58,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(796);
				match(RECTANGLE);
				setState(797);
				numExpr(0);
				setState(798);
				match(COMMA);
				setState(799);
				numExpr(0);
				setState(800);
				match(COMMA);
				setState(801);
				numExpr(0);
				setState(802);
				match(COMMA);
				setState(803);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(805);
				match(RECTANGLE);
				setState(806);
				match(FILL);
				setState(807);
				numExpr(0);
				setState(808);
				match(COMMA);
				setState(809);
				numExpr(0);
				setState(810);
				match(COMMA);
				setState(811);
				numExpr(0);
				setState(812);
				match(COMMA);
				setState(813);
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
			setState(864);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,59,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(817);
				match(TRIANGLE);
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
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(830);
				match(TRIANGLE);
				setState(831);
				match(FILL);
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
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(844);
				match(TRIANGLE);
				setState(845);
				match(SHADED);
				setState(846);
				numExpr(0);
				setState(847);
				match(COMMA);
				setState(848);
				numExpr(0);
				setState(849);
				match(COMMA);
				setState(850);
				numExpr(0);
				setState(851);
				match(COMMA);
				setState(852);
				numExpr(0);
				setState(853);
				match(COMMA);
				setState(854);
				numExpr(0);
				setState(855);
				match(COMMA);
				setState(856);
				numExpr(0);
				setState(857);
				match(COMMA);
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
			setState(866);
			match(PLOT);
			setState(867);
			numExpr(0);
			setState(868);
			match(COMMA);
			setState(869);
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
			setState(871);
			match(CLIPON);
			setState(872);
			numExpr(0);
			setState(873);
			match(COMMA);
			setState(874);
			numExpr(0);
			setState(875);
			match(COMMA);
			setState(876);
			numExpr(0);
			setState(877);
			match(COMMA);
			setState(878);
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
			setState(880);
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
			setState(882);
			match(TEXT);
			setState(883);
			numExpr(0);
			setState(884);
			match(COMMA);
			setState(885);
			numExpr(0);
			setState(886);
			match(COMMA);
			setState(887);
			numExpr(0);
			setState(888);
			match(COMMA);
			setState(889);
			numExpr(0);
			setState(890);
			match(COMMA);
			setState(891);
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
			setState(893);
			match(TEXTRIGHT);
			setState(894);
			numExpr(0);
			setState(895);
			match(COMMA);
			setState(896);
			numExpr(0);
			setState(897);
			match(COMMA);
			setState(898);
			numExpr(0);
			setState(899);
			match(COMMA);
			setState(900);
			numExpr(0);
			setState(901);
			match(COMMA);
			setState(902);
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
			setState(904);
			_la = _input.LA(1);
			if ( !(_la==TEXTCENTRE || _la==TEXTCENTER) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(905);
			numExpr(0);
			setState(906);
			match(COMMA);
			setState(907);
			numExpr(0);
			setState(908);
			match(COMMA);
			setState(909);
			numExpr(0);
			setState(910);
			match(COMMA);
			setState(911);
			numExpr(0);
			setState(912);
			match(COMMA);
			setState(913);
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
			setState(915);
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
			setState(917);
			match(DRAWTOSPRITE);
			setState(918);
			numExpr(0);
			setState(919);
			match(COMMA);
			setState(920);
			numExpr(0);
			setState(921);
			match(COMMA);
			setState(922);
			numExpr(0);
			setState(923);
			match(COMMA);
			setState(924);
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
			setState(926);
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
			setState(928);
			match(DRAWSPRITE);
			setState(929);
			numExpr(0);
			setState(930);
			match(COMMA);
			setState(931);
			numExpr(0);
			setState(932);
			match(COMMA);
			setState(933);
			numExpr(0);
			setState(934);
			match(COMMA);
			setState(935);
			numExpr(0);
			setState(936);
			match(COMMA);
			setState(937);
			numExpr(0);
			setState(938);
			match(COMMA);
			setState(939);
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
			setState(941);
			match(DELETESPRITE);
			setState(942);
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
			setState(944);
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
			setState(946);
			match(CREATEVERTEX);
			setState(947);
			varNameType();
			setState(948);
			match(LPAREN);
			setState(949);
			numExpr(0);
			setState(950);
			match(RPAREN);
			setState(951);
			match(COMMA);
			setState(952);
			numExpr(0);
			setState(953);
			match(COMMA);
			setState(954);
			numExpr(0);
			setState(955);
			match(COMMA);
			setState(956);
			numExpr(0);
			setState(957);
			match(COMMA);
			setState(958);
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
			setState(960);
			match(CREATETRIANGLE);
			setState(961);
			varNameType();
			setState(962);
			match(LPAREN);
			setState(963);
			numExpr(0);
			setState(964);
			match(RPAREN);
			setState(965);
			match(COMMA);
			setState(966);
			numExpr(0);
			setState(967);
			match(COMMA);
			setState(968);
			numExpr(0);
			setState(969);
			match(COMMA);
			setState(970);
			numExpr(0);
			setState(971);
			match(COMMA);
			setState(972);
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
			setState(974);
			match(TRANSLATE);
			setState(975);
			numExpr(0);
			setState(976);
			match(COMMA);
			setState(977);
			numExpr(0);
			setState(978);
			match(COMMA);
			setState(979);
			numExpr(0);
			setState(980);
			match(COMMA);
			setState(981);
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
			setState(983);
			match(ROTATE);
			setState(984);
			numExpr(0);
			setState(985);
			match(COMMA);
			setState(986);
			numExpr(0);
			setState(987);
			match(COMMA);
			setState(988);
			numExpr(0);
			setState(989);
			match(COMMA);
			setState(990);
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
			setState(992);
			match(SCALE);
			setState(993);
			numExpr(0);
			setState(994);
			match(COMMA);
			setState(995);
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
			setState(997);
			match(DELETEOBJECT);
			setState(998);
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
			setState(1001);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(1000);
				linenumber();
				}
			}

			setState(1003);
			match(WHEN);
			setState(1004);
			expr();
			setState(1009);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1005);
				match(COMMA);
				setState(1006);
				expr();
				}
				}
				setState(1011);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1012);
			match(COLON);
			setState(1013);
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
			setState(1015);
			_la = _input.LA(1);
			if ( !(((((_la - 195)) & ~0x3f) == 0 && ((1L << (_la - 195)) & ((1L << (FN_INTEGER - 195)) | (1L << (FN_FLOAT - 195)) | (1L << (FN_STRING - 195)))) != 0)) ) {
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
			setState(1019);
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
			case MONO:
			case PROP:
			case SERIF:
			case PLUS:
			case MINUS:
			case HEXNUMBER:
			case BINARYNUMBER:
			case NUMBER:
			case FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(1017);
				number();
				}
				break;
			case STRINGLITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(1018);
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
			setState(1024);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,63,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1021);
				numVar();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1022);
				strVar();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1023);
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
			setState(1026);
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
			setState(1078);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,68,_ctx) ) {
			case 1:
				_localctx = new NumVarFloatArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1028);
				varName();
				setState(1029);
				match(LPAREN);
				setState(1030);
				numExpr(0);
				setState(1033);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(1031);
					match(COMMA);
					setState(1032);
					numExpr(0);
					}
				}

				setState(1035);
				match(RPAREN);
				}
				break;
			case 2:
				_localctx = new NumVarIntegerArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1037);
				varNameInteger();
				setState(1038);
				match(LPAREN);
				setState(1039);
				numExpr(0);
				setState(1042);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(1040);
					match(COMMA);
					setState(1041);
					numExpr(0);
					}
				}

				setState(1044);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new NumVarIntegerFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1046);
				typeVar();
				setState(1047);
				match(LPAREN);
				setState(1048);
				numExpr(0);
				setState(1049);
				match(RPAREN);
				setState(1050);
				varNameInteger();
				}
				break;
			case 4:
				_localctx = new NumVarFloatFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1052);
				typeVar();
				setState(1053);
				match(LPAREN);
				setState(1054);
				numExpr(0);
				setState(1055);
				match(RPAREN);
				setState(1056);
				varName();
				}
				break;
			case 5:
				_localctx = new NumVarFloatFNContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1058);
				match(FN_FLOAT);
				setState(1059);
				match(LPAREN);
				setState(1061);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (((((_la - 14)) & ~0x3f) == 0 && ((1L << (_la - 14)) & ((1L << (FALSE - 14)) | (1L << (FLOAT_TOKEN - 14)) | (1L << (INT - 14)) | (1L << (TRUE - 14)) | (1L << (INKEY - 14)) | (1L << (INKEYS - 14)) | (1L << (GET - 14)) | (1L << (GETS - 14)) | (1L << (RED - 14)) | (1L << (GREEN - 14)) | (1L << (YELLOW - 14)) | (1L << (BLUE - 14)) | (1L << (MAGENTA - 14)) | (1L << (CYAN - 14)) | (1L << (WHITE - 14)) | (1L << (BLACK - 14)) | (1L << (MONO - 14)) | (1L << (PROP - 14)) | (1L << (SERIF - 14)))) != 0) || ((((_la - 78)) & ~0x3f) == 0 && ((1L << (_la - 78)) & ((1L << (CREATESHAPE - 78)) | (1L << (CREATEOBJECT - 78)) | (1L << (BGETH - 78)) | (1L << (EOFH - 78)) | (1L << (GETSH - 78)) | (1L << (OPENIN - 78)) | (1L << (OPENOUT - 78)) | (1L << (OPENUP - 78)) | (1L << (PTRH - 78)) | (1L << (COLOUR - 78)) | (1L << (LOADTYPEFACE - 78)) | (1L << (POINT - 78)) | (1L << (SCREENWIDTH - 78)) | (1L << (SCREENHEIGHT - 78)) | (1L << (LOADSPRITE - 78)) | (1L << (CREATESPRITE - 78)) | (1L << (TIME - 78)) | (1L << (PI - 78)) | (1L << (SQR - 78)) | (1L << (LN - 78)) | (1L << (LOG - 78)) | (1L << (EXP - 78)) | (1L << (ATN - 78)) | (1L << (TAN - 78)) | (1L << (COS - 78)) | (1L << (SIN - 78)) | (1L << (ABS - 78)) | (1L << (ACS - 78)) | (1L << (ASN - 78)) | (1L << (DEG - 78)) | (1L << (RAD - 78)) | (1L << (SGN - 78)) | (1L << (ASC - 78)))) != 0) || ((((_la - 142)) & ~0x3f) == 0 && ((1L << (_la - 142)) & ((1L << (LEN - 142)) | (1L << (INSTR - 142)) | (1L << (VAL - 142)) | (1L << (TIMES - 142)) | (1L << (STRS - 142)) | (1L << (STRINGS - 142)) | (1L << (CHRS - 142)) | (1L << (LEFTS - 142)) | (1L << (MIDS - 142)) | (1L << (RIGHTS - 142)) | (1L << (RND - 142)) | (1L << (RND0 - 142)) | (1L << (RND1 - 142)) | (1L << (NOT - 142)) | (1L << (PLUS - 142)) | (1L << (MINUS - 142)) | (1L << (LPAREN - 142)) | (1L << (STRINGLITERAL - 142)) | (1L << (FN_INTEGER - 142)) | (1L << (FN_FLOAT - 142)) | (1L << (FN_STRING - 142)) | (1L << (VARIABLE_FLOAT - 142)) | (1L << (VARIABLE_INTEGER - 142)) | (1L << (VARIABLE_STRING - 142)) | (1L << (VARIABLE_TYPE - 142)) | (1L << (HEXNUMBER - 142)) | (1L << (BINARYNUMBER - 142)) | (1L << (NUMBER - 142)) | (1L << (FLOAT - 142)))) != 0)) {
					{
					setState(1060);
					functionParList();
					}
				}

				setState(1063);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new NumVarIntegerFNContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1064);
				match(FN_INTEGER);
				setState(1065);
				match(LPAREN);
				setState(1067);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (((((_la - 14)) & ~0x3f) == 0 && ((1L << (_la - 14)) & ((1L << (FALSE - 14)) | (1L << (FLOAT_TOKEN - 14)) | (1L << (INT - 14)) | (1L << (TRUE - 14)) | (1L << (INKEY - 14)) | (1L << (INKEYS - 14)) | (1L << (GET - 14)) | (1L << (GETS - 14)) | (1L << (RED - 14)) | (1L << (GREEN - 14)) | (1L << (YELLOW - 14)) | (1L << (BLUE - 14)) | (1L << (MAGENTA - 14)) | (1L << (CYAN - 14)) | (1L << (WHITE - 14)) | (1L << (BLACK - 14)) | (1L << (MONO - 14)) | (1L << (PROP - 14)) | (1L << (SERIF - 14)))) != 0) || ((((_la - 78)) & ~0x3f) == 0 && ((1L << (_la - 78)) & ((1L << (CREATESHAPE - 78)) | (1L << (CREATEOBJECT - 78)) | (1L << (BGETH - 78)) | (1L << (EOFH - 78)) | (1L << (GETSH - 78)) | (1L << (OPENIN - 78)) | (1L << (OPENOUT - 78)) | (1L << (OPENUP - 78)) | (1L << (PTRH - 78)) | (1L << (COLOUR - 78)) | (1L << (LOADTYPEFACE - 78)) | (1L << (POINT - 78)) | (1L << (SCREENWIDTH - 78)) | (1L << (SCREENHEIGHT - 78)) | (1L << (LOADSPRITE - 78)) | (1L << (CREATESPRITE - 78)) | (1L << (TIME - 78)) | (1L << (PI - 78)) | (1L << (SQR - 78)) | (1L << (LN - 78)) | (1L << (LOG - 78)) | (1L << (EXP - 78)) | (1L << (ATN - 78)) | (1L << (TAN - 78)) | (1L << (COS - 78)) | (1L << (SIN - 78)) | (1L << (ABS - 78)) | (1L << (ACS - 78)) | (1L << (ASN - 78)) | (1L << (DEG - 78)) | (1L << (RAD - 78)) | (1L << (SGN - 78)) | (1L << (ASC - 78)))) != 0) || ((((_la - 142)) & ~0x3f) == 0 && ((1L << (_la - 142)) & ((1L << (LEN - 142)) | (1L << (INSTR - 142)) | (1L << (VAL - 142)) | (1L << (TIMES - 142)) | (1L << (STRS - 142)) | (1L << (STRINGS - 142)) | (1L << (CHRS - 142)) | (1L << (LEFTS - 142)) | (1L << (MIDS - 142)) | (1L << (RIGHTS - 142)) | (1L << (RND - 142)) | (1L << (RND0 - 142)) | (1L << (RND1 - 142)) | (1L << (NOT - 142)) | (1L << (PLUS - 142)) | (1L << (MINUS - 142)) | (1L << (LPAREN - 142)) | (1L << (STRINGLITERAL - 142)) | (1L << (FN_INTEGER - 142)) | (1L << (FN_FLOAT - 142)) | (1L << (FN_STRING - 142)) | (1L << (VARIABLE_FLOAT - 142)) | (1L << (VARIABLE_INTEGER - 142)) | (1L << (VARIABLE_STRING - 142)) | (1L << (VARIABLE_TYPE - 142)) | (1L << (HEXNUMBER - 142)) | (1L << (BINARYNUMBER - 142)) | (1L << (NUMBER - 142)) | (1L << (FLOAT - 142)))) != 0)) {
					{
					setState(1066);
					functionParList();
					}
				}

				setState(1069);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new NumVarFloatContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1070);
				varName();
				}
				break;
			case 8:
				_localctx = new NumVarIntegerContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1071);
				varNameInteger();
				}
				break;
			case 9:
				_localctx = new NumVarFloatFieldContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(1072);
				typeVar();
				setState(1073);
				varName();
				}
				break;
			case 10:
				_localctx = new NumVarIntegerFieldContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(1075);
				typeVar();
				setState(1076);
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
			setState(1105);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,71,_ctx) ) {
			case 1:
				_localctx = new NumVarStringArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1080);
				varNameString();
				setState(1081);
				match(LPAREN);
				setState(1082);
				numExpr(0);
				setState(1085);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(1083);
					match(COMMA);
					setState(1084);
					numExpr(0);
					}
				}

				setState(1087);
				match(RPAREN);
				}
				break;
			case 2:
				_localctx = new NumVarStringFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1089);
				typeVar();
				setState(1090);
				match(LPAREN);
				setState(1091);
				numExpr(0);
				setState(1092);
				match(RPAREN);
				setState(1093);
				varNameString();
				}
				break;
			case 3:
				_localctx = new NumVarStringContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1095);
				varNameString();
				}
				break;
			case 4:
				_localctx = new NumVarStringFieldContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1096);
				typeVar();
				setState(1097);
				varNameString();
				}
				break;
			case 5:
				_localctx = new NumVarStringFNContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1099);
				match(FN_STRING);
				setState(1100);
				match(LPAREN);
				setState(1102);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (((((_la - 14)) & ~0x3f) == 0 && ((1L << (_la - 14)) & ((1L << (FALSE - 14)) | (1L << (FLOAT_TOKEN - 14)) | (1L << (INT - 14)) | (1L << (TRUE - 14)) | (1L << (INKEY - 14)) | (1L << (INKEYS - 14)) | (1L << (GET - 14)) | (1L << (GETS - 14)) | (1L << (RED - 14)) | (1L << (GREEN - 14)) | (1L << (YELLOW - 14)) | (1L << (BLUE - 14)) | (1L << (MAGENTA - 14)) | (1L << (CYAN - 14)) | (1L << (WHITE - 14)) | (1L << (BLACK - 14)) | (1L << (MONO - 14)) | (1L << (PROP - 14)) | (1L << (SERIF - 14)))) != 0) || ((((_la - 78)) & ~0x3f) == 0 && ((1L << (_la - 78)) & ((1L << (CREATESHAPE - 78)) | (1L << (CREATEOBJECT - 78)) | (1L << (BGETH - 78)) | (1L << (EOFH - 78)) | (1L << (GETSH - 78)) | (1L << (OPENIN - 78)) | (1L << (OPENOUT - 78)) | (1L << (OPENUP - 78)) | (1L << (PTRH - 78)) | (1L << (COLOUR - 78)) | (1L << (LOADTYPEFACE - 78)) | (1L << (POINT - 78)) | (1L << (SCREENWIDTH - 78)) | (1L << (SCREENHEIGHT - 78)) | (1L << (LOADSPRITE - 78)) | (1L << (CREATESPRITE - 78)) | (1L << (TIME - 78)) | (1L << (PI - 78)) | (1L << (SQR - 78)) | (1L << (LN - 78)) | (1L << (LOG - 78)) | (1L << (EXP - 78)) | (1L << (ATN - 78)) | (1L << (TAN - 78)) | (1L << (COS - 78)) | (1L << (SIN - 78)) | (1L << (ABS - 78)) | (1L << (ACS - 78)) | (1L << (ASN - 78)) | (1L << (DEG - 78)) | (1L << (RAD - 78)) | (1L << (SGN - 78)) | (1L << (ASC - 78)))) != 0) || ((((_la - 142)) & ~0x3f) == 0 && ((1L << (_la - 142)) & ((1L << (LEN - 142)) | (1L << (INSTR - 142)) | (1L << (VAL - 142)) | (1L << (TIMES - 142)) | (1L << (STRS - 142)) | (1L << (STRINGS - 142)) | (1L << (CHRS - 142)) | (1L << (LEFTS - 142)) | (1L << (MIDS - 142)) | (1L << (RIGHTS - 142)) | (1L << (RND - 142)) | (1L << (RND0 - 142)) | (1L << (RND1 - 142)) | (1L << (NOT - 142)) | (1L << (PLUS - 142)) | (1L << (MINUS - 142)) | (1L << (LPAREN - 142)) | (1L << (STRINGLITERAL - 142)) | (1L << (FN_INTEGER - 142)) | (1L << (FN_FLOAT - 142)) | (1L << (FN_STRING - 142)) | (1L << (VARIABLE_FLOAT - 142)) | (1L << (VARIABLE_INTEGER - 142)) | (1L << (VARIABLE_STRING - 142)) | (1L << (VARIABLE_TYPE - 142)) | (1L << (HEXNUMBER - 142)) | (1L << (BINARYNUMBER - 142)) | (1L << (NUMBER - 142)) | (1L << (FLOAT - 142)))) != 0)) {
					{
					setState(1101);
					functionParList();
					}
				}

				setState(1104);
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
			setState(1110);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(1107);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(1108);
				varNameInteger();
				}
				break;
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(1109);
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
			setState(1114);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(1112);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(1113);
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
			setState(1116);
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
			setState(1118);
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
			setState(1120);
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
			setState(1122);
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
			setState(1163);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,76,_ctx) ) {
			case 1:
				_localctx = new VarDeclIndContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1124);
				justVar();
				}
				break;
			case 2:
				_localctx = new VarDeclArrayedContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1125);
				justVar();
				setState(1136);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==LPAREN) {
					{
					{
					setState(1126);
					match(LPAREN);
					setState(1127);
					numExpr(0);
					setState(1130);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==COMMA) {
						{
						setState(1128);
						match(COMMA);
						setState(1129);
						numExpr(0);
						}
					}

					setState(1132);
					match(RPAREN);
					}
					}
					setState(1138);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 3:
				_localctx = new VarDeclTypeVarContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1139);
				typeVar();
				setState(1140);
				varName();
				}
				break;
			case 4:
				_localctx = new VarDeclTypeVarContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1142);
				typeVar();
				setState(1143);
				varNameInteger();
				}
				break;
			case 5:
				_localctx = new VarDeclTypeVarArrayedContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1145);
				typeVar();
				setState(1146);
				match(LPAREN);
				setState(1147);
				numExpr(0);
				setState(1148);
				match(RPAREN);
				setState(1149);
				varName();
				}
				break;
			case 6:
				_localctx = new VarDeclTypeVarArrayedContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1151);
				typeVar();
				setState(1152);
				match(LPAREN);
				setState(1153);
				numExpr(0);
				setState(1154);
				match(RPAREN);
				setState(1155);
				varNameInteger();
				}
				break;
			case 7:
				_localctx = new VarDeclTypeContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1157);
				typeVar();
				}
				break;
			case 8:
				_localctx = new VarDeclTypeArrayedContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1158);
				typeVar();
				setState(1159);
				match(LPAREN);
				setState(1160);
				numExpr(0);
				setState(1161);
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
			setState(1184);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
			case VARIABLE_INTEGER:
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 1);
				{
				setState(1165);
				justVar();
				setState(1166);
				match(LPAREN);
				setState(1167);
				numExpr(0);
				setState(1172);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(1168);
					match(COMMA);
					setState(1169);
					numExpr(0);
					}
					}
					setState(1174);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1175);
				match(RPAREN);
				}
				break;
			case VARIABLE_TYPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(1177);
				typeVar();
				setState(1178);
				match(LPAREN);
				setState(1179);
				numExpr(0);
				setState(1180);
				match(COMMA);
				setState(1181);
				varName();
				setState(1182);
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
			setState(1186);
			varDecl();
			setState(1191);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1187);
				match(COMMA);
				setState(1188);
				varDecl();
				}
				}
				setState(1193);
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
			setState(1195);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN) {
				{
				setState(1194);
				match(RETURN);
				}
			}

			setState(1197);
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
			setState(1199);
			functionVar();
			setState(1204);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1200);
				match(COMMA);
				setState(1201);
				functionVar();
				}
				}
				setState(1206);
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
			setState(1207);
			expr();
			setState(1212);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1208);
				match(COMMA);
				setState(1209);
				expr();
				}
				}
				setState(1214);
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
			setState(1215);
			expr();
			setState(1220);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1216);
				match(COMMA);
				setState(1217);
				expr();
				}
				}
				setState(1222);
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
			setState(1234);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,85,_ctx) ) {
			case 1:
				_localctx = new PrintListExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1224);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TILDE) {
					{
					setState(1223);
					match(TILDE);
					}
				}

				setState(1226);
				expr();
				}
				break;
			case 2:
				_localctx = new PrintListSPCPContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1227);
				match(SPC);
				setState(1228);
				match(LPAREN);
				setState(1229);
				numExpr(0);
				setState(1230);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new PrintListSPCContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1232);
				match(SPC);
				setState(1233);
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
			setState(1237); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(1236);
				match(TICK);
				}
				}
				setState(1239); 
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
			setState(1244);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COMMA:
				enterOuterAlt(_localctx, 1);
				{
				setState(1241);
				match(COMMA);
				}
				break;
			case SEMICOLON:
				enterOuterAlt(_localctx, 2);
				{
				setState(1242);
				match(SEMICOLON);
				}
				break;
			case TICK:
				enterOuterAlt(_localctx, 3);
				{
				setState(1243);
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
			setState(1247);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TICK) {
				{
				setState(1246);
				printListTick();
				}
			}

			setState(1250);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(1249);
				((PrintListContext)_localctx).s1 = match(SEMICOLON);
				}
			}

			setState(1252);
			printListItem();
			setState(1258);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,90,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1253);
					printListSeparator();
					setState(1254);
					printListItem();
					}
					} 
				}
				setState(1260);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,90,_ctx);
			}
			setState(1262);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(1261);
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
			setState(1266);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,92,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1264);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1265);
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
			setState(1274);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,93,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1268);
				numberInteger();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1269);
				numberFloat();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1270);
				numberHex();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1271);
				numberBinary();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1272);
				numColours();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1273);
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
			setState(1277);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(1276);
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

			setState(1279);
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
			setState(1281);
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
			setState(1283);
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
			setState(1286);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(1285);
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

			setState(1288);
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
			setState(1349);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,96,_ctx) ) {
			case 1:
				_localctx = new StrFuncTIMESContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1290);
				match(TIMES);
				}
				break;
			case 2:
				_localctx = new StrFuncCHRSContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1291);
				match(CHRS);
				setState(1292);
				match(LPAREN);
				setState(1293);
				numExpr(0);
				setState(1294);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new StrFuncLEFTSContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1296);
				match(LEFTS);
				setState(1297);
				match(LPAREN);
				setState(1298);
				strExpr(0);
				setState(1299);
				match(COMMA);
				setState(1300);
				numExpr(0);
				setState(1301);
				match(RPAREN);
				}
				break;
			case 4:
				_localctx = new StrFuncMIDS3Context(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1303);
				match(MIDS);
				setState(1304);
				match(LPAREN);
				setState(1305);
				strExpr(0);
				setState(1306);
				match(COMMA);
				setState(1307);
				numExpr(0);
				setState(1308);
				match(COMMA);
				setState(1309);
				numExpr(0);
				setState(1310);
				match(RPAREN);
				}
				break;
			case 5:
				_localctx = new StrFuncMIDS2Context(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1312);
				match(MIDS);
				setState(1313);
				match(LPAREN);
				setState(1314);
				strExpr(0);
				setState(1315);
				match(COMMA);
				setState(1316);
				numExpr(0);
				setState(1317);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new StrFuncRIGHTSContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1319);
				match(RIGHTS);
				setState(1320);
				match(LPAREN);
				setState(1321);
				strExpr(0);
				setState(1322);
				match(COMMA);
				setState(1323);
				numExpr(0);
				setState(1324);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new StrFuncSTRSContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1326);
				match(STRS);
				setState(1327);
				match(LPAREN);
				setState(1328);
				numExpr(0);
				setState(1329);
				match(RPAREN);
				}
				break;
			case 8:
				_localctx = new StrFuncSTRSHEXContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1331);
				match(STRS);
				setState(1332);
				match(TILDE);
				setState(1333);
				match(LPAREN);
				setState(1334);
				numExpr(0);
				setState(1335);
				match(RPAREN);
				}
				break;
			case 9:
				_localctx = new StrFuncSTRINGSContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(1337);
				match(STRINGS);
				setState(1338);
				match(LPAREN);
				setState(1339);
				numExpr(0);
				setState(1340);
				match(COMMA);
				setState(1341);
				strExpr(0);
				setState(1342);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new StrFuncINKEYSContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(1344);
				match(INKEYS);
				setState(1345);
				numExpr(0);
				}
				break;
			case 11:
				_localctx = new StrFuncGETSContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(1346);
				match(GETS);
				}
				break;
			case 12:
				_localctx = new StrFuncGETSHContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(1347);
				match(GETSH);
				setState(1348);
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
			setState(1351);
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
			setState(1361);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LPAREN:
				{
				setState(1354);
				match(LPAREN);
				setState(1355);
				strExpr(0);
				setState(1356);
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
				setState(1358);
				strFunc();
				}
				break;
			case FN_STRING:
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(1359);
				strVar();
				}
				break;
			case STRINGLITERAL:
				{
				setState(1360);
				string();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(1368);
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
					setState(1363);
					if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
					setState(1364);
					match(PLUS);
					setState(1365);
					strExpr(4);
					}
					} 
				}
				setState(1370);
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
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
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
			setState(1589);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,100,_ctx) ) {
			case 1:
				_localctx = new NumFuncPIContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1371);
				match(PI);
				}
				break;
			case 2:
				_localctx = new NumFuncFALSEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1372);
				match(FALSE);
				}
				break;
			case 3:
				_localctx = new NumFuncTRUEContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1373);
				match(TRUE);
				}
				break;
			case 4:
				_localctx = new NumFuncTIMEContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1374);
				match(TIME);
				}
				break;
			case 5:
				_localctx = new NumFuncRNDRANGEContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1375);
				match(RND);
				setState(1376);
				match(LPAREN);
				setState(1377);
				numExpr(0);
				setState(1378);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new NumFuncRNDContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1380);
				match(RND);
				}
				break;
			case 7:
				_localctx = new NumFuncRND0Context(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1381);
				match(RND0);
				}
				break;
			case 8:
				_localctx = new NumFuncRND1Context(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1382);
				match(RND1);
				}
				break;
			case 9:
				_localctx = new NumFuncLNContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(1383);
				match(LN);
				setState(1384);
				match(LPAREN);
				setState(1385);
				numExpr(0);
				setState(1386);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new NumFuncLOGContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(1388);
				match(LOG);
				setState(1389);
				match(LPAREN);
				setState(1390);
				numExpr(0);
				setState(1391);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new NumFuncEXPContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(1393);
				match(EXP);
				setState(1394);
				match(LPAREN);
				setState(1395);
				numExpr(0);
				setState(1396);
				match(RPAREN);
				}
				break;
			case 12:
				_localctx = new NumFuncATNContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(1398);
				match(ATN);
				setState(1399);
				match(LPAREN);
				setState(1400);
				numExpr(0);
				setState(1401);
				match(RPAREN);
				}
				break;
			case 13:
				_localctx = new NumFuncTANContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(1403);
				match(TAN);
				setState(1404);
				match(LPAREN);
				setState(1405);
				numExpr(0);
				setState(1406);
				match(RPAREN);
				}
				break;
			case 14:
				_localctx = new NumFuncCOSContext(_localctx);
				enterOuterAlt(_localctx, 14);
				{
				setState(1408);
				match(COS);
				setState(1409);
				match(LPAREN);
				setState(1410);
				numExpr(0);
				setState(1411);
				match(RPAREN);
				}
				break;
			case 15:
				_localctx = new NumFuncSINContext(_localctx);
				enterOuterAlt(_localctx, 15);
				{
				setState(1413);
				match(SIN);
				setState(1414);
				match(LPAREN);
				setState(1415);
				numExpr(0);
				setState(1416);
				match(RPAREN);
				}
				break;
			case 16:
				_localctx = new NumFuncABSContext(_localctx);
				enterOuterAlt(_localctx, 16);
				{
				setState(1418);
				match(ABS);
				setState(1419);
				match(LPAREN);
				setState(1420);
				numExpr(0);
				setState(1421);
				match(RPAREN);
				}
				break;
			case 17:
				_localctx = new NumFuncACSContext(_localctx);
				enterOuterAlt(_localctx, 17);
				{
				setState(1423);
				match(ACS);
				setState(1424);
				match(LPAREN);
				setState(1425);
				numExpr(0);
				setState(1426);
				match(RPAREN);
				}
				break;
			case 18:
				_localctx = new NumFuncASNContext(_localctx);
				enterOuterAlt(_localctx, 18);
				{
				setState(1428);
				match(ASN);
				setState(1429);
				match(LPAREN);
				setState(1430);
				numExpr(0);
				setState(1431);
				match(RPAREN);
				}
				break;
			case 19:
				_localctx = new NumFuncDEGContext(_localctx);
				enterOuterAlt(_localctx, 19);
				{
				setState(1433);
				match(DEG);
				setState(1434);
				match(LPAREN);
				setState(1435);
				numExpr(0);
				setState(1436);
				match(RPAREN);
				}
				break;
			case 20:
				_localctx = new NumFuncRADContext(_localctx);
				enterOuterAlt(_localctx, 20);
				{
				setState(1438);
				match(RAD);
				setState(1439);
				match(LPAREN);
				setState(1440);
				numExpr(0);
				setState(1441);
				match(RPAREN);
				}
				break;
			case 21:
				_localctx = new NumFuncSQRContext(_localctx);
				enterOuterAlt(_localctx, 21);
				{
				setState(1443);
				match(SQR);
				setState(1444);
				match(LPAREN);
				setState(1445);
				numExpr(0);
				setState(1446);
				match(RPAREN);
				}
				break;
			case 22:
				_localctx = new NumFuncSGNContext(_localctx);
				enterOuterAlt(_localctx, 22);
				{
				setState(1448);
				match(SGN);
				setState(1449);
				match(LPAREN);
				setState(1450);
				numExpr(0);
				setState(1451);
				match(RPAREN);
				}
				break;
			case 23:
				_localctx = new NumFuncGETContext(_localctx);
				enterOuterAlt(_localctx, 23);
				{
				setState(1453);
				match(GET);
				}
				break;
			case 24:
				_localctx = new NumFuncINKEYContext(_localctx);
				enterOuterAlt(_localctx, 24);
				{
				setState(1454);
				match(INKEY);
				setState(1455);
				match(LPAREN);
				setState(1456);
				numExpr(0);
				setState(1457);
				match(RPAREN);
				}
				break;
			case 25:
				_localctx = new NumFuncINTContext(_localctx);
				enterOuterAlt(_localctx, 25);
				{
				setState(1459);
				match(INT);
				setState(1460);
				match(LPAREN);
				setState(1461);
				numExpr(0);
				setState(1462);
				match(RPAREN);
				}
				break;
			case 26:
				_localctx = new NumFuncFLOATContext(_localctx);
				enterOuterAlt(_localctx, 26);
				{
				setState(1464);
				match(FLOAT_TOKEN);
				setState(1465);
				match(LPAREN);
				setState(1466);
				numExpr(0);
				setState(1467);
				match(RPAREN);
				}
				break;
			case 27:
				_localctx = new NumFuncSCREENWIDTHContext(_localctx);
				enterOuterAlt(_localctx, 27);
				{
				setState(1469);
				match(SCREENWIDTH);
				}
				break;
			case 28:
				_localctx = new NumFuncSCREENHEIGHTContext(_localctx);
				enterOuterAlt(_localctx, 28);
				{
				setState(1470);
				match(SCREENHEIGHT);
				}
				break;
			case 29:
				_localctx = new NumFuncPOINTContext(_localctx);
				enterOuterAlt(_localctx, 29);
				{
				setState(1471);
				match(POINT);
				setState(1472);
				match(LPAREN);
				setState(1473);
				numExpr(0);
				setState(1474);
				match(COMMA);
				setState(1475);
				numExpr(0);
				setState(1476);
				match(RPAREN);
				}
				break;
			case 30:
				_localctx = new NumFuncCOLOURContext(_localctx);
				enterOuterAlt(_localctx, 30);
				{
				setState(1478);
				match(COLOUR);
				setState(1479);
				match(LPAREN);
				setState(1480);
				numExpr(0);
				setState(1481);
				match(COMMA);
				setState(1482);
				numExpr(0);
				setState(1483);
				match(COMMA);
				setState(1484);
				numExpr(0);
				setState(1485);
				match(RPAREN);
				}
				break;
			case 31:
				_localctx = new NumFuncCOLOURContext(_localctx);
				enterOuterAlt(_localctx, 31);
				{
				setState(1487);
				match(COLOUR);
				setState(1488);
				match(LPAREN);
				setState(1489);
				numExpr(0);
				setState(1490);
				match(COMMA);
				setState(1491);
				numExpr(0);
				setState(1492);
				match(COMMA);
				setState(1493);
				numExpr(0);
				setState(1494);
				match(COMMA);
				setState(1495);
				numExpr(0);
				setState(1496);
				match(RPAREN);
				}
				break;
			case 32:
				_localctx = new NumFuncLOADTYPEFACEContext(_localctx);
				enterOuterAlt(_localctx, 32);
				{
				setState(1498);
				match(LOADTYPEFACE);
				setState(1499);
				match(LPAREN);
				setState(1500);
				strExpr(0);
				setState(1501);
				match(RPAREN);
				}
				break;
			case 33:
				_localctx = new NumFuncCREATESPRITEContext(_localctx);
				enterOuterAlt(_localctx, 33);
				{
				setState(1503);
				match(CREATESPRITE);
				setState(1504);
				match(LPAREN);
				setState(1505);
				numExpr(0);
				setState(1506);
				match(COMMA);
				setState(1507);
				numExpr(0);
				setState(1508);
				match(COMMA);
				setState(1509);
				numExpr(0);
				setState(1510);
				match(RPAREN);
				}
				break;
			case 34:
				_localctx = new NumFuncLOADSPRITEContext(_localctx);
				enterOuterAlt(_localctx, 34);
				{
				setState(1512);
				match(LOADSPRITE);
				setState(1513);
				match(LPAREN);
				setState(1514);
				strExpr(0);
				setState(1515);
				match(RPAREN);
				}
				break;
			case 35:
				_localctx = new NumFuncSHAPEContext(_localctx);
				enterOuterAlt(_localctx, 35);
				{
				setState(1517);
				match(CREATESHAPE);
				setState(1518);
				varNameType();
				setState(1519);
				match(COMMA);
				setState(1520);
				varNameType();
				}
				break;
			case 36:
				_localctx = new NumFuncOBJECTContext(_localctx);
				enterOuterAlt(_localctx, 36);
				{
				setState(1522);
				match(CREATEOBJECT);
				setState(1523);
				numExpr(0);
				setState(1524);
				match(COMMA);
				setState(1525);
				numExpr(0);
				setState(1526);
				match(COMMA);
				setState(1527);
				numExpr(0);
				setState(1528);
				match(COMMA);
				setState(1529);
				numExpr(0);
				setState(1530);
				match(COMMA);
				setState(1531);
				numExpr(0);
				setState(1532);
				match(COMMA);
				setState(1533);
				numExpr(0);
				setState(1534);
				match(COMMA);
				setState(1535);
				numExpr(0);
				setState(1536);
				match(COMMA);
				setState(1537);
				numExpr(0);
				setState(1538);
				match(COMMA);
				setState(1544);
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
				case MONO:
				case PROP:
				case SERIF:
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
					setState(1539);
					numExpr(0);
					}
					break;
				case SOLID:
					{
					setState(1540);
					match(SOLID);
					}
					break;
				case WIREFRAME:
					{
					setState(1541);
					match(WIREFRAME);
					}
					break;
				case SHADED:
					{
					setState(1542);
					match(SHADED);
					}
					break;
				case FILLEDWIREFRAME:
					{
					setState(1543);
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
				setState(1546);
				match(BGETH);
				setState(1547);
				numExpr(0);
				}
				break;
			case 38:
				_localctx = new NumFuncEOFHContext(_localctx);
				enterOuterAlt(_localctx, 38);
				{
				setState(1548);
				match(EOFH);
				setState(1549);
				numExpr(0);
				}
				break;
			case 39:
				_localctx = new NumFuncOPENINContext(_localctx);
				enterOuterAlt(_localctx, 39);
				{
				setState(1550);
				match(OPENIN);
				setState(1551);
				match(LPAREN);
				setState(1552);
				strExpr(0);
				setState(1553);
				match(RPAREN);
				}
				break;
			case 40:
				_localctx = new NumFuncOPENOUTContext(_localctx);
				enterOuterAlt(_localctx, 40);
				{
				setState(1555);
				match(OPENOUT);
				setState(1556);
				match(LPAREN);
				setState(1557);
				strExpr(0);
				setState(1558);
				match(RPAREN);
				}
				break;
			case 41:
				_localctx = new NumFuncOPENUPContext(_localctx);
				enterOuterAlt(_localctx, 41);
				{
				setState(1560);
				match(OPENUP);
				setState(1561);
				match(LPAREN);
				setState(1562);
				strExpr(0);
				setState(1563);
				match(RPAREN);
				}
				break;
			case 42:
				_localctx = new NumFuncPTRContext(_localctx);
				enterOuterAlt(_localctx, 42);
				{
				setState(1565);
				match(PTRH);
				setState(1566);
				numExpr(0);
				}
				break;
			case 43:
				_localctx = new NumFuncASCContext(_localctx);
				enterOuterAlt(_localctx, 43);
				{
				setState(1567);
				match(ASC);
				setState(1568);
				strExpr(0);
				}
				break;
			case 44:
				_localctx = new NumFuncLENContext(_localctx);
				enterOuterAlt(_localctx, 44);
				{
				setState(1569);
				match(LEN);
				setState(1570);
				strExpr(0);
				}
				break;
			case 45:
				_localctx = new NumFuncINSTR2Context(_localctx);
				enterOuterAlt(_localctx, 45);
				{
				setState(1571);
				match(INSTR);
				setState(1572);
				match(LPAREN);
				setState(1573);
				strExpr(0);
				setState(1574);
				match(COMMA);
				setState(1575);
				strExpr(0);
				setState(1576);
				match(RPAREN);
				}
				break;
			case 46:
				_localctx = new NumFuncINSTR3Context(_localctx);
				enterOuterAlt(_localctx, 46);
				{
				setState(1578);
				match(INSTR);
				setState(1579);
				match(LPAREN);
				setState(1580);
				strExpr(0);
				setState(1581);
				match(COMMA);
				setState(1582);
				strExpr(0);
				setState(1583);
				match(COMMA);
				setState(1584);
				numExpr(0);
				setState(1585);
				match(RPAREN);
				}
				break;
			case 47:
				_localctx = new NumFuncVALContext(_localctx);
				enterOuterAlt(_localctx, 47);
				{
				setState(1587);
				match(VAL);
				setState(1588);
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
			setState(1614);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,101,_ctx) ) {
			case 1:
				{
				_localctx = new NumExprVarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(1592);
				numVar();
				}
				break;
			case 2:
				{
				_localctx = new NumExprNumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1593);
				number();
				}
				break;
			case 3:
				{
				_localctx = new NumExprNestedContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1594);
				match(LPAREN);
				setState(1595);
				numExpr(0);
				setState(1596);
				match(RPAREN);
				}
				break;
			case 4:
				{
				_localctx = new NumExprUnaryContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1598);
				match(MINUS);
				setState(1599);
				numExpr(12);
				}
				break;
			case 5:
				{
				_localctx = new NumExprNOTContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1600);
				match(NOT);
				setState(1601);
				numExpr(11);
				}
				break;
			case 6:
				{
				_localctx = new NumExprFuncContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1602);
				numFunc();
				}
				break;
			case 7:
				{
				_localctx = new NumExprStrRelopContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1603);
				strExpr(0);
				setState(1604);
				_la = _input.LA(1);
				if ( !(((((_la - 155)) & ~0x3f) == 0 && ((1L << (_la - 155)) & ((1L << (EQ - 155)) | (1L << (NE - 155)) | (1L << (GT - 155)) | (1L << (GE - 155)) | (1L << (LT - 155)) | (1L << (LE - 155)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(1605);
				strExpr(0);
				}
				break;
			case 8:
				{
				_localctx = new NumFuncArraySizeContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1607);
				match(LEN);
				setState(1608);
				match(LPAREN);
				setState(1609);
				justVar();
				setState(1610);
				match(LPAREN);
				setState(1611);
				match(RPAREN);
				setState(1612);
				match(RPAREN);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1639);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,103,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1637);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,102,_ctx) ) {
					case 1:
						{
						_localctx = new NumExprHatContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1616);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(1617);
						match(HAT);
						setState(1618);
						numExpr(9);
						}
						break;
					case 2:
						{
						_localctx = new NumExprMultiplyDivideContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1619);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(1620);
						_la = _input.LA(1);
						if ( !(_la==MULTIPLY || _la==DIVIDE) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1621);
						numExpr(9);
						}
						break;
					case 3:
						{
						_localctx = new NumExprDIVMODContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1622);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(1623);
						_la = _input.LA(1);
						if ( !(_la==MOD || _la==DIV) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1624);
						numExpr(8);
						}
						break;
					case 4:
						{
						_localctx = new NumExprAddSubtractContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1625);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(1626);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1627);
						numExpr(7);
						}
						break;
					case 5:
						{
						_localctx = new NumExprSHLSHRContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1628);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(1629);
						_la = _input.LA(1);
						if ( !(_la==SHL || _la==SHR) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1630);
						numExpr(6);
						}
						break;
					case 6:
						{
						_localctx = new NumExprNumRelopContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1631);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(1632);
						_la = _input.LA(1);
						if ( !(((((_la - 155)) & ~0x3f) == 0 && ((1L << (_la - 155)) & ((1L << (EQ - 155)) | (1L << (NE - 155)) | (1L << (GT - 155)) | (1L << (GE - 155)) | (1L << (LT - 155)) | (1L << (LE - 155)))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1633);
						numExpr(5);
						}
						break;
					case 7:
						{
						_localctx = new NumExprANDOREORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1634);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1635);
						_la = _input.LA(1);
						if ( !(((((_la - 162)) & ~0x3f) == 0 && ((1L << (_la - 162)) & ((1L << (AND - 162)) | (1L << (OR - 162)) | (1L << (EOR - 162)))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1636);
						numExpr(3);
						}
						break;
					}
					} 
				}
				setState(1641);
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
			setState(1642);
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
		public TerminalNode MONO() { return getToken(DARICParser.MONO, 0); }
		public TerminalNode PROP() { return getToken(DARICParser.PROP, 0); }
		public TerminalNode SERIF() { return getToken(DARICParser.SERIF, 0); }
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
			setState(1644);
			_la = _input.LA(1);
			if ( !(((((_la - 68)) & ~0x3f) == 0 && ((1L << (_la - 68)) & ((1L << (MONO - 68)) | (1L << (PROP - 68)) | (1L << (SERIF - 68)))) != 0)) ) {
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00d0\u0671\4\2\t"+
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
		"\3\67\3\67\3\67\3\67\3\67\3\67\3\67\5\67\u02db\n\67\38\38\38\38\38\38"+
		"\38\38\38\38\38\38\38\38\38\38\58\u02ed\n8\39\39\3:\3:\3;\3;\3;\3;\3;"+
		"\3;\3;\3;\3;\3;\3;\3;\3;\3;\5;\u0301\n;\3<\3<\3=\3=\3=\3=\3=\3=\3=\3="+
		"\3=\3=\3=\3=\3=\3=\3=\5=\u0314\n=\3>\3>\3>\3>\3>\3>\3>\3>\3>\3?\3?\3?"+
		"\3?\3?\3?\3?\3?\3?\3?\3?\3?\3?\3?\3?\3?\3?\3?\3?\5?\u0332\n?\3@\3@\3@"+
		"\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@"+
		"\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\3@\5@\u0363"+
		"\n@\3A\3A\3A\3A\3A\3B\3B\3B\3B\3B\3B\3B\3B\3B\3C\3C\3D\3D\3D\3D\3D\3D"+
		"\3D\3D\3D\3D\3D\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3F\3F\3F\3F\3F\3F\3F"+
		"\3F\3F\3F\3F\3G\3G\3H\3H\3H\3H\3H\3H\3H\3H\3H\3I\3I\3J\3J\3J\3J\3J\3J"+
		"\3J\3J\3J\3J\3J\3J\3J\3K\3K\3K\3L\3L\3M\3M\3M\3M\3M\3M\3M\3M\3M\3M\3M"+
		"\3M\3M\3M\3N\3N\3N\3N\3N\3N\3N\3N\3N\3N\3N\3N\3N\3N\3O\3O\3O\3O\3O\3O"+
		"\3O\3O\3O\3P\3P\3P\3P\3P\3P\3P\3P\3P\3Q\3Q\3Q\3Q\3Q\3R\3R\3R\3S\5S\u03ec"+
		"\nS\3S\3S\3S\3S\7S\u03f2\nS\fS\16S\u03f5\13S\3S\3S\3S\3T\3T\3U\3U\5U\u03fe"+
		"\nU\3V\3V\3V\5V\u0403\nV\3W\3W\3X\3X\3X\3X\3X\5X\u040c\nX\3X\3X\3X\3X"+
		"\3X\3X\3X\5X\u0415\nX\3X\3X\3X\3X\3X\3X\3X\3X\3X\3X\3X\3X\3X\3X\3X\3X"+
		"\3X\5X\u0428\nX\3X\3X\3X\3X\5X\u042e\nX\3X\3X\3X\3X\3X\3X\3X\3X\3X\5X"+
		"\u0439\nX\3Y\3Y\3Y\3Y\3Y\5Y\u0440\nY\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y"+
		"\3Y\3Y\3Y\3Y\5Y\u0451\nY\3Y\5Y\u0454\nY\3Z\3Z\3Z\5Z\u0459\nZ\3[\3[\5["+
		"\u045d\n[\3\\\3\\\3]\3]\3^\3^\3_\3_\3`\3`\3`\3`\3`\3`\5`\u046d\n`\3`\3"+
		"`\7`\u0471\n`\f`\16`\u0474\13`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`"+
		"\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\5`\u048e\n`\3a\3a\3a\3a\3a\7a\u0495"+
		"\na\fa\16a\u0498\13a\3a\3a\3a\3a\3a\3a\3a\3a\3a\5a\u04a3\na\3b\3b\3b\7"+
		"b\u04a8\nb\fb\16b\u04ab\13b\3c\5c\u04ae\nc\3c\3c\3d\3d\3d\7d\u04b5\nd"+
		"\fd\16d\u04b8\13d\3e\3e\3e\7e\u04bd\ne\fe\16e\u04c0\13e\3f\3f\3f\7f\u04c5"+
		"\nf\ff\16f\u04c8\13f\3g\5g\u04cb\ng\3g\3g\3g\3g\3g\3g\3g\3g\5g\u04d5\n"+
		"g\3h\6h\u04d8\nh\rh\16h\u04d9\3i\3i\3i\5i\u04df\ni\3j\5j\u04e2\nj\3j\5"+
		"j\u04e5\nj\3j\3j\3j\3j\7j\u04eb\nj\fj\16j\u04ee\13j\3j\5j\u04f1\nj\3k"+
		"\3k\5k\u04f5\nk\3l\3l\3l\3l\3l\3l\5l\u04fd\nl\3m\5m\u0500\nm\3m\3m\3n"+
		"\3n\3o\3o\3p\5p\u0509\np\3p\3p\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q"+
		"\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q"+
		"\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q\3q"+
		"\5q\u0548\nq\3r\3r\3s\3s\3s\3s\3s\3s\3s\3s\5s\u0554\ns\3s\3s\3s\7s\u0559"+
		"\ns\fs\16s\u055c\13s\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3"+
		"t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3"+
		"t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3"+
		"t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3"+
		"t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3"+
		"t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3"+
		"t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3"+
		"t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\5t\u060b\nt\3"+
		"t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3"+
		"t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\3t\5t\u0638\n"+
		"t\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3"+
		"u\5u\u0651\nu\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3u\3"+
		"u\3u\3u\7u\u0668\nu\fu\16u\u066b\13u\3v\3v\3w\3w\3w\2\4\u00e4\u00e8x\2"+
		"\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJL"+
		"NPRTVXZ\\^`bdfhjlnprtvxz|~\u0080\u0082\u0084\u0086\u0088\u008a\u008c\u008e"+
		"\u0090\u0092\u0094\u0096\u0098\u009a\u009c\u009e\u00a0\u00a2\u00a4\u00a6"+
		"\u00a8\u00aa\u00ac\u00ae\u00b0\u00b2\u00b4\u00b6\u00b8\u00ba\u00bc\u00be"+
		"\u00c0\u00c2\u00c4\u00c6\u00c8\u00ca\u00cc\u00ce\u00d0\u00d2\u00d4\u00d6"+
		"\u00d8\u00da\u00dc\u00de\u00e0\u00e2\u00e4\u00e6\u00e8\u00ea\u00ec\2\16"+
		"\4\2((\u00c2\u00c2\4\2\31\31\35\35\3\2vw\3\2\u00c5\u00c7\3\2\u00aa\u00ab"+
		"\3\2\u009d\u00a2\3\2\u00ac\u00ad\3\2\u00a7\u00a8\3\2\u00ae\u00af\3\2\u00a4"+
		"\u00a6\3\2>E\3\2FH\2\u070b\2\u00f1\3\2\2\2\4\u010b\3\2\2\2\6\u010e\3\2"+
		"\2\2\b\u0115\3\2\2\2\n\u0124\3\2\2\2\f\u0126\3\2\2\2\16\u012e\3\2\2\2"+
		"\20\u014c\3\2\2\2\22\u014e\3\2\2\2\24\u0150\3\2\2\2\26\u0165\3\2\2\2\30"+
		"\u0168\3\2\2\2\32\u0172\3\2\2\2\34\u017d\3\2\2\2\36\u017f\3\2\2\2 \u0183"+
		"\3\2\2\2\"\u0190\3\2\2\2$\u019d\3\2\2\2&\u01b0\3\2\2\2(\u01bf\3\2\2\2"+
		"*\u01c6\3\2\2\2,\u01cd\3\2\2\2.\u01df\3\2\2\2\60\u01e2\3\2\2\2\62\u01e5"+
		"\3\2\2\2\64\u01ec\3\2\2\2\66\u01fb\3\2\2\28\u01fe\3\2\2\2:\u0205\3\2\2"+
		"\2<\u020e\3\2\2\2>\u0210\3\2\2\2@\u0215\3\2\2\2B\u0217\3\2\2\2D\u0219"+
		"\3\2\2\2F\u0226\3\2\2\2H\u022e\3\2\2\2J\u023d\3\2\2\2L\u023f\3\2\2\2N"+
		"\u0251\3\2\2\2P\u0255\3\2\2\2R\u025c\3\2\2\2T\u0261\3\2\2\2V\u0266\3\2"+
		"\2\2X\u0268\3\2\2\2Z\u0282\3\2\2\2\\\u0289\3\2\2\2^\u028b\3\2\2\2`\u0290"+
		"\3\2\2\2b\u0293\3\2\2\2d\u029a\3\2\2\2f\u029e\3\2\2\2h\u02c6\3\2\2\2j"+
		"\u02c8\3\2\2\2l\u02da\3\2\2\2n\u02ec\3\2\2\2p\u02ee\3\2\2\2r\u02f0\3\2"+
		"\2\2t\u0300\3\2\2\2v\u0302\3\2\2\2x\u0313\3\2\2\2z\u0315\3\2\2\2|\u0331"+
		"\3\2\2\2~\u0362\3\2\2\2\u0080\u0364\3\2\2\2\u0082\u0369\3\2\2\2\u0084"+
		"\u0372\3\2\2\2\u0086\u0374\3\2\2\2\u0088\u037f\3\2\2\2\u008a\u038a\3\2"+
		"\2\2\u008c\u0395\3\2\2\2\u008e\u0397\3\2\2\2\u0090\u03a0\3\2\2\2\u0092"+
		"\u03a2\3\2\2\2\u0094\u03af\3\2\2\2\u0096\u03b2\3\2\2\2\u0098\u03b4\3\2"+
		"\2\2\u009a\u03c2\3\2\2\2\u009c\u03d0\3\2\2\2\u009e\u03d9\3\2\2\2\u00a0"+
		"\u03e2\3\2\2\2\u00a2\u03e7\3\2\2\2\u00a4\u03eb\3\2\2\2\u00a6\u03f9\3\2"+
		"\2\2\u00a8\u03fd\3\2\2\2\u00aa\u0402\3\2\2\2\u00ac\u0404\3\2\2\2\u00ae"+
		"\u0438\3\2\2\2\u00b0\u0453\3\2\2\2\u00b2\u0458\3\2\2\2\u00b4\u045c\3\2"+
		"\2\2\u00b6\u045e\3\2\2\2\u00b8\u0460\3\2\2\2\u00ba\u0462\3\2\2\2\u00bc"+
		"\u0464\3\2\2\2\u00be\u048d\3\2\2\2\u00c0\u04a2\3\2\2\2\u00c2\u04a4\3\2"+
		"\2\2\u00c4\u04ad\3\2\2\2\u00c6\u04b1\3\2\2\2\u00c8\u04b9\3\2\2\2\u00ca"+
		"\u04c1\3\2\2\2\u00cc\u04d4\3\2\2\2\u00ce\u04d7\3\2\2\2\u00d0\u04de\3\2"+
		"\2\2\u00d2\u04e1\3\2\2\2\u00d4\u04f4\3\2\2\2\u00d6\u04fc\3\2\2\2\u00d8"+
		"\u04ff\3\2\2\2\u00da\u0503\3\2\2\2\u00dc\u0505\3\2\2\2\u00de\u0508\3\2"+
		"\2\2\u00e0\u0547\3\2\2\2\u00e2\u0549\3\2\2\2\u00e4\u0553\3\2\2\2\u00e6"+
		"\u0637\3\2\2\2\u00e8\u0650\3\2\2\2\u00ea\u066c\3\2\2\2\u00ec\u066e\3\2"+
		"\2\2\u00ee\u00f0\5\4\3\2\u00ef\u00ee\3\2\2\2\u00f0\u00f3\3\2\2\2\u00f1"+
		"\u00ef\3\2\2\2\u00f1\u00f2\3\2\2\2\u00f2\u00f4\3\2\2\2\u00f3\u00f1\3\2"+
		"\2\2\u00f4\u00f5\7\2\2\3\u00f5\3\3\2\2\2\u00f6\u010c\7\u00b6\2\2\u00f7"+
		"\u00f9\5\f\7\2\u00f8\u00f7\3\2\2\2\u00f8\u00f9\3\2\2\2\u00f9\u00fb\3\2"+
		"\2\2\u00fa\u00fc\t\2\2\2\u00fb\u00fa\3\2\2\2\u00fb\u00fc\3\2\2\2\u00fc"+
		"\u00fd\3\2\2\2\u00fd\u010c\7\u00b6\2\2\u00fe\u0100\5\f\7\2\u00ff\u00fe"+
		"\3\2\2\2\u00ff\u0100\3\2\2\2\u0100\u0102\3\2\2\2\u0101\u0103\5\16\b\2"+
		"\u0102\u0101\3\2\2\2\u0103\u0104\3\2\2\2\u0104\u0102\3\2\2\2\u0104\u0105"+
		"\3\2\2\2\u0105\u0107\3\2\2\2\u0106\u0108\t\2\2\2\u0107\u0106\3\2\2\2\u0107"+
		"\u0108\3\2\2\2\u0108\u0109\3\2\2\2\u0109\u010a\7\u00b6\2\2\u010a\u010c"+
		"\3\2\2\2\u010b\u00f6\3\2\2\2\u010b\u00f8\3\2\2\2\u010b\u00ff\3\2\2\2\u010c"+
		"\5\3\2\2\2\u010d\u010f\5\4\3\2\u010e\u010d\3\2\2\2\u010f\u0110\3\2\2\2"+
		"\u0110\u010e\3\2\2\2\u0110\u0111\3\2\2\2\u0111\7\3\2\2\2\u0112\u0114\5"+
		"\16\b\2\u0113\u0112\3\2\2\2\u0114\u0117\3\2\2\2\u0115\u0113\3\2\2\2\u0115"+
		"\u0116\3\2\2\2\u0116\t\3\2\2\2\u0117\u0115\3\2\2\2\u0118\u011a\5\16\b"+
		"\2\u0119\u0118\3\2\2\2\u011a\u011d\3\2\2\2\u011b\u0119\3\2\2\2\u011b\u011c"+
		"\3\2\2\2\u011c\u0125\3\2\2\2\u011d\u011b\3\2\2\2\u011e\u0120\5\4\3\2\u011f"+
		"\u011e\3\2\2\2\u0120\u0123\3\2\2\2\u0121\u011f\3\2\2\2\u0121\u0122\3\2"+
		"\2\2\u0122\u0125\3\2\2\2\u0123\u0121\3\2\2\2\u0124\u011b\3\2\2\2\u0124"+
		"\u0121\3\2\2\2\u0125\13\3\2\2\2\u0126\u0127\7\u00ce\2\2\u0127\r\3\2\2"+
		"\2\u0128\u012f\7\u00ba\2\2\u0129\u012f\5\20\t\2\u012a\u012f\5J&\2\u012b"+
		"\u012f\5Z.\2\u012c\u012f\5\\/\2\u012d\u012f\5h\65\2\u012e\u0128\3\2\2"+
		"\2\u012e\u0129\3\2\2\2\u012e\u012a\3\2\2\2\u012e\u012b\3\2\2\2\u012e\u012c"+
		"\3\2\2\2\u012e\u012d\3\2\2\2\u012f\17\3\2\2\2\u0130\u014d\5\22\n\2\u0131"+
		"\u014d\5\24\13\2\u0132\u014d\5\26\f\2\u0133\u014d\5\30\r\2\u0134\u014d"+
		"\5\32\16\2\u0135\u014d\5\34\17\2\u0136\u014d\5\36\20\2\u0137\u014d\5 "+
		"\21\2\u0138\u014d\5\"\22\2\u0139\u014d\5$\23\2\u013a\u014d\5&\24\2\u013b"+
		"\u014d\5\60\31\2\u013c\u014d\5\62\32\2\u013d\u014d\5*\26\2\u013e\u014d"+
		"\5,\27\2\u013f\u014d\5.\30\2\u0140\u014d\5\64\33\2\u0141\u014d\5\66\34"+
		"\2\u0142\u014d\5(\25\2\u0143\u014d\58\35\2\u0144\u014d\5:\36\2\u0145\u014d"+
		"\5<\37\2\u0146\u014d\5> \2\u0147\u014d\5@!\2\u0148\u014d\5B\"\2\u0149"+
		"\u014d\5D#\2\u014a\u014d\5F$\2\u014b\u014d\5H%\2\u014c\u0130\3\2\2\2\u014c"+
		"\u0131\3\2\2\2\u014c\u0132\3\2\2\2\u014c\u0133\3\2\2\2\u014c\u0134\3\2"+
		"\2\2\u014c\u0135\3\2\2\2\u014c\u0136\3\2\2\2\u014c\u0137\3\2\2\2\u014c"+
		"\u0138\3\2\2\2\u014c\u0139\3\2\2\2\u014c\u013a\3\2\2\2\u014c\u013b\3\2"+
		"\2\2\u014c\u013c\3\2\2\2\u014c\u013d\3\2\2\2\u014c\u013e\3\2\2\2\u014c"+
		"\u013f\3\2\2\2\u014c\u0140\3\2\2\2\u014c\u0141\3\2\2\2\u014c\u0142\3\2"+
		"\2\2\u014c\u0143\3\2\2\2\u014c\u0144\3\2\2\2\u014c\u0145\3\2\2\2\u014c"+
		"\u0146\3\2\2\2\u014c\u0147\3\2\2\2\u014c\u0148\3\2\2\2\u014c\u0149\3\2"+
		"\2\2\u014c\u014a\3\2\2\2\u014c\u014b\3\2\2\2\u014d\21\3\2\2\2\u014e\u014f"+
		"\7\3\2\2\u014f\23\3\2\2\2\u0150\u0151\7\4\2\2\u0151\u0152\5\u00d4k\2\u0152"+
		"\u0153\7 \2\2\u0153\u0155\7\u00b6\2\2\u0154\u0156\5\u00a4S\2\u0155\u0154"+
		"\3\2\2\2\u0156\u0157\3\2\2\2\u0157\u0155\3\2\2\2\u0157\u0158\3\2\2\2\u0158"+
		"\u015e\3\2\2\2\u0159\u015b\5\f\7\2\u015a\u0159\3\2\2\2\u015a\u015b\3\2"+
		"\2\2\u015b\u015c\3\2\2\2\u015c\u015d\7$\2\2\u015d\u015f\5\n\6\2\u015e"+
		"\u015a\3\2\2\2\u015e\u015f\3\2\2\2\u015f\u0161\3\2\2\2\u0160\u0162\5\f"+
		"\7\2\u0161\u0160\3\2\2\2\u0161\u0162\3\2\2\2\u0162\u0163\3\2\2\2\u0163"+
		"\u0164\7\13\2\2\u0164\25\3\2\2\2\u0165\u0166\7\5\2\2\u0166\u0167\5\u00e4"+
		"s\2\u0167\27\3\2\2\2\u0168\u0169\7\6\2\2\u0169\u016e\5\u00a8U\2\u016a"+
		"\u016b\7\u00bb\2\2\u016b\u016d\5\u00a8U\2\u016c\u016a\3\2\2\2\u016d\u0170"+
		"\3\2\2\2\u016e\u016c\3\2\2\2\u016e\u016f\3\2\2\2\u016f\31\3\2\2\2\u0170"+
		"\u016e\3\2\2\2\u0171\u0173\7\34\2\2\u0172\u0171\3\2\2\2\u0172\u0173\3"+
		"\2\2\2\u0173\u0174\3\2\2\2\u0174\u0175\7\b\2\2\u0175\u017a\5\u00c0a\2"+
		"\u0176\u0177\7\u00bb\2\2\u0177\u0179\5\u00c0a\2\u0178\u0176\3\2\2\2\u0179"+
		"\u017c\3\2\2\2\u017a\u0178\3\2\2\2\u017a\u017b\3\2\2\2\u017b\33\3\2\2"+
		"\2\u017c\u017a\3\2\2\2\u017d\u017e\7\n\2\2\u017e\35\3\2\2\2\u017f\u0181"+
		"\7+\2\2\u0180\u0182\5\u00d4k\2\u0181\u0180\3\2\2\2\u0181\u0182\3\2\2\2"+
		"\u0182\37\3\2\2\2\u0183\u0184\7\7\2\2\u0184\u0185\5\u00a6T\2\u0185\u0187"+
		"\7\u00be\2\2\u0186\u0188\5\u00c6d\2\u0187\u0186\3\2\2\2\u0187\u0188\3"+
		"\2\2\2\u0188\u0189\3\2\2\2\u0189\u018a\7\u00bf\2\2\u018a\u018c\5\n\6\2"+
		"\u018b\u018d\5\f\7\2\u018c\u018b\3\2\2\2\u018c\u018d\3\2\2\2\u018d\u018e"+
		"\3\2\2\2\u018e\u018f\7\r\2\2\u018f!\3\2\2\2\u0190\u0191\7\7\2\2\u0191"+
		"\u0192\7\u00c4\2\2\u0192\u0194\7\u00be\2\2\u0193\u0195\5\u00c6d\2\u0194"+
		"\u0193\3\2\2\2\u0194\u0195\3\2\2\2\u0195\u0196\3\2\2\2\u0196\u0197\7\u00bf"+
		"\2\2\u0197\u0199\5\n\6\2\u0198\u019a\5\f\7\2\u0199\u0198\3\2\2\2\u0199"+
		"\u019a\3\2\2\2\u019a\u019b\3\2\2\2\u019b\u019c\7\16\2\2\u019c#\3\2\2\2"+
		"\u019d\u019f\7\21\2\2\u019e\u01a0\7\34\2\2\u019f\u019e\3\2\2\2\u019f\u01a0"+
		"\3\2\2\2\u01a0\u01a1\3\2\2\2\u01a1\u01a2\5\u00b4[\2\u01a2\u01a3\7\u009d"+
		"\2\2\u01a3\u01a4\5\u00e8u\2\u01a4\u01a5\7\60\2\2\u01a5\u01a8\5\u00e8u"+
		"\2\u01a6\u01a7\7-\2\2\u01a7\u01a9\5\u00e8u\2\u01a8\u01a6\3\2\2\2\u01a8"+
		"\u01a9\3\2\2\2\u01a9\u01aa\3\2\2\2\u01aa\u01ac\5\n\6\2\u01ab\u01ad\5\f"+
		"\7\2\u01ac\u01ab\3\2\2\2\u01ac\u01ad\3\2\2\2\u01ad\u01ae\3\2\2\2\u01ae"+
		"\u01af\7\36\2\2\u01af%\3\2\2\2\u01b0\u01b2\7\21\2\2\u01b1\u01b3\7\34\2"+
		"\2\u01b2\u01b1\3\2\2\2\u01b2\u01b3\3\2\2\2\u01b3\u01b4\3\2\2\2\u01b4\u01b5"+
		"\5\u00b2Z\2\u01b5\u01b6\7\25\2\2\u01b6\u01b7\5\u00b2Z\2\u01b7\u01b8\7"+
		"\u00be\2\2\u01b8\u01b9\7\u00bf\2\2\u01b9\u01bb\5\n\6\2\u01ba\u01bc\5\f"+
		"\7\2\u01bb\u01ba\3\2\2\2\u01bb\u01bc\3\2\2\2\u01bc\u01bd\3\2\2\2\u01bd"+
		"\u01be\7\36\2\2\u01be\'\3\2\2\2\u01bf\u01c0\5\u00a6T\2\u01c0\u01c2\7\u00be"+
		"\2\2\u01c1\u01c3\5\u00c8e\2\u01c2\u01c1\3\2\2\2\u01c2\u01c3\3\2\2\2\u01c3"+
		"\u01c4\3\2\2\2\u01c4\u01c5\7\u00bf\2\2\u01c5)\3\2\2\2\u01c6\u01c7\7\24"+
		"\2\2\u01c7\u01c8\5\u00d4k\2\u01c8\u01cb\5\b\5\2\u01c9\u01ca\7\t\2\2\u01ca"+
		"\u01cc\5\b\5\2\u01cb\u01c9\3\2\2\2\u01cb\u01cc\3\2\2\2\u01cc+\3\2\2\2"+
		"\u01cd\u01ce\7\24\2\2\u01ce\u01cf\5\u00d4k\2\u01cf\u01d0\7/\2\2\u01d0"+
		"\u01d1\7\u00b6\2\2\u01d1\u01d8\5\6\4\2\u01d2\u01d4\5\f\7\2\u01d3\u01d2"+
		"\3\2\2\2\u01d3\u01d4\3\2\2\2\u01d4\u01d5\3\2\2\2\u01d5\u01d6\7\t\2\2\u01d6"+
		"\u01d7\7\u00b6\2\2\u01d7\u01d9\5\6\4\2\u01d8\u01d3\3\2\2\2\u01d8\u01d9"+
		"\3\2\2\2\u01d9\u01db\3\2\2\2\u01da\u01dc\5\f\7\2\u01db\u01da\3\2\2\2\u01db"+
		"\u01dc\3\2\2\2\u01dc\u01dd\3\2\2\2\u01dd\u01de\7\f\2\2\u01de-\3\2\2\2"+
		"\u01df\u01e0\7\26\2\2\u01e0\u01e1\5\u00e4s\2\u01e1/\3\2\2\2\u01e2\u01e3"+
		"\7\32\2\2\u01e3\u01e4\7\u00ce\2\2\u01e4\61\3\2\2\2\u01e5\u01e6\7\33\2"+
		"\2\u01e6\u01e7\7\u00ce\2\2\u01e7\63\3\2\2\2\u01e8\u01ea\t\3\2\2\u01e9"+
		"\u01e8\3\2\2\2\u01e9\u01ea\3\2\2\2\u01ea\u01ed\3\2\2\2\u01eb\u01ed\7\34"+
		"\2\2\u01ec\u01e9\3\2\2\2\u01ec\u01eb\3\2\2\2\u01ed\u01ee\3\2\2\2\u01ee"+
		"\u01ef\5\u00be`\2\u01ef\u01f0\7\u009d\2\2\u01f0\u01f8\5\u00d4k\2\u01f1"+
		"\u01f2\7\u00bb\2\2\u01f2\u01f3\5\u00be`\2\u01f3\u01f4\7\u009d\2\2\u01f4"+
		"\u01f5\5\u00d4k\2\u01f5\u01f7\3\2\2\2\u01f6\u01f1\3\2\2\2\u01f7\u01fa"+
		"\3\2\2\2\u01f8\u01f6\3\2\2\2\u01f8\u01f9\3\2\2\2\u01f9\65\3\2\2\2\u01fa"+
		"\u01f8\3\2\2\2\u01fb\u01fc\7#\2\2\u01fc\u01fd\5\u00e4s\2\u01fd\67\3\2"+
		"\2\2\u01fe\u01ff\7\u00c4\2\2\u01ff\u0201\7\u00be\2\2\u0200\u0202\5\u00c8"+
		"e\2\u0201\u0200\3\2\2\2\u0201\u0202\3\2\2\2\u0202\u0203\3\2\2\2\u0203"+
		"\u0204\7\u00bf\2\2\u02049\3\2\2\2\u0205\u0206\7\'\2\2\u0206\u020b\5\u00be"+
		"`\2\u0207\u0208\7\u00bb\2\2\u0208\u020a\5\u00be`\2\u0209\u0207\3\2\2\2"+
		"\u020a\u020d\3\2\2\2\u020b\u0209\3\2\2\2\u020b\u020c\3\2\2\2\u020c;\3"+
		"\2\2\2\u020d\u020b\3\2\2\2\u020e\u020f\7*\2\2\u020f=\3\2\2\2\u0210\u0211"+
		"\7.\2\2\u0211\u0212\5\u00b2Z\2\u0212\u0213\7\u00bb\2\2\u0213\u0214\5\u00b2"+
		"Z\2\u0214?\3\2\2\2\u0215\u0216\7\62\2\2\u0216A\3\2\2\2\u0217\u0218\7\63"+
		"\2\2\u0218C\3\2\2\2\u0219\u021a\7\65\2\2\u021a\u021b\5\u00b6\\\2\u021b"+
		"\u021c\7\u00be\2\2\u021c\u0221\5\u00b2Z\2\u021d\u021e\7\u00bb\2\2\u021e"+
		"\u0220\5\u00b2Z\2\u021f\u021d\3\2\2\2\u0220\u0223\3\2\2\2\u0221\u021f"+
		"\3\2\2\2\u0221\u0222\3\2\2\2\u0222\u0224\3\2\2\2\u0223\u0221\3\2\2\2\u0224"+
		"\u0225\7\u00bf\2\2\u0225E\3\2\2\2\u0226\u0227\7)\2\2\u0227\u0229\5\n\6"+
		"\2\u0228\u022a\5\f\7\2\u0229\u0228\3\2\2\2\u0229\u022a\3\2\2\2\u022a\u022b"+
		"\3\2\2\2\u022b\u022c\7\66\2\2\u022c\u022d\5\u00d4k\2\u022dG\3\2\2\2\u022e"+
		"\u022f\78\2\2\u022f\u0230\5\u00d4k\2\u0230\u0232\5\n\6\2\u0231\u0233\5"+
		"\f\7\2\u0232\u0231\3\2\2\2\u0232\u0233\3\2\2\2\u0233\u0234\3\2\2\2\u0234"+
		"\u0235\7\17\2\2\u0235I\3\2\2\2\u0236\u023e\5L\'\2\u0237\u023e\5N(\2\u0238"+
		"\u023e\5P)\2\u0239\u023e\5R*\2\u023a\u023e\5T+\2\u023b\u023e\5V,\2\u023c"+
		"\u023e\5X-\2\u023d\u0236\3\2\2\2\u023d\u0237\3\2\2\2\u023d\u0238\3\2\2"+
		"\2\u023d\u0239\3\2\2\2\u023d\u023a\3\2\2\2\u023d\u023b\3\2\2\2\u023d\u023c"+
		"\3\2\2\2\u023eK\3\2\2\2\u023f\u0241\7\30\2\2\u0240\u0242\7\34\2\2\u0241"+
		"\u0240\3\2\2\2\u0241\u0242\3\2\2\2\u0242\u0247\3\2\2\2\u0243\u0245\5\u00e4"+
		"s\2\u0244\u0246\7\u00bb\2\2\u0245\u0244\3\2\2\2\u0245\u0246\3\2\2\2\u0246"+
		"\u0248\3\2\2\2\u0247\u0243\3\2\2\2\u0247\u0248\3\2\2\2\u0248\u0249\3\2"+
		"\2\2\u0249\u024e\5\u00b2Z\2\u024a\u024b\7\u00bb\2\2\u024b\u024d\5\u00b2"+
		"Z\2\u024c\u024a\3\2\2\2\u024d\u0250\3\2\2\2\u024e\u024c\3\2\2\2\u024e"+
		"\u024f\3\2\2\2\u024fM\3\2\2\2\u0250\u024e\3\2\2\2\u0251\u0253\7%\2\2\u0252"+
		"\u0254\5\u00d2j\2\u0253\u0252\3\2\2\2\u0253\u0254\3\2\2\2\u0254O\3\2\2"+
		"\2\u0255\u0256\79\2\2\u0256\u0257\5\u00b8]\2\u0257\u0258\7\u00bb\2\2\u0258"+
		"\u0259\5\u00b8]\2\u0259\u025a\7\u00bb\2\2\u025a\u025b\5\u00b8]\2\u025b"+
		"Q\3\2\2\2\u025c\u025d\7:\2\2\u025d\u025e\7\u00be\2\2\u025e\u025f\5\u00e8"+
		"u\2\u025f\u0260\7\u00bf\2\2\u0260S\3\2\2\2\u0261\u0262\7;\2\2\u0262\u0263"+
		"\7\u00be\2\2\u0263\u0264\5\u00e8u\2\u0264\u0265\7\u00bf\2\2\u0265U\3\2"+
		"\2\2\u0266\u0267\7<\2\2\u0267W\3\2\2\2\u0268\u0269\7=\2\2\u0269Y\3\2\2"+
		"\2\u026a\u026b\5\u00be`\2\u026b\u026c\7\u00b2\2\2\u026c\u026d\5\u00e8"+
		"u\2\u026d\u0283\3\2\2\2\u026e\u026f\5\u00be`\2\u026f\u0270\7\u00b3\2\2"+
		"\u0270\u0271\5\u00e8u\2\u0271\u0283\3\2\2\2\u0272\u0273\5\u00be`\2\u0273"+
		"\u0274\7\u00b0\2\2\u0274\u0275\5\u00e8u\2\u0275\u0283\3\2\2\2\u0276\u0277"+
		"\5\u00be`\2\u0277\u0278\7\u00b1\2\2\u0278\u0279\5\u00e8u\2\u0279\u0283"+
		"\3\2\2\2\u027a\u027b\5\u00be`\2\u027b\u027c\7\u00b4\2\2\u027c\u027d\5"+
		"\u00e8u\2\u027d\u0283\3\2\2\2\u027e\u027f\5\u00be`\2\u027f\u0280\7\u00b5"+
		"\2\2\u0280\u0281\5\u00e8u\2\u0281\u0283\3\2\2\2\u0282\u026a\3\2\2\2\u0282"+
		"\u026e\3\2\2\2\u0282\u0272\3\2\2\2\u0282\u0276\3\2\2\2\u0282\u027a\3\2"+
		"\2\2\u0282\u027e\3\2\2\2\u0283[\3\2\2\2\u0284\u028a\5^\60\2\u0285\u028a"+
		"\5`\61\2\u0286\u028a\5b\62\2\u0287\u028a\5d\63\2\u0288\u028a\5f\64\2\u0289"+
		"\u0284\3\2\2\2\u0289\u0285\3\2\2\2\u0289\u0286\3\2\2\2\u0289\u0287\3\2"+
		"\2\2\u0289\u0288\3\2\2\2\u028a]\3\2\2\2\u028b\u028c\7W\2\2\u028c\u028d"+
		"\5\u00e8u\2\u028d\u028e\7\u00bb\2\2\u028e\u028f\5\u00e8u\2\u028f_\3\2"+
		"\2\2\u0290\u0291\7V\2\2\u0291\u0292\5\u00e8u\2\u0292a\3\2\2\2\u0293\u0294"+
		"\7_\2\2\u0294\u0295\7\u00be\2\2\u0295\u0296\5\u00e8u\2\u0296\u0297\7\u00bf"+
		"\2\2\u0297\u0298\7\u009d\2\2\u0298\u0299\5\u00e8u\2\u0299c\3\2\2\2\u029a"+
		"\u029b\7X\2\2\u029b\u029c\5\u00e8u\2\u029ce\3\2\2\2\u029d\u029f\7\34\2"+
		"\2\u029e\u029d\3\2\2\2\u029e\u029f\3\2\2\2\u029f\u02a0\3\2\2\2\u02a0\u02a1"+
		"\5\u00ba^\2\u02a1\u02a2\7\u00be\2\2\u02a2\u02a3\7\u00bf\2\2\u02a3\u02a4"+
		"\7\u009d\2\2\u02a4\u02a5\7[\2\2\u02a5\u02a6\7\u00be\2\2\u02a6\u02a7\5"+
		"\u00e4s\2\u02a7\u02a8\7\u00bf\2\2\u02a8g\3\2\2\2\u02a9\u02c7\5j\66\2\u02aa"+
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
		"\7b\2\2\u02c9k\3\2\2\2\u02ca\u02cb\7e\2\2\u02cb\u02cc\5\u00e8u\2\u02cc"+
		"\u02cd\7\u00bb\2\2\u02cd\u02ce\5\u00e8u\2\u02ce\u02cf\7\u00bb\2\2\u02cf"+
		"\u02d0\5\u00e8u\2\u02d0\u02db\3\2\2\2\u02d1\u02d2\7e\2\2\u02d2\u02d3\5"+
		"\u00e8u\2\u02d3\u02d4\7\u00bb\2\2\u02d4\u02d5\5\u00e8u\2\u02d5\u02d6\7"+
		"\u00bb\2\2\u02d6\u02d7\5\u00e8u\2\u02d7\u02d8\7\u00bb\2\2\u02d8\u02d9"+
		"\5\u00e8u\2\u02d9\u02db\3\2\2\2\u02da\u02ca\3\2\2\2\u02da\u02d1\3\2\2"+
		"\2\u02dbm\3\2\2\2\u02dc\u02dd\7f\2\2\u02dd\u02de\5\u00e8u\2\u02de\u02df"+
		"\7\u00bb\2\2\u02df\u02e0\5\u00e8u\2\u02e0\u02e1\7\u00bb\2\2\u02e1\u02e2"+
		"\5\u00e8u\2\u02e2\u02ed\3\2\2\2\u02e3\u02e4\7f\2\2\u02e4\u02e5\5\u00e8"+
		"u\2\u02e5\u02e6\7\u00bb\2\2\u02e6\u02e7\5\u00e8u\2\u02e7\u02e8\7\u00bb"+
		"\2\2\u02e8\u02e9\5\u00e8u\2\u02e9\u02ea\7\u00bb\2\2\u02ea\u02eb\5\u00e8"+
		"u\2\u02eb\u02ed\3\2\2\2\u02ec\u02dc\3\2\2\2\u02ec\u02e3\3\2\2\2\u02ed"+
		"o\3\2\2\2\u02ee\u02ef\7g\2\2\u02efq\3\2\2\2\u02f0\u02f1\7h\2\2\u02f1s"+
		"\3\2\2\2\u02f2\u0301\7l\2\2\u02f3\u02f4\7l\2\2\u02f4\u02f5\5\u00e8u\2"+
		"\u02f5\u02f6\7\u00bb\2\2\u02f6\u02f7\5\u00e8u\2\u02f7\u0301\3\2\2\2\u02f8"+
		"\u02f9\7l\2\2\u02f9\u0301\7`\2\2\u02fa\u02fb\7l\2\2\u02fb\u02fc\7`\2\2"+
		"\u02fc\u02fd\5\u00e8u\2\u02fd\u02fe\7\u00bb\2\2\u02fe\u02ff\5\u00e8u\2"+
		"\u02ff\u0301\3\2\2\2\u0300\u02f2\3\2\2\2\u0300\u02f3\3\2\2\2\u0300\u02f8"+
		"\3\2\2\2\u0300\u02fa\3\2\2\2\u0301u\3\2\2\2\u0302\u0303\7j\2\2\u0303w"+
		"\3\2\2\2\u0304\u0305\7a\2\2\u0305\u0306\5\u00e8u\2\u0306\u0307\7\u00bb"+
		"\2\2\u0307\u0308\5\u00e8u\2\u0308\u0309\7\u00bb\2\2\u0309\u030a\5\u00e8"+
		"u\2\u030a\u0314\3\2\2\2\u030b\u030c\7a\2\2\u030c\u030d\7i\2\2\u030d\u030e"+
		"\5\u00e8u\2\u030e\u030f\7\u00bb\2\2\u030f\u0310\5\u00e8u\2\u0310\u0311"+
		"\7\u00bb\2\2\u0311\u0312\5\u00e8u\2\u0312\u0314\3\2\2\2\u0313\u0304\3"+
		"\2\2\2\u0313\u030b\3\2\2\2\u0314y\3\2\2\2\u0315\u0316\7m\2\2\u0316\u0317"+
		"\5\u00e8u\2\u0317\u0318\7\u00bb\2\2\u0318\u0319\5\u00e8u\2\u0319\u031a"+
		"\7\u00bb\2\2\u031a\u031b\5\u00e8u\2\u031b\u031c\7\u00bb\2\2\u031c\u031d"+
		"\5\u00e8u\2\u031d{\3\2\2\2\u031e\u031f\7o\2\2\u031f\u0320\5\u00e8u\2\u0320"+
		"\u0321\7\u00bb\2\2\u0321\u0322\5\u00e8u\2\u0322\u0323\7\u00bb\2\2\u0323"+
		"\u0324\5\u00e8u\2\u0324\u0325\7\u00bb\2\2\u0325\u0326\5\u00e8u\2\u0326"+
		"\u0332\3\2\2\2\u0327\u0328\7o\2\2\u0328\u0329\7i\2\2\u0329\u032a\5\u00e8"+
		"u\2\u032a\u032b\7\u00bb\2\2\u032b\u032c\5\u00e8u\2\u032c\u032d\7\u00bb"+
		"\2\2\u032d\u032e\5\u00e8u\2\u032e\u032f\7\u00bb\2\2\u032f\u0330\5\u00e8"+
		"u\2\u0330\u0332\3\2\2\2\u0331\u031e\3\2\2\2\u0331\u0327\3\2\2\2\u0332"+
		"}\3\2\2\2\u0333\u0334\7x\2\2\u0334\u0335\5\u00e8u\2\u0335\u0336\7\u00bb"+
		"\2\2\u0336\u0337\5\u00e8u\2\u0337\u0338\7\u00bb\2\2\u0338\u0339\5\u00e8"+
		"u\2\u0339\u033a\7\u00bb\2\2\u033a\u033b\5\u00e8u\2\u033b\u033c\7\u00bb"+
		"\2\2\u033c\u033d\5\u00e8u\2\u033d\u033e\7\u00bb\2\2\u033e\u033f\5\u00e8"+
		"u\2\u033f\u0363\3\2\2\2\u0340\u0341\7x\2\2\u0341\u0342\7i\2\2\u0342\u0343"+
		"\5\u00e8u\2\u0343\u0344\7\u00bb\2\2\u0344\u0345\5\u00e8u\2\u0345\u0346"+
		"\7\u00bb\2\2\u0346\u0347\5\u00e8u\2\u0347\u0348\7\u00bb\2\2\u0348\u0349"+
		"\5\u00e8u\2\u0349\u034a\7\u00bb\2\2\u034a\u034b\5\u00e8u\2\u034b\u034c"+
		"\7\u00bb\2\2\u034c\u034d\5\u00e8u\2\u034d\u0363\3\2\2\2\u034e\u034f\7"+
		"x\2\2\u034f\u0350\7T\2\2\u0350\u0351\5\u00e8u\2\u0351\u0352\7\u00bb\2"+
		"\2\u0352\u0353\5\u00e8u\2\u0353\u0354\7\u00bb\2\2\u0354\u0355\5\u00e8"+
		"u\2\u0355\u0356\7\u00bb\2\2\u0356\u0357\5\u00e8u\2\u0357\u0358\7\u00bb"+
		"\2\2\u0358\u0359\5\u00e8u\2\u0359\u035a\7\u00bb\2\2\u035a\u035b\5\u00e8"+
		"u\2\u035b\u035c\7\u00bb\2\2\u035c\u035d\5\u00e8u\2\u035d\u035e\7\u00bb"+
		"\2\2\u035e\u035f\5\u00e8u\2\u035f\u0360\7\u00bb\2\2\u0360\u0361\5\u00e8"+
		"u\2\u0361\u0363\3\2\2\2\u0362\u0333\3\2\2\2\u0362\u0340\3\2\2\2\u0362"+
		"\u034e\3\2\2\2\u0363\177\3\2\2\2\u0364\u0365\7p\2\2\u0365\u0366\5\u00e8"+
		"u\2\u0366\u0367\7\u00bb\2\2\u0367\u0368\5\u00e8u\2\u0368\u0081\3\2\2\2"+
		"\u0369\u036a\7c\2\2\u036a\u036b\5\u00e8u\2\u036b\u036c\7\u00bb\2\2\u036c"+
		"\u036d\5\u00e8u\2\u036d\u036e\7\u00bb\2\2\u036e\u036f\5\u00e8u\2\u036f"+
		"\u0370\7\u00bb\2\2\u0370\u0371\5\u00e8u\2\u0371\u0083\3\2\2\2\u0372\u0373"+
		"\7d\2\2\u0373\u0085\3\2\2\2\u0374\u0375\7t\2\2\u0375\u0376\5\u00e8u\2"+
		"\u0376\u0377\7\u00bb\2\2\u0377\u0378\5\u00e8u\2\u0378\u0379\7\u00bb\2"+
		"\2\u0379\u037a\5\u00e8u\2\u037a\u037b\7\u00bb\2\2\u037b\u037c\5\u00e8"+
		"u\2\u037c\u037d\7\u00bb\2\2\u037d\u037e\5\u00e4s\2\u037e\u0087\3\2\2\2"+
		"\u037f\u0380\7u\2\2\u0380\u0381\5\u00e8u\2\u0381\u0382\7\u00bb\2\2\u0382"+
		"\u0383\5\u00e8u\2\u0383\u0384\7\u00bb\2\2\u0384\u0385\5\u00e8u\2\u0385"+
		"\u0386\7\u00bb\2\2\u0386\u0387\5\u00e8u\2\u0387\u0388\7\u00bb\2\2\u0388"+
		"\u0389\5\u00e4s\2\u0389\u0089\3\2\2\2\u038a\u038b\t\4\2\2\u038b\u038c"+
		"\5\u00e8u\2\u038c\u038d\7\u00bb\2\2\u038d\u038e\5\u00e8u\2\u038e\u038f"+
		"\7\u00bb\2\2\u038f\u0390\5\u00e8u\2\u0390\u0391\7\u00bb\2\2\u0391\u0392"+
		"\5\u00e8u\2\u0392\u0393\7\u00bb\2\2\u0393\u0394\5\u00e4s\2\u0394\u008b"+
		"\3\2\2\2\u0395\u0396\7k\2\2\u0396\u008d\3\2\2\2\u0397\u0398\7}\2\2\u0398"+
		"\u0399\5\u00e8u\2\u0399\u039a\7\u00bb\2\2\u039a\u039b\5\u00e8u\2\u039b"+
		"\u039c\7\u00bb\2\2\u039c\u039d\5\u00e8u\2\u039d\u039e\7\u00bb\2\2\u039e"+
		"\u039f\5\u00e8u\2\u039f\u008f\3\2\2\2\u03a0\u03a1\7~\2\2\u03a1\u0091\3"+
		"\2\2\2\u03a2\u03a3\7z\2\2\u03a3\u03a4\5\u00e8u\2\u03a4\u03a5\7\u00bb\2"+
		"\2\u03a5\u03a6\5\u00e8u\2\u03a6\u03a7\7\u00bb\2\2\u03a7\u03a8\5\u00e8"+
		"u\2\u03a8\u03a9\7\u00bb\2\2\u03a9\u03aa\5\u00e8u\2\u03aa\u03ab\7\u00bb"+
		"\2\2\u03ab\u03ac\5\u00e8u\2\u03ac\u03ad\7\u00bb\2\2\u03ad\u03ae\5\u00e8"+
		"u\2\u03ae\u0093\3\2\2\2\u03af\u03b0\7{\2\2\u03b0\u03b1\5\u00e8u\2\u03b1"+
		"\u0095\3\2\2\2\u03b2\u03b3\7I\2\2\u03b3\u0097\3\2\2\2\u03b4\u03b5\7J\2"+
		"\2\u03b5\u03b6\5\u00bc_\2\u03b6\u03b7\7\u00be\2\2\u03b7\u03b8\5\u00e8"+
		"u\2\u03b8\u03b9\7\u00bf\2\2\u03b9\u03ba\7\u00bb\2\2\u03ba\u03bb\5\u00e8"+
		"u\2\u03bb\u03bc\7\u00bb\2\2\u03bc\u03bd\5\u00e8u\2\u03bd\u03be\7\u00bb"+
		"\2\2\u03be\u03bf\5\u00e8u\2\u03bf\u03c0\7\u00bb\2\2\u03c0\u03c1\5\u00e8"+
		"u\2\u03c1\u0099\3\2\2\2\u03c2\u03c3\7K\2\2\u03c3\u03c4\5\u00bc_\2\u03c4"+
		"\u03c5\7\u00be\2\2\u03c5\u03c6\5\u00e8u\2\u03c6\u03c7\7\u00bf\2\2\u03c7"+
		"\u03c8\7\u00bb\2\2\u03c8\u03c9\5\u00e8u\2\u03c9\u03ca\7\u00bb\2\2\u03ca"+
		"\u03cb\5\u00e8u\2\u03cb\u03cc\7\u00bb\2\2\u03cc\u03cd\5\u00e8u\2\u03cd"+
		"\u03ce\7\u00bb\2\2\u03ce\u03cf\5\u00e8u\2\u03cf\u009b\3\2\2\2\u03d0\u03d1"+
		"\7L\2\2\u03d1\u03d2\5\u00e8u\2\u03d2\u03d3\7\u00bb\2\2\u03d3\u03d4\5\u00e8"+
		"u\2\u03d4\u03d5\7\u00bb\2\2\u03d5\u03d6\5\u00e8u\2\u03d6\u03d7\7\u00bb"+
		"\2\2\u03d7\u03d8\5\u00e8u\2\u03d8\u009d\3\2\2\2\u03d9\u03da\7M\2\2\u03da"+
		"\u03db\5\u00e8u\2\u03db\u03dc\7\u00bb\2\2\u03dc\u03dd\5\u00e8u\2\u03dd"+
		"\u03de\7\u00bb\2\2\u03de\u03df\5\u00e8u\2\u03df\u03e0\7\u00bb\2\2\u03e0"+
		"\u03e1\5\u00e8u\2\u03e1\u009f\3\2\2\2\u03e2\u03e3\7N\2\2\u03e3\u03e4\5"+
		"\u00e8u\2\u03e4\u03e5\7\u00bb\2\2\u03e5\u03e6\5\u00e8u\2\u03e6\u00a1\3"+
		"\2\2\2\u03e7\u03e8\7O\2\2\u03e8\u03e9\5\u00e8u\2\u03e9\u00a3\3\2\2\2\u03ea"+
		"\u03ec\5\f\7\2\u03eb\u03ea\3\2\2\2\u03eb\u03ec\3\2\2\2\u03ec\u03ed\3\2"+
		"\2\2\u03ed\u03ee\7\67\2\2\u03ee\u03f3\5\u00d4k\2\u03ef\u03f0\7\u00bb\2"+
		"\2\u03f0\u03f2\5\u00d4k\2\u03f1\u03ef\3\2\2\2\u03f2\u03f5\3\2\2\2\u03f3"+
		"\u03f1\3\2\2\2\u03f3\u03f4\3\2\2\2\u03f4\u03f6\3\2\2\2\u03f5\u03f3\3\2"+
		"\2\2\u03f6\u03f7\7\u00ba\2\2\u03f7\u03f8\5\n\6\2\u03f8\u00a5\3\2\2\2\u03f9"+
		"\u03fa\t\5\2\2\u03fa\u00a7\3\2\2\2\u03fb\u03fe\5\u00d6l\2\u03fc\u03fe"+
		"\5\u00e2r\2\u03fd\u03fb\3\2\2\2\u03fd\u03fc\3\2\2\2\u03fe\u00a9\3\2\2"+
		"\2\u03ff\u0403\5\u00aeX\2\u0400\u0403\5\u00b0Y\2\u0401\u0403\5\u00acW"+
		"\2\u0402\u03ff\3\2\2\2\u0402\u0400\3\2\2\2\u0402\u0401\3\2\2\2\u0403\u00ab"+
		"\3\2\2\2\u0404\u0405\5\u00bc_\2\u0405\u00ad\3\2\2\2\u0406\u0407\5\u00b6"+
		"\\\2\u0407\u0408\7\u00be\2\2\u0408\u040b\5\u00e8u\2\u0409\u040a\7\u00bb"+
		"\2\2\u040a\u040c\5\u00e8u\2\u040b\u0409\3\2\2\2\u040b\u040c\3\2\2\2\u040c"+
		"\u040d\3\2\2\2\u040d\u040e\7\u00bf\2\2\u040e\u0439\3\2\2\2\u040f\u0410"+
		"\5\u00b8]\2\u0410\u0411\7\u00be\2\2\u0411\u0414\5\u00e8u\2\u0412\u0413"+
		"\7\u00bb\2\2\u0413\u0415\5\u00e8u\2\u0414\u0412\3\2\2\2\u0414\u0415\3"+
		"\2\2\2\u0415\u0416\3\2\2\2\u0416\u0417\7\u00bf\2\2\u0417\u0439\3\2\2\2"+
		"\u0418\u0419\5\u00acW\2\u0419\u041a\7\u00be\2\2\u041a\u041b\5\u00e8u\2"+
		"\u041b\u041c\7\u00bf\2\2\u041c\u041d\5\u00b8]\2\u041d\u0439\3\2\2\2\u041e"+
		"\u041f\5\u00acW\2\u041f\u0420\7\u00be\2\2\u0420\u0421\5\u00e8u\2\u0421"+
		"\u0422\7\u00bf\2\2\u0422\u0423\5\u00b6\\\2\u0423\u0439\3\2\2\2\u0424\u0425"+
		"\7\u00c6\2\2\u0425\u0427\7\u00be\2\2\u0426\u0428\5\u00c8e\2\u0427\u0426"+
		"\3\2\2\2\u0427\u0428\3\2\2\2\u0428\u0429\3\2\2\2\u0429\u0439\7\u00bf\2"+
		"\2\u042a\u042b\7\u00c5\2\2\u042b\u042d\7\u00be\2\2\u042c\u042e\5\u00c8"+
		"e\2\u042d\u042c\3\2\2\2\u042d\u042e\3\2\2\2\u042e\u042f\3\2\2\2\u042f"+
		"\u0439\7\u00bf\2\2\u0430\u0439\5\u00b6\\\2\u0431\u0439\5\u00b8]\2\u0432"+
		"\u0433\5\u00acW\2\u0433\u0434\5\u00b6\\\2\u0434\u0439\3\2\2\2\u0435\u0436"+
		"\5\u00acW\2\u0436\u0437\5\u00b8]\2\u0437\u0439\3\2\2\2\u0438\u0406\3\2"+
		"\2\2\u0438\u040f\3\2\2\2\u0438\u0418\3\2\2\2\u0438\u041e\3\2\2\2\u0438"+
		"\u0424\3\2\2\2\u0438\u042a\3\2\2\2\u0438\u0430\3\2\2\2\u0438\u0431\3\2"+
		"\2\2\u0438\u0432\3\2\2\2\u0438\u0435\3\2\2\2\u0439\u00af\3\2\2\2\u043a"+
		"\u043b\5\u00ba^\2\u043b\u043c\7\u00be\2\2\u043c\u043f\5\u00e8u\2\u043d"+
		"\u043e\7\u00bb\2\2\u043e\u0440\5\u00e8u\2\u043f\u043d\3\2\2\2\u043f\u0440"+
		"\3\2\2\2\u0440\u0441\3\2\2\2\u0441\u0442\7\u00bf\2\2\u0442\u0454\3\2\2"+
		"\2\u0443\u0444\5\u00acW\2\u0444\u0445\7\u00be\2\2\u0445\u0446\5\u00e8"+
		"u\2\u0446\u0447\7\u00bf\2\2\u0447\u0448\5\u00ba^\2\u0448\u0454\3\2\2\2"+
		"\u0449\u0454\5\u00ba^\2\u044a\u044b\5\u00acW\2\u044b\u044c\5\u00ba^\2"+
		"\u044c\u0454\3\2\2\2\u044d\u044e\7\u00c7\2\2\u044e\u0450\7\u00be\2\2\u044f"+
		"\u0451\5\u00c8e\2\u0450\u044f\3\2\2\2\u0450\u0451\3\2\2\2\u0451\u0452"+
		"\3\2\2\2\u0452\u0454\7\u00bf\2\2\u0453\u043a\3\2\2\2\u0453\u0443\3\2\2"+
		"\2\u0453\u0449\3\2\2\2\u0453\u044a\3\2\2\2\u0453\u044d\3\2\2\2\u0454\u00b1"+
		"\3\2\2\2\u0455\u0459\5\u00b6\\\2\u0456\u0459\5\u00b8]\2\u0457\u0459\5"+
		"\u00ba^\2\u0458\u0455\3\2\2\2\u0458\u0456\3\2\2\2\u0458\u0457\3\2\2\2"+
		"\u0459\u00b3\3\2\2\2\u045a\u045d\5\u00b6\\\2\u045b\u045d\5\u00b8]\2\u045c"+
		"\u045a\3\2\2\2\u045c\u045b\3\2\2\2\u045d\u00b5\3\2\2\2\u045e\u045f\7\u00c8"+
		"\2\2\u045f\u00b7\3\2\2\2\u0460\u0461\7\u00c9\2\2\u0461\u00b9\3\2\2\2\u0462"+
		"\u0463\7\u00ca\2\2\u0463\u00bb\3\2\2\2\u0464\u0465\7\u00cb\2\2\u0465\u00bd"+
		"\3\2\2\2\u0466\u048e\5\u00b2Z\2\u0467\u0472\5\u00b2Z\2\u0468\u0469\7\u00be"+
		"\2\2\u0469\u046c\5\u00e8u\2\u046a\u046b\7\u00bb\2\2\u046b\u046d\5\u00e8"+
		"u\2\u046c\u046a\3\2\2\2\u046c\u046d\3\2\2\2\u046d\u046e\3\2\2\2\u046e"+
		"\u046f\7\u00bf\2\2\u046f\u0471\3\2\2\2\u0470\u0468\3\2\2\2\u0471\u0474"+
		"\3\2\2\2\u0472\u0470\3\2\2\2\u0472\u0473\3\2\2\2\u0473\u048e\3\2\2\2\u0474"+
		"\u0472\3\2\2\2\u0475\u0476\5\u00acW\2\u0476\u0477\5\u00b6\\\2\u0477\u048e"+
		"\3\2\2\2\u0478\u0479\5\u00acW\2\u0479\u047a\5\u00b8]\2\u047a\u048e\3\2"+
		"\2\2\u047b\u047c\5\u00acW\2\u047c\u047d\7\u00be\2\2\u047d\u047e\5\u00e8"+
		"u\2\u047e\u047f\7\u00bf\2\2\u047f\u0480\5\u00b6\\\2\u0480\u048e\3\2\2"+
		"\2\u0481\u0482\5\u00acW\2\u0482\u0483\7\u00be\2\2\u0483\u0484\5\u00e8"+
		"u\2\u0484\u0485\7\u00bf\2\2\u0485\u0486\5\u00b8]\2\u0486\u048e\3\2\2\2"+
		"\u0487\u048e\5\u00acW\2\u0488\u0489\5\u00acW\2\u0489\u048a\7\u00be\2\2"+
		"\u048a\u048b\5\u00e8u\2\u048b\u048c\7\u00bf\2\2\u048c\u048e\3\2\2\2\u048d"+
		"\u0466\3\2\2\2\u048d\u0467\3\2\2\2\u048d\u0475\3\2\2\2\u048d\u0478\3\2"+
		"\2\2\u048d\u047b\3\2\2\2\u048d\u0481\3\2\2\2\u048d\u0487\3\2\2\2\u048d"+
		"\u0488\3\2\2\2\u048e\u00bf\3\2\2\2\u048f\u0490\5\u00b2Z\2\u0490\u0491"+
		"\7\u00be\2\2\u0491\u0496\5\u00e8u\2\u0492\u0493\7\u00bb\2\2\u0493\u0495"+
		"\5\u00e8u\2\u0494\u0492\3\2\2\2\u0495\u0498\3\2\2\2\u0496\u0494\3\2\2"+
		"\2\u0496\u0497\3\2\2\2\u0497\u0499\3\2\2\2\u0498\u0496\3\2\2\2\u0499\u049a"+
		"\7\u00bf\2\2\u049a\u04a3\3\2\2\2\u049b\u049c\5\u00acW\2\u049c\u049d\7"+
		"\u00be\2\2\u049d\u049e\5\u00e8u\2\u049e\u049f\7\u00bb\2\2\u049f\u04a0"+
		"\5\u00b6\\\2\u04a0\u04a1\7\u00bf\2\2\u04a1\u04a3\3\2\2\2\u04a2\u048f\3"+
		"\2\2\2\u04a2\u049b\3\2\2\2\u04a3\u00c1\3\2\2\2\u04a4\u04a9\5\u00be`\2"+
		"\u04a5\u04a6\7\u00bb\2\2\u04a6\u04a8\5\u00be`\2\u04a7\u04a5\3\2\2\2\u04a8"+
		"\u04ab\3\2\2\2\u04a9\u04a7\3\2\2\2\u04a9\u04aa\3\2\2\2\u04aa\u00c3\3\2"+
		"\2\2\u04ab\u04a9\3\2\2\2\u04ac\u04ae\7+\2\2\u04ad\u04ac\3\2\2\2\u04ad"+
		"\u04ae\3\2\2\2\u04ae\u04af\3\2\2\2\u04af\u04b0\5\u00b2Z\2\u04b0\u00c5"+
		"\3\2\2\2\u04b1\u04b6\5\u00c4c\2\u04b2\u04b3\7\u00bb\2\2\u04b3\u04b5\5"+
		"\u00c4c\2\u04b4\u04b2\3\2\2\2\u04b5\u04b8\3\2\2\2\u04b6\u04b4\3\2\2\2"+
		"\u04b6\u04b7\3\2\2\2\u04b7\u00c7\3\2\2\2\u04b8\u04b6\3\2\2\2\u04b9\u04be"+
		"\5\u00d4k\2\u04ba\u04bb\7\u00bb\2\2\u04bb\u04bd\5\u00d4k\2\u04bc\u04ba"+
		"\3\2\2\2\u04bd\u04c0\3\2\2\2\u04be\u04bc\3\2\2\2\u04be\u04bf\3\2\2\2\u04bf"+
		"\u00c9\3\2\2\2\u04c0\u04be\3\2\2\2\u04c1\u04c6\5\u00d4k\2\u04c2\u04c3"+
		"\7\u00bb\2\2\u04c3\u04c5\5\u00d4k\2\u04c4\u04c2\3\2\2\2\u04c5\u04c8\3"+
		"\2\2\2\u04c6\u04c4\3\2\2\2\u04c6\u04c7\3\2\2\2\u04c7\u00cb\3\2\2\2\u04c8"+
		"\u04c6\3\2\2\2\u04c9\u04cb\7\u00b8\2\2\u04ca\u04c9\3\2\2\2\u04ca\u04cb"+
		"\3\2\2\2\u04cb\u04cc\3\2\2\2\u04cc\u04d5\5\u00d4k\2\u04cd\u04ce\7,\2\2"+
		"\u04ce\u04cf\7\u00be\2\2\u04cf\u04d0\5\u00e8u\2\u04d0\u04d1\7\u00bf\2"+
		"\2\u04d1\u04d5\3\2\2\2\u04d2\u04d3\7,\2\2\u04d3\u04d5\5\u00e8u\2\u04d4"+
		"\u04ca\3\2\2\2\u04d4\u04cd\3\2\2\2\u04d4\u04d2\3\2\2\2\u04d5\u00cd\3\2"+
		"\2\2\u04d6\u04d8\7\u00b7\2\2\u04d7\u04d6\3\2\2\2\u04d8\u04d9\3\2\2\2\u04d9"+
		"\u04d7\3\2\2\2\u04d9\u04da\3\2\2\2\u04da\u00cf\3\2\2\2\u04db\u04df\7\u00bb"+
		"\2\2\u04dc\u04df\7\u00c0\2\2\u04dd\u04df\5\u00ceh\2\u04de\u04db\3\2\2"+
		"\2\u04de\u04dc\3\2\2\2\u04de\u04dd\3\2\2\2\u04df\u00d1\3\2\2\2\u04e0\u04e2"+
		"\5\u00ceh\2\u04e1\u04e0\3\2\2\2\u04e1\u04e2\3\2\2\2\u04e2\u04e4\3\2\2"+
		"\2\u04e3\u04e5\7\u00c0\2\2\u04e4\u04e3\3\2\2\2\u04e4\u04e5\3\2\2\2\u04e5"+
		"\u04e6\3\2\2\2\u04e6\u04ec\5\u00ccg\2\u04e7\u04e8\5\u00d0i\2\u04e8\u04e9"+
		"\5\u00ccg\2\u04e9\u04eb\3\2\2\2\u04ea\u04e7\3\2\2\2\u04eb\u04ee\3\2\2"+
		"\2\u04ec\u04ea\3\2\2\2\u04ec\u04ed\3\2\2\2\u04ed\u04f0\3\2\2\2\u04ee\u04ec"+
		"\3\2\2\2\u04ef\u04f1\7\u00c0\2\2\u04f0\u04ef\3\2\2\2\u04f0\u04f1\3\2\2"+
		"\2\u04f1\u00d3\3\2\2\2\u04f2\u04f5\5\u00e8u\2\u04f3\u04f5\5\u00e4s\2\u04f4"+
		"\u04f2\3\2\2\2\u04f4\u04f3\3\2\2\2\u04f5\u00d5\3\2\2\2\u04f6\u04fd\5\u00d8"+
		"m\2\u04f7\u04fd\5\u00dep\2\u04f8\u04fd\5\u00dan\2\u04f9\u04fd\5\u00dc"+
		"o\2\u04fa\u04fd\5\u00eav\2\u04fb\u04fd\5\u00ecw\2\u04fc\u04f6\3\2\2\2"+
		"\u04fc\u04f7\3\2\2\2\u04fc\u04f8\3\2\2\2\u04fc\u04f9\3\2\2\2\u04fc\u04fa"+
		"\3\2\2\2\u04fc\u04fb\3\2\2\2\u04fd\u00d7\3\2\2\2\u04fe\u0500\t\6\2\2\u04ff"+
		"\u04fe\3\2\2\2\u04ff\u0500\3\2\2\2\u0500\u0501\3\2\2\2\u0501\u0502\7\u00ce"+
		"\2\2\u0502\u00d9\3\2\2\2\u0503\u0504\7\u00cc\2\2\u0504\u00db\3\2\2\2\u0505"+
		"\u0506\7\u00cd\2\2\u0506\u00dd\3\2\2\2\u0507\u0509\t\6\2\2\u0508\u0507"+
		"\3\2\2\2\u0508\u0509\3\2\2\2\u0509\u050a\3\2\2\2\u050a\u050b\7\u00cf\2"+
		"\2\u050b\u00df\3\2\2\2\u050c\u0548\7\u0093\2\2\u050d\u050e\7\u0096\2\2"+
		"\u050e\u050f\7\u00be\2\2\u050f\u0510\5\u00e8u\2\u0510\u0511\7\u00bf\2"+
		"\2\u0511\u0548\3\2\2\2\u0512\u0513\7\u0097\2\2\u0513\u0514\7\u00be\2\2"+
		"\u0514\u0515\5\u00e4s\2\u0515\u0516\7\u00bb\2\2\u0516\u0517\5\u00e8u\2"+
		"\u0517\u0518\7\u00bf\2\2\u0518\u0548\3\2\2\2\u0519\u051a\7\u0098\2\2\u051a"+
		"\u051b\7\u00be\2\2\u051b\u051c\5\u00e4s\2\u051c\u051d\7\u00bb\2\2\u051d"+
		"\u051e\5\u00e8u\2\u051e\u051f\7\u00bb\2\2\u051f\u0520\5\u00e8u\2\u0520"+
		"\u0521\7\u00bf\2\2\u0521\u0548\3\2\2\2\u0522\u0523\7\u0098\2\2\u0523\u0524"+
		"\7\u00be\2\2\u0524\u0525\5\u00e4s\2\u0525\u0526\7\u00bb\2\2\u0526\u0527"+
		"\5\u00e8u\2\u0527\u0528\7\u00bf\2\2\u0528\u0548\3\2\2\2\u0529\u052a\7"+
		"\u0099\2\2\u052a\u052b\7\u00be\2\2\u052b\u052c\5\u00e4s\2\u052c\u052d"+
		"\7\u00bb\2\2\u052d\u052e\5\u00e8u\2\u052e\u052f\7\u00bf\2\2\u052f\u0548"+
		"\3\2\2\2\u0530\u0531\7\u0094\2\2\u0531\u0532\7\u00be\2\2\u0532\u0533\5"+
		"\u00e8u\2\u0533\u0534\7\u00bf\2\2\u0534\u0548\3\2\2\2\u0535\u0536\7\u0094"+
		"\2\2\u0536\u0537\7\u00b8\2\2\u0537\u0538\7\u00be\2\2\u0538\u0539\5\u00e8"+
		"u\2\u0539\u053a\7\u00bf\2\2\u053a\u0548\3\2\2\2\u053b\u053c\7\u0095\2"+
		"\2\u053c\u053d\7\u00be\2\2\u053d\u053e\5\u00e8u\2\u053e\u053f\7\u00bb"+
		"\2\2\u053f\u0540\5\u00e4s\2\u0540\u0541\7\u00bf\2\2\u0541\u0548\3\2\2"+
		"\2\u0542\u0543\7;\2\2\u0543\u0548\5\u00e8u\2\u0544\u0548\7=\2\2\u0545"+
		"\u0546\7Z\2\2\u0546\u0548\5\u00e8u\2\u0547\u050c\3\2\2\2\u0547\u050d\3"+
		"\2\2\2\u0547\u0512\3\2\2\2\u0547\u0519\3\2\2\2\u0547\u0522\3\2\2\2\u0547"+
		"\u0529\3\2\2\2\u0547\u0530\3\2\2\2\u0547\u0535\3\2\2\2\u0547\u053b\3\2"+
		"\2\2\u0547\u0542\3\2\2\2\u0547\u0544\3\2\2\2\u0547\u0545\3\2\2\2\u0548"+
		"\u00e1\3\2\2\2\u0549\u054a\7\u00c3\2\2\u054a\u00e3\3\2\2\2\u054b\u054c"+
		"\bs\1\2\u054c\u054d\7\u00be\2\2\u054d\u054e\5\u00e4s\2\u054e\u054f\7\u00bf"+
		"\2\2\u054f\u0554\3\2\2\2\u0550\u0554\5\u00e0q\2\u0551\u0554\5\u00b0Y\2"+
		"\u0552\u0554\5\u00e2r\2\u0553\u054b\3\2\2\2\u0553\u0550\3\2\2\2\u0553"+
		"\u0551\3\2\2\2\u0553\u0552\3\2\2\2\u0554\u055a\3\2\2\2\u0555\u0556\f\5"+
		"\2\2\u0556\u0557\7\u00aa\2\2\u0557\u0559\5\u00e4s\6\u0558\u0555\3\2\2"+
		"\2\u0559\u055c\3\2\2\2\u055a\u0558\3\2\2\2\u055a\u055b\3\2\2\2\u055b\u00e5"+
		"\3\2\2\2\u055c\u055a\3\2\2\2\u055d\u0638\7\u0080\2\2\u055e\u0638\7\20"+
		"\2\2\u055f\u0638\7\64\2\2\u0560\u0638\7\177\2\2\u0561\u0562\7\u009a\2"+
		"\2\u0562\u0563\7\u00be\2\2\u0563\u0564\5\u00e8u\2\u0564\u0565\7\u00bf"+
		"\2\2\u0565\u0638\3\2\2\2\u0566\u0638\7\u009a\2\2\u0567\u0638\7\u009b\2"+
		"\2\u0568\u0638\7\u009c\2\2\u0569\u056a\7\u0082\2\2\u056a\u056b\7\u00be"+
		"\2\2\u056b\u056c\5\u00e8u\2\u056c\u056d\7\u00bf\2\2\u056d\u0638\3\2\2"+
		"\2\u056e\u056f\7\u0083\2\2\u056f\u0570\7\u00be\2\2\u0570\u0571\5\u00e8"+
		"u\2\u0571\u0572\7\u00bf\2\2\u0572\u0638\3\2\2\2\u0573\u0574\7\u0084\2"+
		"\2\u0574\u0575\7\u00be\2\2\u0575\u0576\5\u00e8u\2\u0576\u0577\7\u00bf"+
		"\2\2\u0577\u0638\3\2\2\2\u0578\u0579\7\u0085\2\2\u0579\u057a\7\u00be\2"+
		"\2\u057a\u057b\5\u00e8u\2\u057b\u057c\7\u00bf\2\2\u057c\u0638\3\2\2\2"+
		"\u057d\u057e\7\u0086\2\2\u057e\u057f\7\u00be\2\2\u057f\u0580\5\u00e8u"+
		"\2\u0580\u0581\7\u00bf\2\2\u0581\u0638\3\2\2\2\u0582\u0583\7\u0087\2\2"+
		"\u0583\u0584\7\u00be\2\2\u0584\u0585\5\u00e8u\2\u0585\u0586\7\u00bf\2"+
		"\2\u0586\u0638\3\2\2\2\u0587\u0588\7\u0088\2\2\u0588\u0589\7\u00be\2\2"+
		"\u0589\u058a\5\u00e8u\2\u058a\u058b\7\u00bf\2\2\u058b\u0638\3\2\2\2\u058c"+
		"\u058d\7\u0089\2\2\u058d\u058e\7\u00be\2\2\u058e\u058f\5\u00e8u\2\u058f"+
		"\u0590\7\u00bf\2\2\u0590\u0638\3\2\2\2\u0591\u0592\7\u008a\2\2\u0592\u0593"+
		"\7\u00be\2\2\u0593\u0594\5\u00e8u\2\u0594\u0595\7\u00bf\2\2\u0595\u0638"+
		"\3\2\2\2\u0596\u0597\7\u008b\2\2\u0597\u0598\7\u00be\2\2\u0598\u0599\5"+
		"\u00e8u\2\u0599\u059a\7\u00bf\2\2\u059a\u0638\3\2\2\2\u059b\u059c\7\u008c"+
		"\2\2\u059c\u059d\7\u00be\2\2\u059d\u059e\5\u00e8u\2\u059e\u059f\7\u00bf"+
		"\2\2\u059f\u0638\3\2\2\2\u05a0\u05a1\7\u008d\2\2\u05a1\u05a2\7\u00be\2"+
		"\2\u05a2\u05a3\5\u00e8u\2\u05a3\u05a4\7\u00bf\2\2\u05a4\u0638\3\2\2\2"+
		"\u05a5\u05a6\7\u0081\2\2\u05a6\u05a7\7\u00be\2\2\u05a7\u05a8\5\u00e8u"+
		"\2\u05a8\u05a9\7\u00bf\2\2\u05a9\u0638\3\2\2\2\u05aa\u05ab\7\u008e\2\2"+
		"\u05ab\u05ac\7\u00be\2\2\u05ac\u05ad\5\u00e8u\2\u05ad\u05ae\7\u00bf\2"+
		"\2\u05ae\u0638\3\2\2\2\u05af\u0638\7<\2\2\u05b0\u05b1\7:\2\2\u05b1\u05b2"+
		"\7\u00be\2\2\u05b2\u05b3\5\u00e8u\2\u05b3\u05b4\7\u00bf\2\2\u05b4\u0638"+
		"\3\2\2\2\u05b5\u05b6\7\27\2\2\u05b6\u05b7\7\u00be\2\2\u05b7\u05b8\5\u00e8"+
		"u\2\u05b8\u05b9\7\u00bf\2\2\u05b9\u0638\3\2\2\2\u05ba\u05bb\7\22\2\2\u05bb"+
		"\u05bc\7\u00be\2\2\u05bc\u05bd\5\u00e8u\2\u05bd\u05be\7\u00bf\2\2\u05be"+
		"\u0638\3\2\2\2\u05bf\u0638\7r\2\2\u05c0\u0638\7s\2\2\u05c1\u05c2\7q\2"+
		"\2\u05c2\u05c3\7\u00be\2\2\u05c3\u05c4\5\u00e8u\2\u05c4\u05c5\7\u00bb"+
		"\2\2\u05c5\u05c6\5\u00e8u\2\u05c6\u05c7\7\u00bf\2\2\u05c7\u0638\3\2\2"+
		"\2\u05c8\u05c9\7e\2\2\u05c9\u05ca\7\u00be\2\2\u05ca\u05cb\5\u00e8u\2\u05cb"+
		"\u05cc\7\u00bb\2\2\u05cc\u05cd\5\u00e8u\2\u05cd\u05ce\7\u00bb\2\2\u05ce"+
		"\u05cf\5\u00e8u\2\u05cf\u05d0\7\u00bf\2\2\u05d0\u0638\3\2\2\2\u05d1\u05d2"+
		"\7e\2\2\u05d2\u05d3\7\u00be\2\2\u05d3\u05d4\5\u00e8u\2\u05d4\u05d5\7\u00bb"+
		"\2\2\u05d5\u05d6\5\u00e8u\2\u05d6\u05d7\7\u00bb\2\2\u05d7\u05d8\5\u00e8"+
		"u\2\u05d8\u05d9\7\u00bb\2\2\u05d9\u05da\5\u00e8u\2\u05da\u05db\7\u00bf"+
		"\2\2\u05db\u0638\3\2\2\2\u05dc\u05dd\7n\2\2\u05dd\u05de\7\u00be\2\2\u05de"+
		"\u05df\5\u00e4s\2\u05df\u05e0\7\u00bf\2\2\u05e0\u0638\3\2\2\2\u05e1\u05e2"+
		"\7|\2\2\u05e2\u05e3\7\u00be\2\2\u05e3\u05e4\5\u00e8u\2\u05e4\u05e5\7\u00bb"+
		"\2\2\u05e5\u05e6\5\u00e8u\2\u05e6\u05e7\7\u00bb\2\2\u05e7\u05e8\5\u00e8"+
		"u\2\u05e8\u05e9\7\u00bf\2\2\u05e9\u0638\3\2\2\2\u05ea\u05eb\7y\2\2\u05eb"+
		"\u05ec\7\u00be\2\2\u05ec\u05ed\5\u00e4s\2\u05ed\u05ee\7\u00bf\2\2\u05ee"+
		"\u0638\3\2\2\2\u05ef\u05f0\7P\2\2\u05f0\u05f1\5\u00bc_\2\u05f1\u05f2\7"+
		"\u00bb\2\2\u05f2\u05f3\5\u00bc_\2\u05f3\u0638\3\2\2\2\u05f4\u05f5\7Q\2"+
		"\2\u05f5\u05f6\5\u00e8u\2\u05f6\u05f7\7\u00bb\2\2\u05f7\u05f8\5\u00e8"+
		"u\2\u05f8\u05f9\7\u00bb\2\2\u05f9\u05fa\5\u00e8u\2\u05fa\u05fb\7\u00bb"+
		"\2\2\u05fb\u05fc\5\u00e8u\2\u05fc\u05fd\7\u00bb\2\2\u05fd\u05fe\5\u00e8"+
		"u\2\u05fe\u05ff\7\u00bb\2\2\u05ff\u0600\5\u00e8u\2\u0600\u0601\7\u00bb"+
		"\2\2\u0601\u0602\5\u00e8u\2\u0602\u0603\7\u00bb\2\2\u0603\u0604\5\u00e8"+
		"u\2\u0604\u060a\7\u00bb\2\2\u0605\u060b\5\u00e8u\2\u0606\u060b\7R\2\2"+
		"\u0607\u060b\7S\2\2\u0608\u060b\7T\2\2\u0609\u060b\7U\2\2\u060a\u0605"+
		"\3\2\2\2\u060a\u0606\3\2\2\2\u060a\u0607\3\2\2\2\u060a\u0608\3\2\2\2\u060a"+
		"\u0609\3\2\2\2\u060b\u0638\3\2\2\2\u060c\u060d\7V\2\2\u060d\u0638\5\u00e8"+
		"u\2\u060e\u060f\7Y\2\2\u060f\u0638\5\u00e8u\2\u0610\u0611\7\\\2\2\u0611"+
		"\u0612\7\u00be\2\2\u0612\u0613\5\u00e4s\2\u0613\u0614\7\u00bf\2\2\u0614"+
		"\u0638\3\2\2\2\u0615\u0616\7]\2\2\u0616\u0617\7\u00be\2\2\u0617\u0618"+
		"\5\u00e4s\2\u0618\u0619\7\u00bf\2\2\u0619\u0638\3\2\2\2\u061a\u061b\7"+
		"^\2\2\u061b\u061c\7\u00be\2\2\u061c\u061d\5\u00e4s\2\u061d\u061e\7\u00bf"+
		"\2\2\u061e\u0638\3\2\2\2\u061f\u0620\7_\2\2\u0620\u0638\5\u00e8u\2\u0621"+
		"\u0622\7\u008f\2\2\u0622\u0638\5\u00e4s\2\u0623\u0624\7\u0090\2\2\u0624"+
		"\u0638\5\u00e4s\2\u0625\u0626\7\u0091\2\2\u0626\u0627\7\u00be\2\2\u0627"+
		"\u0628\5\u00e4s\2\u0628\u0629\7\u00bb\2\2\u0629\u062a\5\u00e4s\2\u062a"+
		"\u062b\7\u00bf\2\2\u062b\u0638\3\2\2\2\u062c\u062d\7\u0091\2\2\u062d\u062e"+
		"\7\u00be\2\2\u062e\u062f\5\u00e4s\2\u062f\u0630\7\u00bb\2\2\u0630\u0631"+
		"\5\u00e4s\2\u0631\u0632\7\u00bb\2\2\u0632\u0633\5\u00e8u\2\u0633\u0634"+
		"\7\u00bf\2\2\u0634\u0638\3\2\2\2\u0635\u0636\7\u0092\2\2\u0636\u0638\5"+
		"\u00e4s\2\u0637\u055d\3\2\2\2\u0637\u055e\3\2\2\2\u0637\u055f\3\2\2\2"+
		"\u0637\u0560\3\2\2\2\u0637\u0561\3\2\2\2\u0637\u0566\3\2\2\2\u0637\u0567"+
		"\3\2\2\2\u0637\u0568\3\2\2\2\u0637\u0569\3\2\2\2\u0637\u056e\3\2\2\2\u0637"+
		"\u0573\3\2\2\2\u0637\u0578\3\2\2\2\u0637\u057d\3\2\2\2\u0637\u0582\3\2"+
		"\2\2\u0637\u0587\3\2\2\2\u0637\u058c\3\2\2\2\u0637\u0591\3\2\2\2\u0637"+
		"\u0596\3\2\2\2\u0637\u059b\3\2\2\2\u0637\u05a0\3\2\2\2\u0637\u05a5\3\2"+
		"\2\2\u0637\u05aa\3\2\2\2\u0637\u05af\3\2\2\2\u0637\u05b0\3\2\2\2\u0637"+
		"\u05b5\3\2\2\2\u0637\u05ba\3\2\2\2\u0637\u05bf\3\2\2\2\u0637\u05c0\3\2"+
		"\2\2\u0637\u05c1\3\2\2\2\u0637\u05c8\3\2\2\2\u0637\u05d1\3\2\2\2\u0637"+
		"\u05dc\3\2\2\2\u0637\u05e1\3\2\2\2\u0637\u05ea\3\2\2\2\u0637\u05ef\3\2"+
		"\2\2\u0637\u05f4\3\2\2\2\u0637\u060c\3\2\2\2\u0637\u060e\3\2\2\2\u0637"+
		"\u0610\3\2\2\2\u0637\u0615\3\2\2\2\u0637\u061a\3\2\2\2\u0637\u061f\3\2"+
		"\2\2\u0637\u0621\3\2\2\2\u0637\u0623\3\2\2\2\u0637\u0625\3\2\2\2\u0637"+
		"\u062c\3\2\2\2\u0637\u0635\3\2\2\2\u0638\u00e7\3\2\2\2\u0639\u063a\bu"+
		"\1\2\u063a\u0651\5\u00aeX\2\u063b\u0651\5\u00d6l\2\u063c\u063d\7\u00be"+
		"\2\2\u063d\u063e\5\u00e8u\2\u063e\u063f\7\u00bf\2\2\u063f\u0651\3\2\2"+
		"\2\u0640\u0641\7\u00ab\2\2\u0641\u0651\5\u00e8u\16\u0642\u0643\7\u00a3"+
		"\2\2\u0643\u0651\5\u00e8u\r\u0644\u0651\5\u00e6t\2\u0645\u0646\5\u00e4"+
		"s\2\u0646\u0647\t\7\2\2\u0647\u0648\5\u00e4s\2\u0648\u0651\3\2\2\2\u0649"+
		"\u064a\7\u0090\2\2\u064a\u064b\7\u00be\2\2\u064b\u064c\5\u00b2Z\2\u064c"+
		"\u064d\7\u00be\2\2\u064d\u064e\7\u00bf\2\2\u064e\u064f\7\u00bf\2\2\u064f"+
		"\u0651\3\2\2\2\u0650\u0639\3\2\2\2\u0650\u063b\3\2\2\2\u0650\u063c\3\2"+
		"\2\2\u0650\u0640\3\2\2\2\u0650\u0642\3\2\2\2\u0650\u0644\3\2\2\2\u0650"+
		"\u0645\3\2\2\2\u0650\u0649\3\2\2\2\u0651\u0669\3\2\2\2\u0652\u0653\f\13"+
		"\2\2\u0653\u0654\7\u00a9\2\2\u0654\u0668\5\u00e8u\13\u0655\u0656\f\n\2"+
		"\2\u0656\u0657\t\b\2\2\u0657\u0668\5\u00e8u\13\u0658\u0659\f\t\2\2\u0659"+
		"\u065a\t\t\2\2\u065a\u0668\5\u00e8u\n\u065b\u065c\f\b\2\2\u065c\u065d"+
		"\t\6\2\2\u065d\u0668\5\u00e8u\t\u065e\u065f\f\7\2\2\u065f\u0660\t\n\2"+
		"\2\u0660\u0668\5\u00e8u\b\u0661\u0662\f\6\2\2\u0662\u0663\t\7\2\2\u0663"+
		"\u0668\5\u00e8u\7\u0664\u0665\f\4\2\2\u0665\u0666\t\13\2\2\u0666\u0668"+
		"\5\u00e8u\5\u0667\u0652\3\2\2\2\u0667\u0655\3\2\2\2\u0667\u0658\3\2\2"+
		"\2\u0667\u065b\3\2\2\2\u0667\u065e\3\2\2\2\u0667\u0661\3\2\2\2\u0667\u0664"+
		"\3\2\2\2\u0668\u066b\3\2\2\2\u0669\u0667\3\2\2\2\u0669\u066a\3\2\2\2\u066a"+
		"\u00e9\3\2\2\2\u066b\u0669\3\2\2\2\u066c\u066d\t\f\2\2\u066d\u00eb\3\2"+
		"\2\2\u066e\u066f\t\r\2\2\u066f\u00ed\3\2\2\2j\u00f1\u00f8\u00fb\u00ff"+
		"\u0104\u0107\u010b\u0110\u0115\u011b\u0121\u0124\u012e\u014c\u0157\u015a"+
		"\u015e\u0161\u016e\u0172\u017a\u0181\u0187\u018c\u0194\u0199\u019f\u01a8"+
		"\u01ac\u01b2\u01bb\u01c2\u01cb\u01d3\u01d8\u01db\u01e9\u01ec\u01f8\u0201"+
		"\u020b\u0221\u0229\u0232\u023d\u0241\u0245\u0247\u024e\u0253\u0282\u0289"+
		"\u029e\u02c6\u02da\u02ec\u0300\u0313\u0331\u0362\u03eb\u03f3\u03fd\u0402"+
		"\u040b\u0414\u0427\u042d\u0438\u043f\u0450\u0453\u0458\u045c\u046c\u0472"+
		"\u048d\u0496\u04a2\u04a9\u04ad\u04b6\u04be\u04c6\u04ca\u04d4\u04d9\u04de"+
		"\u04e1\u04e4\u04ec\u04f0\u04f4\u04fc\u04ff\u0508\u0547\u0553\u055a\u060a"+
		"\u0637\u0650\u0667\u0669";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}