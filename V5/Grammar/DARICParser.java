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
		FN=17, IF=18, IN=19, INSTALL=20, INT=21, INPUT=22, GLOBAL=23, LOCAL=24, 
		LET=25, NEXT=26, OF=27, OFF=28, ON=29, OSCLI=30, OTHERWISE=31, PRINT=32, 
		PROC=33, READ=34, REM=35, REPEAT=36, RESTORE=37, RETURN=38, SPC=39, STEP=40, 
		SWAP=41, THEN=42, TO=43, TRACE=44, TRACEON=45, TRACEOFF=46, TRUE=47, TYPE=48, 
		UNTIL=49, WHEN=50, WHILE=51, MOUSE=52, INKEY=53, INKEYS=54, GET=55, GETS=56, 
		RED=57, GREEN=58, YELLOW=59, BLUE=60, MAGENTA=61, CYAN=62, WHITE=63, BLACK=64, 
		MONO15=65, MONO20=66, MONO25=67, MONO30=68, MONO35=69, MONO40=70, MONO50=71, 
		MONO75=72, MONO100=73, PROP15=74, PROP20=75, PROP25=76, PROP30=77, PROP35=78, 
		PROP40=79, PROP50=80, PROP75=81, PROP100=82, SERIF15=83, SERIF20=84, SERIF25=85, 
		SERIF30=86, SERIF35=87, SERIF40=88, SERIF50=89, SERIF75=90, SERIF100=91, 
		RENDERFRAME=92, CREATEVERTEX=93, CREATETRIANGLE=94, TRANSLATE=95, ROTATE=96, 
		SCALE=97, DELETEOBJECT=98, CREATESHAPE=99, CREATEOBJECT=100, SOLID=101, 
		WIREFRAME=102, SHADED=103, FILLEDWIREFRAME=104, BGETH=105, BPUTH=106, 
		CLOSEH=107, EOFH=108, GETSH=109, LISTFILES=110, OPENIN=111, OPENOUT=112, 
		OPENUP=113, PTRH=114, BANKED=115, CIRCLE=116, CLS=117, CLIPON=118, CLIPOFF=119, 
		COLOUR=120, COLOURBG=121, CREATEFONT=122, FILL=123, FLIP=124, SHOWFPS=125, 
		GRAPHICS=126, LINE=127, LOADTYPEFACE=128, RECTANGLE=129, PLOT=130, POINT=131, 
		SCREENWIDTH=132, SCREENHEIGHT=133, TEXT=134, TEXTRIGHT=135, TEXTCENTRE=136, 
		TEXTCENTER=137, TRIANGLE=138, TIME=139, PI=140, SQR=141, LN=142, LOG=143, 
		EXP=144, ATN=145, TAN=146, COS=147, SIN=148, ABS=149, ACS=150, ASN=151, 
		DEG=152, RAD=153, SGN=154, ASC=155, LEN=156, INSTR=157, VAL=158, TIMES=159, 
		STRS=160, STRINGS=161, CHRS=162, LEFTS=163, MIDS=164, RIGHTS=165, RND=166, 
		RND0=167, RND1=168, EQ=169, NE=170, GT=171, GE=172, LT=173, LE=174, NOT=175, 
		AND=176, OR=177, EOR=178, MOD=179, DIV=180, HAT=181, PLUS=182, MINUS=183, 
		MULTIPLY=184, DIVIDE=185, SHL=186, SHR=187, PLUS_E=188, MINUS_E=189, MULTIPLY_E=190, 
		DIVIDE_E=191, SHL_E=192, SHR_E=193, NEWLINE=194, TICK=195, TILDE=196, 
		HASH=197, COLON=198, COMMA=199, DOLLAR=200, LPAREN=201, PERCENT=202, RPAREN=203, 
		SEMICOLON=204, UNDERSCORE=205, COMMENT=206, STRINGLITERAL=207, PROC_NAME=208, 
		FN_INTEGER=209, FN_FLOAT=210, FN_STRING=211, VARIABLE_FLOAT=212, VARIABLE_INTEGER=213, 
		VARIABLE_STRING=214, VARIABLE_TYPE=215, HEXNUMBER=216, BINARYNUMBER=217, 
		NUMBER=218, FLOAT=219, WS=220;
	public static final int
		RULE_prog = 0, RULE_line = 1, RULE_content = 2, RULE_body = 3, RULE_linenumber = 4, 
		RULE_stmt = 5, RULE_coreStmt = 6, RULE_stmtBREAKPOINT = 7, RULE_stmtCASE = 8, 
		RULE_stmtCHAIN = 9, RULE_stmtDATA = 10, RULE_stmtDIM = 11, RULE_stmtEND = 12, 
		RULE_stmtRETURN = 13, RULE_stmtDEFFN = 14, RULE_stmtDEFPROC = 15, RULE_stmtFOR = 16, 
		RULE_stmtFORIN = 17, RULE_stmtCallFN = 18, RULE_stmtIF = 19, RULE_stmtIFMultiline = 20, 
		RULE_stmtINSTALL = 21, RULE_stmtLET = 22, RULE_stmtOSCLI = 23, RULE_stmtCallPROC = 24, 
		RULE_stmtREAD = 25, RULE_stmtRESTORE = 26, RULE_stmtSWAP = 27, RULE_stmtTRACEON = 28, 
		RULE_stmtTRACEOFF = 29, RULE_stmtTYPE = 30, RULE_stmtREPEAT = 31, RULE_stmtWHILE = 32, 
		RULE_keyMouseStmt = 33, RULE_stmtINPUT = 34, RULE_stmtPRINT = 35, RULE_stmtMOUSE = 36, 
		RULE_stmtINKEY = 37, RULE_stmtINKEYS = 38, RULE_stmtGET = 39, RULE_stmtGETS = 40, 
		RULE_stmtOperatorEqual = 41, RULE_ioStmt = 42, RULE_stmtBPUTH = 43, RULE_stmtBGETH = 44, 
		RULE_stmtPTRH = 45, RULE_stmtCLOSEH = 46, RULE_stmtLISTFILES = 47, RULE_graphicsStmt = 48, 
		RULE_stmtCLS = 49, RULE_stmtCOLOUR = 50, RULE_stmtCOLOURBG = 51, RULE_stmtGRAPHICS = 52, 
		RULE_stmtFLIP = 53, RULE_stmtCIRCLE = 54, RULE_stmtLINE = 55, RULE_stmtRECTANGLE = 56, 
		RULE_stmtTRIANGLE = 57, RULE_stmtPLOT = 58, RULE_stmtCLIPON = 59, RULE_stmtCLIPOFF = 60, 
		RULE_stmtTEXT = 61, RULE_stmtTEXTRIGHT = 62, RULE_stmtTEXTCENTRE = 63, 
		RULE_stmtSHOWFPS = 64, RULE_stmtRENDERFRAME = 65, RULE_stmtCREATEVERTEX = 66, 
		RULE_stmtCREATETRIANGLE = 67, RULE_stmtTRANSLATE = 68, RULE_stmtROTATE = 69, 
		RULE_stmtSCALE = 70, RULE_stmtDELETEOBJECT = 71, RULE_when = 72, RULE_fnName = 73, 
		RULE_literal = 74, RULE_var = 75, RULE_typeVar = 76, RULE_numVar = 77, 
		RULE_strVar = 78, RULE_justVar = 79, RULE_justNumberVar = 80, RULE_varName = 81, 
		RULE_varNameInteger = 82, RULE_varNameString = 83, RULE_varNameType = 84, 
		RULE_varDecl = 85, RULE_varDeclWithDimension = 86, RULE_varList = 87, 
		RULE_functionVarList = 88, RULE_functionParList = 89, RULE_exprList = 90, 
		RULE_printListItem = 91, RULE_printListTick = 92, RULE_printListSeparator = 93, 
		RULE_printList = 94, RULE_expr = 95, RULE_number = 96, RULE_numberInteger = 97, 
		RULE_numberHex = 98, RULE_numberBinary = 99, RULE_numberFloat = 100, RULE_strFunc = 101, 
		RULE_string = 102, RULE_strExpr = 103, RULE_numFunc = 104, RULE_numExpr = 105, 
		RULE_numColours = 106, RULE_defaultFonts = 107;
	private static String[] makeRuleNames() {
		return new String[] {
			"prog", "line", "content", "body", "linenumber", "stmt", "coreStmt", 
			"stmtBREAKPOINT", "stmtCASE", "stmtCHAIN", "stmtDATA", "stmtDIM", "stmtEND", 
			"stmtRETURN", "stmtDEFFN", "stmtDEFPROC", "stmtFOR", "stmtFORIN", "stmtCallFN", 
			"stmtIF", "stmtIFMultiline", "stmtINSTALL", "stmtLET", "stmtOSCLI", "stmtCallPROC", 
			"stmtREAD", "stmtRESTORE", "stmtSWAP", "stmtTRACEON", "stmtTRACEOFF", 
			"stmtTYPE", "stmtREPEAT", "stmtWHILE", "keyMouseStmt", "stmtINPUT", "stmtPRINT", 
			"stmtMOUSE", "stmtINKEY", "stmtINKEYS", "stmtGET", "stmtGETS", "stmtOperatorEqual", 
			"ioStmt", "stmtBPUTH", "stmtBGETH", "stmtPTRH", "stmtCLOSEH", "stmtLISTFILES", 
			"graphicsStmt", "stmtCLS", "stmtCOLOUR", "stmtCOLOURBG", "stmtGRAPHICS", 
			"stmtFLIP", "stmtCIRCLE", "stmtLINE", "stmtRECTANGLE", "stmtTRIANGLE", 
			"stmtPLOT", "stmtCLIPON", "stmtCLIPOFF", "stmtTEXT", "stmtTEXTRIGHT", 
			"stmtTEXTCENTRE", "stmtSHOWFPS", "stmtRENDERFRAME", "stmtCREATEVERTEX", 
			"stmtCREATETRIANGLE", "stmtTRANSLATE", "stmtROTATE", "stmtSCALE", "stmtDELETEOBJECT", 
			"when", "fnName", "literal", "var", "typeVar", "numVar", "strVar", "justVar", 
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
			null, "'='", "'<>'", "'>'", "'>='", "'<'", "'<='", null, null, null, 
			null, null, null, "'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", "'>>'", 
			"'+='", "'-='", "'*='", "'/='", "'<<='", "'>>='", null, "'''", "'~'", 
			"'#'", "':'", "','", "'$'", "'('", "'%'", "')'", "';'", "'_'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "BREAKPOINT", "CASE", "CHAIN", "DATA", "DEF", "DIM", "ELSE", "END", 
			"ENDCASE", "ENDIF", "ENDFN", "ENDPROC", "ENDWHILE", "FALSE", "FOR", "FLOAT_TOKEN", 
			"FN", "IF", "IN", "INSTALL", "INT", "INPUT", "GLOBAL", "LOCAL", "LET", 
			"NEXT", "OF", "OFF", "ON", "OSCLI", "OTHERWISE", "PRINT", "PROC", "READ", 
			"REM", "REPEAT", "RESTORE", "RETURN", "SPC", "STEP", "SWAP", "THEN", 
			"TO", "TRACE", "TRACEON", "TRACEOFF", "TRUE", "TYPE", "UNTIL", "WHEN", 
			"WHILE", "MOUSE", "INKEY", "INKEYS", "GET", "GETS", "RED", "GREEN", "YELLOW", 
			"BLUE", "MAGENTA", "CYAN", "WHITE", "BLACK", "MONO15", "MONO20", "MONO25", 
			"MONO30", "MONO35", "MONO40", "MONO50", "MONO75", "MONO100", "PROP15", 
			"PROP20", "PROP25", "PROP30", "PROP35", "PROP40", "PROP50", "PROP75", 
			"PROP100", "SERIF15", "SERIF20", "SERIF25", "SERIF30", "SERIF35", "SERIF40", 
			"SERIF50", "SERIF75", "SERIF100", "RENDERFRAME", "CREATEVERTEX", "CREATETRIANGLE", 
			"TRANSLATE", "ROTATE", "SCALE", "DELETEOBJECT", "CREATESHAPE", "CREATEOBJECT", 
			"SOLID", "WIREFRAME", "SHADED", "FILLEDWIREFRAME", "BGETH", "BPUTH", 
			"CLOSEH", "EOFH", "GETSH", "LISTFILES", "OPENIN", "OPENOUT", "OPENUP", 
			"PTRH", "BANKED", "CIRCLE", "CLS", "CLIPON", "CLIPOFF", "COLOUR", "COLOURBG", 
			"CREATEFONT", "FILL", "FLIP", "SHOWFPS", "GRAPHICS", "LINE", "LOADTYPEFACE", 
			"RECTANGLE", "PLOT", "POINT", "SCREENWIDTH", "SCREENHEIGHT", "TEXT", 
			"TEXTRIGHT", "TEXTCENTRE", "TEXTCENTER", "TRIANGLE", "TIME", "PI", "SQR", 
			"LN", "LOG", "EXP", "ATN", "TAN", "COS", "SIN", "ABS", "ACS", "ASN", 
			"DEG", "RAD", "SGN", "ASC", "LEN", "INSTR", "VAL", "TIMES", "STRS", "STRINGS", 
			"CHRS", "LEFTS", "MIDS", "RIGHTS", "RND", "RND0", "RND1", "EQ", "NE", 
			"GT", "GE", "LT", "LE", "NOT", "AND", "OR", "EOR", "MOD", "DIV", "HAT", 
			"PLUS", "MINUS", "MULTIPLY", "DIVIDE", "SHL", "SHR", "PLUS_E", "MINUS_E", 
			"MULTIPLY_E", "DIVIDE_E", "SHL_E", "SHR_E", "NEWLINE", "TICK", "TILDE", 
			"HASH", "COLON", "COMMA", "DOLLAR", "LPAREN", "PERCENT", "RPAREN", "SEMICOLON", 
			"UNDERSCORE", "COMMENT", "STRINGLITERAL", "PROC_NAME", "FN_INTEGER", 
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
			setState(219);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INSTALL) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 92)) & ~0x3f) == 0 && ((1L << (_la - 92)) & ((1L << (RENDERFRAME - 92)) | (1L << (CREATEVERTEX - 92)) | (1L << (CREATETRIANGLE - 92)) | (1L << (TRANSLATE - 92)) | (1L << (ROTATE - 92)) | (1L << (SCALE - 92)) | (1L << (DELETEOBJECT - 92)) | (1L << (BGETH - 92)) | (1L << (BPUTH - 92)) | (1L << (CLOSEH - 92)) | (1L << (PTRH - 92)) | (1L << (CIRCLE - 92)) | (1L << (CLS - 92)) | (1L << (CLIPON - 92)) | (1L << (CLIPOFF - 92)) | (1L << (COLOUR - 92)) | (1L << (COLOURBG - 92)) | (1L << (FLIP - 92)) | (1L << (SHOWFPS - 92)) | (1L << (GRAPHICS - 92)) | (1L << (LINE - 92)) | (1L << (RECTANGLE - 92)) | (1L << (PLOT - 92)) | (1L << (TEXT - 92)) | (1L << (TEXTRIGHT - 92)) | (1L << (TEXTCENTRE - 92)) | (1L << (TEXTCENTER - 92)) | (1L << (TRIANGLE - 92)))) != 0) || ((((_la - 194)) & ~0x3f) == 0 && ((1L << (_la - 194)) & ((1L << (NEWLINE - 194)) | (1L << (COLON - 194)) | (1L << (COMMENT - 194)) | (1L << (PROC_NAME - 194)) | (1L << (FN_INTEGER - 194)) | (1L << (FN_FLOAT - 194)) | (1L << (FN_STRING - 194)) | (1L << (VARIABLE_FLOAT - 194)) | (1L << (VARIABLE_INTEGER - 194)) | (1L << (VARIABLE_STRING - 194)) | (1L << (VARIABLE_TYPE - 194)) | (1L << (NUMBER - 194)))) != 0)) {
				{
				{
				setState(216);
				line();
				}
				}
				setState(221);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(222);
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
			setState(245);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(224);
				match(NEWLINE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(226);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(225);
					linenumber();
					}
				}

				setState(229);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REM || _la==COMMENT) {
					{
					setState(228);
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

				setState(231);
				match(NEWLINE);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(233);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(232);
					linenumber();
					}
				}

				setState(236); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(235);
					stmt();
					}
					}
					setState(238); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INSTALL) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 92)) & ~0x3f) == 0 && ((1L << (_la - 92)) & ((1L << (RENDERFRAME - 92)) | (1L << (CREATEVERTEX - 92)) | (1L << (CREATETRIANGLE - 92)) | (1L << (TRANSLATE - 92)) | (1L << (ROTATE - 92)) | (1L << (SCALE - 92)) | (1L << (DELETEOBJECT - 92)) | (1L << (BGETH - 92)) | (1L << (BPUTH - 92)) | (1L << (CLOSEH - 92)) | (1L << (PTRH - 92)) | (1L << (CIRCLE - 92)) | (1L << (CLS - 92)) | (1L << (CLIPON - 92)) | (1L << (CLIPOFF - 92)) | (1L << (COLOUR - 92)) | (1L << (COLOURBG - 92)) | (1L << (FLIP - 92)) | (1L << (SHOWFPS - 92)) | (1L << (GRAPHICS - 92)) | (1L << (LINE - 92)) | (1L << (RECTANGLE - 92)) | (1L << (PLOT - 92)) | (1L << (TEXT - 92)) | (1L << (TEXTRIGHT - 92)) | (1L << (TEXTCENTRE - 92)) | (1L << (TEXTCENTER - 92)) | (1L << (TRIANGLE - 92)))) != 0) || ((((_la - 198)) & ~0x3f) == 0 && ((1L << (_la - 198)) & ((1L << (COLON - 198)) | (1L << (PROC_NAME - 198)) | (1L << (FN_INTEGER - 198)) | (1L << (FN_FLOAT - 198)) | (1L << (FN_STRING - 198)) | (1L << (VARIABLE_FLOAT - 198)) | (1L << (VARIABLE_INTEGER - 198)) | (1L << (VARIABLE_STRING - 198)) | (1L << (VARIABLE_TYPE - 198)))) != 0) );
				setState(241);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REM || _la==COMMENT) {
					{
					setState(240);
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

				setState(243);
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
		enterRule(_localctx, 4, RULE_content);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(250);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(247);
					stmt();
					}
					} 
				}
				setState(252);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
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
		enterRule(_localctx, 6, RULE_body);
		int _la;
		try {
			int _alt;
			setState(265);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(256);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INSTALL) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 92)) & ~0x3f) == 0 && ((1L << (_la - 92)) & ((1L << (RENDERFRAME - 92)) | (1L << (CREATEVERTEX - 92)) | (1L << (CREATETRIANGLE - 92)) | (1L << (TRANSLATE - 92)) | (1L << (ROTATE - 92)) | (1L << (SCALE - 92)) | (1L << (DELETEOBJECT - 92)) | (1L << (BGETH - 92)) | (1L << (BPUTH - 92)) | (1L << (CLOSEH - 92)) | (1L << (PTRH - 92)) | (1L << (CIRCLE - 92)) | (1L << (CLS - 92)) | (1L << (CLIPON - 92)) | (1L << (CLIPOFF - 92)) | (1L << (COLOUR - 92)) | (1L << (COLOURBG - 92)) | (1L << (FLIP - 92)) | (1L << (SHOWFPS - 92)) | (1L << (GRAPHICS - 92)) | (1L << (LINE - 92)) | (1L << (RECTANGLE - 92)) | (1L << (PLOT - 92)) | (1L << (TEXT - 92)) | (1L << (TEXTRIGHT - 92)) | (1L << (TEXTCENTRE - 92)) | (1L << (TEXTCENTER - 92)) | (1L << (TRIANGLE - 92)))) != 0) || ((((_la - 198)) & ~0x3f) == 0 && ((1L << (_la - 198)) & ((1L << (COLON - 198)) | (1L << (PROC_NAME - 198)) | (1L << (FN_INTEGER - 198)) | (1L << (FN_FLOAT - 198)) | (1L << (FN_STRING - 198)) | (1L << (VARIABLE_FLOAT - 198)) | (1L << (VARIABLE_INTEGER - 198)) | (1L << (VARIABLE_STRING - 198)) | (1L << (VARIABLE_TYPE - 198)))) != 0)) {
					{
					{
					setState(253);
					stmt();
					}
					}
					setState(258);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(262);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(259);
						line();
						}
						} 
					}
					setState(264);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
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
		enterRule(_localctx, 8, RULE_linenumber);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(267);
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
		enterRule(_localctx, 10, RULE_stmt);
		try {
			setState(275);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(269);
				match(COLON);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(270);
				coreStmt();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(271);
				keyMouseStmt();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(272);
				stmtOperatorEqual();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(273);
				ioStmt();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(274);
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
		enterRule(_localctx, 12, RULE_coreStmt);
		try {
			setState(303);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(277);
				stmtBREAKPOINT();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(278);
				stmtCASE();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(279);
				stmtCHAIN();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(280);
				stmtDATA();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(281);
				stmtDIM();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(282);
				stmtEND();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(283);
				stmtRETURN();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(284);
				stmtDEFFN();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(285);
				stmtDEFPROC();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(286);
				stmtFOR();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(287);
				stmtFORIN();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(288);
				stmtCallFN();
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(289);
				stmtIF();
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(290);
				stmtIFMultiline();
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(291);
				stmtINSTALL();
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(292);
				stmtLET();
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(293);
				stmtOSCLI();
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(294);
				stmtCallPROC();
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(295);
				stmtREAD();
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(296);
				stmtRESTORE();
				}
				break;
			case 21:
				enterOuterAlt(_localctx, 21);
				{
				setState(297);
				stmtSWAP();
				}
				break;
			case 22:
				enterOuterAlt(_localctx, 22);
				{
				setState(298);
				stmtTRACEON();
				}
				break;
			case 23:
				enterOuterAlt(_localctx, 23);
				{
				setState(299);
				stmtTRACEOFF();
				}
				break;
			case 24:
				enterOuterAlt(_localctx, 24);
				{
				setState(300);
				stmtTYPE();
				}
				break;
			case 25:
				enterOuterAlt(_localctx, 25);
				{
				setState(301);
				stmtREPEAT();
				}
				break;
			case 26:
				enterOuterAlt(_localctx, 26);
				{
				setState(302);
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
		enterRule(_localctx, 14, RULE_stmtBREAKPOINT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(305);
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
		enterRule(_localctx, 16, RULE_stmtCASE);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(307);
			match(CASE);
			setState(308);
			expr();
			setState(309);
			match(OF);
			setState(310);
			match(NEWLINE);
			setState(312); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(311);
				when();
				}
				}
				setState(314); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==WHEN );
			setState(318);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==OTHERWISE) {
				{
				setState(316);
				match(OTHERWISE);
				setState(317);
				body();
				}
			}

			setState(320);
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
		enterRule(_localctx, 18, RULE_stmtCHAIN);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(322);
			match(CHAIN);
			setState(323);
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
		enterRule(_localctx, 20, RULE_stmtDATA);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(325);
			match(DATA);
			setState(326);
			literal();
			setState(331);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(327);
				match(COMMA);
				setState(328);
				literal();
				}
				}
				setState(333);
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
		enterRule(_localctx, 22, RULE_stmtDIM);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(335);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(334);
				match(LOCAL);
				}
			}

			setState(337);
			match(DIM);
			setState(338);
			varDeclWithDimension();
			setState(343);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(339);
				match(COMMA);
				setState(340);
				varDeclWithDimension();
				}
				}
				setState(345);
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
		enterRule(_localctx, 24, RULE_stmtEND);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(346);
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
		enterRule(_localctx, 26, RULE_stmtRETURN);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(348);
			match(RETURN);
			setState(350);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				{
				setState(349);
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
		enterRule(_localctx, 28, RULE_stmtDEFFN);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(352);
			match(DEF);
			setState(353);
			fnName();
			setState(354);
			match(LPAREN);
			setState(356);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN || ((((_la - 212)) & ~0x3f) == 0 && ((1L << (_la - 212)) & ((1L << (VARIABLE_FLOAT - 212)) | (1L << (VARIABLE_INTEGER - 212)) | (1L << (VARIABLE_STRING - 212)))) != 0)) {
				{
				setState(355);
				functionVarList();
				}
			}

			setState(358);
			match(RPAREN);
			setState(359);
			body();
			setState(361);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(360);
				linenumber();
				}
			}

			setState(363);
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
		enterRule(_localctx, 30, RULE_stmtDEFPROC);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(365);
			match(DEF);
			setState(366);
			match(PROC_NAME);
			setState(367);
			match(LPAREN);
			setState(369);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN || ((((_la - 212)) & ~0x3f) == 0 && ((1L << (_la - 212)) & ((1L << (VARIABLE_FLOAT - 212)) | (1L << (VARIABLE_INTEGER - 212)) | (1L << (VARIABLE_STRING - 212)))) != 0)) {
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
		enterRule(_localctx, 32, RULE_stmtFOR);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(378);
			match(FOR);
			setState(380);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(379);
				match(LOCAL);
				}
			}

			setState(382);
			justNumberVar();
			setState(383);
			match(EQ);
			setState(384);
			numExpr(0);
			setState(385);
			match(TO);
			setState(386);
			numExpr(0);
			setState(389);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==STEP) {
				{
				setState(387);
				match(STEP);
				setState(388);
				numExpr(0);
				}
			}

			setState(391);
			body();
			setState(393);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(392);
				linenumber();
				}
			}

			setState(395);
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
		enterRule(_localctx, 34, RULE_stmtFORIN);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(397);
			match(FOR);
			setState(399);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(398);
				match(LOCAL);
				}
			}

			setState(401);
			justVar();
			setState(402);
			match(IN);
			setState(403);
			justVar();
			setState(404);
			match(LPAREN);
			setState(405);
			match(RPAREN);
			setState(406);
			body();
			setState(408);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(407);
				linenumber();
				}
			}

			setState(410);
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
		enterRule(_localctx, 36, RULE_stmtCallFN);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(412);
			fnName();
			setState(413);
			match(LPAREN);
			setState(415);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BLACK - 64)) | (1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (LOADTYPEFACE - 128)) | (1L << (POINT - 128)) | (1L << (SCREENWIDTH - 128)) | (1L << (SCREENHEIGHT - 128)) | (1L << (TIME - 128)) | (1L << (PI - 128)) | (1L << (SQR - 128)) | (1L << (LN - 128)) | (1L << (LOG - 128)) | (1L << (EXP - 128)) | (1L << (ATN - 128)) | (1L << (TAN - 128)) | (1L << (COS - 128)) | (1L << (SIN - 128)) | (1L << (ABS - 128)) | (1L << (ACS - 128)) | (1L << (ASN - 128)) | (1L << (DEG - 128)) | (1L << (RAD - 128)) | (1L << (SGN - 128)) | (1L << (ASC - 128)) | (1L << (LEN - 128)) | (1L << (INSTR - 128)) | (1L << (VAL - 128)) | (1L << (TIMES - 128)) | (1L << (STRS - 128)) | (1L << (STRINGS - 128)) | (1L << (CHRS - 128)) | (1L << (LEFTS - 128)) | (1L << (MIDS - 128)) | (1L << (RIGHTS - 128)) | (1L << (RND - 128)) | (1L << (RND0 - 128)) | (1L << (RND1 - 128)) | (1L << (NOT - 128)) | (1L << (PLUS - 128)) | (1L << (MINUS - 128)))) != 0) || ((((_la - 201)) & ~0x3f) == 0 && ((1L << (_la - 201)) & ((1L << (LPAREN - 201)) | (1L << (STRINGLITERAL - 201)) | (1L << (FN_INTEGER - 201)) | (1L << (FN_FLOAT - 201)) | (1L << (FN_STRING - 201)) | (1L << (VARIABLE_FLOAT - 201)) | (1L << (VARIABLE_INTEGER - 201)) | (1L << (VARIABLE_STRING - 201)) | (1L << (VARIABLE_TYPE - 201)) | (1L << (HEXNUMBER - 201)) | (1L << (BINARYNUMBER - 201)) | (1L << (NUMBER - 201)) | (1L << (FLOAT - 201)))) != 0)) {
				{
				setState(414);
				functionParList();
				}
			}

			setState(417);
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
		public ContentContext t;
		public ContentContext f;
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
		enterRule(_localctx, 38, RULE_stmtIF);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(419);
			match(IF);
			setState(420);
			expr();
			setState(421);
			((StmtIFContext)_localctx).t = content();
			setState(424);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,29,_ctx) ) {
			case 1:
				{
				setState(422);
				match(ELSE);
				setState(423);
				((StmtIFContext)_localctx).f = content();
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
		public LineContext t;
		public LineContext f;
		public TerminalNode IF() { return getToken(DARICParser.IF, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode THEN() { return getToken(DARICParser.THEN, 0); }
		public List<TerminalNode> NEWLINE() { return getTokens(DARICParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(DARICParser.NEWLINE, i);
		}
		public TerminalNode ENDIF() { return getToken(DARICParser.ENDIF, 0); }
		public TerminalNode ELSE() { return getToken(DARICParser.ELSE, 0); }
		public LinenumberContext linenumber() {
			return getRuleContext(LinenumberContext.class,0);
		}
		public List<LineContext> line() {
			return getRuleContexts(LineContext.class);
		}
		public LineContext line(int i) {
			return getRuleContext(LineContext.class,i);
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
		enterRule(_localctx, 40, RULE_stmtIFMultiline);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(426);
			match(IF);
			setState(427);
			expr();
			setState(428);
			match(THEN);
			setState(429);
			match(NEWLINE);
			setState(431); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(430);
					((StmtIFMultilineContext)_localctx).t = line();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(433); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,30,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			setState(442);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ELSE) {
				{
				setState(435);
				match(ELSE);
				setState(436);
				match(NEWLINE);
				setState(438); 
				_errHandler.sync(this);
				_alt = 1;
				do {
					switch (_alt) {
					case 1:
						{
						{
						setState(437);
						((StmtIFMultilineContext)_localctx).f = line();
						}
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					setState(440); 
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,31,_ctx);
				} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
				}
			}

			setState(445);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NUMBER) {
				{
				setState(444);
				linenumber();
				}
			}

			setState(447);
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
		enterRule(_localctx, 42, RULE_stmtINSTALL);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(449);
			match(INSTALL);
			setState(450);
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
		enterRule(_localctx, 44, RULE_stmtLET);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(456);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case GLOBAL:
			case LET:
			case VARIABLE_FLOAT:
			case VARIABLE_INTEGER:
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(453);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==GLOBAL || _la==LET) {
					{
					setState(452);
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
				setState(455);
				match(LOCAL);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(458);
			varDecl();
			setState(459);
			match(EQ);
			setState(460);
			expr();
			setState(468);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(461);
				match(COMMA);
				setState(462);
				varDecl();
				setState(463);
				match(EQ);
				setState(464);
				expr();
				}
				}
				setState(470);
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
		enterRule(_localctx, 46, RULE_stmtOSCLI);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(471);
			match(OSCLI);
			setState(472);
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
		enterRule(_localctx, 48, RULE_stmtCallPROC);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(474);
			match(PROC_NAME);
			setState(475);
			match(LPAREN);
			setState(477);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BLACK - 64)) | (1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (LOADTYPEFACE - 128)) | (1L << (POINT - 128)) | (1L << (SCREENWIDTH - 128)) | (1L << (SCREENHEIGHT - 128)) | (1L << (TIME - 128)) | (1L << (PI - 128)) | (1L << (SQR - 128)) | (1L << (LN - 128)) | (1L << (LOG - 128)) | (1L << (EXP - 128)) | (1L << (ATN - 128)) | (1L << (TAN - 128)) | (1L << (COS - 128)) | (1L << (SIN - 128)) | (1L << (ABS - 128)) | (1L << (ACS - 128)) | (1L << (ASN - 128)) | (1L << (DEG - 128)) | (1L << (RAD - 128)) | (1L << (SGN - 128)) | (1L << (ASC - 128)) | (1L << (LEN - 128)) | (1L << (INSTR - 128)) | (1L << (VAL - 128)) | (1L << (TIMES - 128)) | (1L << (STRS - 128)) | (1L << (STRINGS - 128)) | (1L << (CHRS - 128)) | (1L << (LEFTS - 128)) | (1L << (MIDS - 128)) | (1L << (RIGHTS - 128)) | (1L << (RND - 128)) | (1L << (RND0 - 128)) | (1L << (RND1 - 128)) | (1L << (NOT - 128)) | (1L << (PLUS - 128)) | (1L << (MINUS - 128)))) != 0) || ((((_la - 201)) & ~0x3f) == 0 && ((1L << (_la - 201)) & ((1L << (LPAREN - 201)) | (1L << (STRINGLITERAL - 201)) | (1L << (FN_INTEGER - 201)) | (1L << (FN_FLOAT - 201)) | (1L << (FN_STRING - 201)) | (1L << (VARIABLE_FLOAT - 201)) | (1L << (VARIABLE_INTEGER - 201)) | (1L << (VARIABLE_STRING - 201)) | (1L << (VARIABLE_TYPE - 201)) | (1L << (HEXNUMBER - 201)) | (1L << (BINARYNUMBER - 201)) | (1L << (NUMBER - 201)) | (1L << (FLOAT - 201)))) != 0)) {
				{
				setState(476);
				functionParList();
				}
			}

			setState(479);
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
		enterRule(_localctx, 50, RULE_stmtREAD);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(481);
			match(READ);
			setState(482);
			varDecl();
			setState(487);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(483);
				match(COMMA);
				setState(484);
				varDecl();
				}
				}
				setState(489);
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
		enterRule(_localctx, 52, RULE_stmtRESTORE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(490);
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
		enterRule(_localctx, 54, RULE_stmtSWAP);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(492);
			match(SWAP);
			setState(493);
			justVar();
			setState(494);
			match(COMMA);
			setState(495);
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
		enterRule(_localctx, 56, RULE_stmtTRACEON);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(497);
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
		enterRule(_localctx, 58, RULE_stmtTRACEOFF);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(499);
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
		enterRule(_localctx, 60, RULE_stmtTYPE);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(501);
			match(TYPE);
			setState(502);
			varName();
			setState(503);
			match(LPAREN);
			setState(504);
			justVar();
			setState(509);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(505);
				match(COMMA);
				setState(506);
				justVar();
				}
				}
				setState(511);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(512);
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
		enterRule(_localctx, 62, RULE_stmtREPEAT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(514);
			match(REPEAT);
			setState(515);
			body();
			setState(516);
			match(UNTIL);
			setState(517);
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
		enterRule(_localctx, 64, RULE_stmtWHILE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(519);
			match(WHILE);
			setState(520);
			expr();
			setState(521);
			body();
			setState(522);
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
		enterRule(_localctx, 66, RULE_keyMouseStmt);
		try {
			setState(531);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INPUT:
				enterOuterAlt(_localctx, 1);
				{
				setState(524);
				stmtINPUT();
				}
				break;
			case PRINT:
				enterOuterAlt(_localctx, 2);
				{
				setState(525);
				stmtPRINT();
				}
				break;
			case MOUSE:
				enterOuterAlt(_localctx, 3);
				{
				setState(526);
				stmtMOUSE();
				}
				break;
			case INKEY:
				enterOuterAlt(_localctx, 4);
				{
				setState(527);
				stmtINKEY();
				}
				break;
			case INKEYS:
				enterOuterAlt(_localctx, 5);
				{
				setState(528);
				stmtINKEYS();
				}
				break;
			case GET:
				enterOuterAlt(_localctx, 6);
				{
				setState(529);
				stmtGET();
				}
				break;
			case GETS:
				enterOuterAlt(_localctx, 7);
				{
				setState(530);
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
		enterRule(_localctx, 68, RULE_stmtINPUT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(533);
			match(INPUT);
			setState(537);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,41,_ctx) ) {
			case 1:
				{
				setState(534);
				strExpr(0);
				setState(535);
				match(COMMA);
				}
				break;
			}
			setState(539);
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
		enterRule(_localctx, 70, RULE_stmtPRINT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(541);
			match(PRINT);
			setState(543);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,42,_ctx) ) {
			case 1:
				{
				setState(542);
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
		enterRule(_localctx, 72, RULE_stmtMOUSE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(545);
			match(MOUSE);
			setState(546);
			varNameInteger();
			setState(547);
			match(COMMA);
			setState(548);
			varNameInteger();
			setState(549);
			match(COMMA);
			setState(550);
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
		enterRule(_localctx, 74, RULE_stmtINKEY);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(552);
			match(INKEY);
			setState(553);
			match(LPAREN);
			setState(554);
			numExpr(0);
			setState(555);
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
		enterRule(_localctx, 76, RULE_stmtINKEYS);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(557);
			match(INKEYS);
			setState(558);
			match(LPAREN);
			setState(559);
			numExpr(0);
			setState(560);
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
		enterRule(_localctx, 78, RULE_stmtGET);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(562);
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
		enterRule(_localctx, 80, RULE_stmtGETS);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(564);
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
		enterRule(_localctx, 82, RULE_stmtOperatorEqual);
		try {
			setState(590);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(566);
				varDecl();
				setState(567);
				match(MULTIPLY_E);
				setState(568);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(570);
				varDecl();
				setState(571);
				match(DIVIDE_E);
				setState(572);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(574);
				varDecl();
				setState(575);
				match(PLUS_E);
				setState(576);
				numExpr(0);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(578);
				varDecl();
				setState(579);
				match(MINUS_E);
				setState(580);
				numExpr(0);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(582);
				varDecl();
				setState(583);
				match(SHL_E);
				setState(584);
				numExpr(0);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(586);
				varDecl();
				setState(587);
				match(SHR_E);
				setState(588);
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
		enterRule(_localctx, 84, RULE_ioStmt);
		try {
			setState(597);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BPUTH:
				enterOuterAlt(_localctx, 1);
				{
				setState(592);
				stmtBPUTH();
				}
				break;
			case BGETH:
				enterOuterAlt(_localctx, 2);
				{
				setState(593);
				stmtBGETH();
				}
				break;
			case PTRH:
				enterOuterAlt(_localctx, 3);
				{
				setState(594);
				stmtPTRH();
				}
				break;
			case CLOSEH:
				enterOuterAlt(_localctx, 4);
				{
				setState(595);
				stmtCLOSEH();
				}
				break;
			case LOCAL:
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 5);
				{
				setState(596);
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
		enterRule(_localctx, 86, RULE_stmtBPUTH);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(599);
			match(BPUTH);
			setState(600);
			numExpr(0);
			setState(601);
			match(COMMA);
			setState(602);
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
		enterRule(_localctx, 88, RULE_stmtBGETH);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(604);
			match(BGETH);
			setState(605);
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
		enterRule(_localctx, 90, RULE_stmtPTRH);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(607);
			match(PTRH);
			setState(608);
			numExpr(0);
			setState(609);
			match(EQ);
			setState(610);
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
		enterRule(_localctx, 92, RULE_stmtCLOSEH);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(612);
			match(CLOSEH);
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
		enterRule(_localctx, 94, RULE_stmtLISTFILES);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(616);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(615);
				match(LOCAL);
				}
			}

			setState(618);
			varNameString();
			setState(619);
			match(LPAREN);
			setState(620);
			match(RPAREN);
			setState(621);
			match(EQ);
			setState(622);
			match(LISTFILES);
			setState(623);
			match(LPAREN);
			setState(624);
			strExpr(0);
			setState(625);
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
		enterRule(_localctx, 96, RULE_graphicsStmt);
		try {
			setState(650);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CLS:
				enterOuterAlt(_localctx, 1);
				{
				setState(627);
				stmtCLS();
				}
				break;
			case COLOUR:
				enterOuterAlt(_localctx, 2);
				{
				setState(628);
				stmtCOLOUR();
				}
				break;
			case COLOURBG:
				enterOuterAlt(_localctx, 3);
				{
				setState(629);
				stmtCOLOURBG();
				}
				break;
			case GRAPHICS:
				enterOuterAlt(_localctx, 4);
				{
				setState(630);
				stmtGRAPHICS();
				}
				break;
			case FLIP:
				enterOuterAlt(_localctx, 5);
				{
				setState(631);
				stmtFLIP();
				}
				break;
			case CIRCLE:
				enterOuterAlt(_localctx, 6);
				{
				setState(632);
				stmtCIRCLE();
				}
				break;
			case LINE:
				enterOuterAlt(_localctx, 7);
				{
				setState(633);
				stmtLINE();
				}
				break;
			case RECTANGLE:
				enterOuterAlt(_localctx, 8);
				{
				setState(634);
				stmtRECTANGLE();
				}
				break;
			case TRIANGLE:
				enterOuterAlt(_localctx, 9);
				{
				setState(635);
				stmtTRIANGLE();
				}
				break;
			case PLOT:
				enterOuterAlt(_localctx, 10);
				{
				setState(636);
				stmtPLOT();
				}
				break;
			case CLIPON:
				enterOuterAlt(_localctx, 11);
				{
				setState(637);
				stmtCLIPON();
				}
				break;
			case CLIPOFF:
				enterOuterAlt(_localctx, 12);
				{
				setState(638);
				stmtCLIPOFF();
				}
				break;
			case TEXT:
				enterOuterAlt(_localctx, 13);
				{
				setState(639);
				stmtTEXT();
				}
				break;
			case TEXTRIGHT:
				enterOuterAlt(_localctx, 14);
				{
				setState(640);
				stmtTEXTRIGHT();
				}
				break;
			case TEXTCENTRE:
			case TEXTCENTER:
				enterOuterAlt(_localctx, 15);
				{
				setState(641);
				stmtTEXTCENTRE();
				}
				break;
			case SHOWFPS:
				enterOuterAlt(_localctx, 16);
				{
				setState(642);
				stmtSHOWFPS();
				}
				break;
			case RENDERFRAME:
				enterOuterAlt(_localctx, 17);
				{
				setState(643);
				stmtRENDERFRAME();
				}
				break;
			case CREATEVERTEX:
				enterOuterAlt(_localctx, 18);
				{
				setState(644);
				stmtCREATEVERTEX();
				}
				break;
			case CREATETRIANGLE:
				enterOuterAlt(_localctx, 19);
				{
				setState(645);
				stmtCREATETRIANGLE();
				}
				break;
			case TRANSLATE:
				enterOuterAlt(_localctx, 20);
				{
				setState(646);
				stmtTRANSLATE();
				}
				break;
			case ROTATE:
				enterOuterAlt(_localctx, 21);
				{
				setState(647);
				stmtROTATE();
				}
				break;
			case SCALE:
				enterOuterAlt(_localctx, 22);
				{
				setState(648);
				stmtSCALE();
				}
				break;
			case DELETEOBJECT:
				enterOuterAlt(_localctx, 23);
				{
				setState(649);
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
		enterRule(_localctx, 98, RULE_stmtCLS);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(652);
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
		enterRule(_localctx, 100, RULE_stmtCOLOUR);
		try {
			setState(663);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,47,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(654);
				match(COLOUR);
				setState(655);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(656);
				match(COLOUR);
				setState(657);
				numExpr(0);
				setState(658);
				match(COMMA);
				setState(659);
				numExpr(0);
				setState(660);
				match(COMMA);
				setState(661);
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
		enterRule(_localctx, 102, RULE_stmtCOLOURBG);
		try {
			setState(674);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,48,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(665);
				match(COLOURBG);
				setState(666);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(667);
				match(COLOURBG);
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
		enterRule(_localctx, 104, RULE_stmtGRAPHICS);
		try {
			setState(690);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,49,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(676);
				match(GRAPHICS);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(677);
				match(GRAPHICS);
				setState(678);
				numExpr(0);
				setState(679);
				match(COMMA);
				setState(680);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(682);
				match(GRAPHICS);
				setState(683);
				match(BANKED);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(684);
				match(GRAPHICS);
				setState(685);
				match(BANKED);
				setState(686);
				numExpr(0);
				setState(687);
				match(COMMA);
				setState(688);
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
		enterRule(_localctx, 106, RULE_stmtFLIP);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(692);
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
		enterRule(_localctx, 108, RULE_stmtCIRCLE);
		try {
			setState(709);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,50,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(694);
				match(CIRCLE);
				setState(695);
				numExpr(0);
				setState(696);
				match(COMMA);
				setState(697);
				numExpr(0);
				setState(698);
				match(COMMA);
				setState(699);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(701);
				match(CIRCLE);
				setState(702);
				match(FILL);
				setState(703);
				numExpr(0);
				setState(704);
				match(COMMA);
				setState(705);
				numExpr(0);
				setState(706);
				match(COMMA);
				setState(707);
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
		enterRule(_localctx, 110, RULE_stmtLINE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(711);
			match(LINE);
			setState(712);
			numExpr(0);
			setState(713);
			match(COMMA);
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
		}
		catch (RecognitionException re) {
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
		enterRule(_localctx, 112, RULE_stmtRECTANGLE);
		try {
			setState(739);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,51,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(720);
				match(RECTANGLE);
				setState(721);
				numExpr(0);
				setState(722);
				match(COMMA);
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
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(729);
				match(RECTANGLE);
				setState(730);
				match(FILL);
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
		enterRule(_localctx, 114, RULE_stmtTRIANGLE);
		try {
			setState(788);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,52,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(741);
				match(TRIANGLE);
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
				setState(749);
				match(COMMA);
				setState(750);
				numExpr(0);
				setState(751);
				match(COMMA);
				setState(752);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(754);
				match(TRIANGLE);
				setState(755);
				match(FILL);
				setState(756);
				numExpr(0);
				setState(757);
				match(COMMA);
				setState(758);
				numExpr(0);
				setState(759);
				match(COMMA);
				setState(760);
				numExpr(0);
				setState(761);
				match(COMMA);
				setState(762);
				numExpr(0);
				setState(763);
				match(COMMA);
				setState(764);
				numExpr(0);
				setState(765);
				match(COMMA);
				setState(766);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(768);
				match(TRIANGLE);
				setState(769);
				match(SHADED);
				setState(770);
				numExpr(0);
				setState(771);
				match(COMMA);
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
				setState(783);
				match(COMMA);
				setState(784);
				numExpr(0);
				setState(785);
				match(COMMA);
				setState(786);
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
		enterRule(_localctx, 116, RULE_stmtPLOT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(790);
			match(PLOT);
			setState(791);
			numExpr(0);
			setState(792);
			match(COMMA);
			setState(793);
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
		enterRule(_localctx, 118, RULE_stmtCLIPON);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(795);
			match(CLIPON);
			setState(796);
			numExpr(0);
			setState(797);
			match(COMMA);
			setState(798);
			numExpr(0);
			setState(799);
			match(COMMA);
			setState(800);
			numExpr(0);
			setState(801);
			match(COMMA);
			setState(802);
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
		enterRule(_localctx, 120, RULE_stmtCLIPOFF);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(804);
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
		enterRule(_localctx, 122, RULE_stmtTEXT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(806);
			match(TEXT);
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
		enterRule(_localctx, 124, RULE_stmtTEXTRIGHT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(815);
			match(TEXTRIGHT);
			setState(816);
			numExpr(0);
			setState(817);
			match(COMMA);
			setState(818);
			numExpr(0);
			setState(819);
			match(COMMA);
			setState(820);
			numExpr(0);
			setState(821);
			match(COMMA);
			setState(822);
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
		enterRule(_localctx, 126, RULE_stmtTEXTCENTRE);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(824);
			_la = _input.LA(1);
			if ( !(_la==TEXTCENTRE || _la==TEXTCENTER) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(825);
			numExpr(0);
			setState(826);
			match(COMMA);
			setState(827);
			numExpr(0);
			setState(828);
			match(COMMA);
			setState(829);
			numExpr(0);
			setState(830);
			match(COMMA);
			setState(831);
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
		enterRule(_localctx, 128, RULE_stmtSHOWFPS);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(833);
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
		enterRule(_localctx, 130, RULE_stmtRENDERFRAME);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(835);
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
		enterRule(_localctx, 132, RULE_stmtCREATEVERTEX);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(837);
			match(CREATEVERTEX);
			setState(838);
			varNameType();
			setState(839);
			match(LPAREN);
			setState(840);
			numExpr(0);
			setState(841);
			match(RPAREN);
			setState(842);
			match(COMMA);
			setState(843);
			numExpr(0);
			setState(844);
			match(COMMA);
			setState(845);
			numExpr(0);
			setState(846);
			match(COMMA);
			setState(847);
			numExpr(0);
			setState(848);
			match(COMMA);
			setState(849);
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
		enterRule(_localctx, 134, RULE_stmtCREATETRIANGLE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(851);
			match(CREATETRIANGLE);
			setState(852);
			varNameType();
			setState(853);
			match(LPAREN);
			setState(854);
			numExpr(0);
			setState(855);
			match(RPAREN);
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
			numExpr(0);
			setState(862);
			match(COMMA);
			setState(863);
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
		enterRule(_localctx, 136, RULE_stmtTRANSLATE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(865);
			match(TRANSLATE);
			setState(866);
			numExpr(0);
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
			}
		}
		catch (RecognitionException re) {
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
		enterRule(_localctx, 138, RULE_stmtROTATE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(874);
			match(ROTATE);
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
			setState(880);
			match(COMMA);
			setState(881);
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
		enterRule(_localctx, 140, RULE_stmtSCALE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(883);
			match(SCALE);
			setState(884);
			numExpr(0);
			setState(885);
			match(COMMA);
			setState(886);
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
		enterRule(_localctx, 142, RULE_stmtDELETEOBJECT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(888);
			match(DELETEOBJECT);
			setState(889);
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
		enterRule(_localctx, 144, RULE_when);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(891);
			match(WHEN);
			setState(892);
			expr();
			setState(897);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(893);
				match(COMMA);
				setState(894);
				expr();
				}
				}
				setState(899);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(900);
			match(COLON);
			setState(901);
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
		enterRule(_localctx, 146, RULE_fnName);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(903);
			_la = _input.LA(1);
			if ( !(((((_la - 209)) & ~0x3f) == 0 && ((1L << (_la - 209)) & ((1L << (FN_INTEGER - 209)) | (1L << (FN_FLOAT - 209)) | (1L << (FN_STRING - 209)))) != 0)) ) {
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
		enterRule(_localctx, 148, RULE_literal);
		try {
			setState(907);
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
				setState(905);
				number();
				}
				break;
			case STRINGLITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(906);
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
		enterRule(_localctx, 150, RULE_var);
		try {
			setState(912);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,55,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(909);
				numVar();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(910);
				strVar();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(911);
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
		enterRule(_localctx, 152, RULE_typeVar);
		try {
			_localctx = new TypeVarTypeContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(914);
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
		enterRule(_localctx, 154, RULE_numVar);
		int _la;
		try {
			setState(966);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,60,_ctx) ) {
			case 1:
				_localctx = new NumVarFloatArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(916);
				varName();
				setState(917);
				match(LPAREN);
				setState(918);
				numExpr(0);
				setState(921);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(919);
					match(COMMA);
					setState(920);
					numExpr(0);
					}
				}

				setState(923);
				match(RPAREN);
				}
				break;
			case 2:
				_localctx = new NumVarIntegerArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(925);
				varNameInteger();
				setState(926);
				match(LPAREN);
				setState(927);
				numExpr(0);
				setState(930);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(928);
					match(COMMA);
					setState(929);
					numExpr(0);
					}
				}

				setState(932);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new NumVarIntegerFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(934);
				typeVar();
				setState(935);
				match(LPAREN);
				setState(936);
				numExpr(0);
				setState(937);
				match(RPAREN);
				setState(938);
				varNameInteger();
				}
				break;
			case 4:
				_localctx = new NumVarFloatFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(940);
				typeVar();
				setState(941);
				match(LPAREN);
				setState(942);
				numExpr(0);
				setState(943);
				match(RPAREN);
				setState(944);
				varName();
				}
				break;
			case 5:
				_localctx = new NumVarFloatFNContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(946);
				match(FN_FLOAT);
				setState(947);
				match(LPAREN);
				setState(949);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BLACK - 64)) | (1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (LOADTYPEFACE - 128)) | (1L << (POINT - 128)) | (1L << (SCREENWIDTH - 128)) | (1L << (SCREENHEIGHT - 128)) | (1L << (TIME - 128)) | (1L << (PI - 128)) | (1L << (SQR - 128)) | (1L << (LN - 128)) | (1L << (LOG - 128)) | (1L << (EXP - 128)) | (1L << (ATN - 128)) | (1L << (TAN - 128)) | (1L << (COS - 128)) | (1L << (SIN - 128)) | (1L << (ABS - 128)) | (1L << (ACS - 128)) | (1L << (ASN - 128)) | (1L << (DEG - 128)) | (1L << (RAD - 128)) | (1L << (SGN - 128)) | (1L << (ASC - 128)) | (1L << (LEN - 128)) | (1L << (INSTR - 128)) | (1L << (VAL - 128)) | (1L << (TIMES - 128)) | (1L << (STRS - 128)) | (1L << (STRINGS - 128)) | (1L << (CHRS - 128)) | (1L << (LEFTS - 128)) | (1L << (MIDS - 128)) | (1L << (RIGHTS - 128)) | (1L << (RND - 128)) | (1L << (RND0 - 128)) | (1L << (RND1 - 128)) | (1L << (NOT - 128)) | (1L << (PLUS - 128)) | (1L << (MINUS - 128)))) != 0) || ((((_la - 201)) & ~0x3f) == 0 && ((1L << (_la - 201)) & ((1L << (LPAREN - 201)) | (1L << (STRINGLITERAL - 201)) | (1L << (FN_INTEGER - 201)) | (1L << (FN_FLOAT - 201)) | (1L << (FN_STRING - 201)) | (1L << (VARIABLE_FLOAT - 201)) | (1L << (VARIABLE_INTEGER - 201)) | (1L << (VARIABLE_STRING - 201)) | (1L << (VARIABLE_TYPE - 201)) | (1L << (HEXNUMBER - 201)) | (1L << (BINARYNUMBER - 201)) | (1L << (NUMBER - 201)) | (1L << (FLOAT - 201)))) != 0)) {
					{
					setState(948);
					functionParList();
					}
				}

				setState(951);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new NumVarIntegerFNContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(952);
				match(FN_INTEGER);
				setState(953);
				match(LPAREN);
				setState(955);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BLACK - 64)) | (1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (LOADTYPEFACE - 128)) | (1L << (POINT - 128)) | (1L << (SCREENWIDTH - 128)) | (1L << (SCREENHEIGHT - 128)) | (1L << (TIME - 128)) | (1L << (PI - 128)) | (1L << (SQR - 128)) | (1L << (LN - 128)) | (1L << (LOG - 128)) | (1L << (EXP - 128)) | (1L << (ATN - 128)) | (1L << (TAN - 128)) | (1L << (COS - 128)) | (1L << (SIN - 128)) | (1L << (ABS - 128)) | (1L << (ACS - 128)) | (1L << (ASN - 128)) | (1L << (DEG - 128)) | (1L << (RAD - 128)) | (1L << (SGN - 128)) | (1L << (ASC - 128)) | (1L << (LEN - 128)) | (1L << (INSTR - 128)) | (1L << (VAL - 128)) | (1L << (TIMES - 128)) | (1L << (STRS - 128)) | (1L << (STRINGS - 128)) | (1L << (CHRS - 128)) | (1L << (LEFTS - 128)) | (1L << (MIDS - 128)) | (1L << (RIGHTS - 128)) | (1L << (RND - 128)) | (1L << (RND0 - 128)) | (1L << (RND1 - 128)) | (1L << (NOT - 128)) | (1L << (PLUS - 128)) | (1L << (MINUS - 128)))) != 0) || ((((_la - 201)) & ~0x3f) == 0 && ((1L << (_la - 201)) & ((1L << (LPAREN - 201)) | (1L << (STRINGLITERAL - 201)) | (1L << (FN_INTEGER - 201)) | (1L << (FN_FLOAT - 201)) | (1L << (FN_STRING - 201)) | (1L << (VARIABLE_FLOAT - 201)) | (1L << (VARIABLE_INTEGER - 201)) | (1L << (VARIABLE_STRING - 201)) | (1L << (VARIABLE_TYPE - 201)) | (1L << (HEXNUMBER - 201)) | (1L << (BINARYNUMBER - 201)) | (1L << (NUMBER - 201)) | (1L << (FLOAT - 201)))) != 0)) {
					{
					setState(954);
					functionParList();
					}
				}

				setState(957);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new NumVarFloatContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(958);
				varName();
				}
				break;
			case 8:
				_localctx = new NumVarIntegerContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(959);
				varNameInteger();
				}
				break;
			case 9:
				_localctx = new NumVarFloatFieldContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(960);
				typeVar();
				setState(961);
				varName();
				}
				break;
			case 10:
				_localctx = new NumVarIntegerFieldContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(963);
				typeVar();
				setState(964);
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
		enterRule(_localctx, 156, RULE_strVar);
		int _la;
		try {
			setState(993);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,63,_ctx) ) {
			case 1:
				_localctx = new NumVarStringArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(968);
				varNameString();
				setState(969);
				match(LPAREN);
				setState(970);
				numExpr(0);
				setState(973);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(971);
					match(COMMA);
					setState(972);
					numExpr(0);
					}
				}

				setState(975);
				match(RPAREN);
				}
				break;
			case 2:
				_localctx = new NumVarStringFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(977);
				typeVar();
				setState(978);
				match(LPAREN);
				setState(979);
				numExpr(0);
				setState(980);
				match(RPAREN);
				setState(981);
				varNameString();
				}
				break;
			case 3:
				_localctx = new NumVarStringContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(983);
				varNameString();
				}
				break;
			case 4:
				_localctx = new NumVarStringFieldContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(984);
				typeVar();
				setState(985);
				varNameString();
				}
				break;
			case 5:
				_localctx = new NumVarStringFNContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(987);
				match(FN_STRING);
				setState(988);
				match(LPAREN);
				setState(990);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BLACK - 64)) | (1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (LOADTYPEFACE - 128)) | (1L << (POINT - 128)) | (1L << (SCREENWIDTH - 128)) | (1L << (SCREENHEIGHT - 128)) | (1L << (TIME - 128)) | (1L << (PI - 128)) | (1L << (SQR - 128)) | (1L << (LN - 128)) | (1L << (LOG - 128)) | (1L << (EXP - 128)) | (1L << (ATN - 128)) | (1L << (TAN - 128)) | (1L << (COS - 128)) | (1L << (SIN - 128)) | (1L << (ABS - 128)) | (1L << (ACS - 128)) | (1L << (ASN - 128)) | (1L << (DEG - 128)) | (1L << (RAD - 128)) | (1L << (SGN - 128)) | (1L << (ASC - 128)) | (1L << (LEN - 128)) | (1L << (INSTR - 128)) | (1L << (VAL - 128)) | (1L << (TIMES - 128)) | (1L << (STRS - 128)) | (1L << (STRINGS - 128)) | (1L << (CHRS - 128)) | (1L << (LEFTS - 128)) | (1L << (MIDS - 128)) | (1L << (RIGHTS - 128)) | (1L << (RND - 128)) | (1L << (RND0 - 128)) | (1L << (RND1 - 128)) | (1L << (NOT - 128)) | (1L << (PLUS - 128)) | (1L << (MINUS - 128)))) != 0) || ((((_la - 201)) & ~0x3f) == 0 && ((1L << (_la - 201)) & ((1L << (LPAREN - 201)) | (1L << (STRINGLITERAL - 201)) | (1L << (FN_INTEGER - 201)) | (1L << (FN_FLOAT - 201)) | (1L << (FN_STRING - 201)) | (1L << (VARIABLE_FLOAT - 201)) | (1L << (VARIABLE_INTEGER - 201)) | (1L << (VARIABLE_STRING - 201)) | (1L << (VARIABLE_TYPE - 201)) | (1L << (HEXNUMBER - 201)) | (1L << (BINARYNUMBER - 201)) | (1L << (NUMBER - 201)) | (1L << (FLOAT - 201)))) != 0)) {
					{
					setState(989);
					functionParList();
					}
				}

				setState(992);
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
		enterRule(_localctx, 158, RULE_justVar);
		try {
			setState(998);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(995);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(996);
				varNameInteger();
				}
				break;
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(997);
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
		enterRule(_localctx, 160, RULE_justNumberVar);
		try {
			setState(1002);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(1000);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(1001);
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
		enterRule(_localctx, 162, RULE_varName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1004);
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
		enterRule(_localctx, 164, RULE_varNameInteger);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1006);
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
		enterRule(_localctx, 166, RULE_varNameString);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1008);
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
		enterRule(_localctx, 168, RULE_varNameType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1010);
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
		enterRule(_localctx, 170, RULE_varDecl);
		int _la;
		try {
			setState(1051);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,68,_ctx) ) {
			case 1:
				_localctx = new VarDeclIndContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1012);
				justVar();
				}
				break;
			case 2:
				_localctx = new VarDeclArrayedContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1013);
				justVar();
				setState(1024);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==LPAREN) {
					{
					{
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
					}
					setState(1026);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 3:
				_localctx = new VarDeclTypeVarContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1027);
				typeVar();
				setState(1028);
				varName();
				}
				break;
			case 4:
				_localctx = new VarDeclTypeVarContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1030);
				typeVar();
				setState(1031);
				varNameInteger();
				}
				break;
			case 5:
				_localctx = new VarDeclTypeVarArrayedContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1033);
				typeVar();
				setState(1034);
				match(LPAREN);
				setState(1035);
				numExpr(0);
				setState(1036);
				match(RPAREN);
				setState(1037);
				varName();
				}
				break;
			case 6:
				_localctx = new VarDeclTypeVarArrayedContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1039);
				typeVar();
				setState(1040);
				match(LPAREN);
				setState(1041);
				numExpr(0);
				setState(1042);
				match(RPAREN);
				setState(1043);
				varNameInteger();
				}
				break;
			case 7:
				_localctx = new VarDeclTypeContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1045);
				typeVar();
				}
				break;
			case 8:
				_localctx = new VarDeclTypeArrayedContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1046);
				typeVar();
				setState(1047);
				match(LPAREN);
				setState(1048);
				numExpr(0);
				setState(1049);
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
		enterRule(_localctx, 172, RULE_varDeclWithDimension);
		int _la;
		try {
			setState(1072);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
			case VARIABLE_INTEGER:
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 1);
				{
				setState(1053);
				justVar();
				setState(1054);
				match(LPAREN);
				setState(1055);
				numExpr(0);
				setState(1060);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(1056);
					match(COMMA);
					setState(1057);
					numExpr(0);
					}
					}
					setState(1062);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1063);
				match(RPAREN);
				}
				break;
			case VARIABLE_TYPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(1065);
				typeVar();
				setState(1066);
				match(LPAREN);
				setState(1067);
				numExpr(0);
				setState(1068);
				match(COMMA);
				setState(1069);
				varName();
				setState(1070);
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
		enterRule(_localctx, 174, RULE_varList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1074);
			varDecl();
			setState(1079);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1075);
				match(COMMA);
				setState(1076);
				varDecl();
				}
				}
				setState(1081);
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
		enterRule(_localctx, 176, RULE_functionVarList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1083);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN) {
				{
				setState(1082);
				match(RETURN);
				}
			}

			setState(1085);
			justVar();
			setState(1093);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1086);
				match(COMMA);
				setState(1088);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN) {
					{
					setState(1087);
					match(RETURN);
					}
				}

				setState(1090);
				justVar();
				}
				}
				setState(1095);
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
		enterRule(_localctx, 178, RULE_functionParList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1096);
			expr();
			setState(1101);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1097);
				match(COMMA);
				setState(1098);
				expr();
				}
				}
				setState(1103);
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
		enterRule(_localctx, 180, RULE_exprList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1104);
			expr();
			setState(1109);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1105);
				match(COMMA);
				setState(1106);
				expr();
				}
				}
				setState(1111);
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
		enterRule(_localctx, 182, RULE_printListItem);
		int _la;
		try {
			setState(1123);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,78,_ctx) ) {
			case 1:
				_localctx = new PrintListExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1113);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TILDE) {
					{
					setState(1112);
					match(TILDE);
					}
				}

				setState(1115);
				expr();
				}
				break;
			case 2:
				_localctx = new PrintListSPCPContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1116);
				match(SPC);
				setState(1117);
				match(LPAREN);
				setState(1118);
				numExpr(0);
				setState(1119);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new PrintListSPCContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1121);
				match(SPC);
				setState(1122);
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
		enterRule(_localctx, 184, RULE_printListTick);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1126); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(1125);
				match(TICK);
				}
				}
				setState(1128); 
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
		enterRule(_localctx, 186, RULE_printListSeparator);
		try {
			setState(1133);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COMMA:
				enterOuterAlt(_localctx, 1);
				{
				setState(1130);
				match(COMMA);
				}
				break;
			case SEMICOLON:
				enterOuterAlt(_localctx, 2);
				{
				setState(1131);
				match(SEMICOLON);
				}
				break;
			case TICK:
				enterOuterAlt(_localctx, 3);
				{
				setState(1132);
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
		enterRule(_localctx, 188, RULE_printList);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1136);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TICK) {
				{
				setState(1135);
				printListTick();
				}
			}

			setState(1139);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(1138);
				((PrintListContext)_localctx).s1 = match(SEMICOLON);
				}
			}

			setState(1141);
			printListItem();
			setState(1147);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,83,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1142);
					printListSeparator();
					setState(1143);
					printListItem();
					}
					} 
				}
				setState(1149);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,83,_ctx);
			}
			setState(1151);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(1150);
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
		enterRule(_localctx, 190, RULE_expr);
		try {
			setState(1155);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,85,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1153);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1154);
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
		enterRule(_localctx, 192, RULE_number);
		try {
			setState(1163);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,86,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1157);
				numberInteger();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1158);
				numberFloat();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1159);
				numberHex();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1160);
				numberBinary();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1161);
				numColours();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1162);
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
		enterRule(_localctx, 194, RULE_numberInteger);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1166);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(1165);
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

			setState(1168);
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
		enterRule(_localctx, 196, RULE_numberHex);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1170);
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
		enterRule(_localctx, 198, RULE_numberBinary);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1172);
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
		enterRule(_localctx, 200, RULE_numberFloat);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1175);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(1174);
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

			setState(1177);
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
		enterRule(_localctx, 202, RULE_strFunc);
		try {
			setState(1229);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,89,_ctx) ) {
			case 1:
				_localctx = new StrFuncTIMESContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1179);
				match(TIMES);
				}
				break;
			case 2:
				_localctx = new StrFuncCHRSContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1180);
				match(CHRS);
				setState(1181);
				match(LPAREN);
				setState(1182);
				numExpr(0);
				setState(1183);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new StrFuncLEFTSContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1185);
				match(LEFTS);
				setState(1186);
				match(LPAREN);
				setState(1187);
				strExpr(0);
				setState(1188);
				match(COMMA);
				setState(1189);
				numExpr(0);
				setState(1190);
				match(RPAREN);
				}
				break;
			case 4:
				_localctx = new StrFuncMIDS3Context(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1192);
				match(MIDS);
				setState(1193);
				match(LPAREN);
				setState(1194);
				strExpr(0);
				setState(1195);
				match(COMMA);
				setState(1196);
				numExpr(0);
				setState(1197);
				match(COMMA);
				setState(1198);
				numExpr(0);
				setState(1199);
				match(RPAREN);
				}
				break;
			case 5:
				_localctx = new StrFuncMIDS2Context(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1201);
				match(MIDS);
				setState(1202);
				match(LPAREN);
				setState(1203);
				strExpr(0);
				setState(1204);
				match(COMMA);
				setState(1205);
				numExpr(0);
				setState(1206);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new StrFuncRIGHTSContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1208);
				match(RIGHTS);
				setState(1209);
				match(LPAREN);
				setState(1210);
				strExpr(0);
				setState(1211);
				match(COMMA);
				setState(1212);
				numExpr(0);
				setState(1213);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new StrFuncSTRSContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1215);
				match(STRS);
				setState(1216);
				numExpr(0);
				}
				break;
			case 8:
				_localctx = new StrFuncSTRSHEXContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1217);
				match(STRS);
				setState(1218);
				match(TILDE);
				setState(1219);
				numExpr(0);
				}
				break;
			case 9:
				_localctx = new StrFuncSTRINGSContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(1220);
				match(STRINGS);
				setState(1221);
				match(LPAREN);
				setState(1222);
				numExpr(0);
				setState(1223);
				match(COMMA);
				setState(1224);
				strExpr(0);
				setState(1225);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new StrFuncINKEYSContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(1227);
				match(INKEYS);
				setState(1228);
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
		enterRule(_localctx, 204, RULE_string);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1231);
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
		int _startState = 206;
		enterRecursionRule(_localctx, 206, RULE_strExpr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1241);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LPAREN:
				{
				setState(1234);
				match(LPAREN);
				setState(1235);
				strExpr(0);
				setState(1236);
				match(RPAREN);
				}
				break;
			case INKEYS:
			case TIMES:
			case STRS:
			case STRINGS:
			case CHRS:
			case LEFTS:
			case MIDS:
			case RIGHTS:
				{
				setState(1238);
				strFunc();
				}
				break;
			case FN_STRING:
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(1239);
				strVar();
				}
				break;
			case STRINGLITERAL:
				{
				setState(1240);
				string();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(1248);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,91,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StrExprContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_strExpr);
					setState(1243);
					if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
					setState(1244);
					match(PLUS);
					setState(1245);
					strExpr(4);
					}
					} 
				}
				setState(1250);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,91,_ctx);
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
		enterRule(_localctx, 208, RULE_numFunc);
		int _la;
		try {
			setState(1441);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,92,_ctx) ) {
			case 1:
				_localctx = new NumFuncPIContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1251);
				match(PI);
				}
				break;
			case 2:
				_localctx = new NumFuncFALSEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1252);
				match(FALSE);
				}
				break;
			case 3:
				_localctx = new NumFuncTRUEContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1253);
				match(TRUE);
				}
				break;
			case 4:
				_localctx = new NumFuncTIMEContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1254);
				match(TIME);
				}
				break;
			case 5:
				_localctx = new NumFuncRNDRANGEContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1255);
				match(RND);
				setState(1256);
				match(LPAREN);
				setState(1257);
				numExpr(0);
				setState(1258);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new NumFuncRNDContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1260);
				match(RND);
				}
				break;
			case 7:
				_localctx = new NumFuncRND0Context(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1261);
				match(RND0);
				}
				break;
			case 8:
				_localctx = new NumFuncRND1Context(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1262);
				match(RND1);
				}
				break;
			case 9:
				_localctx = new NumFuncLNContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(1263);
				match(LN);
				setState(1264);
				match(LPAREN);
				setState(1265);
				numExpr(0);
				setState(1266);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new NumFuncLOGContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(1268);
				match(LOG);
				setState(1269);
				match(LPAREN);
				setState(1270);
				numExpr(0);
				setState(1271);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new NumFuncEXPContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(1273);
				match(EXP);
				setState(1274);
				match(LPAREN);
				setState(1275);
				numExpr(0);
				setState(1276);
				match(RPAREN);
				}
				break;
			case 12:
				_localctx = new NumFuncATNContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(1278);
				match(ATN);
				setState(1279);
				match(LPAREN);
				setState(1280);
				numExpr(0);
				setState(1281);
				match(RPAREN);
				}
				break;
			case 13:
				_localctx = new NumFuncTANContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(1283);
				match(TAN);
				setState(1284);
				match(LPAREN);
				setState(1285);
				numExpr(0);
				setState(1286);
				match(RPAREN);
				}
				break;
			case 14:
				_localctx = new NumFuncCOSContext(_localctx);
				enterOuterAlt(_localctx, 14);
				{
				setState(1288);
				match(COS);
				setState(1289);
				match(LPAREN);
				setState(1290);
				numExpr(0);
				setState(1291);
				match(RPAREN);
				}
				break;
			case 15:
				_localctx = new NumFuncSINContext(_localctx);
				enterOuterAlt(_localctx, 15);
				{
				setState(1293);
				match(SIN);
				setState(1294);
				match(LPAREN);
				setState(1295);
				numExpr(0);
				setState(1296);
				match(RPAREN);
				}
				break;
			case 16:
				_localctx = new NumFuncABSContext(_localctx);
				enterOuterAlt(_localctx, 16);
				{
				setState(1298);
				match(ABS);
				setState(1299);
				match(LPAREN);
				setState(1300);
				numExpr(0);
				setState(1301);
				match(RPAREN);
				}
				break;
			case 17:
				_localctx = new NumFuncACSContext(_localctx);
				enterOuterAlt(_localctx, 17);
				{
				setState(1303);
				match(ACS);
				setState(1304);
				match(LPAREN);
				setState(1305);
				numExpr(0);
				setState(1306);
				match(RPAREN);
				}
				break;
			case 18:
				_localctx = new NumFuncASNContext(_localctx);
				enterOuterAlt(_localctx, 18);
				{
				setState(1308);
				match(ASN);
				setState(1309);
				match(LPAREN);
				setState(1310);
				numExpr(0);
				setState(1311);
				match(RPAREN);
				}
				break;
			case 19:
				_localctx = new NumFuncDEGContext(_localctx);
				enterOuterAlt(_localctx, 19);
				{
				setState(1313);
				match(DEG);
				setState(1314);
				match(LPAREN);
				setState(1315);
				numExpr(0);
				setState(1316);
				match(RPAREN);
				}
				break;
			case 20:
				_localctx = new NumFuncRADContext(_localctx);
				enterOuterAlt(_localctx, 20);
				{
				setState(1318);
				match(RAD);
				setState(1319);
				match(LPAREN);
				setState(1320);
				numExpr(0);
				setState(1321);
				match(RPAREN);
				}
				break;
			case 21:
				_localctx = new NumFuncSQRContext(_localctx);
				enterOuterAlt(_localctx, 21);
				{
				setState(1323);
				match(SQR);
				setState(1324);
				match(LPAREN);
				setState(1325);
				numExpr(0);
				setState(1326);
				match(RPAREN);
				}
				break;
			case 22:
				_localctx = new NumFuncSGNContext(_localctx);
				enterOuterAlt(_localctx, 22);
				{
				setState(1328);
				match(SGN);
				setState(1329);
				match(LPAREN);
				setState(1330);
				numExpr(0);
				setState(1331);
				match(RPAREN);
				}
				break;
			case 23:
				_localctx = new NumFuncGETContext(_localctx);
				enterOuterAlt(_localctx, 23);
				{
				setState(1333);
				match(GET);
				}
				break;
			case 24:
				_localctx = new NumFuncINKEYContext(_localctx);
				enterOuterAlt(_localctx, 24);
				{
				setState(1334);
				match(INKEY);
				setState(1335);
				match(LPAREN);
				setState(1336);
				numExpr(0);
				setState(1337);
				match(RPAREN);
				}
				break;
			case 25:
				_localctx = new NumFuncINTContext(_localctx);
				enterOuterAlt(_localctx, 25);
				{
				setState(1339);
				match(INT);
				setState(1340);
				match(LPAREN);
				setState(1341);
				numExpr(0);
				setState(1342);
				match(RPAREN);
				}
				break;
			case 26:
				_localctx = new NumFuncFLOATContext(_localctx);
				enterOuterAlt(_localctx, 26);
				{
				setState(1344);
				match(FLOAT_TOKEN);
				setState(1345);
				match(LPAREN);
				setState(1346);
				numExpr(0);
				setState(1347);
				match(RPAREN);
				}
				break;
			case 27:
				_localctx = new NumFuncSCREENWIDTHContext(_localctx);
				enterOuterAlt(_localctx, 27);
				{
				setState(1349);
				match(SCREENWIDTH);
				}
				break;
			case 28:
				_localctx = new NumFuncSCREENHEIGHTContext(_localctx);
				enterOuterAlt(_localctx, 28);
				{
				setState(1350);
				match(SCREENHEIGHT);
				}
				break;
			case 29:
				_localctx = new NumFuncPOINTContext(_localctx);
				enterOuterAlt(_localctx, 29);
				{
				setState(1351);
				match(POINT);
				setState(1352);
				match(LPAREN);
				setState(1353);
				numExpr(0);
				setState(1354);
				match(COMMA);
				setState(1355);
				numExpr(0);
				setState(1356);
				match(RPAREN);
				}
				break;
			case 30:
				_localctx = new NumFuncCOLOURContext(_localctx);
				enterOuterAlt(_localctx, 30);
				{
				setState(1358);
				match(COLOUR);
				setState(1359);
				match(LPAREN);
				setState(1360);
				numExpr(0);
				setState(1361);
				match(COMMA);
				setState(1362);
				numExpr(0);
				setState(1363);
				match(COMMA);
				setState(1364);
				numExpr(0);
				setState(1365);
				match(RPAREN);
				}
				break;
			case 31:
				_localctx = new NumFuncLOADTYPEFACEContext(_localctx);
				enterOuterAlt(_localctx, 31);
				{
				setState(1367);
				match(LOADTYPEFACE);
				setState(1368);
				strExpr(0);
				}
				break;
			case 32:
				_localctx = new NumFuncCREATEFONTContext(_localctx);
				enterOuterAlt(_localctx, 32);
				{
				setState(1369);
				match(CREATEFONT);
				setState(1370);
				numExpr(0);
				setState(1371);
				match(COMMA);
				setState(1372);
				numExpr(0);
				}
				break;
			case 33:
				_localctx = new NumFuncSHAPEContext(_localctx);
				enterOuterAlt(_localctx, 33);
				{
				setState(1374);
				match(CREATESHAPE);
				setState(1375);
				varNameType();
				setState(1376);
				match(COMMA);
				setState(1377);
				varNameType();
				}
				break;
			case 34:
				_localctx = new NumFuncOBJECTContext(_localctx);
				enterOuterAlt(_localctx, 34);
				{
				setState(1379);
				match(CREATEOBJECT);
				setState(1380);
				numExpr(0);
				setState(1381);
				match(COMMA);
				setState(1382);
				numExpr(0);
				setState(1383);
				match(COMMA);
				setState(1384);
				numExpr(0);
				setState(1385);
				match(COMMA);
				setState(1386);
				numExpr(0);
				setState(1387);
				match(COMMA);
				setState(1388);
				numExpr(0);
				setState(1389);
				match(COMMA);
				setState(1390);
				numExpr(0);
				setState(1391);
				match(COMMA);
				setState(1392);
				numExpr(0);
				setState(1393);
				match(COMMA);
				setState(1394);
				numExpr(0);
				setState(1395);
				match(COMMA);
				setState(1396);
				_la = _input.LA(1);
				if ( !(((((_la - 101)) & ~0x3f) == 0 && ((1L << (_la - 101)) & ((1L << (SOLID - 101)) | (1L << (WIREFRAME - 101)) | (1L << (SHADED - 101)) | (1L << (FILLEDWIREFRAME - 101)))) != 0)) ) {
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
				setState(1398);
				match(BGETH);
				setState(1399);
				numExpr(0);
				}
				break;
			case 36:
				_localctx = new NumFuncEOFHContext(_localctx);
				enterOuterAlt(_localctx, 36);
				{
				setState(1400);
				match(EOFH);
				setState(1401);
				numExpr(0);
				}
				break;
			case 37:
				_localctx = new NumFuncOPENINContext(_localctx);
				enterOuterAlt(_localctx, 37);
				{
				setState(1402);
				match(OPENIN);
				setState(1403);
				match(LPAREN);
				setState(1404);
				strExpr(0);
				setState(1405);
				match(RPAREN);
				}
				break;
			case 38:
				_localctx = new NumFuncOPENOUTContext(_localctx);
				enterOuterAlt(_localctx, 38);
				{
				setState(1407);
				match(OPENOUT);
				setState(1408);
				match(LPAREN);
				setState(1409);
				strExpr(0);
				setState(1410);
				match(RPAREN);
				}
				break;
			case 39:
				_localctx = new NumFuncOPENUPContext(_localctx);
				enterOuterAlt(_localctx, 39);
				{
				setState(1412);
				match(OPENUP);
				setState(1413);
				match(LPAREN);
				setState(1414);
				strExpr(0);
				setState(1415);
				match(RPAREN);
				}
				break;
			case 40:
				_localctx = new NumFuncPTRContext(_localctx);
				enterOuterAlt(_localctx, 40);
				{
				setState(1417);
				match(PTRH);
				setState(1418);
				numExpr(0);
				}
				break;
			case 41:
				_localctx = new NumFuncASCContext(_localctx);
				enterOuterAlt(_localctx, 41);
				{
				setState(1419);
				match(ASC);
				setState(1420);
				strExpr(0);
				}
				break;
			case 42:
				_localctx = new NumFuncLENContext(_localctx);
				enterOuterAlt(_localctx, 42);
				{
				setState(1421);
				match(LEN);
				setState(1422);
				strExpr(0);
				}
				break;
			case 43:
				_localctx = new NumFuncINSTR2Context(_localctx);
				enterOuterAlt(_localctx, 43);
				{
				setState(1423);
				match(INSTR);
				setState(1424);
				match(LPAREN);
				setState(1425);
				strExpr(0);
				setState(1426);
				match(COMMA);
				setState(1427);
				strExpr(0);
				setState(1428);
				match(RPAREN);
				}
				break;
			case 44:
				_localctx = new NumFuncINSTR3Context(_localctx);
				enterOuterAlt(_localctx, 44);
				{
				setState(1430);
				match(INSTR);
				setState(1431);
				match(LPAREN);
				setState(1432);
				strExpr(0);
				setState(1433);
				match(COMMA);
				setState(1434);
				strExpr(0);
				setState(1435);
				match(COMMA);
				setState(1436);
				numExpr(0);
				setState(1437);
				match(RPAREN);
				}
				break;
			case 45:
				_localctx = new NumFuncVALContext(_localctx);
				enterOuterAlt(_localctx, 45);
				{
				setState(1439);
				match(VAL);
				setState(1440);
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
		int _startState = 210;
		enterRecursionRule(_localctx, 210, RULE_numExpr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1459);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,93,_ctx) ) {
			case 1:
				{
				_localctx = new NumExprVarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(1444);
				numVar();
				}
				break;
			case 2:
				{
				_localctx = new NumExprNumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1445);
				number();
				}
				break;
			case 3:
				{
				_localctx = new NumExprNestedContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1446);
				match(LPAREN);
				setState(1447);
				numExpr(0);
				setState(1448);
				match(RPAREN);
				}
				break;
			case 4:
				{
				_localctx = new NumExprUnaryContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1450);
				match(MINUS);
				setState(1451);
				numExpr(11);
				}
				break;
			case 5:
				{
				_localctx = new NumExprNOTContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1452);
				match(NOT);
				setState(1453);
				numExpr(10);
				}
				break;
			case 6:
				{
				_localctx = new NumExprFuncContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1454);
				numFunc();
				}
				break;
			case 7:
				{
				_localctx = new NumExprStrRelopContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1455);
				strExpr(0);
				setState(1456);
				_la = _input.LA(1);
				if ( !(((((_la - 169)) & ~0x3f) == 0 && ((1L << (_la - 169)) & ((1L << (EQ - 169)) | (1L << (NE - 169)) | (1L << (GT - 169)) | (1L << (GE - 169)) | (1L << (LT - 169)) | (1L << (LE - 169)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(1457);
				strExpr(0);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1484);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,95,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1482);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,94,_ctx) ) {
					case 1:
						{
						_localctx = new NumExprHatContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1461);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(1462);
						match(HAT);
						setState(1463);
						numExpr(8);
						}
						break;
					case 2:
						{
						_localctx = new NumExprMultiplyDivideContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1464);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(1465);
						_la = _input.LA(1);
						if ( !(_la==MULTIPLY || _la==DIVIDE) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1466);
						numExpr(8);
						}
						break;
					case 3:
						{
						_localctx = new NumExprDIVMODContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1467);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(1468);
						_la = _input.LA(1);
						if ( !(_la==MOD || _la==DIV) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1469);
						numExpr(7);
						}
						break;
					case 4:
						{
						_localctx = new NumExprAddSubtractContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1470);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(1471);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1472);
						numExpr(6);
						}
						break;
					case 5:
						{
						_localctx = new NumExprSHLSHRContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1473);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(1474);
						_la = _input.LA(1);
						if ( !(_la==SHL || _la==SHR) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1475);
						numExpr(5);
						}
						break;
					case 6:
						{
						_localctx = new NumExprNumRelopContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1476);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1477);
						_la = _input.LA(1);
						if ( !(((((_la - 169)) & ~0x3f) == 0 && ((1L << (_la - 169)) & ((1L << (EQ - 169)) | (1L << (NE - 169)) | (1L << (GT - 169)) | (1L << (GE - 169)) | (1L << (LT - 169)) | (1L << (LE - 169)))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1478);
						numExpr(4);
						}
						break;
					case 7:
						{
						_localctx = new NumExprANDOREORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1479);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(1480);
						_la = _input.LA(1);
						if ( !(((((_la - 176)) & ~0x3f) == 0 && ((1L << (_la - 176)) & ((1L << (AND - 176)) | (1L << (OR - 176)) | (1L << (EOR - 176)))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1481);
						numExpr(2);
						}
						break;
					}
					} 
				}
				setState(1486);
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
		enterRule(_localctx, 212, RULE_numColours);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1487);
			_la = _input.LA(1);
			if ( !(((((_la - 57)) & ~0x3f) == 0 && ((1L << (_la - 57)) & ((1L << (RED - 57)) | (1L << (GREEN - 57)) | (1L << (YELLOW - 57)) | (1L << (BLUE - 57)) | (1L << (MAGENTA - 57)) | (1L << (CYAN - 57)) | (1L << (WHITE - 57)) | (1L << (BLACK - 57)))) != 0)) ) {
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
		enterRule(_localctx, 214, RULE_defaultFonts);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1489);
			_la = _input.LA(1);
			if ( !(((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (MONO15 - 65)) | (1L << (MONO20 - 65)) | (1L << (MONO25 - 65)) | (1L << (MONO30 - 65)) | (1L << (MONO35 - 65)) | (1L << (MONO40 - 65)) | (1L << (MONO50 - 65)) | (1L << (MONO75 - 65)) | (1L << (MONO100 - 65)) | (1L << (PROP15 - 65)) | (1L << (PROP20 - 65)) | (1L << (PROP25 - 65)) | (1L << (PROP30 - 65)) | (1L << (PROP35 - 65)) | (1L << (PROP40 - 65)) | (1L << (PROP50 - 65)) | (1L << (PROP75 - 65)) | (1L << (PROP100 - 65)) | (1L << (SERIF15 - 65)) | (1L << (SERIF20 - 65)) | (1L << (SERIF25 - 65)) | (1L << (SERIF30 - 65)) | (1L << (SERIF35 - 65)) | (1L << (SERIF40 - 65)) | (1L << (SERIF50 - 65)) | (1L << (SERIF75 - 65)) | (1L << (SERIF100 - 65)))) != 0)) ) {
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
		case 103:
			return strExpr_sempred((StrExprContext)_localctx, predIndex);
		case 105:
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00de\u05d6\4\2\t"+
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
		"k\4l\tl\4m\tm\3\2\7\2\u00dc\n\2\f\2\16\2\u00df\13\2\3\2\3\2\3\3\3\3\5"+
		"\3\u00e5\n\3\3\3\5\3\u00e8\n\3\3\3\3\3\5\3\u00ec\n\3\3\3\6\3\u00ef\n\3"+
		"\r\3\16\3\u00f0\3\3\5\3\u00f4\n\3\3\3\3\3\5\3\u00f8\n\3\3\4\7\4\u00fb"+
		"\n\4\f\4\16\4\u00fe\13\4\3\5\7\5\u0101\n\5\f\5\16\5\u0104\13\5\3\5\7\5"+
		"\u0107\n\5\f\5\16\5\u010a\13\5\5\5\u010c\n\5\3\6\3\6\3\7\3\7\3\7\3\7\3"+
		"\7\3\7\5\7\u0116\n\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3"+
		"\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\5\b\u0132\n\b\3"+
		"\t\3\t\3\n\3\n\3\n\3\n\3\n\6\n\u013b\n\n\r\n\16\n\u013c\3\n\3\n\5\n\u0141"+
		"\n\n\3\n\3\n\3\13\3\13\3\13\3\f\3\f\3\f\3\f\7\f\u014c\n\f\f\f\16\f\u014f"+
		"\13\f\3\r\5\r\u0152\n\r\3\r\3\r\3\r\3\r\7\r\u0158\n\r\f\r\16\r\u015b\13"+
		"\r\3\16\3\16\3\17\3\17\5\17\u0161\n\17\3\20\3\20\3\20\3\20\5\20\u0167"+
		"\n\20\3\20\3\20\3\20\5\20\u016c\n\20\3\20\3\20\3\21\3\21\3\21\3\21\5\21"+
		"\u0174\n\21\3\21\3\21\3\21\5\21\u0179\n\21\3\21\3\21\3\22\3\22\5\22\u017f"+
		"\n\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\5\22\u0188\n\22\3\22\3\22\5\22"+
		"\u018c\n\22\3\22\3\22\3\23\3\23\5\23\u0192\n\23\3\23\3\23\3\23\3\23\3"+
		"\23\3\23\3\23\5\23\u019b\n\23\3\23\3\23\3\24\3\24\3\24\5\24\u01a2\n\24"+
		"\3\24\3\24\3\25\3\25\3\25\3\25\3\25\5\25\u01ab\n\25\3\26\3\26\3\26\3\26"+
		"\3\26\6\26\u01b2\n\26\r\26\16\26\u01b3\3\26\3\26\3\26\6\26\u01b9\n\26"+
		"\r\26\16\26\u01ba\5\26\u01bd\n\26\3\26\5\26\u01c0\n\26\3\26\3\26\3\27"+
		"\3\27\3\27\3\30\5\30\u01c8\n\30\3\30\5\30\u01cb\n\30\3\30\3\30\3\30\3"+
		"\30\3\30\3\30\3\30\3\30\7\30\u01d5\n\30\f\30\16\30\u01d8\13\30\3\31\3"+
		"\31\3\31\3\32\3\32\3\32\5\32\u01e0\n\32\3\32\3\32\3\33\3\33\3\33\3\33"+
		"\7\33\u01e8\n\33\f\33\16\33\u01eb\13\33\3\34\3\34\3\35\3\35\3\35\3\35"+
		"\3\35\3\36\3\36\3\37\3\37\3 \3 \3 \3 \3 \3 \7 \u01fe\n \f \16 \u0201\13"+
		" \3 \3 \3!\3!\3!\3!\3!\3\"\3\"\3\"\3\"\3\"\3#\3#\3#\3#\3#\3#\3#\5#\u0216"+
		"\n#\3$\3$\3$\3$\5$\u021c\n$\3$\3$\3%\3%\5%\u0222\n%\3&\3&\3&\3&\3&\3&"+
		"\3&\3\'\3\'\3\'\3\'\3\'\3(\3(\3(\3(\3(\3)\3)\3*\3*\3+\3+\3+\3+\3+\3+\3"+
		"+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\3+\5+\u0251\n+\3,\3"+
		",\3,\3,\3,\5,\u0258\n,\3-\3-\3-\3-\3-\3.\3.\3.\3/\3/\3/\3/\3/\3\60\3\60"+
		"\3\60\3\61\5\61\u026b\n\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61"+
		"\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62"+
		"\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\5\62\u028d\n\62\3\63\3\63"+
		"\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\5\64\u029a\n\64\3\65\3\65"+
		"\3\65\3\65\3\65\3\65\3\65\3\65\3\65\5\65\u02a5\n\65\3\66\3\66\3\66\3\66"+
		"\3\66\3\66\3\66\3\66\3\66\3\66\3\66\3\66\3\66\3\66\5\66\u02b5\n\66\3\67"+
		"\3\67\38\38\38\38\38\38\38\38\38\38\38\38\38\38\38\58\u02c8\n8\39\39\3"+
		"9\39\39\39\39\39\39\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3"+
		":\3:\3:\5:\u02e6\n:\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3"+
		";\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3"+
		";\3;\3;\3;\3;\3;\3;\3;\5;\u0317\n;\3<\3<\3<\3<\3<\3=\3=\3=\3=\3=\3=\3"+
		"=\3=\3=\3>\3>\3?\3?\3?\3?\3?\3?\3?\3?\3?\3@\3@\3@\3@\3@\3@\3@\3@\3@\3"+
		"A\3A\3A\3A\3A\3A\3A\3A\3A\3B\3B\3C\3C\3D\3D\3D\3D\3D\3D\3D\3D\3D\3D\3"+
		"D\3D\3D\3D\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3F\3F\3F\3F\3F\3"+
		"F\3F\3F\3F\3G\3G\3G\3G\3G\3G\3G\3G\3G\3H\3H\3H\3H\3H\3I\3I\3I\3J\3J\3"+
		"J\3J\7J\u0382\nJ\fJ\16J\u0385\13J\3J\3J\3J\3K\3K\3L\3L\5L\u038e\nL\3M"+
		"\3M\3M\5M\u0393\nM\3N\3N\3O\3O\3O\3O\3O\5O\u039c\nO\3O\3O\3O\3O\3O\3O"+
		"\3O\5O\u03a5\nO\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\5O"+
		"\u03b8\nO\3O\3O\3O\3O\5O\u03be\nO\3O\3O\3O\3O\3O\3O\3O\3O\3O\5O\u03c9"+
		"\nO\3P\3P\3P\3P\3P\5P\u03d0\nP\3P\3P\3P\3P\3P\3P\3P\3P\3P\3P\3P\3P\3P"+
		"\3P\3P\5P\u03e1\nP\3P\5P\u03e4\nP\3Q\3Q\3Q\5Q\u03e9\nQ\3R\3R\5R\u03ed"+
		"\nR\3S\3S\3T\3T\3U\3U\3V\3V\3W\3W\3W\3W\3W\3W\5W\u03fd\nW\3W\3W\7W\u0401"+
		"\nW\fW\16W\u0404\13W\3W\3W\3W\3W\3W\3W\3W\3W\3W\3W\3W\3W\3W\3W\3W\3W\3"+
		"W\3W\3W\3W\3W\3W\3W\3W\5W\u041e\nW\3X\3X\3X\3X\3X\7X\u0425\nX\fX\16X\u0428"+
		"\13X\3X\3X\3X\3X\3X\3X\3X\3X\3X\5X\u0433\nX\3Y\3Y\3Y\7Y\u0438\nY\fY\16"+
		"Y\u043b\13Y\3Z\5Z\u043e\nZ\3Z\3Z\3Z\5Z\u0443\nZ\3Z\7Z\u0446\nZ\fZ\16Z"+
		"\u0449\13Z\3[\3[\3[\7[\u044e\n[\f[\16[\u0451\13[\3\\\3\\\3\\\7\\\u0456"+
		"\n\\\f\\\16\\\u0459\13\\\3]\5]\u045c\n]\3]\3]\3]\3]\3]\3]\3]\3]\5]\u0466"+
		"\n]\3^\6^\u0469\n^\r^\16^\u046a\3_\3_\3_\5_\u0470\n_\3`\5`\u0473\n`\3"+
		"`\5`\u0476\n`\3`\3`\3`\3`\7`\u047c\n`\f`\16`\u047f\13`\3`\5`\u0482\n`"+
		"\3a\3a\5a\u0486\na\3b\3b\3b\3b\3b\3b\5b\u048e\nb\3c\5c\u0491\nc\3c\3c"+
		"\3d\3d\3e\3e\3f\5f\u049a\nf\3f\3f\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g"+
		"\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g"+
		"\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\3g\5g\u04d0\ng\3h\3h\3i\3i"+
		"\3i\3i\3i\3i\3i\3i\5i\u04dc\ni\3i\3i\3i\7i\u04e1\ni\fi\16i\u04e4\13i\3"+
		"j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3"+
		"j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3"+
		"j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3"+
		"j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3"+
		"j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3"+
		"j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3"+
		"j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3"+
		"j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3"+
		"j\3j\3j\3j\3j\3j\5j\u05a4\nj\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3"+
		"k\3k\3k\5k\u05b6\nk\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3k\3"+
		"k\3k\3k\3k\3k\7k\u05cd\nk\fk\16k\u05d0\13k\3l\3l\3m\3m\3m\2\4\u00d0\u00d4"+
		"n\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDF"+
		"HJLNPRTVXZ\\^`bdfhjlnprtvxz|~\u0080\u0082\u0084\u0086\u0088\u008a\u008c"+
		"\u008e\u0090\u0092\u0094\u0096\u0098\u009a\u009c\u009e\u00a0\u00a2\u00a4"+
		"\u00a6\u00a8\u00aa\u00ac\u00ae\u00b0\u00b2\u00b4\u00b6\u00b8\u00ba\u00bc"+
		"\u00be\u00c0\u00c2\u00c4\u00c6\u00c8\u00ca\u00cc\u00ce\u00d0\u00d2\u00d4"+
		"\u00d6\u00d8\2\17\4\2%%\u00d0\u00d0\4\2\31\31\33\33\3\2\u008a\u008b\3"+
		"\2\u00d3\u00d5\3\2\u00b8\u00b9\3\2gj\3\2\u00ab\u00b0\3\2\u00ba\u00bb\3"+
		"\2\u00b5\u00b6\3\2\u00bc\u00bd\3\2\u00b2\u00b4\3\2;B\3\2C]\2\u0662\2\u00dd"+
		"\3\2\2\2\4\u00f7\3\2\2\2\6\u00fc\3\2\2\2\b\u010b\3\2\2\2\n\u010d\3\2\2"+
		"\2\f\u0115\3\2\2\2\16\u0131\3\2\2\2\20\u0133\3\2\2\2\22\u0135\3\2\2\2"+
		"\24\u0144\3\2\2\2\26\u0147\3\2\2\2\30\u0151\3\2\2\2\32\u015c\3\2\2\2\34"+
		"\u015e\3\2\2\2\36\u0162\3\2\2\2 \u016f\3\2\2\2\"\u017c\3\2\2\2$\u018f"+
		"\3\2\2\2&\u019e\3\2\2\2(\u01a5\3\2\2\2*\u01ac\3\2\2\2,\u01c3\3\2\2\2."+
		"\u01ca\3\2\2\2\60\u01d9\3\2\2\2\62\u01dc\3\2\2\2\64\u01e3\3\2\2\2\66\u01ec"+
		"\3\2\2\28\u01ee\3\2\2\2:\u01f3\3\2\2\2<\u01f5\3\2\2\2>\u01f7\3\2\2\2@"+
		"\u0204\3\2\2\2B\u0209\3\2\2\2D\u0215\3\2\2\2F\u0217\3\2\2\2H\u021f\3\2"+
		"\2\2J\u0223\3\2\2\2L\u022a\3\2\2\2N\u022f\3\2\2\2P\u0234\3\2\2\2R\u0236"+
		"\3\2\2\2T\u0250\3\2\2\2V\u0257\3\2\2\2X\u0259\3\2\2\2Z\u025e\3\2\2\2\\"+
		"\u0261\3\2\2\2^\u0266\3\2\2\2`\u026a\3\2\2\2b\u028c\3\2\2\2d\u028e\3\2"+
		"\2\2f\u0299\3\2\2\2h\u02a4\3\2\2\2j\u02b4\3\2\2\2l\u02b6\3\2\2\2n\u02c7"+
		"\3\2\2\2p\u02c9\3\2\2\2r\u02e5\3\2\2\2t\u0316\3\2\2\2v\u0318\3\2\2\2x"+
		"\u031d\3\2\2\2z\u0326\3\2\2\2|\u0328\3\2\2\2~\u0331\3\2\2\2\u0080\u033a"+
		"\3\2\2\2\u0082\u0343\3\2\2\2\u0084\u0345\3\2\2\2\u0086\u0347\3\2\2\2\u0088"+
		"\u0355\3\2\2\2\u008a\u0363\3\2\2\2\u008c\u036c\3\2\2\2\u008e\u0375\3\2"+
		"\2\2\u0090\u037a\3\2\2\2\u0092\u037d\3\2\2\2\u0094\u0389\3\2\2\2\u0096"+
		"\u038d\3\2\2\2\u0098\u0392\3\2\2\2\u009a\u0394\3\2\2\2\u009c\u03c8\3\2"+
		"\2\2\u009e\u03e3\3\2\2\2\u00a0\u03e8\3\2\2\2\u00a2\u03ec\3\2\2\2\u00a4"+
		"\u03ee\3\2\2\2\u00a6\u03f0\3\2\2\2\u00a8\u03f2\3\2\2\2\u00aa\u03f4\3\2"+
		"\2\2\u00ac\u041d\3\2\2\2\u00ae\u0432\3\2\2\2\u00b0\u0434\3\2\2\2\u00b2"+
		"\u043d\3\2\2\2\u00b4\u044a\3\2\2\2\u00b6\u0452\3\2\2\2\u00b8\u0465\3\2"+
		"\2\2\u00ba\u0468\3\2\2\2\u00bc\u046f\3\2\2\2\u00be\u0472\3\2\2\2\u00c0"+
		"\u0485\3\2\2\2\u00c2\u048d\3\2\2\2\u00c4\u0490\3\2\2\2\u00c6\u0494\3\2"+
		"\2\2\u00c8\u0496\3\2\2\2\u00ca\u0499\3\2\2\2\u00cc\u04cf\3\2\2\2\u00ce"+
		"\u04d1\3\2\2\2\u00d0\u04db\3\2\2\2\u00d2\u05a3\3\2\2\2\u00d4\u05b5\3\2"+
		"\2\2\u00d6\u05d1\3\2\2\2\u00d8\u05d3\3\2\2\2\u00da\u00dc\5\4\3\2\u00db"+
		"\u00da\3\2\2\2\u00dc\u00df\3\2\2\2\u00dd\u00db\3\2\2\2\u00dd\u00de\3\2"+
		"\2\2\u00de\u00e0\3\2\2\2\u00df\u00dd\3\2\2\2\u00e0\u00e1\7\2\2\3\u00e1"+
		"\3\3\2\2\2\u00e2\u00f8\7\u00c4\2\2\u00e3\u00e5\5\n\6\2\u00e4\u00e3\3\2"+
		"\2\2\u00e4\u00e5\3\2\2\2\u00e5\u00e7\3\2\2\2\u00e6\u00e8\t\2\2\2\u00e7"+
		"\u00e6\3\2\2\2\u00e7\u00e8\3\2\2\2\u00e8\u00e9\3\2\2\2\u00e9\u00f8\7\u00c4"+
		"\2\2\u00ea\u00ec\5\n\6\2\u00eb\u00ea\3\2\2\2\u00eb\u00ec\3\2\2\2\u00ec"+
		"\u00ee\3\2\2\2\u00ed\u00ef\5\f\7\2\u00ee\u00ed\3\2\2\2\u00ef\u00f0\3\2"+
		"\2\2\u00f0\u00ee\3\2\2\2\u00f0\u00f1\3\2\2\2\u00f1\u00f3\3\2\2\2\u00f2"+
		"\u00f4\t\2\2\2\u00f3\u00f2\3\2\2\2\u00f3\u00f4\3\2\2\2\u00f4\u00f5\3\2"+
		"\2\2\u00f5\u00f6\7\u00c4\2\2\u00f6\u00f8\3\2\2\2\u00f7\u00e2\3\2\2\2\u00f7"+
		"\u00e4\3\2\2\2\u00f7\u00eb\3\2\2\2\u00f8\5\3\2\2\2\u00f9\u00fb\5\f\7\2"+
		"\u00fa\u00f9\3\2\2\2\u00fb\u00fe\3\2\2\2\u00fc\u00fa\3\2\2\2\u00fc\u00fd"+
		"\3\2\2\2\u00fd\7\3\2\2\2\u00fe\u00fc\3\2\2\2\u00ff\u0101\5\f\7\2\u0100"+
		"\u00ff\3\2\2\2\u0101\u0104\3\2\2\2\u0102\u0100\3\2\2\2\u0102\u0103\3\2"+
		"\2\2\u0103\u010c\3\2\2\2\u0104\u0102\3\2\2\2\u0105\u0107\5\4\3\2\u0106"+
		"\u0105\3\2\2\2\u0107\u010a\3\2\2\2\u0108\u0106\3\2\2\2\u0108\u0109\3\2"+
		"\2\2\u0109\u010c\3\2\2\2\u010a\u0108\3\2\2\2\u010b\u0102\3\2\2\2\u010b"+
		"\u0108\3\2\2\2\u010c\t\3\2\2\2\u010d\u010e\7\u00dc\2\2\u010e\13\3\2\2"+
		"\2\u010f\u0116\7\u00c8\2\2\u0110\u0116\5\16\b\2\u0111\u0116\5D#\2\u0112"+
		"\u0116\5T+\2\u0113\u0116\5V,\2\u0114\u0116\5b\62\2\u0115\u010f\3\2\2\2"+
		"\u0115\u0110\3\2\2\2\u0115\u0111\3\2\2\2\u0115\u0112\3\2\2\2\u0115\u0113"+
		"\3\2\2\2\u0115\u0114\3\2\2\2\u0116\r\3\2\2\2\u0117\u0132\5\20\t\2\u0118"+
		"\u0132\5\22\n\2\u0119\u0132\5\24\13\2\u011a\u0132\5\26\f\2\u011b\u0132"+
		"\5\30\r\2\u011c\u0132\5\32\16\2\u011d\u0132\5\34\17\2\u011e\u0132\5\36"+
		"\20\2\u011f\u0132\5 \21\2\u0120\u0132\5\"\22\2\u0121\u0132\5$\23\2\u0122"+
		"\u0132\5&\24\2\u0123\u0132\5(\25\2\u0124\u0132\5*\26\2\u0125\u0132\5,"+
		"\27\2\u0126\u0132\5.\30\2\u0127\u0132\5\60\31\2\u0128\u0132\5\62\32\2"+
		"\u0129\u0132\5\64\33\2\u012a\u0132\5\66\34\2\u012b\u0132\58\35\2\u012c"+
		"\u0132\5:\36\2\u012d\u0132\5<\37\2\u012e\u0132\5> \2\u012f\u0132\5@!\2"+
		"\u0130\u0132\5B\"\2\u0131\u0117\3\2\2\2\u0131\u0118\3\2\2\2\u0131\u0119"+
		"\3\2\2\2\u0131\u011a\3\2\2\2\u0131\u011b\3\2\2\2\u0131\u011c\3\2\2\2\u0131"+
		"\u011d\3\2\2\2\u0131\u011e\3\2\2\2\u0131\u011f\3\2\2\2\u0131\u0120\3\2"+
		"\2\2\u0131\u0121\3\2\2\2\u0131\u0122\3\2\2\2\u0131\u0123\3\2\2\2\u0131"+
		"\u0124\3\2\2\2\u0131\u0125\3\2\2\2\u0131\u0126\3\2\2\2\u0131\u0127\3\2"+
		"\2\2\u0131\u0128\3\2\2\2\u0131\u0129\3\2\2\2\u0131\u012a\3\2\2\2\u0131"+
		"\u012b\3\2\2\2\u0131\u012c\3\2\2\2\u0131\u012d\3\2\2\2\u0131\u012e\3\2"+
		"\2\2\u0131\u012f\3\2\2\2\u0131\u0130\3\2\2\2\u0132\17\3\2\2\2\u0133\u0134"+
		"\7\3\2\2\u0134\21\3\2\2\2\u0135\u0136\7\4\2\2\u0136\u0137\5\u00c0a\2\u0137"+
		"\u0138\7\35\2\2\u0138\u013a\7\u00c4\2\2\u0139\u013b\5\u0092J\2\u013a\u0139"+
		"\3\2\2\2\u013b\u013c\3\2\2\2\u013c\u013a\3\2\2\2\u013c\u013d\3\2\2\2\u013d"+
		"\u0140\3\2\2\2\u013e\u013f\7!\2\2\u013f\u0141\5\b\5\2\u0140\u013e\3\2"+
		"\2\2\u0140\u0141\3\2\2\2\u0141\u0142\3\2\2\2\u0142\u0143\7\13\2\2\u0143"+
		"\23\3\2\2\2\u0144\u0145\7\5\2\2\u0145\u0146\5\u00d0i\2\u0146\25\3\2\2"+
		"\2\u0147\u0148\7\6\2\2\u0148\u014d\5\u0096L\2\u0149\u014a\7\u00c9\2\2"+
		"\u014a\u014c\5\u0096L\2\u014b\u0149\3\2\2\2\u014c\u014f\3\2\2\2\u014d"+
		"\u014b\3\2\2\2\u014d\u014e\3\2\2\2\u014e\27\3\2\2\2\u014f\u014d\3\2\2"+
		"\2\u0150\u0152\7\32\2\2\u0151\u0150\3\2\2\2\u0151\u0152\3\2\2\2\u0152"+
		"\u0153\3\2\2\2\u0153\u0154\7\b\2\2\u0154\u0159\5\u00aeX\2\u0155\u0156"+
		"\7\u00c9\2\2\u0156\u0158\5\u00aeX\2\u0157\u0155\3\2\2\2\u0158\u015b\3"+
		"\2\2\2\u0159\u0157\3\2\2\2\u0159\u015a\3\2\2\2\u015a\31\3\2\2\2\u015b"+
		"\u0159\3\2\2\2\u015c\u015d\7\n\2\2\u015d\33\3\2\2\2\u015e\u0160\7(\2\2"+
		"\u015f\u0161\5\u00c0a\2\u0160\u015f\3\2\2\2\u0160\u0161\3\2\2\2\u0161"+
		"\35\3\2\2\2\u0162\u0163\7\7\2\2\u0163\u0164\5\u0094K\2\u0164\u0166\7\u00cb"+
		"\2\2\u0165\u0167\5\u00b2Z\2\u0166\u0165\3\2\2\2\u0166\u0167\3\2\2\2\u0167"+
		"\u0168\3\2\2\2\u0168\u0169\7\u00cd\2\2\u0169\u016b\5\b\5\2\u016a\u016c"+
		"\5\n\6\2\u016b\u016a\3\2\2\2\u016b\u016c\3\2\2\2\u016c\u016d\3\2\2\2\u016d"+
		"\u016e\7\r\2\2\u016e\37\3\2\2\2\u016f\u0170\7\7\2\2\u0170\u0171\7\u00d2"+
		"\2\2\u0171\u0173\7\u00cb\2\2\u0172\u0174\5\u00b2Z\2\u0173\u0172\3\2\2"+
		"\2\u0173\u0174\3\2\2\2\u0174\u0175\3\2\2\2\u0175\u0176\7\u00cd\2\2\u0176"+
		"\u0178\5\b\5\2\u0177\u0179\5\n\6\2\u0178\u0177\3\2\2\2\u0178\u0179\3\2"+
		"\2\2\u0179\u017a\3\2\2\2\u017a\u017b\7\16\2\2\u017b!\3\2\2\2\u017c\u017e"+
		"\7\21\2\2\u017d\u017f\7\32\2\2\u017e\u017d\3\2\2\2\u017e\u017f\3\2\2\2"+
		"\u017f\u0180\3\2\2\2\u0180\u0181\5\u00a2R\2\u0181\u0182\7\u00ab\2\2\u0182"+
		"\u0183\5\u00d4k\2\u0183\u0184\7-\2\2\u0184\u0187\5\u00d4k\2\u0185\u0186"+
		"\7*\2\2\u0186\u0188\5\u00d4k\2\u0187\u0185\3\2\2\2\u0187\u0188\3\2\2\2"+
		"\u0188\u0189\3\2\2\2\u0189\u018b\5\b\5\2\u018a\u018c\5\n\6\2\u018b\u018a"+
		"\3\2\2\2\u018b\u018c\3\2\2\2\u018c\u018d\3\2\2\2\u018d\u018e\7\34\2\2"+
		"\u018e#\3\2\2\2\u018f\u0191\7\21\2\2\u0190\u0192\7\32\2\2\u0191\u0190"+
		"\3\2\2\2\u0191\u0192\3\2\2\2\u0192\u0193\3\2\2\2\u0193\u0194\5\u00a0Q"+
		"\2\u0194\u0195\7\25\2\2\u0195\u0196\5\u00a0Q\2\u0196\u0197\7\u00cb\2\2"+
		"\u0197\u0198\7\u00cd\2\2\u0198\u019a\5\b\5\2\u0199\u019b\5\n\6\2\u019a"+
		"\u0199\3\2\2\2\u019a\u019b\3\2\2\2\u019b\u019c\3\2\2\2\u019c\u019d\7\34"+
		"\2\2\u019d%\3\2\2\2\u019e\u019f\5\u0094K\2\u019f\u01a1\7\u00cb\2\2\u01a0"+
		"\u01a2\5\u00b4[\2\u01a1\u01a0\3\2\2\2\u01a1\u01a2\3\2\2\2\u01a2\u01a3"+
		"\3\2\2\2\u01a3\u01a4\7\u00cd\2\2\u01a4\'\3\2\2\2\u01a5\u01a6\7\24\2\2"+
		"\u01a6\u01a7\5\u00c0a\2\u01a7\u01aa\5\6\4\2\u01a8\u01a9\7\t\2\2\u01a9"+
		"\u01ab\5\6\4\2\u01aa\u01a8\3\2\2\2\u01aa\u01ab\3\2\2\2\u01ab)\3\2\2\2"+
		"\u01ac\u01ad\7\24\2\2\u01ad\u01ae\5\u00c0a\2\u01ae\u01af\7,\2\2\u01af"+
		"\u01b1\7\u00c4\2\2\u01b0\u01b2\5\4\3\2\u01b1\u01b0\3\2\2\2\u01b2\u01b3"+
		"\3\2\2\2\u01b3\u01b1\3\2\2\2\u01b3\u01b4\3\2\2\2\u01b4\u01bc\3\2\2\2\u01b5"+
		"\u01b6\7\t\2\2\u01b6\u01b8\7\u00c4\2\2\u01b7\u01b9\5\4\3\2\u01b8\u01b7"+
		"\3\2\2\2\u01b9\u01ba\3\2\2\2\u01ba\u01b8\3\2\2\2\u01ba\u01bb\3\2\2\2\u01bb"+
		"\u01bd\3\2\2\2\u01bc\u01b5\3\2\2\2\u01bc\u01bd\3\2\2\2\u01bd\u01bf\3\2"+
		"\2\2\u01be\u01c0\5\n\6\2\u01bf\u01be\3\2\2\2\u01bf\u01c0\3\2\2\2\u01c0"+
		"\u01c1\3\2\2\2\u01c1\u01c2\7\f\2\2\u01c2+\3\2\2\2\u01c3\u01c4\7\26\2\2"+
		"\u01c4\u01c5\5\u00d0i\2\u01c5-\3\2\2\2\u01c6\u01c8\t\3\2\2\u01c7\u01c6"+
		"\3\2\2\2\u01c7\u01c8\3\2\2\2\u01c8\u01cb\3\2\2\2\u01c9\u01cb\7\32\2\2"+
		"\u01ca\u01c7\3\2\2\2\u01ca\u01c9\3\2\2\2\u01cb\u01cc\3\2\2\2\u01cc\u01cd"+
		"\5\u00acW\2\u01cd\u01ce\7\u00ab\2\2\u01ce\u01d6\5\u00c0a\2\u01cf\u01d0"+
		"\7\u00c9\2\2\u01d0\u01d1\5\u00acW\2\u01d1\u01d2\7\u00ab\2\2\u01d2\u01d3"+
		"\5\u00c0a\2\u01d3\u01d5\3\2\2\2\u01d4\u01cf\3\2\2\2\u01d5\u01d8\3\2\2"+
		"\2\u01d6\u01d4\3\2\2\2\u01d6\u01d7\3\2\2\2\u01d7/\3\2\2\2\u01d8\u01d6"+
		"\3\2\2\2\u01d9\u01da\7 \2\2\u01da\u01db\5\u00d0i\2\u01db\61\3\2\2\2\u01dc"+
		"\u01dd\7\u00d2\2\2\u01dd\u01df\7\u00cb\2\2\u01de\u01e0\5\u00b4[\2\u01df"+
		"\u01de\3\2\2\2\u01df\u01e0\3\2\2\2\u01e0\u01e1\3\2\2\2\u01e1\u01e2\7\u00cd"+
		"\2\2\u01e2\63\3\2\2\2\u01e3\u01e4\7$\2\2\u01e4\u01e9\5\u00acW\2\u01e5"+
		"\u01e6\7\u00c9\2\2\u01e6\u01e8\5\u00acW\2\u01e7\u01e5\3\2\2\2\u01e8\u01eb"+
		"\3\2\2\2\u01e9\u01e7\3\2\2\2\u01e9\u01ea\3\2\2\2\u01ea\65\3\2\2\2\u01eb"+
		"\u01e9\3\2\2\2\u01ec\u01ed\7\'\2\2\u01ed\67\3\2\2\2\u01ee\u01ef\7+\2\2"+
		"\u01ef\u01f0\5\u00a0Q\2\u01f0\u01f1\7\u00c9\2\2\u01f1\u01f2\5\u00a0Q\2"+
		"\u01f29\3\2\2\2\u01f3\u01f4\7/\2\2\u01f4;\3\2\2\2\u01f5\u01f6\7\60\2\2"+
		"\u01f6=\3\2\2\2\u01f7\u01f8\7\62\2\2\u01f8\u01f9\5\u00a4S\2\u01f9\u01fa"+
		"\7\u00cb\2\2\u01fa\u01ff\5\u00a0Q\2\u01fb\u01fc\7\u00c9\2\2\u01fc\u01fe"+
		"\5\u00a0Q\2\u01fd\u01fb\3\2\2\2\u01fe\u0201\3\2\2\2\u01ff\u01fd\3\2\2"+
		"\2\u01ff\u0200\3\2\2\2\u0200\u0202\3\2\2\2\u0201\u01ff\3\2\2\2\u0202\u0203"+
		"\7\u00cd\2\2\u0203?\3\2\2\2\u0204\u0205\7&\2\2\u0205\u0206\5\b\5\2\u0206"+
		"\u0207\7\63\2\2\u0207\u0208\5\u00c0a\2\u0208A\3\2\2\2\u0209\u020a\7\65"+
		"\2\2\u020a\u020b\5\u00c0a\2\u020b\u020c\5\b\5\2\u020c\u020d\7\17\2\2\u020d"+
		"C\3\2\2\2\u020e\u0216\5F$\2\u020f\u0216\5H%\2\u0210\u0216\5J&\2\u0211"+
		"\u0216\5L\'\2\u0212\u0216\5N(\2\u0213\u0216\5P)\2\u0214\u0216\5R*\2\u0215"+
		"\u020e\3\2\2\2\u0215\u020f\3\2\2\2\u0215\u0210\3\2\2\2\u0215\u0211\3\2"+
		"\2\2\u0215\u0212\3\2\2\2\u0215\u0213\3\2\2\2\u0215\u0214\3\2\2\2\u0216"+
		"E\3\2\2\2\u0217\u021b\7\30\2\2\u0218\u0219\5\u00d0i\2\u0219\u021a\7\u00c9"+
		"\2\2\u021a\u021c\3\2\2\2\u021b\u0218\3\2\2\2\u021b\u021c\3\2\2\2\u021c"+
		"\u021d\3\2\2\2\u021d\u021e\5\u00b0Y\2\u021eG\3\2\2\2\u021f\u0221\7\"\2"+
		"\2\u0220\u0222\5\u00be`\2\u0221\u0220\3\2\2\2\u0221\u0222\3\2\2\2\u0222"+
		"I\3\2\2\2\u0223\u0224\7\66\2\2\u0224\u0225\5\u00a6T\2\u0225\u0226\7\u00c9"+
		"\2\2\u0226\u0227\5\u00a6T\2\u0227\u0228\7\u00c9\2\2\u0228\u0229\5\u00a6"+
		"T\2\u0229K\3\2\2\2\u022a\u022b\7\67\2\2\u022b\u022c\7\u00cb\2\2\u022c"+
		"\u022d\5\u00d4k\2\u022d\u022e\7\u00cd\2\2\u022eM\3\2\2\2\u022f\u0230\7"+
		"8\2\2\u0230\u0231\7\u00cb\2\2\u0231\u0232\5\u00d4k\2\u0232\u0233\7\u00cd"+
		"\2\2\u0233O\3\2\2\2\u0234\u0235\79\2\2\u0235Q\3\2\2\2\u0236\u0237\7:\2"+
		"\2\u0237S\3\2\2\2\u0238\u0239\5\u00acW\2\u0239\u023a\7\u00c0\2\2\u023a"+
		"\u023b\5\u00d4k\2\u023b\u0251\3\2\2\2\u023c\u023d\5\u00acW\2\u023d\u023e"+
		"\7\u00c1\2\2\u023e\u023f\5\u00d4k\2\u023f\u0251\3\2\2\2\u0240\u0241\5"+
		"\u00acW\2\u0241\u0242\7\u00be\2\2\u0242\u0243\5\u00d4k\2\u0243\u0251\3"+
		"\2\2\2\u0244\u0245\5\u00acW\2\u0245\u0246\7\u00bf\2\2\u0246\u0247\5\u00d4"+
		"k\2\u0247\u0251\3\2\2\2\u0248\u0249\5\u00acW\2\u0249\u024a\7\u00c2\2\2"+
		"\u024a\u024b\5\u00d4k\2\u024b\u0251\3\2\2\2\u024c\u024d\5\u00acW\2\u024d"+
		"\u024e\7\u00c3\2\2\u024e\u024f\5\u00d4k\2\u024f\u0251\3\2\2\2\u0250\u0238"+
		"\3\2\2\2\u0250\u023c\3\2\2\2\u0250\u0240\3\2\2\2\u0250\u0244\3\2\2\2\u0250"+
		"\u0248\3\2\2\2\u0250\u024c\3\2\2\2\u0251U\3\2\2\2\u0252\u0258\5X-\2\u0253"+
		"\u0258\5Z.\2\u0254\u0258\5\\/\2\u0255\u0258\5^\60\2\u0256\u0258\5`\61"+
		"\2\u0257\u0252\3\2\2\2\u0257\u0253\3\2\2\2\u0257\u0254\3\2\2\2\u0257\u0255"+
		"\3\2\2\2\u0257\u0256\3\2\2\2\u0258W\3\2\2\2\u0259\u025a\7l\2\2\u025a\u025b"+
		"\5\u00d4k\2\u025b\u025c\7\u00c9\2\2\u025c\u025d\5\u00d4k\2\u025dY\3\2"+
		"\2\2\u025e\u025f\7k\2\2\u025f\u0260\5\u00d4k\2\u0260[\3\2\2\2\u0261\u0262"+
		"\7t\2\2\u0262\u0263\5\u00d4k\2\u0263\u0264\7\u00ab\2\2\u0264\u0265\5\u00d4"+
		"k\2\u0265]\3\2\2\2\u0266\u0267\7m\2\2\u0267\u0268\5\u00d4k\2\u0268_\3"+
		"\2\2\2\u0269\u026b\7\32\2\2\u026a\u0269\3\2\2\2\u026a\u026b\3\2\2\2\u026b"+
		"\u026c\3\2\2\2\u026c\u026d\5\u00a8U\2\u026d\u026e\7\u00cb\2\2\u026e\u026f"+
		"\7\u00cd\2\2\u026f\u0270\7\u00ab\2\2\u0270\u0271\7p\2\2\u0271\u0272\7"+
		"\u00cb\2\2\u0272\u0273\5\u00d0i\2\u0273\u0274\7\u00cd\2\2\u0274a\3\2\2"+
		"\2\u0275\u028d\5d\63\2\u0276\u028d\5f\64\2\u0277\u028d\5h\65\2\u0278\u028d"+
		"\5j\66\2\u0279\u028d\5l\67\2\u027a\u028d\5n8\2\u027b\u028d\5p9\2\u027c"+
		"\u028d\5r:\2\u027d\u028d\5t;\2\u027e\u028d\5v<\2\u027f\u028d\5x=\2\u0280"+
		"\u028d\5z>\2\u0281\u028d\5|?\2\u0282\u028d\5~@\2\u0283\u028d\5\u0080A"+
		"\2\u0284\u028d\5\u0082B\2\u0285\u028d\5\u0084C\2\u0286\u028d\5\u0086D"+
		"\2\u0287\u028d\5\u0088E\2\u0288\u028d\5\u008aF\2\u0289\u028d\5\u008cG"+
		"\2\u028a\u028d\5\u008eH\2\u028b\u028d\5\u0090I\2\u028c\u0275\3\2\2\2\u028c"+
		"\u0276\3\2\2\2\u028c\u0277\3\2\2\2\u028c\u0278\3\2\2\2\u028c\u0279\3\2"+
		"\2\2\u028c\u027a\3\2\2\2\u028c\u027b\3\2\2\2\u028c\u027c\3\2\2\2\u028c"+
		"\u027d\3\2\2\2\u028c\u027e\3\2\2\2\u028c\u027f\3\2\2\2\u028c\u0280\3\2"+
		"\2\2\u028c\u0281\3\2\2\2\u028c\u0282\3\2\2\2\u028c\u0283\3\2\2\2\u028c"+
		"\u0284\3\2\2\2\u028c\u0285\3\2\2\2\u028c\u0286\3\2\2\2\u028c\u0287\3\2"+
		"\2\2\u028c\u0288\3\2\2\2\u028c\u0289\3\2\2\2\u028c\u028a\3\2\2\2\u028c"+
		"\u028b\3\2\2\2\u028dc\3\2\2\2\u028e\u028f\7w\2\2\u028fe\3\2\2\2\u0290"+
		"\u0291\7z\2\2\u0291\u029a\5\u00d4k\2\u0292\u0293\7z\2\2\u0293\u0294\5"+
		"\u00d4k\2\u0294\u0295\7\u00c9\2\2\u0295\u0296\5\u00d4k\2\u0296\u0297\7"+
		"\u00c9\2\2\u0297\u0298\5\u00d4k\2\u0298\u029a\3\2\2\2\u0299\u0290\3\2"+
		"\2\2\u0299\u0292\3\2\2\2\u029ag\3\2\2\2\u029b\u029c\7{\2\2\u029c\u02a5"+
		"\5\u00d4k\2\u029d\u029e\7{\2\2\u029e\u029f\5\u00d4k\2\u029f\u02a0\7\u00c9"+
		"\2\2\u02a0\u02a1\5\u00d4k\2\u02a1\u02a2\7\u00c9\2\2\u02a2\u02a3\5\u00d4"+
		"k\2\u02a3\u02a5\3\2\2\2\u02a4\u029b\3\2\2\2\u02a4\u029d\3\2\2\2\u02a5"+
		"i\3\2\2\2\u02a6\u02b5\7\u0080\2\2\u02a7\u02a8\7\u0080\2\2\u02a8\u02a9"+
		"\5\u00d4k\2\u02a9\u02aa\7\u00c9\2\2\u02aa\u02ab\5\u00d4k\2\u02ab\u02b5"+
		"\3\2\2\2\u02ac\u02ad\7\u0080\2\2\u02ad\u02b5\7u\2\2\u02ae\u02af\7\u0080"+
		"\2\2\u02af\u02b0\7u\2\2\u02b0\u02b1\5\u00d4k\2\u02b1\u02b2\7\u00c9\2\2"+
		"\u02b2\u02b3\5\u00d4k\2\u02b3\u02b5\3\2\2\2\u02b4\u02a6\3\2\2\2\u02b4"+
		"\u02a7\3\2\2\2\u02b4\u02ac\3\2\2\2\u02b4\u02ae\3\2\2\2\u02b5k\3\2\2\2"+
		"\u02b6\u02b7\7~\2\2\u02b7m\3\2\2\2\u02b8\u02b9\7v\2\2\u02b9\u02ba\5\u00d4"+
		"k\2\u02ba\u02bb\7\u00c9\2\2\u02bb\u02bc\5\u00d4k\2\u02bc\u02bd\7\u00c9"+
		"\2\2\u02bd\u02be\5\u00d4k\2\u02be\u02c8\3\2\2\2\u02bf\u02c0\7v\2\2\u02c0"+
		"\u02c1\7}\2\2\u02c1\u02c2\5\u00d4k\2\u02c2\u02c3\7\u00c9\2\2\u02c3\u02c4"+
		"\5\u00d4k\2\u02c4\u02c5\7\u00c9\2\2\u02c5\u02c6\5\u00d4k\2\u02c6\u02c8"+
		"\3\2\2\2\u02c7\u02b8\3\2\2\2\u02c7\u02bf\3\2\2\2\u02c8o\3\2\2\2\u02c9"+
		"\u02ca\7\u0081\2\2\u02ca\u02cb\5\u00d4k\2\u02cb\u02cc\7\u00c9\2\2\u02cc"+
		"\u02cd\5\u00d4k\2\u02cd\u02ce\7\u00c9\2\2\u02ce\u02cf\5\u00d4k\2\u02cf"+
		"\u02d0\7\u00c9\2\2\u02d0\u02d1\5\u00d4k\2\u02d1q\3\2\2\2\u02d2\u02d3\7"+
		"\u0083\2\2\u02d3\u02d4\5\u00d4k\2\u02d4\u02d5\7\u00c9\2\2\u02d5\u02d6"+
		"\5\u00d4k\2\u02d6\u02d7\7\u00c9\2\2\u02d7\u02d8\5\u00d4k\2\u02d8\u02d9"+
		"\7\u00c9\2\2\u02d9\u02da\5\u00d4k\2\u02da\u02e6\3\2\2\2\u02db\u02dc\7"+
		"\u0083\2\2\u02dc\u02dd\7}\2\2\u02dd\u02de\5\u00d4k\2\u02de\u02df\7\u00c9"+
		"\2\2\u02df\u02e0\5\u00d4k\2\u02e0\u02e1\7\u00c9\2\2\u02e1\u02e2\5\u00d4"+
		"k\2\u02e2\u02e3\7\u00c9\2\2\u02e3\u02e4\5\u00d4k\2\u02e4\u02e6\3\2\2\2"+
		"\u02e5\u02d2\3\2\2\2\u02e5\u02db\3\2\2\2\u02e6s\3\2\2\2\u02e7\u02e8\7"+
		"\u008c\2\2\u02e8\u02e9\5\u00d4k\2\u02e9\u02ea\7\u00c9\2\2\u02ea\u02eb"+
		"\5\u00d4k\2\u02eb\u02ec\7\u00c9\2\2\u02ec\u02ed\5\u00d4k\2\u02ed\u02ee"+
		"\7\u00c9\2\2\u02ee\u02ef\5\u00d4k\2\u02ef\u02f0\7\u00c9\2\2\u02f0\u02f1"+
		"\5\u00d4k\2\u02f1\u02f2\7\u00c9\2\2\u02f2\u02f3\5\u00d4k\2\u02f3\u0317"+
		"\3\2\2\2\u02f4\u02f5\7\u008c\2\2\u02f5\u02f6\7}\2\2\u02f6\u02f7\5\u00d4"+
		"k\2\u02f7\u02f8\7\u00c9\2\2\u02f8\u02f9\5\u00d4k\2\u02f9\u02fa\7\u00c9"+
		"\2\2\u02fa\u02fb\5\u00d4k\2\u02fb\u02fc\7\u00c9\2\2\u02fc\u02fd\5\u00d4"+
		"k\2\u02fd\u02fe\7\u00c9\2\2\u02fe\u02ff\5\u00d4k\2\u02ff\u0300\7\u00c9"+
		"\2\2\u0300\u0301\5\u00d4k\2\u0301\u0317\3\2\2\2\u0302\u0303\7\u008c\2"+
		"\2\u0303\u0304\7i\2\2\u0304\u0305\5\u00d4k\2\u0305\u0306\7\u00c9\2\2\u0306"+
		"\u0307\5\u00d4k\2\u0307\u0308\7\u00c9\2\2\u0308\u0309\5\u00d4k\2\u0309"+
		"\u030a\7\u00c9\2\2\u030a\u030b\5\u00d4k\2\u030b\u030c\7\u00c9\2\2\u030c"+
		"\u030d\5\u00d4k\2\u030d\u030e\7\u00c9\2\2\u030e\u030f\5\u00d4k\2\u030f"+
		"\u0310\7\u00c9\2\2\u0310\u0311\5\u00d4k\2\u0311\u0312\7\u00c9\2\2\u0312"+
		"\u0313\5\u00d4k\2\u0313\u0314\7\u00c9\2\2\u0314\u0315\5\u00d4k\2\u0315"+
		"\u0317\3\2\2\2\u0316\u02e7\3\2\2\2\u0316\u02f4\3\2\2\2\u0316\u0302\3\2"+
		"\2\2\u0317u\3\2\2\2\u0318\u0319\7\u0084\2\2\u0319\u031a\5\u00d4k\2\u031a"+
		"\u031b\7\u00c9\2\2\u031b\u031c\5\u00d4k\2\u031cw\3\2\2\2\u031d\u031e\7"+
		"x\2\2\u031e\u031f\5\u00d4k\2\u031f\u0320\7\u00c9\2\2\u0320\u0321\5\u00d4"+
		"k\2\u0321\u0322\7\u00c9\2\2\u0322\u0323\5\u00d4k\2\u0323\u0324\7\u00c9"+
		"\2\2\u0324\u0325\5\u00d4k\2\u0325y\3\2\2\2\u0326\u0327\7y\2\2\u0327{\3"+
		"\2\2\2\u0328\u0329\7\u0088\2\2\u0329\u032a\5\u00d4k\2\u032a\u032b\7\u00c9"+
		"\2\2\u032b\u032c\5\u00d4k\2\u032c\u032d\7\u00c9\2\2\u032d\u032e\5\u00d4"+
		"k\2\u032e\u032f\7\u00c9\2\2\u032f\u0330\5\u00d0i\2\u0330}\3\2\2\2\u0331"+
		"\u0332\7\u0089\2\2\u0332\u0333\5\u00d4k\2\u0333\u0334\7\u00c9\2\2\u0334"+
		"\u0335\5\u00d4k\2\u0335\u0336\7\u00c9\2\2\u0336\u0337\5\u00d4k\2\u0337"+
		"\u0338\7\u00c9\2\2\u0338\u0339\5\u00d0i\2\u0339\177\3\2\2\2\u033a\u033b"+
		"\t\4\2\2\u033b\u033c\5\u00d4k\2\u033c\u033d\7\u00c9\2\2\u033d\u033e\5"+
		"\u00d4k\2\u033e\u033f\7\u00c9\2\2\u033f\u0340\5\u00d4k\2\u0340\u0341\7"+
		"\u00c9\2\2\u0341\u0342\5\u00d0i\2\u0342\u0081\3\2\2\2\u0343\u0344\7\177"+
		"\2\2\u0344\u0083\3\2\2\2\u0345\u0346\7^\2\2\u0346\u0085\3\2\2\2\u0347"+
		"\u0348\7_\2\2\u0348\u0349\5\u00aaV\2\u0349\u034a\7\u00cb\2\2\u034a\u034b"+
		"\5\u00d4k\2\u034b\u034c\7\u00cd\2\2\u034c\u034d\7\u00c9\2\2\u034d\u034e"+
		"\5\u00d4k\2\u034e\u034f\7\u00c9\2\2\u034f\u0350\5\u00d4k\2\u0350\u0351"+
		"\7\u00c9\2\2\u0351\u0352\5\u00d4k\2\u0352\u0353\7\u00c9\2\2\u0353\u0354"+
		"\5\u00d4k\2\u0354\u0087\3\2\2\2\u0355\u0356\7`\2\2\u0356\u0357\5\u00aa"+
		"V\2\u0357\u0358\7\u00cb\2\2\u0358\u0359\5\u00d4k\2\u0359\u035a\7\u00cd"+
		"\2\2\u035a\u035b\7\u00c9\2\2\u035b\u035c\5\u00d4k\2\u035c\u035d\7\u00c9"+
		"\2\2\u035d\u035e\5\u00d4k\2\u035e\u035f\7\u00c9\2\2\u035f\u0360\5\u00d4"+
		"k\2\u0360\u0361\7\u00c9\2\2\u0361\u0362\5\u00d4k\2\u0362\u0089\3\2\2\2"+
		"\u0363\u0364\7a\2\2\u0364\u0365\5\u00d4k\2\u0365\u0366\7\u00c9\2\2\u0366"+
		"\u0367\5\u00d4k\2\u0367\u0368\7\u00c9\2\2\u0368\u0369\5\u00d4k\2\u0369"+
		"\u036a\7\u00c9\2\2\u036a\u036b\5\u00d4k\2\u036b\u008b\3\2\2\2\u036c\u036d"+
		"\7b\2\2\u036d\u036e\5\u00d4k\2\u036e\u036f\7\u00c9\2\2\u036f\u0370\5\u00d4"+
		"k\2\u0370\u0371\7\u00c9\2\2\u0371\u0372\5\u00d4k\2\u0372\u0373\7\u00c9"+
		"\2\2\u0373\u0374\5\u00d4k\2\u0374\u008d\3\2\2\2\u0375\u0376\7c\2\2\u0376"+
		"\u0377\5\u00d4k\2\u0377\u0378\7\u00c9\2\2\u0378\u0379\5\u00d4k\2\u0379"+
		"\u008f\3\2\2\2\u037a\u037b\7d\2\2\u037b\u037c\5\u00d4k\2\u037c\u0091\3"+
		"\2\2\2\u037d\u037e\7\64\2\2\u037e\u0383\5\u00c0a\2\u037f\u0380\7\u00c9"+
		"\2\2\u0380\u0382\5\u00c0a\2\u0381\u037f\3\2\2\2\u0382\u0385\3\2\2\2\u0383"+
		"\u0381\3\2\2\2\u0383\u0384\3\2\2\2\u0384\u0386\3\2\2\2\u0385\u0383\3\2"+
		"\2\2\u0386\u0387\7\u00c8\2\2\u0387\u0388\5\b\5\2\u0388\u0093\3\2\2\2\u0389"+
		"\u038a\t\5\2\2\u038a\u0095\3\2\2\2\u038b\u038e\5\u00c2b\2\u038c\u038e"+
		"\5\u00ceh\2\u038d\u038b\3\2\2\2\u038d\u038c\3\2\2\2\u038e\u0097\3\2\2"+
		"\2\u038f\u0393\5\u009cO\2\u0390\u0393\5\u009eP\2\u0391\u0393\5\u009aN"+
		"\2\u0392\u038f\3\2\2\2\u0392\u0390\3\2\2\2\u0392\u0391\3\2\2\2\u0393\u0099"+
		"\3\2\2\2\u0394\u0395\5\u00aaV\2\u0395\u009b\3\2\2\2\u0396\u0397\5\u00a4"+
		"S\2\u0397\u0398\7\u00cb\2\2\u0398\u039b\5\u00d4k\2\u0399\u039a\7\u00c9"+
		"\2\2\u039a\u039c\5\u00d4k\2\u039b\u0399\3\2\2\2\u039b\u039c\3\2\2\2\u039c"+
		"\u039d\3\2\2\2\u039d\u039e\7\u00cd\2\2\u039e\u03c9\3\2\2\2\u039f\u03a0"+
		"\5\u00a6T\2\u03a0\u03a1\7\u00cb\2\2\u03a1\u03a4\5\u00d4k\2\u03a2\u03a3"+
		"\7\u00c9\2\2\u03a3\u03a5\5\u00d4k\2\u03a4\u03a2\3\2\2\2\u03a4\u03a5\3"+
		"\2\2\2\u03a5\u03a6\3\2\2\2\u03a6\u03a7\7\u00cd\2\2\u03a7\u03c9\3\2\2\2"+
		"\u03a8\u03a9\5\u009aN\2\u03a9\u03aa\7\u00cb\2\2\u03aa\u03ab\5\u00d4k\2"+
		"\u03ab\u03ac\7\u00cd\2\2\u03ac\u03ad\5\u00a6T\2\u03ad\u03c9\3\2\2\2\u03ae"+
		"\u03af\5\u009aN\2\u03af\u03b0\7\u00cb\2\2\u03b0\u03b1\5\u00d4k\2\u03b1"+
		"\u03b2\7\u00cd\2\2\u03b2\u03b3\5\u00a4S\2\u03b3\u03c9\3\2\2\2\u03b4\u03b5"+
		"\7\u00d4\2\2\u03b5\u03b7\7\u00cb\2\2\u03b6\u03b8\5\u00b4[\2\u03b7\u03b6"+
		"\3\2\2\2\u03b7\u03b8\3\2\2\2\u03b8\u03b9\3\2\2\2\u03b9\u03c9\7\u00cd\2"+
		"\2\u03ba\u03bb\7\u00d3\2\2\u03bb\u03bd\7\u00cb\2\2\u03bc\u03be\5\u00b4"+
		"[\2\u03bd\u03bc\3\2\2\2\u03bd\u03be\3\2\2\2\u03be\u03bf\3\2\2\2\u03bf"+
		"\u03c9\7\u00cd\2\2\u03c0\u03c9\5\u00a4S\2\u03c1\u03c9\5\u00a6T\2\u03c2"+
		"\u03c3\5\u009aN\2\u03c3\u03c4\5\u00a4S\2\u03c4\u03c9\3\2\2\2\u03c5\u03c6"+
		"\5\u009aN\2\u03c6\u03c7\5\u00a6T\2\u03c7\u03c9\3\2\2\2\u03c8\u0396\3\2"+
		"\2\2\u03c8\u039f\3\2\2\2\u03c8\u03a8\3\2\2\2\u03c8\u03ae\3\2\2\2\u03c8"+
		"\u03b4\3\2\2\2\u03c8\u03ba\3\2\2\2\u03c8\u03c0\3\2\2\2\u03c8\u03c1\3\2"+
		"\2\2\u03c8\u03c2\3\2\2\2\u03c8\u03c5\3\2\2\2\u03c9\u009d\3\2\2\2\u03ca"+
		"\u03cb\5\u00a8U\2\u03cb\u03cc\7\u00cb\2\2\u03cc\u03cf\5\u00d4k\2\u03cd"+
		"\u03ce\7\u00c9\2\2\u03ce\u03d0\5\u00d4k\2\u03cf\u03cd\3\2\2\2\u03cf\u03d0"+
		"\3\2\2\2\u03d0\u03d1\3\2\2\2\u03d1\u03d2\7\u00cd\2\2\u03d2\u03e4\3\2\2"+
		"\2\u03d3\u03d4\5\u009aN\2\u03d4\u03d5\7\u00cb\2\2\u03d5\u03d6\5\u00d4"+
		"k\2\u03d6\u03d7\7\u00cd\2\2\u03d7\u03d8\5\u00a8U\2\u03d8\u03e4\3\2\2\2"+
		"\u03d9\u03e4\5\u00a8U\2\u03da\u03db\5\u009aN\2\u03db\u03dc\5\u00a8U\2"+
		"\u03dc\u03e4\3\2\2\2\u03dd\u03de\7\u00d5\2\2\u03de\u03e0\7\u00cb\2\2\u03df"+
		"\u03e1\5\u00b4[\2\u03e0\u03df\3\2\2\2\u03e0\u03e1\3\2\2\2\u03e1\u03e2"+
		"\3\2\2\2\u03e2\u03e4\7\u00cd\2\2\u03e3\u03ca\3\2\2\2\u03e3\u03d3\3\2\2"+
		"\2\u03e3\u03d9\3\2\2\2\u03e3\u03da\3\2\2\2\u03e3\u03dd\3\2\2\2\u03e4\u009f"+
		"\3\2\2\2\u03e5\u03e9\5\u00a4S\2\u03e6\u03e9\5\u00a6T\2\u03e7\u03e9\5\u00a8"+
		"U\2\u03e8\u03e5\3\2\2\2\u03e8\u03e6\3\2\2\2\u03e8\u03e7\3\2\2\2\u03e9"+
		"\u00a1\3\2\2\2\u03ea\u03ed\5\u00a4S\2\u03eb\u03ed\5\u00a6T\2\u03ec\u03ea"+
		"\3\2\2\2\u03ec\u03eb\3\2\2\2\u03ed\u00a3\3\2\2\2\u03ee\u03ef\7\u00d6\2"+
		"\2\u03ef\u00a5\3\2\2\2\u03f0\u03f1\7\u00d7\2\2\u03f1\u00a7\3\2\2\2\u03f2"+
		"\u03f3\7\u00d8\2\2\u03f3\u00a9\3\2\2\2\u03f4\u03f5\7\u00d9\2\2\u03f5\u00ab"+
		"\3\2\2\2\u03f6\u041e\5\u00a0Q\2\u03f7\u0402\5\u00a0Q\2\u03f8\u03f9\7\u00cb"+
		"\2\2\u03f9\u03fc\5\u00d4k\2\u03fa\u03fb\7\u00c9\2\2\u03fb\u03fd\5\u00d4"+
		"k\2\u03fc\u03fa\3\2\2\2\u03fc\u03fd\3\2\2\2\u03fd\u03fe\3\2\2\2\u03fe"+
		"\u03ff\7\u00cd\2\2\u03ff\u0401\3\2\2\2\u0400\u03f8\3\2\2\2\u0401\u0404"+
		"\3\2\2\2\u0402\u0400\3\2\2\2\u0402\u0403\3\2\2\2\u0403\u041e\3\2\2\2\u0404"+
		"\u0402\3\2\2\2\u0405\u0406\5\u009aN\2\u0406\u0407\5\u00a4S\2\u0407\u041e"+
		"\3\2\2\2\u0408\u0409\5\u009aN\2\u0409\u040a\5\u00a6T\2\u040a\u041e\3\2"+
		"\2\2\u040b\u040c\5\u009aN\2\u040c\u040d\7\u00cb\2\2\u040d\u040e\5\u00d4"+
		"k\2\u040e\u040f\7\u00cd\2\2\u040f\u0410\5\u00a4S\2\u0410\u041e\3\2\2\2"+
		"\u0411\u0412\5\u009aN\2\u0412\u0413\7\u00cb\2\2\u0413\u0414\5\u00d4k\2"+
		"\u0414\u0415\7\u00cd\2\2\u0415\u0416\5\u00a6T\2\u0416\u041e\3\2\2\2\u0417"+
		"\u041e\5\u009aN\2\u0418\u0419\5\u009aN\2\u0419\u041a\7\u00cb\2\2\u041a"+
		"\u041b\5\u00d4k\2\u041b\u041c\7\u00cd\2\2\u041c\u041e\3\2\2\2\u041d\u03f6"+
		"\3\2\2\2\u041d\u03f7\3\2\2\2\u041d\u0405\3\2\2\2\u041d\u0408\3\2\2\2\u041d"+
		"\u040b\3\2\2\2\u041d\u0411\3\2\2\2\u041d\u0417\3\2\2\2\u041d\u0418\3\2"+
		"\2\2\u041e\u00ad\3\2\2\2\u041f\u0420\5\u00a0Q\2\u0420\u0421\7\u00cb\2"+
		"\2\u0421\u0426\5\u00d4k\2\u0422\u0423\7\u00c9\2\2\u0423\u0425\5\u00d4"+
		"k\2\u0424\u0422\3\2\2\2\u0425\u0428\3\2\2\2\u0426\u0424\3\2\2\2\u0426"+
		"\u0427\3\2\2\2\u0427\u0429\3\2\2\2\u0428\u0426\3\2\2\2\u0429\u042a\7\u00cd"+
		"\2\2\u042a\u0433\3\2\2\2\u042b\u042c\5\u009aN\2\u042c\u042d\7\u00cb\2"+
		"\2\u042d\u042e\5\u00d4k\2\u042e\u042f\7\u00c9\2\2\u042f\u0430\5\u00a4"+
		"S\2\u0430\u0431\7\u00cd\2\2\u0431\u0433\3\2\2\2\u0432\u041f\3\2\2\2\u0432"+
		"\u042b\3\2\2\2\u0433\u00af\3\2\2\2\u0434\u0439\5\u00acW\2\u0435\u0436"+
		"\7\u00c9\2\2\u0436\u0438\5\u00acW\2\u0437\u0435\3\2\2\2\u0438\u043b\3"+
		"\2\2\2\u0439\u0437\3\2\2\2\u0439\u043a\3\2\2\2\u043a\u00b1\3\2\2\2\u043b"+
		"\u0439\3\2\2\2\u043c\u043e\7(\2\2\u043d\u043c\3\2\2\2\u043d\u043e\3\2"+
		"\2\2\u043e\u043f\3\2\2\2\u043f\u0447\5\u00a0Q\2\u0440\u0442\7\u00c9\2"+
		"\2\u0441\u0443\7(\2\2\u0442\u0441\3\2\2\2\u0442\u0443\3\2\2\2\u0443\u0444"+
		"\3\2\2\2\u0444\u0446\5\u00a0Q\2\u0445\u0440\3\2\2\2\u0446\u0449\3\2\2"+
		"\2\u0447\u0445\3\2\2\2\u0447\u0448\3\2\2\2\u0448\u00b3\3\2\2\2\u0449\u0447"+
		"\3\2\2\2\u044a\u044f\5\u00c0a\2\u044b\u044c\7\u00c9\2\2\u044c\u044e\5"+
		"\u00c0a\2\u044d\u044b\3\2\2\2\u044e\u0451\3\2\2\2\u044f\u044d\3\2\2\2"+
		"\u044f\u0450\3\2\2\2\u0450\u00b5\3\2\2\2\u0451\u044f\3\2\2\2\u0452\u0457"+
		"\5\u00c0a\2\u0453\u0454\7\u00c9\2\2\u0454\u0456\5\u00c0a\2\u0455\u0453"+
		"\3\2\2\2\u0456\u0459\3\2\2\2\u0457\u0455\3\2\2\2\u0457\u0458\3\2\2\2\u0458"+
		"\u00b7\3\2\2\2\u0459\u0457\3\2\2\2\u045a\u045c\7\u00c6\2\2\u045b\u045a"+
		"\3\2\2\2\u045b\u045c\3\2\2\2\u045c\u045d\3\2\2\2\u045d\u0466\5\u00c0a"+
		"\2\u045e\u045f\7)\2\2\u045f\u0460\7\u00cb\2\2\u0460\u0461\5\u00d4k\2\u0461"+
		"\u0462\7\u00cd\2\2\u0462\u0466\3\2\2\2\u0463\u0464\7)\2\2\u0464\u0466"+
		"\5\u00d4k\2\u0465\u045b\3\2\2\2\u0465\u045e\3\2\2\2\u0465\u0463\3\2\2"+
		"\2\u0466\u00b9\3\2\2\2\u0467\u0469\7\u00c5\2\2\u0468\u0467\3\2\2\2\u0469"+
		"\u046a\3\2\2\2\u046a\u0468\3\2\2\2\u046a\u046b\3\2\2\2\u046b\u00bb\3\2"+
		"\2\2\u046c\u0470\7\u00c9\2\2\u046d\u0470\7\u00ce\2\2\u046e\u0470\5\u00ba"+
		"^\2\u046f\u046c\3\2\2\2\u046f\u046d\3\2\2\2\u046f\u046e\3\2\2\2\u0470"+
		"\u00bd\3\2\2\2\u0471\u0473\5\u00ba^\2\u0472\u0471\3\2\2\2\u0472\u0473"+
		"\3\2\2\2\u0473\u0475\3\2\2\2\u0474\u0476\7\u00ce\2\2\u0475\u0474\3\2\2"+
		"\2\u0475\u0476\3\2\2\2\u0476\u0477\3\2\2\2\u0477\u047d\5\u00b8]\2\u0478"+
		"\u0479\5\u00bc_\2\u0479\u047a\5\u00b8]\2\u047a\u047c\3\2\2\2\u047b\u0478"+
		"\3\2\2\2\u047c\u047f\3\2\2\2\u047d\u047b\3\2\2\2\u047d\u047e\3\2\2\2\u047e"+
		"\u0481\3\2\2\2\u047f\u047d\3\2\2\2\u0480\u0482\7\u00ce\2\2\u0481\u0480"+
		"\3\2\2\2\u0481\u0482\3\2\2\2\u0482\u00bf\3\2\2\2\u0483\u0486\5\u00d4k"+
		"\2\u0484\u0486\5\u00d0i\2\u0485\u0483\3\2\2\2\u0485\u0484\3\2\2\2\u0486"+
		"\u00c1\3\2\2\2\u0487\u048e\5\u00c4c\2\u0488\u048e\5\u00caf\2\u0489\u048e"+
		"\5\u00c6d\2\u048a\u048e\5\u00c8e\2\u048b\u048e\5\u00d6l\2\u048c\u048e"+
		"\5\u00d8m\2\u048d\u0487\3\2\2\2\u048d\u0488\3\2\2\2\u048d\u0489\3\2\2"+
		"\2\u048d\u048a\3\2\2\2\u048d\u048b\3\2\2\2\u048d\u048c\3\2\2\2\u048e\u00c3"+
		"\3\2\2\2\u048f\u0491\t\6\2\2\u0490\u048f\3\2\2\2\u0490\u0491\3\2\2\2\u0491"+
		"\u0492\3\2\2\2\u0492\u0493\7\u00dc\2\2\u0493\u00c5\3\2\2\2\u0494\u0495"+
		"\7\u00da\2\2\u0495\u00c7\3\2\2\2\u0496\u0497\7\u00db\2\2\u0497\u00c9\3"+
		"\2\2\2\u0498\u049a\t\6\2\2\u0499\u0498\3\2\2\2\u0499\u049a\3\2\2\2\u049a"+
		"\u049b\3\2\2\2\u049b\u049c\7\u00dd\2\2\u049c\u00cb\3\2\2\2\u049d\u04d0"+
		"\7\u00a1\2\2\u049e\u049f\7\u00a4\2\2\u049f\u04a0\7\u00cb\2\2\u04a0\u04a1"+
		"\5\u00d4k\2\u04a1\u04a2\7\u00cd\2\2\u04a2\u04d0\3\2\2\2\u04a3\u04a4\7"+
		"\u00a5\2\2\u04a4\u04a5\7\u00cb\2\2\u04a5\u04a6\5\u00d0i\2\u04a6\u04a7"+
		"\7\u00c9\2\2\u04a7\u04a8\5\u00d4k\2\u04a8\u04a9\7\u00cd\2\2\u04a9\u04d0"+
		"\3\2\2\2\u04aa\u04ab\7\u00a6\2\2\u04ab\u04ac\7\u00cb\2\2\u04ac\u04ad\5"+
		"\u00d0i\2\u04ad\u04ae\7\u00c9\2\2\u04ae\u04af\5\u00d4k\2\u04af\u04b0\7"+
		"\u00c9\2\2\u04b0\u04b1\5\u00d4k\2\u04b1\u04b2\7\u00cd\2\2\u04b2\u04d0"+
		"\3\2\2\2\u04b3\u04b4\7\u00a6\2\2\u04b4\u04b5\7\u00cb\2\2\u04b5\u04b6\5"+
		"\u00d0i\2\u04b6\u04b7\7\u00c9\2\2\u04b7\u04b8\5\u00d4k\2\u04b8\u04b9\7"+
		"\u00cd\2\2\u04b9\u04d0\3\2\2\2\u04ba\u04bb\7\u00a7\2\2\u04bb\u04bc\7\u00cb"+
		"\2\2\u04bc\u04bd\5\u00d0i\2\u04bd\u04be\7\u00c9\2\2\u04be\u04bf\5\u00d4"+
		"k\2\u04bf\u04c0\7\u00cd\2\2\u04c0\u04d0\3\2\2\2\u04c1\u04c2\7\u00a2\2"+
		"\2\u04c2\u04d0\5\u00d4k\2\u04c3\u04c4\7\u00a2\2\2\u04c4\u04c5\7\u00c6"+
		"\2\2\u04c5\u04d0\5\u00d4k\2\u04c6\u04c7\7\u00a3\2\2\u04c7\u04c8\7\u00cb"+
		"\2\2\u04c8\u04c9\5\u00d4k\2\u04c9\u04ca\7\u00c9\2\2\u04ca\u04cb\5\u00d0"+
		"i\2\u04cb\u04cc\7\u00cd\2\2\u04cc\u04d0\3\2\2\2\u04cd\u04ce\78\2\2\u04ce"+
		"\u04d0\5\u00d4k\2\u04cf\u049d\3\2\2\2\u04cf\u049e\3\2\2\2\u04cf\u04a3"+
		"\3\2\2\2\u04cf\u04aa\3\2\2\2\u04cf\u04b3\3\2\2\2\u04cf\u04ba\3\2\2\2\u04cf"+
		"\u04c1\3\2\2\2\u04cf\u04c3\3\2\2\2\u04cf\u04c6\3\2\2\2\u04cf\u04cd\3\2"+
		"\2\2\u04d0\u00cd\3\2\2\2\u04d1\u04d2\7\u00d1\2\2\u04d2\u00cf\3\2\2\2\u04d3"+
		"\u04d4\bi\1\2\u04d4\u04d5\7\u00cb\2\2\u04d5\u04d6\5\u00d0i\2\u04d6\u04d7"+
		"\7\u00cd\2\2\u04d7\u04dc\3\2\2\2\u04d8\u04dc\5\u00ccg\2\u04d9\u04dc\5"+
		"\u009eP\2\u04da\u04dc\5\u00ceh\2\u04db\u04d3\3\2\2\2\u04db\u04d8\3\2\2"+
		"\2\u04db\u04d9\3\2\2\2\u04db\u04da\3\2\2\2\u04dc\u04e2\3\2\2\2\u04dd\u04de"+
		"\f\5\2\2\u04de\u04df\7\u00b8\2\2\u04df\u04e1\5\u00d0i\6\u04e0\u04dd\3"+
		"\2\2\2\u04e1\u04e4\3\2\2\2\u04e2\u04e0\3\2\2\2\u04e2\u04e3\3\2\2\2\u04e3"+
		"\u00d1\3\2\2\2\u04e4\u04e2\3\2\2\2\u04e5\u05a4\7\u008e\2\2\u04e6\u05a4"+
		"\7\20\2\2\u04e7\u05a4\7\61\2\2\u04e8\u05a4\7\u008d\2\2\u04e9\u04ea\7\u00a8"+
		"\2\2\u04ea\u04eb\7\u00cb\2\2\u04eb\u04ec\5\u00d4k\2\u04ec\u04ed\7\u00cd"+
		"\2\2\u04ed\u05a4\3\2\2\2\u04ee\u05a4\7\u00a8\2\2\u04ef\u05a4\7\u00a9\2"+
		"\2\u04f0\u05a4\7\u00aa\2\2\u04f1\u04f2\7\u0090\2\2\u04f2\u04f3\7\u00cb"+
		"\2\2\u04f3\u04f4\5\u00d4k\2\u04f4\u04f5\7\u00cd\2\2\u04f5\u05a4\3\2\2"+
		"\2\u04f6\u04f7\7\u0091\2\2\u04f7\u04f8\7\u00cb\2\2\u04f8\u04f9\5\u00d4"+
		"k\2\u04f9\u04fa\7\u00cd\2\2\u04fa\u05a4\3\2\2\2\u04fb\u04fc\7\u0092\2"+
		"\2\u04fc\u04fd\7\u00cb\2\2\u04fd\u04fe\5\u00d4k\2\u04fe\u04ff\7\u00cd"+
		"\2\2\u04ff\u05a4\3\2\2\2\u0500\u0501\7\u0093\2\2\u0501\u0502\7\u00cb\2"+
		"\2\u0502\u0503\5\u00d4k\2\u0503\u0504\7\u00cd\2\2\u0504\u05a4\3\2\2\2"+
		"\u0505\u0506\7\u0094\2\2\u0506\u0507\7\u00cb\2\2\u0507\u0508\5\u00d4k"+
		"\2\u0508\u0509\7\u00cd\2\2\u0509\u05a4\3\2\2\2\u050a\u050b\7\u0095\2\2"+
		"\u050b\u050c\7\u00cb\2\2\u050c\u050d\5\u00d4k\2\u050d\u050e\7\u00cd\2"+
		"\2\u050e\u05a4\3\2\2\2\u050f\u0510\7\u0096\2\2\u0510\u0511\7\u00cb\2\2"+
		"\u0511\u0512\5\u00d4k\2\u0512\u0513\7\u00cd\2\2\u0513\u05a4\3\2\2\2\u0514"+
		"\u0515\7\u0097\2\2\u0515\u0516\7\u00cb\2\2\u0516\u0517\5\u00d4k\2\u0517"+
		"\u0518\7\u00cd\2\2\u0518\u05a4\3\2\2\2\u0519\u051a\7\u0098\2\2\u051a\u051b"+
		"\7\u00cb\2\2\u051b\u051c\5\u00d4k\2\u051c\u051d\7\u00cd\2\2\u051d\u05a4"+
		"\3\2\2\2\u051e\u051f\7\u0099\2\2\u051f\u0520\7\u00cb\2\2\u0520\u0521\5"+
		"\u00d4k\2\u0521\u0522\7\u00cd\2\2\u0522\u05a4\3\2\2\2\u0523\u0524\7\u009a"+
		"\2\2\u0524\u0525\7\u00cb\2\2\u0525\u0526\5\u00d4k\2\u0526\u0527\7\u00cd"+
		"\2\2\u0527\u05a4\3\2\2\2\u0528\u0529\7\u009b\2\2\u0529\u052a\7\u00cb\2"+
		"\2\u052a\u052b\5\u00d4k\2\u052b\u052c\7\u00cd\2\2\u052c\u05a4\3\2\2\2"+
		"\u052d\u052e\7\u008f\2\2\u052e\u052f\7\u00cb\2\2\u052f\u0530\5\u00d4k"+
		"\2\u0530\u0531\7\u00cd\2\2\u0531\u05a4\3\2\2\2\u0532\u0533\7\u009c\2\2"+
		"\u0533\u0534\7\u00cb\2\2\u0534\u0535\5\u00d4k\2\u0535\u0536\7\u00cd\2"+
		"\2\u0536\u05a4\3\2\2\2\u0537\u05a4\79\2\2\u0538\u0539\7\67\2\2\u0539\u053a"+
		"\7\u00cb\2\2\u053a\u053b\5\u00d4k\2\u053b\u053c\7\u00cd\2\2\u053c\u05a4"+
		"\3\2\2\2\u053d\u053e\7\27\2\2\u053e\u053f\7\u00cb\2\2\u053f\u0540\5\u00d4"+
		"k\2\u0540\u0541\7\u00cd\2\2\u0541\u05a4\3\2\2\2\u0542\u0543\7\22\2\2\u0543"+
		"\u0544\7\u00cb\2\2\u0544\u0545\5\u00d4k\2\u0545\u0546\7\u00cd\2\2\u0546"+
		"\u05a4\3\2\2\2\u0547\u05a4\7\u0086\2\2\u0548\u05a4\7\u0087\2\2\u0549\u054a"+
		"\7\u0085\2\2\u054a\u054b\7\u00cb\2\2\u054b\u054c\5\u00d4k\2\u054c\u054d"+
		"\7\u00c9\2\2\u054d\u054e\5\u00d4k\2\u054e\u054f\7\u00cd\2\2\u054f\u05a4"+
		"\3\2\2\2\u0550\u0551\7z\2\2\u0551\u0552\7\u00cb\2\2\u0552\u0553\5\u00d4"+
		"k\2\u0553\u0554\7\u00c9\2\2\u0554\u0555\5\u00d4k\2\u0555\u0556\7\u00c9"+
		"\2\2\u0556\u0557\5\u00d4k\2\u0557\u0558\7\u00cd\2\2\u0558\u05a4\3\2\2"+
		"\2\u0559\u055a\7\u0082\2\2\u055a\u05a4\5\u00d0i\2\u055b\u055c\7|\2\2\u055c"+
		"\u055d\5\u00d4k\2\u055d\u055e\7\u00c9\2\2\u055e\u055f\5\u00d4k\2\u055f"+
		"\u05a4\3\2\2\2\u0560\u0561\7e\2\2\u0561\u0562\5\u00aaV\2\u0562\u0563\7"+
		"\u00c9\2\2\u0563\u0564\5\u00aaV\2\u0564\u05a4\3\2\2\2\u0565\u0566\7f\2"+
		"\2\u0566\u0567\5\u00d4k\2\u0567\u0568\7\u00c9\2\2\u0568\u0569\5\u00d4"+
		"k\2\u0569\u056a\7\u00c9\2\2\u056a\u056b\5\u00d4k\2\u056b\u056c\7\u00c9"+
		"\2\2\u056c\u056d\5\u00d4k\2\u056d\u056e\7\u00c9\2\2\u056e\u056f\5\u00d4"+
		"k\2\u056f\u0570\7\u00c9\2\2\u0570\u0571\5\u00d4k\2\u0571\u0572\7\u00c9"+
		"\2\2\u0572\u0573\5\u00d4k\2\u0573\u0574\7\u00c9\2\2\u0574\u0575\5\u00d4"+
		"k\2\u0575\u0576\7\u00c9\2\2\u0576\u0577\t\7\2\2\u0577\u05a4\3\2\2\2\u0578"+
		"\u0579\7k\2\2\u0579\u05a4\5\u00d4k\2\u057a\u057b\7n\2\2\u057b\u05a4\5"+
		"\u00d4k\2\u057c\u057d\7q\2\2\u057d\u057e\7\u00cb\2\2\u057e\u057f\5\u00d0"+
		"i\2\u057f\u0580\7\u00cd\2\2\u0580\u05a4\3\2\2\2\u0581\u0582\7r\2\2\u0582"+
		"\u0583\7\u00cb\2\2\u0583\u0584\5\u00d0i\2\u0584\u0585\7\u00cd\2\2\u0585"+
		"\u05a4\3\2\2\2\u0586\u0587\7s\2\2\u0587\u0588\7\u00cb\2\2\u0588\u0589"+
		"\5\u00d0i\2\u0589\u058a\7\u00cd\2\2\u058a\u05a4\3\2\2\2\u058b\u058c\7"+
		"t\2\2\u058c\u05a4\5\u00d4k\2\u058d\u058e\7\u009d\2\2\u058e\u05a4\5\u00d0"+
		"i\2\u058f\u0590\7\u009e\2\2\u0590\u05a4\5\u00d0i\2\u0591\u0592\7\u009f"+
		"\2\2\u0592\u0593\7\u00cb\2\2\u0593\u0594\5\u00d0i\2\u0594\u0595\7\u00c9"+
		"\2\2\u0595\u0596\5\u00d0i\2\u0596\u0597\7\u00cd\2\2\u0597\u05a4\3\2\2"+
		"\2\u0598\u0599\7\u009f\2\2\u0599\u059a\7\u00cb\2\2\u059a\u059b\5\u00d0"+
		"i\2\u059b\u059c\7\u00c9\2\2\u059c\u059d\5\u00d0i\2\u059d\u059e\7\u00c9"+
		"\2\2\u059e\u059f\5\u00d4k\2\u059f\u05a0\7\u00cd\2\2\u05a0\u05a4\3\2\2"+
		"\2\u05a1\u05a2\7\u00a0\2\2\u05a2\u05a4\5\u00d0i\2\u05a3\u04e5\3\2\2\2"+
		"\u05a3\u04e6\3\2\2\2\u05a3\u04e7\3\2\2\2\u05a3\u04e8\3\2\2\2\u05a3\u04e9"+
		"\3\2\2\2\u05a3\u04ee\3\2\2\2\u05a3\u04ef\3\2\2\2\u05a3\u04f0\3\2\2\2\u05a3"+
		"\u04f1\3\2\2\2\u05a3\u04f6\3\2\2\2\u05a3\u04fb\3\2\2\2\u05a3\u0500\3\2"+
		"\2\2\u05a3\u0505\3\2\2\2\u05a3\u050a\3\2\2\2\u05a3\u050f\3\2\2\2\u05a3"+
		"\u0514\3\2\2\2\u05a3\u0519\3\2\2\2\u05a3\u051e\3\2\2\2\u05a3\u0523\3\2"+
		"\2\2\u05a3\u0528\3\2\2\2\u05a3\u052d\3\2\2\2\u05a3\u0532\3\2\2\2\u05a3"+
		"\u0537\3\2\2\2\u05a3\u0538\3\2\2\2\u05a3\u053d\3\2\2\2\u05a3\u0542\3\2"+
		"\2\2\u05a3\u0547\3\2\2\2\u05a3\u0548\3\2\2\2\u05a3\u0549\3\2\2\2\u05a3"+
		"\u0550\3\2\2\2\u05a3\u0559\3\2\2\2\u05a3\u055b\3\2\2\2\u05a3\u0560\3\2"+
		"\2\2\u05a3\u0565\3\2\2\2\u05a3\u0578\3\2\2\2\u05a3\u057a\3\2\2\2\u05a3"+
		"\u057c\3\2\2\2\u05a3\u0581\3\2\2\2\u05a3\u0586\3\2\2\2\u05a3\u058b\3\2"+
		"\2\2\u05a3\u058d\3\2\2\2\u05a3\u058f\3\2\2\2\u05a3\u0591\3\2\2\2\u05a3"+
		"\u0598\3\2\2\2\u05a3\u05a1\3\2\2\2\u05a4\u00d3\3\2\2\2\u05a5\u05a6\bk"+
		"\1\2\u05a6\u05b6\5\u009cO\2\u05a7\u05b6\5\u00c2b\2\u05a8\u05a9\7\u00cb"+
		"\2\2\u05a9\u05aa\5\u00d4k\2\u05aa\u05ab\7\u00cd\2\2\u05ab\u05b6\3\2\2"+
		"\2\u05ac\u05ad\7\u00b9\2\2\u05ad\u05b6\5\u00d4k\r\u05ae\u05af\7\u00b1"+
		"\2\2\u05af\u05b6\5\u00d4k\f\u05b0\u05b6\5\u00d2j\2\u05b1\u05b2\5\u00d0"+
		"i\2\u05b2\u05b3\t\b\2\2\u05b3\u05b4\5\u00d0i\2\u05b4\u05b6\3\2\2\2\u05b5"+
		"\u05a5\3\2\2\2\u05b5\u05a7\3\2\2\2\u05b5\u05a8\3\2\2\2\u05b5\u05ac\3\2"+
		"\2\2\u05b5\u05ae\3\2\2\2\u05b5\u05b0\3\2\2\2\u05b5\u05b1\3\2\2\2\u05b6"+
		"\u05ce\3\2\2\2\u05b7\u05b8\f\n\2\2\u05b8\u05b9\7\u00b7\2\2\u05b9\u05cd"+
		"\5\u00d4k\n\u05ba\u05bb\f\t\2\2\u05bb\u05bc\t\t\2\2\u05bc\u05cd\5\u00d4"+
		"k\n\u05bd\u05be\f\b\2\2\u05be\u05bf\t\n\2\2\u05bf\u05cd\5\u00d4k\t\u05c0"+
		"\u05c1\f\7\2\2\u05c1\u05c2\t\6\2\2\u05c2\u05cd\5\u00d4k\b\u05c3\u05c4"+
		"\f\6\2\2\u05c4\u05c5\t\13\2\2\u05c5\u05cd\5\u00d4k\7\u05c6\u05c7\f\5\2"+
		"\2\u05c7\u05c8\t\b\2\2\u05c8\u05cd\5\u00d4k\6\u05c9\u05ca\f\3\2\2\u05ca"+
		"\u05cb\t\f\2\2\u05cb\u05cd\5\u00d4k\4\u05cc\u05b7\3\2\2\2\u05cc\u05ba"+
		"\3\2\2\2\u05cc\u05bd\3\2\2\2\u05cc\u05c0\3\2\2\2\u05cc\u05c3\3\2\2\2\u05cc"+
		"\u05c6\3\2\2\2\u05cc\u05c9\3\2\2\2\u05cd\u05d0\3\2\2\2\u05ce\u05cc\3\2"+
		"\2\2\u05ce\u05cf\3\2\2\2\u05cf\u00d5\3\2\2\2\u05d0\u05ce\3\2\2\2\u05d1"+
		"\u05d2\t\r\2\2\u05d2\u00d7\3\2\2\2\u05d3\u05d4\t\16\2\2\u05d4\u00d9\3"+
		"\2\2\2b\u00dd\u00e4\u00e7\u00eb\u00f0\u00f3\u00f7\u00fc\u0102\u0108\u010b"+
		"\u0115\u0131\u013c\u0140\u014d\u0151\u0159\u0160\u0166\u016b\u0173\u0178"+
		"\u017e\u0187\u018b\u0191\u019a\u01a1\u01aa\u01b3\u01ba\u01bc\u01bf\u01c7"+
		"\u01ca\u01d6\u01df\u01e9\u01ff\u0215\u021b\u0221\u0250\u0257\u026a\u028c"+
		"\u0299\u02a4\u02b4\u02c7\u02e5\u0316\u0383\u038d\u0392\u039b\u03a4\u03b7"+
		"\u03bd\u03c8\u03cf\u03e0\u03e3\u03e8\u03ec\u03fc\u0402\u041d\u0426\u0432"+
		"\u0439\u043d\u0442\u0447\u044f\u0457\u045b\u0465\u046a\u046f\u0472\u0475"+
		"\u047d\u0481\u0485\u048d\u0490\u0499\u04cf\u04db\u04e2\u05a3\u05b5\u05cc"+
		"\u05ce";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}