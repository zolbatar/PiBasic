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
		RULE_functionVar = 91, RULE_functionVarList = 92, RULE_functionParList = 93, 
		RULE_exprList = 94, RULE_printListItem = 95, RULE_printListTick = 96, 
		RULE_printListSeparator = 97, RULE_printList = 98, RULE_expr = 99, RULE_number = 100, 
		RULE_numberInteger = 101, RULE_numberHex = 102, RULE_numberBinary = 103, 
		RULE_numberFloat = 104, RULE_strFunc = 105, RULE_string = 106, RULE_strExpr = 107, 
		RULE_numFunc = 108, RULE_numExpr = 109, RULE_numColours = 110, RULE_defaultFonts = 111;
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
			"varDecl", "varDeclWithDimension", "varList", "functionVar", "functionVarList", 
			"functionParList", "exprList", "printListItem", "printListTick", "printListSeparator", 
			"printList", "expr", "number", "numberInteger", "numberHex", "numberBinary", 
			"numberFloat", "strFunc", "string", "strExpr", "numFunc", "numExpr", 
			"numColours", "defaultFonts"
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
			setState(227);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INSTALL) | (1L << INPUT) | (1L << GLOBAL) | (1L << GOTO) | (1L << GOSUB) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 94)) & ~0x3f) == 0 && ((1L << (_la - 94)) & ((1L << (RENDERFRAME - 94)) | (1L << (CREATEVERTEX - 94)) | (1L << (CREATETRIANGLE - 94)) | (1L << (TRANSLATE - 94)) | (1L << (ROTATE - 94)) | (1L << (SCALE - 94)) | (1L << (DELETEOBJECT - 94)) | (1L << (BGETH - 94)) | (1L << (BPUTH - 94)) | (1L << (CLOSEH - 94)) | (1L << (PTRH - 94)) | (1L << (CIRCLE - 94)) | (1L << (CLS - 94)) | (1L << (CLIPON - 94)) | (1L << (CLIPOFF - 94)) | (1L << (COLOUR - 94)) | (1L << (COLOURBG - 94)) | (1L << (FLIP - 94)) | (1L << (SHOWFPS - 94)) | (1L << (GRAPHICS - 94)) | (1L << (LINE - 94)) | (1L << (RECTANGLE - 94)) | (1L << (PLOT - 94)) | (1L << (TEXT - 94)) | (1L << (TEXTRIGHT - 94)) | (1L << (TEXTCENTRE - 94)) | (1L << (TEXTCENTER - 94)) | (1L << (TRIANGLE - 94)))) != 0) || ((((_la - 196)) & ~0x3f) == 0 && ((1L << (_la - 196)) & ((1L << (NEWLINE - 196)) | (1L << (COLON - 196)) | (1L << (COMMENT - 196)) | (1L << (PROC_NAME - 196)) | (1L << (FN_INTEGER - 196)) | (1L << (FN_FLOAT - 196)) | (1L << (FN_STRING - 196)) | (1L << (VARIABLE_FLOAT - 196)) | (1L << (VARIABLE_INTEGER - 196)) | (1L << (VARIABLE_STRING - 196)) | (1L << (VARIABLE_TYPE - 196)) | (1L << (NUMBER - 196)))) != 0)) {
				{
				{
				setState(224);
				line();
				}
				}
				setState(229);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(230);
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
			setState(253);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(232);
				match(NEWLINE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(234);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(233);
					linenumber();
					}
				}

				setState(237);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REM || _la==COMMENT) {
					{
					setState(236);
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

				setState(239);
				match(NEWLINE);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(241);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(240);
					linenumber();
					}
				}

				setState(244); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(243);
					stmt();
					}
					}
					setState(246); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INSTALL) | (1L << INPUT) | (1L << GLOBAL) | (1L << GOTO) | (1L << GOSUB) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 94)) & ~0x3f) == 0 && ((1L << (_la - 94)) & ((1L << (RENDERFRAME - 94)) | (1L << (CREATEVERTEX - 94)) | (1L << (CREATETRIANGLE - 94)) | (1L << (TRANSLATE - 94)) | (1L << (ROTATE - 94)) | (1L << (SCALE - 94)) | (1L << (DELETEOBJECT - 94)) | (1L << (BGETH - 94)) | (1L << (BPUTH - 94)) | (1L << (CLOSEH - 94)) | (1L << (PTRH - 94)) | (1L << (CIRCLE - 94)) | (1L << (CLS - 94)) | (1L << (CLIPON - 94)) | (1L << (CLIPOFF - 94)) | (1L << (COLOUR - 94)) | (1L << (COLOURBG - 94)) | (1L << (FLIP - 94)) | (1L << (SHOWFPS - 94)) | (1L << (GRAPHICS - 94)) | (1L << (LINE - 94)) | (1L << (RECTANGLE - 94)) | (1L << (PLOT - 94)) | (1L << (TEXT - 94)) | (1L << (TEXTRIGHT - 94)) | (1L << (TEXTCENTRE - 94)) | (1L << (TEXTCENTER - 94)) | (1L << (TRIANGLE - 94)))) != 0) || ((((_la - 200)) & ~0x3f) == 0 && ((1L << (_la - 200)) & ((1L << (COLON - 200)) | (1L << (PROC_NAME - 200)) | (1L << (FN_INTEGER - 200)) | (1L << (FN_FLOAT - 200)) | (1L << (FN_STRING - 200)) | (1L << (VARIABLE_FLOAT - 200)) | (1L << (VARIABLE_INTEGER - 200)) | (1L << (VARIABLE_STRING - 200)) | (1L << (VARIABLE_TYPE - 200)))) != 0) );
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
			}
		}
		catch (RecognitionException re) {
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
			setState(256); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(255);
					line();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(258); 
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
			setState(263);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(260);
					stmt();
					}
					} 
				}
				setState(265);
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
			setState(278);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(269);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INSTALL) | (1L << INPUT) | (1L << GLOBAL) | (1L << GOTO) | (1L << GOSUB) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 94)) & ~0x3f) == 0 && ((1L << (_la - 94)) & ((1L << (RENDERFRAME - 94)) | (1L << (CREATEVERTEX - 94)) | (1L << (CREATETRIANGLE - 94)) | (1L << (TRANSLATE - 94)) | (1L << (ROTATE - 94)) | (1L << (SCALE - 94)) | (1L << (DELETEOBJECT - 94)) | (1L << (BGETH - 94)) | (1L << (BPUTH - 94)) | (1L << (CLOSEH - 94)) | (1L << (PTRH - 94)) | (1L << (CIRCLE - 94)) | (1L << (CLS - 94)) | (1L << (CLIPON - 94)) | (1L << (CLIPOFF - 94)) | (1L << (COLOUR - 94)) | (1L << (COLOURBG - 94)) | (1L << (FLIP - 94)) | (1L << (SHOWFPS - 94)) | (1L << (GRAPHICS - 94)) | (1L << (LINE - 94)) | (1L << (RECTANGLE - 94)) | (1L << (PLOT - 94)) | (1L << (TEXT - 94)) | (1L << (TEXTRIGHT - 94)) | (1L << (TEXTCENTRE - 94)) | (1L << (TEXTCENTER - 94)) | (1L << (TRIANGLE - 94)))) != 0) || ((((_la - 200)) & ~0x3f) == 0 && ((1L << (_la - 200)) & ((1L << (COLON - 200)) | (1L << (PROC_NAME - 200)) | (1L << (FN_INTEGER - 200)) | (1L << (FN_FLOAT - 200)) | (1L << (FN_STRING - 200)) | (1L << (VARIABLE_FLOAT - 200)) | (1L << (VARIABLE_INTEGER - 200)) | (1L << (VARIABLE_STRING - 200)) | (1L << (VARIABLE_TYPE - 200)))) != 0)) {
					{
					{
					setState(266);
					stmt();
					}
					}
					setState(271);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(275);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(272);
						line();
						}
						} 
					}
					setState(277);
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
			setState(280);
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
			setState(288);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(282);
				match(COLON);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(283);
				coreStmt();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(284);
				keyMouseStmt();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(285);
				stmtOperatorEqual();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(286);
				ioStmt();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(287);
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
			setState(318);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(290);
				stmtBREAKPOINT();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(291);
				stmtCASE();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(292);
				stmtCHAIN();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(293);
				stmtDATA();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(294);
				stmtDIM();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(295);
				stmtEND();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(296);
				stmtRETURN();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(297);
				stmtDEFFN();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(298);
				stmtDEFPROC();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(299);
				stmtFOR();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(300);
				stmtFORIN();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(301);
				stmtGOTO();
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(302);
				stmtGOSUB();
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(303);
				stmtIF();
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(304);
				stmtIFMultiline();
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(305);
				stmtINSTALL();
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(306);
				stmtLET();
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(307);
				stmtOSCLI();
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(308);
				stmtCallFN();
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(309);
				stmtCallPROC();
				}
				break;
			case 21:
				enterOuterAlt(_localctx, 21);
				{
				setState(310);
				stmtREAD();
				}
				break;
			case 22:
				enterOuterAlt(_localctx, 22);
				{
				setState(311);
				stmtRESTORE();
				}
				break;
			case 23:
				enterOuterAlt(_localctx, 23);
				{
				setState(312);
				stmtSWAP();
				}
				break;
			case 24:
				enterOuterAlt(_localctx, 24);
				{
				setState(313);
				stmtTRACEON();
				}
				break;
			case 25:
				enterOuterAlt(_localctx, 25);
				{
				setState(314);
				stmtTRACEOFF();
				}
				break;
			case 26:
				enterOuterAlt(_localctx, 26);
				{
				setState(315);
				stmtTYPE();
				}
				break;
			case 27:
				enterOuterAlt(_localctx, 27);
				{
				setState(316);
				stmtREPEAT();
				}
				break;
			case 28:
				enterOuterAlt(_localctx, 28);
				{
				setState(317);
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
			setState(320);
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
			setState(322);
			match(CASE);
			setState(323);
			expr();
			setState(324);
			match(OF);
			setState(325);
			match(NEWLINE);
			setState(327); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(326);
					when();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(329); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			setState(336);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				{
				setState(332);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(331);
					linenumber();
					}
				}

				setState(334);
				match(OTHERWISE);
				setState(335);
				body();
				}
				break;
			}
			setState(339);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(338);
				linenumber();
				}
			}

			setState(341);
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
			setState(343);
			match(CHAIN);
			setState(344);
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
			setState(346);
			match(DATA);
			setState(347);
			literal();
			setState(352);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(348);
				match(COMMA);
				setState(349);
				literal();
				}
				}
				setState(354);
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
			setState(356);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(355);
				match(LOCAL);
				}
			}

			setState(358);
			match(DIM);
			setState(359);
			varDeclWithDimension();
			setState(364);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(360);
				match(COMMA);
				setState(361);
				varDeclWithDimension();
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
			setState(367);
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
			setState(369);
			match(RETURN);
			setState(371);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
			case 1:
				{
				setState(370);
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
			setState(373);
			match(DEF);
			setState(374);
			fnName();
			setState(375);
			match(LPAREN);
			setState(377);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN || ((((_la - 214)) & ~0x3f) == 0 && ((1L << (_la - 214)) & ((1L << (VARIABLE_FLOAT - 214)) | (1L << (VARIABLE_INTEGER - 214)) | (1L << (VARIABLE_STRING - 214)))) != 0)) {
				{
				setState(376);
				functionVarList();
				}
			}

			setState(379);
			match(RPAREN);
			setState(380);
			body();
			setState(382);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(381);
				linenumber();
				}
			}

			setState(384);
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
			setState(386);
			match(DEF);
			setState(387);
			match(PROC_NAME);
			setState(388);
			match(LPAREN);
			setState(390);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN || ((((_la - 214)) & ~0x3f) == 0 && ((1L << (_la - 214)) & ((1L << (VARIABLE_FLOAT - 214)) | (1L << (VARIABLE_INTEGER - 214)) | (1L << (VARIABLE_STRING - 214)))) != 0)) {
				{
				setState(389);
				functionVarList();
				}
			}

			setState(392);
			match(RPAREN);
			setState(393);
			body();
			setState(395);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(394);
				linenumber();
				}
			}

			setState(397);
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
			setState(399);
			match(FOR);
			setState(401);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(400);
				match(LOCAL);
				}
			}

			setState(403);
			justNumberVar();
			setState(404);
			match(EQ);
			setState(405);
			numExpr(0);
			setState(406);
			match(TO);
			setState(407);
			numExpr(0);
			setState(410);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==STEP) {
				{
				setState(408);
				match(STEP);
				setState(409);
				numExpr(0);
				}
			}

			setState(412);
			body();
			setState(414);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(413);
				linenumber();
				}
			}

			setState(416);
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
			setState(418);
			match(FOR);
			setState(420);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(419);
				match(LOCAL);
				}
			}

			setState(422);
			justVar();
			setState(423);
			match(IN);
			setState(424);
			justVar();
			setState(425);
			match(LPAREN);
			setState(426);
			match(RPAREN);
			setState(427);
			body();
			setState(429);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(428);
				linenumber();
				}
			}

			setState(431);
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
			setState(433);
			fnName();
			setState(434);
			match(LPAREN);
			setState(436);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (CYAN - 64)) | (1L << (WHITE - 64)) | (1L << (BLACK - 64)) | (1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (GETSH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (LOADTYPEFACE - 130)) | (1L << (POINT - 130)) | (1L << (SCREENWIDTH - 130)) | (1L << (SCREENHEIGHT - 130)) | (1L << (TIME - 130)) | (1L << (PI - 130)) | (1L << (SQR - 130)) | (1L << (LN - 130)) | (1L << (LOG - 130)) | (1L << (EXP - 130)) | (1L << (ATN - 130)) | (1L << (TAN - 130)) | (1L << (COS - 130)) | (1L << (SIN - 130)) | (1L << (ABS - 130)) | (1L << (ACS - 130)) | (1L << (ASN - 130)) | (1L << (DEG - 130)) | (1L << (RAD - 130)) | (1L << (SGN - 130)) | (1L << (ASC - 130)) | (1L << (LEN - 130)) | (1L << (INSTR - 130)) | (1L << (VAL - 130)) | (1L << (TIMES - 130)) | (1L << (STRS - 130)) | (1L << (STRINGS - 130)) | (1L << (CHRS - 130)) | (1L << (LEFTS - 130)) | (1L << (MIDS - 130)) | (1L << (RIGHTS - 130)) | (1L << (RND - 130)) | (1L << (RND0 - 130)) | (1L << (RND1 - 130)) | (1L << (NOT - 130)) | (1L << (PLUS - 130)) | (1L << (MINUS - 130)))) != 0) || ((((_la - 203)) & ~0x3f) == 0 && ((1L << (_la - 203)) & ((1L << (LPAREN - 203)) | (1L << (STRINGLITERAL - 203)) | (1L << (FN_INTEGER - 203)) | (1L << (FN_FLOAT - 203)) | (1L << (FN_STRING - 203)) | (1L << (VARIABLE_FLOAT - 203)) | (1L << (VARIABLE_INTEGER - 203)) | (1L << (VARIABLE_STRING - 203)) | (1L << (VARIABLE_TYPE - 203)) | (1L << (HEXNUMBER - 203)) | (1L << (BINARYNUMBER - 203)) | (1L << (NUMBER - 203)) | (1L << (FLOAT - 203)))) != 0)) {
				{
				setState(435);
				functionParList();
				}
			}

			setState(438);
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
			setState(440);
			match(IF);
			setState(441);
			expr();
			setState(442);
			content();
			setState(445);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
			case 1:
				{
				setState(443);
				match(ELSE);
				setState(444);
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
			setState(447);
			match(IF);
			setState(448);
			expr();
			setState(449);
			match(THEN);
			setState(450);
			match(NEWLINE);
			setState(451);
			linePlus();
			setState(458);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
			case 1:
				{
				setState(453);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(452);
					linenumber();
					}
				}

				setState(455);
				match(ELSE);
				setState(456);
				match(NEWLINE);
				setState(457);
				linePlus();
				}
				break;
			}
			setState(461);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(460);
				linenumber();
				}
			}

			setState(463);
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
			setState(465);
			match(INSTALL);
			setState(466);
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
			setState(468);
			match(GOTO);
			setState(469);
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
			setState(471);
			match(GOSUB);
			setState(472);
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
			setState(478);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case GLOBAL:
			case LET:
			case VARIABLE_FLOAT:
			case VARIABLE_INTEGER:
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(475);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==GLOBAL || _la==LET) {
					{
					setState(474);
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
				setState(477);
				match(LOCAL);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(480);
			varDecl();
			setState(481);
			match(EQ);
			setState(482);
			expr();
			setState(490);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(483);
				match(COMMA);
				setState(484);
				varDecl();
				setState(485);
				match(EQ);
				setState(486);
				expr();
				}
				}
				setState(492);
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
			setState(493);
			match(OSCLI);
			setState(494);
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
			setState(496);
			match(PROC_NAME);
			setState(497);
			match(LPAREN);
			setState(499);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (CYAN - 64)) | (1L << (WHITE - 64)) | (1L << (BLACK - 64)) | (1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (GETSH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (LOADTYPEFACE - 130)) | (1L << (POINT - 130)) | (1L << (SCREENWIDTH - 130)) | (1L << (SCREENHEIGHT - 130)) | (1L << (TIME - 130)) | (1L << (PI - 130)) | (1L << (SQR - 130)) | (1L << (LN - 130)) | (1L << (LOG - 130)) | (1L << (EXP - 130)) | (1L << (ATN - 130)) | (1L << (TAN - 130)) | (1L << (COS - 130)) | (1L << (SIN - 130)) | (1L << (ABS - 130)) | (1L << (ACS - 130)) | (1L << (ASN - 130)) | (1L << (DEG - 130)) | (1L << (RAD - 130)) | (1L << (SGN - 130)) | (1L << (ASC - 130)) | (1L << (LEN - 130)) | (1L << (INSTR - 130)) | (1L << (VAL - 130)) | (1L << (TIMES - 130)) | (1L << (STRS - 130)) | (1L << (STRINGS - 130)) | (1L << (CHRS - 130)) | (1L << (LEFTS - 130)) | (1L << (MIDS - 130)) | (1L << (RIGHTS - 130)) | (1L << (RND - 130)) | (1L << (RND0 - 130)) | (1L << (RND1 - 130)) | (1L << (NOT - 130)) | (1L << (PLUS - 130)) | (1L << (MINUS - 130)))) != 0) || ((((_la - 203)) & ~0x3f) == 0 && ((1L << (_la - 203)) & ((1L << (LPAREN - 203)) | (1L << (STRINGLITERAL - 203)) | (1L << (FN_INTEGER - 203)) | (1L << (FN_FLOAT - 203)) | (1L << (FN_STRING - 203)) | (1L << (VARIABLE_FLOAT - 203)) | (1L << (VARIABLE_INTEGER - 203)) | (1L << (VARIABLE_STRING - 203)) | (1L << (VARIABLE_TYPE - 203)) | (1L << (HEXNUMBER - 203)) | (1L << (BINARYNUMBER - 203)) | (1L << (NUMBER - 203)) | (1L << (FLOAT - 203)))) != 0)) {
				{
				setState(498);
				functionParList();
				}
			}

			setState(501);
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
			setState(503);
			match(READ);
			setState(504);
			varDecl();
			setState(509);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(505);
				match(COMMA);
				setState(506);
				varDecl();
				}
				}
				setState(511);
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
			setState(512);
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
			setState(514);
			match(SWAP);
			setState(515);
			justVar();
			setState(516);
			match(COMMA);
			setState(517);
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
			setState(519);
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
			setState(521);
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
			setState(523);
			match(TYPE);
			setState(524);
			varName();
			setState(525);
			match(LPAREN);
			setState(526);
			justVar();
			setState(531);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(527);
				match(COMMA);
				setState(528);
				justVar();
				}
				}
				setState(533);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(534);
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
			setState(536);
			match(REPEAT);
			setState(537);
			body();
			setState(539);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(538);
				linenumber();
				}
			}

			setState(541);
			match(UNTIL);
			setState(542);
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
			setState(544);
			match(WHILE);
			setState(545);
			expr();
			setState(546);
			body();
			setState(548);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(547);
				linenumber();
				}
			}

			setState(550);
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
			setState(559);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INPUT:
				enterOuterAlt(_localctx, 1);
				{
				setState(552);
				stmtINPUT();
				}
				break;
			case PRINT:
				enterOuterAlt(_localctx, 2);
				{
				setState(553);
				stmtPRINT();
				}
				break;
			case MOUSE:
				enterOuterAlt(_localctx, 3);
				{
				setState(554);
				stmtMOUSE();
				}
				break;
			case INKEY:
				enterOuterAlt(_localctx, 4);
				{
				setState(555);
				stmtINKEY();
				}
				break;
			case INKEYS:
				enterOuterAlt(_localctx, 5);
				{
				setState(556);
				stmtINKEYS();
				}
				break;
			case GET:
				enterOuterAlt(_localctx, 6);
				{
				setState(557);
				stmtGET();
				}
				break;
			case GETS:
				enterOuterAlt(_localctx, 7);
				{
				setState(558);
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
			setState(561);
			match(INPUT);
			setState(565);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,45,_ctx) ) {
			case 1:
				{
				setState(562);
				strExpr(0);
				setState(563);
				match(COMMA);
				}
				break;
			}
			setState(567);
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
			setState(569);
			match(PRINT);
			setState(571);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,46,_ctx) ) {
			case 1:
				{
				setState(570);
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
			setState(573);
			match(MOUSE);
			setState(574);
			varNameInteger();
			setState(575);
			match(COMMA);
			setState(576);
			varNameInteger();
			setState(577);
			match(COMMA);
			setState(578);
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
			setState(580);
			match(INKEY);
			setState(581);
			match(LPAREN);
			setState(582);
			numExpr(0);
			setState(583);
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
			setState(585);
			match(INKEYS);
			setState(586);
			match(LPAREN);
			setState(587);
			numExpr(0);
			setState(588);
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
			setState(590);
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
			setState(592);
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
			setState(618);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,47,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(594);
				varDecl();
				setState(595);
				match(MULTIPLY_E);
				setState(596);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(598);
				varDecl();
				setState(599);
				match(DIVIDE_E);
				setState(600);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(602);
				varDecl();
				setState(603);
				match(PLUS_E);
				setState(604);
				numExpr(0);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(606);
				varDecl();
				setState(607);
				match(MINUS_E);
				setState(608);
				numExpr(0);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(610);
				varDecl();
				setState(611);
				match(SHL_E);
				setState(612);
				numExpr(0);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(614);
				varDecl();
				setState(615);
				match(SHR_E);
				setState(616);
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
			setState(625);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BPUTH:
				enterOuterAlt(_localctx, 1);
				{
				setState(620);
				stmtBPUTH();
				}
				break;
			case BGETH:
				enterOuterAlt(_localctx, 2);
				{
				setState(621);
				stmtBGETH();
				}
				break;
			case PTRH:
				enterOuterAlt(_localctx, 3);
				{
				setState(622);
				stmtPTRH();
				}
				break;
			case CLOSEH:
				enterOuterAlt(_localctx, 4);
				{
				setState(623);
				stmtCLOSEH();
				}
				break;
			case LOCAL:
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 5);
				{
				setState(624);
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
			setState(627);
			match(BPUTH);
			setState(628);
			numExpr(0);
			setState(629);
			match(COMMA);
			setState(630);
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
			setState(632);
			match(BGETH);
			setState(633);
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
			setState(635);
			match(PTRH);
			setState(636);
			match(LPAREN);
			setState(637);
			numExpr(0);
			setState(638);
			match(RPAREN);
			setState(639);
			match(EQ);
			setState(640);
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
			setState(642);
			match(CLOSEH);
			setState(643);
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
			setState(646);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(645);
				match(LOCAL);
				}
			}

			setState(648);
			varNameString();
			setState(649);
			match(LPAREN);
			setState(650);
			match(RPAREN);
			setState(651);
			match(EQ);
			setState(652);
			match(LISTFILES);
			setState(653);
			match(LPAREN);
			setState(654);
			strExpr(0);
			setState(655);
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
			setState(680);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CLS:
				enterOuterAlt(_localctx, 1);
				{
				setState(657);
				stmtCLS();
				}
				break;
			case COLOUR:
				enterOuterAlt(_localctx, 2);
				{
				setState(658);
				stmtCOLOUR();
				}
				break;
			case COLOURBG:
				enterOuterAlt(_localctx, 3);
				{
				setState(659);
				stmtCOLOURBG();
				}
				break;
			case GRAPHICS:
				enterOuterAlt(_localctx, 4);
				{
				setState(660);
				stmtGRAPHICS();
				}
				break;
			case FLIP:
				enterOuterAlt(_localctx, 5);
				{
				setState(661);
				stmtFLIP();
				}
				break;
			case CIRCLE:
				enterOuterAlt(_localctx, 6);
				{
				setState(662);
				stmtCIRCLE();
				}
				break;
			case LINE:
				enterOuterAlt(_localctx, 7);
				{
				setState(663);
				stmtLINE();
				}
				break;
			case RECTANGLE:
				enterOuterAlt(_localctx, 8);
				{
				setState(664);
				stmtRECTANGLE();
				}
				break;
			case TRIANGLE:
				enterOuterAlt(_localctx, 9);
				{
				setState(665);
				stmtTRIANGLE();
				}
				break;
			case PLOT:
				enterOuterAlt(_localctx, 10);
				{
				setState(666);
				stmtPLOT();
				}
				break;
			case CLIPON:
				enterOuterAlt(_localctx, 11);
				{
				setState(667);
				stmtCLIPON();
				}
				break;
			case CLIPOFF:
				enterOuterAlt(_localctx, 12);
				{
				setState(668);
				stmtCLIPOFF();
				}
				break;
			case TEXT:
				enterOuterAlt(_localctx, 13);
				{
				setState(669);
				stmtTEXT();
				}
				break;
			case TEXTRIGHT:
				enterOuterAlt(_localctx, 14);
				{
				setState(670);
				stmtTEXTRIGHT();
				}
				break;
			case TEXTCENTRE:
			case TEXTCENTER:
				enterOuterAlt(_localctx, 15);
				{
				setState(671);
				stmtTEXTCENTRE();
				}
				break;
			case SHOWFPS:
				enterOuterAlt(_localctx, 16);
				{
				setState(672);
				stmtSHOWFPS();
				}
				break;
			case RENDERFRAME:
				enterOuterAlt(_localctx, 17);
				{
				setState(673);
				stmtRENDERFRAME();
				}
				break;
			case CREATEVERTEX:
				enterOuterAlt(_localctx, 18);
				{
				setState(674);
				stmtCREATEVERTEX();
				}
				break;
			case CREATETRIANGLE:
				enterOuterAlt(_localctx, 19);
				{
				setState(675);
				stmtCREATETRIANGLE();
				}
				break;
			case TRANSLATE:
				enterOuterAlt(_localctx, 20);
				{
				setState(676);
				stmtTRANSLATE();
				}
				break;
			case ROTATE:
				enterOuterAlt(_localctx, 21);
				{
				setState(677);
				stmtROTATE();
				}
				break;
			case SCALE:
				enterOuterAlt(_localctx, 22);
				{
				setState(678);
				stmtSCALE();
				}
				break;
			case DELETEOBJECT:
				enterOuterAlt(_localctx, 23);
				{
				setState(679);
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
			setState(682);
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
			setState(693);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,51,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(684);
				match(COLOUR);
				setState(685);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(686);
				match(COLOUR);
				setState(687);
				numExpr(0);
				setState(688);
				match(COMMA);
				setState(689);
				numExpr(0);
				setState(690);
				match(COMMA);
				setState(691);
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
			setState(704);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,52,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(695);
				match(COLOURBG);
				setState(696);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(697);
				match(COLOURBG);
				setState(698);
				numExpr(0);
				setState(699);
				match(COMMA);
				setState(700);
				numExpr(0);
				setState(701);
				match(COMMA);
				setState(702);
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
			setState(720);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,53,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(706);
				match(GRAPHICS);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(707);
				match(GRAPHICS);
				setState(708);
				numExpr(0);
				setState(709);
				match(COMMA);
				setState(710);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(712);
				match(GRAPHICS);
				setState(713);
				match(BANKED);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(714);
				match(GRAPHICS);
				setState(715);
				match(BANKED);
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
			setState(722);
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
			setState(739);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,54,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(724);
				match(CIRCLE);
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
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(731);
				match(CIRCLE);
				setState(732);
				match(FILL);
				setState(733);
				numExpr(0);
				setState(734);
				match(COMMA);
				setState(735);
				numExpr(0);
				setState(736);
				match(COMMA);
				setState(737);
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
			setState(741);
			match(LINE);
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
		}
		catch (RecognitionException re) {
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
			setState(769);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,55,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(750);
				match(RECTANGLE);
				setState(751);
				numExpr(0);
				setState(752);
				match(COMMA);
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
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(759);
				match(RECTANGLE);
				setState(760);
				match(FILL);
				setState(761);
				numExpr(0);
				setState(762);
				match(COMMA);
				setState(763);
				numExpr(0);
				setState(764);
				match(COMMA);
				setState(765);
				numExpr(0);
				setState(766);
				match(COMMA);
				setState(767);
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
			setState(818);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,56,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(771);
				match(TRIANGLE);
				setState(772);
				numExpr(0);
				setState(773);
				match(COMMA);
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
				setState(781);
				match(COMMA);
				setState(782);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(784);
				match(TRIANGLE);
				setState(785);
				match(FILL);
				setState(786);
				numExpr(0);
				setState(787);
				match(COMMA);
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
				setState(795);
				match(COMMA);
				setState(796);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(798);
				match(TRIANGLE);
				setState(799);
				match(SHADED);
				setState(800);
				numExpr(0);
				setState(801);
				match(COMMA);
				setState(802);
				numExpr(0);
				setState(803);
				match(COMMA);
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
				setState(815);
				match(COMMA);
				setState(816);
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
			setState(820);
			match(PLOT);
			setState(821);
			numExpr(0);
			setState(822);
			match(COMMA);
			setState(823);
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
			setState(825);
			match(CLIPON);
			setState(826);
			numExpr(0);
			setState(827);
			match(COMMA);
			setState(828);
			numExpr(0);
			setState(829);
			match(COMMA);
			setState(830);
			numExpr(0);
			setState(831);
			match(COMMA);
			setState(832);
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
			setState(834);
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
			setState(836);
			match(TEXT);
			setState(837);
			numExpr(0);
			setState(838);
			match(COMMA);
			setState(839);
			numExpr(0);
			setState(840);
			match(COMMA);
			setState(841);
			numExpr(0);
			setState(842);
			match(COMMA);
			setState(843);
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
			setState(845);
			match(TEXTRIGHT);
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
			setState(854);
			_la = _input.LA(1);
			if ( !(_la==TEXTCENTRE || _la==TEXTCENTER) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(855);
			numExpr(0);
			setState(856);
			match(COMMA);
			setState(857);
			numExpr(0);
			setState(858);
			match(COMMA);
			setState(859);
			numExpr(0);
			setState(860);
			match(COMMA);
			setState(861);
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
			setState(863);
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
			setState(865);
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
			setState(867);
			match(CREATEVERTEX);
			setState(868);
			varNameType();
			setState(869);
			match(LPAREN);
			setState(870);
			numExpr(0);
			setState(871);
			match(RPAREN);
			setState(872);
			match(COMMA);
			setState(873);
			numExpr(0);
			setState(874);
			match(COMMA);
			setState(875);
			numExpr(0);
			setState(876);
			match(COMMA);
			setState(877);
			numExpr(0);
			setState(878);
			match(COMMA);
			setState(879);
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
			setState(881);
			match(CREATETRIANGLE);
			setState(882);
			varNameType();
			setState(883);
			match(LPAREN);
			setState(884);
			numExpr(0);
			setState(885);
			match(RPAREN);
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
			numExpr(0);
			setState(892);
			match(COMMA);
			setState(893);
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
			setState(895);
			match(TRANSLATE);
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
			setState(904);
			match(ROTATE);
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
			}
		}
		catch (RecognitionException re) {
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
			setState(913);
			match(SCALE);
			setState(914);
			numExpr(0);
			setState(915);
			match(COMMA);
			setState(916);
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
			setState(918);
			match(DELETEOBJECT);
			setState(919);
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
		enterRule(_localctx, 150, RULE_when);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(922);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(921);
				linenumber();
				}
			}

			setState(924);
			match(WHEN);
			setState(925);
			expr();
			setState(930);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(926);
				match(COMMA);
				setState(927);
				expr();
				}
				}
				setState(932);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(933);
			match(COLON);
			setState(934);
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
			setState(936);
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
			setState(940);
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
				setState(938);
				number();
				}
				break;
			case STRINGLITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(939);
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
			setState(945);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,60,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(942);
				numVar();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(943);
				strVar();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(944);
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
			setState(947);
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
			setState(999);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,65,_ctx) ) {
			case 1:
				_localctx = new NumVarFloatArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(949);
				varName();
				setState(950);
				match(LPAREN);
				setState(951);
				numExpr(0);
				setState(954);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(952);
					match(COMMA);
					setState(953);
					numExpr(0);
					}
				}

				setState(956);
				match(RPAREN);
				}
				break;
			case 2:
				_localctx = new NumVarIntegerArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(958);
				varNameInteger();
				setState(959);
				match(LPAREN);
				setState(960);
				numExpr(0);
				setState(963);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(961);
					match(COMMA);
					setState(962);
					numExpr(0);
					}
				}

				setState(965);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new NumVarIntegerFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(967);
				typeVar();
				setState(968);
				match(LPAREN);
				setState(969);
				numExpr(0);
				setState(970);
				match(RPAREN);
				setState(971);
				varNameInteger();
				}
				break;
			case 4:
				_localctx = new NumVarFloatFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(973);
				typeVar();
				setState(974);
				match(LPAREN);
				setState(975);
				numExpr(0);
				setState(976);
				match(RPAREN);
				setState(977);
				varName();
				}
				break;
			case 5:
				_localctx = new NumVarFloatFNContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(979);
				match(FN_FLOAT);
				setState(980);
				match(LPAREN);
				setState(982);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (CYAN - 64)) | (1L << (WHITE - 64)) | (1L << (BLACK - 64)) | (1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (GETSH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (LOADTYPEFACE - 130)) | (1L << (POINT - 130)) | (1L << (SCREENWIDTH - 130)) | (1L << (SCREENHEIGHT - 130)) | (1L << (TIME - 130)) | (1L << (PI - 130)) | (1L << (SQR - 130)) | (1L << (LN - 130)) | (1L << (LOG - 130)) | (1L << (EXP - 130)) | (1L << (ATN - 130)) | (1L << (TAN - 130)) | (1L << (COS - 130)) | (1L << (SIN - 130)) | (1L << (ABS - 130)) | (1L << (ACS - 130)) | (1L << (ASN - 130)) | (1L << (DEG - 130)) | (1L << (RAD - 130)) | (1L << (SGN - 130)) | (1L << (ASC - 130)) | (1L << (LEN - 130)) | (1L << (INSTR - 130)) | (1L << (VAL - 130)) | (1L << (TIMES - 130)) | (1L << (STRS - 130)) | (1L << (STRINGS - 130)) | (1L << (CHRS - 130)) | (1L << (LEFTS - 130)) | (1L << (MIDS - 130)) | (1L << (RIGHTS - 130)) | (1L << (RND - 130)) | (1L << (RND0 - 130)) | (1L << (RND1 - 130)) | (1L << (NOT - 130)) | (1L << (PLUS - 130)) | (1L << (MINUS - 130)))) != 0) || ((((_la - 203)) & ~0x3f) == 0 && ((1L << (_la - 203)) & ((1L << (LPAREN - 203)) | (1L << (STRINGLITERAL - 203)) | (1L << (FN_INTEGER - 203)) | (1L << (FN_FLOAT - 203)) | (1L << (FN_STRING - 203)) | (1L << (VARIABLE_FLOAT - 203)) | (1L << (VARIABLE_INTEGER - 203)) | (1L << (VARIABLE_STRING - 203)) | (1L << (VARIABLE_TYPE - 203)) | (1L << (HEXNUMBER - 203)) | (1L << (BINARYNUMBER - 203)) | (1L << (NUMBER - 203)) | (1L << (FLOAT - 203)))) != 0)) {
					{
					setState(981);
					functionParList();
					}
				}

				setState(984);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new NumVarIntegerFNContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(985);
				match(FN_INTEGER);
				setState(986);
				match(LPAREN);
				setState(988);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (CYAN - 64)) | (1L << (WHITE - 64)) | (1L << (BLACK - 64)) | (1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (GETSH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (LOADTYPEFACE - 130)) | (1L << (POINT - 130)) | (1L << (SCREENWIDTH - 130)) | (1L << (SCREENHEIGHT - 130)) | (1L << (TIME - 130)) | (1L << (PI - 130)) | (1L << (SQR - 130)) | (1L << (LN - 130)) | (1L << (LOG - 130)) | (1L << (EXP - 130)) | (1L << (ATN - 130)) | (1L << (TAN - 130)) | (1L << (COS - 130)) | (1L << (SIN - 130)) | (1L << (ABS - 130)) | (1L << (ACS - 130)) | (1L << (ASN - 130)) | (1L << (DEG - 130)) | (1L << (RAD - 130)) | (1L << (SGN - 130)) | (1L << (ASC - 130)) | (1L << (LEN - 130)) | (1L << (INSTR - 130)) | (1L << (VAL - 130)) | (1L << (TIMES - 130)) | (1L << (STRS - 130)) | (1L << (STRINGS - 130)) | (1L << (CHRS - 130)) | (1L << (LEFTS - 130)) | (1L << (MIDS - 130)) | (1L << (RIGHTS - 130)) | (1L << (RND - 130)) | (1L << (RND0 - 130)) | (1L << (RND1 - 130)) | (1L << (NOT - 130)) | (1L << (PLUS - 130)) | (1L << (MINUS - 130)))) != 0) || ((((_la - 203)) & ~0x3f) == 0 && ((1L << (_la - 203)) & ((1L << (LPAREN - 203)) | (1L << (STRINGLITERAL - 203)) | (1L << (FN_INTEGER - 203)) | (1L << (FN_FLOAT - 203)) | (1L << (FN_STRING - 203)) | (1L << (VARIABLE_FLOAT - 203)) | (1L << (VARIABLE_INTEGER - 203)) | (1L << (VARIABLE_STRING - 203)) | (1L << (VARIABLE_TYPE - 203)) | (1L << (HEXNUMBER - 203)) | (1L << (BINARYNUMBER - 203)) | (1L << (NUMBER - 203)) | (1L << (FLOAT - 203)))) != 0)) {
					{
					setState(987);
					functionParList();
					}
				}

				setState(990);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new NumVarFloatContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(991);
				varName();
				}
				break;
			case 8:
				_localctx = new NumVarIntegerContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(992);
				varNameInteger();
				}
				break;
			case 9:
				_localctx = new NumVarFloatFieldContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(993);
				typeVar();
				setState(994);
				varName();
				}
				break;
			case 10:
				_localctx = new NumVarIntegerFieldContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(996);
				typeVar();
				setState(997);
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
			setState(1026);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,68,_ctx) ) {
			case 1:
				_localctx = new NumVarStringArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1001);
				varNameString();
				setState(1002);
				match(LPAREN);
				setState(1003);
				numExpr(0);
				setState(1006);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(1004);
					match(COMMA);
					setState(1005);
					numExpr(0);
					}
				}

				setState(1008);
				match(RPAREN);
				}
				break;
			case 2:
				_localctx = new NumVarStringFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1010);
				typeVar();
				setState(1011);
				match(LPAREN);
				setState(1012);
				numExpr(0);
				setState(1013);
				match(RPAREN);
				setState(1014);
				varNameString();
				}
				break;
			case 3:
				_localctx = new NumVarStringContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1016);
				varNameString();
				}
				break;
			case 4:
				_localctx = new NumVarStringFieldContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1017);
				typeVar();
				setState(1018);
				varNameString();
				}
				break;
			case 5:
				_localctx = new NumVarStringFNContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1020);
				match(FN_STRING);
				setState(1021);
				match(LPAREN);
				setState(1023);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (CYAN - 64)) | (1L << (WHITE - 64)) | (1L << (BLACK - 64)) | (1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (GETSH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (LOADTYPEFACE - 130)) | (1L << (POINT - 130)) | (1L << (SCREENWIDTH - 130)) | (1L << (SCREENHEIGHT - 130)) | (1L << (TIME - 130)) | (1L << (PI - 130)) | (1L << (SQR - 130)) | (1L << (LN - 130)) | (1L << (LOG - 130)) | (1L << (EXP - 130)) | (1L << (ATN - 130)) | (1L << (TAN - 130)) | (1L << (COS - 130)) | (1L << (SIN - 130)) | (1L << (ABS - 130)) | (1L << (ACS - 130)) | (1L << (ASN - 130)) | (1L << (DEG - 130)) | (1L << (RAD - 130)) | (1L << (SGN - 130)) | (1L << (ASC - 130)) | (1L << (LEN - 130)) | (1L << (INSTR - 130)) | (1L << (VAL - 130)) | (1L << (TIMES - 130)) | (1L << (STRS - 130)) | (1L << (STRINGS - 130)) | (1L << (CHRS - 130)) | (1L << (LEFTS - 130)) | (1L << (MIDS - 130)) | (1L << (RIGHTS - 130)) | (1L << (RND - 130)) | (1L << (RND0 - 130)) | (1L << (RND1 - 130)) | (1L << (NOT - 130)) | (1L << (PLUS - 130)) | (1L << (MINUS - 130)))) != 0) || ((((_la - 203)) & ~0x3f) == 0 && ((1L << (_la - 203)) & ((1L << (LPAREN - 203)) | (1L << (STRINGLITERAL - 203)) | (1L << (FN_INTEGER - 203)) | (1L << (FN_FLOAT - 203)) | (1L << (FN_STRING - 203)) | (1L << (VARIABLE_FLOAT - 203)) | (1L << (VARIABLE_INTEGER - 203)) | (1L << (VARIABLE_STRING - 203)) | (1L << (VARIABLE_TYPE - 203)) | (1L << (HEXNUMBER - 203)) | (1L << (BINARYNUMBER - 203)) | (1L << (NUMBER - 203)) | (1L << (FLOAT - 203)))) != 0)) {
					{
					setState(1022);
					functionParList();
					}
				}

				setState(1025);
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
			setState(1031);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(1028);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(1029);
				varNameInteger();
				}
				break;
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(1030);
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
			setState(1035);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(1033);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(1034);
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
			setState(1037);
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
			setState(1039);
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
			setState(1041);
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
			setState(1043);
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
			setState(1084);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,73,_ctx) ) {
			case 1:
				_localctx = new VarDeclIndContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1045);
				justVar();
				}
				break;
			case 2:
				_localctx = new VarDeclArrayedContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1046);
				justVar();
				setState(1057);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==LPAREN) {
					{
					{
					setState(1047);
					match(LPAREN);
					setState(1048);
					numExpr(0);
					setState(1051);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==COMMA) {
						{
						setState(1049);
						match(COMMA);
						setState(1050);
						numExpr(0);
						}
					}

					setState(1053);
					match(RPAREN);
					}
					}
					setState(1059);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 3:
				_localctx = new VarDeclTypeVarContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1060);
				typeVar();
				setState(1061);
				varName();
				}
				break;
			case 4:
				_localctx = new VarDeclTypeVarContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1063);
				typeVar();
				setState(1064);
				varNameInteger();
				}
				break;
			case 5:
				_localctx = new VarDeclTypeVarArrayedContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1066);
				typeVar();
				setState(1067);
				match(LPAREN);
				setState(1068);
				numExpr(0);
				setState(1069);
				match(RPAREN);
				setState(1070);
				varName();
				}
				break;
			case 6:
				_localctx = new VarDeclTypeVarArrayedContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1072);
				typeVar();
				setState(1073);
				match(LPAREN);
				setState(1074);
				numExpr(0);
				setState(1075);
				match(RPAREN);
				setState(1076);
				varNameInteger();
				}
				break;
			case 7:
				_localctx = new VarDeclTypeContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1078);
				typeVar();
				}
				break;
			case 8:
				_localctx = new VarDeclTypeArrayedContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1079);
				typeVar();
				setState(1080);
				match(LPAREN);
				setState(1081);
				numExpr(0);
				setState(1082);
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
			setState(1105);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
			case VARIABLE_INTEGER:
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 1);
				{
				setState(1086);
				justVar();
				setState(1087);
				match(LPAREN);
				setState(1088);
				numExpr(0);
				setState(1093);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(1089);
					match(COMMA);
					setState(1090);
					numExpr(0);
					}
					}
					setState(1095);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1096);
				match(RPAREN);
				}
				break;
			case VARIABLE_TYPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(1098);
				typeVar();
				setState(1099);
				match(LPAREN);
				setState(1100);
				numExpr(0);
				setState(1101);
				match(COMMA);
				setState(1102);
				varName();
				setState(1103);
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
			setState(1107);
			varDecl();
			setState(1112);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1108);
				match(COMMA);
				setState(1109);
				varDecl();
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
		enterRule(_localctx, 182, RULE_functionVar);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1116);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN) {
				{
				setState(1115);
				match(RETURN);
				}
			}

			setState(1118);
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
		enterRule(_localctx, 184, RULE_functionVarList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1120);
			functionVar();
			setState(1125);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1121);
				match(COMMA);
				setState(1122);
				functionVar();
				}
				}
				setState(1127);
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
		enterRule(_localctx, 186, RULE_functionParList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1128);
			expr();
			setState(1133);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1129);
				match(COMMA);
				setState(1130);
				expr();
				}
				}
				setState(1135);
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
		enterRule(_localctx, 188, RULE_exprList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1136);
			expr();
			setState(1141);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1137);
				match(COMMA);
				setState(1138);
				expr();
				}
				}
				setState(1143);
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
		enterRule(_localctx, 190, RULE_printListItem);
		int _la;
		try {
			setState(1155);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,82,_ctx) ) {
			case 1:
				_localctx = new PrintListExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1145);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TILDE) {
					{
					setState(1144);
					match(TILDE);
					}
				}

				setState(1147);
				expr();
				}
				break;
			case 2:
				_localctx = new PrintListSPCPContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1148);
				match(SPC);
				setState(1149);
				match(LPAREN);
				setState(1150);
				numExpr(0);
				setState(1151);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new PrintListSPCContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1153);
				match(SPC);
				setState(1154);
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
		enterRule(_localctx, 192, RULE_printListTick);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1158); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(1157);
				match(TICK);
				}
				}
				setState(1160); 
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
		enterRule(_localctx, 194, RULE_printListSeparator);
		try {
			setState(1165);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COMMA:
				enterOuterAlt(_localctx, 1);
				{
				setState(1162);
				match(COMMA);
				}
				break;
			case SEMICOLON:
				enterOuterAlt(_localctx, 2);
				{
				setState(1163);
				match(SEMICOLON);
				}
				break;
			case TICK:
				enterOuterAlt(_localctx, 3);
				{
				setState(1164);
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
		enterRule(_localctx, 196, RULE_printList);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1168);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TICK) {
				{
				setState(1167);
				printListTick();
				}
			}

			setState(1171);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(1170);
				((PrintListContext)_localctx).s1 = match(SEMICOLON);
				}
			}

			setState(1173);
			printListItem();
			setState(1179);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,87,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1174);
					printListSeparator();
					setState(1175);
					printListItem();
					}
					} 
				}
				setState(1181);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,87,_ctx);
			}
			setState(1183);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(1182);
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
		enterRule(_localctx, 198, RULE_expr);
		try {
			setState(1187);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,89,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1185);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1186);
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
		enterRule(_localctx, 200, RULE_number);
		try {
			setState(1195);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,90,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1189);
				numberInteger();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1190);
				numberFloat();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1191);
				numberHex();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1192);
				numberBinary();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1193);
				numColours();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1194);
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
		enterRule(_localctx, 202, RULE_numberInteger);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1198);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(1197);
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

			setState(1200);
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
		enterRule(_localctx, 204, RULE_numberHex);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1202);
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
		enterRule(_localctx, 206, RULE_numberBinary);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1204);
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
		enterRule(_localctx, 208, RULE_numberFloat);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1207);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(1206);
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

			setState(1209);
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
		enterRule(_localctx, 210, RULE_strFunc);
		try {
			setState(1270);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,93,_ctx) ) {
			case 1:
				_localctx = new StrFuncTIMESContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1211);
				match(TIMES);
				}
				break;
			case 2:
				_localctx = new StrFuncCHRSContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1212);
				match(CHRS);
				setState(1213);
				match(LPAREN);
				setState(1214);
				numExpr(0);
				setState(1215);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new StrFuncLEFTSContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1217);
				match(LEFTS);
				setState(1218);
				match(LPAREN);
				setState(1219);
				strExpr(0);
				setState(1220);
				match(COMMA);
				setState(1221);
				numExpr(0);
				setState(1222);
				match(RPAREN);
				}
				break;
			case 4:
				_localctx = new StrFuncMIDS3Context(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1224);
				match(MIDS);
				setState(1225);
				match(LPAREN);
				setState(1226);
				strExpr(0);
				setState(1227);
				match(COMMA);
				setState(1228);
				numExpr(0);
				setState(1229);
				match(COMMA);
				setState(1230);
				numExpr(0);
				setState(1231);
				match(RPAREN);
				}
				break;
			case 5:
				_localctx = new StrFuncMIDS2Context(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1233);
				match(MIDS);
				setState(1234);
				match(LPAREN);
				setState(1235);
				strExpr(0);
				setState(1236);
				match(COMMA);
				setState(1237);
				numExpr(0);
				setState(1238);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new StrFuncRIGHTSContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1240);
				match(RIGHTS);
				setState(1241);
				match(LPAREN);
				setState(1242);
				strExpr(0);
				setState(1243);
				match(COMMA);
				setState(1244);
				numExpr(0);
				setState(1245);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new StrFuncSTRSContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1247);
				match(STRS);
				setState(1248);
				match(LPAREN);
				setState(1249);
				numExpr(0);
				setState(1250);
				match(RPAREN);
				}
				break;
			case 8:
				_localctx = new StrFuncSTRSHEXContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1252);
				match(STRS);
				setState(1253);
				match(TILDE);
				setState(1254);
				match(LPAREN);
				setState(1255);
				numExpr(0);
				setState(1256);
				match(RPAREN);
				}
				break;
			case 9:
				_localctx = new StrFuncSTRINGSContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(1258);
				match(STRINGS);
				setState(1259);
				match(LPAREN);
				setState(1260);
				numExpr(0);
				setState(1261);
				match(COMMA);
				setState(1262);
				strExpr(0);
				setState(1263);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new StrFuncINKEYSContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(1265);
				match(INKEYS);
				setState(1266);
				numExpr(0);
				}
				break;
			case 11:
				_localctx = new StrFuncGETSContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(1267);
				match(GETS);
				}
				break;
			case 12:
				_localctx = new StrFuncGETSHContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(1268);
				match(GETSH);
				setState(1269);
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
		enterRule(_localctx, 212, RULE_string);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1272);
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
		int _startState = 214;
		enterRecursionRule(_localctx, 214, RULE_strExpr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1282);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LPAREN:
				{
				setState(1275);
				match(LPAREN);
				setState(1276);
				strExpr(0);
				setState(1277);
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
				setState(1279);
				strFunc();
				}
				break;
			case FN_STRING:
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(1280);
				strVar();
				}
				break;
			case STRINGLITERAL:
				{
				setState(1281);
				string();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(1289);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,95,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StrExprContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_strExpr);
					setState(1284);
					if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
					setState(1285);
					match(PLUS);
					setState(1286);
					strExpr(4);
					}
					} 
				}
				setState(1291);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,95,_ctx);
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
		enterRule(_localctx, 216, RULE_numFunc);
		try {
			setState(1487);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,97,_ctx) ) {
			case 1:
				_localctx = new NumFuncPIContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1292);
				match(PI);
				}
				break;
			case 2:
				_localctx = new NumFuncFALSEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1293);
				match(FALSE);
				}
				break;
			case 3:
				_localctx = new NumFuncTRUEContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1294);
				match(TRUE);
				}
				break;
			case 4:
				_localctx = new NumFuncTIMEContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1295);
				match(TIME);
				}
				break;
			case 5:
				_localctx = new NumFuncRNDRANGEContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1296);
				match(RND);
				setState(1297);
				match(LPAREN);
				setState(1298);
				numExpr(0);
				setState(1299);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new NumFuncRNDContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1301);
				match(RND);
				}
				break;
			case 7:
				_localctx = new NumFuncRND0Context(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1302);
				match(RND0);
				}
				break;
			case 8:
				_localctx = new NumFuncRND1Context(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1303);
				match(RND1);
				}
				break;
			case 9:
				_localctx = new NumFuncLNContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(1304);
				match(LN);
				setState(1305);
				match(LPAREN);
				setState(1306);
				numExpr(0);
				setState(1307);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new NumFuncLOGContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(1309);
				match(LOG);
				setState(1310);
				match(LPAREN);
				setState(1311);
				numExpr(0);
				setState(1312);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new NumFuncEXPContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(1314);
				match(EXP);
				setState(1315);
				match(LPAREN);
				setState(1316);
				numExpr(0);
				setState(1317);
				match(RPAREN);
				}
				break;
			case 12:
				_localctx = new NumFuncATNContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(1319);
				match(ATN);
				setState(1320);
				match(LPAREN);
				setState(1321);
				numExpr(0);
				setState(1322);
				match(RPAREN);
				}
				break;
			case 13:
				_localctx = new NumFuncTANContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(1324);
				match(TAN);
				setState(1325);
				match(LPAREN);
				setState(1326);
				numExpr(0);
				setState(1327);
				match(RPAREN);
				}
				break;
			case 14:
				_localctx = new NumFuncCOSContext(_localctx);
				enterOuterAlt(_localctx, 14);
				{
				setState(1329);
				match(COS);
				setState(1330);
				match(LPAREN);
				setState(1331);
				numExpr(0);
				setState(1332);
				match(RPAREN);
				}
				break;
			case 15:
				_localctx = new NumFuncSINContext(_localctx);
				enterOuterAlt(_localctx, 15);
				{
				setState(1334);
				match(SIN);
				setState(1335);
				match(LPAREN);
				setState(1336);
				numExpr(0);
				setState(1337);
				match(RPAREN);
				}
				break;
			case 16:
				_localctx = new NumFuncABSContext(_localctx);
				enterOuterAlt(_localctx, 16);
				{
				setState(1339);
				match(ABS);
				setState(1340);
				match(LPAREN);
				setState(1341);
				numExpr(0);
				setState(1342);
				match(RPAREN);
				}
				break;
			case 17:
				_localctx = new NumFuncACSContext(_localctx);
				enterOuterAlt(_localctx, 17);
				{
				setState(1344);
				match(ACS);
				setState(1345);
				match(LPAREN);
				setState(1346);
				numExpr(0);
				setState(1347);
				match(RPAREN);
				}
				break;
			case 18:
				_localctx = new NumFuncASNContext(_localctx);
				enterOuterAlt(_localctx, 18);
				{
				setState(1349);
				match(ASN);
				setState(1350);
				match(LPAREN);
				setState(1351);
				numExpr(0);
				setState(1352);
				match(RPAREN);
				}
				break;
			case 19:
				_localctx = new NumFuncDEGContext(_localctx);
				enterOuterAlt(_localctx, 19);
				{
				setState(1354);
				match(DEG);
				setState(1355);
				match(LPAREN);
				setState(1356);
				numExpr(0);
				setState(1357);
				match(RPAREN);
				}
				break;
			case 20:
				_localctx = new NumFuncRADContext(_localctx);
				enterOuterAlt(_localctx, 20);
				{
				setState(1359);
				match(RAD);
				setState(1360);
				match(LPAREN);
				setState(1361);
				numExpr(0);
				setState(1362);
				match(RPAREN);
				}
				break;
			case 21:
				_localctx = new NumFuncSQRContext(_localctx);
				enterOuterAlt(_localctx, 21);
				{
				setState(1364);
				match(SQR);
				setState(1365);
				match(LPAREN);
				setState(1366);
				numExpr(0);
				setState(1367);
				match(RPAREN);
				}
				break;
			case 22:
				_localctx = new NumFuncSGNContext(_localctx);
				enterOuterAlt(_localctx, 22);
				{
				setState(1369);
				match(SGN);
				setState(1370);
				match(LPAREN);
				setState(1371);
				numExpr(0);
				setState(1372);
				match(RPAREN);
				}
				break;
			case 23:
				_localctx = new NumFuncGETContext(_localctx);
				enterOuterAlt(_localctx, 23);
				{
				setState(1374);
				match(GET);
				}
				break;
			case 24:
				_localctx = new NumFuncINKEYContext(_localctx);
				enterOuterAlt(_localctx, 24);
				{
				setState(1375);
				match(INKEY);
				setState(1376);
				match(LPAREN);
				setState(1377);
				numExpr(0);
				setState(1378);
				match(RPAREN);
				}
				break;
			case 25:
				_localctx = new NumFuncINTContext(_localctx);
				enterOuterAlt(_localctx, 25);
				{
				setState(1380);
				match(INT);
				setState(1381);
				match(LPAREN);
				setState(1382);
				numExpr(0);
				setState(1383);
				match(RPAREN);
				}
				break;
			case 26:
				_localctx = new NumFuncFLOATContext(_localctx);
				enterOuterAlt(_localctx, 26);
				{
				setState(1385);
				match(FLOAT_TOKEN);
				setState(1386);
				match(LPAREN);
				setState(1387);
				numExpr(0);
				setState(1388);
				match(RPAREN);
				}
				break;
			case 27:
				_localctx = new NumFuncSCREENWIDTHContext(_localctx);
				enterOuterAlt(_localctx, 27);
				{
				setState(1390);
				match(SCREENWIDTH);
				}
				break;
			case 28:
				_localctx = new NumFuncSCREENHEIGHTContext(_localctx);
				enterOuterAlt(_localctx, 28);
				{
				setState(1391);
				match(SCREENHEIGHT);
				}
				break;
			case 29:
				_localctx = new NumFuncPOINTContext(_localctx);
				enterOuterAlt(_localctx, 29);
				{
				setState(1392);
				match(POINT);
				setState(1393);
				match(LPAREN);
				setState(1394);
				numExpr(0);
				setState(1395);
				match(COMMA);
				setState(1396);
				numExpr(0);
				setState(1397);
				match(RPAREN);
				}
				break;
			case 30:
				_localctx = new NumFuncCOLOURContext(_localctx);
				enterOuterAlt(_localctx, 30);
				{
				setState(1399);
				match(COLOUR);
				setState(1400);
				match(LPAREN);
				setState(1401);
				numExpr(0);
				setState(1402);
				match(COMMA);
				setState(1403);
				numExpr(0);
				setState(1404);
				match(COMMA);
				setState(1405);
				numExpr(0);
				setState(1406);
				match(RPAREN);
				}
				break;
			case 31:
				_localctx = new NumFuncLOADTYPEFACEContext(_localctx);
				enterOuterAlt(_localctx, 31);
				{
				setState(1408);
				match(LOADTYPEFACE);
				setState(1409);
				strExpr(0);
				}
				break;
			case 32:
				_localctx = new NumFuncCREATEFONTContext(_localctx);
				enterOuterAlt(_localctx, 32);
				{
				setState(1410);
				match(CREATEFONT);
				setState(1411);
				numExpr(0);
				setState(1412);
				match(COMMA);
				setState(1413);
				numExpr(0);
				}
				break;
			case 33:
				_localctx = new NumFuncSHAPEContext(_localctx);
				enterOuterAlt(_localctx, 33);
				{
				setState(1415);
				match(CREATESHAPE);
				setState(1416);
				varNameType();
				setState(1417);
				match(COMMA);
				setState(1418);
				varNameType();
				}
				break;
			case 34:
				_localctx = new NumFuncOBJECTContext(_localctx);
				enterOuterAlt(_localctx, 34);
				{
				setState(1420);
				match(CREATEOBJECT);
				setState(1421);
				numExpr(0);
				setState(1422);
				match(COMMA);
				setState(1423);
				numExpr(0);
				setState(1424);
				match(COMMA);
				setState(1425);
				numExpr(0);
				setState(1426);
				match(COMMA);
				setState(1427);
				numExpr(0);
				setState(1428);
				match(COMMA);
				setState(1429);
				numExpr(0);
				setState(1430);
				match(COMMA);
				setState(1431);
				numExpr(0);
				setState(1432);
				match(COMMA);
				setState(1433);
				numExpr(0);
				setState(1434);
				match(COMMA);
				setState(1435);
				numExpr(0);
				setState(1436);
				match(COMMA);
				setState(1442);
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
					setState(1437);
					numExpr(0);
					}
					break;
				case SOLID:
					{
					setState(1438);
					match(SOLID);
					}
					break;
				case WIREFRAME:
					{
					setState(1439);
					match(WIREFRAME);
					}
					break;
				case SHADED:
					{
					setState(1440);
					match(SHADED);
					}
					break;
				case FILLEDWIREFRAME:
					{
					setState(1441);
					match(FILLEDWIREFRAME);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			case 35:
				_localctx = new NumFuncBGETHContext(_localctx);
				enterOuterAlt(_localctx, 35);
				{
				setState(1444);
				match(BGETH);
				setState(1445);
				numExpr(0);
				}
				break;
			case 36:
				_localctx = new NumFuncEOFHContext(_localctx);
				enterOuterAlt(_localctx, 36);
				{
				setState(1446);
				match(EOFH);
				setState(1447);
				numExpr(0);
				}
				break;
			case 37:
				_localctx = new NumFuncOPENINContext(_localctx);
				enterOuterAlt(_localctx, 37);
				{
				setState(1448);
				match(OPENIN);
				setState(1449);
				match(LPAREN);
				setState(1450);
				strExpr(0);
				setState(1451);
				match(RPAREN);
				}
				break;
			case 38:
				_localctx = new NumFuncOPENOUTContext(_localctx);
				enterOuterAlt(_localctx, 38);
				{
				setState(1453);
				match(OPENOUT);
				setState(1454);
				match(LPAREN);
				setState(1455);
				strExpr(0);
				setState(1456);
				match(RPAREN);
				}
				break;
			case 39:
				_localctx = new NumFuncOPENUPContext(_localctx);
				enterOuterAlt(_localctx, 39);
				{
				setState(1458);
				match(OPENUP);
				setState(1459);
				match(LPAREN);
				setState(1460);
				strExpr(0);
				setState(1461);
				match(RPAREN);
				}
				break;
			case 40:
				_localctx = new NumFuncPTRContext(_localctx);
				enterOuterAlt(_localctx, 40);
				{
				setState(1463);
				match(PTRH);
				setState(1464);
				numExpr(0);
				}
				break;
			case 41:
				_localctx = new NumFuncASCContext(_localctx);
				enterOuterAlt(_localctx, 41);
				{
				setState(1465);
				match(ASC);
				setState(1466);
				strExpr(0);
				}
				break;
			case 42:
				_localctx = new NumFuncLENContext(_localctx);
				enterOuterAlt(_localctx, 42);
				{
				setState(1467);
				match(LEN);
				setState(1468);
				strExpr(0);
				}
				break;
			case 43:
				_localctx = new NumFuncINSTR2Context(_localctx);
				enterOuterAlt(_localctx, 43);
				{
				setState(1469);
				match(INSTR);
				setState(1470);
				match(LPAREN);
				setState(1471);
				strExpr(0);
				setState(1472);
				match(COMMA);
				setState(1473);
				strExpr(0);
				setState(1474);
				match(RPAREN);
				}
				break;
			case 44:
				_localctx = new NumFuncINSTR3Context(_localctx);
				enterOuterAlt(_localctx, 44);
				{
				setState(1476);
				match(INSTR);
				setState(1477);
				match(LPAREN);
				setState(1478);
				strExpr(0);
				setState(1479);
				match(COMMA);
				setState(1480);
				strExpr(0);
				setState(1481);
				match(COMMA);
				setState(1482);
				numExpr(0);
				setState(1483);
				match(RPAREN);
				}
				break;
			case 45:
				_localctx = new NumFuncVALContext(_localctx);
				enterOuterAlt(_localctx, 45);
				{
				setState(1485);
				match(VAL);
				setState(1486);
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
		int _startState = 218;
		enterRecursionRule(_localctx, 218, RULE_numExpr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1512);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,98,_ctx) ) {
			case 1:
				{
				_localctx = new NumExprVarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(1490);
				numVar();
				}
				break;
			case 2:
				{
				_localctx = new NumExprNumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1491);
				number();
				}
				break;
			case 3:
				{
				_localctx = new NumExprNestedContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1492);
				match(LPAREN);
				setState(1493);
				numExpr(0);
				setState(1494);
				match(RPAREN);
				}
				break;
			case 4:
				{
				_localctx = new NumExprUnaryContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1496);
				match(MINUS);
				setState(1497);
				numExpr(12);
				}
				break;
			case 5:
				{
				_localctx = new NumExprNOTContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1498);
				match(NOT);
				setState(1499);
				numExpr(11);
				}
				break;
			case 6:
				{
				_localctx = new NumExprFuncContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1500);
				numFunc();
				}
				break;
			case 7:
				{
				_localctx = new NumExprStrRelopContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1501);
				strExpr(0);
				setState(1502);
				_la = _input.LA(1);
				if ( !(((((_la - 171)) & ~0x3f) == 0 && ((1L << (_la - 171)) & ((1L << (EQ - 171)) | (1L << (NE - 171)) | (1L << (GT - 171)) | (1L << (GE - 171)) | (1L << (LT - 171)) | (1L << (LE - 171)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(1503);
				strExpr(0);
				}
				break;
			case 8:
				{
				_localctx = new NumFuncArraySizeContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1505);
				match(LEN);
				setState(1506);
				match(LPAREN);
				setState(1507);
				justVar();
				setState(1508);
				match(LPAREN);
				setState(1509);
				match(RPAREN);
				setState(1510);
				match(RPAREN);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1537);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,100,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1535);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,99,_ctx) ) {
					case 1:
						{
						_localctx = new NumExprHatContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1514);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(1515);
						match(HAT);
						setState(1516);
						numExpr(9);
						}
						break;
					case 2:
						{
						_localctx = new NumExprMultiplyDivideContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1517);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(1518);
						_la = _input.LA(1);
						if ( !(_la==MULTIPLY || _la==DIVIDE) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1519);
						numExpr(9);
						}
						break;
					case 3:
						{
						_localctx = new NumExprDIVMODContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1520);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(1521);
						_la = _input.LA(1);
						if ( !(_la==MOD || _la==DIV) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1522);
						numExpr(8);
						}
						break;
					case 4:
						{
						_localctx = new NumExprAddSubtractContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1523);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(1524);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1525);
						numExpr(7);
						}
						break;
					case 5:
						{
						_localctx = new NumExprSHLSHRContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1526);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(1527);
						_la = _input.LA(1);
						if ( !(_la==SHL || _la==SHR) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1528);
						numExpr(6);
						}
						break;
					case 6:
						{
						_localctx = new NumExprNumRelopContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1529);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(1530);
						_la = _input.LA(1);
						if ( !(((((_la - 171)) & ~0x3f) == 0 && ((1L << (_la - 171)) & ((1L << (EQ - 171)) | (1L << (NE - 171)) | (1L << (GT - 171)) | (1L << (GE - 171)) | (1L << (LT - 171)) | (1L << (LE - 171)))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1531);
						numExpr(5);
						}
						break;
					case 7:
						{
						_localctx = new NumExprANDOREORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1532);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1533);
						_la = _input.LA(1);
						if ( !(((((_la - 178)) & ~0x3f) == 0 && ((1L << (_la - 178)) & ((1L << (AND - 178)) | (1L << (OR - 178)) | (1L << (EOR - 178)))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1534);
						numExpr(3);
						}
						break;
					}
					} 
				}
				setState(1539);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,100,_ctx);
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
		enterRule(_localctx, 220, RULE_numColours);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1540);
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
		enterRule(_localctx, 222, RULE_defaultFonts);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1542);
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
		case 107:
			return strExpr_sempred((StrExprContext)_localctx, predIndex);
		case 109:
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00e0\u060b\4\2\t"+
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
		"k\4l\tl\4m\tm\4n\tn\4o\to\4p\tp\4q\tq\3\2\7\2\u00e4\n\2\f\2\16\2\u00e7"+
		"\13\2\3\2\3\2\3\3\3\3\5\3\u00ed\n\3\3\3\5\3\u00f0\n\3\3\3\3\3\5\3\u00f4"+
		"\n\3\3\3\6\3\u00f7\n\3\r\3\16\3\u00f8\3\3\5\3\u00fc\n\3\3\3\3\3\5\3\u0100"+
		"\n\3\3\4\6\4\u0103\n\4\r\4\16\4\u0104\3\5\7\5\u0108\n\5\f\5\16\5\u010b"+
		"\13\5\3\6\7\6\u010e\n\6\f\6\16\6\u0111\13\6\3\6\7\6\u0114\n\6\f\6\16\6"+
		"\u0117\13\6\5\6\u0119\n\6\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\b\5\b\u0123\n"+
		"\b\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t"+
		"\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\5\t\u0141\n\t\3\n\3\n\3\13"+
		"\3\13\3\13\3\13\3\13\6\13\u014a\n\13\r\13\16\13\u014b\3\13\5\13\u014f"+
		"\n\13\3\13\3\13\5\13\u0153\n\13\3\13\5\13\u0156\n\13\3\13\3\13\3\f\3\f"+
		"\3\f\3\r\3\r\3\r\3\r\7\r\u0161\n\r\f\r\16\r\u0164\13\r\3\16\5\16\u0167"+
		"\n\16\3\16\3\16\3\16\3\16\7\16\u016d\n\16\f\16\16\16\u0170\13\16\3\17"+
		"\3\17\3\20\3\20\5\20\u0176\n\20\3\21\3\21\3\21\3\21\5\21\u017c\n\21\3"+
		"\21\3\21\3\21\5\21\u0181\n\21\3\21\3\21\3\22\3\22\3\22\3\22\5\22\u0189"+
		"\n\22\3\22\3\22\3\22\5\22\u018e\n\22\3\22\3\22\3\23\3\23\5\23\u0194\n"+
		"\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\5\23\u019d\n\23\3\23\3\23\5\23"+
		"\u01a1\n\23\3\23\3\23\3\24\3\24\5\24\u01a7\n\24\3\24\3\24\3\24\3\24\3"+
		"\24\3\24\3\24\5\24\u01b0\n\24\3\24\3\24\3\25\3\25\3\25\5\25\u01b7\n\25"+
		"\3\25\3\25\3\26\3\26\3\26\3\26\3\26\5\26\u01c0\n\26\3\27\3\27\3\27\3\27"+
		"\3\27\3\27\5\27\u01c8\n\27\3\27\3\27\3\27\5\27\u01cd\n\27\3\27\5\27\u01d0"+
		"\n\27\3\27\3\27\3\30\3\30\3\30\3\31\3\31\3\31\3\32\3\32\3\32\3\33\5\33"+
		"\u01de\n\33\3\33\5\33\u01e1\n\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3"+
		"\33\7\33\u01eb\n\33\f\33\16\33\u01ee\13\33\3\34\3\34\3\34\3\35\3\35\3"+
		"\35\5\35\u01f6\n\35\3\35\3\35\3\36\3\36\3\36\3\36\7\36\u01fe\n\36\f\36"+
		"\16\36\u0201\13\36\3\37\3\37\3 \3 \3 \3 \3 \3!\3!\3\"\3\"\3#\3#\3#\3#"+
		"\3#\3#\7#\u0214\n#\f#\16#\u0217\13#\3#\3#\3$\3$\3$\5$\u021e\n$\3$\3$\3"+
		"$\3%\3%\3%\3%\5%\u0227\n%\3%\3%\3&\3&\3&\3&\3&\3&\3&\5&\u0232\n&\3\'\3"+
		"\'\3\'\3\'\5\'\u0238\n\'\3\'\3\'\3(\3(\5(\u023e\n(\3)\3)\3)\3)\3)\3)\3"+
		")\3*\3*\3*\3*\3*\3+\3+\3+\3+\3+\3,\3,\3-\3-\3.\3.\3.\3.\3.\3.\3.\3.\3"+
		".\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\5.\u026d\n.\3/\3/\3/\3"+
		"/\3/\5/\u0274\n/\3\60\3\60\3\60\3\60\3\60\3\61\3\61\3\61\3\62\3\62\3\62"+
		"\3\62\3\62\3\62\3\62\3\63\3\63\3\63\3\64\5\64\u0289\n\64\3\64\3\64\3\64"+
		"\3\64\3\64\3\64\3\64\3\64\3\64\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65"+
		"\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65"+
		"\3\65\5\65\u02ab\n\65\3\66\3\66\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67"+
		"\3\67\5\67\u02b8\n\67\38\38\38\38\38\38\38\38\38\58\u02c3\n8\39\39\39"+
		"\39\39\39\39\39\39\39\39\39\39\39\59\u02d3\n9\3:\3:\3;\3;\3;\3;\3;\3;"+
		"\3;\3;\3;\3;\3;\3;\3;\3;\3;\5;\u02e6\n;\3<\3<\3<\3<\3<\3<\3<\3<\3<\3="+
		"\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\5=\u0304\n=\3>"+
		"\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>"+
		"\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>\3>"+
		"\5>\u0335\n>\3?\3?\3?\3?\3?\3@\3@\3@\3@\3@\3@\3@\3@\3@\3A\3A\3B\3B\3B"+
		"\3B\3B\3B\3B\3B\3B\3C\3C\3C\3C\3C\3C\3C\3C\3C\3D\3D\3D\3D\3D\3D\3D\3D"+
		"\3D\3E\3E\3F\3F\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3H\3H\3H\3H"+
		"\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3I\3I\3I\3I\3I\3I\3I\3I\3I\3J\3J\3J\3J"+
		"\3J\3J\3J\3J\3J\3K\3K\3K\3K\3K\3L\3L\3L\3M\5M\u039d\nM\3M\3M\3M\3M\7M"+
		"\u03a3\nM\fM\16M\u03a6\13M\3M\3M\3M\3N\3N\3O\3O\5O\u03af\nO\3P\3P\3P\5"+
		"P\u03b4\nP\3Q\3Q\3R\3R\3R\3R\3R\5R\u03bd\nR\3R\3R\3R\3R\3R\3R\3R\5R\u03c6"+
		"\nR\3R\3R\3R\3R\3R\3R\3R\3R\3R\3R\3R\3R\3R\3R\3R\3R\3R\5R\u03d9\nR\3R"+
		"\3R\3R\3R\5R\u03df\nR\3R\3R\3R\3R\3R\3R\3R\3R\3R\5R\u03ea\nR\3S\3S\3S"+
		"\3S\3S\5S\u03f1\nS\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S\5S\u0402"+
		"\nS\3S\5S\u0405\nS\3T\3T\3T\5T\u040a\nT\3U\3U\5U\u040e\nU\3V\3V\3W\3W"+
		"\3X\3X\3Y\3Y\3Z\3Z\3Z\3Z\3Z\3Z\5Z\u041e\nZ\3Z\3Z\7Z\u0422\nZ\fZ\16Z\u0425"+
		"\13Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3"+
		"Z\3Z\3Z\5Z\u043f\nZ\3[\3[\3[\3[\3[\7[\u0446\n[\f[\16[\u0449\13[\3[\3["+
		"\3[\3[\3[\3[\3[\3[\3[\5[\u0454\n[\3\\\3\\\3\\\7\\\u0459\n\\\f\\\16\\\u045c"+
		"\13\\\3]\5]\u045f\n]\3]\3]\3^\3^\3^\7^\u0466\n^\f^\16^\u0469\13^\3_\3"+
		"_\3_\7_\u046e\n_\f_\16_\u0471\13_\3`\3`\3`\7`\u0476\n`\f`\16`\u0479\13"+
		"`\3a\5a\u047c\na\3a\3a\3a\3a\3a\3a\3a\3a\5a\u0486\na\3b\6b\u0489\nb\r"+
		"b\16b\u048a\3c\3c\3c\5c\u0490\nc\3d\5d\u0493\nd\3d\5d\u0496\nd\3d\3d\3"+
		"d\3d\7d\u049c\nd\fd\16d\u049f\13d\3d\5d\u04a2\nd\3e\3e\5e\u04a6\ne\3f"+
		"\3f\3f\3f\3f\3f\5f\u04ae\nf\3g\5g\u04b1\ng\3g\3g\3h\3h\3i\3i\3j\5j\u04ba"+
		"\nj\3j\3j\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k"+
		"\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k"+
		"\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\5k\u04f9\nk\3l\3l\3m"+
		"\3m\3m\3m\3m\3m\3m\3m\5m\u0505\nm\3m\3m\3m\7m\u050a\nm\fm\16m\u050d\13"+
		"m\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3"+
		"n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3"+
		"n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3"+
		"n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3"+
		"n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3"+
		"n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3"+
		"n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\5n\u05a5\nn\3n\3n\3n\3n\3n\3n\3"+
		"n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3"+
		"n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\3n\5n\u05d2\nn\3o\3o\3o\3o\3o\3"+
		"o\3o\3o\3o\3o\3o\3o\3o\3o\3o\3o\3o\3o\3o\3o\3o\3o\3o\5o\u05eb\no\3o\3"+
		"o\3o\3o\3o\3o\3o\3o\3o\3o\3o\3o\3o\3o\3o\3o\3o\3o\3o\3o\3o\7o\u0602\n"+
		"o\fo\16o\u0605\13o\3p\3p\3q\3q\3q\2\4\u00d8\u00dcr\2\4\6\b\n\f\16\20\22"+
		"\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPRTVXZ\\^`bdfhjlnp"+
		"rtvxz|~\u0080\u0082\u0084\u0086\u0088\u008a\u008c\u008e\u0090\u0092\u0094"+
		"\u0096\u0098\u009a\u009c\u009e\u00a0\u00a2\u00a4\u00a6\u00a8\u00aa\u00ac"+
		"\u00ae\u00b0\u00b2\u00b4\u00b6\u00b8\u00ba\u00bc\u00be\u00c0\u00c2\u00c4"+
		"\u00c6\u00c8\u00ca\u00cc\u00ce\u00d0\u00d2\u00d4\u00d6\u00d8\u00da\u00dc"+
		"\u00de\u00e0\2\16\4\2\'\'\u00d2\u00d2\4\2\31\31\35\35\3\2\u008c\u008d"+
		"\3\2\u00d5\u00d7\3\2\u00ba\u00bb\3\2\u00ad\u00b2\3\2\u00bc\u00bd\3\2\u00b7"+
		"\u00b8\3\2\u00be\u00bf\3\2\u00b4\u00b6\3\2=D\3\2E_\2\u06a0\2\u00e5\3\2"+
		"\2\2\4\u00ff\3\2\2\2\6\u0102\3\2\2\2\b\u0109\3\2\2\2\n\u0118\3\2\2\2\f"+
		"\u011a\3\2\2\2\16\u0122\3\2\2\2\20\u0140\3\2\2\2\22\u0142\3\2\2\2\24\u0144"+
		"\3\2\2\2\26\u0159\3\2\2\2\30\u015c\3\2\2\2\32\u0166\3\2\2\2\34\u0171\3"+
		"\2\2\2\36\u0173\3\2\2\2 \u0177\3\2\2\2\"\u0184\3\2\2\2$\u0191\3\2\2\2"+
		"&\u01a4\3\2\2\2(\u01b3\3\2\2\2*\u01ba\3\2\2\2,\u01c1\3\2\2\2.\u01d3\3"+
		"\2\2\2\60\u01d6\3\2\2\2\62\u01d9\3\2\2\2\64\u01e0\3\2\2\2\66\u01ef\3\2"+
		"\2\28\u01f2\3\2\2\2:\u01f9\3\2\2\2<\u0202\3\2\2\2>\u0204\3\2\2\2@\u0209"+
		"\3\2\2\2B\u020b\3\2\2\2D\u020d\3\2\2\2F\u021a\3\2\2\2H\u0222\3\2\2\2J"+
		"\u0231\3\2\2\2L\u0233\3\2\2\2N\u023b\3\2\2\2P\u023f\3\2\2\2R\u0246\3\2"+
		"\2\2T\u024b\3\2\2\2V\u0250\3\2\2\2X\u0252\3\2\2\2Z\u026c\3\2\2\2\\\u0273"+
		"\3\2\2\2^\u0275\3\2\2\2`\u027a\3\2\2\2b\u027d\3\2\2\2d\u0284\3\2\2\2f"+
		"\u0288\3\2\2\2h\u02aa\3\2\2\2j\u02ac\3\2\2\2l\u02b7\3\2\2\2n\u02c2\3\2"+
		"\2\2p\u02d2\3\2\2\2r\u02d4\3\2\2\2t\u02e5\3\2\2\2v\u02e7\3\2\2\2x\u0303"+
		"\3\2\2\2z\u0334\3\2\2\2|\u0336\3\2\2\2~\u033b\3\2\2\2\u0080\u0344\3\2"+
		"\2\2\u0082\u0346\3\2\2\2\u0084\u034f\3\2\2\2\u0086\u0358\3\2\2\2\u0088"+
		"\u0361\3\2\2\2\u008a\u0363\3\2\2\2\u008c\u0365\3\2\2\2\u008e\u0373\3\2"+
		"\2\2\u0090\u0381\3\2\2\2\u0092\u038a\3\2\2\2\u0094\u0393\3\2\2\2\u0096"+
		"\u0398\3\2\2\2\u0098\u039c\3\2\2\2\u009a\u03aa\3\2\2\2\u009c\u03ae\3\2"+
		"\2\2\u009e\u03b3\3\2\2\2\u00a0\u03b5\3\2\2\2\u00a2\u03e9\3\2\2\2\u00a4"+
		"\u0404\3\2\2\2\u00a6\u0409\3\2\2\2\u00a8\u040d\3\2\2\2\u00aa\u040f\3\2"+
		"\2\2\u00ac\u0411\3\2\2\2\u00ae\u0413\3\2\2\2\u00b0\u0415\3\2\2\2\u00b2"+
		"\u043e\3\2\2\2\u00b4\u0453\3\2\2\2\u00b6\u0455\3\2\2\2\u00b8\u045e\3\2"+
		"\2\2\u00ba\u0462\3\2\2\2\u00bc\u046a\3\2\2\2\u00be\u0472\3\2\2\2\u00c0"+
		"\u0485\3\2\2\2\u00c2\u0488\3\2\2\2\u00c4\u048f\3\2\2\2\u00c6\u0492\3\2"+
		"\2\2\u00c8\u04a5\3\2\2\2\u00ca\u04ad\3\2\2\2\u00cc\u04b0\3\2\2\2\u00ce"+
		"\u04b4\3\2\2\2\u00d0\u04b6\3\2\2\2\u00d2\u04b9\3\2\2\2\u00d4\u04f8\3\2"+
		"\2\2\u00d6\u04fa\3\2\2\2\u00d8\u0504\3\2\2\2\u00da\u05d1\3\2\2\2\u00dc"+
		"\u05ea\3\2\2\2\u00de\u0606\3\2\2\2\u00e0\u0608\3\2\2\2\u00e2\u00e4\5\4"+
		"\3\2\u00e3\u00e2\3\2\2\2\u00e4\u00e7\3\2\2\2\u00e5\u00e3\3\2\2\2\u00e5"+
		"\u00e6\3\2\2\2\u00e6\u00e8\3\2\2\2\u00e7\u00e5\3\2\2\2\u00e8\u00e9\7\2"+
		"\2\3\u00e9\3\3\2\2\2\u00ea\u0100\7\u00c6\2\2\u00eb\u00ed\5\f\7\2\u00ec"+
		"\u00eb\3\2\2\2\u00ec\u00ed\3\2\2\2\u00ed\u00ef\3\2\2\2\u00ee\u00f0\t\2"+
		"\2\2\u00ef\u00ee\3\2\2\2\u00ef\u00f0\3\2\2\2\u00f0\u00f1\3\2\2\2\u00f1"+
		"\u0100\7\u00c6\2\2\u00f2\u00f4\5\f\7\2\u00f3\u00f2\3\2\2\2\u00f3\u00f4"+
		"\3\2\2\2\u00f4\u00f6\3\2\2\2\u00f5\u00f7\5\16\b\2\u00f6\u00f5\3\2\2\2"+
		"\u00f7\u00f8\3\2\2\2\u00f8\u00f6\3\2\2\2\u00f8\u00f9\3\2\2\2\u00f9\u00fb"+
		"\3\2\2\2\u00fa\u00fc\t\2\2\2\u00fb\u00fa\3\2\2\2\u00fb\u00fc\3\2\2\2\u00fc"+
		"\u00fd\3\2\2\2\u00fd\u00fe\7\u00c6\2\2\u00fe\u0100\3\2\2\2\u00ff\u00ea"+
		"\3\2\2\2\u00ff\u00ec\3\2\2\2\u00ff\u00f3\3\2\2\2\u0100\5\3\2\2\2\u0101"+
		"\u0103\5\4\3\2\u0102\u0101\3\2\2\2\u0103\u0104\3\2\2\2\u0104\u0102\3\2"+
		"\2\2\u0104\u0105\3\2\2\2\u0105\7\3\2\2\2\u0106\u0108\5\16\b\2\u0107\u0106"+
		"\3\2\2\2\u0108\u010b\3\2\2\2\u0109\u0107\3\2\2\2\u0109\u010a\3\2\2\2\u010a"+
		"\t\3\2\2\2\u010b\u0109\3\2\2\2\u010c\u010e\5\16\b\2\u010d\u010c\3\2\2"+
		"\2\u010e\u0111\3\2\2\2\u010f\u010d\3\2\2\2\u010f\u0110\3\2\2\2\u0110\u0119"+
		"\3\2\2\2\u0111\u010f\3\2\2\2\u0112\u0114\5\4\3\2\u0113\u0112\3\2\2\2\u0114"+
		"\u0117\3\2\2\2\u0115\u0113\3\2\2\2\u0115\u0116\3\2\2\2\u0116\u0119\3\2"+
		"\2\2\u0117\u0115\3\2\2\2\u0118\u010f\3\2\2\2\u0118\u0115\3\2\2\2\u0119"+
		"\13\3\2\2\2\u011a\u011b\7\u00de\2\2\u011b\r\3\2\2\2\u011c\u0123\7\u00ca"+
		"\2\2\u011d\u0123\5\20\t\2\u011e\u0123\5J&\2\u011f\u0123\5Z.\2\u0120\u0123"+
		"\5\\/\2\u0121\u0123\5h\65\2\u0122\u011c\3\2\2\2\u0122\u011d\3\2\2\2\u0122"+
		"\u011e\3\2\2\2\u0122\u011f\3\2\2\2\u0122\u0120\3\2\2\2\u0122\u0121\3\2"+
		"\2\2\u0123\17\3\2\2\2\u0124\u0141\5\22\n\2\u0125\u0141\5\24\13\2\u0126"+
		"\u0141\5\26\f\2\u0127\u0141\5\30\r\2\u0128\u0141\5\32\16\2\u0129\u0141"+
		"\5\34\17\2\u012a\u0141\5\36\20\2\u012b\u0141\5 \21\2\u012c\u0141\5\"\22"+
		"\2\u012d\u0141\5$\23\2\u012e\u0141\5&\24\2\u012f\u0141\5\60\31\2\u0130"+
		"\u0141\5\62\32\2\u0131\u0141\5*\26\2\u0132\u0141\5,\27\2\u0133\u0141\5"+
		".\30\2\u0134\u0141\5\64\33\2\u0135\u0141\5\66\34\2\u0136\u0141\5(\25\2"+
		"\u0137\u0141\58\35\2\u0138\u0141\5:\36\2\u0139\u0141\5<\37\2\u013a\u0141"+
		"\5> \2\u013b\u0141\5@!\2\u013c\u0141\5B\"\2\u013d\u0141\5D#\2\u013e\u0141"+
		"\5F$\2\u013f\u0141\5H%\2\u0140\u0124\3\2\2\2\u0140\u0125\3\2\2\2\u0140"+
		"\u0126\3\2\2\2\u0140\u0127\3\2\2\2\u0140\u0128\3\2\2\2\u0140\u0129\3\2"+
		"\2\2\u0140\u012a\3\2\2\2\u0140\u012b\3\2\2\2\u0140\u012c\3\2\2\2\u0140"+
		"\u012d\3\2\2\2\u0140\u012e\3\2\2\2\u0140\u012f\3\2\2\2\u0140\u0130\3\2"+
		"\2\2\u0140\u0131\3\2\2\2\u0140\u0132\3\2\2\2\u0140\u0133\3\2\2\2\u0140"+
		"\u0134\3\2\2\2\u0140\u0135\3\2\2\2\u0140\u0136\3\2\2\2\u0140\u0137\3\2"+
		"\2\2\u0140\u0138\3\2\2\2\u0140\u0139\3\2\2\2\u0140\u013a\3\2\2\2\u0140"+
		"\u013b\3\2\2\2\u0140\u013c\3\2\2\2\u0140\u013d\3\2\2\2\u0140\u013e\3\2"+
		"\2\2\u0140\u013f\3\2\2\2\u0141\21\3\2\2\2\u0142\u0143\7\3\2\2\u0143\23"+
		"\3\2\2\2\u0144\u0145\7\4\2\2\u0145\u0146\5\u00c8e\2\u0146\u0147\7\37\2"+
		"\2\u0147\u0149\7\u00c6\2\2\u0148\u014a\5\u0098M\2\u0149\u0148\3\2\2\2"+
		"\u014a\u014b\3\2\2\2\u014b\u0149\3\2\2\2\u014b\u014c\3\2\2\2\u014c\u0152"+
		"\3\2\2\2\u014d\u014f\5\f\7\2\u014e\u014d\3\2\2\2\u014e\u014f\3\2\2\2\u014f"+
		"\u0150\3\2\2\2\u0150\u0151\7#\2\2\u0151\u0153\5\n\6\2\u0152\u014e\3\2"+
		"\2\2\u0152\u0153\3\2\2\2\u0153\u0155\3\2\2\2\u0154\u0156\5\f\7\2\u0155"+
		"\u0154\3\2\2\2\u0155\u0156\3\2\2\2\u0156\u0157\3\2\2\2\u0157\u0158\7\13"+
		"\2\2\u0158\25\3\2\2\2\u0159\u015a\7\5\2\2\u015a\u015b\5\u00d8m\2\u015b"+
		"\27\3\2\2\2\u015c\u015d\7\6\2\2\u015d\u0162\5\u009cO\2\u015e\u015f\7\u00cb"+
		"\2\2\u015f\u0161\5\u009cO\2\u0160\u015e\3\2\2\2\u0161\u0164\3\2\2\2\u0162"+
		"\u0160\3\2\2\2\u0162\u0163\3\2\2\2\u0163\31\3\2\2\2\u0164\u0162\3\2\2"+
		"\2\u0165\u0167\7\34\2\2\u0166\u0165\3\2\2\2\u0166\u0167\3\2\2\2\u0167"+
		"\u0168\3\2\2\2\u0168\u0169\7\b\2\2\u0169\u016e\5\u00b4[\2\u016a\u016b"+
		"\7\u00cb\2\2\u016b\u016d\5\u00b4[\2\u016c\u016a\3\2\2\2\u016d\u0170\3"+
		"\2\2\2\u016e\u016c\3\2\2\2\u016e\u016f\3\2\2\2\u016f\33\3\2\2\2\u0170"+
		"\u016e\3\2\2\2\u0171\u0172\7\n\2\2\u0172\35\3\2\2\2\u0173\u0175\7*\2\2"+
		"\u0174\u0176\5\u00c8e\2\u0175\u0174\3\2\2\2\u0175\u0176\3\2\2\2\u0176"+
		"\37\3\2\2\2\u0177\u0178\7\7\2\2\u0178\u0179\5\u009aN\2\u0179\u017b\7\u00cd"+
		"\2\2\u017a\u017c\5\u00ba^\2\u017b\u017a\3\2\2\2\u017b\u017c\3\2\2\2\u017c"+
		"\u017d\3\2\2\2\u017d\u017e\7\u00cf\2\2\u017e\u0180\5\n\6\2\u017f\u0181"+
		"\5\f\7\2\u0180\u017f\3\2\2\2\u0180\u0181\3\2\2\2\u0181\u0182\3\2\2\2\u0182"+
		"\u0183\7\r\2\2\u0183!\3\2\2\2\u0184\u0185\7\7\2\2\u0185\u0186\7\u00d4"+
		"\2\2\u0186\u0188\7\u00cd\2\2\u0187\u0189\5\u00ba^\2\u0188\u0187\3\2\2"+
		"\2\u0188\u0189\3\2\2\2\u0189\u018a\3\2\2\2\u018a\u018b\7\u00cf\2\2\u018b"+
		"\u018d\5\n\6\2\u018c\u018e\5\f\7\2\u018d\u018c\3\2\2\2\u018d\u018e\3\2"+
		"\2\2\u018e\u018f\3\2\2\2\u018f\u0190\7\16\2\2\u0190#\3\2\2\2\u0191\u0193"+
		"\7\21\2\2\u0192\u0194\7\34\2\2\u0193\u0192\3\2\2\2\u0193\u0194\3\2\2\2"+
		"\u0194\u0195\3\2\2\2\u0195\u0196\5\u00a8U\2\u0196\u0197\7\u00ad\2\2\u0197"+
		"\u0198\5\u00dco\2\u0198\u0199\7/\2\2\u0199\u019c\5\u00dco\2\u019a\u019b"+
		"\7,\2\2\u019b\u019d\5\u00dco\2\u019c\u019a\3\2\2\2\u019c\u019d\3\2\2\2"+
		"\u019d\u019e\3\2\2\2\u019e\u01a0\5\n\6\2\u019f\u01a1\5\f\7\2\u01a0\u019f"+
		"\3\2\2\2\u01a0\u01a1\3\2\2\2\u01a1\u01a2\3\2\2\2\u01a2\u01a3\7\36\2\2"+
		"\u01a3%\3\2\2\2\u01a4\u01a6\7\21\2\2\u01a5\u01a7\7\34\2\2\u01a6\u01a5"+
		"\3\2\2\2\u01a6\u01a7\3\2\2\2\u01a7\u01a8\3\2\2\2\u01a8\u01a9\5\u00a6T"+
		"\2\u01a9\u01aa\7\25\2\2\u01aa\u01ab\5\u00a6T\2\u01ab\u01ac\7\u00cd\2\2"+
		"\u01ac\u01ad\7\u00cf\2\2\u01ad\u01af\5\n\6\2\u01ae\u01b0\5\f\7\2\u01af"+
		"\u01ae\3\2\2\2\u01af\u01b0\3\2\2\2\u01b0\u01b1\3\2\2\2\u01b1\u01b2\7\36"+
		"\2\2\u01b2\'\3\2\2\2\u01b3\u01b4\5\u009aN\2\u01b4\u01b6\7\u00cd\2\2\u01b5"+
		"\u01b7\5\u00bc_\2\u01b6\u01b5\3\2\2\2\u01b6\u01b7\3\2\2\2\u01b7\u01b8"+
		"\3\2\2\2\u01b8\u01b9\7\u00cf\2\2\u01b9)\3\2\2\2\u01ba\u01bb\7\24\2\2\u01bb"+
		"\u01bc\5\u00c8e\2\u01bc\u01bf\5\b\5\2\u01bd\u01be\7\t\2\2\u01be\u01c0"+
		"\5\b\5\2\u01bf\u01bd\3\2\2\2\u01bf\u01c0\3\2\2\2\u01c0+\3\2\2\2\u01c1"+
		"\u01c2\7\24\2\2\u01c2\u01c3\5\u00c8e\2\u01c3\u01c4\7.\2\2\u01c4\u01c5"+
		"\7\u00c6\2\2\u01c5\u01cc\5\6\4\2\u01c6\u01c8\5\f\7\2\u01c7\u01c6\3\2\2"+
		"\2\u01c7\u01c8\3\2\2\2\u01c8\u01c9\3\2\2\2\u01c9\u01ca\7\t\2\2\u01ca\u01cb"+
		"\7\u00c6\2\2\u01cb\u01cd\5\6\4\2\u01cc\u01c7\3\2\2\2\u01cc\u01cd\3\2\2"+
		"\2\u01cd\u01cf\3\2\2\2\u01ce\u01d0\5\f\7\2\u01cf\u01ce\3\2\2\2\u01cf\u01d0"+
		"\3\2\2\2\u01d0\u01d1\3\2\2\2\u01d1\u01d2\7\f\2\2\u01d2-\3\2\2\2\u01d3"+
		"\u01d4\7\26\2\2\u01d4\u01d5\5\u00d8m\2\u01d5/\3\2\2\2\u01d6\u01d7\7\32"+
		"\2\2\u01d7\u01d8\7\u00de\2\2\u01d8\61\3\2\2\2\u01d9\u01da\7\33\2\2\u01da"+
		"\u01db\7\u00de\2\2\u01db\63\3\2\2\2\u01dc\u01de\t\3\2\2\u01dd\u01dc\3"+
		"\2\2\2\u01dd\u01de\3\2\2\2\u01de\u01e1\3\2\2\2\u01df\u01e1\7\34\2\2\u01e0"+
		"\u01dd\3\2\2\2\u01e0\u01df\3\2\2\2\u01e1\u01e2\3\2\2\2\u01e2\u01e3\5\u00b2"+
		"Z\2\u01e3\u01e4\7\u00ad\2\2\u01e4\u01ec\5\u00c8e\2\u01e5\u01e6\7\u00cb"+
		"\2\2\u01e6\u01e7\5\u00b2Z\2\u01e7\u01e8\7\u00ad\2\2\u01e8\u01e9\5\u00c8"+
		"e\2\u01e9\u01eb\3\2\2\2\u01ea\u01e5\3\2\2\2\u01eb\u01ee\3\2\2\2\u01ec"+
		"\u01ea\3\2\2\2\u01ec\u01ed\3\2\2\2\u01ed\65\3\2\2\2\u01ee\u01ec\3\2\2"+
		"\2\u01ef\u01f0\7\"\2\2\u01f0\u01f1\5\u00d8m\2\u01f1\67\3\2\2\2\u01f2\u01f3"+
		"\7\u00d4\2\2\u01f3\u01f5\7\u00cd\2\2\u01f4\u01f6\5\u00bc_\2\u01f5\u01f4"+
		"\3\2\2\2\u01f5\u01f6\3\2\2\2\u01f6\u01f7\3\2\2\2\u01f7\u01f8\7\u00cf\2"+
		"\2\u01f89\3\2\2\2\u01f9\u01fa\7&\2\2\u01fa\u01ff\5\u00b2Z\2\u01fb\u01fc"+
		"\7\u00cb\2\2\u01fc\u01fe\5\u00b2Z\2\u01fd\u01fb\3\2\2\2\u01fe\u0201\3"+
		"\2\2\2\u01ff\u01fd\3\2\2\2\u01ff\u0200\3\2\2\2\u0200;\3\2\2\2\u0201\u01ff"+
		"\3\2\2\2\u0202\u0203\7)\2\2\u0203=\3\2\2\2\u0204\u0205\7-\2\2\u0205\u0206"+
		"\5\u00a6T\2\u0206\u0207\7\u00cb\2\2\u0207\u0208\5\u00a6T\2\u0208?\3\2"+
		"\2\2\u0209\u020a\7\61\2\2\u020aA\3\2\2\2\u020b\u020c\7\62\2\2\u020cC\3"+
		"\2\2\2\u020d\u020e\7\64\2\2\u020e\u020f\5\u00aaV\2\u020f\u0210\7\u00cd"+
		"\2\2\u0210\u0215\5\u00a6T\2\u0211\u0212\7\u00cb\2\2\u0212\u0214\5\u00a6"+
		"T\2\u0213\u0211\3\2\2\2\u0214\u0217\3\2\2\2\u0215\u0213\3\2\2\2\u0215"+
		"\u0216\3\2\2\2\u0216\u0218\3\2\2\2\u0217\u0215\3\2\2\2\u0218\u0219\7\u00cf"+
		"\2\2\u0219E\3\2\2\2\u021a\u021b\7(\2\2\u021b\u021d\5\n\6\2\u021c\u021e"+
		"\5\f\7\2\u021d\u021c\3\2\2\2\u021d\u021e\3\2\2\2\u021e\u021f\3\2\2\2\u021f"+
		"\u0220\7\65\2\2\u0220\u0221\5\u00c8e\2\u0221G\3\2\2\2\u0222\u0223\7\67"+
		"\2\2\u0223\u0224\5\u00c8e\2\u0224\u0226\5\n\6\2\u0225\u0227\5\f\7\2\u0226"+
		"\u0225\3\2\2\2\u0226\u0227\3\2\2\2\u0227\u0228\3\2\2\2\u0228\u0229\7\17"+
		"\2\2\u0229I\3\2\2\2\u022a\u0232\5L\'\2\u022b\u0232\5N(\2\u022c\u0232\5"+
		"P)\2\u022d\u0232\5R*\2\u022e\u0232\5T+\2\u022f\u0232\5V,\2\u0230\u0232"+
		"\5X-\2\u0231\u022a\3\2\2\2\u0231\u022b\3\2\2\2\u0231\u022c\3\2\2\2\u0231"+
		"\u022d\3\2\2\2\u0231\u022e\3\2\2\2\u0231\u022f\3\2\2\2\u0231\u0230\3\2"+
		"\2\2\u0232K\3\2\2\2\u0233\u0237\7\30\2\2\u0234\u0235\5\u00d8m\2\u0235"+
		"\u0236\7\u00cb\2\2\u0236\u0238\3\2\2\2\u0237\u0234\3\2\2\2\u0237\u0238"+
		"\3\2\2\2\u0238\u0239\3\2\2\2\u0239\u023a\5\u00b6\\\2\u023aM\3\2\2\2\u023b"+
		"\u023d\7$\2\2\u023c\u023e\5\u00c6d\2\u023d\u023c\3\2\2\2\u023d\u023e\3"+
		"\2\2\2\u023eO\3\2\2\2\u023f\u0240\78\2\2\u0240\u0241\5\u00acW\2\u0241"+
		"\u0242\7\u00cb\2\2\u0242\u0243\5\u00acW\2\u0243\u0244\7\u00cb\2\2\u0244"+
		"\u0245\5\u00acW\2\u0245Q\3\2\2\2\u0246\u0247\79\2\2\u0247\u0248\7\u00cd"+
		"\2\2\u0248\u0249\5\u00dco\2\u0249\u024a\7\u00cf\2\2\u024aS\3\2\2\2\u024b"+
		"\u024c\7:\2\2\u024c\u024d\7\u00cd\2\2\u024d\u024e\5\u00dco\2\u024e\u024f"+
		"\7\u00cf\2\2\u024fU\3\2\2\2\u0250\u0251\7;\2\2\u0251W\3\2\2\2\u0252\u0253"+
		"\7<\2\2\u0253Y\3\2\2\2\u0254\u0255\5\u00b2Z\2\u0255\u0256\7\u00c2\2\2"+
		"\u0256\u0257\5\u00dco\2\u0257\u026d\3\2\2\2\u0258\u0259\5\u00b2Z\2\u0259"+
		"\u025a\7\u00c3\2\2\u025a\u025b\5\u00dco\2\u025b\u026d\3\2\2\2\u025c\u025d"+
		"\5\u00b2Z\2\u025d\u025e\7\u00c0\2\2\u025e\u025f\5\u00dco\2\u025f\u026d"+
		"\3\2\2\2\u0260\u0261\5\u00b2Z\2\u0261\u0262\7\u00c1\2\2\u0262\u0263\5"+
		"\u00dco\2\u0263\u026d\3\2\2\2\u0264\u0265\5\u00b2Z\2\u0265\u0266\7\u00c4"+
		"\2\2\u0266\u0267\5\u00dco\2\u0267\u026d\3\2\2\2\u0268\u0269\5\u00b2Z\2"+
		"\u0269\u026a\7\u00c5\2\2\u026a\u026b\5\u00dco\2\u026b\u026d\3\2\2\2\u026c"+
		"\u0254\3\2\2\2\u026c\u0258\3\2\2\2\u026c\u025c\3\2\2\2\u026c\u0260\3\2"+
		"\2\2\u026c\u0264\3\2\2\2\u026c\u0268\3\2\2\2\u026d[\3\2\2\2\u026e\u0274"+
		"\5^\60\2\u026f\u0274\5`\61\2\u0270\u0274\5b\62\2\u0271\u0274\5d\63\2\u0272"+
		"\u0274\5f\64\2\u0273\u026e\3\2\2\2\u0273\u026f\3\2\2\2\u0273\u0270\3\2"+
		"\2\2\u0273\u0271\3\2\2\2\u0273\u0272\3\2\2\2\u0274]\3\2\2\2\u0275\u0276"+
		"\7n\2\2\u0276\u0277\5\u00dco\2\u0277\u0278\7\u00cb\2\2\u0278\u0279\5\u00dc"+
		"o\2\u0279_\3\2\2\2\u027a\u027b\7m\2\2\u027b\u027c\5\u00dco\2\u027ca\3"+
		"\2\2\2\u027d\u027e\7v\2\2\u027e\u027f\7\u00cd\2\2\u027f\u0280\5\u00dc"+
		"o\2\u0280\u0281\7\u00cf\2\2\u0281\u0282\7\u00ad\2\2\u0282\u0283\5\u00dc"+
		"o\2\u0283c\3\2\2\2\u0284\u0285\7o\2\2\u0285\u0286\5\u00dco\2\u0286e\3"+
		"\2\2\2\u0287\u0289\7\34\2\2\u0288\u0287\3\2\2\2\u0288\u0289\3\2\2\2\u0289"+
		"\u028a\3\2\2\2\u028a\u028b\5\u00aeX\2\u028b\u028c\7\u00cd\2\2\u028c\u028d"+
		"\7\u00cf\2\2\u028d\u028e\7\u00ad\2\2\u028e\u028f\7r\2\2\u028f\u0290\7"+
		"\u00cd\2\2\u0290\u0291\5\u00d8m\2\u0291\u0292\7\u00cf\2\2\u0292g\3\2\2"+
		"\2\u0293\u02ab\5j\66\2\u0294\u02ab\5l\67\2\u0295\u02ab\5n8\2\u0296\u02ab"+
		"\5p9\2\u0297\u02ab\5r:\2\u0298\u02ab\5t;\2\u0299\u02ab\5v<\2\u029a\u02ab"+
		"\5x=\2\u029b\u02ab\5z>\2\u029c\u02ab\5|?\2\u029d\u02ab\5~@\2\u029e\u02ab"+
		"\5\u0080A\2\u029f\u02ab\5\u0082B\2\u02a0\u02ab\5\u0084C\2\u02a1\u02ab"+
		"\5\u0086D\2\u02a2\u02ab\5\u0088E\2\u02a3\u02ab\5\u008aF\2\u02a4\u02ab"+
		"\5\u008cG\2\u02a5\u02ab\5\u008eH\2\u02a6\u02ab\5\u0090I\2\u02a7\u02ab"+
		"\5\u0092J\2\u02a8\u02ab\5\u0094K\2\u02a9\u02ab\5\u0096L\2\u02aa\u0293"+
		"\3\2\2\2\u02aa\u0294\3\2\2\2\u02aa\u0295\3\2\2\2\u02aa\u0296\3\2\2\2\u02aa"+
		"\u0297\3\2\2\2\u02aa\u0298\3\2\2\2\u02aa\u0299\3\2\2\2\u02aa\u029a\3\2"+
		"\2\2\u02aa\u029b\3\2\2\2\u02aa\u029c\3\2\2\2\u02aa\u029d\3\2\2\2\u02aa"+
		"\u029e\3\2\2\2\u02aa\u029f\3\2\2\2\u02aa\u02a0\3\2\2\2\u02aa\u02a1\3\2"+
		"\2\2\u02aa\u02a2\3\2\2\2\u02aa\u02a3\3\2\2\2\u02aa\u02a4\3\2\2\2\u02aa"+
		"\u02a5\3\2\2\2\u02aa\u02a6\3\2\2\2\u02aa\u02a7\3\2\2\2\u02aa\u02a8\3\2"+
		"\2\2\u02aa\u02a9\3\2\2\2\u02abi\3\2\2\2\u02ac\u02ad\7y\2\2\u02adk\3\2"+
		"\2\2\u02ae\u02af\7|\2\2\u02af\u02b8\5\u00dco\2\u02b0\u02b1\7|\2\2\u02b1"+
		"\u02b2\5\u00dco\2\u02b2\u02b3\7\u00cb\2\2\u02b3\u02b4\5\u00dco\2\u02b4"+
		"\u02b5\7\u00cb\2\2\u02b5\u02b6\5\u00dco\2\u02b6\u02b8\3\2\2\2\u02b7\u02ae"+
		"\3\2\2\2\u02b7\u02b0\3\2\2\2\u02b8m\3\2\2\2\u02b9\u02ba\7}\2\2\u02ba\u02c3"+
		"\5\u00dco\2\u02bb\u02bc\7}\2\2\u02bc\u02bd\5\u00dco\2\u02bd\u02be\7\u00cb"+
		"\2\2\u02be\u02bf\5\u00dco\2\u02bf\u02c0\7\u00cb\2\2\u02c0\u02c1\5\u00dc"+
		"o\2\u02c1\u02c3\3\2\2\2\u02c2\u02b9\3\2\2\2\u02c2\u02bb\3\2\2\2\u02c3"+
		"o\3\2\2\2\u02c4\u02d3\7\u0082\2\2\u02c5\u02c6\7\u0082\2\2\u02c6\u02c7"+
		"\5\u00dco\2\u02c7\u02c8\7\u00cb\2\2\u02c8\u02c9\5\u00dco\2\u02c9\u02d3"+
		"\3\2\2\2\u02ca\u02cb\7\u0082\2\2\u02cb\u02d3\7w\2\2\u02cc\u02cd\7\u0082"+
		"\2\2\u02cd\u02ce\7w\2\2\u02ce\u02cf\5\u00dco\2\u02cf\u02d0\7\u00cb\2\2"+
		"\u02d0\u02d1\5\u00dco\2\u02d1\u02d3\3\2\2\2\u02d2\u02c4\3\2\2\2\u02d2"+
		"\u02c5\3\2\2\2\u02d2\u02ca\3\2\2\2\u02d2\u02cc\3\2\2\2\u02d3q\3\2\2\2"+
		"\u02d4\u02d5\7\u0080\2\2\u02d5s\3\2\2\2\u02d6\u02d7\7x\2\2\u02d7\u02d8"+
		"\5\u00dco\2\u02d8\u02d9\7\u00cb\2\2\u02d9\u02da\5\u00dco\2\u02da\u02db"+
		"\7\u00cb\2\2\u02db\u02dc\5\u00dco\2\u02dc\u02e6\3\2\2\2\u02dd\u02de\7"+
		"x\2\2\u02de\u02df\7\177\2\2\u02df\u02e0\5\u00dco\2\u02e0\u02e1\7\u00cb"+
		"\2\2\u02e1\u02e2\5\u00dco\2\u02e2\u02e3\7\u00cb\2\2\u02e3\u02e4\5\u00dc"+
		"o\2\u02e4\u02e6\3\2\2\2\u02e5\u02d6\3\2\2\2\u02e5\u02dd\3\2\2\2\u02e6"+
		"u\3\2\2\2\u02e7\u02e8\7\u0083\2\2\u02e8\u02e9\5\u00dco\2\u02e9\u02ea\7"+
		"\u00cb\2\2\u02ea\u02eb\5\u00dco\2\u02eb\u02ec\7\u00cb\2\2\u02ec\u02ed"+
		"\5\u00dco\2\u02ed\u02ee\7\u00cb\2\2\u02ee\u02ef\5\u00dco\2\u02efw\3\2"+
		"\2\2\u02f0\u02f1\7\u0085\2\2\u02f1\u02f2\5\u00dco\2\u02f2\u02f3\7\u00cb"+
		"\2\2\u02f3\u02f4\5\u00dco\2\u02f4\u02f5\7\u00cb\2\2\u02f5\u02f6\5\u00dc"+
		"o\2\u02f6\u02f7\7\u00cb\2\2\u02f7\u02f8\5\u00dco\2\u02f8\u0304\3\2\2\2"+
		"\u02f9\u02fa\7\u0085\2\2\u02fa\u02fb\7\177\2\2\u02fb\u02fc\5\u00dco\2"+
		"\u02fc\u02fd\7\u00cb\2\2\u02fd\u02fe\5\u00dco\2\u02fe\u02ff\7\u00cb\2"+
		"\2\u02ff\u0300\5\u00dco\2\u0300\u0301\7\u00cb\2\2\u0301\u0302\5\u00dc"+
		"o\2\u0302\u0304\3\2\2\2\u0303\u02f0\3\2\2\2\u0303\u02f9\3\2\2\2\u0304"+
		"y\3\2\2\2\u0305\u0306\7\u008e\2\2\u0306\u0307\5\u00dco\2\u0307\u0308\7"+
		"\u00cb\2\2\u0308\u0309\5\u00dco\2\u0309\u030a\7\u00cb\2\2\u030a\u030b"+
		"\5\u00dco\2\u030b\u030c\7\u00cb\2\2\u030c\u030d\5\u00dco\2\u030d\u030e"+
		"\7\u00cb\2\2\u030e\u030f\5\u00dco\2\u030f\u0310\7\u00cb\2\2\u0310\u0311"+
		"\5\u00dco\2\u0311\u0335\3\2\2\2\u0312\u0313\7\u008e\2\2\u0313\u0314\7"+
		"\177\2\2\u0314\u0315\5\u00dco\2\u0315\u0316\7\u00cb\2\2\u0316\u0317\5"+
		"\u00dco\2\u0317\u0318\7\u00cb\2\2\u0318\u0319\5\u00dco\2\u0319\u031a\7"+
		"\u00cb\2\2\u031a\u031b\5\u00dco\2\u031b\u031c\7\u00cb\2\2\u031c\u031d"+
		"\5\u00dco\2\u031d\u031e\7\u00cb\2\2\u031e\u031f\5\u00dco\2\u031f\u0335"+
		"\3\2\2\2\u0320\u0321\7\u008e\2\2\u0321\u0322\7k\2\2\u0322\u0323\5\u00dc"+
		"o\2\u0323\u0324\7\u00cb\2\2\u0324\u0325\5\u00dco\2\u0325\u0326\7\u00cb"+
		"\2\2\u0326\u0327\5\u00dco\2\u0327\u0328\7\u00cb\2\2\u0328\u0329\5\u00dc"+
		"o\2\u0329\u032a\7\u00cb\2\2\u032a\u032b\5\u00dco\2\u032b\u032c\7\u00cb"+
		"\2\2\u032c\u032d\5\u00dco\2\u032d\u032e\7\u00cb\2\2\u032e\u032f\5\u00dc"+
		"o\2\u032f\u0330\7\u00cb\2\2\u0330\u0331\5\u00dco\2\u0331\u0332\7\u00cb"+
		"\2\2\u0332\u0333\5\u00dco\2\u0333\u0335\3\2\2\2\u0334\u0305\3\2\2\2\u0334"+
		"\u0312\3\2\2\2\u0334\u0320\3\2\2\2\u0335{\3\2\2\2\u0336\u0337\7\u0086"+
		"\2\2\u0337\u0338\5\u00dco\2\u0338\u0339\7\u00cb\2\2\u0339\u033a\5\u00dc"+
		"o\2\u033a}\3\2\2\2\u033b\u033c\7z\2\2\u033c\u033d\5\u00dco\2\u033d\u033e"+
		"\7\u00cb\2\2\u033e\u033f\5\u00dco\2\u033f\u0340\7\u00cb\2\2\u0340\u0341"+
		"\5\u00dco\2\u0341\u0342\7\u00cb\2\2\u0342\u0343\5\u00dco\2\u0343\177\3"+
		"\2\2\2\u0344\u0345\7{\2\2\u0345\u0081\3\2\2\2\u0346\u0347\7\u008a\2\2"+
		"\u0347\u0348\5\u00dco\2\u0348\u0349\7\u00cb\2\2\u0349\u034a\5\u00dco\2"+
		"\u034a\u034b\7\u00cb\2\2\u034b\u034c\5\u00dco\2\u034c\u034d\7\u00cb\2"+
		"\2\u034d\u034e\5\u00d8m\2\u034e\u0083\3\2\2\2\u034f\u0350\7\u008b\2\2"+
		"\u0350\u0351\5\u00dco\2\u0351\u0352\7\u00cb\2\2\u0352\u0353\5\u00dco\2"+
		"\u0353\u0354\7\u00cb\2\2\u0354\u0355\5\u00dco\2\u0355\u0356\7\u00cb\2"+
		"\2\u0356\u0357\5\u00d8m\2\u0357\u0085\3\2\2\2\u0358\u0359\t\4\2\2\u0359"+
		"\u035a\5\u00dco\2\u035a\u035b\7\u00cb\2\2\u035b\u035c\5\u00dco\2\u035c"+
		"\u035d\7\u00cb\2\2\u035d\u035e\5\u00dco\2\u035e\u035f\7\u00cb\2\2\u035f"+
		"\u0360\5\u00d8m\2\u0360\u0087\3\2\2\2\u0361\u0362\7\u0081\2\2\u0362\u0089"+
		"\3\2\2\2\u0363\u0364\7`\2\2\u0364\u008b\3\2\2\2\u0365\u0366\7a\2\2\u0366"+
		"\u0367\5\u00b0Y\2\u0367\u0368\7\u00cd\2\2\u0368\u0369\5\u00dco\2\u0369"+
		"\u036a\7\u00cf\2\2\u036a\u036b\7\u00cb\2\2\u036b\u036c\5\u00dco\2\u036c"+
		"\u036d\7\u00cb\2\2\u036d\u036e\5\u00dco\2\u036e\u036f\7\u00cb\2\2\u036f"+
		"\u0370\5\u00dco\2\u0370\u0371\7\u00cb\2\2\u0371\u0372\5\u00dco\2\u0372"+
		"\u008d\3\2\2\2\u0373\u0374\7b\2\2\u0374\u0375\5\u00b0Y\2\u0375\u0376\7"+
		"\u00cd\2\2\u0376\u0377\5\u00dco\2\u0377\u0378\7\u00cf\2\2\u0378\u0379"+
		"\7\u00cb\2\2\u0379\u037a\5\u00dco\2\u037a\u037b\7\u00cb\2\2\u037b\u037c"+
		"\5\u00dco\2\u037c\u037d\7\u00cb\2\2\u037d\u037e\5\u00dco\2\u037e\u037f"+
		"\7\u00cb\2\2\u037f\u0380\5\u00dco\2\u0380\u008f\3\2\2\2\u0381\u0382\7"+
		"c\2\2\u0382\u0383\5\u00dco\2\u0383\u0384\7\u00cb\2\2\u0384\u0385\5\u00dc"+
		"o\2\u0385\u0386\7\u00cb\2\2\u0386\u0387\5\u00dco\2\u0387\u0388\7\u00cb"+
		"\2\2\u0388\u0389\5\u00dco\2\u0389\u0091\3\2\2\2\u038a\u038b\7d\2\2\u038b"+
		"\u038c\5\u00dco\2\u038c\u038d\7\u00cb\2\2\u038d\u038e\5\u00dco\2\u038e"+
		"\u038f\7\u00cb\2\2\u038f\u0390\5\u00dco\2\u0390\u0391\7\u00cb\2\2\u0391"+
		"\u0392\5\u00dco\2\u0392\u0093\3\2\2\2\u0393\u0394\7e\2\2\u0394\u0395\5"+
		"\u00dco\2\u0395\u0396\7\u00cb\2\2\u0396\u0397\5\u00dco\2\u0397\u0095\3"+
		"\2\2\2\u0398\u0399\7f\2\2\u0399\u039a\5\u00dco\2\u039a\u0097\3\2\2\2\u039b"+
		"\u039d\5\f\7\2\u039c\u039b\3\2\2\2\u039c\u039d\3\2\2\2\u039d\u039e\3\2"+
		"\2\2\u039e\u039f\7\66\2\2\u039f\u03a4\5\u00c8e\2\u03a0\u03a1\7\u00cb\2"+
		"\2\u03a1\u03a3\5\u00c8e\2\u03a2\u03a0\3\2\2\2\u03a3\u03a6\3\2\2\2\u03a4"+
		"\u03a2\3\2\2\2\u03a4\u03a5\3\2\2\2\u03a5\u03a7\3\2\2\2\u03a6\u03a4\3\2"+
		"\2\2\u03a7\u03a8\7\u00ca\2\2\u03a8\u03a9\5\n\6\2\u03a9\u0099\3\2\2\2\u03aa"+
		"\u03ab\t\5\2\2\u03ab\u009b\3\2\2\2\u03ac\u03af\5\u00caf\2\u03ad\u03af"+
		"\5\u00d6l\2\u03ae\u03ac\3\2\2\2\u03ae\u03ad\3\2\2\2\u03af\u009d\3\2\2"+
		"\2\u03b0\u03b4\5\u00a2R\2\u03b1\u03b4\5\u00a4S\2\u03b2\u03b4\5\u00a0Q"+
		"\2\u03b3\u03b0\3\2\2\2\u03b3\u03b1\3\2\2\2\u03b3\u03b2\3\2\2\2\u03b4\u009f"+
		"\3\2\2\2\u03b5\u03b6\5\u00b0Y\2\u03b6\u00a1\3\2\2\2\u03b7\u03b8\5\u00aa"+
		"V\2\u03b8\u03b9\7\u00cd\2\2\u03b9\u03bc\5\u00dco\2\u03ba\u03bb\7\u00cb"+
		"\2\2\u03bb\u03bd\5\u00dco\2\u03bc\u03ba\3\2\2\2\u03bc\u03bd\3\2\2\2\u03bd"+
		"\u03be\3\2\2\2\u03be\u03bf\7\u00cf\2\2\u03bf\u03ea\3\2\2\2\u03c0\u03c1"+
		"\5\u00acW\2\u03c1\u03c2\7\u00cd\2\2\u03c2\u03c5\5\u00dco\2\u03c3\u03c4"+
		"\7\u00cb\2\2\u03c4\u03c6\5\u00dco\2\u03c5\u03c3\3\2\2\2\u03c5\u03c6\3"+
		"\2\2\2\u03c6\u03c7\3\2\2\2\u03c7\u03c8\7\u00cf\2\2\u03c8\u03ea\3\2\2\2"+
		"\u03c9\u03ca\5\u00a0Q\2\u03ca\u03cb\7\u00cd\2\2\u03cb\u03cc\5\u00dco\2"+
		"\u03cc\u03cd\7\u00cf\2\2\u03cd\u03ce\5\u00acW\2\u03ce\u03ea\3\2\2\2\u03cf"+
		"\u03d0\5\u00a0Q\2\u03d0\u03d1\7\u00cd\2\2\u03d1\u03d2\5\u00dco\2\u03d2"+
		"\u03d3\7\u00cf\2\2\u03d3\u03d4\5\u00aaV\2\u03d4\u03ea\3\2\2\2\u03d5\u03d6"+
		"\7\u00d6\2\2\u03d6\u03d8\7\u00cd\2\2\u03d7\u03d9\5\u00bc_\2\u03d8\u03d7"+
		"\3\2\2\2\u03d8\u03d9\3\2\2\2\u03d9\u03da\3\2\2\2\u03da\u03ea\7\u00cf\2"+
		"\2\u03db\u03dc\7\u00d5\2\2\u03dc\u03de\7\u00cd\2\2\u03dd\u03df\5\u00bc"+
		"_\2\u03de\u03dd\3\2\2\2\u03de\u03df\3\2\2\2\u03df\u03e0\3\2\2\2\u03e0"+
		"\u03ea\7\u00cf\2\2\u03e1\u03ea\5\u00aaV\2\u03e2\u03ea\5\u00acW\2\u03e3"+
		"\u03e4\5\u00a0Q\2\u03e4\u03e5\5\u00aaV\2\u03e5\u03ea\3\2\2\2\u03e6\u03e7"+
		"\5\u00a0Q\2\u03e7\u03e8\5\u00acW\2\u03e8\u03ea\3\2\2\2\u03e9\u03b7\3\2"+
		"\2\2\u03e9\u03c0\3\2\2\2\u03e9\u03c9\3\2\2\2\u03e9\u03cf\3\2\2\2\u03e9"+
		"\u03d5\3\2\2\2\u03e9\u03db\3\2\2\2\u03e9\u03e1\3\2\2\2\u03e9\u03e2\3\2"+
		"\2\2\u03e9\u03e3\3\2\2\2\u03e9\u03e6\3\2\2\2\u03ea\u00a3\3\2\2\2\u03eb"+
		"\u03ec\5\u00aeX\2\u03ec\u03ed\7\u00cd\2\2\u03ed\u03f0\5\u00dco\2\u03ee"+
		"\u03ef\7\u00cb\2\2\u03ef\u03f1\5\u00dco\2\u03f0\u03ee\3\2\2\2\u03f0\u03f1"+
		"\3\2\2\2\u03f1\u03f2\3\2\2\2\u03f2\u03f3\7\u00cf\2\2\u03f3\u0405\3\2\2"+
		"\2\u03f4\u03f5\5\u00a0Q\2\u03f5\u03f6\7\u00cd\2\2\u03f6\u03f7\5\u00dc"+
		"o\2\u03f7\u03f8\7\u00cf\2\2\u03f8\u03f9\5\u00aeX\2\u03f9\u0405\3\2\2\2"+
		"\u03fa\u0405\5\u00aeX\2\u03fb\u03fc\5\u00a0Q\2\u03fc\u03fd\5\u00aeX\2"+
		"\u03fd\u0405\3\2\2\2\u03fe\u03ff\7\u00d7\2\2\u03ff\u0401\7\u00cd\2\2\u0400"+
		"\u0402\5\u00bc_\2\u0401\u0400\3\2\2\2\u0401\u0402\3\2\2\2\u0402\u0403"+
		"\3\2\2\2\u0403\u0405\7\u00cf\2\2\u0404\u03eb\3\2\2\2\u0404\u03f4\3\2\2"+
		"\2\u0404\u03fa\3\2\2\2\u0404\u03fb\3\2\2\2\u0404\u03fe\3\2\2\2\u0405\u00a5"+
		"\3\2\2\2\u0406\u040a\5\u00aaV\2\u0407\u040a\5\u00acW\2\u0408\u040a\5\u00ae"+
		"X\2\u0409\u0406\3\2\2\2\u0409\u0407\3\2\2\2\u0409\u0408\3\2\2\2\u040a"+
		"\u00a7\3\2\2\2\u040b\u040e\5\u00aaV\2\u040c\u040e\5\u00acW\2\u040d\u040b"+
		"\3\2\2\2\u040d\u040c\3\2\2\2\u040e\u00a9\3\2\2\2\u040f\u0410\7\u00d8\2"+
		"\2\u0410\u00ab\3\2\2\2\u0411\u0412\7\u00d9\2\2\u0412\u00ad\3\2\2\2\u0413"+
		"\u0414\7\u00da\2\2\u0414\u00af\3\2\2\2\u0415\u0416\7\u00db\2\2\u0416\u00b1"+
		"\3\2\2\2\u0417\u043f\5\u00a6T\2\u0418\u0423\5\u00a6T\2\u0419\u041a\7\u00cd"+
		"\2\2\u041a\u041d\5\u00dco\2\u041b\u041c\7\u00cb\2\2\u041c\u041e\5\u00dc"+
		"o\2\u041d\u041b\3\2\2\2\u041d\u041e\3\2\2\2\u041e\u041f\3\2\2\2\u041f"+
		"\u0420\7\u00cf\2\2\u0420\u0422\3\2\2\2\u0421\u0419\3\2\2\2\u0422\u0425"+
		"\3\2\2\2\u0423\u0421\3\2\2\2\u0423\u0424\3\2\2\2\u0424\u043f\3\2\2\2\u0425"+
		"\u0423\3\2\2\2\u0426\u0427\5\u00a0Q\2\u0427\u0428\5\u00aaV\2\u0428\u043f"+
		"\3\2\2\2\u0429\u042a\5\u00a0Q\2\u042a\u042b\5\u00acW\2\u042b\u043f\3\2"+
		"\2\2\u042c\u042d\5\u00a0Q\2\u042d\u042e\7\u00cd\2\2\u042e\u042f\5\u00dc"+
		"o\2\u042f\u0430\7\u00cf\2\2\u0430\u0431\5\u00aaV\2\u0431\u043f\3\2\2\2"+
		"\u0432\u0433\5\u00a0Q\2\u0433\u0434\7\u00cd\2\2\u0434\u0435\5\u00dco\2"+
		"\u0435\u0436\7\u00cf\2\2\u0436\u0437\5\u00acW\2\u0437\u043f\3\2\2\2\u0438"+
		"\u043f\5\u00a0Q\2\u0439\u043a\5\u00a0Q\2\u043a\u043b\7\u00cd\2\2\u043b"+
		"\u043c\5\u00dco\2\u043c\u043d\7\u00cf\2\2\u043d\u043f\3\2\2\2\u043e\u0417"+
		"\3\2\2\2\u043e\u0418\3\2\2\2\u043e\u0426\3\2\2\2\u043e\u0429\3\2\2\2\u043e"+
		"\u042c\3\2\2\2\u043e\u0432\3\2\2\2\u043e\u0438\3\2\2\2\u043e\u0439\3\2"+
		"\2\2\u043f\u00b3\3\2\2\2\u0440\u0441\5\u00a6T\2\u0441\u0442\7\u00cd\2"+
		"\2\u0442\u0447\5\u00dco\2\u0443\u0444\7\u00cb\2\2\u0444\u0446\5\u00dc"+
		"o\2\u0445\u0443\3\2\2\2\u0446\u0449\3\2\2\2\u0447\u0445\3\2\2\2\u0447"+
		"\u0448\3\2\2\2\u0448\u044a\3\2\2\2\u0449\u0447\3\2\2\2\u044a\u044b\7\u00cf"+
		"\2\2\u044b\u0454\3\2\2\2\u044c\u044d\5\u00a0Q\2\u044d\u044e\7\u00cd\2"+
		"\2\u044e\u044f\5\u00dco\2\u044f\u0450\7\u00cb\2\2\u0450\u0451\5\u00aa"+
		"V\2\u0451\u0452\7\u00cf\2\2\u0452\u0454\3\2\2\2\u0453\u0440\3\2\2\2\u0453"+
		"\u044c\3\2\2\2\u0454\u00b5\3\2\2\2\u0455\u045a\5\u00b2Z\2\u0456\u0457"+
		"\7\u00cb\2\2\u0457\u0459\5\u00b2Z\2\u0458\u0456\3\2\2\2\u0459\u045c\3"+
		"\2\2\2\u045a\u0458\3\2\2\2\u045a\u045b\3\2\2\2\u045b\u00b7\3\2\2\2\u045c"+
		"\u045a\3\2\2\2\u045d\u045f\7*\2\2\u045e\u045d\3\2\2\2\u045e\u045f\3\2"+
		"\2\2\u045f\u0460\3\2\2\2\u0460\u0461\5\u00a6T\2\u0461\u00b9\3\2\2\2\u0462"+
		"\u0467\5\u00b8]\2\u0463\u0464\7\u00cb\2\2\u0464\u0466\5\u00b8]\2\u0465"+
		"\u0463\3\2\2\2\u0466\u0469\3\2\2\2\u0467\u0465\3\2\2\2\u0467\u0468\3\2"+
		"\2\2\u0468\u00bb\3\2\2\2\u0469\u0467\3\2\2\2\u046a\u046f\5\u00c8e\2\u046b"+
		"\u046c\7\u00cb\2\2\u046c\u046e\5\u00c8e\2\u046d\u046b\3\2\2\2\u046e\u0471"+
		"\3\2\2\2\u046f\u046d\3\2\2\2\u046f\u0470\3\2\2\2\u0470\u00bd\3\2\2\2\u0471"+
		"\u046f\3\2\2\2\u0472\u0477\5\u00c8e\2\u0473\u0474\7\u00cb\2\2\u0474\u0476"+
		"\5\u00c8e\2\u0475\u0473\3\2\2\2\u0476\u0479\3\2\2\2\u0477\u0475\3\2\2"+
		"\2\u0477\u0478\3\2\2\2\u0478\u00bf\3\2\2\2\u0479\u0477\3\2\2\2\u047a\u047c"+
		"\7\u00c8\2\2\u047b\u047a\3\2\2\2\u047b\u047c\3\2\2\2\u047c\u047d\3\2\2"+
		"\2\u047d\u0486\5\u00c8e\2\u047e\u047f\7+\2\2\u047f\u0480\7\u00cd\2\2\u0480"+
		"\u0481\5\u00dco\2\u0481\u0482\7\u00cf\2\2\u0482\u0486\3\2\2\2\u0483\u0484"+
		"\7+\2\2\u0484\u0486\5\u00dco\2\u0485\u047b\3\2\2\2\u0485\u047e\3\2\2\2"+
		"\u0485\u0483\3\2\2\2\u0486\u00c1\3\2\2\2\u0487\u0489\7\u00c7\2\2\u0488"+
		"\u0487\3\2\2\2\u0489\u048a\3\2\2\2\u048a\u0488\3\2\2\2\u048a\u048b\3\2"+
		"\2\2\u048b\u00c3\3\2\2\2\u048c\u0490\7\u00cb\2\2\u048d\u0490\7\u00d0\2"+
		"\2\u048e\u0490\5\u00c2b\2\u048f\u048c\3\2\2\2\u048f\u048d\3\2\2\2\u048f"+
		"\u048e\3\2\2\2\u0490\u00c5\3\2\2\2\u0491\u0493\5\u00c2b\2\u0492\u0491"+
		"\3\2\2\2\u0492\u0493\3\2\2\2\u0493\u0495\3\2\2\2\u0494\u0496\7\u00d0\2"+
		"\2\u0495\u0494\3\2\2\2\u0495\u0496\3\2\2\2\u0496\u0497\3\2\2\2\u0497\u049d"+
		"\5\u00c0a\2\u0498\u0499\5\u00c4c\2\u0499\u049a\5\u00c0a\2\u049a\u049c"+
		"\3\2\2\2\u049b\u0498\3\2\2\2\u049c\u049f\3\2\2\2\u049d\u049b\3\2\2\2\u049d"+
		"\u049e\3\2\2\2\u049e\u04a1\3\2\2\2\u049f\u049d\3\2\2\2\u04a0\u04a2\7\u00d0"+
		"\2\2\u04a1\u04a0\3\2\2\2\u04a1\u04a2\3\2\2\2\u04a2\u00c7\3\2\2\2\u04a3"+
		"\u04a6\5\u00dco\2\u04a4\u04a6\5\u00d8m\2\u04a5\u04a3\3\2\2\2\u04a5\u04a4"+
		"\3\2\2\2\u04a6\u00c9\3\2\2\2\u04a7\u04ae\5\u00ccg\2\u04a8\u04ae\5\u00d2"+
		"j\2\u04a9\u04ae\5\u00ceh\2\u04aa\u04ae\5\u00d0i\2\u04ab\u04ae\5\u00de"+
		"p\2\u04ac\u04ae\5\u00e0q\2\u04ad\u04a7\3\2\2\2\u04ad\u04a8\3\2\2\2\u04ad"+
		"\u04a9\3\2\2\2\u04ad\u04aa\3\2\2\2\u04ad\u04ab\3\2\2\2\u04ad\u04ac\3\2"+
		"\2\2\u04ae\u00cb\3\2\2\2\u04af\u04b1\t\6\2\2\u04b0\u04af\3\2\2\2\u04b0"+
		"\u04b1\3\2\2\2\u04b1\u04b2\3\2\2\2\u04b2\u04b3\7\u00de\2\2\u04b3\u00cd"+
		"\3\2\2\2\u04b4\u04b5\7\u00dc\2\2\u04b5\u00cf\3\2\2\2\u04b6\u04b7\7\u00dd"+
		"\2\2\u04b7\u00d1\3\2\2\2\u04b8\u04ba\t\6\2\2\u04b9\u04b8\3\2\2\2\u04b9"+
		"\u04ba\3\2\2\2\u04ba\u04bb\3\2\2\2\u04bb\u04bc\7\u00df\2\2\u04bc\u00d3"+
		"\3\2\2\2\u04bd\u04f9\7\u00a3\2\2\u04be\u04bf\7\u00a6\2\2\u04bf\u04c0\7"+
		"\u00cd\2\2\u04c0\u04c1\5\u00dco\2\u04c1\u04c2\7\u00cf\2\2\u04c2\u04f9"+
		"\3\2\2\2\u04c3\u04c4\7\u00a7\2\2\u04c4\u04c5\7\u00cd\2\2\u04c5\u04c6\5"+
		"\u00d8m\2\u04c6\u04c7\7\u00cb\2\2\u04c7\u04c8\5\u00dco\2\u04c8\u04c9\7"+
		"\u00cf\2\2\u04c9\u04f9\3\2\2\2\u04ca\u04cb\7\u00a8\2\2\u04cb\u04cc\7\u00cd"+
		"\2\2\u04cc\u04cd\5\u00d8m\2\u04cd\u04ce\7\u00cb\2\2\u04ce\u04cf\5\u00dc"+
		"o\2\u04cf\u04d0\7\u00cb\2\2\u04d0\u04d1\5\u00dco\2\u04d1\u04d2\7\u00cf"+
		"\2\2\u04d2\u04f9\3\2\2\2\u04d3\u04d4\7\u00a8\2\2\u04d4\u04d5\7\u00cd\2"+
		"\2\u04d5\u04d6\5\u00d8m\2\u04d6\u04d7\7\u00cb\2\2\u04d7\u04d8\5\u00dc"+
		"o\2\u04d8\u04d9\7\u00cf\2\2\u04d9\u04f9\3\2\2\2\u04da\u04db\7\u00a9\2"+
		"\2\u04db\u04dc\7\u00cd\2\2\u04dc\u04dd\5\u00d8m\2\u04dd\u04de\7\u00cb"+
		"\2\2\u04de\u04df\5\u00dco\2\u04df\u04e0\7\u00cf\2\2\u04e0\u04f9\3\2\2"+
		"\2\u04e1\u04e2\7\u00a4\2\2\u04e2\u04e3\7\u00cd\2\2\u04e3\u04e4\5\u00dc"+
		"o\2\u04e4\u04e5\7\u00cf\2\2\u04e5\u04f9\3\2\2\2\u04e6\u04e7\7\u00a4\2"+
		"\2\u04e7\u04e8\7\u00c8\2\2\u04e8\u04e9\7\u00cd\2\2\u04e9\u04ea\5\u00dc"+
		"o\2\u04ea\u04eb\7\u00cf\2\2\u04eb\u04f9\3\2\2\2\u04ec\u04ed\7\u00a5\2"+
		"\2\u04ed\u04ee\7\u00cd\2\2\u04ee\u04ef\5\u00dco\2\u04ef\u04f0\7\u00cb"+
		"\2\2\u04f0\u04f1\5\u00d8m\2\u04f1\u04f2\7\u00cf\2\2\u04f2\u04f9\3\2\2"+
		"\2\u04f3\u04f4\7:\2\2\u04f4\u04f9\5\u00dco\2\u04f5\u04f9\7<\2\2\u04f6"+
		"\u04f7\7q\2\2\u04f7\u04f9\5\u00dco\2\u04f8\u04bd\3\2\2\2\u04f8\u04be\3"+
		"\2\2\2\u04f8\u04c3\3\2\2\2\u04f8\u04ca\3\2\2\2\u04f8\u04d3\3\2\2\2\u04f8"+
		"\u04da\3\2\2\2\u04f8\u04e1\3\2\2\2\u04f8\u04e6\3\2\2\2\u04f8\u04ec\3\2"+
		"\2\2\u04f8\u04f3\3\2\2\2\u04f8\u04f5\3\2\2\2\u04f8\u04f6\3\2\2\2\u04f9"+
		"\u00d5\3\2\2\2\u04fa\u04fb\7\u00d3\2\2\u04fb\u00d7\3\2\2\2\u04fc\u04fd"+
		"\bm\1\2\u04fd\u04fe\7\u00cd\2\2\u04fe\u04ff\5\u00d8m\2\u04ff\u0500\7\u00cf"+
		"\2\2\u0500\u0505\3\2\2\2\u0501\u0505\5\u00d4k\2\u0502\u0505\5\u00a4S\2"+
		"\u0503\u0505\5\u00d6l\2\u0504\u04fc\3\2\2\2\u0504\u0501\3\2\2\2\u0504"+
		"\u0502\3\2\2\2\u0504\u0503\3\2\2\2\u0505\u050b\3\2\2\2\u0506\u0507\f\5"+
		"\2\2\u0507\u0508\7\u00ba\2\2\u0508\u050a\5\u00d8m\6\u0509\u0506\3\2\2"+
		"\2\u050a\u050d\3\2\2\2\u050b\u0509\3\2\2\2\u050b\u050c\3\2\2\2\u050c\u00d9"+
		"\3\2\2\2\u050d\u050b\3\2\2\2\u050e\u05d2\7\u0090\2\2\u050f\u05d2\7\20"+
		"\2\2\u0510\u05d2\7\63\2\2\u0511\u05d2\7\u008f\2\2\u0512\u0513\7\u00aa"+
		"\2\2\u0513\u0514\7\u00cd\2\2\u0514\u0515\5\u00dco\2\u0515\u0516\7\u00cf"+
		"\2\2\u0516\u05d2\3\2\2\2\u0517\u05d2\7\u00aa\2\2\u0518\u05d2\7\u00ab\2"+
		"\2\u0519\u05d2\7\u00ac\2\2\u051a\u051b\7\u0092\2\2\u051b\u051c\7\u00cd"+
		"\2\2\u051c\u051d\5\u00dco\2\u051d\u051e\7\u00cf\2\2\u051e\u05d2\3\2\2"+
		"\2\u051f\u0520\7\u0093\2\2\u0520\u0521\7\u00cd\2\2\u0521\u0522\5\u00dc"+
		"o\2\u0522\u0523\7\u00cf\2\2\u0523\u05d2\3\2\2\2\u0524\u0525\7\u0094\2"+
		"\2\u0525\u0526\7\u00cd\2\2\u0526\u0527\5\u00dco\2\u0527\u0528\7\u00cf"+
		"\2\2\u0528\u05d2\3\2\2\2\u0529\u052a\7\u0095\2\2\u052a\u052b\7\u00cd\2"+
		"\2\u052b\u052c\5\u00dco\2\u052c\u052d\7\u00cf\2\2\u052d\u05d2\3\2\2\2"+
		"\u052e\u052f\7\u0096\2\2\u052f\u0530\7\u00cd\2\2\u0530\u0531\5\u00dco"+
		"\2\u0531\u0532\7\u00cf\2\2\u0532\u05d2\3\2\2\2\u0533\u0534\7\u0097\2\2"+
		"\u0534\u0535\7\u00cd\2\2\u0535\u0536\5\u00dco\2\u0536\u0537\7\u00cf\2"+
		"\2\u0537\u05d2\3\2\2\2\u0538\u0539\7\u0098\2\2\u0539\u053a\7\u00cd\2\2"+
		"\u053a\u053b\5\u00dco\2\u053b\u053c\7\u00cf\2\2\u053c\u05d2\3\2\2\2\u053d"+
		"\u053e\7\u0099\2\2\u053e\u053f\7\u00cd\2\2\u053f\u0540\5\u00dco\2\u0540"+
		"\u0541\7\u00cf\2\2\u0541\u05d2\3\2\2\2\u0542\u0543\7\u009a\2\2\u0543\u0544"+
		"\7\u00cd\2\2\u0544\u0545\5\u00dco\2\u0545\u0546\7\u00cf\2\2\u0546\u05d2"+
		"\3\2\2\2\u0547\u0548\7\u009b\2\2\u0548\u0549\7\u00cd\2\2\u0549\u054a\5"+
		"\u00dco\2\u054a\u054b\7\u00cf\2\2\u054b\u05d2\3\2\2\2\u054c\u054d\7\u009c"+
		"\2\2\u054d\u054e\7\u00cd\2\2\u054e\u054f\5\u00dco\2\u054f\u0550\7\u00cf"+
		"\2\2\u0550\u05d2\3\2\2\2\u0551\u0552\7\u009d\2\2\u0552\u0553\7\u00cd\2"+
		"\2\u0553\u0554\5\u00dco\2\u0554\u0555\7\u00cf\2\2\u0555\u05d2\3\2\2\2"+
		"\u0556\u0557\7\u0091\2\2\u0557\u0558\7\u00cd\2\2\u0558\u0559\5\u00dco"+
		"\2\u0559\u055a\7\u00cf\2\2\u055a\u05d2\3\2\2\2\u055b\u055c\7\u009e\2\2"+
		"\u055c\u055d\7\u00cd\2\2\u055d\u055e\5\u00dco\2\u055e\u055f\7\u00cf\2"+
		"\2\u055f\u05d2\3\2\2\2\u0560\u05d2\7;\2\2\u0561\u0562\79\2\2\u0562\u0563"+
		"\7\u00cd\2\2\u0563\u0564\5\u00dco\2\u0564\u0565\7\u00cf\2\2\u0565\u05d2"+
		"\3\2\2\2\u0566\u0567\7\27\2\2\u0567\u0568\7\u00cd\2\2\u0568\u0569\5\u00dc"+
		"o\2\u0569\u056a\7\u00cf\2\2\u056a\u05d2\3\2\2\2\u056b\u056c\7\22\2\2\u056c"+
		"\u056d\7\u00cd\2\2\u056d\u056e\5\u00dco\2\u056e\u056f\7\u00cf\2\2\u056f"+
		"\u05d2\3\2\2\2\u0570\u05d2\7\u0088\2\2\u0571\u05d2\7\u0089\2\2\u0572\u0573"+
		"\7\u0087\2\2\u0573\u0574\7\u00cd\2\2\u0574\u0575\5\u00dco\2\u0575\u0576"+
		"\7\u00cb\2\2\u0576\u0577\5\u00dco\2\u0577\u0578\7\u00cf\2\2\u0578\u05d2"+
		"\3\2\2\2\u0579\u057a\7|\2\2\u057a\u057b\7\u00cd\2\2\u057b\u057c\5\u00dc"+
		"o\2\u057c\u057d\7\u00cb\2\2\u057d\u057e\5\u00dco\2\u057e\u057f\7\u00cb"+
		"\2\2\u057f\u0580\5\u00dco\2\u0580\u0581\7\u00cf\2\2\u0581\u05d2\3\2\2"+
		"\2\u0582\u0583\7\u0084\2\2\u0583\u05d2\5\u00d8m\2\u0584\u0585\7~\2\2\u0585"+
		"\u0586\5\u00dco\2\u0586\u0587\7\u00cb\2\2\u0587\u0588\5\u00dco\2\u0588"+
		"\u05d2\3\2\2\2\u0589\u058a\7g\2\2\u058a\u058b\5\u00b0Y\2\u058b\u058c\7"+
		"\u00cb\2\2\u058c\u058d\5\u00b0Y\2\u058d\u05d2\3\2\2\2\u058e\u058f\7h\2"+
		"\2\u058f\u0590\5\u00dco\2\u0590\u0591\7\u00cb\2\2\u0591\u0592\5\u00dc"+
		"o\2\u0592\u0593\7\u00cb\2\2\u0593\u0594\5\u00dco\2\u0594\u0595\7\u00cb"+
		"\2\2\u0595\u0596\5\u00dco\2\u0596\u0597\7\u00cb\2\2\u0597\u0598\5\u00dc"+
		"o\2\u0598\u0599\7\u00cb\2\2\u0599\u059a\5\u00dco\2\u059a\u059b\7\u00cb"+
		"\2\2\u059b\u059c\5\u00dco\2\u059c\u059d\7\u00cb\2\2\u059d\u059e\5\u00dc"+
		"o\2\u059e\u05a4\7\u00cb\2\2\u059f\u05a5\5\u00dco\2\u05a0\u05a5\7i\2\2"+
		"\u05a1\u05a5\7j\2\2\u05a2\u05a5\7k\2\2\u05a3\u05a5\7l\2\2\u05a4\u059f"+
		"\3\2\2\2\u05a4\u05a0\3\2\2\2\u05a4\u05a1\3\2\2\2\u05a4\u05a2\3\2\2\2\u05a4"+
		"\u05a3\3\2\2\2\u05a5\u05d2\3\2\2\2\u05a6\u05a7\7m\2\2\u05a7\u05d2\5\u00dc"+
		"o\2\u05a8\u05a9\7p\2\2\u05a9\u05d2\5\u00dco\2\u05aa\u05ab\7s\2\2\u05ab"+
		"\u05ac\7\u00cd\2\2\u05ac\u05ad\5\u00d8m\2\u05ad\u05ae\7\u00cf\2\2\u05ae"+
		"\u05d2\3\2\2\2\u05af\u05b0\7t\2\2\u05b0\u05b1\7\u00cd\2\2\u05b1\u05b2"+
		"\5\u00d8m\2\u05b2\u05b3\7\u00cf\2\2\u05b3\u05d2\3\2\2\2\u05b4\u05b5\7"+
		"u\2\2\u05b5\u05b6\7\u00cd\2\2\u05b6\u05b7\5\u00d8m\2\u05b7\u05b8\7\u00cf"+
		"\2\2\u05b8\u05d2\3\2\2\2\u05b9\u05ba\7v\2\2\u05ba\u05d2\5\u00dco\2\u05bb"+
		"\u05bc\7\u009f\2\2\u05bc\u05d2\5\u00d8m\2\u05bd\u05be\7\u00a0\2\2\u05be"+
		"\u05d2\5\u00d8m\2\u05bf\u05c0\7\u00a1\2\2\u05c0\u05c1\7\u00cd\2\2\u05c1"+
		"\u05c2\5\u00d8m\2\u05c2\u05c3\7\u00cb\2\2\u05c3\u05c4\5\u00d8m\2\u05c4"+
		"\u05c5\7\u00cf\2\2\u05c5\u05d2\3\2\2\2\u05c6\u05c7\7\u00a1\2\2\u05c7\u05c8"+
		"\7\u00cd\2\2\u05c8\u05c9\5\u00d8m\2\u05c9\u05ca\7\u00cb\2\2\u05ca\u05cb"+
		"\5\u00d8m\2\u05cb\u05cc\7\u00cb\2\2\u05cc\u05cd\5\u00dco\2\u05cd\u05ce"+
		"\7\u00cf\2\2\u05ce\u05d2\3\2\2\2\u05cf\u05d0\7\u00a2\2\2\u05d0\u05d2\5"+
		"\u00d8m\2\u05d1\u050e\3\2\2\2\u05d1\u050f\3\2\2\2\u05d1\u0510\3\2\2\2"+
		"\u05d1\u0511\3\2\2\2\u05d1\u0512\3\2\2\2\u05d1\u0517\3\2\2\2\u05d1\u0518"+
		"\3\2\2\2\u05d1\u0519\3\2\2\2\u05d1\u051a\3\2\2\2\u05d1\u051f\3\2\2\2\u05d1"+
		"\u0524\3\2\2\2\u05d1\u0529\3\2\2\2\u05d1\u052e\3\2\2\2\u05d1\u0533\3\2"+
		"\2\2\u05d1\u0538\3\2\2\2\u05d1\u053d\3\2\2\2\u05d1\u0542\3\2\2\2\u05d1"+
		"\u0547\3\2\2\2\u05d1\u054c\3\2\2\2\u05d1\u0551\3\2\2\2\u05d1\u0556\3\2"+
		"\2\2\u05d1\u055b\3\2\2\2\u05d1\u0560\3\2\2\2\u05d1\u0561\3\2\2\2\u05d1"+
		"\u0566\3\2\2\2\u05d1\u056b\3\2\2\2\u05d1\u0570\3\2\2\2\u05d1\u0571\3\2"+
		"\2\2\u05d1\u0572\3\2\2\2\u05d1\u0579\3\2\2\2\u05d1\u0582\3\2\2\2\u05d1"+
		"\u0584\3\2\2\2\u05d1\u0589\3\2\2\2\u05d1\u058e\3\2\2\2\u05d1\u05a6\3\2"+
		"\2\2\u05d1\u05a8\3\2\2\2\u05d1\u05aa\3\2\2\2\u05d1\u05af\3\2\2\2\u05d1"+
		"\u05b4\3\2\2\2\u05d1\u05b9\3\2\2\2\u05d1\u05bb\3\2\2\2\u05d1\u05bd\3\2"+
		"\2\2\u05d1\u05bf\3\2\2\2\u05d1\u05c6\3\2\2\2\u05d1\u05cf\3\2\2\2\u05d2"+
		"\u00db\3\2\2\2\u05d3\u05d4\bo\1\2\u05d4\u05eb\5\u00a2R\2\u05d5\u05eb\5"+
		"\u00caf\2\u05d6\u05d7\7\u00cd\2\2\u05d7\u05d8\5\u00dco\2\u05d8\u05d9\7"+
		"\u00cf\2\2\u05d9\u05eb\3\2\2\2\u05da\u05db\7\u00bb\2\2\u05db\u05eb\5\u00dc"+
		"o\16\u05dc\u05dd\7\u00b3\2\2\u05dd\u05eb\5\u00dco\r\u05de\u05eb\5\u00da"+
		"n\2\u05df\u05e0\5\u00d8m\2\u05e0\u05e1\t\7\2\2\u05e1\u05e2\5\u00d8m\2"+
		"\u05e2\u05eb\3\2\2\2\u05e3\u05e4\7\u00a0\2\2\u05e4\u05e5\7\u00cd\2\2\u05e5"+
		"\u05e6\5\u00a6T\2\u05e6\u05e7\7\u00cd\2\2\u05e7\u05e8\7\u00cf\2\2\u05e8"+
		"\u05e9\7\u00cf\2\2\u05e9\u05eb\3\2\2\2\u05ea\u05d3\3\2\2\2\u05ea\u05d5"+
		"\3\2\2\2\u05ea\u05d6\3\2\2\2\u05ea\u05da\3\2\2\2\u05ea\u05dc\3\2\2\2\u05ea"+
		"\u05de\3\2\2\2\u05ea\u05df\3\2\2\2\u05ea\u05e3\3\2\2\2\u05eb\u0603\3\2"+
		"\2\2\u05ec\u05ed\f\13\2\2\u05ed\u05ee\7\u00b9\2\2\u05ee\u0602\5\u00dc"+
		"o\13\u05ef\u05f0\f\n\2\2\u05f0\u05f1\t\b\2\2\u05f1\u0602\5\u00dco\13\u05f2"+
		"\u05f3\f\t\2\2\u05f3\u05f4\t\t\2\2\u05f4\u0602\5\u00dco\n\u05f5\u05f6"+
		"\f\b\2\2\u05f6\u05f7\t\6\2\2\u05f7\u0602\5\u00dco\t\u05f8\u05f9\f\7\2"+
		"\2\u05f9\u05fa\t\n\2\2\u05fa\u0602\5\u00dco\b\u05fb\u05fc\f\6\2\2\u05fc"+
		"\u05fd\t\7\2\2\u05fd\u0602\5\u00dco\7\u05fe\u05ff\f\4\2\2\u05ff\u0600"+
		"\t\13\2\2\u0600\u0602\5\u00dco\5\u0601\u05ec\3\2\2\2\u0601\u05ef\3\2\2"+
		"\2\u0601\u05f2\3\2\2\2\u0601\u05f5\3\2\2\2\u0601\u05f8\3\2\2\2\u0601\u05fb"+
		"\3\2\2\2\u0601\u05fe\3\2\2\2\u0602\u0605\3\2\2\2\u0603\u0601\3\2\2\2\u0603"+
		"\u0604\3\2\2\2\u0604\u00dd\3\2\2\2\u0605\u0603\3\2\2\2\u0606\u0607\t\f"+
		"\2\2\u0607\u00df\3\2\2\2\u0608\u0609\t\r\2\2\u0609\u00e1\3\2\2\2g\u00e5"+
		"\u00ec\u00ef\u00f3\u00f8\u00fb\u00ff\u0104\u0109\u010f\u0115\u0118\u0122"+
		"\u0140\u014b\u014e\u0152\u0155\u0162\u0166\u016e\u0175\u017b\u0180\u0188"+
		"\u018d\u0193\u019c\u01a0\u01a6\u01af\u01b6\u01bf\u01c7\u01cc\u01cf\u01dd"+
		"\u01e0\u01ec\u01f5\u01ff\u0215\u021d\u0226\u0231\u0237\u023d\u026c\u0273"+
		"\u0288\u02aa\u02b7\u02c2\u02d2\u02e5\u0303\u0334\u039c\u03a4\u03ae\u03b3"+
		"\u03bc\u03c5\u03d8\u03de\u03e9\u03f0\u0401\u0404\u0409\u040d\u041d\u0423"+
		"\u043e\u0447\u0453\u045a\u045e\u0467\u046f\u0477\u047b\u0485\u048a\u048f"+
		"\u0492\u0495\u049d\u04a1\u04a5\u04ad\u04b0\u04b9\u04f8\u0504\u050b\u05a4"+
		"\u05d1\u05ea\u0601\u0603";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}