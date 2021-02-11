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
		GOSUB=25, LOCAL=26, LET=27, NEXT=28, OF=29, OFF=30, ON=31, OSCLI=32, OTHERWISE=33, 
		PRINT=34, PROC=35, READ=36, REM=37, REPEAT=38, RESTORE=39, RETURN=40, 
		SPC=41, STEP=42, SWAP=43, THEN=44, TO=45, TRACE=46, TRACEON=47, TRACEOFF=48, 
		TRUE=49, TYPE=50, UNTIL=51, WHEN=52, WHILE=53, MOUSE=54, INKEY=55, INKEYS=56, 
		GET=57, GETS=58, RED=59, GREEN=60, YELLOW=61, BLUE=62, MAGENTA=63, CYAN=64, 
		WHITE=65, BLACK=66, MONO15=67, MONO20=68, MONO25=69, MONO30=70, MONO35=71, 
		MONO40=72, MONO50=73, MONO75=74, MONO100=75, PROP15=76, PROP20=77, PROP25=78, 
		PROP30=79, PROP35=80, PROP40=81, PROP50=82, PROP75=83, PROP100=84, SERIF15=85, 
		SERIF20=86, SERIF25=87, SERIF30=88, SERIF35=89, SERIF40=90, SERIF50=91, 
		SERIF75=92, SERIF100=93, RENDERFRAME=94, CREATEVERTEX=95, CREATETRIANGLE=96, 
		TRANSLATE=97, ROTATE=98, SCALE=99, DELETEOBJECT=100, CREATESHAPE=101, 
		CREATEOBJECT=102, SOLID=103, WIREFRAME=104, SHADED=105, FILLEDWIREFRAME=106, 
		BGETH=107, BPUTH=108, CLOSEH=109, EOFH=110, GETSH=111, LISTFILES=112, 
		OPENIN=113, OPENOUT=114, OPENUP=115, PTRH=116, BANKED=117, CIRCLE=118, 
		CLS=119, CLIPON=120, CLIPOFF=121, COLOUR=122, COLOURBG=123, CREATEFONT=124, 
		FILL=125, FLIP=126, SHOWFPS=127, GRAPHICS=128, LINE=129, LOADTYPEFACE=130, 
		RECTANGLE=131, PLOT=132, POINT=133, SCREENWIDTH=134, SCREENHEIGHT=135, 
		TEXT=136, TEXTRIGHT=137, TEXTCENTRE=138, TEXTCENTER=139, TRIANGLE=140, 
		TIME=141, PI=142, SQR=143, LN=144, LOG=145, EXP=146, ATN=147, TAN=148, 
		COS=149, SIN=150, ABS=151, ACS=152, ASN=153, DEG=154, RAD=155, SGN=156, 
		ASC=157, LEN=158, INSTR=159, VAL=160, TIMES=161, STRS=162, STRINGS=163, 
		CHRS=164, LEFTS=165, MIDS=166, RIGHTS=167, RND=168, RND0=169, RND1=170, 
		EQ=171, NE=172, GT=173, GE=174, LT=175, LE=176, NOT=177, AND=178, OR=179, 
		EOR=180, MOD=181, DIV=182, HAT=183, PLUS=184, MINUS=185, MULTIPLY=186, 
		DIVIDE=187, SHL=188, SHR=189, PLUS_E=190, MINUS_E=191, MULTIPLY_E=192, 
		DIVIDE_E=193, SHL_E=194, SHR_E=195, NEWLINE=196, TICK=197, TILDE=198, 
		HASH=199, COLON=200, COMMA=201, DOLLAR=202, LPAREN=203, PERCENT=204, RPAREN=205, 
		SEMICOLON=206, UNDERSCORE=207, COMMENT=208, STRINGLITERAL=209, PROC_NAME=210, 
		FN_INTEGER=211, FN_FLOAT=212, FN_STRING=213, VARIABLE_FLOAT=214, VARIABLE_INTEGER=215, 
		VARIABLE_STRING=216, VARIABLE_TYPE=217, HEXNUMBER=218, BINARYNUMBER=219, 
		NUMBER=220, FLOAT=221, WS=222;
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
		RULE_stmtCLS = 52, RULE_stmtCOLOUR = 53, RULE_stmtCOLOURBG = 54, RULE_stmtGRAPHICS = 55, 
		RULE_stmtFLIP = 56, RULE_stmtCIRCLE = 57, RULE_stmtLINE = 58, RULE_stmtRECTANGLE = 59, 
		RULE_stmtTRIANGLE = 60, RULE_stmtPLOT = 61, RULE_stmtCLIPON = 62, RULE_stmtCLIPOFF = 63, 
		RULE_stmtTEXT = 64, RULE_stmtTEXTRIGHT = 65, RULE_stmtTEXTCENTRE = 66, 
		RULE_stmtSHOWFPS = 67, RULE_stmtRENDERFRAME = 68, RULE_stmtCREATEVERTEX = 69, 
		RULE_stmtCREATETRIANGLE = 70, RULE_stmtTRANSLATE = 71, RULE_stmtROTATE = 72, 
		RULE_stmtSCALE = 73, RULE_stmtDELETEOBJECT = 74, RULE_when = 75, RULE_fnName = 76, 
		RULE_literal = 77, RULE_var = 78, RULE_typeVar = 79, RULE_numVar = 80, 
		RULE_strVar = 81, RULE_justVar = 82, RULE_justNumberVar = 83, RULE_varName = 84, 
		RULE_varNameInteger = 85, RULE_varNameString = 86, RULE_varNameType = 87, 
		RULE_varDecl = 88, RULE_varDeclWithDimension = 89, RULE_varList = 90, 
		RULE_functionVarList = 91, RULE_functionParList = 92, RULE_exprList = 93, 
		RULE_printListItem = 94, RULE_printListTick = 95, RULE_printListSeparator = 96, 
		RULE_printList = 97, RULE_expr = 98, RULE_number = 99, RULE_numberInteger = 100, 
		RULE_numberHex = 101, RULE_numberBinary = 102, RULE_numberFloat = 103, 
		RULE_strFunc = 104, RULE_string = 105, RULE_strExpr = 106, RULE_numFunc = 107, 
		RULE_numExpr = 108, RULE_numColours = 109, RULE_defaultFonts = 110;
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
			"stmtCLS", "stmtCOLOUR", "stmtCOLOURBG", "stmtGRAPHICS", "stmtFLIP", 
			"stmtCIRCLE", "stmtLINE", "stmtRECTANGLE", "stmtTRIANGLE", "stmtPLOT", 
			"stmtCLIPON", "stmtCLIPOFF", "stmtTEXT", "stmtTEXTRIGHT", "stmtTEXTCENTRE", 
			"stmtSHOWFPS", "stmtRENDERFRAME", "stmtCREATEVERTEX", "stmtCREATETRIANGLE", 
			"stmtTRANSLATE", "stmtROTATE", "stmtSCALE", "stmtDELETEOBJECT", "when", 
			"fnName", "literal", "var", "typeVar", "numVar", "strVar", "justVar", 
			"justNumberVar", "varName", "varNameInteger", "varNameString", "varNameType", 
			"varDecl", "varDeclWithDimension", "varList", "functionVarList", "functionParList", 
			"exprList", "printListItem", "printListTick", "printListSeparator", "printList", 
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
			null, null, null, "'='", "'<>'", "'>'", "'>='", "'<'", "'<='", null, 
			null, null, null, null, null, "'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", 
			"'>>'", "'+='", "'-='", "'*='", "'/='", "'<<='", "'>>='", null, "'''", 
			"'~'", "'#'", "':'", "','", "'$'", "'('", "'%'", "')'", "';'", "'_'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "BREAKPOINT", "CASE", "CHAIN", "DATA", "DEF", "DIM", "ELSE", "END", 
			"ENDCASE", "ENDIF", "ENDFN", "ENDPROC", "ENDWHILE", "FALSE", "FOR", "FLOAT_TOKEN", 
			"FN", "IF", "IN", "INSTALL", "INT", "INPUT", "GLOBAL", "GOTO", "GOSUB", 
			"LOCAL", "LET", "NEXT", "OF", "OFF", "ON", "OSCLI", "OTHERWISE", "PRINT", 
			"PROC", "READ", "REM", "REPEAT", "RESTORE", "RETURN", "SPC", "STEP", 
			"SWAP", "THEN", "TO", "TRACE", "TRACEON", "TRACEOFF", "TRUE", "TYPE", 
			"UNTIL", "WHEN", "WHILE", "MOUSE", "INKEY", "INKEYS", "GET", "GETS", 
			"RED", "GREEN", "YELLOW", "BLUE", "MAGENTA", "CYAN", "WHITE", "BLACK", 
			"MONO15", "MONO20", "MONO25", "MONO30", "MONO35", "MONO40", "MONO50", 
			"MONO75", "MONO100", "PROP15", "PROP20", "PROP25", "PROP30", "PROP35", 
			"PROP40", "PROP50", "PROP75", "PROP100", "SERIF15", "SERIF20", "SERIF25", 
			"SERIF30", "SERIF35", "SERIF40", "SERIF50", "SERIF75", "SERIF100", "RENDERFRAME", 
			"CREATEVERTEX", "CREATETRIANGLE", "TRANSLATE", "ROTATE", "SCALE", "DELETEOBJECT", 
			"CREATESHAPE", "CREATEOBJECT", "SOLID", "WIREFRAME", "SHADED", "FILLEDWIREFRAME", 
			"BGETH", "BPUTH", "CLOSEH", "EOFH", "GETSH", "LISTFILES", "OPENIN", "OPENOUT", 
			"OPENUP", "PTRH", "BANKED", "CIRCLE", "CLS", "CLIPON", "CLIPOFF", "COLOUR", 
			"COLOURBG", "CREATEFONT", "FILL", "FLIP", "SHOWFPS", "GRAPHICS", "LINE", 
			"LOADTYPEFACE", "RECTANGLE", "PLOT", "POINT", "SCREENWIDTH", "SCREENHEIGHT", 
			"TEXT", "TEXTRIGHT", "TEXTCENTRE", "TEXTCENTER", "TRIANGLE", "TIME", 
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
			setState(225);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INSTALL) | (1L << INPUT) | (1L << GLOBAL) | (1L << GOTO) | (1L << GOSUB) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 94)) & ~0x3f) == 0 && ((1L << (_la - 94)) & ((1L << (RENDERFRAME - 94)) | (1L << (CREATEVERTEX - 94)) | (1L << (CREATETRIANGLE - 94)) | (1L << (TRANSLATE - 94)) | (1L << (ROTATE - 94)) | (1L << (SCALE - 94)) | (1L << (DELETEOBJECT - 94)) | (1L << (BGETH - 94)) | (1L << (BPUTH - 94)) | (1L << (CLOSEH - 94)) | (1L << (PTRH - 94)) | (1L << (CIRCLE - 94)) | (1L << (CLS - 94)) | (1L << (CLIPON - 94)) | (1L << (CLIPOFF - 94)) | (1L << (COLOUR - 94)) | (1L << (COLOURBG - 94)) | (1L << (FLIP - 94)) | (1L << (SHOWFPS - 94)) | (1L << (GRAPHICS - 94)) | (1L << (LINE - 94)) | (1L << (RECTANGLE - 94)) | (1L << (PLOT - 94)) | (1L << (TEXT - 94)) | (1L << (TEXTRIGHT - 94)) | (1L << (TEXTCENTRE - 94)) | (1L << (TEXTCENTER - 94)) | (1L << (TRIANGLE - 94)))) != 0) || ((((_la - 196)) & ~0x3f) == 0 && ((1L << (_la - 196)) & ((1L << (NEWLINE - 196)) | (1L << (COLON - 196)) | (1L << (COMMENT - 196)) | (1L << (PROC_NAME - 196)) | (1L << (FN_INTEGER - 196)) | (1L << (FN_FLOAT - 196)) | (1L << (FN_STRING - 196)) | (1L << (VARIABLE_FLOAT - 196)) | (1L << (VARIABLE_INTEGER - 196)) | (1L << (VARIABLE_STRING - 196)) | (1L << (VARIABLE_TYPE - 196)) | (1L << (NUMBER - 196)))) != 0)) {
				{
				{
				setState(222);
				line();
				}
				}
				setState(227);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(228);
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
			setState(251);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(230);
				match(NEWLINE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(232);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(231);
					linenumber();
					}
				}

				setState(235);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REM || _la==COMMENT) {
					{
					setState(234);
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

				setState(237);
				match(NEWLINE);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(239);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(238);
					linenumber();
					}
				}

				setState(242); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(241);
					stmt();
					}
					}
					setState(244); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INSTALL) | (1L << INPUT) | (1L << GLOBAL) | (1L << GOTO) | (1L << GOSUB) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 94)) & ~0x3f) == 0 && ((1L << (_la - 94)) & ((1L << (RENDERFRAME - 94)) | (1L << (CREATEVERTEX - 94)) | (1L << (CREATETRIANGLE - 94)) | (1L << (TRANSLATE - 94)) | (1L << (ROTATE - 94)) | (1L << (SCALE - 94)) | (1L << (DELETEOBJECT - 94)) | (1L << (BGETH - 94)) | (1L << (BPUTH - 94)) | (1L << (CLOSEH - 94)) | (1L << (PTRH - 94)) | (1L << (CIRCLE - 94)) | (1L << (CLS - 94)) | (1L << (CLIPON - 94)) | (1L << (CLIPOFF - 94)) | (1L << (COLOUR - 94)) | (1L << (COLOURBG - 94)) | (1L << (FLIP - 94)) | (1L << (SHOWFPS - 94)) | (1L << (GRAPHICS - 94)) | (1L << (LINE - 94)) | (1L << (RECTANGLE - 94)) | (1L << (PLOT - 94)) | (1L << (TEXT - 94)) | (1L << (TEXTRIGHT - 94)) | (1L << (TEXTCENTRE - 94)) | (1L << (TEXTCENTER - 94)) | (1L << (TRIANGLE - 94)))) != 0) || ((((_la - 200)) & ~0x3f) == 0 && ((1L << (_la - 200)) & ((1L << (COLON - 200)) | (1L << (PROC_NAME - 200)) | (1L << (FN_INTEGER - 200)) | (1L << (FN_FLOAT - 200)) | (1L << (FN_STRING - 200)) | (1L << (VARIABLE_FLOAT - 200)) | (1L << (VARIABLE_INTEGER - 200)) | (1L << (VARIABLE_STRING - 200)) | (1L << (VARIABLE_TYPE - 200)))) != 0) );
				setState(247);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REM || _la==COMMENT) {
					{
					setState(246);
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

				setState(249);
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
			setState(254); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(253);
					line();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(256); 
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
			setState(261);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(258);
					stmt();
					}
					} 
				}
				setState(263);
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
			setState(276);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(267);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INSTALL) | (1L << INPUT) | (1L << GLOBAL) | (1L << GOTO) | (1L << GOSUB) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 94)) & ~0x3f) == 0 && ((1L << (_la - 94)) & ((1L << (RENDERFRAME - 94)) | (1L << (CREATEVERTEX - 94)) | (1L << (CREATETRIANGLE - 94)) | (1L << (TRANSLATE - 94)) | (1L << (ROTATE - 94)) | (1L << (SCALE - 94)) | (1L << (DELETEOBJECT - 94)) | (1L << (BGETH - 94)) | (1L << (BPUTH - 94)) | (1L << (CLOSEH - 94)) | (1L << (PTRH - 94)) | (1L << (CIRCLE - 94)) | (1L << (CLS - 94)) | (1L << (CLIPON - 94)) | (1L << (CLIPOFF - 94)) | (1L << (COLOUR - 94)) | (1L << (COLOURBG - 94)) | (1L << (FLIP - 94)) | (1L << (SHOWFPS - 94)) | (1L << (GRAPHICS - 94)) | (1L << (LINE - 94)) | (1L << (RECTANGLE - 94)) | (1L << (PLOT - 94)) | (1L << (TEXT - 94)) | (1L << (TEXTRIGHT - 94)) | (1L << (TEXTCENTRE - 94)) | (1L << (TEXTCENTER - 94)) | (1L << (TRIANGLE - 94)))) != 0) || ((((_la - 200)) & ~0x3f) == 0 && ((1L << (_la - 200)) & ((1L << (COLON - 200)) | (1L << (PROC_NAME - 200)) | (1L << (FN_INTEGER - 200)) | (1L << (FN_FLOAT - 200)) | (1L << (FN_STRING - 200)) | (1L << (VARIABLE_FLOAT - 200)) | (1L << (VARIABLE_INTEGER - 200)) | (1L << (VARIABLE_STRING - 200)) | (1L << (VARIABLE_TYPE - 200)))) != 0)) {
					{
					{
					setState(264);
					stmt();
					}
					}
					setState(269);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(273);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(270);
						line();
						}
						} 
					}
					setState(275);
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
			setState(278);
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
			setState(286);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(280);
				match(COLON);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(281);
				coreStmt();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(282);
				keyMouseStmt();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(283);
				stmtOperatorEqual();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(284);
				ioStmt();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(285);
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
		public StmtCallFNContext stmtCallFN() {
			return getRuleContext(StmtCallFNContext.class,0);
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
			setState(316);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(288);
				stmtBREAKPOINT();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(289);
				stmtCASE();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(290);
				stmtCHAIN();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(291);
				stmtDATA();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(292);
				stmtDIM();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(293);
				stmtEND();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(294);
				stmtRETURN();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(295);
				stmtDEFFN();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(296);
				stmtDEFPROC();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(297);
				stmtFOR();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(298);
				stmtFORIN();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(299);
				stmtGOTO();
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(300);
				stmtGOSUB();
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(301);
				stmtCallFN();
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(302);
				stmtIF();
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(303);
				stmtIFMultiline();
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(304);
				stmtINSTALL();
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(305);
				stmtLET();
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(306);
				stmtOSCLI();
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(307);
				stmtCallPROC();
				}
				break;
			case 21:
				enterOuterAlt(_localctx, 21);
				{
				setState(308);
				stmtREAD();
				}
				break;
			case 22:
				enterOuterAlt(_localctx, 22);
				{
				setState(309);
				stmtRESTORE();
				}
				break;
			case 23:
				enterOuterAlt(_localctx, 23);
				{
				setState(310);
				stmtSWAP();
				}
				break;
			case 24:
				enterOuterAlt(_localctx, 24);
				{
				setState(311);
				stmtTRACEON();
				}
				break;
			case 25:
				enterOuterAlt(_localctx, 25);
				{
				setState(312);
				stmtTRACEOFF();
				}
				break;
			case 26:
				enterOuterAlt(_localctx, 26);
				{
				setState(313);
				stmtTYPE();
				}
				break;
			case 27:
				enterOuterAlt(_localctx, 27);
				{
				setState(314);
				stmtREPEAT();
				}
				break;
			case 28:
				enterOuterAlt(_localctx, 28);
				{
				setState(315);
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
			setState(318);
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
			enterOuterAlt(_localctx, 1);
			{
			setState(320);
			match(CASE);
			setState(321);
			expr();
			setState(322);
			match(OF);
			setState(323);
			match(NEWLINE);
			setState(325); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(324);
				when();
				}
				}
				setState(327); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==WHEN );
			setState(331);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==OTHERWISE) {
				{
				setState(329);
				match(OTHERWISE);
				setState(330);
				body();
				}
			}

			setState(333);
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
			setState(335);
			match(CHAIN);
			setState(336);
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
			setState(338);
			match(DATA);
			setState(339);
			literal();
			setState(344);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(340);
				match(COMMA);
				setState(341);
				literal();
				}
				}
				setState(346);
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
			setState(348);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(347);
				match(LOCAL);
				}
			}

			setState(350);
			match(DIM);
			setState(351);
			varDeclWithDimension();
			setState(356);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(352);
				match(COMMA);
				setState(353);
				varDeclWithDimension();
				}
				}
				setState(358);
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
			setState(359);
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
			setState(361);
			match(RETURN);
			setState(363);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				{
				setState(362);
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
			setState(365);
			match(DEF);
			setState(366);
			fnName();
			setState(367);
			match(LPAREN);
			setState(369);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN || ((((_la - 214)) & ~0x3f) == 0 && ((1L << (_la - 214)) & ((1L << (VARIABLE_FLOAT - 214)) | (1L << (VARIABLE_INTEGER - 214)) | (1L << (VARIABLE_STRING - 214)))) != 0)) {
				{
				setState(368);
				functionVarList();
				}
			}

			setState(371);
			match(RPAREN);
			setState(372);
			body();
			setState(374);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(373);
				linenumber();
				}
			}

			setState(376);
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
			setState(378);
			match(DEF);
			setState(379);
			match(PROC_NAME);
			setState(380);
			match(LPAREN);
			setState(382);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN || ((((_la - 214)) & ~0x3f) == 0 && ((1L << (_la - 214)) & ((1L << (VARIABLE_FLOAT - 214)) | (1L << (VARIABLE_INTEGER - 214)) | (1L << (VARIABLE_STRING - 214)))) != 0)) {
				{
				setState(381);
				functionVarList();
				}
			}

			setState(384);
			match(RPAREN);
			setState(385);
			body();
			setState(387);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(386);
				linenumber();
				}
			}

			setState(389);
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
			setState(391);
			match(FOR);
			setState(393);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(392);
				match(LOCAL);
				}
			}

			setState(395);
			justNumberVar();
			setState(396);
			match(EQ);
			setState(397);
			numExpr(0);
			setState(398);
			match(TO);
			setState(399);
			numExpr(0);
			setState(402);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==STEP) {
				{
				setState(400);
				match(STEP);
				setState(401);
				numExpr(0);
				}
			}

			setState(404);
			body();
			setState(406);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(405);
				linenumber();
				}
			}

			setState(408);
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
			setState(410);
			match(FOR);
			setState(412);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(411);
				match(LOCAL);
				}
			}

			setState(414);
			justVar();
			setState(415);
			match(IN);
			setState(416);
			justVar();
			setState(417);
			match(LPAREN);
			setState(418);
			match(RPAREN);
			setState(419);
			body();
			setState(421);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(420);
				linenumber();
				}
			}

			setState(423);
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
			setState(425);
			fnName();
			setState(426);
			match(LPAREN);
			setState(428);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (CYAN - 64)) | (1L << (WHITE - 64)) | (1L << (BLACK - 64)) | (1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (LOADTYPEFACE - 130)) | (1L << (POINT - 130)) | (1L << (SCREENWIDTH - 130)) | (1L << (SCREENHEIGHT - 130)) | (1L << (TIME - 130)) | (1L << (PI - 130)) | (1L << (SQR - 130)) | (1L << (LN - 130)) | (1L << (LOG - 130)) | (1L << (EXP - 130)) | (1L << (ATN - 130)) | (1L << (TAN - 130)) | (1L << (COS - 130)) | (1L << (SIN - 130)) | (1L << (ABS - 130)) | (1L << (ACS - 130)) | (1L << (ASN - 130)) | (1L << (DEG - 130)) | (1L << (RAD - 130)) | (1L << (SGN - 130)) | (1L << (ASC - 130)) | (1L << (LEN - 130)) | (1L << (INSTR - 130)) | (1L << (VAL - 130)) | (1L << (TIMES - 130)) | (1L << (STRS - 130)) | (1L << (STRINGS - 130)) | (1L << (CHRS - 130)) | (1L << (LEFTS - 130)) | (1L << (MIDS - 130)) | (1L << (RIGHTS - 130)) | (1L << (RND - 130)) | (1L << (RND0 - 130)) | (1L << (RND1 - 130)) | (1L << (NOT - 130)) | (1L << (PLUS - 130)) | (1L << (MINUS - 130)))) != 0) || ((((_la - 203)) & ~0x3f) == 0 && ((1L << (_la - 203)) & ((1L << (LPAREN - 203)) | (1L << (STRINGLITERAL - 203)) | (1L << (FN_INTEGER - 203)) | (1L << (FN_FLOAT - 203)) | (1L << (FN_STRING - 203)) | (1L << (VARIABLE_FLOAT - 203)) | (1L << (VARIABLE_INTEGER - 203)) | (1L << (VARIABLE_STRING - 203)) | (1L << (VARIABLE_TYPE - 203)) | (1L << (HEXNUMBER - 203)) | (1L << (BINARYNUMBER - 203)) | (1L << (NUMBER - 203)) | (1L << (FLOAT - 203)))) != 0)) {
				{
				setState(427);
				functionParList();
				}
			}

			setState(430);
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
			setState(432);
			match(IF);
			setState(433);
			expr();
			setState(434);
			content();
			setState(437);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,30,_ctx) ) {
			case 1:
				{
				setState(435);
				match(ELSE);
				setState(436);
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
		public LinenumberContext linenumber() {
			return getRuleContext(LinenumberContext.class,0);
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
			setState(439);
			match(IF);
			setState(440);
			expr();
			setState(441);
			match(THEN);
			setState(442);
			match(NEWLINE);
			setState(443);
			linePlus();
			setState(447);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ELSE) {
				{
				setState(444);
				match(ELSE);
				setState(445);
				match(NEWLINE);
				setState(446);
				linePlus();
				}
			}

			setState(450);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(449);
				linenumber();
				}
			}

			setState(452);
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
			setState(454);
			match(INSTALL);
			setState(455);
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
			setState(457);
			match(GOTO);
			setState(458);
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
			setState(460);
			match(GOSUB);
			setState(461);
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
			setState(467);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case GLOBAL:
			case LET:
			case VARIABLE_FLOAT:
			case VARIABLE_INTEGER:
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(464);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==GLOBAL || _la==LET) {
					{
					setState(463);
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
				setState(466);
				match(LOCAL);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(469);
			varDecl();
			setState(470);
			match(EQ);
			setState(471);
			expr();
			setState(479);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(472);
				match(COMMA);
				setState(473);
				varDecl();
				setState(474);
				match(EQ);
				setState(475);
				expr();
				}
				}
				setState(481);
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
			setState(482);
			match(OSCLI);
			setState(483);
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
			setState(485);
			match(PROC_NAME);
			setState(486);
			match(LPAREN);
			setState(488);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (CYAN - 64)) | (1L << (WHITE - 64)) | (1L << (BLACK - 64)) | (1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (LOADTYPEFACE - 130)) | (1L << (POINT - 130)) | (1L << (SCREENWIDTH - 130)) | (1L << (SCREENHEIGHT - 130)) | (1L << (TIME - 130)) | (1L << (PI - 130)) | (1L << (SQR - 130)) | (1L << (LN - 130)) | (1L << (LOG - 130)) | (1L << (EXP - 130)) | (1L << (ATN - 130)) | (1L << (TAN - 130)) | (1L << (COS - 130)) | (1L << (SIN - 130)) | (1L << (ABS - 130)) | (1L << (ACS - 130)) | (1L << (ASN - 130)) | (1L << (DEG - 130)) | (1L << (RAD - 130)) | (1L << (SGN - 130)) | (1L << (ASC - 130)) | (1L << (LEN - 130)) | (1L << (INSTR - 130)) | (1L << (VAL - 130)) | (1L << (TIMES - 130)) | (1L << (STRS - 130)) | (1L << (STRINGS - 130)) | (1L << (CHRS - 130)) | (1L << (LEFTS - 130)) | (1L << (MIDS - 130)) | (1L << (RIGHTS - 130)) | (1L << (RND - 130)) | (1L << (RND0 - 130)) | (1L << (RND1 - 130)) | (1L << (NOT - 130)) | (1L << (PLUS - 130)) | (1L << (MINUS - 130)))) != 0) || ((((_la - 203)) & ~0x3f) == 0 && ((1L << (_la - 203)) & ((1L << (LPAREN - 203)) | (1L << (STRINGLITERAL - 203)) | (1L << (FN_INTEGER - 203)) | (1L << (FN_FLOAT - 203)) | (1L << (FN_STRING - 203)) | (1L << (VARIABLE_FLOAT - 203)) | (1L << (VARIABLE_INTEGER - 203)) | (1L << (VARIABLE_STRING - 203)) | (1L << (VARIABLE_TYPE - 203)) | (1L << (HEXNUMBER - 203)) | (1L << (BINARYNUMBER - 203)) | (1L << (NUMBER - 203)) | (1L << (FLOAT - 203)))) != 0)) {
				{
				setState(487);
				functionParList();
				}
			}

			setState(490);
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
			setState(492);
			match(READ);
			setState(493);
			varDecl();
			setState(498);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(494);
				match(COMMA);
				setState(495);
				varDecl();
				}
				}
				setState(500);
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
			setState(501);
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
			setState(503);
			match(SWAP);
			setState(504);
			justVar();
			setState(505);
			match(COMMA);
			setState(506);
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
			setState(508);
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
			setState(510);
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
			setState(512);
			match(TYPE);
			setState(513);
			varName();
			setState(514);
			match(LPAREN);
			setState(515);
			justVar();
			setState(520);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(516);
				match(COMMA);
				setState(517);
				justVar();
				}
				}
				setState(522);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(523);
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
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(525);
			match(REPEAT);
			setState(526);
			body();
			setState(527);
			match(UNTIL);
			setState(528);
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
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(530);
			match(WHILE);
			setState(531);
			expr();
			setState(532);
			body();
			setState(533);
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
			setState(542);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INPUT:
				enterOuterAlt(_localctx, 1);
				{
				setState(535);
				stmtINPUT();
				}
				break;
			case PRINT:
				enterOuterAlt(_localctx, 2);
				{
				setState(536);
				stmtPRINT();
				}
				break;
			case MOUSE:
				enterOuterAlt(_localctx, 3);
				{
				setState(537);
				stmtMOUSE();
				}
				break;
			case INKEY:
				enterOuterAlt(_localctx, 4);
				{
				setState(538);
				stmtINKEY();
				}
				break;
			case INKEYS:
				enterOuterAlt(_localctx, 5);
				{
				setState(539);
				stmtINKEYS();
				}
				break;
			case GET:
				enterOuterAlt(_localctx, 6);
				{
				setState(540);
				stmtGET();
				}
				break;
			case GETS:
				enterOuterAlt(_localctx, 7);
				{
				setState(541);
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
		public VarListContext varList() {
			return getRuleContext(VarListContext.class,0);
		}
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
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
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(544);
			match(INPUT);
			setState(548);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,40,_ctx) ) {
			case 1:
				{
				setState(545);
				strExpr(0);
				setState(546);
				match(COMMA);
				}
				break;
			}
			setState(550);
			varList();
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
			setState(552);
			match(PRINT);
			setState(554);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,41,_ctx) ) {
			case 1:
				{
				setState(553);
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
			setState(556);
			match(MOUSE);
			setState(557);
			varNameInteger();
			setState(558);
			match(COMMA);
			setState(559);
			varNameInteger();
			setState(560);
			match(COMMA);
			setState(561);
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
			setState(563);
			match(INKEY);
			setState(564);
			match(LPAREN);
			setState(565);
			numExpr(0);
			setState(566);
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
			setState(568);
			match(INKEYS);
			setState(569);
			match(LPAREN);
			setState(570);
			numExpr(0);
			setState(571);
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
			setState(573);
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
			setState(575);
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
			setState(601);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,42,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(577);
				varDecl();
				setState(578);
				match(MULTIPLY_E);
				setState(579);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(581);
				varDecl();
				setState(582);
				match(DIVIDE_E);
				setState(583);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(585);
				varDecl();
				setState(586);
				match(PLUS_E);
				setState(587);
				numExpr(0);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(589);
				varDecl();
				setState(590);
				match(MINUS_E);
				setState(591);
				numExpr(0);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(593);
				varDecl();
				setState(594);
				match(SHL_E);
				setState(595);
				numExpr(0);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(597);
				varDecl();
				setState(598);
				match(SHR_E);
				setState(599);
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
			setState(608);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BPUTH:
				enterOuterAlt(_localctx, 1);
				{
				setState(603);
				stmtBPUTH();
				}
				break;
			case BGETH:
				enterOuterAlt(_localctx, 2);
				{
				setState(604);
				stmtBGETH();
				}
				break;
			case PTRH:
				enterOuterAlt(_localctx, 3);
				{
				setState(605);
				stmtPTRH();
				}
				break;
			case CLOSEH:
				enterOuterAlt(_localctx, 4);
				{
				setState(606);
				stmtCLOSEH();
				}
				break;
			case LOCAL:
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 5);
				{
				setState(607);
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
			setState(610);
			match(BPUTH);
			setState(611);
			numExpr(0);
			setState(612);
			match(COMMA);
			setState(613);
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
			setState(615);
			match(BGETH);
			setState(616);
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
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
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
			setState(618);
			match(PTRH);
			setState(619);
			numExpr(0);
			setState(620);
			match(EQ);
			setState(621);
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
			setState(623);
			match(CLOSEH);
			setState(624);
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
			setState(627);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(626);
				match(LOCAL);
				}
			}

			setState(629);
			varNameString();
			setState(630);
			match(LPAREN);
			setState(631);
			match(RPAREN);
			setState(632);
			match(EQ);
			setState(633);
			match(LISTFILES);
			setState(634);
			match(LPAREN);
			setState(635);
			strExpr(0);
			setState(636);
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
			setState(661);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CLS:
				enterOuterAlt(_localctx, 1);
				{
				setState(638);
				stmtCLS();
				}
				break;
			case COLOUR:
				enterOuterAlt(_localctx, 2);
				{
				setState(639);
				stmtCOLOUR();
				}
				break;
			case COLOURBG:
				enterOuterAlt(_localctx, 3);
				{
				setState(640);
				stmtCOLOURBG();
				}
				break;
			case GRAPHICS:
				enterOuterAlt(_localctx, 4);
				{
				setState(641);
				stmtGRAPHICS();
				}
				break;
			case FLIP:
				enterOuterAlt(_localctx, 5);
				{
				setState(642);
				stmtFLIP();
				}
				break;
			case CIRCLE:
				enterOuterAlt(_localctx, 6);
				{
				setState(643);
				stmtCIRCLE();
				}
				break;
			case LINE:
				enterOuterAlt(_localctx, 7);
				{
				setState(644);
				stmtLINE();
				}
				break;
			case RECTANGLE:
				enterOuterAlt(_localctx, 8);
				{
				setState(645);
				stmtRECTANGLE();
				}
				break;
			case TRIANGLE:
				enterOuterAlt(_localctx, 9);
				{
				setState(646);
				stmtTRIANGLE();
				}
				break;
			case PLOT:
				enterOuterAlt(_localctx, 10);
				{
				setState(647);
				stmtPLOT();
				}
				break;
			case CLIPON:
				enterOuterAlt(_localctx, 11);
				{
				setState(648);
				stmtCLIPON();
				}
				break;
			case CLIPOFF:
				enterOuterAlt(_localctx, 12);
				{
				setState(649);
				stmtCLIPOFF();
				}
				break;
			case TEXT:
				enterOuterAlt(_localctx, 13);
				{
				setState(650);
				stmtTEXT();
				}
				break;
			case TEXTRIGHT:
				enterOuterAlt(_localctx, 14);
				{
				setState(651);
				stmtTEXTRIGHT();
				}
				break;
			case TEXTCENTRE:
			case TEXTCENTER:
				enterOuterAlt(_localctx, 15);
				{
				setState(652);
				stmtTEXTCENTRE();
				}
				break;
			case SHOWFPS:
				enterOuterAlt(_localctx, 16);
				{
				setState(653);
				stmtSHOWFPS();
				}
				break;
			case RENDERFRAME:
				enterOuterAlt(_localctx, 17);
				{
				setState(654);
				stmtRENDERFRAME();
				}
				break;
			case CREATEVERTEX:
				enterOuterAlt(_localctx, 18);
				{
				setState(655);
				stmtCREATEVERTEX();
				}
				break;
			case CREATETRIANGLE:
				enterOuterAlt(_localctx, 19);
				{
				setState(656);
				stmtCREATETRIANGLE();
				}
				break;
			case TRANSLATE:
				enterOuterAlt(_localctx, 20);
				{
				setState(657);
				stmtTRANSLATE();
				}
				break;
			case ROTATE:
				enterOuterAlt(_localctx, 21);
				{
				setState(658);
				stmtROTATE();
				}
				break;
			case SCALE:
				enterOuterAlt(_localctx, 22);
				{
				setState(659);
				stmtSCALE();
				}
				break;
			case DELETEOBJECT:
				enterOuterAlt(_localctx, 23);
				{
				setState(660);
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
			setState(663);
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
			setState(674);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,46,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(665);
				match(COLOUR);
				setState(666);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(667);
				match(COLOUR);
				setState(668);
				numExpr(0);
				setState(669);
				match(COMMA);
				setState(670);
				numExpr(0);
				setState(671);
				match(COMMA);
				setState(672);
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
			setState(685);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,47,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(676);
				match(COLOURBG);
				setState(677);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(678);
				match(COLOURBG);
				setState(679);
				numExpr(0);
				setState(680);
				match(COMMA);
				setState(681);
				numExpr(0);
				setState(682);
				match(COMMA);
				setState(683);
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
		enterRule(_localctx, 110, RULE_stmtGRAPHICS);
		try {
			setState(701);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,48,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(687);
				match(GRAPHICS);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(688);
				match(GRAPHICS);
				setState(689);
				numExpr(0);
				setState(690);
				match(COMMA);
				setState(691);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(693);
				match(GRAPHICS);
				setState(694);
				match(BANKED);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(695);
				match(GRAPHICS);
				setState(696);
				match(BANKED);
				setState(697);
				numExpr(0);
				setState(698);
				match(COMMA);
				setState(699);
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
		enterRule(_localctx, 112, RULE_stmtFLIP);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(703);
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
		enterRule(_localctx, 114, RULE_stmtCIRCLE);
		try {
			setState(720);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,49,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(705);
				match(CIRCLE);
				setState(706);
				numExpr(0);
				setState(707);
				match(COMMA);
				setState(708);
				numExpr(0);
				setState(709);
				match(COMMA);
				setState(710);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(712);
				match(CIRCLE);
				setState(713);
				match(FILL);
				setState(714);
				numExpr(0);
				setState(715);
				match(COMMA);
				setState(716);
				numExpr(0);
				setState(717);
				match(COMMA);
				setState(718);
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
		enterRule(_localctx, 116, RULE_stmtLINE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(722);
			match(LINE);
			setState(723);
			numExpr(0);
			setState(724);
			match(COMMA);
			setState(725);
			numExpr(0);
			setState(726);
			match(COMMA);
			setState(727);
			numExpr(0);
			setState(728);
			match(COMMA);
			setState(729);
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
		enterRule(_localctx, 118, RULE_stmtRECTANGLE);
		try {
			setState(750);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,50,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(731);
				match(RECTANGLE);
				setState(732);
				numExpr(0);
				setState(733);
				match(COMMA);
				setState(734);
				numExpr(0);
				setState(735);
				match(COMMA);
				setState(736);
				numExpr(0);
				setState(737);
				match(COMMA);
				setState(738);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(740);
				match(RECTANGLE);
				setState(741);
				match(FILL);
				setState(742);
				numExpr(0);
				setState(743);
				match(COMMA);
				setState(744);
				numExpr(0);
				setState(745);
				match(COMMA);
				setState(746);
				numExpr(0);
				setState(747);
				match(COMMA);
				setState(748);
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
		enterRule(_localctx, 120, RULE_stmtTRIANGLE);
		try {
			setState(799);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,51,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(752);
				match(TRIANGLE);
				setState(753);
				numExpr(0);
				setState(754);
				match(COMMA);
				setState(755);
				numExpr(0);
				setState(756);
				match(COMMA);
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
				setState(762);
				match(COMMA);
				setState(763);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(765);
				match(TRIANGLE);
				setState(766);
				match(FILL);
				setState(767);
				numExpr(0);
				setState(768);
				match(COMMA);
				setState(769);
				numExpr(0);
				setState(770);
				match(COMMA);
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
				setState(776);
				match(COMMA);
				setState(777);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(779);
				match(TRIANGLE);
				setState(780);
				match(SHADED);
				setState(781);
				numExpr(0);
				setState(782);
				match(COMMA);
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
				setState(790);
				match(COMMA);
				setState(791);
				numExpr(0);
				setState(792);
				match(COMMA);
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
		enterRule(_localctx, 122, RULE_stmtPLOT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(801);
			match(PLOT);
			setState(802);
			numExpr(0);
			setState(803);
			match(COMMA);
			setState(804);
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
		enterRule(_localctx, 124, RULE_stmtCLIPON);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(806);
			match(CLIPON);
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
		enterRule(_localctx, 126, RULE_stmtCLIPOFF);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(815);
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
		enterRule(_localctx, 128, RULE_stmtTEXT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(817);
			match(TEXT);
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
		enterRule(_localctx, 130, RULE_stmtTEXTRIGHT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(826);
			match(TEXTRIGHT);
			setState(827);
			numExpr(0);
			setState(828);
			match(COMMA);
			setState(829);
			numExpr(0);
			setState(830);
			match(COMMA);
			setState(831);
			numExpr(0);
			setState(832);
			match(COMMA);
			setState(833);
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
		enterRule(_localctx, 132, RULE_stmtTEXTCENTRE);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(835);
			_la = _input.LA(1);
			if ( !(_la==TEXTCENTRE || _la==TEXTCENTER) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
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
		enterRule(_localctx, 134, RULE_stmtSHOWFPS);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(844);
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
		enterRule(_localctx, 136, RULE_stmtRENDERFRAME);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(846);
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
		enterRule(_localctx, 138, RULE_stmtCREATEVERTEX);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(848);
			match(CREATEVERTEX);
			setState(849);
			varNameType();
			setState(850);
			match(LPAREN);
			setState(851);
			numExpr(0);
			setState(852);
			match(RPAREN);
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
		enterRule(_localctx, 140, RULE_stmtCREATETRIANGLE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(862);
			match(CREATETRIANGLE);
			setState(863);
			varNameType();
			setState(864);
			match(LPAREN);
			setState(865);
			numExpr(0);
			setState(866);
			match(RPAREN);
			setState(867);
			match(COMMA);
			setState(868);
			numExpr(0);
			setState(869);
			match(COMMA);
			setState(870);
			numExpr(0);
			setState(871);
			match(COMMA);
			setState(872);
			numExpr(0);
			setState(873);
			match(COMMA);
			setState(874);
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
		enterRule(_localctx, 142, RULE_stmtTRANSLATE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(876);
			match(TRANSLATE);
			setState(877);
			numExpr(0);
			setState(878);
			match(COMMA);
			setState(879);
			numExpr(0);
			setState(880);
			match(COMMA);
			setState(881);
			numExpr(0);
			setState(882);
			match(COMMA);
			setState(883);
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
		enterRule(_localctx, 144, RULE_stmtROTATE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(885);
			match(ROTATE);
			setState(886);
			numExpr(0);
			setState(887);
			match(COMMA);
			setState(888);
			numExpr(0);
			setState(889);
			match(COMMA);
			setState(890);
			numExpr(0);
			setState(891);
			match(COMMA);
			setState(892);
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
		enterRule(_localctx, 146, RULE_stmtSCALE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(894);
			match(SCALE);
			setState(895);
			numExpr(0);
			setState(896);
			match(COMMA);
			setState(897);
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
		enterRule(_localctx, 148, RULE_stmtDELETEOBJECT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(899);
			match(DELETEOBJECT);
			setState(900);
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
		enterRule(_localctx, 150, RULE_when);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(902);
			match(WHEN);
			setState(903);
			expr();
			setState(908);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(904);
				match(COMMA);
				setState(905);
				expr();
				}
				}
				setState(910);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(911);
			match(COLON);
			setState(912);
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
		enterRule(_localctx, 152, RULE_fnName);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(914);
			_la = _input.LA(1);
			if ( !(((((_la - 211)) & ~0x3f) == 0 && ((1L << (_la - 211)) & ((1L << (FN_INTEGER - 211)) | (1L << (FN_FLOAT - 211)) | (1L << (FN_STRING - 211)))) != 0)) ) {
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
		enterRule(_localctx, 154, RULE_literal);
		try {
			setState(918);
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
				setState(916);
				number();
				}
				break;
			case STRINGLITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(917);
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
		enterRule(_localctx, 156, RULE_var);
		try {
			setState(923);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,54,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(920);
				numVar();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(921);
				strVar();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(922);
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
		enterRule(_localctx, 158, RULE_typeVar);
		try {
			_localctx = new TypeVarTypeContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(925);
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
		enterRule(_localctx, 160, RULE_numVar);
		int _la;
		try {
			setState(977);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,59,_ctx) ) {
			case 1:
				_localctx = new NumVarFloatArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(927);
				varName();
				setState(928);
				match(LPAREN);
				setState(929);
				numExpr(0);
				setState(932);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(930);
					match(COMMA);
					setState(931);
					numExpr(0);
					}
				}

				setState(934);
				match(RPAREN);
				}
				break;
			case 2:
				_localctx = new NumVarIntegerArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(936);
				varNameInteger();
				setState(937);
				match(LPAREN);
				setState(938);
				numExpr(0);
				setState(941);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(939);
					match(COMMA);
					setState(940);
					numExpr(0);
					}
				}

				setState(943);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new NumVarIntegerFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(945);
				typeVar();
				setState(946);
				match(LPAREN);
				setState(947);
				numExpr(0);
				setState(948);
				match(RPAREN);
				setState(949);
				varNameInteger();
				}
				break;
			case 4:
				_localctx = new NumVarFloatFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(951);
				typeVar();
				setState(952);
				match(LPAREN);
				setState(953);
				numExpr(0);
				setState(954);
				match(RPAREN);
				setState(955);
				varName();
				}
				break;
			case 5:
				_localctx = new NumVarFloatFNContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(957);
				match(FN_FLOAT);
				setState(958);
				match(LPAREN);
				setState(960);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (CYAN - 64)) | (1L << (WHITE - 64)) | (1L << (BLACK - 64)) | (1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (LOADTYPEFACE - 130)) | (1L << (POINT - 130)) | (1L << (SCREENWIDTH - 130)) | (1L << (SCREENHEIGHT - 130)) | (1L << (TIME - 130)) | (1L << (PI - 130)) | (1L << (SQR - 130)) | (1L << (LN - 130)) | (1L << (LOG - 130)) | (1L << (EXP - 130)) | (1L << (ATN - 130)) | (1L << (TAN - 130)) | (1L << (COS - 130)) | (1L << (SIN - 130)) | (1L << (ABS - 130)) | (1L << (ACS - 130)) | (1L << (ASN - 130)) | (1L << (DEG - 130)) | (1L << (RAD - 130)) | (1L << (SGN - 130)) | (1L << (ASC - 130)) | (1L << (LEN - 130)) | (1L << (INSTR - 130)) | (1L << (VAL - 130)) | (1L << (TIMES - 130)) | (1L << (STRS - 130)) | (1L << (STRINGS - 130)) | (1L << (CHRS - 130)) | (1L << (LEFTS - 130)) | (1L << (MIDS - 130)) | (1L << (RIGHTS - 130)) | (1L << (RND - 130)) | (1L << (RND0 - 130)) | (1L << (RND1 - 130)) | (1L << (NOT - 130)) | (1L << (PLUS - 130)) | (1L << (MINUS - 130)))) != 0) || ((((_la - 203)) & ~0x3f) == 0 && ((1L << (_la - 203)) & ((1L << (LPAREN - 203)) | (1L << (STRINGLITERAL - 203)) | (1L << (FN_INTEGER - 203)) | (1L << (FN_FLOAT - 203)) | (1L << (FN_STRING - 203)) | (1L << (VARIABLE_FLOAT - 203)) | (1L << (VARIABLE_INTEGER - 203)) | (1L << (VARIABLE_STRING - 203)) | (1L << (VARIABLE_TYPE - 203)) | (1L << (HEXNUMBER - 203)) | (1L << (BINARYNUMBER - 203)) | (1L << (NUMBER - 203)) | (1L << (FLOAT - 203)))) != 0)) {
					{
					setState(959);
					functionParList();
					}
				}

				setState(962);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new NumVarIntegerFNContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(963);
				match(FN_INTEGER);
				setState(964);
				match(LPAREN);
				setState(966);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (CYAN - 64)) | (1L << (WHITE - 64)) | (1L << (BLACK - 64)) | (1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (LOADTYPEFACE - 130)) | (1L << (POINT - 130)) | (1L << (SCREENWIDTH - 130)) | (1L << (SCREENHEIGHT - 130)) | (1L << (TIME - 130)) | (1L << (PI - 130)) | (1L << (SQR - 130)) | (1L << (LN - 130)) | (1L << (LOG - 130)) | (1L << (EXP - 130)) | (1L << (ATN - 130)) | (1L << (TAN - 130)) | (1L << (COS - 130)) | (1L << (SIN - 130)) | (1L << (ABS - 130)) | (1L << (ACS - 130)) | (1L << (ASN - 130)) | (1L << (DEG - 130)) | (1L << (RAD - 130)) | (1L << (SGN - 130)) | (1L << (ASC - 130)) | (1L << (LEN - 130)) | (1L << (INSTR - 130)) | (1L << (VAL - 130)) | (1L << (TIMES - 130)) | (1L << (STRS - 130)) | (1L << (STRINGS - 130)) | (1L << (CHRS - 130)) | (1L << (LEFTS - 130)) | (1L << (MIDS - 130)) | (1L << (RIGHTS - 130)) | (1L << (RND - 130)) | (1L << (RND0 - 130)) | (1L << (RND1 - 130)) | (1L << (NOT - 130)) | (1L << (PLUS - 130)) | (1L << (MINUS - 130)))) != 0) || ((((_la - 203)) & ~0x3f) == 0 && ((1L << (_la - 203)) & ((1L << (LPAREN - 203)) | (1L << (STRINGLITERAL - 203)) | (1L << (FN_INTEGER - 203)) | (1L << (FN_FLOAT - 203)) | (1L << (FN_STRING - 203)) | (1L << (VARIABLE_FLOAT - 203)) | (1L << (VARIABLE_INTEGER - 203)) | (1L << (VARIABLE_STRING - 203)) | (1L << (VARIABLE_TYPE - 203)) | (1L << (HEXNUMBER - 203)) | (1L << (BINARYNUMBER - 203)) | (1L << (NUMBER - 203)) | (1L << (FLOAT - 203)))) != 0)) {
					{
					setState(965);
					functionParList();
					}
				}

				setState(968);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new NumVarFloatContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(969);
				varName();
				}
				break;
			case 8:
				_localctx = new NumVarIntegerContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(970);
				varNameInteger();
				}
				break;
			case 9:
				_localctx = new NumVarFloatFieldContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(971);
				typeVar();
				setState(972);
				varName();
				}
				break;
			case 10:
				_localctx = new NumVarIntegerFieldContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(974);
				typeVar();
				setState(975);
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
		enterRule(_localctx, 162, RULE_strVar);
		int _la;
		try {
			setState(1004);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,62,_ctx) ) {
			case 1:
				_localctx = new NumVarStringArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(979);
				varNameString();
				setState(980);
				match(LPAREN);
				setState(981);
				numExpr(0);
				setState(984);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(982);
					match(COMMA);
					setState(983);
					numExpr(0);
					}
				}

				setState(986);
				match(RPAREN);
				}
				break;
			case 2:
				_localctx = new NumVarStringFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(988);
				typeVar();
				setState(989);
				match(LPAREN);
				setState(990);
				numExpr(0);
				setState(991);
				match(RPAREN);
				setState(992);
				varNameString();
				}
				break;
			case 3:
				_localctx = new NumVarStringContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(994);
				varNameString();
				}
				break;
			case 4:
				_localctx = new NumVarStringFieldContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(995);
				typeVar();
				setState(996);
				varNameString();
				}
				break;
			case 5:
				_localctx = new NumVarStringFNContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(998);
				match(FN_STRING);
				setState(999);
				match(LPAREN);
				setState(1001);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (CYAN - 64)) | (1L << (WHITE - 64)) | (1L << (BLACK - 64)) | (1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (LOADTYPEFACE - 130)) | (1L << (POINT - 130)) | (1L << (SCREENWIDTH - 130)) | (1L << (SCREENHEIGHT - 130)) | (1L << (TIME - 130)) | (1L << (PI - 130)) | (1L << (SQR - 130)) | (1L << (LN - 130)) | (1L << (LOG - 130)) | (1L << (EXP - 130)) | (1L << (ATN - 130)) | (1L << (TAN - 130)) | (1L << (COS - 130)) | (1L << (SIN - 130)) | (1L << (ABS - 130)) | (1L << (ACS - 130)) | (1L << (ASN - 130)) | (1L << (DEG - 130)) | (1L << (RAD - 130)) | (1L << (SGN - 130)) | (1L << (ASC - 130)) | (1L << (LEN - 130)) | (1L << (INSTR - 130)) | (1L << (VAL - 130)) | (1L << (TIMES - 130)) | (1L << (STRS - 130)) | (1L << (STRINGS - 130)) | (1L << (CHRS - 130)) | (1L << (LEFTS - 130)) | (1L << (MIDS - 130)) | (1L << (RIGHTS - 130)) | (1L << (RND - 130)) | (1L << (RND0 - 130)) | (1L << (RND1 - 130)) | (1L << (NOT - 130)) | (1L << (PLUS - 130)) | (1L << (MINUS - 130)))) != 0) || ((((_la - 203)) & ~0x3f) == 0 && ((1L << (_la - 203)) & ((1L << (LPAREN - 203)) | (1L << (STRINGLITERAL - 203)) | (1L << (FN_INTEGER - 203)) | (1L << (FN_FLOAT - 203)) | (1L << (FN_STRING - 203)) | (1L << (VARIABLE_FLOAT - 203)) | (1L << (VARIABLE_INTEGER - 203)) | (1L << (VARIABLE_STRING - 203)) | (1L << (VARIABLE_TYPE - 203)) | (1L << (HEXNUMBER - 203)) | (1L << (BINARYNUMBER - 203)) | (1L << (NUMBER - 203)) | (1L << (FLOAT - 203)))) != 0)) {
					{
					setState(1000);
					functionParList();
					}
				}

				setState(1003);
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
		enterRule(_localctx, 164, RULE_justVar);
		try {
			setState(1009);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(1006);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(1007);
				varNameInteger();
				}
				break;
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(1008);
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
		enterRule(_localctx, 166, RULE_justNumberVar);
		try {
			setState(1013);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(1011);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(1012);
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
		enterRule(_localctx, 168, RULE_varName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1015);
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
		enterRule(_localctx, 170, RULE_varNameInteger);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1017);
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
		enterRule(_localctx, 172, RULE_varNameString);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1019);
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
		enterRule(_localctx, 174, RULE_varNameType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1021);
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
		enterRule(_localctx, 176, RULE_varDecl);
		int _la;
		try {
			setState(1062);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,67,_ctx) ) {
			case 1:
				_localctx = new VarDeclIndContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1023);
				justVar();
				}
				break;
			case 2:
				_localctx = new VarDeclArrayedContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1024);
				justVar();
				setState(1035);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==LPAREN) {
					{
					{
					setState(1025);
					match(LPAREN);
					setState(1026);
					numExpr(0);
					setState(1029);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==COMMA) {
						{
						setState(1027);
						match(COMMA);
						setState(1028);
						numExpr(0);
						}
					}

					setState(1031);
					match(RPAREN);
					}
					}
					setState(1037);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 3:
				_localctx = new VarDeclTypeVarContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1038);
				typeVar();
				setState(1039);
				varName();
				}
				break;
			case 4:
				_localctx = new VarDeclTypeVarContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1041);
				typeVar();
				setState(1042);
				varNameInteger();
				}
				break;
			case 5:
				_localctx = new VarDeclTypeVarArrayedContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1044);
				typeVar();
				setState(1045);
				match(LPAREN);
				setState(1046);
				numExpr(0);
				setState(1047);
				match(RPAREN);
				setState(1048);
				varName();
				}
				break;
			case 6:
				_localctx = new VarDeclTypeVarArrayedContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1050);
				typeVar();
				setState(1051);
				match(LPAREN);
				setState(1052);
				numExpr(0);
				setState(1053);
				match(RPAREN);
				setState(1054);
				varNameInteger();
				}
				break;
			case 7:
				_localctx = new VarDeclTypeContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1056);
				typeVar();
				}
				break;
			case 8:
				_localctx = new VarDeclTypeArrayedContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1057);
				typeVar();
				setState(1058);
				match(LPAREN);
				setState(1059);
				numExpr(0);
				setState(1060);
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
		enterRule(_localctx, 178, RULE_varDeclWithDimension);
		int _la;
		try {
			setState(1083);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
			case VARIABLE_INTEGER:
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 1);
				{
				setState(1064);
				justVar();
				setState(1065);
				match(LPAREN);
				setState(1066);
				numExpr(0);
				setState(1071);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(1067);
					match(COMMA);
					setState(1068);
					numExpr(0);
					}
					}
					setState(1073);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1074);
				match(RPAREN);
				}
				break;
			case VARIABLE_TYPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(1076);
				typeVar();
				setState(1077);
				match(LPAREN);
				setState(1078);
				numExpr(0);
				setState(1079);
				match(COMMA);
				setState(1080);
				varName();
				setState(1081);
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
		enterRule(_localctx, 180, RULE_varList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1085);
			varDecl();
			setState(1090);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1086);
				match(COMMA);
				setState(1087);
				varDecl();
				}
				}
				setState(1092);
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

	public static class FunctionVarListContext extends ParserRuleContext {
		public List<JustVarContext> justVar() {
			return getRuleContexts(JustVarContext.class);
		}
		public JustVarContext justVar(int i) {
			return getRuleContext(JustVarContext.class,i);
		}
		public List<TerminalNode> RETURN() { return getTokens(DARICParser.RETURN); }
		public TerminalNode RETURN(int i) {
			return getToken(DARICParser.RETURN, i);
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
		enterRule(_localctx, 182, RULE_functionVarList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1094);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN) {
				{
				setState(1093);
				match(RETURN);
				}
			}

			setState(1096);
			justVar();
			setState(1104);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1097);
				match(COMMA);
				setState(1099);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN) {
					{
					setState(1098);
					match(RETURN);
					}
				}

				setState(1101);
				justVar();
				}
				}
				setState(1106);
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
		enterRule(_localctx, 184, RULE_functionParList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1107);
			expr();
			setState(1112);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1108);
				match(COMMA);
				setState(1109);
				expr();
				}
				}
				setState(1114);
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
		enterRule(_localctx, 186, RULE_exprList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1115);
			expr();
			setState(1120);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1116);
				match(COMMA);
				setState(1117);
				expr();
				}
				}
				setState(1122);
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
		enterRule(_localctx, 188, RULE_printListItem);
		int _la;
		try {
			setState(1134);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,77,_ctx) ) {
			case 1:
				_localctx = new PrintListExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1124);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TILDE) {
					{
					setState(1123);
					match(TILDE);
					}
				}

				setState(1126);
				expr();
				}
				break;
			case 2:
				_localctx = new PrintListSPCPContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1127);
				match(SPC);
				setState(1128);
				match(LPAREN);
				setState(1129);
				numExpr(0);
				setState(1130);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new PrintListSPCContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1132);
				match(SPC);
				setState(1133);
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
		enterRule(_localctx, 190, RULE_printListTick);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1137); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(1136);
				match(TICK);
				}
				}
				setState(1139); 
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
		enterRule(_localctx, 192, RULE_printListSeparator);
		try {
			setState(1144);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COMMA:
				enterOuterAlt(_localctx, 1);
				{
				setState(1141);
				match(COMMA);
				}
				break;
			case SEMICOLON:
				enterOuterAlt(_localctx, 2);
				{
				setState(1142);
				match(SEMICOLON);
				}
				break;
			case TICK:
				enterOuterAlt(_localctx, 3);
				{
				setState(1143);
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
		enterRule(_localctx, 194, RULE_printList);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1147);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TICK) {
				{
				setState(1146);
				printListTick();
				}
			}

			setState(1150);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(1149);
				((PrintListContext)_localctx).s1 = match(SEMICOLON);
				}
			}

			setState(1152);
			printListItem();
			setState(1158);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,82,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1153);
					printListSeparator();
					setState(1154);
					printListItem();
					}
					} 
				}
				setState(1160);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,82,_ctx);
			}
			setState(1162);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(1161);
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
		enterRule(_localctx, 196, RULE_expr);
		try {
			setState(1166);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,84,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1164);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1165);
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
		enterRule(_localctx, 198, RULE_number);
		try {
			setState(1174);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,85,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1168);
				numberInteger();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1169);
				numberFloat();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1170);
				numberHex();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1171);
				numberBinary();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1172);
				numColours();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1173);
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
		enterRule(_localctx, 200, RULE_numberInteger);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1177);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(1176);
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

			setState(1179);
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
		enterRule(_localctx, 202, RULE_numberHex);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1181);
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
		enterRule(_localctx, 204, RULE_numberBinary);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1183);
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
		enterRule(_localctx, 206, RULE_numberFloat);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1186);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(1185);
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

			setState(1188);
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
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
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
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
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

	public final StrFuncContext strFunc() throws RecognitionException {
		StrFuncContext _localctx = new StrFuncContext(_ctx, getState());
		enterRule(_localctx, 208, RULE_strFunc);
		try {
			setState(1241);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,88,_ctx) ) {
			case 1:
				_localctx = new StrFuncTIMESContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1190);
				match(TIMES);
				}
				break;
			case 2:
				_localctx = new StrFuncCHRSContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1191);
				match(CHRS);
				setState(1192);
				match(LPAREN);
				setState(1193);
				numExpr(0);
				setState(1194);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new StrFuncLEFTSContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1196);
				match(LEFTS);
				setState(1197);
				match(LPAREN);
				setState(1198);
				strExpr(0);
				setState(1199);
				match(COMMA);
				setState(1200);
				numExpr(0);
				setState(1201);
				match(RPAREN);
				}
				break;
			case 4:
				_localctx = new StrFuncMIDS3Context(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1203);
				match(MIDS);
				setState(1204);
				match(LPAREN);
				setState(1205);
				strExpr(0);
				setState(1206);
				match(COMMA);
				setState(1207);
				numExpr(0);
				setState(1208);
				match(COMMA);
				setState(1209);
				numExpr(0);
				setState(1210);
				match(RPAREN);
				}
				break;
			case 5:
				_localctx = new StrFuncMIDS2Context(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1212);
				match(MIDS);
				setState(1213);
				match(LPAREN);
				setState(1214);
				strExpr(0);
				setState(1215);
				match(COMMA);
				setState(1216);
				numExpr(0);
				setState(1217);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new StrFuncRIGHTSContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1219);
				match(RIGHTS);
				setState(1220);
				match(LPAREN);
				setState(1221);
				strExpr(0);
				setState(1222);
				match(COMMA);
				setState(1223);
				numExpr(0);
				setState(1224);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new StrFuncSTRSContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1226);
				match(STRS);
				setState(1227);
				numExpr(0);
				}
				break;
			case 8:
				_localctx = new StrFuncSTRSHEXContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1228);
				match(STRS);
				setState(1229);
				match(TILDE);
				setState(1230);
				numExpr(0);
				}
				break;
			case 9:
				_localctx = new StrFuncSTRINGSContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(1231);
				match(STRINGS);
				setState(1232);
				match(LPAREN);
				setState(1233);
				numExpr(0);
				setState(1234);
				match(COMMA);
				setState(1235);
				strExpr(0);
				setState(1236);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new StrFuncINKEYSContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(1238);
				match(INKEYS);
				setState(1239);
				numExpr(0);
				}
				break;
			case 11:
				_localctx = new StrFuncGETSContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(1240);
				match(GETS);
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
		enterRule(_localctx, 210, RULE_string);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1243);
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
		int _startState = 212;
		enterRecursionRule(_localctx, 212, RULE_strExpr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1253);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LPAREN:
				{
				setState(1246);
				match(LPAREN);
				setState(1247);
				strExpr(0);
				setState(1248);
				match(RPAREN);
				}
				break;
			case INKEYS:
			case GETS:
			case TIMES:
			case STRS:
			case STRINGS:
			case CHRS:
			case LEFTS:
			case MIDS:
			case RIGHTS:
				{
				setState(1250);
				strFunc();
				}
				break;
			case FN_STRING:
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(1251);
				strVar();
				}
				break;
			case STRINGLITERAL:
				{
				setState(1252);
				string();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(1260);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,90,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StrExprContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_strExpr);
					setState(1255);
					if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
					setState(1256);
					match(PLUS);
					setState(1257);
					strExpr(4);
					}
					} 
				}
				setState(1262);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,90,_ctx);
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
		enterRule(_localctx, 214, RULE_numFunc);
		int _la;
		try {
			setState(1453);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,91,_ctx) ) {
			case 1:
				_localctx = new NumFuncPIContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1263);
				match(PI);
				}
				break;
			case 2:
				_localctx = new NumFuncFALSEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1264);
				match(FALSE);
				}
				break;
			case 3:
				_localctx = new NumFuncTRUEContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1265);
				match(TRUE);
				}
				break;
			case 4:
				_localctx = new NumFuncTIMEContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1266);
				match(TIME);
				}
				break;
			case 5:
				_localctx = new NumFuncRNDRANGEContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1267);
				match(RND);
				setState(1268);
				match(LPAREN);
				setState(1269);
				numExpr(0);
				setState(1270);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new NumFuncRNDContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1272);
				match(RND);
				}
				break;
			case 7:
				_localctx = new NumFuncRND0Context(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1273);
				match(RND0);
				}
				break;
			case 8:
				_localctx = new NumFuncRND1Context(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1274);
				match(RND1);
				}
				break;
			case 9:
				_localctx = new NumFuncLNContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(1275);
				match(LN);
				setState(1276);
				match(LPAREN);
				setState(1277);
				numExpr(0);
				setState(1278);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new NumFuncLOGContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(1280);
				match(LOG);
				setState(1281);
				match(LPAREN);
				setState(1282);
				numExpr(0);
				setState(1283);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new NumFuncEXPContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(1285);
				match(EXP);
				setState(1286);
				match(LPAREN);
				setState(1287);
				numExpr(0);
				setState(1288);
				match(RPAREN);
				}
				break;
			case 12:
				_localctx = new NumFuncATNContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(1290);
				match(ATN);
				setState(1291);
				match(LPAREN);
				setState(1292);
				numExpr(0);
				setState(1293);
				match(RPAREN);
				}
				break;
			case 13:
				_localctx = new NumFuncTANContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(1295);
				match(TAN);
				setState(1296);
				match(LPAREN);
				setState(1297);
				numExpr(0);
				setState(1298);
				match(RPAREN);
				}
				break;
			case 14:
				_localctx = new NumFuncCOSContext(_localctx);
				enterOuterAlt(_localctx, 14);
				{
				setState(1300);
				match(COS);
				setState(1301);
				match(LPAREN);
				setState(1302);
				numExpr(0);
				setState(1303);
				match(RPAREN);
				}
				break;
			case 15:
				_localctx = new NumFuncSINContext(_localctx);
				enterOuterAlt(_localctx, 15);
				{
				setState(1305);
				match(SIN);
				setState(1306);
				match(LPAREN);
				setState(1307);
				numExpr(0);
				setState(1308);
				match(RPAREN);
				}
				break;
			case 16:
				_localctx = new NumFuncABSContext(_localctx);
				enterOuterAlt(_localctx, 16);
				{
				setState(1310);
				match(ABS);
				setState(1311);
				match(LPAREN);
				setState(1312);
				numExpr(0);
				setState(1313);
				match(RPAREN);
				}
				break;
			case 17:
				_localctx = new NumFuncACSContext(_localctx);
				enterOuterAlt(_localctx, 17);
				{
				setState(1315);
				match(ACS);
				setState(1316);
				match(LPAREN);
				setState(1317);
				numExpr(0);
				setState(1318);
				match(RPAREN);
				}
				break;
			case 18:
				_localctx = new NumFuncASNContext(_localctx);
				enterOuterAlt(_localctx, 18);
				{
				setState(1320);
				match(ASN);
				setState(1321);
				match(LPAREN);
				setState(1322);
				numExpr(0);
				setState(1323);
				match(RPAREN);
				}
				break;
			case 19:
				_localctx = new NumFuncDEGContext(_localctx);
				enterOuterAlt(_localctx, 19);
				{
				setState(1325);
				match(DEG);
				setState(1326);
				match(LPAREN);
				setState(1327);
				numExpr(0);
				setState(1328);
				match(RPAREN);
				}
				break;
			case 20:
				_localctx = new NumFuncRADContext(_localctx);
				enterOuterAlt(_localctx, 20);
				{
				setState(1330);
				match(RAD);
				setState(1331);
				match(LPAREN);
				setState(1332);
				numExpr(0);
				setState(1333);
				match(RPAREN);
				}
				break;
			case 21:
				_localctx = new NumFuncSQRContext(_localctx);
				enterOuterAlt(_localctx, 21);
				{
				setState(1335);
				match(SQR);
				setState(1336);
				match(LPAREN);
				setState(1337);
				numExpr(0);
				setState(1338);
				match(RPAREN);
				}
				break;
			case 22:
				_localctx = new NumFuncSGNContext(_localctx);
				enterOuterAlt(_localctx, 22);
				{
				setState(1340);
				match(SGN);
				setState(1341);
				match(LPAREN);
				setState(1342);
				numExpr(0);
				setState(1343);
				match(RPAREN);
				}
				break;
			case 23:
				_localctx = new NumFuncGETContext(_localctx);
				enterOuterAlt(_localctx, 23);
				{
				setState(1345);
				match(GET);
				}
				break;
			case 24:
				_localctx = new NumFuncINKEYContext(_localctx);
				enterOuterAlt(_localctx, 24);
				{
				setState(1346);
				match(INKEY);
				setState(1347);
				match(LPAREN);
				setState(1348);
				numExpr(0);
				setState(1349);
				match(RPAREN);
				}
				break;
			case 25:
				_localctx = new NumFuncINTContext(_localctx);
				enterOuterAlt(_localctx, 25);
				{
				setState(1351);
				match(INT);
				setState(1352);
				match(LPAREN);
				setState(1353);
				numExpr(0);
				setState(1354);
				match(RPAREN);
				}
				break;
			case 26:
				_localctx = new NumFuncFLOATContext(_localctx);
				enterOuterAlt(_localctx, 26);
				{
				setState(1356);
				match(FLOAT_TOKEN);
				setState(1357);
				match(LPAREN);
				setState(1358);
				numExpr(0);
				setState(1359);
				match(RPAREN);
				}
				break;
			case 27:
				_localctx = new NumFuncSCREENWIDTHContext(_localctx);
				enterOuterAlt(_localctx, 27);
				{
				setState(1361);
				match(SCREENWIDTH);
				}
				break;
			case 28:
				_localctx = new NumFuncSCREENHEIGHTContext(_localctx);
				enterOuterAlt(_localctx, 28);
				{
				setState(1362);
				match(SCREENHEIGHT);
				}
				break;
			case 29:
				_localctx = new NumFuncPOINTContext(_localctx);
				enterOuterAlt(_localctx, 29);
				{
				setState(1363);
				match(POINT);
				setState(1364);
				match(LPAREN);
				setState(1365);
				numExpr(0);
				setState(1366);
				match(COMMA);
				setState(1367);
				numExpr(0);
				setState(1368);
				match(RPAREN);
				}
				break;
			case 30:
				_localctx = new NumFuncCOLOURContext(_localctx);
				enterOuterAlt(_localctx, 30);
				{
				setState(1370);
				match(COLOUR);
				setState(1371);
				match(LPAREN);
				setState(1372);
				numExpr(0);
				setState(1373);
				match(COMMA);
				setState(1374);
				numExpr(0);
				setState(1375);
				match(COMMA);
				setState(1376);
				numExpr(0);
				setState(1377);
				match(RPAREN);
				}
				break;
			case 31:
				_localctx = new NumFuncLOADTYPEFACEContext(_localctx);
				enterOuterAlt(_localctx, 31);
				{
				setState(1379);
				match(LOADTYPEFACE);
				setState(1380);
				strExpr(0);
				}
				break;
			case 32:
				_localctx = new NumFuncCREATEFONTContext(_localctx);
				enterOuterAlt(_localctx, 32);
				{
				setState(1381);
				match(CREATEFONT);
				setState(1382);
				numExpr(0);
				setState(1383);
				match(COMMA);
				setState(1384);
				numExpr(0);
				}
				break;
			case 33:
				_localctx = new NumFuncSHAPEContext(_localctx);
				enterOuterAlt(_localctx, 33);
				{
				setState(1386);
				match(CREATESHAPE);
				setState(1387);
				varNameType();
				setState(1388);
				match(COMMA);
				setState(1389);
				varNameType();
				}
				break;
			case 34:
				_localctx = new NumFuncOBJECTContext(_localctx);
				enterOuterAlt(_localctx, 34);
				{
				setState(1391);
				match(CREATEOBJECT);
				setState(1392);
				numExpr(0);
				setState(1393);
				match(COMMA);
				setState(1394);
				numExpr(0);
				setState(1395);
				match(COMMA);
				setState(1396);
				numExpr(0);
				setState(1397);
				match(COMMA);
				setState(1398);
				numExpr(0);
				setState(1399);
				match(COMMA);
				setState(1400);
				numExpr(0);
				setState(1401);
				match(COMMA);
				setState(1402);
				numExpr(0);
				setState(1403);
				match(COMMA);
				setState(1404);
				numExpr(0);
				setState(1405);
				match(COMMA);
				setState(1406);
				numExpr(0);
				setState(1407);
				match(COMMA);
				setState(1408);
				_la = _input.LA(1);
				if ( !(((((_la - 103)) & ~0x3f) == 0 && ((1L << (_la - 103)) & ((1L << (SOLID - 103)) | (1L << (WIREFRAME - 103)) | (1L << (SHADED - 103)) | (1L << (FILLEDWIREFRAME - 103)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case 35:
				_localctx = new NumFuncBGETHContext(_localctx);
				enterOuterAlt(_localctx, 35);
				{
				setState(1410);
				match(BGETH);
				setState(1411);
				numExpr(0);
				}
				break;
			case 36:
				_localctx = new NumFuncEOFHContext(_localctx);
				enterOuterAlt(_localctx, 36);
				{
				setState(1412);
				match(EOFH);
				setState(1413);
				numExpr(0);
				}
				break;
			case 37:
				_localctx = new NumFuncOPENINContext(_localctx);
				enterOuterAlt(_localctx, 37);
				{
				setState(1414);
				match(OPENIN);
				setState(1415);
				match(LPAREN);
				setState(1416);
				strExpr(0);
				setState(1417);
				match(RPAREN);
				}
				break;
			case 38:
				_localctx = new NumFuncOPENOUTContext(_localctx);
				enterOuterAlt(_localctx, 38);
				{
				setState(1419);
				match(OPENOUT);
				setState(1420);
				match(LPAREN);
				setState(1421);
				strExpr(0);
				setState(1422);
				match(RPAREN);
				}
				break;
			case 39:
				_localctx = new NumFuncOPENUPContext(_localctx);
				enterOuterAlt(_localctx, 39);
				{
				setState(1424);
				match(OPENUP);
				setState(1425);
				match(LPAREN);
				setState(1426);
				strExpr(0);
				setState(1427);
				match(RPAREN);
				}
				break;
			case 40:
				_localctx = new NumFuncPTRContext(_localctx);
				enterOuterAlt(_localctx, 40);
				{
				setState(1429);
				match(PTRH);
				setState(1430);
				numExpr(0);
				}
				break;
			case 41:
				_localctx = new NumFuncASCContext(_localctx);
				enterOuterAlt(_localctx, 41);
				{
				setState(1431);
				match(ASC);
				setState(1432);
				strExpr(0);
				}
				break;
			case 42:
				_localctx = new NumFuncLENContext(_localctx);
				enterOuterAlt(_localctx, 42);
				{
				setState(1433);
				match(LEN);
				setState(1434);
				strExpr(0);
				}
				break;
			case 43:
				_localctx = new NumFuncINSTR2Context(_localctx);
				enterOuterAlt(_localctx, 43);
				{
				setState(1435);
				match(INSTR);
				setState(1436);
				match(LPAREN);
				setState(1437);
				strExpr(0);
				setState(1438);
				match(COMMA);
				setState(1439);
				strExpr(0);
				setState(1440);
				match(RPAREN);
				}
				break;
			case 44:
				_localctx = new NumFuncINSTR3Context(_localctx);
				enterOuterAlt(_localctx, 44);
				{
				setState(1442);
				match(INSTR);
				setState(1443);
				match(LPAREN);
				setState(1444);
				strExpr(0);
				setState(1445);
				match(COMMA);
				setState(1446);
				strExpr(0);
				setState(1447);
				match(COMMA);
				setState(1448);
				numExpr(0);
				setState(1449);
				match(RPAREN);
				}
				break;
			case 45:
				_localctx = new NumFuncVALContext(_localctx);
				enterOuterAlt(_localctx, 45);
				{
				setState(1451);
				match(VAL);
				setState(1452);
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
		int _startState = 216;
		enterRecursionRule(_localctx, 216, RULE_numExpr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1471);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,92,_ctx) ) {
			case 1:
				{
				_localctx = new NumExprVarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(1456);
				numVar();
				}
				break;
			case 2:
				{
				_localctx = new NumExprNumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1457);
				number();
				}
				break;
			case 3:
				{
				_localctx = new NumExprNestedContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1458);
				match(LPAREN);
				setState(1459);
				numExpr(0);
				setState(1460);
				match(RPAREN);
				}
				break;
			case 4:
				{
				_localctx = new NumExprUnaryContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1462);
				match(MINUS);
				setState(1463);
				numExpr(11);
				}
				break;
			case 5:
				{
				_localctx = new NumExprNOTContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1464);
				match(NOT);
				setState(1465);
				numExpr(10);
				}
				break;
			case 6:
				{
				_localctx = new NumExprFuncContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1466);
				numFunc();
				}
				break;
			case 7:
				{
				_localctx = new NumExprStrRelopContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1467);
				strExpr(0);
				setState(1468);
				_la = _input.LA(1);
				if ( !(((((_la - 171)) & ~0x3f) == 0 && ((1L << (_la - 171)) & ((1L << (EQ - 171)) | (1L << (NE - 171)) | (1L << (GT - 171)) | (1L << (GE - 171)) | (1L << (LT - 171)) | (1L << (LE - 171)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(1469);
				strExpr(0);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1496);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,94,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1494);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,93,_ctx) ) {
					case 1:
						{
						_localctx = new NumExprHatContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1473);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(1474);
						match(HAT);
						setState(1475);
						numExpr(8);
						}
						break;
					case 2:
						{
						_localctx = new NumExprMultiplyDivideContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1476);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(1477);
						_la = _input.LA(1);
						if ( !(_la==MULTIPLY || _la==DIVIDE) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1478);
						numExpr(8);
						}
						break;
					case 3:
						{
						_localctx = new NumExprDIVMODContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1479);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(1480);
						_la = _input.LA(1);
						if ( !(_la==MOD || _la==DIV) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1481);
						numExpr(7);
						}
						break;
					case 4:
						{
						_localctx = new NumExprAddSubtractContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1482);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(1483);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1484);
						numExpr(6);
						}
						break;
					case 5:
						{
						_localctx = new NumExprSHLSHRContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1485);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(1486);
						_la = _input.LA(1);
						if ( !(_la==SHL || _la==SHR) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1487);
						numExpr(5);
						}
						break;
					case 6:
						{
						_localctx = new NumExprNumRelopContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1488);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1489);
						_la = _input.LA(1);
						if ( !(((((_la - 171)) & ~0x3f) == 0 && ((1L << (_la - 171)) & ((1L << (EQ - 171)) | (1L << (NE - 171)) | (1L << (GT - 171)) | (1L << (GE - 171)) | (1L << (LT - 171)) | (1L << (LE - 171)))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1490);
						numExpr(4);
						}
						break;
					case 7:
						{
						_localctx = new NumExprANDOREORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1491);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(1492);
						_la = _input.LA(1);
						if ( !(((((_la - 178)) & ~0x3f) == 0 && ((1L << (_la - 178)) & ((1L << (AND - 178)) | (1L << (OR - 178)) | (1L << (EOR - 178)))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1493);
						numExpr(2);
						}
						break;
					}
					} 
				}
				setState(1498);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,94,_ctx);
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
		enterRule(_localctx, 218, RULE_numColours);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1499);
			_la = _input.LA(1);
			if ( !(((((_la - 59)) & ~0x3f) == 0 && ((1L << (_la - 59)) & ((1L << (RED - 59)) | (1L << (GREEN - 59)) | (1L << (YELLOW - 59)) | (1L << (BLUE - 59)) | (1L << (MAGENTA - 59)) | (1L << (CYAN - 59)) | (1L << (WHITE - 59)) | (1L << (BLACK - 59)))) != 0)) ) {
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
		enterRule(_localctx, 220, RULE_defaultFonts);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1501);
			_la = _input.LA(1);
			if ( !(((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (MONO15 - 67)) | (1L << (MONO20 - 67)) | (1L << (MONO25 - 67)) | (1L << (MONO30 - 67)) | (1L << (MONO35 - 67)) | (1L << (MONO40 - 67)) | (1L << (MONO50 - 67)) | (1L << (MONO75 - 67)) | (1L << (MONO100 - 67)) | (1L << (PROP15 - 67)) | (1L << (PROP20 - 67)) | (1L << (PROP25 - 67)) | (1L << (PROP30 - 67)) | (1L << (PROP35 - 67)) | (1L << (PROP40 - 67)) | (1L << (PROP50 - 67)) | (1L << (PROP75 - 67)) | (1L << (PROP100 - 67)) | (1L << (SERIF15 - 67)) | (1L << (SERIF20 - 67)) | (1L << (SERIF25 - 67)) | (1L << (SERIF30 - 67)) | (1L << (SERIF35 - 67)) | (1L << (SERIF40 - 67)) | (1L << (SERIF50 - 67)) | (1L << (SERIF75 - 67)) | (1L << (SERIF100 - 67)))) != 0)) ) {
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
		case 106:
			return strExpr_sempred((StrExprContext)_localctx, predIndex);
		case 108:
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
			return precpred(_ctx, 8);
		case 2:
			return precpred(_ctx, 7);
		case 3:
			return precpred(_ctx, 6);
		case 4:
			return precpred(_ctx, 5);
		case 5:
			return precpred(_ctx, 4);
		case 6:
			return precpred(_ctx, 3);
		case 7:
			return precpred(_ctx, 1);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00e0\u05e2\4\2\t"+
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
		"k\4l\tl\4m\tm\4n\tn\4o\to\4p\tp\3\2\7\2\u00e2\n\2\f\2\16\2\u00e5\13\2"+
		"\3\2\3\2\3\3\3\3\5\3\u00eb\n\3\3\3\5\3\u00ee\n\3\3\3\3\3\5\3\u00f2\n\3"+
		"\3\3\6\3\u00f5\n\3\r\3\16\3\u00f6\3\3\5\3\u00fa\n\3\3\3\3\3\5\3\u00fe"+
		"\n\3\3\4\6\4\u0101\n\4\r\4\16\4\u0102\3\5\7\5\u0106\n\5\f\5\16\5\u0109"+
		"\13\5\3\6\7\6\u010c\n\6\f\6\16\6\u010f\13\6\3\6\7\6\u0112\n\6\f\6\16\6"+
		"\u0115\13\6\5\6\u0117\n\6\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\b\5\b\u0121\n"+
		"\b\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t"+
		"\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\5\t\u013f\n\t\3\n\3\n\3\13"+
		"\3\13\3\13\3\13\3\13\6\13\u0148\n\13\r\13\16\13\u0149\3\13\3\13\5\13\u014e"+
		"\n\13\3\13\3\13\3\f\3\f\3\f\3\r\3\r\3\r\3\r\7\r\u0159\n\r\f\r\16\r\u015c"+
		"\13\r\3\16\5\16\u015f\n\16\3\16\3\16\3\16\3\16\7\16\u0165\n\16\f\16\16"+
		"\16\u0168\13\16\3\17\3\17\3\20\3\20\5\20\u016e\n\20\3\21\3\21\3\21\3\21"+
		"\5\21\u0174\n\21\3\21\3\21\3\21\5\21\u0179\n\21\3\21\3\21\3\22\3\22\3"+
		"\22\3\22\5\22\u0181\n\22\3\22\3\22\3\22\5\22\u0186\n\22\3\22\3\22\3\23"+
		"\3\23\5\23\u018c\n\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\5\23\u0195\n"+
		"\23\3\23\3\23\5\23\u0199\n\23\3\23\3\23\3\24\3\24\5\24\u019f\n\24\3\24"+
		"\3\24\3\24\3\24\3\24\3\24\3\24\5\24\u01a8\n\24\3\24\3\24\3\25\3\25\3\25"+
		"\5\25\u01af\n\25\3\25\3\25\3\26\3\26\3\26\3\26\3\26\5\26\u01b8\n\26\3"+
		"\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\5\27\u01c2\n\27\3\27\5\27\u01c5"+
		"\n\27\3\27\3\27\3\30\3\30\3\30\3\31\3\31\3\31\3\32\3\32\3\32\3\33\5\33"+
		"\u01d3\n\33\3\33\5\33\u01d6\n\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3"+
		"\33\7\33\u01e0\n\33\f\33\16\33\u01e3\13\33\3\34\3\34\3\34\3\35\3\35\3"+
		"\35\5\35\u01eb\n\35\3\35\3\35\3\36\3\36\3\36\3\36\7\36\u01f3\n\36\f\36"+
		"\16\36\u01f6\13\36\3\37\3\37\3 \3 \3 \3 \3 \3!\3!\3\"\3\"\3#\3#\3#\3#"+
		"\3#\3#\7#\u0209\n#\f#\16#\u020c\13#\3#\3#\3$\3$\3$\3$\3$\3%\3%\3%\3%\3"+
		"%\3&\3&\3&\3&\3&\3&\3&\5&\u0221\n&\3\'\3\'\3\'\3\'\5\'\u0227\n\'\3\'\3"+
		"\'\3(\3(\5(\u022d\n(\3)\3)\3)\3)\3)\3)\3)\3*\3*\3*\3*\3*\3+\3+\3+\3+\3"+
		"+\3,\3,\3-\3-\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3"+
		".\3.\3.\3.\3.\3.\5.\u025c\n.\3/\3/\3/\3/\3/\5/\u0263\n/\3\60\3\60\3\60"+
		"\3\60\3\60\3\61\3\61\3\61\3\62\3\62\3\62\3\62\3\62\3\63\3\63\3\63\3\64"+
		"\5\64\u0276\n\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\65\3\65"+
		"\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65"+
		"\3\65\3\65\3\65\3\65\3\65\3\65\3\65\5\65\u0298\n\65\3\66\3\66\3\67\3\67"+
		"\3\67\3\67\3\67\3\67\3\67\3\67\3\67\5\67\u02a5\n\67\38\38\38\38\38\38"+
		"\38\38\38\58\u02b0\n8\39\39\39\39\39\39\39\39\39\39\39\39\39\39\59\u02c0"+
		"\n9\3:\3:\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\5;\u02d3\n;\3<"+
		"\3<\3<\3<\3<\3<\3<\3<\3<\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3="+
		"\3=\3=\3=\3=\5=\u02f1\n=\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>"+
		"\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>"+
		"\3>\3>\3>\3>\3>\3>\3>\3>\3>\5>\u0322\n>\3?\3?\3?\3?\3?\3@\3@\3@\3@\3@"+
		"\3@\3@\3@\3@\3A\3A\3B\3B\3B\3B\3B\3B\3B\3B\3B\3C\3C\3C\3C\3C\3C\3C\3C"+
		"\3C\3D\3D\3D\3D\3D\3D\3D\3D\3D\3E\3E\3F\3F\3G\3G\3G\3G\3G\3G\3G\3G\3G"+
		"\3G\3G\3G\3G\3G\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3I\3I\3I\3I"+
		"\3I\3I\3I\3I\3I\3J\3J\3J\3J\3J\3J\3J\3J\3J\3K\3K\3K\3K\3K\3L\3L\3L\3M"+
		"\3M\3M\3M\7M\u038d\nM\fM\16M\u0390\13M\3M\3M\3M\3N\3N\3O\3O\5O\u0399\n"+
		"O\3P\3P\3P\5P\u039e\nP\3Q\3Q\3R\3R\3R\3R\3R\5R\u03a7\nR\3R\3R\3R\3R\3"+
		"R\3R\3R\5R\u03b0\nR\3R\3R\3R\3R\3R\3R\3R\3R\3R\3R\3R\3R\3R\3R\3R\3R\3"+
		"R\5R\u03c3\nR\3R\3R\3R\3R\5R\u03c9\nR\3R\3R\3R\3R\3R\3R\3R\3R\3R\5R\u03d4"+
		"\nR\3S\3S\3S\3S\3S\5S\u03db\nS\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S"+
		"\3S\3S\5S\u03ec\nS\3S\5S\u03ef\nS\3T\3T\3T\5T\u03f4\nT\3U\3U\5U\u03f8"+
		"\nU\3V\3V\3W\3W\3X\3X\3Y\3Y\3Z\3Z\3Z\3Z\3Z\3Z\5Z\u0408\nZ\3Z\3Z\7Z\u040c"+
		"\nZ\fZ\16Z\u040f\13Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3"+
		"Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\5Z\u0429\nZ\3[\3[\3[\3[\3[\7[\u0430\n[\f[\16[\u0433"+
		"\13[\3[\3[\3[\3[\3[\3[\3[\3[\3[\5[\u043e\n[\3\\\3\\\3\\\7\\\u0443\n\\"+
		"\f\\\16\\\u0446\13\\\3]\5]\u0449\n]\3]\3]\3]\5]\u044e\n]\3]\7]\u0451\n"+
		"]\f]\16]\u0454\13]\3^\3^\3^\7^\u0459\n^\f^\16^\u045c\13^\3_\3_\3_\7_\u0461"+
		"\n_\f_\16_\u0464\13_\3`\5`\u0467\n`\3`\3`\3`\3`\3`\3`\3`\3`\5`\u0471\n"+
		"`\3a\6a\u0474\na\ra\16a\u0475\3b\3b\3b\5b\u047b\nb\3c\5c\u047e\nc\3c\5"+
		"c\u0481\nc\3c\3c\3c\3c\7c\u0487\nc\fc\16c\u048a\13c\3c\5c\u048d\nc\3d"+
		"\3d\5d\u0491\nd\3e\3e\3e\3e\3e\3e\5e\u0499\ne\3f\5f\u049c\nf\3f\3f\3g"+
		"\3g\3h\3h\3i\5i\u04a5\ni\3i\3i\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j"+
		"\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j"+
		"\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\5j\u04dc\nj\3k\3k\3l\3l"+
		"\3l\3l\3l\3l\3l\3l\5l\u04e8\nl\3l\3l\3l\7l\u04ed\nl\fl\16l\u04f0\13l\3"+
		"m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3"+
		"m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3"+
		"m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3"+
		"m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3"+
		"m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3"+
		"m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3"+
		"m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3"+
		"m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3m\3"+
		"m\3m\3m\3m\3m\3m\5m\u05b0\nm\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3"+
		"n\3n\3n\5n\u05c2\nn\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3"+
		"n\3n\3n\3n\3n\7n\u05d9\nn\fn\16n\u05dc\13n\3o\3o\3p\3p\3p\2\4\u00d6\u00da"+
		"q\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDF"+
		"HJLNPRTVXZ\\^`bdfhjlnprtvxz|~\u0080\u0082\u0084\u0086\u0088\u008a\u008c"+
		"\u008e\u0090\u0092\u0094\u0096\u0098\u009a\u009c\u009e\u00a0\u00a2\u00a4"+
		"\u00a6\u00a8\u00aa\u00ac\u00ae\u00b0\u00b2\u00b4\u00b6\u00b8\u00ba\u00bc"+
		"\u00be\u00c0\u00c2\u00c4\u00c6\u00c8\u00ca\u00cc\u00ce\u00d0\u00d2\u00d4"+
		"\u00d6\u00d8\u00da\u00dc\u00de\2\17\4\2\'\'\u00d2\u00d2\4\2\31\31\35\35"+
		"\3\2\u008c\u008d\3\2\u00d5\u00d7\3\2\u00ba\u00bb\3\2il\3\2\u00ad\u00b2"+
		"\3\2\u00bc\u00bd\3\2\u00b7\u00b8\3\2\u00be\u00bf\3\2\u00b4\u00b6\3\2="+
		"D\3\2E_\2\u066d\2\u00e3\3\2\2\2\4\u00fd\3\2\2\2\6\u0100\3\2\2\2\b\u0107"+
		"\3\2\2\2\n\u0116\3\2\2\2\f\u0118\3\2\2\2\16\u0120\3\2\2\2\20\u013e\3\2"+
		"\2\2\22\u0140\3\2\2\2\24\u0142\3\2\2\2\26\u0151\3\2\2\2\30\u0154\3\2\2"+
		"\2\32\u015e\3\2\2\2\34\u0169\3\2\2\2\36\u016b\3\2\2\2 \u016f\3\2\2\2\""+
		"\u017c\3\2\2\2$\u0189\3\2\2\2&\u019c\3\2\2\2(\u01ab\3\2\2\2*\u01b2\3\2"+
		"\2\2,\u01b9\3\2\2\2.\u01c8\3\2\2\2\60\u01cb\3\2\2\2\62\u01ce\3\2\2\2\64"+
		"\u01d5\3\2\2\2\66\u01e4\3\2\2\28\u01e7\3\2\2\2:\u01ee\3\2\2\2<\u01f7\3"+
		"\2\2\2>\u01f9\3\2\2\2@\u01fe\3\2\2\2B\u0200\3\2\2\2D\u0202\3\2\2\2F\u020f"+
		"\3\2\2\2H\u0214\3\2\2\2J\u0220\3\2\2\2L\u0222\3\2\2\2N\u022a\3\2\2\2P"+
		"\u022e\3\2\2\2R\u0235\3\2\2\2T\u023a\3\2\2\2V\u023f\3\2\2\2X\u0241\3\2"+
		"\2\2Z\u025b\3\2\2\2\\\u0262\3\2\2\2^\u0264\3\2\2\2`\u0269\3\2\2\2b\u026c"+
		"\3\2\2\2d\u0271\3\2\2\2f\u0275\3\2\2\2h\u0297\3\2\2\2j\u0299\3\2\2\2l"+
		"\u02a4\3\2\2\2n\u02af\3\2\2\2p\u02bf\3\2\2\2r\u02c1\3\2\2\2t\u02d2\3\2"+
		"\2\2v\u02d4\3\2\2\2x\u02f0\3\2\2\2z\u0321\3\2\2\2|\u0323\3\2\2\2~\u0328"+
		"\3\2\2\2\u0080\u0331\3\2\2\2\u0082\u0333\3\2\2\2\u0084\u033c\3\2\2\2\u0086"+
		"\u0345\3\2\2\2\u0088\u034e\3\2\2\2\u008a\u0350\3\2\2\2\u008c\u0352\3\2"+
		"\2\2\u008e\u0360\3\2\2\2\u0090\u036e\3\2\2\2\u0092\u0377\3\2\2\2\u0094"+
		"\u0380\3\2\2\2\u0096\u0385\3\2\2\2\u0098\u0388\3\2\2\2\u009a\u0394\3\2"+
		"\2\2\u009c\u0398\3\2\2\2\u009e\u039d\3\2\2\2\u00a0\u039f\3\2\2\2\u00a2"+
		"\u03d3\3\2\2\2\u00a4\u03ee\3\2\2\2\u00a6\u03f3\3\2\2\2\u00a8\u03f7\3\2"+
		"\2\2\u00aa\u03f9\3\2\2\2\u00ac\u03fb\3\2\2\2\u00ae\u03fd\3\2\2\2\u00b0"+
		"\u03ff\3\2\2\2\u00b2\u0428\3\2\2\2\u00b4\u043d\3\2\2\2\u00b6\u043f\3\2"+
		"\2\2\u00b8\u0448\3\2\2\2\u00ba\u0455\3\2\2\2\u00bc\u045d\3\2\2\2\u00be"+
		"\u0470\3\2\2\2\u00c0\u0473\3\2\2\2\u00c2\u047a\3\2\2\2\u00c4\u047d\3\2"+
		"\2\2\u00c6\u0490\3\2\2\2\u00c8\u0498\3\2\2\2\u00ca\u049b\3\2\2\2\u00cc"+
		"\u049f\3\2\2\2\u00ce\u04a1\3\2\2\2\u00d0\u04a4\3\2\2\2\u00d2\u04db\3\2"+
		"\2\2\u00d4\u04dd\3\2\2\2\u00d6\u04e7\3\2\2\2\u00d8\u05af\3\2\2\2\u00da"+
		"\u05c1\3\2\2\2\u00dc\u05dd\3\2\2\2\u00de\u05df\3\2\2\2\u00e0\u00e2\5\4"+
		"\3\2\u00e1\u00e0\3\2\2\2\u00e2\u00e5\3\2\2\2\u00e3\u00e1\3\2\2\2\u00e3"+
		"\u00e4\3\2\2\2\u00e4\u00e6\3\2\2\2\u00e5\u00e3\3\2\2\2\u00e6\u00e7\7\2"+
		"\2\3\u00e7\3\3\2\2\2\u00e8\u00fe\7\u00c6\2\2\u00e9\u00eb\5\f\7\2\u00ea"+
		"\u00e9\3\2\2\2\u00ea\u00eb\3\2\2\2\u00eb\u00ed\3\2\2\2\u00ec\u00ee\t\2"+
		"\2\2\u00ed\u00ec\3\2\2\2\u00ed\u00ee\3\2\2\2\u00ee\u00ef\3\2\2\2\u00ef"+
		"\u00fe\7\u00c6\2\2\u00f0\u00f2\5\f\7\2\u00f1\u00f0\3\2\2\2\u00f1\u00f2"+
		"\3\2\2\2\u00f2\u00f4\3\2\2\2\u00f3\u00f5\5\16\b\2\u00f4\u00f3\3\2\2\2"+
		"\u00f5\u00f6\3\2\2\2\u00f6\u00f4\3\2\2\2\u00f6\u00f7\3\2\2\2\u00f7\u00f9"+
		"\3\2\2\2\u00f8\u00fa\t\2\2\2\u00f9\u00f8\3\2\2\2\u00f9\u00fa\3\2\2\2\u00fa"+
		"\u00fb\3\2\2\2\u00fb\u00fc\7\u00c6\2\2\u00fc\u00fe\3\2\2\2\u00fd\u00e8"+
		"\3\2\2\2\u00fd\u00ea\3\2\2\2\u00fd\u00f1\3\2\2\2\u00fe\5\3\2\2\2\u00ff"+
		"\u0101\5\4\3\2\u0100\u00ff\3\2\2\2\u0101\u0102\3\2\2\2\u0102\u0100\3\2"+
		"\2\2\u0102\u0103\3\2\2\2\u0103\7\3\2\2\2\u0104\u0106\5\16\b\2\u0105\u0104"+
		"\3\2\2\2\u0106\u0109\3\2\2\2\u0107\u0105\3\2\2\2\u0107\u0108\3\2\2\2\u0108"+
		"\t\3\2\2\2\u0109\u0107\3\2\2\2\u010a\u010c\5\16\b\2\u010b\u010a\3\2\2"+
		"\2\u010c\u010f\3\2\2\2\u010d\u010b\3\2\2\2\u010d\u010e\3\2\2\2\u010e\u0117"+
		"\3\2\2\2\u010f\u010d\3\2\2\2\u0110\u0112\5\4\3\2\u0111\u0110\3\2\2\2\u0112"+
		"\u0115\3\2\2\2\u0113\u0111\3\2\2\2\u0113\u0114\3\2\2\2\u0114\u0117\3\2"+
		"\2\2\u0115\u0113\3\2\2\2\u0116\u010d\3\2\2\2\u0116\u0113\3\2\2\2\u0117"+
		"\13\3\2\2\2\u0118\u0119\7\u00de\2\2\u0119\r\3\2\2\2\u011a\u0121\7\u00ca"+
		"\2\2\u011b\u0121\5\20\t\2\u011c\u0121\5J&\2\u011d\u0121\5Z.\2\u011e\u0121"+
		"\5\\/\2\u011f\u0121\5h\65\2\u0120\u011a\3\2\2\2\u0120\u011b\3\2\2\2\u0120"+
		"\u011c\3\2\2\2\u0120\u011d\3\2\2\2\u0120\u011e\3\2\2\2\u0120\u011f\3\2"+
		"\2\2\u0121\17\3\2\2\2\u0122\u013f\5\22\n\2\u0123\u013f\5\24\13\2\u0124"+
		"\u013f\5\26\f\2\u0125\u013f\5\30\r\2\u0126\u013f\5\32\16\2\u0127\u013f"+
		"\5\34\17\2\u0128\u013f\5\36\20\2\u0129\u013f\5 \21\2\u012a\u013f\5\"\22"+
		"\2\u012b\u013f\5$\23\2\u012c\u013f\5&\24\2\u012d\u013f\5\60\31\2\u012e"+
		"\u013f\5\62\32\2\u012f\u013f\5(\25\2\u0130\u013f\5*\26\2\u0131\u013f\5"+
		",\27\2\u0132\u013f\5.\30\2\u0133\u013f\5\64\33\2\u0134\u013f\5\66\34\2"+
		"\u0135\u013f\58\35\2\u0136\u013f\5:\36\2\u0137\u013f\5<\37\2\u0138\u013f"+
		"\5> \2\u0139\u013f\5@!\2\u013a\u013f\5B\"\2\u013b\u013f\5D#\2\u013c\u013f"+
		"\5F$\2\u013d\u013f\5H%\2\u013e\u0122\3\2\2\2\u013e\u0123\3\2\2\2\u013e"+
		"\u0124\3\2\2\2\u013e\u0125\3\2\2\2\u013e\u0126\3\2\2\2\u013e\u0127\3\2"+
		"\2\2\u013e\u0128\3\2\2\2\u013e\u0129\3\2\2\2\u013e\u012a\3\2\2\2\u013e"+
		"\u012b\3\2\2\2\u013e\u012c\3\2\2\2\u013e\u012d\3\2\2\2\u013e\u012e\3\2"+
		"\2\2\u013e\u012f\3\2\2\2\u013e\u0130\3\2\2\2\u013e\u0131\3\2\2\2\u013e"+
		"\u0132\3\2\2\2\u013e\u0133\3\2\2\2\u013e\u0134\3\2\2\2\u013e\u0135\3\2"+
		"\2\2\u013e\u0136\3\2\2\2\u013e\u0137\3\2\2\2\u013e\u0138\3\2\2\2\u013e"+
		"\u0139\3\2\2\2\u013e\u013a\3\2\2\2\u013e\u013b\3\2\2\2\u013e\u013c\3\2"+
		"\2\2\u013e\u013d\3\2\2\2\u013f\21\3\2\2\2\u0140\u0141\7\3\2\2\u0141\23"+
		"\3\2\2\2\u0142\u0143\7\4\2\2\u0143\u0144\5\u00c6d\2\u0144\u0145\7\37\2"+
		"\2\u0145\u0147\7\u00c6\2\2\u0146\u0148\5\u0098M\2\u0147\u0146\3\2\2\2"+
		"\u0148\u0149\3\2\2\2\u0149\u0147\3\2\2\2\u0149\u014a\3\2\2\2\u014a\u014d"+
		"\3\2\2\2\u014b\u014c\7#\2\2\u014c\u014e\5\n\6\2\u014d\u014b\3\2\2\2\u014d"+
		"\u014e\3\2\2\2\u014e\u014f\3\2\2\2\u014f\u0150\7\13\2\2\u0150\25\3\2\2"+
		"\2\u0151\u0152\7\5\2\2\u0152\u0153\5\u00d6l\2\u0153\27\3\2\2\2\u0154\u0155"+
		"\7\6\2\2\u0155\u015a\5\u009cO\2\u0156\u0157\7\u00cb\2\2\u0157\u0159\5"+
		"\u009cO\2\u0158\u0156\3\2\2\2\u0159\u015c\3\2\2\2\u015a\u0158\3\2\2\2"+
		"\u015a\u015b\3\2\2\2\u015b\31\3\2\2\2\u015c\u015a\3\2\2\2\u015d\u015f"+
		"\7\34\2\2\u015e\u015d\3\2\2\2\u015e\u015f\3\2\2\2\u015f\u0160\3\2\2\2"+
		"\u0160\u0161\7\b\2\2\u0161\u0166\5\u00b4[\2\u0162\u0163\7\u00cb\2\2\u0163"+
		"\u0165\5\u00b4[\2\u0164\u0162\3\2\2\2\u0165\u0168\3\2\2\2\u0166\u0164"+
		"\3\2\2\2\u0166\u0167\3\2\2\2\u0167\33\3\2\2\2\u0168\u0166\3\2\2\2\u0169"+
		"\u016a\7\n\2\2\u016a\35\3\2\2\2\u016b\u016d\7*\2\2\u016c\u016e\5\u00c6"+
		"d\2\u016d\u016c\3\2\2\2\u016d\u016e\3\2\2\2\u016e\37\3\2\2\2\u016f\u0170"+
		"\7\7\2\2\u0170\u0171\5\u009aN\2\u0171\u0173\7\u00cd\2\2\u0172\u0174\5"+
		"\u00b8]\2\u0173\u0172\3\2\2\2\u0173\u0174\3\2\2\2\u0174\u0175\3\2\2\2"+
		"\u0175\u0176\7\u00cf\2\2\u0176\u0178\5\n\6\2\u0177\u0179\5\f\7\2\u0178"+
		"\u0177\3\2\2\2\u0178\u0179\3\2\2\2\u0179\u017a\3\2\2\2\u017a\u017b\7\r"+
		"\2\2\u017b!\3\2\2\2\u017c\u017d\7\7\2\2\u017d\u017e\7\u00d4\2\2\u017e"+
		"\u0180\7\u00cd\2\2\u017f\u0181\5\u00b8]\2\u0180\u017f\3\2\2\2\u0180\u0181"+
		"\3\2\2\2\u0181\u0182\3\2\2\2\u0182\u0183\7\u00cf\2\2\u0183\u0185\5\n\6"+
		"\2\u0184\u0186\5\f\7\2\u0185\u0184\3\2\2\2\u0185\u0186\3\2\2\2\u0186\u0187"+
		"\3\2\2\2\u0187\u0188\7\16\2\2\u0188#\3\2\2\2\u0189\u018b\7\21\2\2\u018a"+
		"\u018c\7\34\2\2\u018b\u018a\3\2\2\2\u018b\u018c\3\2\2\2\u018c\u018d\3"+
		"\2\2\2\u018d\u018e\5\u00a8U\2\u018e\u018f\7\u00ad\2\2\u018f\u0190\5\u00da"+
		"n\2\u0190\u0191\7/\2\2\u0191\u0194\5\u00dan\2\u0192\u0193\7,\2\2\u0193"+
		"\u0195\5\u00dan\2\u0194\u0192\3\2\2\2\u0194\u0195\3\2\2\2\u0195\u0196"+
		"\3\2\2\2\u0196\u0198\5\n\6\2\u0197\u0199\5\f\7\2\u0198\u0197\3\2\2\2\u0198"+
		"\u0199\3\2\2\2\u0199\u019a\3\2\2\2\u019a\u019b\7\36\2\2\u019b%\3\2\2\2"+
		"\u019c\u019e\7\21\2\2\u019d\u019f\7\34\2\2\u019e\u019d\3\2\2\2\u019e\u019f"+
		"\3\2\2\2\u019f\u01a0\3\2\2\2\u01a0\u01a1\5\u00a6T\2\u01a1\u01a2\7\25\2"+
		"\2\u01a2\u01a3\5\u00a6T\2\u01a3\u01a4\7\u00cd\2\2\u01a4\u01a5\7\u00cf"+
		"\2\2\u01a5\u01a7\5\n\6\2\u01a6\u01a8\5\f\7\2\u01a7\u01a6\3\2\2\2\u01a7"+
		"\u01a8\3\2\2\2\u01a8\u01a9\3\2\2\2\u01a9\u01aa\7\36\2\2\u01aa\'\3\2\2"+
		"\2\u01ab\u01ac\5\u009aN\2\u01ac\u01ae\7\u00cd\2\2\u01ad\u01af\5\u00ba"+
		"^\2\u01ae\u01ad\3\2\2\2\u01ae\u01af\3\2\2\2\u01af\u01b0\3\2\2\2\u01b0"+
		"\u01b1\7\u00cf\2\2\u01b1)\3\2\2\2\u01b2\u01b3\7\24\2\2\u01b3\u01b4\5\u00c6"+
		"d\2\u01b4\u01b7\5\b\5\2\u01b5\u01b6\7\t\2\2\u01b6\u01b8\5\b\5\2\u01b7"+
		"\u01b5\3\2\2\2\u01b7\u01b8\3\2\2\2\u01b8+\3\2\2\2\u01b9\u01ba\7\24\2\2"+
		"\u01ba\u01bb\5\u00c6d\2\u01bb\u01bc\7.\2\2\u01bc\u01bd\7\u00c6\2\2\u01bd"+
		"\u01c1\5\6\4\2\u01be\u01bf\7\t\2\2\u01bf\u01c0\7\u00c6\2\2\u01c0\u01c2"+
		"\5\6\4\2\u01c1\u01be\3\2\2\2\u01c1\u01c2\3\2\2\2\u01c2\u01c4\3\2\2\2\u01c3"+
		"\u01c5\5\f\7\2\u01c4\u01c3\3\2\2\2\u01c4\u01c5\3\2\2\2\u01c5\u01c6\3\2"+
		"\2\2\u01c6\u01c7\7\f\2\2\u01c7-\3\2\2\2\u01c8\u01c9\7\26\2\2\u01c9\u01ca"+
		"\5\u00d6l\2\u01ca/\3\2\2\2\u01cb\u01cc\7\32\2\2\u01cc\u01cd\7\u00de\2"+
		"\2\u01cd\61\3\2\2\2\u01ce\u01cf\7\33\2\2\u01cf\u01d0\7\u00de\2\2\u01d0"+
		"\63\3\2\2\2\u01d1\u01d3\t\3\2\2\u01d2\u01d1\3\2\2\2\u01d2\u01d3\3\2\2"+
		"\2\u01d3\u01d6\3\2\2\2\u01d4\u01d6\7\34\2\2\u01d5\u01d2\3\2\2\2\u01d5"+
		"\u01d4\3\2\2\2\u01d6\u01d7\3\2\2\2\u01d7\u01d8\5\u00b2Z\2\u01d8\u01d9"+
		"\7\u00ad\2\2\u01d9\u01e1\5\u00c6d\2\u01da\u01db\7\u00cb\2\2\u01db\u01dc"+
		"\5\u00b2Z\2\u01dc\u01dd\7\u00ad\2\2\u01dd\u01de\5\u00c6d\2\u01de\u01e0"+
		"\3\2\2\2\u01df\u01da\3\2\2\2\u01e0\u01e3\3\2\2\2\u01e1\u01df\3\2\2\2\u01e1"+
		"\u01e2\3\2\2\2\u01e2\65\3\2\2\2\u01e3\u01e1\3\2\2\2\u01e4\u01e5\7\"\2"+
		"\2\u01e5\u01e6\5\u00d6l\2\u01e6\67\3\2\2\2\u01e7\u01e8\7\u00d4\2\2\u01e8"+
		"\u01ea\7\u00cd\2\2\u01e9\u01eb\5\u00ba^\2\u01ea\u01e9\3\2\2\2\u01ea\u01eb"+
		"\3\2\2\2\u01eb\u01ec\3\2\2\2\u01ec\u01ed\7\u00cf\2\2\u01ed9\3\2\2\2\u01ee"+
		"\u01ef\7&\2\2\u01ef\u01f4\5\u00b2Z\2\u01f0\u01f1\7\u00cb\2\2\u01f1\u01f3"+
		"\5\u00b2Z\2\u01f2\u01f0\3\2\2\2\u01f3\u01f6\3\2\2\2\u01f4\u01f2\3\2\2"+
		"\2\u01f4\u01f5\3\2\2\2\u01f5;\3\2\2\2\u01f6\u01f4\3\2\2\2\u01f7\u01f8"+
		"\7)\2\2\u01f8=\3\2\2\2\u01f9\u01fa\7-\2\2\u01fa\u01fb\5\u00a6T\2\u01fb"+
		"\u01fc\7\u00cb\2\2\u01fc\u01fd\5\u00a6T\2\u01fd?\3\2\2\2\u01fe\u01ff\7"+
		"\61\2\2\u01ffA\3\2\2\2\u0200\u0201\7\62\2\2\u0201C\3\2\2\2\u0202\u0203"+
		"\7\64\2\2\u0203\u0204\5\u00aaV\2\u0204\u0205\7\u00cd\2\2\u0205\u020a\5"+
		"\u00a6T\2\u0206\u0207\7\u00cb\2\2\u0207\u0209\5\u00a6T\2\u0208\u0206\3"+
		"\2\2\2\u0209\u020c\3\2\2\2\u020a\u0208\3\2\2\2\u020a\u020b\3\2\2\2\u020b"+
		"\u020d\3\2\2\2\u020c\u020a\3\2\2\2\u020d\u020e\7\u00cf\2\2\u020eE\3\2"+
		"\2\2\u020f\u0210\7(\2\2\u0210\u0211\5\n\6\2\u0211\u0212\7\65\2\2\u0212"+
		"\u0213\5\u00c6d\2\u0213G\3\2\2\2\u0214\u0215\7\67\2\2\u0215\u0216\5\u00c6"+
		"d\2\u0216\u0217\5\n\6\2\u0217\u0218\7\17\2\2\u0218I\3\2\2\2\u0219\u0221"+
		"\5L\'\2\u021a\u0221\5N(\2\u021b\u0221\5P)\2\u021c\u0221\5R*\2\u021d\u0221"+
		"\5T+\2\u021e\u0221\5V,\2\u021f\u0221\5X-\2\u0220\u0219\3\2\2\2\u0220\u021a"+
		"\3\2\2\2\u0220\u021b\3\2\2\2\u0220\u021c\3\2\2\2\u0220\u021d\3\2\2\2\u0220"+
		"\u021e\3\2\2\2\u0220\u021f\3\2\2\2\u0221K\3\2\2\2\u0222\u0226\7\30\2\2"+
		"\u0223\u0224\5\u00d6l\2\u0224\u0225\7\u00cb\2\2\u0225\u0227\3\2\2\2\u0226"+
		"\u0223\3\2\2\2\u0226\u0227\3\2\2\2\u0227\u0228\3\2\2\2\u0228\u0229\5\u00b6"+
		"\\\2\u0229M\3\2\2\2\u022a\u022c\7$\2\2\u022b\u022d\5\u00c4c\2\u022c\u022b"+
		"\3\2\2\2\u022c\u022d\3\2\2\2\u022dO\3\2\2\2\u022e\u022f\78\2\2\u022f\u0230"+
		"\5\u00acW\2\u0230\u0231\7\u00cb\2\2\u0231\u0232\5\u00acW\2\u0232\u0233"+
		"\7\u00cb\2\2\u0233\u0234\5\u00acW\2\u0234Q\3\2\2\2\u0235\u0236\79\2\2"+
		"\u0236\u0237\7\u00cd\2\2\u0237\u0238\5\u00dan\2\u0238\u0239\7\u00cf\2"+
		"\2\u0239S\3\2\2\2\u023a\u023b\7:\2\2\u023b\u023c\7\u00cd\2\2\u023c\u023d"+
		"\5\u00dan\2\u023d\u023e\7\u00cf\2\2\u023eU\3\2\2\2\u023f\u0240\7;\2\2"+
		"\u0240W\3\2\2\2\u0241\u0242\7<\2\2\u0242Y\3\2\2\2\u0243\u0244\5\u00b2"+
		"Z\2\u0244\u0245\7\u00c2\2\2\u0245\u0246\5\u00dan\2\u0246\u025c\3\2\2\2"+
		"\u0247\u0248\5\u00b2Z\2\u0248\u0249\7\u00c3\2\2\u0249\u024a\5\u00dan\2"+
		"\u024a\u025c\3\2\2\2\u024b\u024c\5\u00b2Z\2\u024c\u024d\7\u00c0\2\2\u024d"+
		"\u024e\5\u00dan\2\u024e\u025c\3\2\2\2\u024f\u0250\5\u00b2Z\2\u0250\u0251"+
		"\7\u00c1\2\2\u0251\u0252\5\u00dan\2\u0252\u025c\3\2\2\2\u0253\u0254\5"+
		"\u00b2Z\2\u0254\u0255\7\u00c4\2\2\u0255\u0256\5\u00dan\2\u0256\u025c\3"+
		"\2\2\2\u0257\u0258\5\u00b2Z\2\u0258\u0259\7\u00c5\2\2\u0259\u025a\5\u00da"+
		"n\2\u025a\u025c\3\2\2\2\u025b\u0243\3\2\2\2\u025b\u0247\3\2\2\2\u025b"+
		"\u024b\3\2\2\2\u025b\u024f\3\2\2\2\u025b\u0253\3\2\2\2\u025b\u0257\3\2"+
		"\2\2\u025c[\3\2\2\2\u025d\u0263\5^\60\2\u025e\u0263\5`\61\2\u025f\u0263"+
		"\5b\62\2\u0260\u0263\5d\63\2\u0261\u0263\5f\64\2\u0262\u025d\3\2\2\2\u0262"+
		"\u025e\3\2\2\2\u0262\u025f\3\2\2\2\u0262\u0260\3\2\2\2\u0262\u0261\3\2"+
		"\2\2\u0263]\3\2\2\2\u0264\u0265\7n\2\2\u0265\u0266\5\u00dan\2\u0266\u0267"+
		"\7\u00cb\2\2\u0267\u0268\5\u00dan\2\u0268_\3\2\2\2\u0269\u026a\7m\2\2"+
		"\u026a\u026b\5\u00dan\2\u026ba\3\2\2\2\u026c\u026d\7v\2\2\u026d\u026e"+
		"\5\u00dan\2\u026e\u026f\7\u00ad\2\2\u026f\u0270\5\u00dan\2\u0270c\3\2"+
		"\2\2\u0271\u0272\7o\2\2\u0272\u0273\5\u00dan\2\u0273e\3\2\2\2\u0274\u0276"+
		"\7\34\2\2\u0275\u0274\3\2\2\2\u0275\u0276\3\2\2\2\u0276\u0277\3\2\2\2"+
		"\u0277\u0278\5\u00aeX\2\u0278\u0279\7\u00cd\2\2\u0279\u027a\7\u00cf\2"+
		"\2\u027a\u027b\7\u00ad\2\2\u027b\u027c\7r\2\2\u027c\u027d\7\u00cd\2\2"+
		"\u027d\u027e\5\u00d6l\2\u027e\u027f\7\u00cf\2\2\u027fg\3\2\2\2\u0280\u0298"+
		"\5j\66\2\u0281\u0298\5l\67\2\u0282\u0298\5n8\2\u0283\u0298\5p9\2\u0284"+
		"\u0298\5r:\2\u0285\u0298\5t;\2\u0286\u0298\5v<\2\u0287\u0298\5x=\2\u0288"+
		"\u0298\5z>\2\u0289\u0298\5|?\2\u028a\u0298\5~@\2\u028b\u0298\5\u0080A"+
		"\2\u028c\u0298\5\u0082B\2\u028d\u0298\5\u0084C\2\u028e\u0298\5\u0086D"+
		"\2\u028f\u0298\5\u0088E\2\u0290\u0298\5\u008aF\2\u0291\u0298\5\u008cG"+
		"\2\u0292\u0298\5\u008eH\2\u0293\u0298\5\u0090I\2\u0294\u0298\5\u0092J"+
		"\2\u0295\u0298\5\u0094K\2\u0296\u0298\5\u0096L\2\u0297\u0280\3\2\2\2\u0297"+
		"\u0281\3\2\2\2\u0297\u0282\3\2\2\2\u0297\u0283\3\2\2\2\u0297\u0284\3\2"+
		"\2\2\u0297\u0285\3\2\2\2\u0297\u0286\3\2\2\2\u0297\u0287\3\2\2\2\u0297"+
		"\u0288\3\2\2\2\u0297\u0289\3\2\2\2\u0297\u028a\3\2\2\2\u0297\u028b\3\2"+
		"\2\2\u0297\u028c\3\2\2\2\u0297\u028d\3\2\2\2\u0297\u028e\3\2\2\2\u0297"+
		"\u028f\3\2\2\2\u0297\u0290\3\2\2\2\u0297\u0291\3\2\2\2\u0297\u0292\3\2"+
		"\2\2\u0297\u0293\3\2\2\2\u0297\u0294\3\2\2\2\u0297\u0295\3\2\2\2\u0297"+
		"\u0296\3\2\2\2\u0298i\3\2\2\2\u0299\u029a\7y\2\2\u029ak\3\2\2\2\u029b"+
		"\u029c\7|\2\2\u029c\u02a5\5\u00dan\2\u029d\u029e\7|\2\2\u029e\u029f\5"+
		"\u00dan\2\u029f\u02a0\7\u00cb\2\2\u02a0\u02a1\5\u00dan\2\u02a1\u02a2\7"+
		"\u00cb\2\2\u02a2\u02a3\5\u00dan\2\u02a3\u02a5\3\2\2\2\u02a4\u029b\3\2"+
		"\2\2\u02a4\u029d\3\2\2\2\u02a5m\3\2\2\2\u02a6\u02a7\7}\2\2\u02a7\u02b0"+
		"\5\u00dan\2\u02a8\u02a9\7}\2\2\u02a9\u02aa\5\u00dan\2\u02aa\u02ab\7\u00cb"+
		"\2\2\u02ab\u02ac\5\u00dan\2\u02ac\u02ad\7\u00cb\2\2\u02ad\u02ae\5\u00da"+
		"n\2\u02ae\u02b0\3\2\2\2\u02af\u02a6\3\2\2\2\u02af\u02a8\3\2\2\2\u02b0"+
		"o\3\2\2\2\u02b1\u02c0\7\u0082\2\2\u02b2\u02b3\7\u0082\2\2\u02b3\u02b4"+
		"\5\u00dan\2\u02b4\u02b5\7\u00cb\2\2\u02b5\u02b6\5\u00dan\2\u02b6\u02c0"+
		"\3\2\2\2\u02b7\u02b8\7\u0082\2\2\u02b8\u02c0\7w\2\2\u02b9\u02ba\7\u0082"+
		"\2\2\u02ba\u02bb\7w\2\2\u02bb\u02bc\5\u00dan\2\u02bc\u02bd\7\u00cb\2\2"+
		"\u02bd\u02be\5\u00dan\2\u02be\u02c0\3\2\2\2\u02bf\u02b1\3\2\2\2\u02bf"+
		"\u02b2\3\2\2\2\u02bf\u02b7\3\2\2\2\u02bf\u02b9\3\2\2\2\u02c0q\3\2\2\2"+
		"\u02c1\u02c2\7\u0080\2\2\u02c2s\3\2\2\2\u02c3\u02c4\7x\2\2\u02c4\u02c5"+
		"\5\u00dan\2\u02c5\u02c6\7\u00cb\2\2\u02c6\u02c7\5\u00dan\2\u02c7\u02c8"+
		"\7\u00cb\2\2\u02c8\u02c9\5\u00dan\2\u02c9\u02d3\3\2\2\2\u02ca\u02cb\7"+
		"x\2\2\u02cb\u02cc\7\177\2\2\u02cc\u02cd\5\u00dan\2\u02cd\u02ce\7\u00cb"+
		"\2\2\u02ce\u02cf\5\u00dan\2\u02cf\u02d0\7\u00cb\2\2\u02d0\u02d1\5\u00da"+
		"n\2\u02d1\u02d3\3\2\2\2\u02d2\u02c3\3\2\2\2\u02d2\u02ca\3\2\2\2\u02d3"+
		"u\3\2\2\2\u02d4\u02d5\7\u0083\2\2\u02d5\u02d6\5\u00dan\2\u02d6\u02d7\7"+
		"\u00cb\2\2\u02d7\u02d8\5\u00dan\2\u02d8\u02d9\7\u00cb\2\2\u02d9\u02da"+
		"\5\u00dan\2\u02da\u02db\7\u00cb\2\2\u02db\u02dc\5\u00dan\2\u02dcw\3\2"+
		"\2\2\u02dd\u02de\7\u0085\2\2\u02de\u02df\5\u00dan\2\u02df\u02e0\7\u00cb"+
		"\2\2\u02e0\u02e1\5\u00dan\2\u02e1\u02e2\7\u00cb\2\2\u02e2\u02e3\5\u00da"+
		"n\2\u02e3\u02e4\7\u00cb\2\2\u02e4\u02e5\5\u00dan\2\u02e5\u02f1\3\2\2\2"+
		"\u02e6\u02e7\7\u0085\2\2\u02e7\u02e8\7\177\2\2\u02e8\u02e9\5\u00dan\2"+
		"\u02e9\u02ea\7\u00cb\2\2\u02ea\u02eb\5\u00dan\2\u02eb\u02ec\7\u00cb\2"+
		"\2\u02ec\u02ed\5\u00dan\2\u02ed\u02ee\7\u00cb\2\2\u02ee\u02ef\5\u00da"+
		"n\2\u02ef\u02f1\3\2\2\2\u02f0\u02dd\3\2\2\2\u02f0\u02e6\3\2\2\2\u02f1"+
		"y\3\2\2\2\u02f2\u02f3\7\u008e\2\2\u02f3\u02f4\5\u00dan\2\u02f4\u02f5\7"+
		"\u00cb\2\2\u02f5\u02f6\5\u00dan\2\u02f6\u02f7\7\u00cb\2\2\u02f7\u02f8"+
		"\5\u00dan\2\u02f8\u02f9\7\u00cb\2\2\u02f9\u02fa\5\u00dan\2\u02fa\u02fb"+
		"\7\u00cb\2\2\u02fb\u02fc\5\u00dan\2\u02fc\u02fd\7\u00cb\2\2\u02fd\u02fe"+
		"\5\u00dan\2\u02fe\u0322\3\2\2\2\u02ff\u0300\7\u008e\2\2\u0300\u0301\7"+
		"\177\2\2\u0301\u0302\5\u00dan\2\u0302\u0303\7\u00cb\2\2\u0303\u0304\5"+
		"\u00dan\2\u0304\u0305\7\u00cb\2\2\u0305\u0306\5\u00dan\2\u0306\u0307\7"+
		"\u00cb\2\2\u0307\u0308\5\u00dan\2\u0308\u0309\7\u00cb\2\2\u0309\u030a"+
		"\5\u00dan\2\u030a\u030b\7\u00cb\2\2\u030b\u030c\5\u00dan\2\u030c\u0322"+
		"\3\2\2\2\u030d\u030e\7\u008e\2\2\u030e\u030f\7k\2\2\u030f\u0310\5\u00da"+
		"n\2\u0310\u0311\7\u00cb\2\2\u0311\u0312\5\u00dan\2\u0312\u0313\7\u00cb"+
		"\2\2\u0313\u0314\5\u00dan\2\u0314\u0315\7\u00cb\2\2\u0315\u0316\5\u00da"+
		"n\2\u0316\u0317\7\u00cb\2\2\u0317\u0318\5\u00dan\2\u0318\u0319\7\u00cb"+
		"\2\2\u0319\u031a\5\u00dan\2\u031a\u031b\7\u00cb\2\2\u031b\u031c\5\u00da"+
		"n\2\u031c\u031d\7\u00cb\2\2\u031d\u031e\5\u00dan\2\u031e\u031f\7\u00cb"+
		"\2\2\u031f\u0320\5\u00dan\2\u0320\u0322\3\2\2\2\u0321\u02f2\3\2\2\2\u0321"+
		"\u02ff\3\2\2\2\u0321\u030d\3\2\2\2\u0322{\3\2\2\2\u0323\u0324\7\u0086"+
		"\2\2\u0324\u0325\5\u00dan\2\u0325\u0326\7\u00cb\2\2\u0326\u0327\5\u00da"+
		"n\2\u0327}\3\2\2\2\u0328\u0329\7z\2\2\u0329\u032a\5\u00dan\2\u032a\u032b"+
		"\7\u00cb\2\2\u032b\u032c\5\u00dan\2\u032c\u032d\7\u00cb\2\2\u032d\u032e"+
		"\5\u00dan\2\u032e\u032f\7\u00cb\2\2\u032f\u0330\5\u00dan\2\u0330\177\3"+
		"\2\2\2\u0331\u0332\7{\2\2\u0332\u0081\3\2\2\2\u0333\u0334\7\u008a\2\2"+
		"\u0334\u0335\5\u00dan\2\u0335\u0336\7\u00cb\2\2\u0336\u0337\5\u00dan\2"+
		"\u0337\u0338\7\u00cb\2\2\u0338\u0339\5\u00dan\2\u0339\u033a\7\u00cb\2"+
		"\2\u033a\u033b\5\u00d6l\2\u033b\u0083\3\2\2\2\u033c\u033d\7\u008b\2\2"+
		"\u033d\u033e\5\u00dan\2\u033e\u033f\7\u00cb\2\2\u033f\u0340\5\u00dan\2"+
		"\u0340\u0341\7\u00cb\2\2\u0341\u0342\5\u00dan\2\u0342\u0343\7\u00cb\2"+
		"\2\u0343\u0344\5\u00d6l\2\u0344\u0085\3\2\2\2\u0345\u0346\t\4\2\2\u0346"+
		"\u0347\5\u00dan\2\u0347\u0348\7\u00cb\2\2\u0348\u0349\5\u00dan\2\u0349"+
		"\u034a\7\u00cb\2\2\u034a\u034b\5\u00dan\2\u034b\u034c\7\u00cb\2\2\u034c"+
		"\u034d\5\u00d6l\2\u034d\u0087\3\2\2\2\u034e\u034f\7\u0081\2\2\u034f\u0089"+
		"\3\2\2\2\u0350\u0351\7`\2\2\u0351\u008b\3\2\2\2\u0352\u0353\7a\2\2\u0353"+
		"\u0354\5\u00b0Y\2\u0354\u0355\7\u00cd\2\2\u0355\u0356\5\u00dan\2\u0356"+
		"\u0357\7\u00cf\2\2\u0357\u0358\7\u00cb\2\2\u0358\u0359\5\u00dan\2\u0359"+
		"\u035a\7\u00cb\2\2\u035a\u035b\5\u00dan\2\u035b\u035c\7\u00cb\2\2\u035c"+
		"\u035d\5\u00dan\2\u035d\u035e\7\u00cb\2\2\u035e\u035f\5\u00dan\2\u035f"+
		"\u008d\3\2\2\2\u0360\u0361\7b\2\2\u0361\u0362\5\u00b0Y\2\u0362\u0363\7"+
		"\u00cd\2\2\u0363\u0364\5\u00dan\2\u0364\u0365\7\u00cf\2\2\u0365\u0366"+
		"\7\u00cb\2\2\u0366\u0367\5\u00dan\2\u0367\u0368\7\u00cb\2\2\u0368\u0369"+
		"\5\u00dan\2\u0369\u036a\7\u00cb\2\2\u036a\u036b\5\u00dan\2\u036b\u036c"+
		"\7\u00cb\2\2\u036c\u036d\5\u00dan\2\u036d\u008f\3\2\2\2\u036e\u036f\7"+
		"c\2\2\u036f\u0370\5\u00dan\2\u0370\u0371\7\u00cb\2\2\u0371\u0372\5\u00da"+
		"n\2\u0372\u0373\7\u00cb\2\2\u0373\u0374\5\u00dan\2\u0374\u0375\7\u00cb"+
		"\2\2\u0375\u0376\5\u00dan\2\u0376\u0091\3\2\2\2\u0377\u0378\7d\2\2\u0378"+
		"\u0379\5\u00dan\2\u0379\u037a\7\u00cb\2\2\u037a\u037b\5\u00dan\2\u037b"+
		"\u037c\7\u00cb\2\2\u037c\u037d\5\u00dan\2\u037d\u037e\7\u00cb\2\2\u037e"+
		"\u037f\5\u00dan\2\u037f\u0093\3\2\2\2\u0380\u0381\7e\2\2\u0381\u0382\5"+
		"\u00dan\2\u0382\u0383\7\u00cb\2\2\u0383\u0384\5\u00dan\2\u0384\u0095\3"+
		"\2\2\2\u0385\u0386\7f\2\2\u0386\u0387\5\u00dan\2\u0387\u0097\3\2\2\2\u0388"+
		"\u0389\7\66\2\2\u0389\u038e\5\u00c6d\2\u038a\u038b\7\u00cb\2\2\u038b\u038d"+
		"\5\u00c6d\2\u038c\u038a\3\2\2\2\u038d\u0390\3\2\2\2\u038e\u038c\3\2\2"+
		"\2\u038e\u038f\3\2\2\2\u038f\u0391\3\2\2\2\u0390\u038e\3\2\2\2\u0391\u0392"+
		"\7\u00ca\2\2\u0392\u0393\5\n\6\2\u0393\u0099\3\2\2\2\u0394\u0395\t\5\2"+
		"\2\u0395\u009b\3\2\2\2\u0396\u0399\5\u00c8e\2\u0397\u0399\5\u00d4k\2\u0398"+
		"\u0396\3\2\2\2\u0398\u0397\3\2\2\2\u0399\u009d\3\2\2\2\u039a\u039e\5\u00a2"+
		"R\2\u039b\u039e\5\u00a4S\2\u039c\u039e\5\u00a0Q\2\u039d\u039a\3\2\2\2"+
		"\u039d\u039b\3\2\2\2\u039d\u039c\3\2\2\2\u039e\u009f\3\2\2\2\u039f\u03a0"+
		"\5\u00b0Y\2\u03a0\u00a1\3\2\2\2\u03a1\u03a2\5\u00aaV\2\u03a2\u03a3\7\u00cd"+
		"\2\2\u03a3\u03a6\5\u00dan\2\u03a4\u03a5\7\u00cb\2\2\u03a5\u03a7\5\u00da"+
		"n\2\u03a6\u03a4\3\2\2\2\u03a6\u03a7\3\2\2\2\u03a7\u03a8\3\2\2\2\u03a8"+
		"\u03a9\7\u00cf\2\2\u03a9\u03d4\3\2\2\2\u03aa\u03ab\5\u00acW\2\u03ab\u03ac"+
		"\7\u00cd\2\2\u03ac\u03af\5\u00dan\2\u03ad\u03ae\7\u00cb\2\2\u03ae\u03b0"+
		"\5\u00dan\2\u03af\u03ad\3\2\2\2\u03af\u03b0\3\2\2\2\u03b0\u03b1\3\2\2"+
		"\2\u03b1\u03b2\7\u00cf\2\2\u03b2\u03d4\3\2\2\2\u03b3\u03b4\5\u00a0Q\2"+
		"\u03b4\u03b5\7\u00cd\2\2\u03b5\u03b6\5\u00dan\2\u03b6\u03b7\7\u00cf\2"+
		"\2\u03b7\u03b8\5\u00acW\2\u03b8\u03d4\3\2\2\2\u03b9\u03ba\5\u00a0Q\2\u03ba"+
		"\u03bb\7\u00cd\2\2\u03bb\u03bc\5\u00dan\2\u03bc\u03bd\7\u00cf\2\2\u03bd"+
		"\u03be\5\u00aaV\2\u03be\u03d4\3\2\2\2\u03bf\u03c0\7\u00d6\2\2\u03c0\u03c2"+
		"\7\u00cd\2\2\u03c1\u03c3\5\u00ba^\2\u03c2\u03c1\3\2\2\2\u03c2\u03c3\3"+
		"\2\2\2\u03c3\u03c4\3\2\2\2\u03c4\u03d4\7\u00cf\2\2\u03c5\u03c6\7\u00d5"+
		"\2\2\u03c6\u03c8\7\u00cd\2\2\u03c7\u03c9\5\u00ba^\2\u03c8\u03c7\3\2\2"+
		"\2\u03c8\u03c9\3\2\2\2\u03c9\u03ca\3\2\2\2\u03ca\u03d4\7\u00cf\2\2\u03cb"+
		"\u03d4\5\u00aaV\2\u03cc\u03d4\5\u00acW\2\u03cd\u03ce\5\u00a0Q\2\u03ce"+
		"\u03cf\5\u00aaV\2\u03cf\u03d4\3\2\2\2\u03d0\u03d1\5\u00a0Q\2\u03d1\u03d2"+
		"\5\u00acW\2\u03d2\u03d4\3\2\2\2\u03d3\u03a1\3\2\2\2\u03d3\u03aa\3\2\2"+
		"\2\u03d3\u03b3\3\2\2\2\u03d3\u03b9\3\2\2\2\u03d3\u03bf\3\2\2\2\u03d3\u03c5"+
		"\3\2\2\2\u03d3\u03cb\3\2\2\2\u03d3\u03cc\3\2\2\2\u03d3\u03cd\3\2\2\2\u03d3"+
		"\u03d0\3\2\2\2\u03d4\u00a3\3\2\2\2\u03d5\u03d6\5\u00aeX\2\u03d6\u03d7"+
		"\7\u00cd\2\2\u03d7\u03da\5\u00dan\2\u03d8\u03d9\7\u00cb\2\2\u03d9\u03db"+
		"\5\u00dan\2\u03da\u03d8\3\2\2\2\u03da\u03db\3\2\2\2\u03db\u03dc\3\2\2"+
		"\2\u03dc\u03dd\7\u00cf\2\2\u03dd\u03ef\3\2\2\2\u03de\u03df\5\u00a0Q\2"+
		"\u03df\u03e0\7\u00cd\2\2\u03e0\u03e1\5\u00dan\2\u03e1\u03e2\7\u00cf\2"+
		"\2\u03e2\u03e3\5\u00aeX\2\u03e3\u03ef\3\2\2\2\u03e4\u03ef\5\u00aeX\2\u03e5"+
		"\u03e6\5\u00a0Q\2\u03e6\u03e7\5\u00aeX\2\u03e7\u03ef\3\2\2\2\u03e8\u03e9"+
		"\7\u00d7\2\2\u03e9\u03eb\7\u00cd\2\2\u03ea\u03ec\5\u00ba^\2\u03eb\u03ea"+
		"\3\2\2\2\u03eb\u03ec\3\2\2\2\u03ec\u03ed\3\2\2\2\u03ed\u03ef\7\u00cf\2"+
		"\2\u03ee\u03d5\3\2\2\2\u03ee\u03de\3\2\2\2\u03ee\u03e4\3\2\2\2\u03ee\u03e5"+
		"\3\2\2\2\u03ee\u03e8\3\2\2\2\u03ef\u00a5\3\2\2\2\u03f0\u03f4\5\u00aaV"+
		"\2\u03f1\u03f4\5\u00acW\2\u03f2\u03f4\5\u00aeX\2\u03f3\u03f0\3\2\2\2\u03f3"+
		"\u03f1\3\2\2\2\u03f3\u03f2\3\2\2\2\u03f4\u00a7\3\2\2\2\u03f5\u03f8\5\u00aa"+
		"V\2\u03f6\u03f8\5\u00acW\2\u03f7\u03f5\3\2\2\2\u03f7\u03f6\3\2\2\2\u03f8"+
		"\u00a9\3\2\2\2\u03f9\u03fa\7\u00d8\2\2\u03fa\u00ab\3\2\2\2\u03fb\u03fc"+
		"\7\u00d9\2\2\u03fc\u00ad\3\2\2\2\u03fd\u03fe\7\u00da\2\2\u03fe\u00af\3"+
		"\2\2\2\u03ff\u0400\7\u00db\2\2\u0400\u00b1\3\2\2\2\u0401\u0429\5\u00a6"+
		"T\2\u0402\u040d\5\u00a6T\2\u0403\u0404\7\u00cd\2\2\u0404\u0407\5\u00da"+
		"n\2\u0405\u0406\7\u00cb\2\2\u0406\u0408\5\u00dan\2\u0407\u0405\3\2\2\2"+
		"\u0407\u0408\3\2\2\2\u0408\u0409\3\2\2\2\u0409\u040a\7\u00cf\2\2\u040a"+
		"\u040c\3\2\2\2\u040b\u0403\3\2\2\2\u040c\u040f\3\2\2\2\u040d\u040b\3\2"+
		"\2\2\u040d\u040e\3\2\2\2\u040e\u0429\3\2\2\2\u040f\u040d\3\2\2\2\u0410"+
		"\u0411\5\u00a0Q\2\u0411\u0412\5\u00aaV\2\u0412\u0429\3\2\2\2\u0413\u0414"+
		"\5\u00a0Q\2\u0414\u0415\5\u00acW\2\u0415\u0429\3\2\2\2\u0416\u0417\5\u00a0"+
		"Q\2\u0417\u0418\7\u00cd\2\2\u0418\u0419\5\u00dan\2\u0419\u041a\7\u00cf"+
		"\2\2\u041a\u041b\5\u00aaV\2\u041b\u0429\3\2\2\2\u041c\u041d\5\u00a0Q\2"+
		"\u041d\u041e\7\u00cd\2\2\u041e\u041f\5\u00dan\2\u041f\u0420\7\u00cf\2"+
		"\2\u0420\u0421\5\u00acW\2\u0421\u0429\3\2\2\2\u0422\u0429\5\u00a0Q\2\u0423"+
		"\u0424\5\u00a0Q\2\u0424\u0425\7\u00cd\2\2\u0425\u0426\5\u00dan\2\u0426"+
		"\u0427\7\u00cf\2\2\u0427\u0429\3\2\2\2\u0428\u0401\3\2\2\2\u0428\u0402"+
		"\3\2\2\2\u0428\u0410\3\2\2\2\u0428\u0413\3\2\2\2\u0428\u0416\3\2\2\2\u0428"+
		"\u041c\3\2\2\2\u0428\u0422\3\2\2\2\u0428\u0423\3\2\2\2\u0429\u00b3\3\2"+
		"\2\2\u042a\u042b\5\u00a6T\2\u042b\u042c\7\u00cd\2\2\u042c\u0431\5\u00da"+
		"n\2\u042d\u042e\7\u00cb\2\2\u042e\u0430\5\u00dan\2\u042f\u042d\3\2\2\2"+
		"\u0430\u0433\3\2\2\2\u0431\u042f\3\2\2\2\u0431\u0432\3\2\2\2\u0432\u0434"+
		"\3\2\2\2\u0433\u0431\3\2\2\2\u0434\u0435\7\u00cf\2\2\u0435\u043e\3\2\2"+
		"\2\u0436\u0437\5\u00a0Q\2\u0437\u0438\7\u00cd\2\2\u0438\u0439\5\u00da"+
		"n\2\u0439\u043a\7\u00cb\2\2\u043a\u043b\5\u00aaV\2\u043b\u043c\7\u00cf"+
		"\2\2\u043c\u043e\3\2\2\2\u043d\u042a\3\2\2\2\u043d\u0436\3\2\2\2\u043e"+
		"\u00b5\3\2\2\2\u043f\u0444\5\u00b2Z\2\u0440\u0441\7\u00cb\2\2\u0441\u0443"+
		"\5\u00b2Z\2\u0442\u0440\3\2\2\2\u0443\u0446\3\2\2\2\u0444\u0442\3\2\2"+
		"\2\u0444\u0445\3\2\2\2\u0445\u00b7\3\2\2\2\u0446\u0444\3\2\2\2\u0447\u0449"+
		"\7*\2\2\u0448\u0447\3\2\2\2\u0448\u0449\3\2\2\2\u0449\u044a\3\2\2\2\u044a"+
		"\u0452\5\u00a6T\2\u044b\u044d\7\u00cb\2\2\u044c\u044e\7*\2\2\u044d\u044c"+
		"\3\2\2\2\u044d\u044e\3\2\2\2\u044e\u044f\3\2\2\2\u044f\u0451\5\u00a6T"+
		"\2\u0450\u044b\3\2\2\2\u0451\u0454\3\2\2\2\u0452\u0450\3\2\2\2\u0452\u0453"+
		"\3\2\2\2\u0453\u00b9\3\2\2\2\u0454\u0452\3\2\2\2\u0455\u045a\5\u00c6d"+
		"\2\u0456\u0457\7\u00cb\2\2\u0457\u0459\5\u00c6d\2\u0458\u0456\3\2\2\2"+
		"\u0459\u045c\3\2\2\2\u045a\u0458\3\2\2\2\u045a\u045b\3\2\2\2\u045b\u00bb"+
		"\3\2\2\2\u045c\u045a\3\2\2\2\u045d\u0462\5\u00c6d\2\u045e\u045f\7\u00cb"+
		"\2\2\u045f\u0461\5\u00c6d\2\u0460\u045e\3\2\2\2\u0461\u0464\3\2\2\2\u0462"+
		"\u0460\3\2\2\2\u0462\u0463\3\2\2\2\u0463\u00bd\3\2\2\2\u0464\u0462\3\2"+
		"\2\2\u0465\u0467\7\u00c8\2\2\u0466\u0465\3\2\2\2\u0466\u0467\3\2\2\2\u0467"+
		"\u0468\3\2\2\2\u0468\u0471\5\u00c6d\2\u0469\u046a\7+\2\2\u046a\u046b\7"+
		"\u00cd\2\2\u046b\u046c\5\u00dan\2\u046c\u046d\7\u00cf\2\2\u046d\u0471"+
		"\3\2\2\2\u046e\u046f\7+\2\2\u046f\u0471\5\u00dan\2\u0470\u0466\3\2\2\2"+
		"\u0470\u0469\3\2\2\2\u0470\u046e\3\2\2\2\u0471\u00bf\3\2\2\2\u0472\u0474"+
		"\7\u00c7\2\2\u0473\u0472\3\2\2\2\u0474\u0475\3\2\2\2\u0475\u0473\3\2\2"+
		"\2\u0475\u0476\3\2\2\2\u0476\u00c1\3\2\2\2\u0477\u047b\7\u00cb\2\2\u0478"+
		"\u047b\7\u00d0\2\2\u0479\u047b\5\u00c0a\2\u047a\u0477\3\2\2\2\u047a\u0478"+
		"\3\2\2\2\u047a\u0479\3\2\2\2\u047b\u00c3\3\2\2\2\u047c\u047e\5\u00c0a"+
		"\2\u047d\u047c\3\2\2\2\u047d\u047e\3\2\2\2\u047e\u0480\3\2\2\2\u047f\u0481"+
		"\7\u00d0\2\2\u0480\u047f\3\2\2\2\u0480\u0481\3\2\2\2\u0481\u0482\3\2\2"+
		"\2\u0482\u0488\5\u00be`\2\u0483\u0484\5\u00c2b\2\u0484\u0485\5\u00be`"+
		"\2\u0485\u0487\3\2\2\2\u0486\u0483\3\2\2\2\u0487\u048a\3\2\2\2\u0488\u0486"+
		"\3\2\2\2\u0488\u0489\3\2\2\2\u0489\u048c\3\2\2\2\u048a\u0488\3\2\2\2\u048b"+
		"\u048d\7\u00d0\2\2\u048c\u048b\3\2\2\2\u048c\u048d\3\2\2\2\u048d\u00c5"+
		"\3\2\2\2\u048e\u0491\5\u00dan\2\u048f\u0491\5\u00d6l\2\u0490\u048e\3\2"+
		"\2\2\u0490\u048f\3\2\2\2\u0491\u00c7\3\2\2\2\u0492\u0499\5\u00caf\2\u0493"+
		"\u0499\5\u00d0i\2\u0494\u0499\5\u00ccg\2\u0495\u0499\5\u00ceh\2\u0496"+
		"\u0499\5\u00dco\2\u0497\u0499\5\u00dep\2\u0498\u0492\3\2\2\2\u0498\u0493"+
		"\3\2\2\2\u0498\u0494\3\2\2\2\u0498\u0495\3\2\2\2\u0498\u0496\3\2\2\2\u0498"+
		"\u0497\3\2\2\2\u0499\u00c9\3\2\2\2\u049a\u049c\t\6\2\2\u049b\u049a\3\2"+
		"\2\2\u049b\u049c\3\2\2\2\u049c\u049d\3\2\2\2\u049d\u049e\7\u00de\2\2\u049e"+
		"\u00cb\3\2\2\2\u049f\u04a0\7\u00dc\2\2\u04a0\u00cd\3\2\2\2\u04a1\u04a2"+
		"\7\u00dd\2\2\u04a2\u00cf\3\2\2\2\u04a3\u04a5\t\6\2\2\u04a4\u04a3\3\2\2"+
		"\2\u04a4\u04a5\3\2\2\2\u04a5\u04a6\3\2\2\2\u04a6\u04a7\7\u00df\2\2\u04a7"+
		"\u00d1\3\2\2\2\u04a8\u04dc\7\u00a3\2\2\u04a9\u04aa\7\u00a6\2\2\u04aa\u04ab"+
		"\7\u00cd\2\2\u04ab\u04ac\5\u00dan\2\u04ac\u04ad\7\u00cf\2\2\u04ad\u04dc"+
		"\3\2\2\2\u04ae\u04af\7\u00a7\2\2\u04af\u04b0\7\u00cd\2\2\u04b0\u04b1\5"+
		"\u00d6l\2\u04b1\u04b2\7\u00cb\2\2\u04b2\u04b3\5\u00dan\2\u04b3\u04b4\7"+
		"\u00cf\2\2\u04b4\u04dc\3\2\2\2\u04b5\u04b6\7\u00a8\2\2\u04b6\u04b7\7\u00cd"+
		"\2\2\u04b7\u04b8\5\u00d6l\2\u04b8\u04b9\7\u00cb\2\2\u04b9\u04ba\5\u00da"+
		"n\2\u04ba\u04bb\7\u00cb\2\2\u04bb\u04bc\5\u00dan\2\u04bc\u04bd\7\u00cf"+
		"\2\2\u04bd\u04dc\3\2\2\2\u04be\u04bf\7\u00a8\2\2\u04bf\u04c0\7\u00cd\2"+
		"\2\u04c0\u04c1\5\u00d6l\2\u04c1\u04c2\7\u00cb\2\2\u04c2\u04c3\5\u00da"+
		"n\2\u04c3\u04c4\7\u00cf\2\2\u04c4\u04dc\3\2\2\2\u04c5\u04c6\7\u00a9\2"+
		"\2\u04c6\u04c7\7\u00cd\2\2\u04c7\u04c8\5\u00d6l\2\u04c8\u04c9\7\u00cb"+
		"\2\2\u04c9\u04ca\5\u00dan\2\u04ca\u04cb\7\u00cf\2\2\u04cb\u04dc\3\2\2"+
		"\2\u04cc\u04cd\7\u00a4\2\2\u04cd\u04dc\5\u00dan\2\u04ce\u04cf\7\u00a4"+
		"\2\2\u04cf\u04d0\7\u00c8\2\2\u04d0\u04dc\5\u00dan\2\u04d1\u04d2\7\u00a5"+
		"\2\2\u04d2\u04d3\7\u00cd\2\2\u04d3\u04d4\5\u00dan\2\u04d4\u04d5\7\u00cb"+
		"\2\2\u04d5\u04d6\5\u00d6l\2\u04d6\u04d7\7\u00cf\2\2\u04d7\u04dc\3\2\2"+
		"\2\u04d8\u04d9\7:\2\2\u04d9\u04dc\5\u00dan\2\u04da\u04dc\7<\2\2\u04db"+
		"\u04a8\3\2\2\2\u04db\u04a9\3\2\2\2\u04db\u04ae\3\2\2\2\u04db\u04b5\3\2"+
		"\2\2\u04db\u04be\3\2\2\2\u04db\u04c5\3\2\2\2\u04db\u04cc\3\2\2\2\u04db"+
		"\u04ce\3\2\2\2\u04db\u04d1\3\2\2\2\u04db\u04d8\3\2\2\2\u04db\u04da\3\2"+
		"\2\2\u04dc\u00d3\3\2\2\2\u04dd\u04de\7\u00d3\2\2\u04de\u00d5\3\2\2\2\u04df"+
		"\u04e0\bl\1\2\u04e0\u04e1\7\u00cd\2\2\u04e1\u04e2\5\u00d6l\2\u04e2\u04e3"+
		"\7\u00cf\2\2\u04e3\u04e8\3\2\2\2\u04e4\u04e8\5\u00d2j\2\u04e5\u04e8\5"+
		"\u00a4S\2\u04e6\u04e8\5\u00d4k\2\u04e7\u04df\3\2\2\2\u04e7\u04e4\3\2\2"+
		"\2\u04e7\u04e5\3\2\2\2\u04e7\u04e6\3\2\2\2\u04e8\u04ee\3\2\2\2\u04e9\u04ea"+
		"\f\5\2\2\u04ea\u04eb\7\u00ba\2\2\u04eb\u04ed\5\u00d6l\6\u04ec\u04e9\3"+
		"\2\2\2\u04ed\u04f0\3\2\2\2\u04ee\u04ec\3\2\2\2\u04ee\u04ef\3\2\2\2\u04ef"+
		"\u00d7\3\2\2\2\u04f0\u04ee\3\2\2\2\u04f1\u05b0\7\u0090\2\2\u04f2\u05b0"+
		"\7\20\2\2\u04f3\u05b0\7\63\2\2\u04f4\u05b0\7\u008f\2\2\u04f5\u04f6\7\u00aa"+
		"\2\2\u04f6\u04f7\7\u00cd\2\2\u04f7\u04f8\5\u00dan\2\u04f8\u04f9\7\u00cf"+
		"\2\2\u04f9\u05b0\3\2\2\2\u04fa\u05b0\7\u00aa\2\2\u04fb\u05b0\7\u00ab\2"+
		"\2\u04fc\u05b0\7\u00ac\2\2\u04fd\u04fe\7\u0092\2\2\u04fe\u04ff\7\u00cd"+
		"\2\2\u04ff\u0500\5\u00dan\2\u0500\u0501\7\u00cf\2\2\u0501\u05b0\3\2\2"+
		"\2\u0502\u0503\7\u0093\2\2\u0503\u0504\7\u00cd\2\2\u0504\u0505\5\u00da"+
		"n\2\u0505\u0506\7\u00cf\2\2\u0506\u05b0\3\2\2\2\u0507\u0508\7\u0094\2"+
		"\2\u0508\u0509\7\u00cd\2\2\u0509\u050a\5\u00dan\2\u050a\u050b\7\u00cf"+
		"\2\2\u050b\u05b0\3\2\2\2\u050c\u050d\7\u0095\2\2\u050d\u050e\7\u00cd\2"+
		"\2\u050e\u050f\5\u00dan\2\u050f\u0510\7\u00cf\2\2\u0510\u05b0\3\2\2\2"+
		"\u0511\u0512\7\u0096\2\2\u0512\u0513\7\u00cd\2\2\u0513\u0514\5\u00dan"+
		"\2\u0514\u0515\7\u00cf\2\2\u0515\u05b0\3\2\2\2\u0516\u0517\7\u0097\2\2"+
		"\u0517\u0518\7\u00cd\2\2\u0518\u0519\5\u00dan\2\u0519\u051a\7\u00cf\2"+
		"\2\u051a\u05b0\3\2\2\2\u051b\u051c\7\u0098\2\2\u051c\u051d\7\u00cd\2\2"+
		"\u051d\u051e\5\u00dan\2\u051e\u051f\7\u00cf\2\2\u051f\u05b0\3\2\2\2\u0520"+
		"\u0521\7\u0099\2\2\u0521\u0522\7\u00cd\2\2\u0522\u0523\5\u00dan\2\u0523"+
		"\u0524\7\u00cf\2\2\u0524\u05b0\3\2\2\2\u0525\u0526\7\u009a\2\2\u0526\u0527"+
		"\7\u00cd\2\2\u0527\u0528\5\u00dan\2\u0528\u0529\7\u00cf\2\2\u0529\u05b0"+
		"\3\2\2\2\u052a\u052b\7\u009b\2\2\u052b\u052c\7\u00cd\2\2\u052c\u052d\5"+
		"\u00dan\2\u052d\u052e\7\u00cf\2\2\u052e\u05b0\3\2\2\2\u052f\u0530\7\u009c"+
		"\2\2\u0530\u0531\7\u00cd\2\2\u0531\u0532\5\u00dan\2\u0532\u0533\7\u00cf"+
		"\2\2\u0533\u05b0\3\2\2\2\u0534\u0535\7\u009d\2\2\u0535\u0536\7\u00cd\2"+
		"\2\u0536\u0537\5\u00dan\2\u0537\u0538\7\u00cf\2\2\u0538\u05b0\3\2\2\2"+
		"\u0539\u053a\7\u0091\2\2\u053a\u053b\7\u00cd\2\2\u053b\u053c\5\u00dan"+
		"\2\u053c\u053d\7\u00cf\2\2\u053d\u05b0\3\2\2\2\u053e\u053f\7\u009e\2\2"+
		"\u053f\u0540\7\u00cd\2\2\u0540\u0541\5\u00dan\2\u0541\u0542\7\u00cf\2"+
		"\2\u0542\u05b0\3\2\2\2\u0543\u05b0\7;\2\2\u0544\u0545\79\2\2\u0545\u0546"+
		"\7\u00cd\2\2\u0546\u0547\5\u00dan\2\u0547\u0548\7\u00cf\2\2\u0548\u05b0"+
		"\3\2\2\2\u0549\u054a\7\27\2\2\u054a\u054b\7\u00cd\2\2\u054b\u054c\5\u00da"+
		"n\2\u054c\u054d\7\u00cf\2\2\u054d\u05b0\3\2\2\2\u054e\u054f\7\22\2\2\u054f"+
		"\u0550\7\u00cd\2\2\u0550\u0551\5\u00dan\2\u0551\u0552\7\u00cf\2\2\u0552"+
		"\u05b0\3\2\2\2\u0553\u05b0\7\u0088\2\2\u0554\u05b0\7\u0089\2\2\u0555\u0556"+
		"\7\u0087\2\2\u0556\u0557\7\u00cd\2\2\u0557\u0558\5\u00dan\2\u0558\u0559"+
		"\7\u00cb\2\2\u0559\u055a\5\u00dan\2\u055a\u055b\7\u00cf\2\2\u055b\u05b0"+
		"\3\2\2\2\u055c\u055d\7|\2\2\u055d\u055e\7\u00cd\2\2\u055e\u055f\5\u00da"+
		"n\2\u055f\u0560\7\u00cb\2\2\u0560\u0561\5\u00dan\2\u0561\u0562\7\u00cb"+
		"\2\2\u0562\u0563\5\u00dan\2\u0563\u0564\7\u00cf\2\2\u0564\u05b0\3\2\2"+
		"\2\u0565\u0566\7\u0084\2\2\u0566\u05b0\5\u00d6l\2\u0567\u0568\7~\2\2\u0568"+
		"\u0569\5\u00dan\2\u0569\u056a\7\u00cb\2\2\u056a\u056b\5\u00dan\2\u056b"+
		"\u05b0\3\2\2\2\u056c\u056d\7g\2\2\u056d\u056e\5\u00b0Y\2\u056e\u056f\7"+
		"\u00cb\2\2\u056f\u0570\5\u00b0Y\2\u0570\u05b0\3\2\2\2\u0571\u0572\7h\2"+
		"\2\u0572\u0573\5\u00dan\2\u0573\u0574\7\u00cb\2\2\u0574\u0575\5\u00da"+
		"n\2\u0575\u0576\7\u00cb\2\2\u0576\u0577\5\u00dan\2\u0577\u0578\7\u00cb"+
		"\2\2\u0578\u0579\5\u00dan\2\u0579\u057a\7\u00cb\2\2\u057a\u057b\5\u00da"+
		"n\2\u057b\u057c\7\u00cb\2\2\u057c\u057d\5\u00dan\2\u057d\u057e\7\u00cb"+
		"\2\2\u057e\u057f\5\u00dan\2\u057f\u0580\7\u00cb\2\2\u0580\u0581\5\u00da"+
		"n\2\u0581\u0582\7\u00cb\2\2\u0582\u0583\t\7\2\2\u0583\u05b0\3\2\2\2\u0584"+
		"\u0585\7m\2\2\u0585\u05b0\5\u00dan\2\u0586\u0587\7p\2\2\u0587\u05b0\5"+
		"\u00dan\2\u0588\u0589\7s\2\2\u0589\u058a\7\u00cd\2\2\u058a\u058b\5\u00d6"+
		"l\2\u058b\u058c\7\u00cf\2\2\u058c\u05b0\3\2\2\2\u058d\u058e\7t\2\2\u058e"+
		"\u058f\7\u00cd\2\2\u058f\u0590\5\u00d6l\2\u0590\u0591\7\u00cf\2\2\u0591"+
		"\u05b0\3\2\2\2\u0592\u0593\7u\2\2\u0593\u0594\7\u00cd\2\2\u0594\u0595"+
		"\5\u00d6l\2\u0595\u0596\7\u00cf\2\2\u0596\u05b0\3\2\2\2\u0597\u0598\7"+
		"v\2\2\u0598\u05b0\5\u00dan\2\u0599\u059a\7\u009f\2\2\u059a\u05b0\5\u00d6"+
		"l\2\u059b\u059c\7\u00a0\2\2\u059c\u05b0\5\u00d6l\2\u059d\u059e\7\u00a1"+
		"\2\2\u059e\u059f\7\u00cd\2\2\u059f\u05a0\5\u00d6l\2\u05a0\u05a1\7\u00cb"+
		"\2\2\u05a1\u05a2\5\u00d6l\2\u05a2\u05a3\7\u00cf\2\2\u05a3\u05b0\3\2\2"+
		"\2\u05a4\u05a5\7\u00a1\2\2\u05a5\u05a6\7\u00cd\2\2\u05a6\u05a7\5\u00d6"+
		"l\2\u05a7\u05a8\7\u00cb\2\2\u05a8\u05a9\5\u00d6l\2\u05a9\u05aa\7\u00cb"+
		"\2\2\u05aa\u05ab\5\u00dan\2\u05ab\u05ac\7\u00cf\2\2\u05ac\u05b0\3\2\2"+
		"\2\u05ad\u05ae\7\u00a2\2\2\u05ae\u05b0\5\u00d6l\2\u05af\u04f1\3\2\2\2"+
		"\u05af\u04f2\3\2\2\2\u05af\u04f3\3\2\2\2\u05af\u04f4\3\2\2\2\u05af\u04f5"+
		"\3\2\2\2\u05af\u04fa\3\2\2\2\u05af\u04fb\3\2\2\2\u05af\u04fc\3\2\2\2\u05af"+
		"\u04fd\3\2\2\2\u05af\u0502\3\2\2\2\u05af\u0507\3\2\2\2\u05af\u050c\3\2"+
		"\2\2\u05af\u0511\3\2\2\2\u05af\u0516\3\2\2\2\u05af\u051b\3\2\2\2\u05af"+
		"\u0520\3\2\2\2\u05af\u0525\3\2\2\2\u05af\u052a\3\2\2\2\u05af\u052f\3\2"+
		"\2\2\u05af\u0534\3\2\2\2\u05af\u0539\3\2\2\2\u05af\u053e\3\2\2\2\u05af"+
		"\u0543\3\2\2\2\u05af\u0544\3\2\2\2\u05af\u0549\3\2\2\2\u05af\u054e\3\2"+
		"\2\2\u05af\u0553\3\2\2\2\u05af\u0554\3\2\2\2\u05af\u0555\3\2\2\2\u05af"+
		"\u055c\3\2\2\2\u05af\u0565\3\2\2\2\u05af\u0567\3\2\2\2\u05af\u056c\3\2"+
		"\2\2\u05af\u0571\3\2\2\2\u05af\u0584\3\2\2\2\u05af\u0586\3\2\2\2\u05af"+
		"\u0588\3\2\2\2\u05af\u058d\3\2\2\2\u05af\u0592\3\2\2\2\u05af\u0597\3\2"+
		"\2\2\u05af\u0599\3\2\2\2\u05af\u059b\3\2\2\2\u05af\u059d\3\2\2\2\u05af"+
		"\u05a4\3\2\2\2\u05af\u05ad\3\2\2\2\u05b0\u00d9\3\2\2\2\u05b1\u05b2\bn"+
		"\1\2\u05b2\u05c2\5\u00a2R\2\u05b3\u05c2\5\u00c8e\2\u05b4\u05b5\7\u00cd"+
		"\2\2\u05b5\u05b6\5\u00dan\2\u05b6\u05b7\7\u00cf\2\2\u05b7\u05c2\3\2\2"+
		"\2\u05b8\u05b9\7\u00bb\2\2\u05b9\u05c2\5\u00dan\r\u05ba\u05bb\7\u00b3"+
		"\2\2\u05bb\u05c2\5\u00dan\f\u05bc\u05c2\5\u00d8m\2\u05bd\u05be\5\u00d6"+
		"l\2\u05be\u05bf\t\b\2\2\u05bf\u05c0\5\u00d6l\2\u05c0\u05c2\3\2\2\2\u05c1"+
		"\u05b1\3\2\2\2\u05c1\u05b3\3\2\2\2\u05c1\u05b4\3\2\2\2\u05c1\u05b8\3\2"+
		"\2\2\u05c1\u05ba\3\2\2\2\u05c1\u05bc\3\2\2\2\u05c1\u05bd\3\2\2\2\u05c2"+
		"\u05da\3\2\2\2\u05c3\u05c4\f\n\2\2\u05c4\u05c5\7\u00b9\2\2\u05c5\u05d9"+
		"\5\u00dan\n\u05c6\u05c7\f\t\2\2\u05c7\u05c8\t\t\2\2\u05c8\u05d9\5\u00da"+
		"n\n\u05c9\u05ca\f\b\2\2\u05ca\u05cb\t\n\2\2\u05cb\u05d9\5\u00dan\t\u05cc"+
		"\u05cd\f\7\2\2\u05cd\u05ce\t\6\2\2\u05ce\u05d9\5\u00dan\b\u05cf\u05d0"+
		"\f\6\2\2\u05d0\u05d1\t\13\2\2\u05d1\u05d9\5\u00dan\7\u05d2\u05d3\f\5\2"+
		"\2\u05d3\u05d4\t\b\2\2\u05d4\u05d9\5\u00dan\6\u05d5\u05d6\f\3\2\2\u05d6"+
		"\u05d7\t\f\2\2\u05d7\u05d9\5\u00dan\4\u05d8\u05c3\3\2\2\2\u05d8\u05c6"+
		"\3\2\2\2\u05d8\u05c9\3\2\2\2\u05d8\u05cc\3\2\2\2\u05d8\u05cf\3\2\2\2\u05d8"+
		"\u05d2\3\2\2\2\u05d8\u05d5\3\2\2\2\u05d9\u05dc\3\2\2\2\u05da\u05d8\3\2"+
		"\2\2\u05da\u05db\3\2\2\2\u05db\u00db\3\2\2\2\u05dc\u05da\3\2\2\2\u05dd"+
		"\u05de\t\r\2\2\u05de\u00dd\3\2\2\2\u05df\u05e0\t\16\2\2\u05e0\u00df\3"+
		"\2\2\2a\u00e3\u00ea\u00ed\u00f1\u00f6\u00f9\u00fd\u0102\u0107\u010d\u0113"+
		"\u0116\u0120\u013e\u0149\u014d\u015a\u015e\u0166\u016d\u0173\u0178\u0180"+
		"\u0185\u018b\u0194\u0198\u019e\u01a7\u01ae\u01b7\u01c1\u01c4\u01d2\u01d5"+
		"\u01e1\u01ea\u01f4\u020a\u0220\u0226\u022c\u025b\u0262\u0275\u0297\u02a4"+
		"\u02af\u02bf\u02d2\u02f0\u0321\u038e\u0398\u039d\u03a6\u03af\u03c2\u03c8"+
		"\u03d3\u03da\u03eb\u03ee\u03f3\u03f7\u0407\u040d\u0428\u0431\u043d\u0444"+
		"\u0448\u044d\u0452\u045a\u0462\u0466\u0470\u0475\u047a\u047d\u0480\u0488"+
		"\u048c\u0490\u0498\u049b\u04a4\u04db\u04e7\u04ee\u05af\u05c1\u05d8\u05da";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}