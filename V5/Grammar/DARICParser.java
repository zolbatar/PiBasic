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
		FN=17, IF=18, IN=19, INT=20, INPUT=21, GLOBAL=22, LOCAL=23, LET=24, NEXT=25, 
		OF=26, OFF=27, ON=28, OSCLI=29, OTHERWISE=30, PRINT=31, PROC=32, READ=33, 
		REM=34, REPEAT=35, RESTORE=36, RETURN=37, SPC=38, STEP=39, SWAP=40, THEN=41, 
		TO=42, TRACE=43, TRACEON=44, TRACEOFF=45, TRUE=46, TYPE=47, UNTIL=48, 
		WHEN=49, WHILE=50, MOUSE=51, INKEY=52, INKEYS=53, GET=54, GETS=55, RED=56, 
		GREEN=57, YELLOW=58, BLUE=59, MAGENTA=60, CYAN=61, WHITE=62, BLACK=63, 
		MONO15=64, MONO20=65, MONO25=66, MONO30=67, MONO35=68, MONO40=69, MONO50=70, 
		MONO75=71, MONO100=72, PROP15=73, PROP20=74, PROP25=75, PROP30=76, PROP35=77, 
		PROP40=78, PROP50=79, PROP75=80, PROP100=81, SERIF15=82, SERIF20=83, SERIF25=84, 
		SERIF30=85, SERIF35=86, SERIF40=87, SERIF50=88, SERIF75=89, SERIF100=90, 
		BGETH=91, BPUTH=92, CLOSEH=93, EOFH=94, GETSH=95, LISTFILES=96, OPENIN=97, 
		OPENOUT=98, OPENUP=99, PTRH=100, BANKED=101, CIRCLE=102, CLS=103, CLIPON=104, 
		CLIPOFF=105, COLOUR=106, COLOURBG=107, CREATEFONT=108, FILL=109, FLIP=110, 
		SHOWFPS=111, GRAPHICS=112, LINE=113, LOADTYPEFACE=114, RECTANGLE=115, 
		PLOT=116, POINT=117, SCREENWIDTH=118, SCREENHEIGHT=119, SHADED=120, TEXT=121, 
		TEXTRIGHT=122, TEXTCENTRE=123, TEXTCENTER=124, TRIANGLE=125, TIME=126, 
		PI=127, SQR=128, LN=129, LOG=130, EXP=131, ATN=132, TAN=133, COS=134, 
		SIN=135, ABS=136, ACS=137, ASN=138, DEG=139, RAD=140, SGN=141, ASC=142, 
		LEN=143, INSTR=144, VAL=145, TIMES=146, STRS=147, STRINGS=148, CHRS=149, 
		LEFTS=150, MIDS=151, RIGHTS=152, RND=153, RND0=154, RND1=155, EQ=156, 
		NE=157, GT=158, GE=159, LT=160, LE=161, NOT=162, AND=163, OR=164, EOR=165, 
		MOD=166, DIV=167, HAT=168, PLUS=169, MINUS=170, MULTIPLY=171, DIVIDE=172, 
		SHL=173, SHR=174, PLUS_E=175, MINUS_E=176, MULTIPLY_E=177, DIVIDE_E=178, 
		SHL_E=179, SHR_E=180, NEWLINE=181, TICK=182, TILDE=183, HASH=184, COLON=185, 
		COMMA=186, DOLLAR=187, LPAREN=188, PERCENT=189, RPAREN=190, SEMICOLON=191, 
		UNDERSCORE=192, COMMENT=193, STRINGLITERAL=194, PROC_NAME=195, FN_INTEGER=196, 
		FN_FLOAT=197, FN_STRING=198, VARIABLE_FLOAT=199, VARIABLE_INTEGER=200, 
		VARIABLE_STRING=201, VARIABLE_TYPE=202, NAME=203, HEXNUMBER=204, BINARYNUMBER=205, 
		NUMBER=206, FLOAT=207, WS=208;
	public static final int
		RULE_prog = 0, RULE_line = 1, RULE_content = 2, RULE_body = 3, RULE_linenumber = 4, 
		RULE_stmt = 5, RULE_coreStmt = 6, RULE_stmtBREAKPOINT = 7, RULE_stmtCASE = 8, 
		RULE_stmtCHAIN = 9, RULE_stmtDATA = 10, RULE_stmtDIM = 11, RULE_stmtEND = 12, 
		RULE_stmtRETURN = 13, RULE_stmtDEFFN = 14, RULE_stmtDEFPROC = 15, RULE_stmtFOR = 16, 
		RULE_stmtFORIN = 17, RULE_stmtCallFN = 18, RULE_stmtIF = 19, RULE_stmtIFMultiline = 20, 
		RULE_stmtLET = 21, RULE_stmtOSCLI = 22, RULE_stmtCallPROC = 23, RULE_stmtREAD = 24, 
		RULE_stmtRESTORE = 25, RULE_stmtSWAP = 26, RULE_stmtTRACEON = 27, RULE_stmtTRACEOFF = 28, 
		RULE_stmtTYPE = 29, RULE_stmtREPEAT = 30, RULE_stmtWHILE = 31, RULE_keyMouseStmt = 32, 
		RULE_stmtINPUT = 33, RULE_stmtPRINT = 34, RULE_stmtMOUSE = 35, RULE_stmtINKEY = 36, 
		RULE_stmtINKEYS = 37, RULE_stmtGET = 38, RULE_stmtGETS = 39, RULE_stmtOperatorEqual = 40, 
		RULE_ioStmt = 41, RULE_stmtBPUTH = 42, RULE_stmtBGETH = 43, RULE_stmtPTRH = 44, 
		RULE_stmtCLOSEH = 45, RULE_stmtLISTFILES = 46, RULE_graphicsStmt = 47, 
		RULE_stmtCLS = 48, RULE_stmtCOLOUR = 49, RULE_stmtCOLOURBG = 50, RULE_stmtGRAPHICS = 51, 
		RULE_stmtFLIP = 52, RULE_stmtCIRCLE = 53, RULE_stmtLINE = 54, RULE_stmtRECTANGLE = 55, 
		RULE_stmtTRIANGLE = 56, RULE_stmtPLOT = 57, RULE_stmtCLIPON = 58, RULE_stmtCLIPOFF = 59, 
		RULE_stmtTEXT = 60, RULE_stmtTEXTRIGHT = 61, RULE_stmtTEXTCENTRE = 62, 
		RULE_stmtSHOWFPS = 63, RULE_when = 64, RULE_fnName = 65, RULE_literal = 66, 
		RULE_var = 67, RULE_typeVar = 68, RULE_numVar = 69, RULE_strVar = 70, 
		RULE_justVar = 71, RULE_justNumberVar = 72, RULE_varName = 73, RULE_varNameInteger = 74, 
		RULE_varNameString = 75, RULE_varNameType = 76, RULE_varDecl = 77, RULE_varDeclWithDimension = 78, 
		RULE_varList = 79, RULE_functionVarList = 80, RULE_functionParList = 81, 
		RULE_exprList = 82, RULE_printListItem = 83, RULE_printListTick = 84, 
		RULE_printListSeparator = 85, RULE_printList = 86, RULE_expr = 87, RULE_number = 88, 
		RULE_numberInteger = 89, RULE_numberHex = 90, RULE_numberBinary = 91, 
		RULE_numberFloat = 92, RULE_strFunc = 93, RULE_string = 94, RULE_strExpr = 95, 
		RULE_numFunc = 96, RULE_numExpr = 97, RULE_numColours = 98, RULE_defaultFonts = 99;
	private static String[] makeRuleNames() {
		return new String[] {
			"prog", "line", "content", "body", "linenumber", "stmt", "coreStmt", 
			"stmtBREAKPOINT", "stmtCASE", "stmtCHAIN", "stmtDATA", "stmtDIM", "stmtEND", 
			"stmtRETURN", "stmtDEFFN", "stmtDEFPROC", "stmtFOR", "stmtFORIN", "stmtCallFN", 
			"stmtIF", "stmtIFMultiline", "stmtLET", "stmtOSCLI", "stmtCallPROC", 
			"stmtREAD", "stmtRESTORE", "stmtSWAP", "stmtTRACEON", "stmtTRACEOFF", 
			"stmtTYPE", "stmtREPEAT", "stmtWHILE", "keyMouseStmt", "stmtINPUT", "stmtPRINT", 
			"stmtMOUSE", "stmtINKEY", "stmtINKEYS", "stmtGET", "stmtGETS", "stmtOperatorEqual", 
			"ioStmt", "stmtBPUTH", "stmtBGETH", "stmtPTRH", "stmtCLOSEH", "stmtLISTFILES", 
			"graphicsStmt", "stmtCLS", "stmtCOLOUR", "stmtCOLOURBG", "stmtGRAPHICS", 
			"stmtFLIP", "stmtCIRCLE", "stmtLINE", "stmtRECTANGLE", "stmtTRIANGLE", 
			"stmtPLOT", "stmtCLIPON", "stmtCLIPOFF", "stmtTEXT", "stmtTEXTRIGHT", 
			"stmtTEXTCENTRE", "stmtSHOWFPS", "when", "fnName", "literal", "var", 
			"typeVar", "numVar", "strVar", "justVar", "justNumberVar", "varName", 
			"varNameInteger", "varNameString", "varNameType", "varDecl", "varDeclWithDimension", 
			"varList", "functionVarList", "functionParList", "exprList", "printListItem", 
			"printListTick", "printListSeparator", "printList", "expr", "number", 
			"numberInteger", "numberHex", "numberBinary", "numberFloat", "strFunc", 
			"string", "strExpr", "numFunc", "numExpr", "numColours", "defaultFonts"
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
			"FN", "IF", "IN", "INT", "INPUT", "GLOBAL", "LOCAL", "LET", "NEXT", "OF", 
			"OFF", "ON", "OSCLI", "OTHERWISE", "PRINT", "PROC", "READ", "REM", "REPEAT", 
			"RESTORE", "RETURN", "SPC", "STEP", "SWAP", "THEN", "TO", "TRACE", "TRACEON", 
			"TRACEOFF", "TRUE", "TYPE", "UNTIL", "WHEN", "WHILE", "MOUSE", "INKEY", 
			"INKEYS", "GET", "GETS", "RED", "GREEN", "YELLOW", "BLUE", "MAGENTA", 
			"CYAN", "WHITE", "BLACK", "MONO15", "MONO20", "MONO25", "MONO30", "MONO35", 
			"MONO40", "MONO50", "MONO75", "MONO100", "PROP15", "PROP20", "PROP25", 
			"PROP30", "PROP35", "PROP40", "PROP50", "PROP75", "PROP100", "SERIF15", 
			"SERIF20", "SERIF25", "SERIF30", "SERIF35", "SERIF40", "SERIF50", "SERIF75", 
			"SERIF100", "BGETH", "BPUTH", "CLOSEH", "EOFH", "GETSH", "LISTFILES", 
			"OPENIN", "OPENOUT", "OPENUP", "PTRH", "BANKED", "CIRCLE", "CLS", "CLIPON", 
			"CLIPOFF", "COLOUR", "COLOURBG", "CREATEFONT", "FILL", "FLIP", "SHOWFPS", 
			"GRAPHICS", "LINE", "LOADTYPEFACE", "RECTANGLE", "PLOT", "POINT", "SCREENWIDTH", 
			"SCREENHEIGHT", "SHADED", "TEXT", "TEXTRIGHT", "TEXTCENTRE", "TEXTCENTER", 
			"TRIANGLE", "TIME", "PI", "SQR", "LN", "LOG", "EXP", "ATN", "TAN", "COS", 
			"SIN", "ABS", "ACS", "ASN", "DEG", "RAD", "SGN", "ASC", "LEN", "INSTR", 
			"VAL", "TIMES", "STRS", "STRINGS", "CHRS", "LEFTS", "MIDS", "RIGHTS", 
			"RND", "RND0", "RND1", "EQ", "NE", "GT", "GE", "LT", "LE", "NOT", "AND", 
			"OR", "EOR", "MOD", "DIV", "HAT", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", 
			"SHL", "SHR", "PLUS_E", "MINUS_E", "MULTIPLY_E", "DIVIDE_E", "SHL_E", 
			"SHR_E", "NEWLINE", "TICK", "TILDE", "HASH", "COLON", "COMMA", "DOLLAR", 
			"LPAREN", "PERCENT", "RPAREN", "SEMICOLON", "UNDERSCORE", "COMMENT", 
			"STRINGLITERAL", "PROC_NAME", "FN_INTEGER", "FN_FLOAT", "FN_STRING", 
			"VARIABLE_FLOAT", "VARIABLE_INTEGER", "VARIABLE_STRING", "VARIABLE_TYPE", 
			"NAME", "HEXNUMBER", "BINARYNUMBER", "NUMBER", "FLOAT", "WS"
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
			setState(203);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 91)) & ~0x3f) == 0 && ((1L << (_la - 91)) & ((1L << (BGETH - 91)) | (1L << (BPUTH - 91)) | (1L << (CLOSEH - 91)) | (1L << (PTRH - 91)) | (1L << (CIRCLE - 91)) | (1L << (CLS - 91)) | (1L << (CLIPON - 91)) | (1L << (CLIPOFF - 91)) | (1L << (COLOUR - 91)) | (1L << (COLOURBG - 91)) | (1L << (FLIP - 91)) | (1L << (SHOWFPS - 91)) | (1L << (GRAPHICS - 91)) | (1L << (LINE - 91)) | (1L << (RECTANGLE - 91)) | (1L << (PLOT - 91)) | (1L << (TEXT - 91)) | (1L << (TEXTRIGHT - 91)) | (1L << (TEXTCENTRE - 91)) | (1L << (TEXTCENTER - 91)) | (1L << (TRIANGLE - 91)))) != 0) || ((((_la - 181)) & ~0x3f) == 0 && ((1L << (_la - 181)) & ((1L << (NEWLINE - 181)) | (1L << (COLON - 181)) | (1L << (COMMENT - 181)) | (1L << (PROC_NAME - 181)) | (1L << (FN_INTEGER - 181)) | (1L << (FN_FLOAT - 181)) | (1L << (FN_STRING - 181)) | (1L << (VARIABLE_FLOAT - 181)) | (1L << (VARIABLE_INTEGER - 181)) | (1L << (VARIABLE_STRING - 181)) | (1L << (VARIABLE_TYPE - 181)) | (1L << (NUMBER - 181)))) != 0)) {
				{
				{
				setState(200);
				line();
				}
				}
				setState(205);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(206);
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
			setState(229);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(208);
				match(NEWLINE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(210);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(209);
					linenumber();
					}
				}

				setState(213);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REM || _la==COMMENT) {
					{
					setState(212);
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

				setState(215);
				match(NEWLINE);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(217);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(216);
					linenumber();
					}
				}

				setState(220); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(219);
					stmt();
					}
					}
					setState(222); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 91)) & ~0x3f) == 0 && ((1L << (_la - 91)) & ((1L << (BGETH - 91)) | (1L << (BPUTH - 91)) | (1L << (CLOSEH - 91)) | (1L << (PTRH - 91)) | (1L << (CIRCLE - 91)) | (1L << (CLS - 91)) | (1L << (CLIPON - 91)) | (1L << (CLIPOFF - 91)) | (1L << (COLOUR - 91)) | (1L << (COLOURBG - 91)) | (1L << (FLIP - 91)) | (1L << (SHOWFPS - 91)) | (1L << (GRAPHICS - 91)) | (1L << (LINE - 91)) | (1L << (RECTANGLE - 91)) | (1L << (PLOT - 91)) | (1L << (TEXT - 91)) | (1L << (TEXTRIGHT - 91)) | (1L << (TEXTCENTRE - 91)) | (1L << (TEXTCENTER - 91)) | (1L << (TRIANGLE - 91)))) != 0) || ((((_la - 185)) & ~0x3f) == 0 && ((1L << (_la - 185)) & ((1L << (COLON - 185)) | (1L << (PROC_NAME - 185)) | (1L << (FN_INTEGER - 185)) | (1L << (FN_FLOAT - 185)) | (1L << (FN_STRING - 185)) | (1L << (VARIABLE_FLOAT - 185)) | (1L << (VARIABLE_INTEGER - 185)) | (1L << (VARIABLE_STRING - 185)) | (1L << (VARIABLE_TYPE - 185)))) != 0) );
				setState(225);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REM || _la==COMMENT) {
					{
					setState(224);
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

				setState(227);
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
			setState(234);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(231);
					stmt();
					}
					} 
				}
				setState(236);
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
			setState(249);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(240);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 91)) & ~0x3f) == 0 && ((1L << (_la - 91)) & ((1L << (BGETH - 91)) | (1L << (BPUTH - 91)) | (1L << (CLOSEH - 91)) | (1L << (PTRH - 91)) | (1L << (CIRCLE - 91)) | (1L << (CLS - 91)) | (1L << (CLIPON - 91)) | (1L << (CLIPOFF - 91)) | (1L << (COLOUR - 91)) | (1L << (COLOURBG - 91)) | (1L << (FLIP - 91)) | (1L << (SHOWFPS - 91)) | (1L << (GRAPHICS - 91)) | (1L << (LINE - 91)) | (1L << (RECTANGLE - 91)) | (1L << (PLOT - 91)) | (1L << (TEXT - 91)) | (1L << (TEXTRIGHT - 91)) | (1L << (TEXTCENTRE - 91)) | (1L << (TEXTCENTER - 91)) | (1L << (TRIANGLE - 91)))) != 0) || ((((_la - 185)) & ~0x3f) == 0 && ((1L << (_la - 185)) & ((1L << (COLON - 185)) | (1L << (PROC_NAME - 185)) | (1L << (FN_INTEGER - 185)) | (1L << (FN_FLOAT - 185)) | (1L << (FN_STRING - 185)) | (1L << (VARIABLE_FLOAT - 185)) | (1L << (VARIABLE_INTEGER - 185)) | (1L << (VARIABLE_STRING - 185)) | (1L << (VARIABLE_TYPE - 185)))) != 0)) {
					{
					{
					setState(237);
					stmt();
					}
					}
					setState(242);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(246);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 91)) & ~0x3f) == 0 && ((1L << (_la - 91)) & ((1L << (BGETH - 91)) | (1L << (BPUTH - 91)) | (1L << (CLOSEH - 91)) | (1L << (PTRH - 91)) | (1L << (CIRCLE - 91)) | (1L << (CLS - 91)) | (1L << (CLIPON - 91)) | (1L << (CLIPOFF - 91)) | (1L << (COLOUR - 91)) | (1L << (COLOURBG - 91)) | (1L << (FLIP - 91)) | (1L << (SHOWFPS - 91)) | (1L << (GRAPHICS - 91)) | (1L << (LINE - 91)) | (1L << (RECTANGLE - 91)) | (1L << (PLOT - 91)) | (1L << (TEXT - 91)) | (1L << (TEXTRIGHT - 91)) | (1L << (TEXTCENTRE - 91)) | (1L << (TEXTCENTER - 91)) | (1L << (TRIANGLE - 91)))) != 0) || ((((_la - 181)) & ~0x3f) == 0 && ((1L << (_la - 181)) & ((1L << (NEWLINE - 181)) | (1L << (COLON - 181)) | (1L << (COMMENT - 181)) | (1L << (PROC_NAME - 181)) | (1L << (FN_INTEGER - 181)) | (1L << (FN_FLOAT - 181)) | (1L << (FN_STRING - 181)) | (1L << (VARIABLE_FLOAT - 181)) | (1L << (VARIABLE_INTEGER - 181)) | (1L << (VARIABLE_STRING - 181)) | (1L << (VARIABLE_TYPE - 181)) | (1L << (NUMBER - 181)))) != 0)) {
					{
					{
					setState(243);
					line();
					}
					}
					setState(248);
					_errHandler.sync(this);
					_la = _input.LA(1);
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
			setState(251);
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
			setState(259);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(253);
				match(COLON);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(254);
				coreStmt();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(255);
				keyMouseStmt();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(256);
				stmtOperatorEqual();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(257);
				ioStmt();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(258);
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
			setState(286);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(261);
				stmtBREAKPOINT();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(262);
				stmtCASE();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(263);
				stmtCHAIN();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(264);
				stmtDATA();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(265);
				stmtDIM();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(266);
				stmtEND();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(267);
				stmtRETURN();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(268);
				stmtDEFFN();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(269);
				stmtDEFPROC();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(270);
				stmtFOR();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(271);
				stmtFORIN();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(272);
				stmtCallFN();
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(273);
				stmtIF();
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(274);
				stmtIFMultiline();
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(275);
				stmtLET();
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(276);
				stmtOSCLI();
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(277);
				stmtCallPROC();
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(278);
				stmtREAD();
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(279);
				stmtRESTORE();
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(280);
				stmtSWAP();
				}
				break;
			case 21:
				enterOuterAlt(_localctx, 21);
				{
				setState(281);
				stmtTRACEON();
				}
				break;
			case 22:
				enterOuterAlt(_localctx, 22);
				{
				setState(282);
				stmtTRACEOFF();
				}
				break;
			case 23:
				enterOuterAlt(_localctx, 23);
				{
				setState(283);
				stmtTYPE();
				}
				break;
			case 24:
				enterOuterAlt(_localctx, 24);
				{
				setState(284);
				stmtREPEAT();
				}
				break;
			case 25:
				enterOuterAlt(_localctx, 25);
				{
				setState(285);
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
			setState(288);
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
			setState(290);
			match(CASE);
			setState(291);
			expr();
			setState(292);
			match(OF);
			setState(293);
			match(NEWLINE);
			setState(295); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(294);
				when();
				}
				}
				setState(297); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==WHEN );
			setState(301);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==OTHERWISE) {
				{
				setState(299);
				match(OTHERWISE);
				setState(300);
				body();
				}
			}

			setState(303);
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
			setState(305);
			match(CHAIN);
			setState(306);
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
			setState(308);
			match(DATA);
			setState(309);
			literal();
			setState(314);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(310);
				match(COMMA);
				setState(311);
				literal();
				}
				}
				setState(316);
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
			setState(318);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(317);
				match(LOCAL);
				}
			}

			setState(320);
			match(DIM);
			setState(321);
			varDeclWithDimension();
			setState(326);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(322);
				match(COMMA);
				setState(323);
				varDeclWithDimension();
				}
				}
				setState(328);
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
			setState(329);
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
			setState(331);
			match(RETURN);
			setState(333);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				{
				setState(332);
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
			setState(335);
			match(DEF);
			setState(336);
			fnName();
			setState(337);
			match(LPAREN);
			setState(339);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN || ((((_la - 199)) & ~0x3f) == 0 && ((1L << (_la - 199)) & ((1L << (VARIABLE_FLOAT - 199)) | (1L << (VARIABLE_INTEGER - 199)) | (1L << (VARIABLE_STRING - 199)))) != 0)) {
				{
				setState(338);
				functionVarList();
				}
			}

			setState(341);
			match(RPAREN);
			setState(342);
			body();
			setState(343);
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
			setState(345);
			match(DEF);
			setState(346);
			match(PROC_NAME);
			setState(347);
			match(LPAREN);
			setState(349);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN || ((((_la - 199)) & ~0x3f) == 0 && ((1L << (_la - 199)) & ((1L << (VARIABLE_FLOAT - 199)) | (1L << (VARIABLE_INTEGER - 199)) | (1L << (VARIABLE_STRING - 199)))) != 0)) {
				{
				setState(348);
				functionVarList();
				}
			}

			setState(351);
			match(RPAREN);
			setState(352);
			body();
			setState(353);
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
			setState(355);
			match(FOR);
			setState(357);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(356);
				match(LOCAL);
				}
			}

			setState(359);
			justNumberVar();
			setState(360);
			match(EQ);
			setState(361);
			numExpr(0);
			setState(362);
			match(TO);
			setState(363);
			numExpr(0);
			setState(366);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==STEP) {
				{
				setState(364);
				match(STEP);
				setState(365);
				numExpr(0);
				}
			}

			setState(368);
			body();
			setState(369);
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
			setState(371);
			match(FOR);
			setState(373);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(372);
				match(LOCAL);
				}
			}

			setState(375);
			justVar();
			setState(376);
			match(IN);
			setState(377);
			justVar();
			setState(378);
			match(LPAREN);
			setState(379);
			match(RPAREN);
			setState(380);
			body();
			setState(381);
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
			setState(383);
			fnName();
			setState(384);
			match(LPAREN);
			setState(386);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0) || ((((_la - 91)) & ~0x3f) == 0 && ((1L << (_la - 91)) & ((1L << (BGETH - 91)) | (1L << (EOFH - 91)) | (1L << (OPENIN - 91)) | (1L << (OPENOUT - 91)) | (1L << (OPENUP - 91)) | (1L << (PTRH - 91)) | (1L << (COLOUR - 91)) | (1L << (CREATEFONT - 91)) | (1L << (LOADTYPEFACE - 91)) | (1L << (POINT - 91)) | (1L << (SCREENWIDTH - 91)) | (1L << (SCREENHEIGHT - 91)) | (1L << (TIME - 91)) | (1L << (PI - 91)) | (1L << (SQR - 91)) | (1L << (LN - 91)) | (1L << (LOG - 91)) | (1L << (EXP - 91)) | (1L << (ATN - 91)) | (1L << (TAN - 91)) | (1L << (COS - 91)) | (1L << (SIN - 91)) | (1L << (ABS - 91)) | (1L << (ACS - 91)) | (1L << (ASN - 91)) | (1L << (DEG - 91)) | (1L << (RAD - 91)) | (1L << (SGN - 91)) | (1L << (ASC - 91)) | (1L << (LEN - 91)) | (1L << (INSTR - 91)) | (1L << (VAL - 91)) | (1L << (TIMES - 91)) | (1L << (STRS - 91)) | (1L << (STRINGS - 91)) | (1L << (CHRS - 91)) | (1L << (LEFTS - 91)) | (1L << (MIDS - 91)) | (1L << (RIGHTS - 91)) | (1L << (RND - 91)) | (1L << (RND0 - 91)))) != 0) || ((((_la - 155)) & ~0x3f) == 0 && ((1L << (_la - 155)) & ((1L << (RND1 - 155)) | (1L << (NOT - 155)) | (1L << (PLUS - 155)) | (1L << (MINUS - 155)) | (1L << (LPAREN - 155)) | (1L << (STRINGLITERAL - 155)) | (1L << (FN_INTEGER - 155)) | (1L << (FN_FLOAT - 155)) | (1L << (FN_STRING - 155)) | (1L << (VARIABLE_FLOAT - 155)) | (1L << (VARIABLE_INTEGER - 155)) | (1L << (VARIABLE_STRING - 155)) | (1L << (VARIABLE_TYPE - 155)) | (1L << (HEXNUMBER - 155)) | (1L << (BINARYNUMBER - 155)) | (1L << (NUMBER - 155)) | (1L << (FLOAT - 155)))) != 0)) {
				{
				setState(385);
				functionParList();
				}
			}

			setState(388);
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
			setState(390);
			match(IF);
			setState(391);
			expr();
			setState(392);
			((StmtIFContext)_localctx).t = content();
			setState(395);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
			case 1:
				{
				setState(393);
				match(ELSE);
				setState(394);
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
			enterOuterAlt(_localctx, 1);
			{
			setState(397);
			match(IF);
			setState(398);
			expr();
			setState(399);
			match(THEN);
			setState(400);
			match(NEWLINE);
			setState(402); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(401);
				((StmtIFMultilineContext)_localctx).t = line();
				}
				}
				setState(404); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 91)) & ~0x3f) == 0 && ((1L << (_la - 91)) & ((1L << (BGETH - 91)) | (1L << (BPUTH - 91)) | (1L << (CLOSEH - 91)) | (1L << (PTRH - 91)) | (1L << (CIRCLE - 91)) | (1L << (CLS - 91)) | (1L << (CLIPON - 91)) | (1L << (CLIPOFF - 91)) | (1L << (COLOUR - 91)) | (1L << (COLOURBG - 91)) | (1L << (FLIP - 91)) | (1L << (SHOWFPS - 91)) | (1L << (GRAPHICS - 91)) | (1L << (LINE - 91)) | (1L << (RECTANGLE - 91)) | (1L << (PLOT - 91)) | (1L << (TEXT - 91)) | (1L << (TEXTRIGHT - 91)) | (1L << (TEXTCENTRE - 91)) | (1L << (TEXTCENTER - 91)) | (1L << (TRIANGLE - 91)))) != 0) || ((((_la - 181)) & ~0x3f) == 0 && ((1L << (_la - 181)) & ((1L << (NEWLINE - 181)) | (1L << (COLON - 181)) | (1L << (COMMENT - 181)) | (1L << (PROC_NAME - 181)) | (1L << (FN_INTEGER - 181)) | (1L << (FN_FLOAT - 181)) | (1L << (FN_STRING - 181)) | (1L << (VARIABLE_FLOAT - 181)) | (1L << (VARIABLE_INTEGER - 181)) | (1L << (VARIABLE_STRING - 181)) | (1L << (VARIABLE_TYPE - 181)) | (1L << (NUMBER - 181)))) != 0) );
			setState(413);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ELSE) {
				{
				setState(406);
				match(ELSE);
				setState(407);
				match(NEWLINE);
				setState(409); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(408);
					((StmtIFMultilineContext)_localctx).f = line();
					}
					}
					setState(411); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 91)) & ~0x3f) == 0 && ((1L << (_la - 91)) & ((1L << (BGETH - 91)) | (1L << (BPUTH - 91)) | (1L << (CLOSEH - 91)) | (1L << (PTRH - 91)) | (1L << (CIRCLE - 91)) | (1L << (CLS - 91)) | (1L << (CLIPON - 91)) | (1L << (CLIPOFF - 91)) | (1L << (COLOUR - 91)) | (1L << (COLOURBG - 91)) | (1L << (FLIP - 91)) | (1L << (SHOWFPS - 91)) | (1L << (GRAPHICS - 91)) | (1L << (LINE - 91)) | (1L << (RECTANGLE - 91)) | (1L << (PLOT - 91)) | (1L << (TEXT - 91)) | (1L << (TEXTRIGHT - 91)) | (1L << (TEXTCENTRE - 91)) | (1L << (TEXTCENTER - 91)) | (1L << (TRIANGLE - 91)))) != 0) || ((((_la - 181)) & ~0x3f) == 0 && ((1L << (_la - 181)) & ((1L << (NEWLINE - 181)) | (1L << (COLON - 181)) | (1L << (COMMENT - 181)) | (1L << (PROC_NAME - 181)) | (1L << (FN_INTEGER - 181)) | (1L << (FN_FLOAT - 181)) | (1L << (FN_STRING - 181)) | (1L << (VARIABLE_FLOAT - 181)) | (1L << (VARIABLE_INTEGER - 181)) | (1L << (VARIABLE_STRING - 181)) | (1L << (VARIABLE_TYPE - 181)) | (1L << (NUMBER - 181)))) != 0) );
				}
			}

			setState(415);
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
		enterRule(_localctx, 42, RULE_stmtLET);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(421);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case GLOBAL:
			case LET:
			case VARIABLE_FLOAT:
			case VARIABLE_INTEGER:
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(418);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==GLOBAL || _la==LET) {
					{
					setState(417);
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
				setState(420);
				match(LOCAL);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(423);
			varDecl();
			setState(424);
			match(EQ);
			setState(425);
			expr();
			setState(433);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(426);
				match(COMMA);
				setState(427);
				varDecl();
				setState(428);
				match(EQ);
				setState(429);
				expr();
				}
				}
				setState(435);
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
		enterRule(_localctx, 44, RULE_stmtOSCLI);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(436);
			match(OSCLI);
			setState(437);
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
		enterRule(_localctx, 46, RULE_stmtCallPROC);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(439);
			match(PROC_NAME);
			setState(440);
			match(LPAREN);
			setState(442);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0) || ((((_la - 91)) & ~0x3f) == 0 && ((1L << (_la - 91)) & ((1L << (BGETH - 91)) | (1L << (EOFH - 91)) | (1L << (OPENIN - 91)) | (1L << (OPENOUT - 91)) | (1L << (OPENUP - 91)) | (1L << (PTRH - 91)) | (1L << (COLOUR - 91)) | (1L << (CREATEFONT - 91)) | (1L << (LOADTYPEFACE - 91)) | (1L << (POINT - 91)) | (1L << (SCREENWIDTH - 91)) | (1L << (SCREENHEIGHT - 91)) | (1L << (TIME - 91)) | (1L << (PI - 91)) | (1L << (SQR - 91)) | (1L << (LN - 91)) | (1L << (LOG - 91)) | (1L << (EXP - 91)) | (1L << (ATN - 91)) | (1L << (TAN - 91)) | (1L << (COS - 91)) | (1L << (SIN - 91)) | (1L << (ABS - 91)) | (1L << (ACS - 91)) | (1L << (ASN - 91)) | (1L << (DEG - 91)) | (1L << (RAD - 91)) | (1L << (SGN - 91)) | (1L << (ASC - 91)) | (1L << (LEN - 91)) | (1L << (INSTR - 91)) | (1L << (VAL - 91)) | (1L << (TIMES - 91)) | (1L << (STRS - 91)) | (1L << (STRINGS - 91)) | (1L << (CHRS - 91)) | (1L << (LEFTS - 91)) | (1L << (MIDS - 91)) | (1L << (RIGHTS - 91)) | (1L << (RND - 91)) | (1L << (RND0 - 91)))) != 0) || ((((_la - 155)) & ~0x3f) == 0 && ((1L << (_la - 155)) & ((1L << (RND1 - 155)) | (1L << (NOT - 155)) | (1L << (PLUS - 155)) | (1L << (MINUS - 155)) | (1L << (LPAREN - 155)) | (1L << (STRINGLITERAL - 155)) | (1L << (FN_INTEGER - 155)) | (1L << (FN_FLOAT - 155)) | (1L << (FN_STRING - 155)) | (1L << (VARIABLE_FLOAT - 155)) | (1L << (VARIABLE_INTEGER - 155)) | (1L << (VARIABLE_STRING - 155)) | (1L << (VARIABLE_TYPE - 155)) | (1L << (HEXNUMBER - 155)) | (1L << (BINARYNUMBER - 155)) | (1L << (NUMBER - 155)) | (1L << (FLOAT - 155)))) != 0)) {
				{
				setState(441);
				functionParList();
				}
			}

			setState(444);
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
		enterRule(_localctx, 48, RULE_stmtREAD);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(446);
			match(READ);
			setState(447);
			varDecl();
			setState(452);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(448);
				match(COMMA);
				setState(449);
				varDecl();
				}
				}
				setState(454);
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
		enterRule(_localctx, 50, RULE_stmtRESTORE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(455);
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
		enterRule(_localctx, 52, RULE_stmtSWAP);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(457);
			match(SWAP);
			setState(458);
			justVar();
			setState(459);
			match(COMMA);
			setState(460);
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
		enterRule(_localctx, 54, RULE_stmtTRACEON);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(462);
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
		enterRule(_localctx, 56, RULE_stmtTRACEOFF);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(464);
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
		enterRule(_localctx, 58, RULE_stmtTYPE);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(466);
			match(TYPE);
			setState(467);
			varName();
			setState(468);
			match(LPAREN);
			setState(469);
			justVar();
			setState(474);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(470);
				match(COMMA);
				setState(471);
				justVar();
				}
				}
				setState(476);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(477);
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
		enterRule(_localctx, 60, RULE_stmtREPEAT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(479);
			match(REPEAT);
			setState(480);
			body();
			setState(481);
			match(UNTIL);
			setState(482);
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
		enterRule(_localctx, 62, RULE_stmtWHILE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(484);
			match(WHILE);
			setState(485);
			expr();
			setState(486);
			body();
			setState(487);
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
		enterRule(_localctx, 64, RULE_keyMouseStmt);
		try {
			setState(496);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INPUT:
				enterOuterAlt(_localctx, 1);
				{
				setState(489);
				stmtINPUT();
				}
				break;
			case PRINT:
				enterOuterAlt(_localctx, 2);
				{
				setState(490);
				stmtPRINT();
				}
				break;
			case MOUSE:
				enterOuterAlt(_localctx, 3);
				{
				setState(491);
				stmtMOUSE();
				}
				break;
			case INKEY:
				enterOuterAlt(_localctx, 4);
				{
				setState(492);
				stmtINKEY();
				}
				break;
			case INKEYS:
				enterOuterAlt(_localctx, 5);
				{
				setState(493);
				stmtINKEYS();
				}
				break;
			case GET:
				enterOuterAlt(_localctx, 6);
				{
				setState(494);
				stmtGET();
				}
				break;
			case GETS:
				enterOuterAlt(_localctx, 7);
				{
				setState(495);
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
		enterRule(_localctx, 66, RULE_stmtINPUT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(498);
			match(INPUT);
			setState(502);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,36,_ctx) ) {
			case 1:
				{
				setState(499);
				strExpr(0);
				setState(500);
				match(COMMA);
				}
				break;
			}
			setState(504);
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
		enterRule(_localctx, 68, RULE_stmtPRINT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(506);
			match(PRINT);
			setState(508);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,37,_ctx) ) {
			case 1:
				{
				setState(507);
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
		enterRule(_localctx, 70, RULE_stmtMOUSE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(510);
			match(MOUSE);
			setState(511);
			varNameInteger();
			setState(512);
			match(COMMA);
			setState(513);
			varNameInteger();
			setState(514);
			match(COMMA);
			setState(515);
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
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
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
		enterRule(_localctx, 72, RULE_stmtINKEY);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(517);
			match(INKEY);
			setState(518);
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

	public static class StmtINKEYSContext extends ParserRuleContext {
		public TerminalNode INKEYS() { return getToken(DARICParser.INKEYS, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
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
		enterRule(_localctx, 74, RULE_stmtINKEYS);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(520);
			match(INKEYS);
			setState(521);
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
		enterRule(_localctx, 76, RULE_stmtGET);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(523);
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
		enterRule(_localctx, 78, RULE_stmtGETS);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(525);
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
		enterRule(_localctx, 80, RULE_stmtOperatorEqual);
		try {
			setState(551);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(527);
				varDecl();
				setState(528);
				match(MULTIPLY_E);
				setState(529);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(531);
				varDecl();
				setState(532);
				match(DIVIDE_E);
				setState(533);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(535);
				varDecl();
				setState(536);
				match(PLUS_E);
				setState(537);
				numExpr(0);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(539);
				varDecl();
				setState(540);
				match(MINUS_E);
				setState(541);
				numExpr(0);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(543);
				varDecl();
				setState(544);
				match(SHL_E);
				setState(545);
				numExpr(0);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(547);
				varDecl();
				setState(548);
				match(SHR_E);
				setState(549);
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
		enterRule(_localctx, 82, RULE_ioStmt);
		try {
			setState(558);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BPUTH:
				enterOuterAlt(_localctx, 1);
				{
				setState(553);
				stmtBPUTH();
				}
				break;
			case BGETH:
				enterOuterAlt(_localctx, 2);
				{
				setState(554);
				stmtBGETH();
				}
				break;
			case PTRH:
				enterOuterAlt(_localctx, 3);
				{
				setState(555);
				stmtPTRH();
				}
				break;
			case CLOSEH:
				enterOuterAlt(_localctx, 4);
				{
				setState(556);
				stmtCLOSEH();
				}
				break;
			case LOCAL:
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 5);
				{
				setState(557);
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
		enterRule(_localctx, 84, RULE_stmtBPUTH);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(560);
			match(BPUTH);
			setState(561);
			numExpr(0);
			setState(562);
			match(COMMA);
			setState(563);
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
		enterRule(_localctx, 86, RULE_stmtBGETH);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(565);
			match(BGETH);
			setState(566);
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
		enterRule(_localctx, 88, RULE_stmtPTRH);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(568);
			match(PTRH);
			setState(569);
			numExpr(0);
			setState(570);
			match(EQ);
			setState(571);
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
		enterRule(_localctx, 90, RULE_stmtCLOSEH);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(573);
			match(CLOSEH);
			setState(574);
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
		enterRule(_localctx, 92, RULE_stmtLISTFILES);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(577);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(576);
				match(LOCAL);
				}
			}

			setState(579);
			varNameString();
			setState(580);
			match(LPAREN);
			setState(581);
			match(RPAREN);
			setState(582);
			match(EQ);
			setState(583);
			match(LISTFILES);
			setState(584);
			match(LPAREN);
			setState(585);
			strExpr(0);
			setState(586);
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
		enterRule(_localctx, 94, RULE_graphicsStmt);
		try {
			setState(604);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CLS:
				enterOuterAlt(_localctx, 1);
				{
				setState(588);
				stmtCLS();
				}
				break;
			case COLOUR:
				enterOuterAlt(_localctx, 2);
				{
				setState(589);
				stmtCOLOUR();
				}
				break;
			case COLOURBG:
				enterOuterAlt(_localctx, 3);
				{
				setState(590);
				stmtCOLOURBG();
				}
				break;
			case GRAPHICS:
				enterOuterAlt(_localctx, 4);
				{
				setState(591);
				stmtGRAPHICS();
				}
				break;
			case FLIP:
				enterOuterAlt(_localctx, 5);
				{
				setState(592);
				stmtFLIP();
				}
				break;
			case CIRCLE:
				enterOuterAlt(_localctx, 6);
				{
				setState(593);
				stmtCIRCLE();
				}
				break;
			case LINE:
				enterOuterAlt(_localctx, 7);
				{
				setState(594);
				stmtLINE();
				}
				break;
			case RECTANGLE:
				enterOuterAlt(_localctx, 8);
				{
				setState(595);
				stmtRECTANGLE();
				}
				break;
			case TRIANGLE:
				enterOuterAlt(_localctx, 9);
				{
				setState(596);
				stmtTRIANGLE();
				}
				break;
			case PLOT:
				enterOuterAlt(_localctx, 10);
				{
				setState(597);
				stmtPLOT();
				}
				break;
			case CLIPON:
				enterOuterAlt(_localctx, 11);
				{
				setState(598);
				stmtCLIPON();
				}
				break;
			case CLIPOFF:
				enterOuterAlt(_localctx, 12);
				{
				setState(599);
				stmtCLIPOFF();
				}
				break;
			case TEXT:
				enterOuterAlt(_localctx, 13);
				{
				setState(600);
				stmtTEXT();
				}
				break;
			case TEXTRIGHT:
				enterOuterAlt(_localctx, 14);
				{
				setState(601);
				stmtTEXTRIGHT();
				}
				break;
			case TEXTCENTRE:
			case TEXTCENTER:
				enterOuterAlt(_localctx, 15);
				{
				setState(602);
				stmtTEXTCENTRE();
				}
				break;
			case SHOWFPS:
				enterOuterAlt(_localctx, 16);
				{
				setState(603);
				stmtSHOWFPS();
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
		enterRule(_localctx, 96, RULE_stmtCLS);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(606);
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
		enterRule(_localctx, 98, RULE_stmtCOLOUR);
		try {
			setState(617);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,42,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(608);
				match(COLOUR);
				setState(609);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(610);
				match(COLOUR);
				setState(611);
				numExpr(0);
				setState(612);
				match(COMMA);
				setState(613);
				numExpr(0);
				setState(614);
				match(COMMA);
				setState(615);
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
		enterRule(_localctx, 100, RULE_stmtCOLOURBG);
		try {
			setState(628);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(619);
				match(COLOURBG);
				setState(620);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(621);
				match(COLOURBG);
				setState(622);
				numExpr(0);
				setState(623);
				match(COMMA);
				setState(624);
				numExpr(0);
				setState(625);
				match(COMMA);
				setState(626);
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
		enterRule(_localctx, 102, RULE_stmtGRAPHICS);
		try {
			setState(644);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,44,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(630);
				match(GRAPHICS);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(631);
				match(GRAPHICS);
				setState(632);
				numExpr(0);
				setState(633);
				match(COMMA);
				setState(634);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(636);
				match(GRAPHICS);
				setState(637);
				match(BANKED);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(638);
				match(GRAPHICS);
				setState(639);
				match(BANKED);
				setState(640);
				numExpr(0);
				setState(641);
				match(COMMA);
				setState(642);
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
		enterRule(_localctx, 104, RULE_stmtFLIP);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(646);
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
		enterRule(_localctx, 106, RULE_stmtCIRCLE);
		try {
			setState(663);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,45,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(648);
				match(CIRCLE);
				setState(649);
				numExpr(0);
				setState(650);
				match(COMMA);
				setState(651);
				numExpr(0);
				setState(652);
				match(COMMA);
				setState(653);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(655);
				match(CIRCLE);
				setState(656);
				match(FILL);
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
		enterRule(_localctx, 108, RULE_stmtLINE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(665);
			match(LINE);
			setState(666);
			numExpr(0);
			setState(667);
			match(COMMA);
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
		}
		catch (RecognitionException re) {
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
		enterRule(_localctx, 110, RULE_stmtRECTANGLE);
		try {
			setState(693);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,46,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(674);
				match(RECTANGLE);
				setState(675);
				numExpr(0);
				setState(676);
				match(COMMA);
				setState(677);
				numExpr(0);
				setState(678);
				match(COMMA);
				setState(679);
				numExpr(0);
				setState(680);
				match(COMMA);
				setState(681);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(683);
				match(RECTANGLE);
				setState(684);
				match(FILL);
				setState(685);
				numExpr(0);
				setState(686);
				match(COMMA);
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
		enterRule(_localctx, 112, RULE_stmtTRIANGLE);
		try {
			setState(742);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,47,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(695);
				match(TRIANGLE);
				setState(696);
				numExpr(0);
				setState(697);
				match(COMMA);
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
				setState(703);
				match(COMMA);
				setState(704);
				numExpr(0);
				setState(705);
				match(COMMA);
				setState(706);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(708);
				match(TRIANGLE);
				setState(709);
				match(FILL);
				setState(710);
				numExpr(0);
				setState(711);
				match(COMMA);
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
				setState(719);
				match(COMMA);
				setState(720);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(722);
				match(TRIANGLE);
				setState(723);
				match(SHADED);
				setState(724);
				numExpr(0);
				setState(725);
				match(COMMA);
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
				setState(731);
				match(COMMA);
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
				setState(739);
				match(COMMA);
				setState(740);
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
		enterRule(_localctx, 114, RULE_stmtPLOT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(744);
			match(PLOT);
			setState(745);
			numExpr(0);
			setState(746);
			match(COMMA);
			setState(747);
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
		enterRule(_localctx, 116, RULE_stmtCLIPON);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(749);
			match(CLIPON);
			setState(750);
			numExpr(0);
			setState(751);
			match(COMMA);
			setState(752);
			numExpr(0);
			setState(753);
			match(COMMA);
			setState(754);
			numExpr(0);
			setState(755);
			match(COMMA);
			setState(756);
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
		enterRule(_localctx, 118, RULE_stmtCLIPOFF);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(758);
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
		enterRule(_localctx, 120, RULE_stmtTEXT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(760);
			match(TEXT);
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
		enterRule(_localctx, 122, RULE_stmtTEXTRIGHT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(769);
			match(TEXTRIGHT);
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
		enterRule(_localctx, 124, RULE_stmtTEXTCENTRE);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(778);
			_la = _input.LA(1);
			if ( !(_la==TEXTCENTRE || _la==TEXTCENTER) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
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
			setState(784);
			match(COMMA);
			setState(785);
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
		enterRule(_localctx, 126, RULE_stmtSHOWFPS);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(787);
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
		enterRule(_localctx, 128, RULE_when);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(789);
			match(WHEN);
			setState(790);
			expr();
			setState(795);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(791);
				match(COMMA);
				setState(792);
				expr();
				}
				}
				setState(797);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(798);
			match(COLON);
			setState(799);
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
		enterRule(_localctx, 130, RULE_fnName);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(801);
			_la = _input.LA(1);
			if ( !(((((_la - 196)) & ~0x3f) == 0 && ((1L << (_la - 196)) & ((1L << (FN_INTEGER - 196)) | (1L << (FN_FLOAT - 196)) | (1L << (FN_STRING - 196)))) != 0)) ) {
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
		enterRule(_localctx, 132, RULE_literal);
		try {
			setState(805);
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
			case PLUS:
			case MINUS:
			case HEXNUMBER:
			case BINARYNUMBER:
			case NUMBER:
			case FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(803);
				number();
				}
				break;
			case STRINGLITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(804);
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
		enterRule(_localctx, 134, RULE_var);
		try {
			setState(810);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,50,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(807);
				numVar();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(808);
				strVar();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(809);
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
		enterRule(_localctx, 136, RULE_typeVar);
		try {
			_localctx = new TypeVarTypeContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(812);
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
	public static class NumVarStringFNContext extends NumVarContext {
		public TerminalNode FN_STRING() { return getToken(DARICParser.FN_STRING, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public FunctionParListContext functionParList() {
			return getRuleContext(FunctionParListContext.class,0);
		}
		public NumVarStringFNContext(NumVarContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumVarStringFN(this);
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
		enterRule(_localctx, 138, RULE_numVar);
		int _la;
		try {
			setState(870);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,56,_ctx) ) {
			case 1:
				_localctx = new NumVarFloatArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(814);
				varName();
				setState(815);
				match(LPAREN);
				setState(816);
				numExpr(0);
				setState(819);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(817);
					match(COMMA);
					setState(818);
					numExpr(0);
					}
				}

				setState(821);
				match(RPAREN);
				}
				break;
			case 2:
				_localctx = new NumVarIntegerArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(823);
				varNameInteger();
				setState(824);
				match(LPAREN);
				setState(825);
				numExpr(0);
				setState(828);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(826);
					match(COMMA);
					setState(827);
					numExpr(0);
					}
				}

				setState(830);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new NumVarIntegerFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(832);
				typeVar();
				setState(833);
				match(LPAREN);
				setState(834);
				numExpr(0);
				setState(835);
				match(RPAREN);
				setState(836);
				varNameInteger();
				}
				break;
			case 4:
				_localctx = new NumVarFloatFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(838);
				typeVar();
				setState(839);
				match(LPAREN);
				setState(840);
				numExpr(0);
				setState(841);
				match(RPAREN);
				setState(842);
				varName();
				}
				break;
			case 5:
				_localctx = new NumVarFloatFNContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(844);
				match(FN_FLOAT);
				setState(845);
				match(LPAREN);
				setState(847);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0) || ((((_la - 91)) & ~0x3f) == 0 && ((1L << (_la - 91)) & ((1L << (BGETH - 91)) | (1L << (EOFH - 91)) | (1L << (OPENIN - 91)) | (1L << (OPENOUT - 91)) | (1L << (OPENUP - 91)) | (1L << (PTRH - 91)) | (1L << (COLOUR - 91)) | (1L << (CREATEFONT - 91)) | (1L << (LOADTYPEFACE - 91)) | (1L << (POINT - 91)) | (1L << (SCREENWIDTH - 91)) | (1L << (SCREENHEIGHT - 91)) | (1L << (TIME - 91)) | (1L << (PI - 91)) | (1L << (SQR - 91)) | (1L << (LN - 91)) | (1L << (LOG - 91)) | (1L << (EXP - 91)) | (1L << (ATN - 91)) | (1L << (TAN - 91)) | (1L << (COS - 91)) | (1L << (SIN - 91)) | (1L << (ABS - 91)) | (1L << (ACS - 91)) | (1L << (ASN - 91)) | (1L << (DEG - 91)) | (1L << (RAD - 91)) | (1L << (SGN - 91)) | (1L << (ASC - 91)) | (1L << (LEN - 91)) | (1L << (INSTR - 91)) | (1L << (VAL - 91)) | (1L << (TIMES - 91)) | (1L << (STRS - 91)) | (1L << (STRINGS - 91)) | (1L << (CHRS - 91)) | (1L << (LEFTS - 91)) | (1L << (MIDS - 91)) | (1L << (RIGHTS - 91)) | (1L << (RND - 91)) | (1L << (RND0 - 91)))) != 0) || ((((_la - 155)) & ~0x3f) == 0 && ((1L << (_la - 155)) & ((1L << (RND1 - 155)) | (1L << (NOT - 155)) | (1L << (PLUS - 155)) | (1L << (MINUS - 155)) | (1L << (LPAREN - 155)) | (1L << (STRINGLITERAL - 155)) | (1L << (FN_INTEGER - 155)) | (1L << (FN_FLOAT - 155)) | (1L << (FN_STRING - 155)) | (1L << (VARIABLE_FLOAT - 155)) | (1L << (VARIABLE_INTEGER - 155)) | (1L << (VARIABLE_STRING - 155)) | (1L << (VARIABLE_TYPE - 155)) | (1L << (HEXNUMBER - 155)) | (1L << (BINARYNUMBER - 155)) | (1L << (NUMBER - 155)) | (1L << (FLOAT - 155)))) != 0)) {
					{
					setState(846);
					functionParList();
					}
				}

				setState(849);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new NumVarIntegerFNContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(850);
				match(FN_INTEGER);
				setState(851);
				match(LPAREN);
				setState(853);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0) || ((((_la - 91)) & ~0x3f) == 0 && ((1L << (_la - 91)) & ((1L << (BGETH - 91)) | (1L << (EOFH - 91)) | (1L << (OPENIN - 91)) | (1L << (OPENOUT - 91)) | (1L << (OPENUP - 91)) | (1L << (PTRH - 91)) | (1L << (COLOUR - 91)) | (1L << (CREATEFONT - 91)) | (1L << (LOADTYPEFACE - 91)) | (1L << (POINT - 91)) | (1L << (SCREENWIDTH - 91)) | (1L << (SCREENHEIGHT - 91)) | (1L << (TIME - 91)) | (1L << (PI - 91)) | (1L << (SQR - 91)) | (1L << (LN - 91)) | (1L << (LOG - 91)) | (1L << (EXP - 91)) | (1L << (ATN - 91)) | (1L << (TAN - 91)) | (1L << (COS - 91)) | (1L << (SIN - 91)) | (1L << (ABS - 91)) | (1L << (ACS - 91)) | (1L << (ASN - 91)) | (1L << (DEG - 91)) | (1L << (RAD - 91)) | (1L << (SGN - 91)) | (1L << (ASC - 91)) | (1L << (LEN - 91)) | (1L << (INSTR - 91)) | (1L << (VAL - 91)) | (1L << (TIMES - 91)) | (1L << (STRS - 91)) | (1L << (STRINGS - 91)) | (1L << (CHRS - 91)) | (1L << (LEFTS - 91)) | (1L << (MIDS - 91)) | (1L << (RIGHTS - 91)) | (1L << (RND - 91)) | (1L << (RND0 - 91)))) != 0) || ((((_la - 155)) & ~0x3f) == 0 && ((1L << (_la - 155)) & ((1L << (RND1 - 155)) | (1L << (NOT - 155)) | (1L << (PLUS - 155)) | (1L << (MINUS - 155)) | (1L << (LPAREN - 155)) | (1L << (STRINGLITERAL - 155)) | (1L << (FN_INTEGER - 155)) | (1L << (FN_FLOAT - 155)) | (1L << (FN_STRING - 155)) | (1L << (VARIABLE_FLOAT - 155)) | (1L << (VARIABLE_INTEGER - 155)) | (1L << (VARIABLE_STRING - 155)) | (1L << (VARIABLE_TYPE - 155)) | (1L << (HEXNUMBER - 155)) | (1L << (BINARYNUMBER - 155)) | (1L << (NUMBER - 155)) | (1L << (FLOAT - 155)))) != 0)) {
					{
					setState(852);
					functionParList();
					}
				}

				setState(855);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new NumVarStringFNContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(856);
				match(FN_STRING);
				setState(857);
				match(LPAREN);
				setState(859);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0) || ((((_la - 91)) & ~0x3f) == 0 && ((1L << (_la - 91)) & ((1L << (BGETH - 91)) | (1L << (EOFH - 91)) | (1L << (OPENIN - 91)) | (1L << (OPENOUT - 91)) | (1L << (OPENUP - 91)) | (1L << (PTRH - 91)) | (1L << (COLOUR - 91)) | (1L << (CREATEFONT - 91)) | (1L << (LOADTYPEFACE - 91)) | (1L << (POINT - 91)) | (1L << (SCREENWIDTH - 91)) | (1L << (SCREENHEIGHT - 91)) | (1L << (TIME - 91)) | (1L << (PI - 91)) | (1L << (SQR - 91)) | (1L << (LN - 91)) | (1L << (LOG - 91)) | (1L << (EXP - 91)) | (1L << (ATN - 91)) | (1L << (TAN - 91)) | (1L << (COS - 91)) | (1L << (SIN - 91)) | (1L << (ABS - 91)) | (1L << (ACS - 91)) | (1L << (ASN - 91)) | (1L << (DEG - 91)) | (1L << (RAD - 91)) | (1L << (SGN - 91)) | (1L << (ASC - 91)) | (1L << (LEN - 91)) | (1L << (INSTR - 91)) | (1L << (VAL - 91)) | (1L << (TIMES - 91)) | (1L << (STRS - 91)) | (1L << (STRINGS - 91)) | (1L << (CHRS - 91)) | (1L << (LEFTS - 91)) | (1L << (MIDS - 91)) | (1L << (RIGHTS - 91)) | (1L << (RND - 91)) | (1L << (RND0 - 91)))) != 0) || ((((_la - 155)) & ~0x3f) == 0 && ((1L << (_la - 155)) & ((1L << (RND1 - 155)) | (1L << (NOT - 155)) | (1L << (PLUS - 155)) | (1L << (MINUS - 155)) | (1L << (LPAREN - 155)) | (1L << (STRINGLITERAL - 155)) | (1L << (FN_INTEGER - 155)) | (1L << (FN_FLOAT - 155)) | (1L << (FN_STRING - 155)) | (1L << (VARIABLE_FLOAT - 155)) | (1L << (VARIABLE_INTEGER - 155)) | (1L << (VARIABLE_STRING - 155)) | (1L << (VARIABLE_TYPE - 155)) | (1L << (HEXNUMBER - 155)) | (1L << (BINARYNUMBER - 155)) | (1L << (NUMBER - 155)) | (1L << (FLOAT - 155)))) != 0)) {
					{
					setState(858);
					functionParList();
					}
				}

				setState(861);
				match(RPAREN);
				}
				break;
			case 8:
				_localctx = new NumVarFloatContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(862);
				varName();
				}
				break;
			case 9:
				_localctx = new NumVarIntegerContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(863);
				varNameInteger();
				}
				break;
			case 10:
				_localctx = new NumVarFloatFieldContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(864);
				typeVar();
				setState(865);
				varName();
				}
				break;
			case 11:
				_localctx = new NumVarIntegerFieldContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(867);
				typeVar();
				setState(868);
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
		enterRule(_localctx, 140, RULE_strVar);
		int _la;
		try {
			setState(891);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,58,_ctx) ) {
			case 1:
				_localctx = new NumVarStringArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(872);
				varNameString();
				setState(873);
				match(LPAREN);
				setState(874);
				numExpr(0);
				setState(877);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(875);
					match(COMMA);
					setState(876);
					numExpr(0);
					}
				}

				setState(879);
				match(RPAREN);
				}
				break;
			case 2:
				_localctx = new NumVarStringFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(881);
				typeVar();
				setState(882);
				match(LPAREN);
				setState(883);
				numExpr(0);
				setState(884);
				match(RPAREN);
				setState(885);
				varNameString();
				}
				break;
			case 3:
				_localctx = new NumVarStringContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(887);
				varNameString();
				}
				break;
			case 4:
				_localctx = new NumVarStringFieldContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(888);
				typeVar();
				setState(889);
				varNameString();
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
		enterRule(_localctx, 142, RULE_justVar);
		try {
			setState(896);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(893);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(894);
				varNameInteger();
				}
				break;
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(895);
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
		enterRule(_localctx, 144, RULE_justNumberVar);
		try {
			setState(900);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(898);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(899);
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
		enterRule(_localctx, 146, RULE_varName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(902);
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
		enterRule(_localctx, 148, RULE_varNameInteger);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(904);
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
		enterRule(_localctx, 150, RULE_varNameString);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(906);
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
		enterRule(_localctx, 152, RULE_varNameType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(908);
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
		enterRule(_localctx, 154, RULE_varDecl);
		int _la;
		try {
			setState(949);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,63,_ctx) ) {
			case 1:
				_localctx = new VarDeclIndContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(910);
				justVar();
				}
				break;
			case 2:
				_localctx = new VarDeclArrayedContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(911);
				justVar();
				setState(922);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==LPAREN) {
					{
					{
					setState(912);
					match(LPAREN);
					setState(913);
					numExpr(0);
					setState(916);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==COMMA) {
						{
						setState(914);
						match(COMMA);
						setState(915);
						numExpr(0);
						}
					}

					setState(918);
					match(RPAREN);
					}
					}
					setState(924);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 3:
				_localctx = new VarDeclTypeVarContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(925);
				typeVar();
				setState(926);
				varName();
				}
				break;
			case 4:
				_localctx = new VarDeclTypeVarContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(928);
				typeVar();
				setState(929);
				varNameInteger();
				}
				break;
			case 5:
				_localctx = new VarDeclTypeVarArrayedContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(931);
				typeVar();
				setState(932);
				match(LPAREN);
				setState(933);
				numExpr(0);
				setState(934);
				match(RPAREN);
				setState(935);
				varName();
				}
				break;
			case 6:
				_localctx = new VarDeclTypeVarArrayedContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(937);
				typeVar();
				setState(938);
				match(LPAREN);
				setState(939);
				numExpr(0);
				setState(940);
				match(RPAREN);
				setState(941);
				varNameInteger();
				}
				break;
			case 7:
				_localctx = new VarDeclTypeContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(943);
				typeVar();
				}
				break;
			case 8:
				_localctx = new VarDeclTypeArrayedContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(944);
				typeVar();
				setState(945);
				match(LPAREN);
				setState(946);
				numExpr(0);
				setState(947);
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
		enterRule(_localctx, 156, RULE_varDeclWithDimension);
		int _la;
		try {
			setState(970);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
			case VARIABLE_INTEGER:
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 1);
				{
				setState(951);
				justVar();
				setState(952);
				match(LPAREN);
				setState(953);
				numExpr(0);
				setState(958);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(954);
					match(COMMA);
					setState(955);
					numExpr(0);
					}
					}
					setState(960);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(961);
				match(RPAREN);
				}
				break;
			case VARIABLE_TYPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(963);
				typeVar();
				setState(964);
				match(LPAREN);
				setState(965);
				numExpr(0);
				setState(966);
				match(COMMA);
				setState(967);
				varName();
				setState(968);
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
		enterRule(_localctx, 158, RULE_varList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(972);
			varDecl();
			setState(977);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(973);
				match(COMMA);
				setState(974);
				varDecl();
				}
				}
				setState(979);
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
		enterRule(_localctx, 160, RULE_functionVarList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(981);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN) {
				{
				setState(980);
				match(RETURN);
				}
			}

			setState(983);
			justVar();
			setState(991);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(984);
				match(COMMA);
				setState(986);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN) {
					{
					setState(985);
					match(RETURN);
					}
				}

				setState(988);
				justVar();
				}
				}
				setState(993);
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
		enterRule(_localctx, 162, RULE_functionParList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(994);
			expr();
			setState(999);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(995);
				match(COMMA);
				setState(996);
				expr();
				}
				}
				setState(1001);
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
		enterRule(_localctx, 164, RULE_exprList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1002);
			expr();
			setState(1007);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1003);
				match(COMMA);
				setState(1004);
				expr();
				}
				}
				setState(1009);
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
		enterRule(_localctx, 166, RULE_printListItem);
		int _la;
		try {
			setState(1021);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,73,_ctx) ) {
			case 1:
				_localctx = new PrintListExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1011);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TILDE) {
					{
					setState(1010);
					match(TILDE);
					}
				}

				setState(1013);
				expr();
				}
				break;
			case 2:
				_localctx = new PrintListSPCPContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1014);
				match(SPC);
				setState(1015);
				match(LPAREN);
				setState(1016);
				numExpr(0);
				setState(1017);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new PrintListSPCContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1019);
				match(SPC);
				setState(1020);
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
		enterRule(_localctx, 168, RULE_printListTick);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1024); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(1023);
				match(TICK);
				}
				}
				setState(1026); 
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
		enterRule(_localctx, 170, RULE_printListSeparator);
		try {
			setState(1031);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COMMA:
				enterOuterAlt(_localctx, 1);
				{
				setState(1028);
				match(COMMA);
				}
				break;
			case SEMICOLON:
				enterOuterAlt(_localctx, 2);
				{
				setState(1029);
				match(SEMICOLON);
				}
				break;
			case TICK:
				enterOuterAlt(_localctx, 3);
				{
				setState(1030);
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
		enterRule(_localctx, 172, RULE_printList);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1034);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TICK) {
				{
				setState(1033);
				printListTick();
				}
			}

			setState(1037);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(1036);
				((PrintListContext)_localctx).s1 = match(SEMICOLON);
				}
			}

			setState(1039);
			printListItem();
			setState(1045);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,78,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1040);
					printListSeparator();
					setState(1041);
					printListItem();
					}
					} 
				}
				setState(1047);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,78,_ctx);
			}
			setState(1049);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(1048);
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
		enterRule(_localctx, 174, RULE_expr);
		try {
			setState(1053);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,80,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1051);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1052);
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
		enterRule(_localctx, 176, RULE_number);
		try {
			setState(1060);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,81,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1055);
				numberInteger();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1056);
				numberFloat();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1057);
				numberHex();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1058);
				numberBinary();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1059);
				numColours();
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
		enterRule(_localctx, 178, RULE_numberInteger);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1063);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(1062);
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

			setState(1065);
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
		enterRule(_localctx, 180, RULE_numberHex);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1067);
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
		enterRule(_localctx, 182, RULE_numberBinary);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1069);
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
		enterRule(_localctx, 184, RULE_numberFloat);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1072);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(1071);
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

			setState(1074);
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
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
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
		enterRule(_localctx, 186, RULE_strFunc);
		try {
			setState(1128);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,84,_ctx) ) {
			case 1:
				_localctx = new StrFuncTIMESContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1076);
				match(TIMES);
				}
				break;
			case 2:
				_localctx = new StrFuncCHRSContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1077);
				match(CHRS);
				setState(1078);
				numExpr(0);
				}
				break;
			case 3:
				_localctx = new StrFuncCHRSContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1079);
				match(CHRS);
				setState(1080);
				match(LPAREN);
				setState(1081);
				numExpr(0);
				setState(1082);
				match(RPAREN);
				}
				break;
			case 4:
				_localctx = new StrFuncLEFTSContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1084);
				match(LEFTS);
				setState(1085);
				match(LPAREN);
				setState(1086);
				strExpr(0);
				setState(1087);
				match(COMMA);
				setState(1088);
				numExpr(0);
				setState(1089);
				match(RPAREN);
				}
				break;
			case 5:
				_localctx = new StrFuncMIDS3Context(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1091);
				match(MIDS);
				setState(1092);
				match(LPAREN);
				setState(1093);
				strExpr(0);
				setState(1094);
				match(COMMA);
				setState(1095);
				numExpr(0);
				setState(1096);
				match(COMMA);
				setState(1097);
				numExpr(0);
				setState(1098);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new StrFuncMIDS2Context(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1100);
				match(MIDS);
				setState(1101);
				match(LPAREN);
				setState(1102);
				strExpr(0);
				setState(1103);
				match(COMMA);
				setState(1104);
				numExpr(0);
				setState(1105);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new StrFuncRIGHTSContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1107);
				match(RIGHTS);
				setState(1108);
				match(LPAREN);
				setState(1109);
				strExpr(0);
				setState(1110);
				match(COMMA);
				setState(1111);
				numExpr(0);
				setState(1112);
				match(RPAREN);
				}
				break;
			case 8:
				_localctx = new StrFuncSTRSContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1114);
				match(STRS);
				setState(1115);
				numExpr(0);
				}
				break;
			case 9:
				_localctx = new StrFuncSTRSHEXContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(1116);
				match(STRS);
				setState(1117);
				match(TILDE);
				setState(1118);
				numExpr(0);
				}
				break;
			case 10:
				_localctx = new StrFuncSTRINGSContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(1119);
				match(STRINGS);
				setState(1120);
				match(LPAREN);
				setState(1121);
				numExpr(0);
				setState(1122);
				match(COMMA);
				setState(1123);
				strExpr(0);
				setState(1124);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new StrFuncINKEYSContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(1126);
				match(INKEYS);
				setState(1127);
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
		enterRule(_localctx, 188, RULE_string);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1130);
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
		int _startState = 190;
		enterRecursionRule(_localctx, 190, RULE_strExpr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1140);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LPAREN:
				{
				setState(1133);
				match(LPAREN);
				setState(1134);
				strExpr(0);
				setState(1135);
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
				setState(1137);
				strFunc();
				}
				break;
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(1138);
				strVar();
				}
				break;
			case STRINGLITERAL:
				{
				setState(1139);
				string();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(1147);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,86,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StrExprContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_strExpr);
					setState(1142);
					if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
					setState(1143);
					match(PLUS);
					setState(1144);
					strExpr(4);
					}
					} 
				}
				setState(1149);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,86,_ctx);
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
	public static class NumFuncRND0Context extends NumFuncContext {
		public TerminalNode RND0() { return getToken(DARICParser.RND0, 0); }
		public NumFuncRND0Context(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncRND0(this);
			else return visitor.visitChildren(this);
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
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
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
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
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

	public final NumFuncContext numFunc() throws RecognitionException {
		NumFuncContext _localctx = new NumFuncContext(_ctx, getState());
		enterRule(_localctx, 192, RULE_numFunc);
		try {
			setState(1313);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,87,_ctx) ) {
			case 1:
				_localctx = new NumFuncPIContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1150);
				match(PI);
				}
				break;
			case 2:
				_localctx = new NumFuncFALSEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1151);
				match(FALSE);
				}
				break;
			case 3:
				_localctx = new NumFuncTRUEContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1152);
				match(TRUE);
				}
				break;
			case 4:
				_localctx = new NumFuncTIMEContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1153);
				match(TIME);
				}
				break;
			case 5:
				_localctx = new NumFuncRNDContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1154);
				match(RND);
				}
				break;
			case 6:
				_localctx = new NumFuncRND0Context(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1155);
				match(RND0);
				}
				break;
			case 7:
				_localctx = new NumFuncRND1Context(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1156);
				match(RND1);
				}
				break;
			case 8:
				_localctx = new NumFuncRNDRANGEContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1157);
				match(RND);
				setState(1158);
				match(LPAREN);
				setState(1159);
				numExpr(0);
				setState(1160);
				match(RPAREN);
				}
				break;
			case 9:
				_localctx = new NumFuncLNContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(1162);
				match(LN);
				setState(1163);
				match(LPAREN);
				setState(1164);
				numExpr(0);
				setState(1165);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new NumFuncLOGContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(1167);
				match(LOG);
				setState(1168);
				match(LPAREN);
				setState(1169);
				numExpr(0);
				setState(1170);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new NumFuncEXPContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(1172);
				match(EXP);
				setState(1173);
				match(LPAREN);
				setState(1174);
				numExpr(0);
				setState(1175);
				match(RPAREN);
				}
				break;
			case 12:
				_localctx = new NumFuncATNContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(1177);
				match(ATN);
				setState(1178);
				match(LPAREN);
				setState(1179);
				numExpr(0);
				setState(1180);
				match(RPAREN);
				}
				break;
			case 13:
				_localctx = new NumFuncTANContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(1182);
				match(TAN);
				setState(1183);
				match(LPAREN);
				setState(1184);
				numExpr(0);
				setState(1185);
				match(RPAREN);
				}
				break;
			case 14:
				_localctx = new NumFuncCOSContext(_localctx);
				enterOuterAlt(_localctx, 14);
				{
				setState(1187);
				match(COS);
				setState(1188);
				match(LPAREN);
				setState(1189);
				numExpr(0);
				setState(1190);
				match(RPAREN);
				}
				break;
			case 15:
				_localctx = new NumFuncSINContext(_localctx);
				enterOuterAlt(_localctx, 15);
				{
				setState(1192);
				match(SIN);
				setState(1193);
				match(LPAREN);
				setState(1194);
				numExpr(0);
				setState(1195);
				match(RPAREN);
				}
				break;
			case 16:
				_localctx = new NumFuncABSContext(_localctx);
				enterOuterAlt(_localctx, 16);
				{
				setState(1197);
				match(ABS);
				setState(1198);
				match(LPAREN);
				setState(1199);
				numExpr(0);
				setState(1200);
				match(RPAREN);
				}
				break;
			case 17:
				_localctx = new NumFuncACSContext(_localctx);
				enterOuterAlt(_localctx, 17);
				{
				setState(1202);
				match(ACS);
				setState(1203);
				match(LPAREN);
				setState(1204);
				numExpr(0);
				setState(1205);
				match(RPAREN);
				}
				break;
			case 18:
				_localctx = new NumFuncASNContext(_localctx);
				enterOuterAlt(_localctx, 18);
				{
				setState(1207);
				match(ASN);
				setState(1208);
				match(LPAREN);
				setState(1209);
				numExpr(0);
				setState(1210);
				match(RPAREN);
				}
				break;
			case 19:
				_localctx = new NumFuncDEGContext(_localctx);
				enterOuterAlt(_localctx, 19);
				{
				setState(1212);
				match(DEG);
				setState(1213);
				match(LPAREN);
				setState(1214);
				numExpr(0);
				setState(1215);
				match(RPAREN);
				}
				break;
			case 20:
				_localctx = new NumFuncRADContext(_localctx);
				enterOuterAlt(_localctx, 20);
				{
				setState(1217);
				match(RAD);
				setState(1218);
				match(LPAREN);
				setState(1219);
				numExpr(0);
				setState(1220);
				match(RPAREN);
				}
				break;
			case 21:
				_localctx = new NumFuncSQRContext(_localctx);
				enterOuterAlt(_localctx, 21);
				{
				setState(1222);
				match(SQR);
				setState(1223);
				match(LPAREN);
				setState(1224);
				numExpr(0);
				setState(1225);
				match(RPAREN);
				}
				break;
			case 22:
				_localctx = new NumFuncSGNContext(_localctx);
				enterOuterAlt(_localctx, 22);
				{
				setState(1227);
				match(SGN);
				setState(1228);
				match(LPAREN);
				setState(1229);
				numExpr(0);
				setState(1230);
				match(RPAREN);
				}
				break;
			case 23:
				_localctx = new NumFuncGETContext(_localctx);
				enterOuterAlt(_localctx, 23);
				{
				setState(1232);
				match(GET);
				}
				break;
			case 24:
				_localctx = new NumFuncINKEYContext(_localctx);
				enterOuterAlt(_localctx, 24);
				{
				setState(1233);
				match(INKEY);
				setState(1234);
				numExpr(0);
				}
				break;
			case 25:
				_localctx = new NumFuncINTContext(_localctx);
				enterOuterAlt(_localctx, 25);
				{
				setState(1235);
				match(INT);
				setState(1236);
				match(LPAREN);
				setState(1237);
				numExpr(0);
				setState(1238);
				match(RPAREN);
				}
				break;
			case 26:
				_localctx = new NumFuncFLOATContext(_localctx);
				enterOuterAlt(_localctx, 26);
				{
				setState(1240);
				match(FLOAT_TOKEN);
				setState(1241);
				match(LPAREN);
				setState(1242);
				numExpr(0);
				setState(1243);
				match(RPAREN);
				}
				break;
			case 27:
				_localctx = new NumFuncSCREENWIDTHContext(_localctx);
				enterOuterAlt(_localctx, 27);
				{
				setState(1245);
				match(SCREENWIDTH);
				}
				break;
			case 28:
				_localctx = new NumFuncSCREENHEIGHTContext(_localctx);
				enterOuterAlt(_localctx, 28);
				{
				setState(1246);
				match(SCREENHEIGHT);
				}
				break;
			case 29:
				_localctx = new NumFuncPOINTContext(_localctx);
				enterOuterAlt(_localctx, 29);
				{
				setState(1247);
				match(POINT);
				setState(1248);
				match(LPAREN);
				setState(1249);
				numExpr(0);
				setState(1250);
				match(COMMA);
				setState(1251);
				numExpr(0);
				setState(1252);
				match(RPAREN);
				}
				break;
			case 30:
				_localctx = new NumFuncCOLOURContext(_localctx);
				enterOuterAlt(_localctx, 30);
				{
				setState(1254);
				match(COLOUR);
				setState(1255);
				match(LPAREN);
				setState(1256);
				numExpr(0);
				setState(1257);
				match(COMMA);
				setState(1258);
				numExpr(0);
				setState(1259);
				match(COMMA);
				setState(1260);
				numExpr(0);
				setState(1261);
				match(LPAREN);
				}
				break;
			case 31:
				_localctx = new NumFuncLOADTYPEFACEContext(_localctx);
				enterOuterAlt(_localctx, 31);
				{
				setState(1263);
				match(LOADTYPEFACE);
				setState(1264);
				strExpr(0);
				}
				break;
			case 32:
				_localctx = new NumFuncCREATEFONTContext(_localctx);
				enterOuterAlt(_localctx, 32);
				{
				setState(1265);
				match(CREATEFONT);
				setState(1266);
				numExpr(0);
				setState(1267);
				match(COMMA);
				setState(1268);
				numExpr(0);
				}
				break;
			case 33:
				_localctx = new NumFuncBGETHContext(_localctx);
				enterOuterAlt(_localctx, 33);
				{
				setState(1270);
				match(BGETH);
				setState(1271);
				numExpr(0);
				}
				break;
			case 34:
				_localctx = new NumFuncEOFHContext(_localctx);
				enterOuterAlt(_localctx, 34);
				{
				setState(1272);
				match(EOFH);
				setState(1273);
				numExpr(0);
				}
				break;
			case 35:
				_localctx = new NumFuncOPENINContext(_localctx);
				enterOuterAlt(_localctx, 35);
				{
				setState(1274);
				match(OPENIN);
				setState(1275);
				match(LPAREN);
				setState(1276);
				strExpr(0);
				setState(1277);
				match(RPAREN);
				}
				break;
			case 36:
				_localctx = new NumFuncOPENOUTContext(_localctx);
				enterOuterAlt(_localctx, 36);
				{
				setState(1279);
				match(OPENOUT);
				setState(1280);
				match(LPAREN);
				setState(1281);
				strExpr(0);
				setState(1282);
				match(RPAREN);
				}
				break;
			case 37:
				_localctx = new NumFuncOPENUPContext(_localctx);
				enterOuterAlt(_localctx, 37);
				{
				setState(1284);
				match(OPENUP);
				setState(1285);
				match(LPAREN);
				setState(1286);
				strExpr(0);
				setState(1287);
				match(RPAREN);
				}
				break;
			case 38:
				_localctx = new NumFuncPTRContext(_localctx);
				enterOuterAlt(_localctx, 38);
				{
				setState(1289);
				match(PTRH);
				setState(1290);
				numExpr(0);
				}
				break;
			case 39:
				_localctx = new NumFuncASCContext(_localctx);
				enterOuterAlt(_localctx, 39);
				{
				setState(1291);
				match(ASC);
				setState(1292);
				strExpr(0);
				}
				break;
			case 40:
				_localctx = new NumFuncLENContext(_localctx);
				enterOuterAlt(_localctx, 40);
				{
				setState(1293);
				match(LEN);
				setState(1294);
				strExpr(0);
				}
				break;
			case 41:
				_localctx = new NumFuncINSTR2Context(_localctx);
				enterOuterAlt(_localctx, 41);
				{
				setState(1295);
				match(INSTR);
				setState(1296);
				match(LPAREN);
				setState(1297);
				strExpr(0);
				setState(1298);
				match(COMMA);
				setState(1299);
				strExpr(0);
				setState(1300);
				match(RPAREN);
				}
				break;
			case 42:
				_localctx = new NumFuncINSTR3Context(_localctx);
				enterOuterAlt(_localctx, 42);
				{
				setState(1302);
				match(INSTR);
				setState(1303);
				match(LPAREN);
				setState(1304);
				strExpr(0);
				setState(1305);
				match(COMMA);
				setState(1306);
				strExpr(0);
				setState(1307);
				match(COMMA);
				setState(1308);
				numExpr(0);
				setState(1309);
				match(RPAREN);
				}
				break;
			case 43:
				_localctx = new NumFuncVALContext(_localctx);
				enterOuterAlt(_localctx, 43);
				{
				setState(1311);
				match(VAL);
				setState(1312);
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
		int _startState = 194;
		enterRecursionRule(_localctx, 194, RULE_numExpr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1331);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,88,_ctx) ) {
			case 1:
				{
				_localctx = new NumExprVarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(1316);
				numVar();
				}
				break;
			case 2:
				{
				_localctx = new NumExprNumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1317);
				number();
				}
				break;
			case 3:
				{
				_localctx = new NumExprNestedContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1318);
				match(LPAREN);
				setState(1319);
				numExpr(0);
				setState(1320);
				match(RPAREN);
				}
				break;
			case 4:
				{
				_localctx = new NumExprUnaryContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1322);
				match(MINUS);
				setState(1323);
				numExpr(11);
				}
				break;
			case 5:
				{
				_localctx = new NumExprNOTContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1324);
				match(NOT);
				setState(1325);
				numExpr(10);
				}
				break;
			case 6:
				{
				_localctx = new NumExprFuncContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1326);
				numFunc();
				}
				break;
			case 7:
				{
				_localctx = new NumExprStrRelopContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1327);
				strExpr(0);
				setState(1328);
				_la = _input.LA(1);
				if ( !(((((_la - 156)) & ~0x3f) == 0 && ((1L << (_la - 156)) & ((1L << (EQ - 156)) | (1L << (NE - 156)) | (1L << (GT - 156)) | (1L << (GE - 156)) | (1L << (LT - 156)) | (1L << (LE - 156)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(1329);
				strExpr(0);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1356);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,90,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1354);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,89,_ctx) ) {
					case 1:
						{
						_localctx = new NumExprHatContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1333);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(1334);
						match(HAT);
						setState(1335);
						numExpr(8);
						}
						break;
					case 2:
						{
						_localctx = new NumExprMultiplyDivideContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1336);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(1337);
						_la = _input.LA(1);
						if ( !(_la==MULTIPLY || _la==DIVIDE) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1338);
						numExpr(8);
						}
						break;
					case 3:
						{
						_localctx = new NumExprDIVMODContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1339);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(1340);
						_la = _input.LA(1);
						if ( !(_la==MOD || _la==DIV) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1341);
						numExpr(7);
						}
						break;
					case 4:
						{
						_localctx = new NumExprAddSubtractContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1342);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(1343);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1344);
						numExpr(6);
						}
						break;
					case 5:
						{
						_localctx = new NumExprSHLSHRContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1345);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(1346);
						_la = _input.LA(1);
						if ( !(_la==SHL || _la==SHR) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1347);
						numExpr(5);
						}
						break;
					case 6:
						{
						_localctx = new NumExprNumRelopContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1348);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1349);
						_la = _input.LA(1);
						if ( !(((((_la - 156)) & ~0x3f) == 0 && ((1L << (_la - 156)) & ((1L << (EQ - 156)) | (1L << (NE - 156)) | (1L << (GT - 156)) | (1L << (GE - 156)) | (1L << (LT - 156)) | (1L << (LE - 156)))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1350);
						numExpr(4);
						}
						break;
					case 7:
						{
						_localctx = new NumExprANDOREORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1351);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(1352);
						_la = _input.LA(1);
						if ( !(((((_la - 163)) & ~0x3f) == 0 && ((1L << (_la - 163)) & ((1L << (AND - 163)) | (1L << (OR - 163)) | (1L << (EOR - 163)))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1353);
						numExpr(2);
						}
						break;
					}
					} 
				}
				setState(1358);
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
		enterRule(_localctx, 196, RULE_numColours);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1359);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0)) ) {
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
		enterRule(_localctx, 198, RULE_defaultFonts);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1361);
			_la = _input.LA(1);
			if ( !(((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)))) != 0)) ) {
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
		case 95:
			return strExpr_sempred((StrExprContext)_localctx, predIndex);
		case 97:
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00d2\u0556\4\2\t"+
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
		"`\t`\4a\ta\4b\tb\4c\tc\4d\td\4e\te\3\2\7\2\u00cc\n\2\f\2\16\2\u00cf\13"+
		"\2\3\2\3\2\3\3\3\3\5\3\u00d5\n\3\3\3\5\3\u00d8\n\3\3\3\3\3\5\3\u00dc\n"+
		"\3\3\3\6\3\u00df\n\3\r\3\16\3\u00e0\3\3\5\3\u00e4\n\3\3\3\3\3\5\3\u00e8"+
		"\n\3\3\4\7\4\u00eb\n\4\f\4\16\4\u00ee\13\4\3\5\7\5\u00f1\n\5\f\5\16\5"+
		"\u00f4\13\5\3\5\7\5\u00f7\n\5\f\5\16\5\u00fa\13\5\5\5\u00fc\n\5\3\6\3"+
		"\6\3\7\3\7\3\7\3\7\3\7\3\7\5\7\u0106\n\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3"+
		"\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b"+
		"\5\b\u0121\n\b\3\t\3\t\3\n\3\n\3\n\3\n\3\n\6\n\u012a\n\n\r\n\16\n\u012b"+
		"\3\n\3\n\5\n\u0130\n\n\3\n\3\n\3\13\3\13\3\13\3\f\3\f\3\f\3\f\7\f\u013b"+
		"\n\f\f\f\16\f\u013e\13\f\3\r\5\r\u0141\n\r\3\r\3\r\3\r\3\r\7\r\u0147\n"+
		"\r\f\r\16\r\u014a\13\r\3\16\3\16\3\17\3\17\5\17\u0150\n\17\3\20\3\20\3"+
		"\20\3\20\5\20\u0156\n\20\3\20\3\20\3\20\3\20\3\21\3\21\3\21\3\21\5\21"+
		"\u0160\n\21\3\21\3\21\3\21\3\21\3\22\3\22\5\22\u0168\n\22\3\22\3\22\3"+
		"\22\3\22\3\22\3\22\3\22\5\22\u0171\n\22\3\22\3\22\3\22\3\23\3\23\5\23"+
		"\u0178\n\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\24\3\24\3\24\5\24"+
		"\u0185\n\24\3\24\3\24\3\25\3\25\3\25\3\25\3\25\5\25\u018e\n\25\3\26\3"+
		"\26\3\26\3\26\3\26\6\26\u0195\n\26\r\26\16\26\u0196\3\26\3\26\3\26\6\26"+
		"\u019c\n\26\r\26\16\26\u019d\5\26\u01a0\n\26\3\26\3\26\3\27\5\27\u01a5"+
		"\n\27\3\27\5\27\u01a8\n\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\7\27"+
		"\u01b2\n\27\f\27\16\27\u01b5\13\27\3\30\3\30\3\30\3\31\3\31\3\31\5\31"+
		"\u01bd\n\31\3\31\3\31\3\32\3\32\3\32\3\32\7\32\u01c5\n\32\f\32\16\32\u01c8"+
		"\13\32\3\33\3\33\3\34\3\34\3\34\3\34\3\34\3\35\3\35\3\36\3\36\3\37\3\37"+
		"\3\37\3\37\3\37\3\37\7\37\u01db\n\37\f\37\16\37\u01de\13\37\3\37\3\37"+
		"\3 \3 \3 \3 \3 \3!\3!\3!\3!\3!\3\"\3\"\3\"\3\"\3\"\3\"\3\"\5\"\u01f3\n"+
		"\"\3#\3#\3#\3#\5#\u01f9\n#\3#\3#\3$\3$\5$\u01ff\n$\3%\3%\3%\3%\3%\3%\3"+
		"%\3&\3&\3&\3\'\3\'\3\'\3(\3(\3)\3)\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3"+
		"*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\5*\u022a\n*\3+\3+\3+\3+\3+\5+\u0231"+
		"\n+\3,\3,\3,\3,\3,\3-\3-\3-\3.\3.\3.\3.\3.\3/\3/\3/\3\60\5\60\u0244\n"+
		"\60\3\60\3\60\3\60\3\60\3\60\3\60\3\60\3\60\3\60\3\61\3\61\3\61\3\61\3"+
		"\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\5\61\u025f"+
		"\n\61\3\62\3\62\3\63\3\63\3\63\3\63\3\63\3\63\3\63\3\63\3\63\5\63\u026c"+
		"\n\63\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\5\64\u0277\n\64\3\65"+
		"\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\5\65"+
		"\u0287\n\65\3\66\3\66\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67"+
		"\3\67\3\67\3\67\3\67\3\67\5\67\u029a\n\67\38\38\38\38\38\38\38\38\38\3"+
		"9\39\39\39\39\39\39\39\39\39\39\39\39\39\39\39\39\39\39\59\u02b8\n9\3"+
		":\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3"+
		":\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3"+
		":\5:\u02e9\n:\3;\3;\3;\3;\3;\3<\3<\3<\3<\3<\3<\3<\3<\3<\3=\3=\3>\3>\3"+
		">\3>\3>\3>\3>\3>\3>\3?\3?\3?\3?\3?\3?\3?\3?\3?\3@\3@\3@\3@\3@\3@\3@\3"+
		"@\3@\3A\3A\3B\3B\3B\3B\7B\u031c\nB\fB\16B\u031f\13B\3B\3B\3B\3C\3C\3D"+
		"\3D\5D\u0328\nD\3E\3E\3E\5E\u032d\nE\3F\3F\3G\3G\3G\3G\3G\5G\u0336\nG"+
		"\3G\3G\3G\3G\3G\3G\3G\5G\u033f\nG\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G"+
		"\3G\3G\3G\3G\3G\5G\u0352\nG\3G\3G\3G\3G\5G\u0358\nG\3G\3G\3G\3G\5G\u035e"+
		"\nG\3G\3G\3G\3G\3G\3G\3G\3G\3G\5G\u0369\nG\3H\3H\3H\3H\3H\5H\u0370\nH"+
		"\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\5H\u037e\nH\3I\3I\3I\5I\u0383\nI"+
		"\3J\3J\5J\u0387\nJ\3K\3K\3L\3L\3M\3M\3N\3N\3O\3O\3O\3O\3O\3O\5O\u0397"+
		"\nO\3O\3O\7O\u039b\nO\fO\16O\u039e\13O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3"+
		"O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\5O\u03b8\nO\3P\3P\3P\3P\3P\7"+
		"P\u03bf\nP\fP\16P\u03c2\13P\3P\3P\3P\3P\3P\3P\3P\3P\3P\5P\u03cd\nP\3Q"+
		"\3Q\3Q\7Q\u03d2\nQ\fQ\16Q\u03d5\13Q\3R\5R\u03d8\nR\3R\3R\3R\5R\u03dd\n"+
		"R\3R\7R\u03e0\nR\fR\16R\u03e3\13R\3S\3S\3S\7S\u03e8\nS\fS\16S\u03eb\13"+
		"S\3T\3T\3T\7T\u03f0\nT\fT\16T\u03f3\13T\3U\5U\u03f6\nU\3U\3U\3U\3U\3U"+
		"\3U\3U\3U\5U\u0400\nU\3V\6V\u0403\nV\rV\16V\u0404\3W\3W\3W\5W\u040a\n"+
		"W\3X\5X\u040d\nX\3X\5X\u0410\nX\3X\3X\3X\3X\7X\u0416\nX\fX\16X\u0419\13"+
		"X\3X\5X\u041c\nX\3Y\3Y\5Y\u0420\nY\3Z\3Z\3Z\3Z\3Z\5Z\u0427\nZ\3[\5[\u042a"+
		"\n[\3[\3[\3\\\3\\\3]\3]\3^\5^\u0433\n^\3^\3^\3_\3_\3_\3_\3_\3_\3_\3_\3"+
		"_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3"+
		"_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\5_\u046b"+
		"\n_\3`\3`\3a\3a\3a\3a\3a\3a\3a\3a\5a\u0477\na\3a\3a\3a\7a\u047c\na\fa"+
		"\16a\u047f\13a\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3"+
		"b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3"+
		"b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3"+
		"b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3"+
		"b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3"+
		"b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3"+
		"b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3"+
		"b\3b\3b\3b\3b\3b\3b\5b\u0524\nb\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3"+
		"c\3c\3c\3c\5c\u0536\nc\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3"+
		"c\3c\3c\3c\3c\3c\7c\u054d\nc\fc\16c\u0550\13c\3d\3d\3e\3e\3e\2\4\u00c0"+
		"\u00c4f\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:"+
		"<>@BDFHJLNPRTVXZ\\^`bdfhjlnprtvxz|~\u0080\u0082\u0084\u0086\u0088\u008a"+
		"\u008c\u008e\u0090\u0092\u0094\u0096\u0098\u009a\u009c\u009e\u00a0\u00a2"+
		"\u00a4\u00a6\u00a8\u00aa\u00ac\u00ae\u00b0\u00b2\u00b4\u00b6\u00b8\u00ba"+
		"\u00bc\u00be\u00c0\u00c2\u00c4\u00c6\u00c8\2\16\4\2$$\u00c3\u00c3\4\2"+
		"\30\30\32\32\3\2}~\3\2\u00c6\u00c8\3\2\u00ab\u00ac\3\2\u009e\u00a3\3\2"+
		"\u00ad\u00ae\3\2\u00a8\u00a9\3\2\u00af\u00b0\3\2\u00a5\u00a7\3\2:A\3\2"+
		"B\\\2\u05db\2\u00cd\3\2\2\2\4\u00e7\3\2\2\2\6\u00ec\3\2\2\2\b\u00fb\3"+
		"\2\2\2\n\u00fd\3\2\2\2\f\u0105\3\2\2\2\16\u0120\3\2\2\2\20\u0122\3\2\2"+
		"\2\22\u0124\3\2\2\2\24\u0133\3\2\2\2\26\u0136\3\2\2\2\30\u0140\3\2\2\2"+
		"\32\u014b\3\2\2\2\34\u014d\3\2\2\2\36\u0151\3\2\2\2 \u015b\3\2\2\2\"\u0165"+
		"\3\2\2\2$\u0175\3\2\2\2&\u0181\3\2\2\2(\u0188\3\2\2\2*\u018f\3\2\2\2,"+
		"\u01a7\3\2\2\2.\u01b6\3\2\2\2\60\u01b9\3\2\2\2\62\u01c0\3\2\2\2\64\u01c9"+
		"\3\2\2\2\66\u01cb\3\2\2\28\u01d0\3\2\2\2:\u01d2\3\2\2\2<\u01d4\3\2\2\2"+
		">\u01e1\3\2\2\2@\u01e6\3\2\2\2B\u01f2\3\2\2\2D\u01f4\3\2\2\2F\u01fc\3"+
		"\2\2\2H\u0200\3\2\2\2J\u0207\3\2\2\2L\u020a\3\2\2\2N\u020d\3\2\2\2P\u020f"+
		"\3\2\2\2R\u0229\3\2\2\2T\u0230\3\2\2\2V\u0232\3\2\2\2X\u0237\3\2\2\2Z"+
		"\u023a\3\2\2\2\\\u023f\3\2\2\2^\u0243\3\2\2\2`\u025e\3\2\2\2b\u0260\3"+
		"\2\2\2d\u026b\3\2\2\2f\u0276\3\2\2\2h\u0286\3\2\2\2j\u0288\3\2\2\2l\u0299"+
		"\3\2\2\2n\u029b\3\2\2\2p\u02b7\3\2\2\2r\u02e8\3\2\2\2t\u02ea\3\2\2\2v"+
		"\u02ef\3\2\2\2x\u02f8\3\2\2\2z\u02fa\3\2\2\2|\u0303\3\2\2\2~\u030c\3\2"+
		"\2\2\u0080\u0315\3\2\2\2\u0082\u0317\3\2\2\2\u0084\u0323\3\2\2\2\u0086"+
		"\u0327\3\2\2\2\u0088\u032c\3\2\2\2\u008a\u032e\3\2\2\2\u008c\u0368\3\2"+
		"\2\2\u008e\u037d\3\2\2\2\u0090\u0382\3\2\2\2\u0092\u0386\3\2\2\2\u0094"+
		"\u0388\3\2\2\2\u0096\u038a\3\2\2\2\u0098\u038c\3\2\2\2\u009a\u038e\3\2"+
		"\2\2\u009c\u03b7\3\2\2\2\u009e\u03cc\3\2\2\2\u00a0\u03ce\3\2\2\2\u00a2"+
		"\u03d7\3\2\2\2\u00a4\u03e4\3\2\2\2\u00a6\u03ec\3\2\2\2\u00a8\u03ff\3\2"+
		"\2\2\u00aa\u0402\3\2\2\2\u00ac\u0409\3\2\2\2\u00ae\u040c\3\2\2\2\u00b0"+
		"\u041f\3\2\2\2\u00b2\u0426\3\2\2\2\u00b4\u0429\3\2\2\2\u00b6\u042d\3\2"+
		"\2\2\u00b8\u042f\3\2\2\2\u00ba\u0432\3\2\2\2\u00bc\u046a\3\2\2\2\u00be"+
		"\u046c\3\2\2\2\u00c0\u0476\3\2\2\2\u00c2\u0523\3\2\2\2\u00c4\u0535\3\2"+
		"\2\2\u00c6\u0551\3\2\2\2\u00c8\u0553\3\2\2\2\u00ca\u00cc\5\4\3\2\u00cb"+
		"\u00ca\3\2\2\2\u00cc\u00cf\3\2\2\2\u00cd\u00cb\3\2\2\2\u00cd\u00ce\3\2"+
		"\2\2\u00ce\u00d0\3\2\2\2\u00cf\u00cd\3\2\2\2\u00d0\u00d1\7\2\2\3\u00d1"+
		"\3\3\2\2\2\u00d2\u00e8\7\u00b7\2\2\u00d3\u00d5\5\n\6\2\u00d4\u00d3\3\2"+
		"\2\2\u00d4\u00d5\3\2\2\2\u00d5\u00d7\3\2\2\2\u00d6\u00d8\t\2\2\2\u00d7"+
		"\u00d6\3\2\2\2\u00d7\u00d8\3\2\2\2\u00d8\u00d9\3\2\2\2\u00d9\u00e8\7\u00b7"+
		"\2\2\u00da\u00dc\5\n\6\2\u00db\u00da\3\2\2\2\u00db\u00dc\3\2\2\2\u00dc"+
		"\u00de\3\2\2\2\u00dd\u00df\5\f\7\2\u00de\u00dd\3\2\2\2\u00df\u00e0\3\2"+
		"\2\2\u00e0\u00de\3\2\2\2\u00e0\u00e1\3\2\2\2\u00e1\u00e3\3\2\2\2\u00e2"+
		"\u00e4\t\2\2\2\u00e3\u00e2\3\2\2\2\u00e3\u00e4\3\2\2\2\u00e4\u00e5\3\2"+
		"\2\2\u00e5\u00e6\7\u00b7\2\2\u00e6\u00e8\3\2\2\2\u00e7\u00d2\3\2\2\2\u00e7"+
		"\u00d4\3\2\2\2\u00e7\u00db\3\2\2\2\u00e8\5\3\2\2\2\u00e9\u00eb\5\f\7\2"+
		"\u00ea\u00e9\3\2\2\2\u00eb\u00ee\3\2\2\2\u00ec\u00ea\3\2\2\2\u00ec\u00ed"+
		"\3\2\2\2\u00ed\7\3\2\2\2\u00ee\u00ec\3\2\2\2\u00ef\u00f1\5\f\7\2\u00f0"+
		"\u00ef\3\2\2\2\u00f1\u00f4\3\2\2\2\u00f2\u00f0\3\2\2\2\u00f2\u00f3\3\2"+
		"\2\2\u00f3\u00fc\3\2\2\2\u00f4\u00f2\3\2\2\2\u00f5\u00f7\5\4\3\2\u00f6"+
		"\u00f5\3\2\2\2\u00f7\u00fa\3\2\2\2\u00f8\u00f6\3\2\2\2\u00f8\u00f9\3\2"+
		"\2\2\u00f9\u00fc\3\2\2\2\u00fa\u00f8\3\2\2\2\u00fb\u00f2\3\2\2\2\u00fb"+
		"\u00f8\3\2\2\2\u00fc\t\3\2\2\2\u00fd\u00fe\7\u00d0\2\2\u00fe\13\3\2\2"+
		"\2\u00ff\u0106\7\u00bb\2\2\u0100\u0106\5\16\b\2\u0101\u0106\5B\"\2\u0102"+
		"\u0106\5R*\2\u0103\u0106\5T+\2\u0104\u0106\5`\61\2\u0105\u00ff\3\2\2\2"+
		"\u0105\u0100\3\2\2\2\u0105\u0101\3\2\2\2\u0105\u0102\3\2\2\2\u0105\u0103"+
		"\3\2\2\2\u0105\u0104\3\2\2\2\u0106\r\3\2\2\2\u0107\u0121\5\20\t\2\u0108"+
		"\u0121\5\22\n\2\u0109\u0121\5\24\13\2\u010a\u0121\5\26\f\2\u010b\u0121"+
		"\5\30\r\2\u010c\u0121\5\32\16\2\u010d\u0121\5\34\17\2\u010e\u0121\5\36"+
		"\20\2\u010f\u0121\5 \21\2\u0110\u0121\5\"\22\2\u0111\u0121\5$\23\2\u0112"+
		"\u0121\5&\24\2\u0113\u0121\5(\25\2\u0114\u0121\5*\26\2\u0115\u0121\5,"+
		"\27\2\u0116\u0121\5.\30\2\u0117\u0121\5\60\31\2\u0118\u0121\5\62\32\2"+
		"\u0119\u0121\5\64\33\2\u011a\u0121\5\66\34\2\u011b\u0121\58\35\2\u011c"+
		"\u0121\5:\36\2\u011d\u0121\5<\37\2\u011e\u0121\5> \2\u011f\u0121\5@!\2"+
		"\u0120\u0107\3\2\2\2\u0120\u0108\3\2\2\2\u0120\u0109\3\2\2\2\u0120\u010a"+
		"\3\2\2\2\u0120\u010b\3\2\2\2\u0120\u010c\3\2\2\2\u0120\u010d\3\2\2\2\u0120"+
		"\u010e\3\2\2\2\u0120\u010f\3\2\2\2\u0120\u0110\3\2\2\2\u0120\u0111\3\2"+
		"\2\2\u0120\u0112\3\2\2\2\u0120\u0113\3\2\2\2\u0120\u0114\3\2\2\2\u0120"+
		"\u0115\3\2\2\2\u0120\u0116\3\2\2\2\u0120\u0117\3\2\2\2\u0120\u0118\3\2"+
		"\2\2\u0120\u0119\3\2\2\2\u0120\u011a\3\2\2\2\u0120\u011b\3\2\2\2\u0120"+
		"\u011c\3\2\2\2\u0120\u011d\3\2\2\2\u0120\u011e\3\2\2\2\u0120\u011f\3\2"+
		"\2\2\u0121\17\3\2\2\2\u0122\u0123\7\3\2\2\u0123\21\3\2\2\2\u0124\u0125"+
		"\7\4\2\2\u0125\u0126\5\u00b0Y\2\u0126\u0127\7\34\2\2\u0127\u0129\7\u00b7"+
		"\2\2\u0128\u012a\5\u0082B\2\u0129\u0128\3\2\2\2\u012a\u012b\3\2\2\2\u012b"+
		"\u0129\3\2\2\2\u012b\u012c\3\2\2\2\u012c\u012f\3\2\2\2\u012d\u012e\7 "+
		"\2\2\u012e\u0130\5\b\5\2\u012f\u012d\3\2\2\2\u012f\u0130\3\2\2\2\u0130"+
		"\u0131\3\2\2\2\u0131\u0132\7\13\2\2\u0132\23\3\2\2\2\u0133\u0134\7\5\2"+
		"\2\u0134\u0135\5\u00c0a\2\u0135\25\3\2\2\2\u0136\u0137\7\6\2\2\u0137\u013c"+
		"\5\u0086D\2\u0138\u0139\7\u00bc\2\2\u0139\u013b\5\u0086D\2\u013a\u0138"+
		"\3\2\2\2\u013b\u013e\3\2\2\2\u013c\u013a\3\2\2\2\u013c\u013d\3\2\2\2\u013d"+
		"\27\3\2\2\2\u013e\u013c\3\2\2\2\u013f\u0141\7\31\2\2\u0140\u013f\3\2\2"+
		"\2\u0140\u0141\3\2\2\2\u0141\u0142\3\2\2\2\u0142\u0143\7\b\2\2\u0143\u0148"+
		"\5\u009eP\2\u0144\u0145\7\u00bc\2\2\u0145\u0147\5\u009eP\2\u0146\u0144"+
		"\3\2\2\2\u0147\u014a\3\2\2\2\u0148\u0146\3\2\2\2\u0148\u0149\3\2\2\2\u0149"+
		"\31\3\2\2\2\u014a\u0148\3\2\2\2\u014b\u014c\7\n\2\2\u014c\33\3\2\2\2\u014d"+
		"\u014f\7\'\2\2\u014e\u0150\5\u00b0Y\2\u014f\u014e\3\2\2\2\u014f\u0150"+
		"\3\2\2\2\u0150\35\3\2\2\2\u0151\u0152\7\7\2\2\u0152\u0153\5\u0084C\2\u0153"+
		"\u0155\7\u00be\2\2\u0154\u0156\5\u00a2R\2\u0155\u0154\3\2\2\2\u0155\u0156"+
		"\3\2\2\2\u0156\u0157\3\2\2\2\u0157\u0158\7\u00c0\2\2\u0158\u0159\5\b\5"+
		"\2\u0159\u015a\7\r\2\2\u015a\37\3\2\2\2\u015b\u015c\7\7\2\2\u015c\u015d"+
		"\7\u00c5\2\2\u015d\u015f\7\u00be\2\2\u015e\u0160\5\u00a2R\2\u015f\u015e"+
		"\3\2\2\2\u015f\u0160\3\2\2\2\u0160\u0161\3\2\2\2\u0161\u0162\7\u00c0\2"+
		"\2\u0162\u0163\5\b\5\2\u0163\u0164\7\16\2\2\u0164!\3\2\2\2\u0165\u0167"+
		"\7\21\2\2\u0166\u0168\7\31\2\2\u0167\u0166\3\2\2\2\u0167\u0168\3\2\2\2"+
		"\u0168\u0169\3\2\2\2\u0169\u016a\5\u0092J\2\u016a\u016b\7\u009e\2\2\u016b"+
		"\u016c\5\u00c4c\2\u016c\u016d\7,\2\2\u016d\u0170\5\u00c4c\2\u016e\u016f"+
		"\7)\2\2\u016f\u0171\5\u00c4c\2\u0170\u016e\3\2\2\2\u0170\u0171\3\2\2\2"+
		"\u0171\u0172\3\2\2\2\u0172\u0173\5\b\5\2\u0173\u0174\7\33\2\2\u0174#\3"+
		"\2\2\2\u0175\u0177\7\21\2\2\u0176\u0178\7\31\2\2\u0177\u0176\3\2\2\2\u0177"+
		"\u0178\3\2\2\2\u0178\u0179\3\2\2\2\u0179\u017a\5\u0090I\2\u017a\u017b"+
		"\7\25\2\2\u017b\u017c\5\u0090I\2\u017c\u017d\7\u00be\2\2\u017d\u017e\7"+
		"\u00c0\2\2\u017e\u017f\5\b\5\2\u017f\u0180\7\33\2\2\u0180%\3\2\2\2\u0181"+
		"\u0182\5\u0084C\2\u0182\u0184\7\u00be\2\2\u0183\u0185\5\u00a4S\2\u0184"+
		"\u0183\3\2\2\2\u0184\u0185\3\2\2\2\u0185\u0186\3\2\2\2\u0186\u0187\7\u00c0"+
		"\2\2\u0187\'\3\2\2\2\u0188\u0189\7\24\2\2\u0189\u018a\5\u00b0Y\2\u018a"+
		"\u018d\5\6\4\2\u018b\u018c\7\t\2\2\u018c\u018e\5\6\4\2\u018d\u018b\3\2"+
		"\2\2\u018d\u018e\3\2\2\2\u018e)\3\2\2\2\u018f\u0190\7\24\2\2\u0190\u0191"+
		"\5\u00b0Y\2\u0191\u0192\7+\2\2\u0192\u0194\7\u00b7\2\2\u0193\u0195\5\4"+
		"\3\2\u0194\u0193\3\2\2\2\u0195\u0196\3\2\2\2\u0196\u0194\3\2\2\2\u0196"+
		"\u0197\3\2\2\2\u0197\u019f\3\2\2\2\u0198\u0199\7\t\2\2\u0199\u019b\7\u00b7"+
		"\2\2\u019a\u019c\5\4\3\2\u019b\u019a\3\2\2\2\u019c\u019d\3\2\2\2\u019d"+
		"\u019b\3\2\2\2\u019d\u019e\3\2\2\2\u019e\u01a0\3\2\2\2\u019f\u0198\3\2"+
		"\2\2\u019f\u01a0\3\2\2\2\u01a0\u01a1\3\2\2\2\u01a1\u01a2\7\f\2\2\u01a2"+
		"+\3\2\2\2\u01a3\u01a5\t\3\2\2\u01a4\u01a3\3\2\2\2\u01a4\u01a5\3\2\2\2"+
		"\u01a5\u01a8\3\2\2\2\u01a6\u01a8\7\31\2\2\u01a7\u01a4\3\2\2\2\u01a7\u01a6"+
		"\3\2\2\2\u01a8\u01a9\3\2\2\2\u01a9\u01aa\5\u009cO\2\u01aa\u01ab\7\u009e"+
		"\2\2\u01ab\u01b3\5\u00b0Y\2\u01ac\u01ad\7\u00bc\2\2\u01ad\u01ae\5\u009c"+
		"O\2\u01ae\u01af\7\u009e\2\2\u01af\u01b0\5\u00b0Y\2\u01b0\u01b2\3\2\2\2"+
		"\u01b1\u01ac\3\2\2\2\u01b2\u01b5\3\2\2\2\u01b3\u01b1\3\2\2\2\u01b3\u01b4"+
		"\3\2\2\2\u01b4-\3\2\2\2\u01b5\u01b3\3\2\2\2\u01b6\u01b7\7\37\2\2\u01b7"+
		"\u01b8\5\u00c0a\2\u01b8/\3\2\2\2\u01b9\u01ba\7\u00c5\2\2\u01ba\u01bc\7"+
		"\u00be\2\2\u01bb\u01bd\5\u00a4S\2\u01bc\u01bb\3\2\2\2\u01bc\u01bd\3\2"+
		"\2\2\u01bd\u01be\3\2\2\2\u01be\u01bf\7\u00c0\2\2\u01bf\61\3\2\2\2\u01c0"+
		"\u01c1\7#\2\2\u01c1\u01c6\5\u009cO\2\u01c2\u01c3\7\u00bc\2\2\u01c3\u01c5"+
		"\5\u009cO\2\u01c4\u01c2\3\2\2\2\u01c5\u01c8\3\2\2\2\u01c6\u01c4\3\2\2"+
		"\2\u01c6\u01c7\3\2\2\2\u01c7\63\3\2\2\2\u01c8\u01c6\3\2\2\2\u01c9\u01ca"+
		"\7&\2\2\u01ca\65\3\2\2\2\u01cb\u01cc\7*\2\2\u01cc\u01cd\5\u0090I\2\u01cd"+
		"\u01ce\7\u00bc\2\2\u01ce\u01cf\5\u0090I\2\u01cf\67\3\2\2\2\u01d0\u01d1"+
		"\7.\2\2\u01d19\3\2\2\2\u01d2\u01d3\7/\2\2\u01d3;\3\2\2\2\u01d4\u01d5\7"+
		"\61\2\2\u01d5\u01d6\5\u0094K\2\u01d6\u01d7\7\u00be\2\2\u01d7\u01dc\5\u0090"+
		"I\2\u01d8\u01d9\7\u00bc\2\2\u01d9\u01db\5\u0090I\2\u01da\u01d8\3\2\2\2"+
		"\u01db\u01de\3\2\2\2\u01dc\u01da\3\2\2\2\u01dc\u01dd\3\2\2\2\u01dd\u01df"+
		"\3\2\2\2\u01de\u01dc\3\2\2\2\u01df\u01e0\7\u00c0\2\2\u01e0=\3\2\2\2\u01e1"+
		"\u01e2\7%\2\2\u01e2\u01e3\5\b\5\2\u01e3\u01e4\7\62\2\2\u01e4\u01e5\5\u00b0"+
		"Y\2\u01e5?\3\2\2\2\u01e6\u01e7\7\64\2\2\u01e7\u01e8\5\u00b0Y\2\u01e8\u01e9"+
		"\5\b\5\2\u01e9\u01ea\7\17\2\2\u01eaA\3\2\2\2\u01eb\u01f3\5D#\2\u01ec\u01f3"+
		"\5F$\2\u01ed\u01f3\5H%\2\u01ee\u01f3\5J&\2\u01ef\u01f3\5L\'\2\u01f0\u01f3"+
		"\5N(\2\u01f1\u01f3\5P)\2\u01f2\u01eb\3\2\2\2\u01f2\u01ec\3\2\2\2\u01f2"+
		"\u01ed\3\2\2\2\u01f2\u01ee\3\2\2\2\u01f2\u01ef\3\2\2\2\u01f2\u01f0\3\2"+
		"\2\2\u01f2\u01f1\3\2\2\2\u01f3C\3\2\2\2\u01f4\u01f8\7\27\2\2\u01f5\u01f6"+
		"\5\u00c0a\2\u01f6\u01f7\7\u00bc\2\2\u01f7\u01f9\3\2\2\2\u01f8\u01f5\3"+
		"\2\2\2\u01f8\u01f9\3\2\2\2\u01f9\u01fa\3\2\2\2\u01fa\u01fb\5\u00a0Q\2"+
		"\u01fbE\3\2\2\2\u01fc\u01fe\7!\2\2\u01fd\u01ff\5\u00aeX\2\u01fe\u01fd"+
		"\3\2\2\2\u01fe\u01ff\3\2\2\2\u01ffG\3\2\2\2\u0200\u0201\7\65\2\2\u0201"+
		"\u0202\5\u0096L\2\u0202\u0203\7\u00bc\2\2\u0203\u0204\5\u0096L\2\u0204"+
		"\u0205\7\u00bc\2\2\u0205\u0206\5\u0096L\2\u0206I\3\2\2\2\u0207\u0208\7"+
		"\66\2\2\u0208\u0209\5\u00c4c\2\u0209K\3\2\2\2\u020a\u020b\7\67\2\2\u020b"+
		"\u020c\5\u00c4c\2\u020cM\3\2\2\2\u020d\u020e\78\2\2\u020eO\3\2\2\2\u020f"+
		"\u0210\79\2\2\u0210Q\3\2\2\2\u0211\u0212\5\u009cO\2\u0212\u0213\7\u00b3"+
		"\2\2\u0213\u0214\5\u00c4c\2\u0214\u022a\3\2\2\2\u0215\u0216\5\u009cO\2"+
		"\u0216\u0217\7\u00b4\2\2\u0217\u0218\5\u00c4c\2\u0218\u022a\3\2\2\2\u0219"+
		"\u021a\5\u009cO\2\u021a\u021b\7\u00b1\2\2\u021b\u021c\5\u00c4c\2\u021c"+
		"\u022a\3\2\2\2\u021d\u021e\5\u009cO\2\u021e\u021f\7\u00b2\2\2\u021f\u0220"+
		"\5\u00c4c\2\u0220\u022a\3\2\2\2\u0221\u0222\5\u009cO\2\u0222\u0223\7\u00b5"+
		"\2\2\u0223\u0224\5\u00c4c\2\u0224\u022a\3\2\2\2\u0225\u0226\5\u009cO\2"+
		"\u0226\u0227\7\u00b6\2\2\u0227\u0228\5\u00c4c\2\u0228\u022a\3\2\2\2\u0229"+
		"\u0211\3\2\2\2\u0229\u0215\3\2\2\2\u0229\u0219\3\2\2\2\u0229\u021d\3\2"+
		"\2\2\u0229\u0221\3\2\2\2\u0229\u0225\3\2\2\2\u022aS\3\2\2\2\u022b\u0231"+
		"\5V,\2\u022c\u0231\5X-\2\u022d\u0231\5Z.\2\u022e\u0231\5\\/\2\u022f\u0231"+
		"\5^\60\2\u0230\u022b\3\2\2\2\u0230\u022c\3\2\2\2\u0230\u022d\3\2\2\2\u0230"+
		"\u022e\3\2\2\2\u0230\u022f\3\2\2\2\u0231U\3\2\2\2\u0232\u0233\7^\2\2\u0233"+
		"\u0234\5\u00c4c\2\u0234\u0235\7\u00bc\2\2\u0235\u0236\5\u00c4c\2\u0236"+
		"W\3\2\2\2\u0237\u0238\7]\2\2\u0238\u0239\5\u00c4c\2\u0239Y\3\2\2\2\u023a"+
		"\u023b\7f\2\2\u023b\u023c\5\u00c4c\2\u023c\u023d\7\u009e\2\2\u023d\u023e"+
		"\5\u00c4c\2\u023e[\3\2\2\2\u023f\u0240\7_\2\2\u0240\u0241\5\u00c4c\2\u0241"+
		"]\3\2\2\2\u0242\u0244\7\31\2\2\u0243\u0242\3\2\2\2\u0243\u0244\3\2\2\2"+
		"\u0244\u0245\3\2\2\2\u0245\u0246\5\u0098M\2\u0246\u0247\7\u00be\2\2\u0247"+
		"\u0248\7\u00c0\2\2\u0248\u0249\7\u009e\2\2\u0249\u024a\7b\2\2\u024a\u024b"+
		"\7\u00be\2\2\u024b\u024c\5\u00c0a\2\u024c\u024d\7\u00c0\2\2\u024d_\3\2"+
		"\2\2\u024e\u025f\5b\62\2\u024f\u025f\5d\63\2\u0250\u025f\5f\64\2\u0251"+
		"\u025f\5h\65\2\u0252\u025f\5j\66\2\u0253\u025f\5l\67\2\u0254\u025f\5n"+
		"8\2\u0255\u025f\5p9\2\u0256\u025f\5r:\2\u0257\u025f\5t;\2\u0258\u025f"+
		"\5v<\2\u0259\u025f\5x=\2\u025a\u025f\5z>\2\u025b\u025f\5|?\2\u025c\u025f"+
		"\5~@\2\u025d\u025f\5\u0080A\2\u025e\u024e\3\2\2\2\u025e\u024f\3\2\2\2"+
		"\u025e\u0250\3\2\2\2\u025e\u0251\3\2\2\2\u025e\u0252\3\2\2\2\u025e\u0253"+
		"\3\2\2\2\u025e\u0254\3\2\2\2\u025e\u0255\3\2\2\2\u025e\u0256\3\2\2\2\u025e"+
		"\u0257\3\2\2\2\u025e\u0258\3\2\2\2\u025e\u0259\3\2\2\2\u025e\u025a\3\2"+
		"\2\2\u025e\u025b\3\2\2\2\u025e\u025c\3\2\2\2\u025e\u025d\3\2\2\2\u025f"+
		"a\3\2\2\2\u0260\u0261\7i\2\2\u0261c\3\2\2\2\u0262\u0263\7l\2\2\u0263\u026c"+
		"\5\u00c4c\2\u0264\u0265\7l\2\2\u0265\u0266\5\u00c4c\2\u0266\u0267\7\u00bc"+
		"\2\2\u0267\u0268\5\u00c4c\2\u0268\u0269\7\u00bc\2\2\u0269\u026a\5\u00c4"+
		"c\2\u026a\u026c\3\2\2\2\u026b\u0262\3\2\2\2\u026b\u0264\3\2\2\2\u026c"+
		"e\3\2\2\2\u026d\u026e\7m\2\2\u026e\u0277\5\u00c4c\2\u026f\u0270\7m\2\2"+
		"\u0270\u0271\5\u00c4c\2\u0271\u0272\7\u00bc\2\2\u0272\u0273\5\u00c4c\2"+
		"\u0273\u0274\7\u00bc\2\2\u0274\u0275\5\u00c4c\2\u0275\u0277\3\2\2\2\u0276"+
		"\u026d\3\2\2\2\u0276\u026f\3\2\2\2\u0277g\3\2\2\2\u0278\u0287\7r\2\2\u0279"+
		"\u027a\7r\2\2\u027a\u027b\5\u00c4c\2\u027b\u027c\7\u00bc\2\2\u027c\u027d"+
		"\5\u00c4c\2\u027d\u0287\3\2\2\2\u027e\u027f\7r\2\2\u027f\u0287\7g\2\2"+
		"\u0280\u0281\7r\2\2\u0281\u0282\7g\2\2\u0282\u0283\5\u00c4c\2\u0283\u0284"+
		"\7\u00bc\2\2\u0284\u0285\5\u00c4c\2\u0285\u0287\3\2\2\2\u0286\u0278\3"+
		"\2\2\2\u0286\u0279\3\2\2\2\u0286\u027e\3\2\2\2\u0286\u0280\3\2\2\2\u0287"+
		"i\3\2\2\2\u0288\u0289\7p\2\2\u0289k\3\2\2\2\u028a\u028b\7h\2\2\u028b\u028c"+
		"\5\u00c4c\2\u028c\u028d\7\u00bc\2\2\u028d\u028e\5\u00c4c\2\u028e\u028f"+
		"\7\u00bc\2\2\u028f\u0290\5\u00c4c\2\u0290\u029a\3\2\2\2\u0291\u0292\7"+
		"h\2\2\u0292\u0293\7o\2\2\u0293\u0294\5\u00c4c\2\u0294\u0295\7\u00bc\2"+
		"\2\u0295\u0296\5\u00c4c\2\u0296\u0297\7\u00bc\2\2\u0297\u0298\5\u00c4"+
		"c\2\u0298\u029a\3\2\2\2\u0299\u028a\3\2\2\2\u0299\u0291\3\2\2\2\u029a"+
		"m\3\2\2\2\u029b\u029c\7s\2\2\u029c\u029d\5\u00c4c\2\u029d\u029e\7\u00bc"+
		"\2\2\u029e\u029f\5\u00c4c\2\u029f\u02a0\7\u00bc\2\2\u02a0\u02a1\5\u00c4"+
		"c\2\u02a1\u02a2\7\u00bc\2\2\u02a2\u02a3\5\u00c4c\2\u02a3o\3\2\2\2\u02a4"+
		"\u02a5\7u\2\2\u02a5\u02a6\5\u00c4c\2\u02a6\u02a7\7\u00bc\2\2\u02a7\u02a8"+
		"\5\u00c4c\2\u02a8\u02a9\7\u00bc\2\2\u02a9\u02aa\5\u00c4c\2\u02aa\u02ab"+
		"\7\u00bc\2\2\u02ab\u02ac\5\u00c4c\2\u02ac\u02b8\3\2\2\2\u02ad\u02ae\7"+
		"u\2\2\u02ae\u02af\7o\2\2\u02af\u02b0\5\u00c4c\2\u02b0\u02b1\7\u00bc\2"+
		"\2\u02b1\u02b2\5\u00c4c\2\u02b2\u02b3\7\u00bc\2\2\u02b3\u02b4\5\u00c4"+
		"c\2\u02b4\u02b5\7\u00bc\2\2\u02b5\u02b6\5\u00c4c\2\u02b6\u02b8\3\2\2\2"+
		"\u02b7\u02a4\3\2\2\2\u02b7\u02ad\3\2\2\2\u02b8q\3\2\2\2\u02b9\u02ba\7"+
		"\177\2\2\u02ba\u02bb\5\u00c4c\2\u02bb\u02bc\7\u00bc\2\2\u02bc\u02bd\5"+
		"\u00c4c\2\u02bd\u02be\7\u00bc\2\2\u02be\u02bf\5\u00c4c\2\u02bf\u02c0\7"+
		"\u00bc\2\2\u02c0\u02c1\5\u00c4c\2\u02c1\u02c2\7\u00bc\2\2\u02c2\u02c3"+
		"\5\u00c4c\2\u02c3\u02c4\7\u00bc\2\2\u02c4\u02c5\5\u00c4c\2\u02c5\u02e9"+
		"\3\2\2\2\u02c6\u02c7\7\177\2\2\u02c7\u02c8\7o\2\2\u02c8\u02c9\5\u00c4"+
		"c\2\u02c9\u02ca\7\u00bc\2\2\u02ca\u02cb\5\u00c4c\2\u02cb\u02cc\7\u00bc"+
		"\2\2\u02cc\u02cd\5\u00c4c\2\u02cd\u02ce\7\u00bc\2\2\u02ce\u02cf\5\u00c4"+
		"c\2\u02cf\u02d0\7\u00bc\2\2\u02d0\u02d1\5\u00c4c\2\u02d1\u02d2\7\u00bc"+
		"\2\2\u02d2\u02d3\5\u00c4c\2\u02d3\u02e9\3\2\2\2\u02d4\u02d5\7\177\2\2"+
		"\u02d5\u02d6\7z\2\2\u02d6\u02d7\5\u00c4c\2\u02d7\u02d8\7\u00bc\2\2\u02d8"+
		"\u02d9\5\u00c4c\2\u02d9\u02da\7\u00bc\2\2\u02da\u02db\5\u00c4c\2\u02db"+
		"\u02dc\7\u00bc\2\2\u02dc\u02dd\5\u00c4c\2\u02dd\u02de\7\u00bc\2\2\u02de"+
		"\u02df\5\u00c4c\2\u02df\u02e0\7\u00bc\2\2\u02e0\u02e1\5\u00c4c\2\u02e1"+
		"\u02e2\7\u00bc\2\2\u02e2\u02e3\5\u00c4c\2\u02e3\u02e4\7\u00bc\2\2\u02e4"+
		"\u02e5\5\u00c4c\2\u02e5\u02e6\7\u00bc\2\2\u02e6\u02e7\5\u00c4c\2\u02e7"+
		"\u02e9\3\2\2\2\u02e8\u02b9\3\2\2\2\u02e8\u02c6\3\2\2\2\u02e8\u02d4\3\2"+
		"\2\2\u02e9s\3\2\2\2\u02ea\u02eb\7v\2\2\u02eb\u02ec\5\u00c4c\2\u02ec\u02ed"+
		"\7\u00bc\2\2\u02ed\u02ee\5\u00c4c\2\u02eeu\3\2\2\2\u02ef\u02f0\7j\2\2"+
		"\u02f0\u02f1\5\u00c4c\2\u02f1\u02f2\7\u00bc\2\2\u02f2\u02f3\5\u00c4c\2"+
		"\u02f3\u02f4\7\u00bc\2\2\u02f4\u02f5\5\u00c4c\2\u02f5\u02f6\7\u00bc\2"+
		"\2\u02f6\u02f7\5\u00c4c\2\u02f7w\3\2\2\2\u02f8\u02f9\7k\2\2\u02f9y\3\2"+
		"\2\2\u02fa\u02fb\7{\2\2\u02fb\u02fc\5\u00c4c\2\u02fc\u02fd\7\u00bc\2\2"+
		"\u02fd\u02fe\5\u00c4c\2\u02fe\u02ff\7\u00bc\2\2\u02ff\u0300\5\u00c4c\2"+
		"\u0300\u0301\7\u00bc\2\2\u0301\u0302\5\u00c0a\2\u0302{\3\2\2\2\u0303\u0304"+
		"\7|\2\2\u0304\u0305\5\u00c4c\2\u0305\u0306\7\u00bc\2\2\u0306\u0307\5\u00c4"+
		"c\2\u0307\u0308\7\u00bc\2\2\u0308\u0309\5\u00c4c\2\u0309\u030a\7\u00bc"+
		"\2\2\u030a\u030b\5\u00c0a\2\u030b}\3\2\2\2\u030c\u030d\t\4\2\2\u030d\u030e"+
		"\5\u00c4c\2\u030e\u030f\7\u00bc\2\2\u030f\u0310\5\u00c4c\2\u0310\u0311"+
		"\7\u00bc\2\2\u0311\u0312\5\u00c4c\2\u0312\u0313\7\u00bc\2\2\u0313\u0314"+
		"\5\u00c0a\2\u0314\177\3\2\2\2\u0315\u0316\7q\2\2\u0316\u0081\3\2\2\2\u0317"+
		"\u0318\7\63\2\2\u0318\u031d\5\u00b0Y\2\u0319\u031a\7\u00bc\2\2\u031a\u031c"+
		"\5\u00b0Y\2\u031b\u0319\3\2\2\2\u031c\u031f\3\2\2\2\u031d\u031b\3\2\2"+
		"\2\u031d\u031e\3\2\2\2\u031e\u0320\3\2\2\2\u031f\u031d\3\2\2\2\u0320\u0321"+
		"\7\u00bb\2\2\u0321\u0322\5\b\5\2\u0322\u0083\3\2\2\2\u0323\u0324\t\5\2"+
		"\2\u0324\u0085\3\2\2\2\u0325\u0328\5\u00b2Z\2\u0326\u0328\5\u00be`\2\u0327"+
		"\u0325\3\2\2\2\u0327\u0326\3\2\2\2\u0328\u0087\3\2\2\2\u0329\u032d\5\u008c"+
		"G\2\u032a\u032d\5\u008eH\2\u032b\u032d\5\u008aF\2\u032c\u0329\3\2\2\2"+
		"\u032c\u032a\3\2\2\2\u032c\u032b\3\2\2\2\u032d\u0089\3\2\2\2\u032e\u032f"+
		"\5\u009aN\2\u032f\u008b\3\2\2\2\u0330\u0331\5\u0094K\2\u0331\u0332\7\u00be"+
		"\2\2\u0332\u0335\5\u00c4c\2\u0333\u0334\7\u00bc\2\2\u0334\u0336\5\u00c4"+
		"c\2\u0335\u0333\3\2\2\2\u0335\u0336\3\2\2\2\u0336\u0337\3\2\2\2\u0337"+
		"\u0338\7\u00c0\2\2\u0338\u0369\3\2\2\2\u0339\u033a\5\u0096L\2\u033a\u033b"+
		"\7\u00be\2\2\u033b\u033e\5\u00c4c\2\u033c\u033d\7\u00bc\2\2\u033d\u033f"+
		"\5\u00c4c\2\u033e\u033c\3\2\2\2\u033e\u033f\3\2\2\2\u033f\u0340\3\2\2"+
		"\2\u0340\u0341\7\u00c0\2\2\u0341\u0369\3\2\2\2\u0342\u0343\5\u008aF\2"+
		"\u0343\u0344\7\u00be\2\2\u0344\u0345\5\u00c4c\2\u0345\u0346\7\u00c0\2"+
		"\2\u0346\u0347\5\u0096L\2\u0347\u0369\3\2\2\2\u0348\u0349\5\u008aF\2\u0349"+
		"\u034a\7\u00be\2\2\u034a\u034b\5\u00c4c\2\u034b\u034c\7\u00c0\2\2\u034c"+
		"\u034d\5\u0094K\2\u034d\u0369\3\2\2\2\u034e\u034f\7\u00c7\2\2\u034f\u0351"+
		"\7\u00be\2\2\u0350\u0352\5\u00a4S\2\u0351\u0350\3\2\2\2\u0351\u0352\3"+
		"\2\2\2\u0352\u0353\3\2\2\2\u0353\u0369\7\u00c0\2\2\u0354\u0355\7\u00c6"+
		"\2\2\u0355\u0357\7\u00be\2\2\u0356\u0358\5\u00a4S\2\u0357\u0356\3\2\2"+
		"\2\u0357\u0358\3\2\2\2\u0358\u0359\3\2\2\2\u0359\u0369\7\u00c0\2\2\u035a"+
		"\u035b\7\u00c8\2\2\u035b\u035d\7\u00be\2\2\u035c\u035e\5\u00a4S\2\u035d"+
		"\u035c\3\2\2\2\u035d\u035e\3\2\2\2\u035e\u035f\3\2\2\2\u035f\u0369\7\u00c0"+
		"\2\2\u0360\u0369\5\u0094K\2\u0361\u0369\5\u0096L\2\u0362\u0363\5\u008a"+
		"F\2\u0363\u0364\5\u0094K\2\u0364\u0369\3\2\2\2\u0365\u0366\5\u008aF\2"+
		"\u0366\u0367\5\u0096L\2\u0367\u0369\3\2\2\2\u0368\u0330\3\2\2\2\u0368"+
		"\u0339\3\2\2\2\u0368\u0342\3\2\2\2\u0368\u0348\3\2\2\2\u0368\u034e\3\2"+
		"\2\2\u0368\u0354\3\2\2\2\u0368\u035a\3\2\2\2\u0368\u0360\3\2\2\2\u0368"+
		"\u0361\3\2\2\2\u0368\u0362\3\2\2\2\u0368\u0365\3\2\2\2\u0369\u008d\3\2"+
		"\2\2\u036a\u036b\5\u0098M\2\u036b\u036c\7\u00be\2\2\u036c\u036f\5\u00c4"+
		"c\2\u036d\u036e\7\u00bc\2\2\u036e\u0370\5\u00c4c\2\u036f\u036d\3\2\2\2"+
		"\u036f\u0370\3\2\2\2\u0370\u0371\3\2\2\2\u0371\u0372\7\u00c0\2\2\u0372"+
		"\u037e\3\2\2\2\u0373\u0374\5\u008aF\2\u0374\u0375\7\u00be\2\2\u0375\u0376"+
		"\5\u00c4c\2\u0376\u0377\7\u00c0\2\2\u0377\u0378\5\u0098M\2\u0378\u037e"+
		"\3\2\2\2\u0379\u037e\5\u0098M\2\u037a\u037b\5\u008aF\2\u037b\u037c\5\u0098"+
		"M\2\u037c\u037e\3\2\2\2\u037d\u036a\3\2\2\2\u037d\u0373\3\2\2\2\u037d"+
		"\u0379\3\2\2\2\u037d\u037a\3\2\2\2\u037e\u008f\3\2\2\2\u037f\u0383\5\u0094"+
		"K\2\u0380\u0383\5\u0096L\2\u0381\u0383\5\u0098M\2\u0382\u037f\3\2\2\2"+
		"\u0382\u0380\3\2\2\2\u0382\u0381\3\2\2\2\u0383\u0091\3\2\2\2\u0384\u0387"+
		"\5\u0094K\2\u0385\u0387\5\u0096L\2\u0386\u0384\3\2\2\2\u0386\u0385\3\2"+
		"\2\2\u0387\u0093\3\2\2\2\u0388\u0389\7\u00c9\2\2\u0389\u0095\3\2\2\2\u038a"+
		"\u038b\7\u00ca\2\2\u038b\u0097\3\2\2\2\u038c\u038d\7\u00cb\2\2\u038d\u0099"+
		"\3\2\2\2\u038e\u038f\7\u00cc\2\2\u038f\u009b\3\2\2\2\u0390\u03b8\5\u0090"+
		"I\2\u0391\u039c\5\u0090I\2\u0392\u0393\7\u00be\2\2\u0393\u0396\5\u00c4"+
		"c\2\u0394\u0395\7\u00bc\2\2\u0395\u0397\5\u00c4c\2\u0396\u0394\3\2\2\2"+
		"\u0396\u0397\3\2\2\2\u0397\u0398\3\2\2\2\u0398\u0399\7\u00c0\2\2\u0399"+
		"\u039b\3\2\2\2\u039a\u0392\3\2\2\2\u039b\u039e\3\2\2\2\u039c\u039a\3\2"+
		"\2\2\u039c\u039d\3\2\2\2\u039d\u03b8\3\2\2\2\u039e\u039c\3\2\2\2\u039f"+
		"\u03a0\5\u008aF\2\u03a0\u03a1\5\u0094K\2\u03a1\u03b8\3\2\2\2\u03a2\u03a3"+
		"\5\u008aF\2\u03a3\u03a4\5\u0096L\2\u03a4\u03b8\3\2\2\2\u03a5\u03a6\5\u008a"+
		"F\2\u03a6\u03a7\7\u00be\2\2\u03a7\u03a8\5\u00c4c\2\u03a8\u03a9\7\u00c0"+
		"\2\2\u03a9\u03aa\5\u0094K\2\u03aa\u03b8\3\2\2\2\u03ab\u03ac\5\u008aF\2"+
		"\u03ac\u03ad\7\u00be\2\2\u03ad\u03ae\5\u00c4c\2\u03ae\u03af\7\u00c0\2"+
		"\2\u03af\u03b0\5\u0096L\2\u03b0\u03b8\3\2\2\2\u03b1\u03b8\5\u008aF\2\u03b2"+
		"\u03b3\5\u008aF\2\u03b3\u03b4\7\u00be\2\2\u03b4\u03b5\5\u00c4c\2\u03b5"+
		"\u03b6\7\u00c0\2\2\u03b6\u03b8\3\2\2\2\u03b7\u0390\3\2\2\2\u03b7\u0391"+
		"\3\2\2\2\u03b7\u039f\3\2\2\2\u03b7\u03a2\3\2\2\2\u03b7\u03a5\3\2\2\2\u03b7"+
		"\u03ab\3\2\2\2\u03b7\u03b1\3\2\2\2\u03b7\u03b2\3\2\2\2\u03b8\u009d\3\2"+
		"\2\2\u03b9\u03ba\5\u0090I\2\u03ba\u03bb\7\u00be\2\2\u03bb\u03c0\5\u00c4"+
		"c\2\u03bc\u03bd\7\u00bc\2\2\u03bd\u03bf\5\u00c4c\2\u03be\u03bc\3\2\2\2"+
		"\u03bf\u03c2\3\2\2\2\u03c0\u03be\3\2\2\2\u03c0\u03c1\3\2\2\2\u03c1\u03c3"+
		"\3\2\2\2\u03c2\u03c0\3\2\2\2\u03c3\u03c4\7\u00c0\2\2\u03c4\u03cd\3\2\2"+
		"\2\u03c5\u03c6\5\u008aF\2\u03c6\u03c7\7\u00be\2\2\u03c7\u03c8\5\u00c4"+
		"c\2\u03c8\u03c9\7\u00bc\2\2\u03c9\u03ca\5\u0094K\2\u03ca\u03cb\7\u00c0"+
		"\2\2\u03cb\u03cd\3\2\2\2\u03cc\u03b9\3\2\2\2\u03cc\u03c5\3\2\2\2\u03cd"+
		"\u009f\3\2\2\2\u03ce\u03d3\5\u009cO\2\u03cf\u03d0\7\u00bc\2\2\u03d0\u03d2"+
		"\5\u009cO\2\u03d1\u03cf\3\2\2\2\u03d2\u03d5\3\2\2\2\u03d3\u03d1\3\2\2"+
		"\2\u03d3\u03d4\3\2\2\2\u03d4\u00a1\3\2\2\2\u03d5\u03d3\3\2\2\2\u03d6\u03d8"+
		"\7\'\2\2\u03d7\u03d6\3\2\2\2\u03d7\u03d8\3\2\2\2\u03d8\u03d9\3\2\2\2\u03d9"+
		"\u03e1\5\u0090I\2\u03da\u03dc\7\u00bc\2\2\u03db\u03dd\7\'\2\2\u03dc\u03db"+
		"\3\2\2\2\u03dc\u03dd\3\2\2\2\u03dd\u03de\3\2\2\2\u03de\u03e0\5\u0090I"+
		"\2\u03df\u03da\3\2\2\2\u03e0\u03e3\3\2\2\2\u03e1\u03df\3\2\2\2\u03e1\u03e2"+
		"\3\2\2\2\u03e2\u00a3\3\2\2\2\u03e3\u03e1\3\2\2\2\u03e4\u03e9\5\u00b0Y"+
		"\2\u03e5\u03e6\7\u00bc\2\2\u03e6\u03e8\5\u00b0Y\2\u03e7\u03e5\3\2\2\2"+
		"\u03e8\u03eb\3\2\2\2\u03e9\u03e7\3\2\2\2\u03e9\u03ea\3\2\2\2\u03ea\u00a5"+
		"\3\2\2\2\u03eb\u03e9\3\2\2\2\u03ec\u03f1\5\u00b0Y\2\u03ed\u03ee\7\u00bc"+
		"\2\2\u03ee\u03f0\5\u00b0Y\2\u03ef\u03ed\3\2\2\2\u03f0\u03f3\3\2\2\2\u03f1"+
		"\u03ef\3\2\2\2\u03f1\u03f2\3\2\2\2\u03f2\u00a7\3\2\2\2\u03f3\u03f1\3\2"+
		"\2\2\u03f4\u03f6\7\u00b9\2\2\u03f5\u03f4\3\2\2\2\u03f5\u03f6\3\2\2\2\u03f6"+
		"\u03f7\3\2\2\2\u03f7\u0400\5\u00b0Y\2\u03f8\u03f9\7(\2\2\u03f9\u03fa\7"+
		"\u00be\2\2\u03fa\u03fb\5\u00c4c\2\u03fb\u03fc\7\u00c0\2\2\u03fc\u0400"+
		"\3\2\2\2\u03fd\u03fe\7(\2\2\u03fe\u0400\5\u00c4c\2\u03ff\u03f5\3\2\2\2"+
		"\u03ff\u03f8\3\2\2\2\u03ff\u03fd\3\2\2\2\u0400\u00a9\3\2\2\2\u0401\u0403"+
		"\7\u00b8\2\2\u0402\u0401\3\2\2\2\u0403\u0404\3\2\2\2\u0404\u0402\3\2\2"+
		"\2\u0404\u0405\3\2\2\2\u0405\u00ab\3\2\2\2\u0406\u040a\7\u00bc\2\2\u0407"+
		"\u040a\7\u00c1\2\2\u0408\u040a\5\u00aaV\2\u0409\u0406\3\2\2\2\u0409\u0407"+
		"\3\2\2\2\u0409\u0408\3\2\2\2\u040a\u00ad\3\2\2\2\u040b\u040d\5\u00aaV"+
		"\2\u040c\u040b\3\2\2\2\u040c\u040d\3\2\2\2\u040d\u040f\3\2\2\2\u040e\u0410"+
		"\7\u00c1\2\2\u040f\u040e\3\2\2\2\u040f\u0410\3\2\2\2\u0410\u0411\3\2\2"+
		"\2\u0411\u0417\5\u00a8U\2\u0412\u0413\5\u00acW\2\u0413\u0414\5\u00a8U"+
		"\2\u0414\u0416\3\2\2\2\u0415\u0412\3\2\2\2\u0416\u0419\3\2\2\2\u0417\u0415"+
		"\3\2\2\2\u0417\u0418\3\2\2\2\u0418\u041b\3\2\2\2\u0419\u0417\3\2\2\2\u041a"+
		"\u041c\7\u00c1\2\2\u041b\u041a\3\2\2\2\u041b\u041c\3\2\2\2\u041c\u00af"+
		"\3\2\2\2\u041d\u0420\5\u00c4c\2\u041e\u0420\5\u00c0a\2\u041f\u041d\3\2"+
		"\2\2\u041f\u041e\3\2\2\2\u0420\u00b1\3\2\2\2\u0421\u0427\5\u00b4[\2\u0422"+
		"\u0427\5\u00ba^\2\u0423\u0427\5\u00b6\\\2\u0424\u0427\5\u00b8]\2\u0425"+
		"\u0427\5\u00c6d\2\u0426\u0421\3\2\2\2\u0426\u0422\3\2\2\2\u0426\u0423"+
		"\3\2\2\2\u0426\u0424\3\2\2\2\u0426\u0425\3\2\2\2\u0427\u00b3\3\2\2\2\u0428"+
		"\u042a\t\6\2\2\u0429\u0428\3\2\2\2\u0429\u042a\3\2\2\2\u042a\u042b\3\2"+
		"\2\2\u042b\u042c\7\u00d0\2\2\u042c\u00b5\3\2\2\2\u042d\u042e\7\u00ce\2"+
		"\2\u042e\u00b7\3\2\2\2\u042f\u0430\7\u00cf\2\2\u0430\u00b9\3\2\2\2\u0431"+
		"\u0433\t\6\2\2\u0432\u0431\3\2\2\2\u0432\u0433\3\2\2\2\u0433\u0434\3\2"+
		"\2\2\u0434\u0435\7\u00d1\2\2\u0435\u00bb\3\2\2\2\u0436\u046b\7\u0094\2"+
		"\2\u0437\u0438\7\u0097\2\2\u0438\u046b\5\u00c4c\2\u0439\u043a\7\u0097"+
		"\2\2\u043a\u043b\7\u00be\2\2\u043b\u043c\5\u00c4c\2\u043c\u043d\7\u00c0"+
		"\2\2\u043d\u046b\3\2\2\2\u043e\u043f\7\u0098\2\2\u043f\u0440\7\u00be\2"+
		"\2\u0440\u0441\5\u00c0a\2\u0441\u0442\7\u00bc\2\2\u0442\u0443\5\u00c4"+
		"c\2\u0443\u0444\7\u00c0\2\2\u0444\u046b\3\2\2\2\u0445\u0446\7\u0099\2"+
		"\2\u0446\u0447\7\u00be\2\2\u0447\u0448\5\u00c0a\2\u0448\u0449\7\u00bc"+
		"\2\2\u0449\u044a\5\u00c4c\2\u044a\u044b\7\u00bc\2\2\u044b\u044c\5\u00c4"+
		"c\2\u044c\u044d\7\u00c0\2\2\u044d\u046b\3\2\2\2\u044e\u044f\7\u0099\2"+
		"\2\u044f\u0450\7\u00be\2\2\u0450\u0451\5\u00c0a\2\u0451\u0452\7\u00bc"+
		"\2\2\u0452\u0453\5\u00c4c\2\u0453\u0454\7\u00c0\2\2\u0454\u046b\3\2\2"+
		"\2\u0455\u0456\7\u009a\2\2\u0456\u0457\7\u00be\2\2\u0457\u0458\5\u00c0"+
		"a\2\u0458\u0459\7\u00bc\2\2\u0459\u045a\5\u00c4c\2\u045a\u045b\7\u00c0"+
		"\2\2\u045b\u046b\3\2\2\2\u045c\u045d\7\u0095\2\2\u045d\u046b\5\u00c4c"+
		"\2\u045e\u045f\7\u0095\2\2\u045f\u0460\7\u00b9\2\2\u0460\u046b\5\u00c4"+
		"c\2\u0461\u0462\7\u0096\2\2\u0462\u0463\7\u00be\2\2\u0463\u0464\5\u00c4"+
		"c\2\u0464\u0465\7\u00bc\2\2\u0465\u0466\5\u00c0a\2\u0466\u0467\7\u00c0"+
		"\2\2\u0467\u046b\3\2\2\2\u0468\u0469\7\67\2\2\u0469\u046b\5\u00c4c\2\u046a"+
		"\u0436\3\2\2\2\u046a\u0437\3\2\2\2\u046a\u0439\3\2\2\2\u046a\u043e\3\2"+
		"\2\2\u046a\u0445\3\2\2\2\u046a\u044e\3\2\2\2\u046a\u0455\3\2\2\2\u046a"+
		"\u045c\3\2\2\2\u046a\u045e\3\2\2\2\u046a\u0461\3\2\2\2\u046a\u0468\3\2"+
		"\2\2\u046b\u00bd\3\2\2\2\u046c\u046d\7\u00c4\2\2\u046d\u00bf\3\2\2\2\u046e"+
		"\u046f\ba\1\2\u046f\u0470\7\u00be\2\2\u0470\u0471\5\u00c0a\2\u0471\u0472"+
		"\7\u00c0\2\2\u0472\u0477\3\2\2\2\u0473\u0477\5\u00bc_\2\u0474\u0477\5"+
		"\u008eH\2\u0475\u0477\5\u00be`\2\u0476\u046e\3\2\2\2\u0476\u0473\3\2\2"+
		"\2\u0476\u0474\3\2\2\2\u0476\u0475\3\2\2\2\u0477\u047d\3\2\2\2\u0478\u0479"+
		"\f\5\2\2\u0479\u047a\7\u00ab\2\2\u047a\u047c\5\u00c0a\6\u047b\u0478\3"+
		"\2\2\2\u047c\u047f\3\2\2\2\u047d\u047b\3\2\2\2\u047d\u047e\3\2\2\2\u047e"+
		"\u00c1\3\2\2\2\u047f\u047d\3\2\2\2\u0480\u0524\7\u0081\2\2\u0481\u0524"+
		"\7\20\2\2\u0482\u0524\7\60\2\2\u0483\u0524\7\u0080\2\2\u0484\u0524\7\u009b"+
		"\2\2\u0485\u0524\7\u009c\2\2\u0486\u0524\7\u009d\2\2\u0487\u0488\7\u009b"+
		"\2\2\u0488\u0489\7\u00be\2\2\u0489\u048a\5\u00c4c\2\u048a\u048b\7\u00c0"+
		"\2\2\u048b\u0524\3\2\2\2\u048c\u048d\7\u0083\2\2\u048d\u048e\7\u00be\2"+
		"\2\u048e\u048f\5\u00c4c\2\u048f\u0490\7\u00c0\2\2\u0490\u0524\3\2\2\2"+
		"\u0491\u0492\7\u0084\2\2\u0492\u0493\7\u00be\2\2\u0493\u0494\5\u00c4c"+
		"\2\u0494\u0495\7\u00c0\2\2\u0495\u0524\3\2\2\2\u0496\u0497\7\u0085\2\2"+
		"\u0497\u0498\7\u00be\2\2\u0498\u0499\5\u00c4c\2\u0499\u049a\7\u00c0\2"+
		"\2\u049a\u0524\3\2\2\2\u049b\u049c\7\u0086\2\2\u049c\u049d\7\u00be\2\2"+
		"\u049d\u049e\5\u00c4c\2\u049e\u049f\7\u00c0\2\2\u049f\u0524\3\2\2\2\u04a0"+
		"\u04a1\7\u0087\2\2\u04a1\u04a2\7\u00be\2\2\u04a2\u04a3\5\u00c4c\2\u04a3"+
		"\u04a4\7\u00c0\2\2\u04a4\u0524\3\2\2\2\u04a5\u04a6\7\u0088\2\2\u04a6\u04a7"+
		"\7\u00be\2\2\u04a7\u04a8\5\u00c4c\2\u04a8\u04a9\7\u00c0\2\2\u04a9\u0524"+
		"\3\2\2\2\u04aa\u04ab\7\u0089\2\2\u04ab\u04ac\7\u00be\2\2\u04ac\u04ad\5"+
		"\u00c4c\2\u04ad\u04ae\7\u00c0\2\2\u04ae\u0524\3\2\2\2\u04af\u04b0\7\u008a"+
		"\2\2\u04b0\u04b1\7\u00be\2\2\u04b1\u04b2\5\u00c4c\2\u04b2\u04b3\7\u00c0"+
		"\2\2\u04b3\u0524\3\2\2\2\u04b4\u04b5\7\u008b\2\2\u04b5\u04b6\7\u00be\2"+
		"\2\u04b6\u04b7\5\u00c4c\2\u04b7\u04b8\7\u00c0\2\2\u04b8\u0524\3\2\2\2"+
		"\u04b9\u04ba\7\u008c\2\2\u04ba\u04bb\7\u00be\2\2\u04bb\u04bc\5\u00c4c"+
		"\2\u04bc\u04bd\7\u00c0\2\2\u04bd\u0524\3\2\2\2\u04be\u04bf\7\u008d\2\2"+
		"\u04bf\u04c0\7\u00be\2\2\u04c0\u04c1\5\u00c4c\2\u04c1\u04c2\7\u00c0\2"+
		"\2\u04c2\u0524\3\2\2\2\u04c3\u04c4\7\u008e\2\2\u04c4\u04c5\7\u00be\2\2"+
		"\u04c5\u04c6\5\u00c4c\2\u04c6\u04c7\7\u00c0\2\2\u04c7\u0524\3\2\2\2\u04c8"+
		"\u04c9\7\u0082\2\2\u04c9\u04ca\7\u00be\2\2\u04ca\u04cb\5\u00c4c\2\u04cb"+
		"\u04cc\7\u00c0\2\2\u04cc\u0524\3\2\2\2\u04cd\u04ce\7\u008f\2\2\u04ce\u04cf"+
		"\7\u00be\2\2\u04cf\u04d0\5\u00c4c\2\u04d0\u04d1\7\u00c0\2\2\u04d1\u0524"+
		"\3\2\2\2\u04d2\u0524\78\2\2\u04d3\u04d4\7\66\2\2\u04d4\u0524\5\u00c4c"+
		"\2\u04d5\u04d6\7\26\2\2\u04d6\u04d7\7\u00be\2\2\u04d7\u04d8\5\u00c4c\2"+
		"\u04d8\u04d9\7\u00c0\2\2\u04d9\u0524\3\2\2\2\u04da\u04db\7\22\2\2\u04db"+
		"\u04dc\7\u00be\2\2\u04dc\u04dd\5\u00c4c\2\u04dd\u04de\7\u00c0\2\2\u04de"+
		"\u0524\3\2\2\2\u04df\u0524\7x\2\2\u04e0\u0524\7y\2\2\u04e1\u04e2\7w\2"+
		"\2\u04e2\u04e3\7\u00be\2\2\u04e3\u04e4\5\u00c4c\2\u04e4\u04e5\7\u00bc"+
		"\2\2\u04e5\u04e6\5\u00c4c\2\u04e6\u04e7\7\u00c0\2\2\u04e7\u0524\3\2\2"+
		"\2\u04e8\u04e9\7l\2\2\u04e9\u04ea\7\u00be\2\2\u04ea\u04eb\5\u00c4c\2\u04eb"+
		"\u04ec\7\u00bc\2\2\u04ec\u04ed\5\u00c4c\2\u04ed\u04ee\7\u00bc\2\2\u04ee"+
		"\u04ef\5\u00c4c\2\u04ef\u04f0\7\u00be\2\2\u04f0\u0524\3\2\2\2\u04f1\u04f2"+
		"\7t\2\2\u04f2\u0524\5\u00c0a\2\u04f3\u04f4\7n\2\2\u04f4\u04f5\5\u00c4"+
		"c\2\u04f5\u04f6\7\u00bc\2\2\u04f6\u04f7\5\u00c4c\2\u04f7\u0524\3\2\2\2"+
		"\u04f8\u04f9\7]\2\2\u04f9\u0524\5\u00c4c\2\u04fa\u04fb\7`\2\2\u04fb\u0524"+
		"\5\u00c4c\2\u04fc\u04fd\7c\2\2\u04fd\u04fe\7\u00be\2\2\u04fe\u04ff\5\u00c0"+
		"a\2\u04ff\u0500\7\u00c0\2\2\u0500\u0524\3\2\2\2\u0501\u0502\7d\2\2\u0502"+
		"\u0503\7\u00be\2\2\u0503\u0504\5\u00c0a\2\u0504\u0505\7\u00c0\2\2\u0505"+
		"\u0524\3\2\2\2\u0506\u0507\7e\2\2\u0507\u0508\7\u00be\2\2\u0508\u0509"+
		"\5\u00c0a\2\u0509\u050a\7\u00c0\2\2\u050a\u0524\3\2\2\2\u050b\u050c\7"+
		"f\2\2\u050c\u0524\5\u00c4c\2\u050d\u050e\7\u0090\2\2\u050e\u0524\5\u00c0"+
		"a\2\u050f\u0510\7\u0091\2\2\u0510\u0524\5\u00c0a\2\u0511\u0512\7\u0092"+
		"\2\2\u0512\u0513\7\u00be\2\2\u0513\u0514\5\u00c0a\2\u0514\u0515\7\u00bc"+
		"\2\2\u0515\u0516\5\u00c0a\2\u0516\u0517\7\u00c0\2\2\u0517\u0524\3\2\2"+
		"\2\u0518\u0519\7\u0092\2\2\u0519\u051a\7\u00be\2\2\u051a\u051b\5\u00c0"+
		"a\2\u051b\u051c\7\u00bc\2\2\u051c\u051d\5\u00c0a\2\u051d\u051e\7\u00bc"+
		"\2\2\u051e\u051f\5\u00c4c\2\u051f\u0520\7\u00c0\2\2\u0520\u0524\3\2\2"+
		"\2\u0521\u0522\7\u0093\2\2\u0522\u0524\5\u00c0a\2\u0523\u0480\3\2\2\2"+
		"\u0523\u0481\3\2\2\2\u0523\u0482\3\2\2\2\u0523\u0483\3\2\2\2\u0523\u0484"+
		"\3\2\2\2\u0523\u0485\3\2\2\2\u0523\u0486\3\2\2\2\u0523\u0487\3\2\2\2\u0523"+
		"\u048c\3\2\2\2\u0523\u0491\3\2\2\2\u0523\u0496\3\2\2\2\u0523\u049b\3\2"+
		"\2\2\u0523\u04a0\3\2\2\2\u0523\u04a5\3\2\2\2\u0523\u04aa\3\2\2\2\u0523"+
		"\u04af\3\2\2\2\u0523\u04b4\3\2\2\2\u0523\u04b9\3\2\2\2\u0523\u04be\3\2"+
		"\2\2\u0523\u04c3\3\2\2\2\u0523\u04c8\3\2\2\2\u0523\u04cd\3\2\2\2\u0523"+
		"\u04d2\3\2\2\2\u0523\u04d3\3\2\2\2\u0523\u04d5\3\2\2\2\u0523\u04da\3\2"+
		"\2\2\u0523\u04df\3\2\2\2\u0523\u04e0\3\2\2\2\u0523\u04e1\3\2\2\2\u0523"+
		"\u04e8\3\2\2\2\u0523\u04f1\3\2\2\2\u0523\u04f3\3\2\2\2\u0523\u04f8\3\2"+
		"\2\2\u0523\u04fa\3\2\2\2\u0523\u04fc\3\2\2\2\u0523\u0501\3\2\2\2\u0523"+
		"\u0506\3\2\2\2\u0523\u050b\3\2\2\2\u0523\u050d\3\2\2\2\u0523\u050f\3\2"+
		"\2\2\u0523\u0511\3\2\2\2\u0523\u0518\3\2\2\2\u0523\u0521\3\2\2\2\u0524"+
		"\u00c3\3\2\2\2\u0525\u0526\bc\1\2\u0526\u0536\5\u008cG\2\u0527\u0536\5"+
		"\u00b2Z\2\u0528\u0529\7\u00be\2\2\u0529\u052a\5\u00c4c\2\u052a\u052b\7"+
		"\u00c0\2\2\u052b\u0536\3\2\2\2\u052c\u052d\7\u00ac\2\2\u052d\u0536\5\u00c4"+
		"c\r\u052e\u052f\7\u00a4\2\2\u052f\u0536\5\u00c4c\f\u0530\u0536\5\u00c2"+
		"b\2\u0531\u0532\5\u00c0a\2\u0532\u0533\t\7\2\2\u0533\u0534\5\u00c0a\2"+
		"\u0534\u0536\3\2\2\2\u0535\u0525\3\2\2\2\u0535\u0527\3\2\2\2\u0535\u0528"+
		"\3\2\2\2\u0535\u052c\3\2\2\2\u0535\u052e\3\2\2\2\u0535\u0530\3\2\2\2\u0535"+
		"\u0531\3\2\2\2\u0536\u054e\3\2\2\2\u0537\u0538\f\n\2\2\u0538\u0539\7\u00aa"+
		"\2\2\u0539\u054d\5\u00c4c\n\u053a\u053b\f\t\2\2\u053b\u053c\t\b\2\2\u053c"+
		"\u054d\5\u00c4c\n\u053d\u053e\f\b\2\2\u053e\u053f\t\t\2\2\u053f\u054d"+
		"\5\u00c4c\t\u0540\u0541\f\7\2\2\u0541\u0542\t\6\2\2\u0542\u054d\5\u00c4"+
		"c\b\u0543\u0544\f\6\2\2\u0544\u0545\t\n\2\2\u0545\u054d\5\u00c4c\7\u0546"+
		"\u0547\f\5\2\2\u0547\u0548\t\7\2\2\u0548\u054d\5\u00c4c\6\u0549\u054a"+
		"\f\3\2\2\u054a\u054b\t\13\2\2\u054b\u054d\5\u00c4c\4\u054c\u0537\3\2\2"+
		"\2\u054c\u053a\3\2\2\2\u054c\u053d\3\2\2\2\u054c\u0540\3\2\2\2\u054c\u0543"+
		"\3\2\2\2\u054c\u0546\3\2\2\2\u054c\u0549\3\2\2\2\u054d\u0550\3\2\2\2\u054e"+
		"\u054c\3\2\2\2\u054e\u054f\3\2\2\2\u054f\u00c5\3\2\2\2\u0550\u054e\3\2"+
		"\2\2\u0551\u0552\t\f\2\2\u0552\u00c7\3\2\2\2\u0553\u0554\t\r\2\2\u0554"+
		"\u00c9\3\2\2\2]\u00cd\u00d4\u00d7\u00db\u00e0\u00e3\u00e7\u00ec\u00f2"+
		"\u00f8\u00fb\u0105\u0120\u012b\u012f\u013c\u0140\u0148\u014f\u0155\u015f"+
		"\u0167\u0170\u0177\u0184\u018d\u0196\u019d\u019f\u01a4\u01a7\u01b3\u01bc"+
		"\u01c6\u01dc\u01f2\u01f8\u01fe\u0229\u0230\u0243\u025e\u026b\u0276\u0286"+
		"\u0299\u02b7\u02e8\u031d\u0327\u032c\u0335\u033e\u0351\u0357\u035d\u0368"+
		"\u036f\u037d\u0382\u0386\u0396\u039c\u03b7\u03c0\u03cc\u03d3\u03d7\u03dc"+
		"\u03e1\u03e9\u03f1\u03f5\u03ff\u0404\u0409\u040c\u040f\u0417\u041b\u041f"+
		"\u0426\u0429\u0432\u046a\u0476\u047d\u0523\u0535\u054c\u054e";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}