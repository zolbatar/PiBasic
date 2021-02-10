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
		BGETH=64, BPUTH=65, CLOSEH=66, EOFH=67, GETSH=68, LISTFILES=69, OPENIN=70, 
		OPENOUT=71, OPENUP=72, PTRH=73, BANKED=74, CIRCLE=75, CLS=76, CLIPON=77, 
		CLIPOFF=78, COLOUR=79, COLOURBG=80, CREATEFONT=81, FILL=82, FLIP=83, SHOWFPS=84, 
		GRAPHICS=85, LINE=86, LOADTYPEFACE=87, RECTANGLE=88, PLOT=89, POINT=90, 
		SCREENWIDTH=91, SCREENHEIGHT=92, SHADED=93, TEXT=94, TEXTRIGHT=95, TEXTCENTRE=96, 
		TEXTCENTER=97, TRIANGLE=98, TIME=99, PI=100, SQR=101, LN=102, LOG=103, 
		EXP=104, ATN=105, TAN=106, COS=107, SIN=108, ABS=109, ACS=110, ASN=111, 
		DEG=112, RAD=113, SGN=114, ASC=115, LEN=116, INSTR=117, VAL=118, TIMES=119, 
		STRS=120, STRINGS=121, CHRS=122, LEFTS=123, MIDS=124, RIGHTS=125, RND=126, 
		RND0=127, RND1=128, EQ=129, NE=130, GT=131, GE=132, LT=133, LE=134, NOT=135, 
		AND=136, OR=137, EOR=138, MOD=139, DIV=140, HAT=141, PLUS=142, MINUS=143, 
		MULTIPLY=144, DIVIDE=145, SHL=146, SHR=147, PLUS_E=148, MINUS_E=149, MULTIPLY_E=150, 
		DIVIDE_E=151, SHL_E=152, SHR_E=153, NEWLINE=154, TICK=155, TILDE=156, 
		HASH=157, COLON=158, COMMA=159, DOLLAR=160, LPAREN=161, PERCENT=162, RPAREN=163, 
		SEMICOLON=164, UNDERSCORE=165, COMMENT=166, STRINGLITERAL=167, PROC_NAME=168, 
		FN_INTEGER=169, FN_FLOAT=170, FN_STRING=171, VARIABLE_FLOAT=172, VARIABLE_INTEGER=173, 
		VARIABLE_STRING=174, VARIABLE_TYPE=175, NAME=176, HEXNUMBER=177, BINARYNUMBER=178, 
		NUMBER=179, FLOAT=180, WS=181;
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
		RULE_numFunc = 96, RULE_numExpr = 97, RULE_numColours = 98;
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
			"string", "strExpr", "numFunc", "numExpr", "numColours"
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
			null, null, null, null, null, null, null, null, null, "'='", "'<>'", 
			"'>'", "'>='", "'<'", "'<='", null, null, null, null, null, null, "'^'", 
			"'+'", "'-'", "'*'", "'/'", "'<<'", "'>>'", "'+='", "'-='", "'*='", "'/='", 
			"'<<='", "'>>='", null, "'''", "'~'", "'#'", "':'", "','", "'$'", "'('", 
			"'%'", "')'", "';'", "'_'"
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
			"CYAN", "WHITE", "BLACK", "BGETH", "BPUTH", "CLOSEH", "EOFH", "GETSH", 
			"LISTFILES", "OPENIN", "OPENOUT", "OPENUP", "PTRH", "BANKED", "CIRCLE", 
			"CLS", "CLIPON", "CLIPOFF", "COLOUR", "COLOURBG", "CREATEFONT", "FILL", 
			"FLIP", "SHOWFPS", "GRAPHICS", "LINE", "LOADTYPEFACE", "RECTANGLE", "PLOT", 
			"POINT", "SCREENWIDTH", "SCREENHEIGHT", "SHADED", "TEXT", "TEXTRIGHT", 
			"TEXTCENTRE", "TEXTCENTER", "TRIANGLE", "TIME", "PI", "SQR", "LN", "LOG", 
			"EXP", "ATN", "TAN", "COS", "SIN", "ABS", "ACS", "ASN", "DEG", "RAD", 
			"SGN", "ASC", "LEN", "INSTR", "VAL", "TIMES", "STRS", "STRINGS", "CHRS", 
			"LEFTS", "MIDS", "RIGHTS", "RND", "RND0", "RND1", "EQ", "NE", "GT", "GE", 
			"LT", "LE", "NOT", "AND", "OR", "EOR", "MOD", "DIV", "HAT", "PLUS", "MINUS", 
			"MULTIPLY", "DIVIDE", "SHL", "SHR", "PLUS_E", "MINUS_E", "MULTIPLY_E", 
			"DIVIDE_E", "SHL_E", "SHR_E", "NEWLINE", "TICK", "TILDE", "HASH", "COLON", 
			"COMMA", "DOLLAR", "LPAREN", "PERCENT", "RPAREN", "SEMICOLON", "UNDERSCORE", 
			"COMMENT", "STRINGLITERAL", "PROC_NAME", "FN_INTEGER", "FN_FLOAT", "FN_STRING", 
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
			setState(201);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (BPUTH - 64)) | (1L << (CLOSEH - 64)) | (1L << (PTRH - 64)) | (1L << (CIRCLE - 64)) | (1L << (CLS - 64)) | (1L << (CLIPON - 64)) | (1L << (CLIPOFF - 64)) | (1L << (COLOUR - 64)) | (1L << (COLOURBG - 64)) | (1L << (FLIP - 64)) | (1L << (SHOWFPS - 64)) | (1L << (GRAPHICS - 64)) | (1L << (LINE - 64)) | (1L << (RECTANGLE - 64)) | (1L << (PLOT - 64)) | (1L << (TEXT - 64)) | (1L << (TEXTRIGHT - 64)) | (1L << (TEXTCENTRE - 64)) | (1L << (TEXTCENTER - 64)) | (1L << (TRIANGLE - 64)))) != 0) || ((((_la - 154)) & ~0x3f) == 0 && ((1L << (_la - 154)) & ((1L << (NEWLINE - 154)) | (1L << (COLON - 154)) | (1L << (COMMENT - 154)) | (1L << (PROC_NAME - 154)) | (1L << (FN_INTEGER - 154)) | (1L << (FN_FLOAT - 154)) | (1L << (FN_STRING - 154)) | (1L << (VARIABLE_FLOAT - 154)) | (1L << (VARIABLE_INTEGER - 154)) | (1L << (VARIABLE_STRING - 154)) | (1L << (VARIABLE_TYPE - 154)) | (1L << (NUMBER - 154)))) != 0)) {
				{
				{
				setState(198);
				line();
				}
				}
				setState(203);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(204);
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
			setState(227);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(206);
				match(NEWLINE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(208);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(207);
					linenumber();
					}
				}

				setState(211);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REM || _la==COMMENT) {
					{
					setState(210);
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

				setState(213);
				match(NEWLINE);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(215);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(214);
					linenumber();
					}
				}

				setState(218); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(217);
					stmt();
					}
					}
					setState(220); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (BPUTH - 64)) | (1L << (CLOSEH - 64)) | (1L << (PTRH - 64)) | (1L << (CIRCLE - 64)) | (1L << (CLS - 64)) | (1L << (CLIPON - 64)) | (1L << (CLIPOFF - 64)) | (1L << (COLOUR - 64)) | (1L << (COLOURBG - 64)) | (1L << (FLIP - 64)) | (1L << (SHOWFPS - 64)) | (1L << (GRAPHICS - 64)) | (1L << (LINE - 64)) | (1L << (RECTANGLE - 64)) | (1L << (PLOT - 64)) | (1L << (TEXT - 64)) | (1L << (TEXTRIGHT - 64)) | (1L << (TEXTCENTRE - 64)) | (1L << (TEXTCENTER - 64)) | (1L << (TRIANGLE - 64)))) != 0) || ((((_la - 158)) & ~0x3f) == 0 && ((1L << (_la - 158)) & ((1L << (COLON - 158)) | (1L << (PROC_NAME - 158)) | (1L << (FN_INTEGER - 158)) | (1L << (FN_FLOAT - 158)) | (1L << (FN_STRING - 158)) | (1L << (VARIABLE_FLOAT - 158)) | (1L << (VARIABLE_INTEGER - 158)) | (1L << (VARIABLE_STRING - 158)) | (1L << (VARIABLE_TYPE - 158)))) != 0) );
				setState(223);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REM || _la==COMMENT) {
					{
					setState(222);
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

				setState(225);
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
			setState(232);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(229);
					stmt();
					}
					} 
				}
				setState(234);
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
			setState(247);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(238);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (BPUTH - 64)) | (1L << (CLOSEH - 64)) | (1L << (PTRH - 64)) | (1L << (CIRCLE - 64)) | (1L << (CLS - 64)) | (1L << (CLIPON - 64)) | (1L << (CLIPOFF - 64)) | (1L << (COLOUR - 64)) | (1L << (COLOURBG - 64)) | (1L << (FLIP - 64)) | (1L << (SHOWFPS - 64)) | (1L << (GRAPHICS - 64)) | (1L << (LINE - 64)) | (1L << (RECTANGLE - 64)) | (1L << (PLOT - 64)) | (1L << (TEXT - 64)) | (1L << (TEXTRIGHT - 64)) | (1L << (TEXTCENTRE - 64)) | (1L << (TEXTCENTER - 64)) | (1L << (TRIANGLE - 64)))) != 0) || ((((_la - 158)) & ~0x3f) == 0 && ((1L << (_la - 158)) & ((1L << (COLON - 158)) | (1L << (PROC_NAME - 158)) | (1L << (FN_INTEGER - 158)) | (1L << (FN_FLOAT - 158)) | (1L << (FN_STRING - 158)) | (1L << (VARIABLE_FLOAT - 158)) | (1L << (VARIABLE_INTEGER - 158)) | (1L << (VARIABLE_STRING - 158)) | (1L << (VARIABLE_TYPE - 158)))) != 0)) {
					{
					{
					setState(235);
					stmt();
					}
					}
					setState(240);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(244);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (BPUTH - 64)) | (1L << (CLOSEH - 64)) | (1L << (PTRH - 64)) | (1L << (CIRCLE - 64)) | (1L << (CLS - 64)) | (1L << (CLIPON - 64)) | (1L << (CLIPOFF - 64)) | (1L << (COLOUR - 64)) | (1L << (COLOURBG - 64)) | (1L << (FLIP - 64)) | (1L << (SHOWFPS - 64)) | (1L << (GRAPHICS - 64)) | (1L << (LINE - 64)) | (1L << (RECTANGLE - 64)) | (1L << (PLOT - 64)) | (1L << (TEXT - 64)) | (1L << (TEXTRIGHT - 64)) | (1L << (TEXTCENTRE - 64)) | (1L << (TEXTCENTER - 64)) | (1L << (TRIANGLE - 64)))) != 0) || ((((_la - 154)) & ~0x3f) == 0 && ((1L << (_la - 154)) & ((1L << (NEWLINE - 154)) | (1L << (COLON - 154)) | (1L << (COMMENT - 154)) | (1L << (PROC_NAME - 154)) | (1L << (FN_INTEGER - 154)) | (1L << (FN_FLOAT - 154)) | (1L << (FN_STRING - 154)) | (1L << (VARIABLE_FLOAT - 154)) | (1L << (VARIABLE_INTEGER - 154)) | (1L << (VARIABLE_STRING - 154)) | (1L << (VARIABLE_TYPE - 154)) | (1L << (NUMBER - 154)))) != 0)) {
					{
					{
					setState(241);
					line();
					}
					}
					setState(246);
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
			setState(249);
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
			setState(257);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(251);
				match(COLON);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(252);
				coreStmt();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(253);
				keyMouseStmt();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(254);
				stmtOperatorEqual();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(255);
				ioStmt();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(256);
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
			setState(284);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(259);
				stmtBREAKPOINT();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(260);
				stmtCASE();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(261);
				stmtCHAIN();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(262);
				stmtDATA();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(263);
				stmtDIM();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(264);
				stmtEND();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(265);
				stmtRETURN();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(266);
				stmtDEFFN();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(267);
				stmtDEFPROC();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(268);
				stmtFOR();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(269);
				stmtFORIN();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(270);
				stmtCallFN();
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(271);
				stmtIF();
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(272);
				stmtIFMultiline();
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(273);
				stmtLET();
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(274);
				stmtOSCLI();
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(275);
				stmtCallPROC();
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(276);
				stmtREAD();
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(277);
				stmtRESTORE();
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(278);
				stmtSWAP();
				}
				break;
			case 21:
				enterOuterAlt(_localctx, 21);
				{
				setState(279);
				stmtTRACEON();
				}
				break;
			case 22:
				enterOuterAlt(_localctx, 22);
				{
				setState(280);
				stmtTRACEOFF();
				}
				break;
			case 23:
				enterOuterAlt(_localctx, 23);
				{
				setState(281);
				stmtTYPE();
				}
				break;
			case 24:
				enterOuterAlt(_localctx, 24);
				{
				setState(282);
				stmtREPEAT();
				}
				break;
			case 25:
				enterOuterAlt(_localctx, 25);
				{
				setState(283);
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
			setState(286);
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
			setState(288);
			match(CASE);
			setState(289);
			expr();
			setState(290);
			match(OF);
			setState(291);
			match(NEWLINE);
			setState(293); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(292);
				when();
				}
				}
				setState(295); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==WHEN );
			setState(299);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==OTHERWISE) {
				{
				setState(297);
				match(OTHERWISE);
				setState(298);
				body();
				}
			}

			setState(301);
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
			setState(303);
			match(CHAIN);
			setState(304);
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
			setState(306);
			match(DATA);
			setState(307);
			literal();
			setState(312);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(308);
				match(COMMA);
				setState(309);
				literal();
				}
				}
				setState(314);
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
			setState(316);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(315);
				match(LOCAL);
				}
			}

			setState(318);
			match(DIM);
			setState(319);
			varDeclWithDimension();
			setState(324);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(320);
				match(COMMA);
				setState(321);
				varDeclWithDimension();
				}
				}
				setState(326);
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
			setState(327);
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
			setState(329);
			match(RETURN);
			setState(331);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				{
				setState(330);
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
			setState(333);
			match(DEF);
			setState(334);
			fnName();
			setState(335);
			match(LPAREN);
			setState(337);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN || ((((_la - 172)) & ~0x3f) == 0 && ((1L << (_la - 172)) & ((1L << (VARIABLE_FLOAT - 172)) | (1L << (VARIABLE_INTEGER - 172)) | (1L << (VARIABLE_STRING - 172)))) != 0)) {
				{
				setState(336);
				functionVarList();
				}
			}

			setState(339);
			match(RPAREN);
			setState(340);
			body();
			setState(341);
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
			setState(343);
			match(DEF);
			setState(344);
			match(PROC_NAME);
			setState(345);
			match(LPAREN);
			setState(347);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN || ((((_la - 172)) & ~0x3f) == 0 && ((1L << (_la - 172)) & ((1L << (VARIABLE_FLOAT - 172)) | (1L << (VARIABLE_INTEGER - 172)) | (1L << (VARIABLE_STRING - 172)))) != 0)) {
				{
				setState(346);
				functionVarList();
				}
			}

			setState(349);
			match(RPAREN);
			setState(350);
			body();
			setState(351);
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
			setState(353);
			match(FOR);
			setState(355);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(354);
				match(LOCAL);
				}
			}

			setState(357);
			justNumberVar();
			setState(358);
			match(EQ);
			setState(359);
			numExpr(0);
			setState(360);
			match(TO);
			setState(361);
			numExpr(0);
			setState(364);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==STEP) {
				{
				setState(362);
				match(STEP);
				setState(363);
				numExpr(0);
				}
			}

			setState(366);
			body();
			setState(367);
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
			setState(369);
			match(FOR);
			setState(371);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(370);
				match(LOCAL);
				}
			}

			setState(373);
			justVar();
			setState(374);
			match(IN);
			setState(375);
			justVar();
			setState(376);
			match(LPAREN);
			setState(377);
			match(RPAREN);
			setState(378);
			body();
			setState(379);
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
			setState(381);
			fnName();
			setState(382);
			match(LPAREN);
			setState(384);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (POINT - 64)) | (1L << (SCREENWIDTH - 64)) | (1L << (SCREENHEIGHT - 64)) | (1L << (TIME - 64)) | (1L << (PI - 64)) | (1L << (SQR - 64)) | (1L << (LN - 64)) | (1L << (LOG - 64)) | (1L << (EXP - 64)) | (1L << (ATN - 64)) | (1L << (TAN - 64)) | (1L << (COS - 64)) | (1L << (SIN - 64)) | (1L << (ABS - 64)) | (1L << (ACS - 64)) | (1L << (ASN - 64)) | (1L << (DEG - 64)) | (1L << (RAD - 64)) | (1L << (SGN - 64)) | (1L << (ASC - 64)) | (1L << (LEN - 64)) | (1L << (INSTR - 64)) | (1L << (VAL - 64)) | (1L << (TIMES - 64)) | (1L << (STRS - 64)) | (1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (RND1 - 128)) | (1L << (NOT - 128)) | (1L << (PLUS - 128)) | (1L << (MINUS - 128)) | (1L << (LPAREN - 128)) | (1L << (STRINGLITERAL - 128)) | (1L << (FN_INTEGER - 128)) | (1L << (FN_FLOAT - 128)) | (1L << (FN_STRING - 128)) | (1L << (VARIABLE_FLOAT - 128)) | (1L << (VARIABLE_INTEGER - 128)) | (1L << (VARIABLE_STRING - 128)) | (1L << (VARIABLE_TYPE - 128)) | (1L << (HEXNUMBER - 128)) | (1L << (BINARYNUMBER - 128)) | (1L << (NUMBER - 128)) | (1L << (FLOAT - 128)))) != 0)) {
				{
				setState(383);
				functionParList();
				}
			}

			setState(386);
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
			setState(388);
			match(IF);
			setState(389);
			expr();
			setState(390);
			((StmtIFContext)_localctx).t = content();
			setState(393);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
			case 1:
				{
				setState(391);
				match(ELSE);
				setState(392);
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
			setState(395);
			match(IF);
			setState(396);
			expr();
			setState(397);
			match(THEN);
			setState(398);
			match(NEWLINE);
			setState(400); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(399);
				((StmtIFMultilineContext)_localctx).t = line();
				}
				}
				setState(402); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (BPUTH - 64)) | (1L << (CLOSEH - 64)) | (1L << (PTRH - 64)) | (1L << (CIRCLE - 64)) | (1L << (CLS - 64)) | (1L << (CLIPON - 64)) | (1L << (CLIPOFF - 64)) | (1L << (COLOUR - 64)) | (1L << (COLOURBG - 64)) | (1L << (FLIP - 64)) | (1L << (SHOWFPS - 64)) | (1L << (GRAPHICS - 64)) | (1L << (LINE - 64)) | (1L << (RECTANGLE - 64)) | (1L << (PLOT - 64)) | (1L << (TEXT - 64)) | (1L << (TEXTRIGHT - 64)) | (1L << (TEXTCENTRE - 64)) | (1L << (TEXTCENTER - 64)) | (1L << (TRIANGLE - 64)))) != 0) || ((((_la - 154)) & ~0x3f) == 0 && ((1L << (_la - 154)) & ((1L << (NEWLINE - 154)) | (1L << (COLON - 154)) | (1L << (COMMENT - 154)) | (1L << (PROC_NAME - 154)) | (1L << (FN_INTEGER - 154)) | (1L << (FN_FLOAT - 154)) | (1L << (FN_STRING - 154)) | (1L << (VARIABLE_FLOAT - 154)) | (1L << (VARIABLE_INTEGER - 154)) | (1L << (VARIABLE_STRING - 154)) | (1L << (VARIABLE_TYPE - 154)) | (1L << (NUMBER - 154)))) != 0) );
			setState(411);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ELSE) {
				{
				setState(404);
				match(ELSE);
				setState(405);
				match(NEWLINE);
				setState(407); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(406);
					((StmtIFMultilineContext)_localctx).f = line();
					}
					}
					setState(409); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (BPUTH - 64)) | (1L << (CLOSEH - 64)) | (1L << (PTRH - 64)) | (1L << (CIRCLE - 64)) | (1L << (CLS - 64)) | (1L << (CLIPON - 64)) | (1L << (CLIPOFF - 64)) | (1L << (COLOUR - 64)) | (1L << (COLOURBG - 64)) | (1L << (FLIP - 64)) | (1L << (SHOWFPS - 64)) | (1L << (GRAPHICS - 64)) | (1L << (LINE - 64)) | (1L << (RECTANGLE - 64)) | (1L << (PLOT - 64)) | (1L << (TEXT - 64)) | (1L << (TEXTRIGHT - 64)) | (1L << (TEXTCENTRE - 64)) | (1L << (TEXTCENTER - 64)) | (1L << (TRIANGLE - 64)))) != 0) || ((((_la - 154)) & ~0x3f) == 0 && ((1L << (_la - 154)) & ((1L << (NEWLINE - 154)) | (1L << (COLON - 154)) | (1L << (COMMENT - 154)) | (1L << (PROC_NAME - 154)) | (1L << (FN_INTEGER - 154)) | (1L << (FN_FLOAT - 154)) | (1L << (FN_STRING - 154)) | (1L << (VARIABLE_FLOAT - 154)) | (1L << (VARIABLE_INTEGER - 154)) | (1L << (VARIABLE_STRING - 154)) | (1L << (VARIABLE_TYPE - 154)) | (1L << (NUMBER - 154)))) != 0) );
				}
			}

			setState(413);
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
			setState(419);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case GLOBAL:
			case LET:
			case VARIABLE_FLOAT:
			case VARIABLE_INTEGER:
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(416);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==GLOBAL || _la==LET) {
					{
					setState(415);
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
				setState(418);
				match(LOCAL);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(421);
			varDecl();
			setState(422);
			match(EQ);
			setState(423);
			expr();
			setState(431);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(424);
				match(COMMA);
				setState(425);
				varDecl();
				setState(426);
				match(EQ);
				setState(427);
				expr();
				}
				}
				setState(433);
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
			setState(434);
			match(OSCLI);
			setState(435);
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
			setState(437);
			match(PROC_NAME);
			setState(438);
			match(LPAREN);
			setState(440);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (POINT - 64)) | (1L << (SCREENWIDTH - 64)) | (1L << (SCREENHEIGHT - 64)) | (1L << (TIME - 64)) | (1L << (PI - 64)) | (1L << (SQR - 64)) | (1L << (LN - 64)) | (1L << (LOG - 64)) | (1L << (EXP - 64)) | (1L << (ATN - 64)) | (1L << (TAN - 64)) | (1L << (COS - 64)) | (1L << (SIN - 64)) | (1L << (ABS - 64)) | (1L << (ACS - 64)) | (1L << (ASN - 64)) | (1L << (DEG - 64)) | (1L << (RAD - 64)) | (1L << (SGN - 64)) | (1L << (ASC - 64)) | (1L << (LEN - 64)) | (1L << (INSTR - 64)) | (1L << (VAL - 64)) | (1L << (TIMES - 64)) | (1L << (STRS - 64)) | (1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (RND1 - 128)) | (1L << (NOT - 128)) | (1L << (PLUS - 128)) | (1L << (MINUS - 128)) | (1L << (LPAREN - 128)) | (1L << (STRINGLITERAL - 128)) | (1L << (FN_INTEGER - 128)) | (1L << (FN_FLOAT - 128)) | (1L << (FN_STRING - 128)) | (1L << (VARIABLE_FLOAT - 128)) | (1L << (VARIABLE_INTEGER - 128)) | (1L << (VARIABLE_STRING - 128)) | (1L << (VARIABLE_TYPE - 128)) | (1L << (HEXNUMBER - 128)) | (1L << (BINARYNUMBER - 128)) | (1L << (NUMBER - 128)) | (1L << (FLOAT - 128)))) != 0)) {
				{
				setState(439);
				functionParList();
				}
			}

			setState(442);
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
			setState(444);
			match(READ);
			setState(445);
			varDecl();
			setState(450);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(446);
				match(COMMA);
				setState(447);
				varDecl();
				}
				}
				setState(452);
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
			setState(453);
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
			setState(455);
			match(SWAP);
			setState(456);
			justVar();
			setState(457);
			match(COMMA);
			setState(458);
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
			setState(460);
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
			setState(462);
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
			setState(464);
			match(TYPE);
			setState(465);
			varName();
			setState(466);
			match(LPAREN);
			setState(467);
			justVar();
			setState(472);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(468);
				match(COMMA);
				setState(469);
				justVar();
				}
				}
				setState(474);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(475);
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
			setState(477);
			match(REPEAT);
			setState(478);
			body();
			setState(479);
			match(UNTIL);
			setState(480);
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
			setState(482);
			match(WHILE);
			setState(483);
			expr();
			setState(484);
			body();
			setState(485);
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
			setState(494);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INPUT:
				enterOuterAlt(_localctx, 1);
				{
				setState(487);
				stmtINPUT();
				}
				break;
			case PRINT:
				enterOuterAlt(_localctx, 2);
				{
				setState(488);
				stmtPRINT();
				}
				break;
			case MOUSE:
				enterOuterAlt(_localctx, 3);
				{
				setState(489);
				stmtMOUSE();
				}
				break;
			case INKEY:
				enterOuterAlt(_localctx, 4);
				{
				setState(490);
				stmtINKEY();
				}
				break;
			case INKEYS:
				enterOuterAlt(_localctx, 5);
				{
				setState(491);
				stmtINKEYS();
				}
				break;
			case GET:
				enterOuterAlt(_localctx, 6);
				{
				setState(492);
				stmtGET();
				}
				break;
			case GETS:
				enterOuterAlt(_localctx, 7);
				{
				setState(493);
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
			setState(496);
			match(INPUT);
			setState(500);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,36,_ctx) ) {
			case 1:
				{
				setState(497);
				strExpr(0);
				setState(498);
				match(COMMA);
				}
				break;
			}
			setState(502);
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
			setState(504);
			match(PRINT);
			setState(506);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,37,_ctx) ) {
			case 1:
				{
				setState(505);
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
			setState(508);
			match(MOUSE);
			setState(509);
			varNameInteger();
			setState(510);
			match(COMMA);
			setState(511);
			varNameInteger();
			setState(512);
			match(COMMA);
			setState(513);
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
			setState(515);
			match(INKEY);
			setState(516);
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
			setState(518);
			match(INKEYS);
			setState(519);
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
			setState(521);
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
			setState(523);
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
			setState(549);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(525);
				varDecl();
				setState(526);
				match(MULTIPLY_E);
				setState(527);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(529);
				varDecl();
				setState(530);
				match(DIVIDE_E);
				setState(531);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(533);
				varDecl();
				setState(534);
				match(PLUS_E);
				setState(535);
				numExpr(0);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(537);
				varDecl();
				setState(538);
				match(MINUS_E);
				setState(539);
				numExpr(0);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(541);
				varDecl();
				setState(542);
				match(SHL_E);
				setState(543);
				numExpr(0);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(545);
				varDecl();
				setState(546);
				match(SHR_E);
				setState(547);
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
			setState(556);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BPUTH:
				enterOuterAlt(_localctx, 1);
				{
				setState(551);
				stmtBPUTH();
				}
				break;
			case BGETH:
				enterOuterAlt(_localctx, 2);
				{
				setState(552);
				stmtBGETH();
				}
				break;
			case PTRH:
				enterOuterAlt(_localctx, 3);
				{
				setState(553);
				stmtPTRH();
				}
				break;
			case CLOSEH:
				enterOuterAlt(_localctx, 4);
				{
				setState(554);
				stmtCLOSEH();
				}
				break;
			case LOCAL:
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 5);
				{
				setState(555);
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
			setState(558);
			match(BPUTH);
			setState(559);
			numExpr(0);
			setState(560);
			match(COMMA);
			setState(561);
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
			setState(563);
			match(BGETH);
			setState(564);
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
			setState(566);
			match(PTRH);
			setState(567);
			numExpr(0);
			setState(568);
			match(EQ);
			setState(569);
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
			setState(571);
			match(CLOSEH);
			setState(572);
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
			setState(575);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(574);
				match(LOCAL);
				}
			}

			setState(577);
			varNameString();
			setState(578);
			match(LPAREN);
			setState(579);
			match(RPAREN);
			setState(580);
			match(EQ);
			setState(581);
			match(LISTFILES);
			setState(582);
			match(LPAREN);
			setState(583);
			strExpr(0);
			setState(584);
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
			setState(602);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CLS:
				enterOuterAlt(_localctx, 1);
				{
				setState(586);
				stmtCLS();
				}
				break;
			case COLOUR:
				enterOuterAlt(_localctx, 2);
				{
				setState(587);
				stmtCOLOUR();
				}
				break;
			case COLOURBG:
				enterOuterAlt(_localctx, 3);
				{
				setState(588);
				stmtCOLOURBG();
				}
				break;
			case GRAPHICS:
				enterOuterAlt(_localctx, 4);
				{
				setState(589);
				stmtGRAPHICS();
				}
				break;
			case FLIP:
				enterOuterAlt(_localctx, 5);
				{
				setState(590);
				stmtFLIP();
				}
				break;
			case CIRCLE:
				enterOuterAlt(_localctx, 6);
				{
				setState(591);
				stmtCIRCLE();
				}
				break;
			case LINE:
				enterOuterAlt(_localctx, 7);
				{
				setState(592);
				stmtLINE();
				}
				break;
			case RECTANGLE:
				enterOuterAlt(_localctx, 8);
				{
				setState(593);
				stmtRECTANGLE();
				}
				break;
			case TRIANGLE:
				enterOuterAlt(_localctx, 9);
				{
				setState(594);
				stmtTRIANGLE();
				}
				break;
			case PLOT:
				enterOuterAlt(_localctx, 10);
				{
				setState(595);
				stmtPLOT();
				}
				break;
			case CLIPON:
				enterOuterAlt(_localctx, 11);
				{
				setState(596);
				stmtCLIPON();
				}
				break;
			case CLIPOFF:
				enterOuterAlt(_localctx, 12);
				{
				setState(597);
				stmtCLIPOFF();
				}
				break;
			case TEXT:
				enterOuterAlt(_localctx, 13);
				{
				setState(598);
				stmtTEXT();
				}
				break;
			case TEXTRIGHT:
				enterOuterAlt(_localctx, 14);
				{
				setState(599);
				stmtTEXTRIGHT();
				}
				break;
			case TEXTCENTRE:
			case TEXTCENTER:
				enterOuterAlt(_localctx, 15);
				{
				setState(600);
				stmtTEXTCENTRE();
				}
				break;
			case SHOWFPS:
				enterOuterAlt(_localctx, 16);
				{
				setState(601);
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
			setState(604);
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
			setState(615);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,42,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(606);
				match(COLOUR);
				setState(607);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(608);
				match(COLOUR);
				setState(609);
				numExpr(0);
				setState(610);
				match(COMMA);
				setState(611);
				numExpr(0);
				setState(612);
				match(COMMA);
				setState(613);
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
			setState(626);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(617);
				match(COLOURBG);
				setState(618);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(619);
				match(COLOURBG);
				setState(620);
				numExpr(0);
				setState(621);
				match(COMMA);
				setState(622);
				numExpr(0);
				setState(623);
				match(COMMA);
				setState(624);
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
			setState(642);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,44,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(628);
				match(GRAPHICS);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(629);
				match(GRAPHICS);
				setState(630);
				numExpr(0);
				setState(631);
				match(COMMA);
				setState(632);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(634);
				match(GRAPHICS);
				setState(635);
				match(BANKED);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(636);
				match(GRAPHICS);
				setState(637);
				match(BANKED);
				setState(638);
				numExpr(0);
				setState(639);
				match(COMMA);
				setState(640);
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
			setState(644);
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
			setState(661);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,45,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(646);
				match(CIRCLE);
				setState(647);
				numExpr(0);
				setState(648);
				match(COMMA);
				setState(649);
				numExpr(0);
				setState(650);
				match(COMMA);
				setState(651);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(653);
				match(CIRCLE);
				setState(654);
				match(FILL);
				setState(655);
				numExpr(0);
				setState(656);
				match(COMMA);
				setState(657);
				numExpr(0);
				setState(658);
				match(COMMA);
				setState(659);
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
			setState(663);
			match(LINE);
			setState(664);
			numExpr(0);
			setState(665);
			match(COMMA);
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
			}
		}
		catch (RecognitionException re) {
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
			setState(691);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,46,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(672);
				match(RECTANGLE);
				setState(673);
				numExpr(0);
				setState(674);
				match(COMMA);
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
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(681);
				match(RECTANGLE);
				setState(682);
				match(FILL);
				setState(683);
				numExpr(0);
				setState(684);
				match(COMMA);
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
			setState(740);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,47,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(693);
				match(TRIANGLE);
				setState(694);
				numExpr(0);
				setState(695);
				match(COMMA);
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
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(706);
				match(TRIANGLE);
				setState(707);
				match(FILL);
				setState(708);
				numExpr(0);
				setState(709);
				match(COMMA);
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
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(720);
				match(TRIANGLE);
				setState(721);
				match(SHADED);
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
			setState(742);
			match(PLOT);
			setState(743);
			numExpr(0);
			setState(744);
			match(COMMA);
			setState(745);
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
			setState(747);
			match(CLIPON);
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
			setState(753);
			match(COMMA);
			setState(754);
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
			setState(756);
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
			setState(758);
			match(TEXT);
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
			setState(764);
			match(COMMA);
			setState(765);
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
			setState(767);
			match(TEXTRIGHT);
			setState(768);
			numExpr(0);
			setState(769);
			match(COMMA);
			setState(770);
			numExpr(0);
			setState(771);
			match(COMMA);
			setState(772);
			numExpr(0);
			setState(773);
			match(COMMA);
			setState(774);
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
			setState(776);
			_la = _input.LA(1);
			if ( !(_la==TEXTCENTRE || _la==TEXTCENTER) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(777);
			numExpr(0);
			setState(778);
			match(COMMA);
			setState(779);
			numExpr(0);
			setState(780);
			match(COMMA);
			setState(781);
			numExpr(0);
			setState(782);
			match(COMMA);
			setState(783);
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
			setState(785);
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
			setState(787);
			match(WHEN);
			setState(788);
			expr();
			setState(793);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(789);
				match(COMMA);
				setState(790);
				expr();
				}
				}
				setState(795);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(796);
			match(COLON);
			setState(797);
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
			setState(799);
			_la = _input.LA(1);
			if ( !(((((_la - 169)) & ~0x3f) == 0 && ((1L << (_la - 169)) & ((1L << (FN_INTEGER - 169)) | (1L << (FN_FLOAT - 169)) | (1L << (FN_STRING - 169)))) != 0)) ) {
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
			setState(803);
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
				setState(801);
				number();
				}
				break;
			case STRINGLITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(802);
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
			setState(808);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,50,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(805);
				numVar();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(806);
				strVar();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(807);
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
			setState(810);
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
			setState(868);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,56,_ctx) ) {
			case 1:
				_localctx = new NumVarFloatArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(812);
				varName();
				setState(813);
				match(LPAREN);
				setState(814);
				numExpr(0);
				setState(817);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(815);
					match(COMMA);
					setState(816);
					numExpr(0);
					}
				}

				setState(819);
				match(RPAREN);
				}
				break;
			case 2:
				_localctx = new NumVarIntegerArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(821);
				varNameInteger();
				setState(822);
				match(LPAREN);
				setState(823);
				numExpr(0);
				setState(826);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(824);
					match(COMMA);
					setState(825);
					numExpr(0);
					}
				}

				setState(828);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new NumVarIntegerFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(830);
				typeVar();
				setState(831);
				match(LPAREN);
				setState(832);
				numExpr(0);
				setState(833);
				match(RPAREN);
				setState(834);
				varNameInteger();
				}
				break;
			case 4:
				_localctx = new NumVarFloatFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(836);
				typeVar();
				setState(837);
				match(LPAREN);
				setState(838);
				numExpr(0);
				setState(839);
				match(RPAREN);
				setState(840);
				varName();
				}
				break;
			case 5:
				_localctx = new NumVarFloatFNContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(842);
				match(FN_FLOAT);
				setState(843);
				match(LPAREN);
				setState(845);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (POINT - 64)) | (1L << (SCREENWIDTH - 64)) | (1L << (SCREENHEIGHT - 64)) | (1L << (TIME - 64)) | (1L << (PI - 64)) | (1L << (SQR - 64)) | (1L << (LN - 64)) | (1L << (LOG - 64)) | (1L << (EXP - 64)) | (1L << (ATN - 64)) | (1L << (TAN - 64)) | (1L << (COS - 64)) | (1L << (SIN - 64)) | (1L << (ABS - 64)) | (1L << (ACS - 64)) | (1L << (ASN - 64)) | (1L << (DEG - 64)) | (1L << (RAD - 64)) | (1L << (SGN - 64)) | (1L << (ASC - 64)) | (1L << (LEN - 64)) | (1L << (INSTR - 64)) | (1L << (VAL - 64)) | (1L << (TIMES - 64)) | (1L << (STRS - 64)) | (1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (RND1 - 128)) | (1L << (NOT - 128)) | (1L << (PLUS - 128)) | (1L << (MINUS - 128)) | (1L << (LPAREN - 128)) | (1L << (STRINGLITERAL - 128)) | (1L << (FN_INTEGER - 128)) | (1L << (FN_FLOAT - 128)) | (1L << (FN_STRING - 128)) | (1L << (VARIABLE_FLOAT - 128)) | (1L << (VARIABLE_INTEGER - 128)) | (1L << (VARIABLE_STRING - 128)) | (1L << (VARIABLE_TYPE - 128)) | (1L << (HEXNUMBER - 128)) | (1L << (BINARYNUMBER - 128)) | (1L << (NUMBER - 128)) | (1L << (FLOAT - 128)))) != 0)) {
					{
					setState(844);
					functionParList();
					}
				}

				setState(847);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new NumVarIntegerFNContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(848);
				match(FN_INTEGER);
				setState(849);
				match(LPAREN);
				setState(851);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (POINT - 64)) | (1L << (SCREENWIDTH - 64)) | (1L << (SCREENHEIGHT - 64)) | (1L << (TIME - 64)) | (1L << (PI - 64)) | (1L << (SQR - 64)) | (1L << (LN - 64)) | (1L << (LOG - 64)) | (1L << (EXP - 64)) | (1L << (ATN - 64)) | (1L << (TAN - 64)) | (1L << (COS - 64)) | (1L << (SIN - 64)) | (1L << (ABS - 64)) | (1L << (ACS - 64)) | (1L << (ASN - 64)) | (1L << (DEG - 64)) | (1L << (RAD - 64)) | (1L << (SGN - 64)) | (1L << (ASC - 64)) | (1L << (LEN - 64)) | (1L << (INSTR - 64)) | (1L << (VAL - 64)) | (1L << (TIMES - 64)) | (1L << (STRS - 64)) | (1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (RND1 - 128)) | (1L << (NOT - 128)) | (1L << (PLUS - 128)) | (1L << (MINUS - 128)) | (1L << (LPAREN - 128)) | (1L << (STRINGLITERAL - 128)) | (1L << (FN_INTEGER - 128)) | (1L << (FN_FLOAT - 128)) | (1L << (FN_STRING - 128)) | (1L << (VARIABLE_FLOAT - 128)) | (1L << (VARIABLE_INTEGER - 128)) | (1L << (VARIABLE_STRING - 128)) | (1L << (VARIABLE_TYPE - 128)) | (1L << (HEXNUMBER - 128)) | (1L << (BINARYNUMBER - 128)) | (1L << (NUMBER - 128)) | (1L << (FLOAT - 128)))) != 0)) {
					{
					setState(850);
					functionParList();
					}
				}

				setState(853);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new NumVarStringFNContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(854);
				match(FN_STRING);
				setState(855);
				match(LPAREN);
				setState(857);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (POINT - 64)) | (1L << (SCREENWIDTH - 64)) | (1L << (SCREENHEIGHT - 64)) | (1L << (TIME - 64)) | (1L << (PI - 64)) | (1L << (SQR - 64)) | (1L << (LN - 64)) | (1L << (LOG - 64)) | (1L << (EXP - 64)) | (1L << (ATN - 64)) | (1L << (TAN - 64)) | (1L << (COS - 64)) | (1L << (SIN - 64)) | (1L << (ABS - 64)) | (1L << (ACS - 64)) | (1L << (ASN - 64)) | (1L << (DEG - 64)) | (1L << (RAD - 64)) | (1L << (SGN - 64)) | (1L << (ASC - 64)) | (1L << (LEN - 64)) | (1L << (INSTR - 64)) | (1L << (VAL - 64)) | (1L << (TIMES - 64)) | (1L << (STRS - 64)) | (1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (RND1 - 128)) | (1L << (NOT - 128)) | (1L << (PLUS - 128)) | (1L << (MINUS - 128)) | (1L << (LPAREN - 128)) | (1L << (STRINGLITERAL - 128)) | (1L << (FN_INTEGER - 128)) | (1L << (FN_FLOAT - 128)) | (1L << (FN_STRING - 128)) | (1L << (VARIABLE_FLOAT - 128)) | (1L << (VARIABLE_INTEGER - 128)) | (1L << (VARIABLE_STRING - 128)) | (1L << (VARIABLE_TYPE - 128)) | (1L << (HEXNUMBER - 128)) | (1L << (BINARYNUMBER - 128)) | (1L << (NUMBER - 128)) | (1L << (FLOAT - 128)))) != 0)) {
					{
					setState(856);
					functionParList();
					}
				}

				setState(859);
				match(RPAREN);
				}
				break;
			case 8:
				_localctx = new NumVarFloatContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(860);
				varName();
				}
				break;
			case 9:
				_localctx = new NumVarIntegerContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(861);
				varNameInteger();
				}
				break;
			case 10:
				_localctx = new NumVarFloatFieldContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(862);
				typeVar();
				setState(863);
				varName();
				}
				break;
			case 11:
				_localctx = new NumVarIntegerFieldContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(865);
				typeVar();
				setState(866);
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
			setState(889);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,58,_ctx) ) {
			case 1:
				_localctx = new NumVarStringArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(870);
				varNameString();
				setState(871);
				match(LPAREN);
				setState(872);
				numExpr(0);
				setState(875);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(873);
					match(COMMA);
					setState(874);
					numExpr(0);
					}
				}

				setState(877);
				match(RPAREN);
				}
				break;
			case 2:
				_localctx = new NumVarStringFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(879);
				typeVar();
				setState(880);
				match(LPAREN);
				setState(881);
				numExpr(0);
				setState(882);
				match(RPAREN);
				setState(883);
				varNameString();
				}
				break;
			case 3:
				_localctx = new NumVarStringContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(885);
				varNameString();
				}
				break;
			case 4:
				_localctx = new NumVarStringFieldContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(886);
				typeVar();
				setState(887);
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
			setState(894);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(891);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(892);
				varNameInteger();
				}
				break;
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(893);
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
			setState(898);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(896);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(897);
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
			setState(900);
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
			setState(902);
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
			setState(904);
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
			setState(906);
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
			setState(947);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,63,_ctx) ) {
			case 1:
				_localctx = new VarDeclIndContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(908);
				justVar();
				}
				break;
			case 2:
				_localctx = new VarDeclArrayedContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(909);
				justVar();
				setState(920);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==LPAREN) {
					{
					{
					setState(910);
					match(LPAREN);
					setState(911);
					numExpr(0);
					setState(914);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==COMMA) {
						{
						setState(912);
						match(COMMA);
						setState(913);
						numExpr(0);
						}
					}

					setState(916);
					match(RPAREN);
					}
					}
					setState(922);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 3:
				_localctx = new VarDeclTypeVarContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(923);
				typeVar();
				setState(924);
				varName();
				}
				break;
			case 4:
				_localctx = new VarDeclTypeVarContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(926);
				typeVar();
				setState(927);
				varNameInteger();
				}
				break;
			case 5:
				_localctx = new VarDeclTypeVarArrayedContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(929);
				typeVar();
				setState(930);
				match(LPAREN);
				setState(931);
				numExpr(0);
				setState(932);
				match(RPAREN);
				setState(933);
				varName();
				}
				break;
			case 6:
				_localctx = new VarDeclTypeVarArrayedContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(935);
				typeVar();
				setState(936);
				match(LPAREN);
				setState(937);
				numExpr(0);
				setState(938);
				match(RPAREN);
				setState(939);
				varNameInteger();
				}
				break;
			case 7:
				_localctx = new VarDeclTypeContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(941);
				typeVar();
				}
				break;
			case 8:
				_localctx = new VarDeclTypeArrayedContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(942);
				typeVar();
				setState(943);
				match(LPAREN);
				setState(944);
				numExpr(0);
				setState(945);
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
			setState(968);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
			case VARIABLE_INTEGER:
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 1);
				{
				setState(949);
				justVar();
				setState(950);
				match(LPAREN);
				setState(951);
				numExpr(0);
				setState(956);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(952);
					match(COMMA);
					setState(953);
					numExpr(0);
					}
					}
					setState(958);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(959);
				match(RPAREN);
				}
				break;
			case VARIABLE_TYPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(961);
				typeVar();
				setState(962);
				match(LPAREN);
				setState(963);
				numExpr(0);
				setState(964);
				match(COMMA);
				setState(965);
				varName();
				setState(966);
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
			setState(970);
			varDecl();
			setState(975);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(971);
				match(COMMA);
				setState(972);
				varDecl();
				}
				}
				setState(977);
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
			setState(979);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN) {
				{
				setState(978);
				match(RETURN);
				}
			}

			setState(981);
			justVar();
			setState(989);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(982);
				match(COMMA);
				setState(984);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN) {
					{
					setState(983);
					match(RETURN);
					}
				}

				setState(986);
				justVar();
				}
				}
				setState(991);
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
			setState(992);
			expr();
			setState(997);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(993);
				match(COMMA);
				setState(994);
				expr();
				}
				}
				setState(999);
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
			setState(1000);
			expr();
			setState(1005);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1001);
				match(COMMA);
				setState(1002);
				expr();
				}
				}
				setState(1007);
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
			setState(1019);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,73,_ctx) ) {
			case 1:
				_localctx = new PrintListExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1009);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TILDE) {
					{
					setState(1008);
					match(TILDE);
					}
				}

				setState(1011);
				expr();
				}
				break;
			case 2:
				_localctx = new PrintListSPCPContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1012);
				match(SPC);
				setState(1013);
				match(LPAREN);
				setState(1014);
				numExpr(0);
				setState(1015);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new PrintListSPCContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1017);
				match(SPC);
				setState(1018);
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
			setState(1022); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(1021);
				match(TICK);
				}
				}
				setState(1024); 
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
			setState(1029);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COMMA:
				enterOuterAlt(_localctx, 1);
				{
				setState(1026);
				match(COMMA);
				}
				break;
			case SEMICOLON:
				enterOuterAlt(_localctx, 2);
				{
				setState(1027);
				match(SEMICOLON);
				}
				break;
			case TICK:
				enterOuterAlt(_localctx, 3);
				{
				setState(1028);
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
			setState(1032);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TICK) {
				{
				setState(1031);
				printListTick();
				}
			}

			setState(1035);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(1034);
				((PrintListContext)_localctx).s1 = match(SEMICOLON);
				}
			}

			setState(1037);
			printListItem();
			setState(1043);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,78,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1038);
					printListSeparator();
					setState(1039);
					printListItem();
					}
					} 
				}
				setState(1045);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,78,_ctx);
			}
			setState(1047);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(1046);
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
			setState(1051);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,80,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1049);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1050);
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
			setState(1058);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,81,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1053);
				numberInteger();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1054);
				numberFloat();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1055);
				numberHex();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1056);
				numberBinary();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1057);
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
			setState(1061);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(1060);
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

			setState(1063);
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
			setState(1065);
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
			setState(1067);
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
			setState(1070);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(1069);
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

			setState(1072);
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
			setState(1126);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,84,_ctx) ) {
			case 1:
				_localctx = new StrFuncTIMESContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1074);
				match(TIMES);
				}
				break;
			case 2:
				_localctx = new StrFuncCHRSContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1075);
				match(CHRS);
				setState(1076);
				numExpr(0);
				}
				break;
			case 3:
				_localctx = new StrFuncCHRSContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1077);
				match(CHRS);
				setState(1078);
				match(LPAREN);
				setState(1079);
				numExpr(0);
				setState(1080);
				match(RPAREN);
				}
				break;
			case 4:
				_localctx = new StrFuncLEFTSContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1082);
				match(LEFTS);
				setState(1083);
				match(LPAREN);
				setState(1084);
				strExpr(0);
				setState(1085);
				match(COMMA);
				setState(1086);
				numExpr(0);
				setState(1087);
				match(RPAREN);
				}
				break;
			case 5:
				_localctx = new StrFuncMIDS3Context(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1089);
				match(MIDS);
				setState(1090);
				match(LPAREN);
				setState(1091);
				strExpr(0);
				setState(1092);
				match(COMMA);
				setState(1093);
				numExpr(0);
				setState(1094);
				match(COMMA);
				setState(1095);
				numExpr(0);
				setState(1096);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new StrFuncMIDS2Context(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1098);
				match(MIDS);
				setState(1099);
				match(LPAREN);
				setState(1100);
				strExpr(0);
				setState(1101);
				match(COMMA);
				setState(1102);
				numExpr(0);
				setState(1103);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new StrFuncRIGHTSContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1105);
				match(RIGHTS);
				setState(1106);
				match(LPAREN);
				setState(1107);
				strExpr(0);
				setState(1108);
				match(COMMA);
				setState(1109);
				numExpr(0);
				setState(1110);
				match(RPAREN);
				}
				break;
			case 8:
				_localctx = new StrFuncSTRSContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1112);
				match(STRS);
				setState(1113);
				numExpr(0);
				}
				break;
			case 9:
				_localctx = new StrFuncSTRSHEXContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(1114);
				match(STRS);
				setState(1115);
				match(TILDE);
				setState(1116);
				numExpr(0);
				}
				break;
			case 10:
				_localctx = new StrFuncSTRINGSContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(1117);
				match(STRINGS);
				setState(1118);
				match(LPAREN);
				setState(1119);
				numExpr(0);
				setState(1120);
				match(COMMA);
				setState(1121);
				strExpr(0);
				setState(1122);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new StrFuncINKEYSContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(1124);
				match(INKEYS);
				setState(1125);
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
			setState(1128);
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
			setState(1138);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LPAREN:
				{
				setState(1131);
				match(LPAREN);
				setState(1132);
				strExpr(0);
				setState(1133);
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
				setState(1135);
				strFunc();
				}
				break;
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(1136);
				strVar();
				}
				break;
			case STRINGLITERAL:
				{
				setState(1137);
				string();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(1145);
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
					setState(1140);
					if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
					setState(1141);
					match(PLUS);
					setState(1142);
					strExpr(4);
					}
					} 
				}
				setState(1147);
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

	public final NumFuncContext numFunc() throws RecognitionException {
		NumFuncContext _localctx = new NumFuncContext(_ctx, getState());
		enterRule(_localctx, 192, RULE_numFunc);
		try {
			setState(1304);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,87,_ctx) ) {
			case 1:
				_localctx = new NumFuncPIContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1148);
				match(PI);
				}
				break;
			case 2:
				_localctx = new NumFuncFALSEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1149);
				match(FALSE);
				}
				break;
			case 3:
				_localctx = new NumFuncTRUEContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1150);
				match(TRUE);
				}
				break;
			case 4:
				_localctx = new NumFuncTIMEContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1151);
				match(TIME);
				}
				break;
			case 5:
				_localctx = new NumFuncRNDContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1152);
				match(RND);
				}
				break;
			case 6:
				_localctx = new NumFuncRND0Context(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1153);
				match(RND0);
				}
				break;
			case 7:
				_localctx = new NumFuncRND1Context(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1154);
				match(RND1);
				}
				break;
			case 8:
				_localctx = new NumFuncRNDRANGEContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1155);
				match(RND);
				setState(1156);
				match(LPAREN);
				setState(1157);
				numExpr(0);
				setState(1158);
				match(RPAREN);
				}
				break;
			case 9:
				_localctx = new NumFuncLNContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(1160);
				match(LN);
				setState(1161);
				match(LPAREN);
				setState(1162);
				numExpr(0);
				setState(1163);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new NumFuncLOGContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(1165);
				match(LOG);
				setState(1166);
				match(LPAREN);
				setState(1167);
				numExpr(0);
				setState(1168);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new NumFuncEXPContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(1170);
				match(EXP);
				setState(1171);
				match(LPAREN);
				setState(1172);
				numExpr(0);
				setState(1173);
				match(RPAREN);
				}
				break;
			case 12:
				_localctx = new NumFuncATNContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(1175);
				match(ATN);
				setState(1176);
				match(LPAREN);
				setState(1177);
				numExpr(0);
				setState(1178);
				match(RPAREN);
				}
				break;
			case 13:
				_localctx = new NumFuncTANContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(1180);
				match(TAN);
				setState(1181);
				match(LPAREN);
				setState(1182);
				numExpr(0);
				setState(1183);
				match(RPAREN);
				}
				break;
			case 14:
				_localctx = new NumFuncCOSContext(_localctx);
				enterOuterAlt(_localctx, 14);
				{
				setState(1185);
				match(COS);
				setState(1186);
				match(LPAREN);
				setState(1187);
				numExpr(0);
				setState(1188);
				match(RPAREN);
				}
				break;
			case 15:
				_localctx = new NumFuncSINContext(_localctx);
				enterOuterAlt(_localctx, 15);
				{
				setState(1190);
				match(SIN);
				setState(1191);
				match(LPAREN);
				setState(1192);
				numExpr(0);
				setState(1193);
				match(RPAREN);
				}
				break;
			case 16:
				_localctx = new NumFuncABSContext(_localctx);
				enterOuterAlt(_localctx, 16);
				{
				setState(1195);
				match(ABS);
				setState(1196);
				match(LPAREN);
				setState(1197);
				numExpr(0);
				setState(1198);
				match(RPAREN);
				}
				break;
			case 17:
				_localctx = new NumFuncACSContext(_localctx);
				enterOuterAlt(_localctx, 17);
				{
				setState(1200);
				match(ACS);
				setState(1201);
				match(LPAREN);
				setState(1202);
				numExpr(0);
				setState(1203);
				match(RPAREN);
				}
				break;
			case 18:
				_localctx = new NumFuncASNContext(_localctx);
				enterOuterAlt(_localctx, 18);
				{
				setState(1205);
				match(ASN);
				setState(1206);
				match(LPAREN);
				setState(1207);
				numExpr(0);
				setState(1208);
				match(RPAREN);
				}
				break;
			case 19:
				_localctx = new NumFuncDEGContext(_localctx);
				enterOuterAlt(_localctx, 19);
				{
				setState(1210);
				match(DEG);
				setState(1211);
				match(LPAREN);
				setState(1212);
				numExpr(0);
				setState(1213);
				match(RPAREN);
				}
				break;
			case 20:
				_localctx = new NumFuncRADContext(_localctx);
				enterOuterAlt(_localctx, 20);
				{
				setState(1215);
				match(RAD);
				setState(1216);
				match(LPAREN);
				setState(1217);
				numExpr(0);
				setState(1218);
				match(RPAREN);
				}
				break;
			case 21:
				_localctx = new NumFuncSQRContext(_localctx);
				enterOuterAlt(_localctx, 21);
				{
				setState(1220);
				match(SQR);
				setState(1221);
				match(LPAREN);
				setState(1222);
				numExpr(0);
				setState(1223);
				match(RPAREN);
				}
				break;
			case 22:
				_localctx = new NumFuncSGNContext(_localctx);
				enterOuterAlt(_localctx, 22);
				{
				setState(1225);
				match(SGN);
				setState(1226);
				match(LPAREN);
				setState(1227);
				numExpr(0);
				setState(1228);
				match(RPAREN);
				}
				break;
			case 23:
				_localctx = new NumFuncGETContext(_localctx);
				enterOuterAlt(_localctx, 23);
				{
				setState(1230);
				match(GET);
				}
				break;
			case 24:
				_localctx = new NumFuncINKEYContext(_localctx);
				enterOuterAlt(_localctx, 24);
				{
				setState(1231);
				match(INKEY);
				setState(1232);
				numExpr(0);
				}
				break;
			case 25:
				_localctx = new NumFuncINTContext(_localctx);
				enterOuterAlt(_localctx, 25);
				{
				setState(1233);
				match(INT);
				setState(1234);
				match(LPAREN);
				setState(1235);
				numExpr(0);
				setState(1236);
				match(RPAREN);
				}
				break;
			case 26:
				_localctx = new NumFuncFLOATContext(_localctx);
				enterOuterAlt(_localctx, 26);
				{
				setState(1238);
				match(FLOAT_TOKEN);
				setState(1239);
				match(LPAREN);
				setState(1240);
				numExpr(0);
				setState(1241);
				match(RPAREN);
				}
				break;
			case 27:
				_localctx = new NumFuncSCREENWIDTHContext(_localctx);
				enterOuterAlt(_localctx, 27);
				{
				setState(1243);
				match(SCREENWIDTH);
				}
				break;
			case 28:
				_localctx = new NumFuncSCREENHEIGHTContext(_localctx);
				enterOuterAlt(_localctx, 28);
				{
				setState(1244);
				match(SCREENHEIGHT);
				}
				break;
			case 29:
				_localctx = new NumFuncPOINTContext(_localctx);
				enterOuterAlt(_localctx, 29);
				{
				setState(1245);
				match(POINT);
				setState(1246);
				match(LPAREN);
				setState(1247);
				numExpr(0);
				setState(1248);
				match(COMMA);
				setState(1249);
				numExpr(0);
				setState(1250);
				match(RPAREN);
				}
				break;
			case 30:
				_localctx = new NumFuncCOLOURContext(_localctx);
				enterOuterAlt(_localctx, 30);
				{
				setState(1252);
				match(COLOUR);
				setState(1253);
				match(LPAREN);
				setState(1254);
				numExpr(0);
				setState(1255);
				match(COMMA);
				setState(1256);
				numExpr(0);
				setState(1257);
				match(COMMA);
				setState(1258);
				numExpr(0);
				setState(1259);
				match(LPAREN);
				}
				break;
			case 31:
				_localctx = new NumFuncBGETHContext(_localctx);
				enterOuterAlt(_localctx, 31);
				{
				setState(1261);
				match(BGETH);
				setState(1262);
				numExpr(0);
				}
				break;
			case 32:
				_localctx = new NumFuncEOFHContext(_localctx);
				enterOuterAlt(_localctx, 32);
				{
				setState(1263);
				match(EOFH);
				setState(1264);
				numExpr(0);
				}
				break;
			case 33:
				_localctx = new NumFuncOPENINContext(_localctx);
				enterOuterAlt(_localctx, 33);
				{
				setState(1265);
				match(OPENIN);
				setState(1266);
				match(LPAREN);
				setState(1267);
				strExpr(0);
				setState(1268);
				match(RPAREN);
				}
				break;
			case 34:
				_localctx = new NumFuncOPENOUTContext(_localctx);
				enterOuterAlt(_localctx, 34);
				{
				setState(1270);
				match(OPENOUT);
				setState(1271);
				match(LPAREN);
				setState(1272);
				strExpr(0);
				setState(1273);
				match(RPAREN);
				}
				break;
			case 35:
				_localctx = new NumFuncOPENUPContext(_localctx);
				enterOuterAlt(_localctx, 35);
				{
				setState(1275);
				match(OPENUP);
				setState(1276);
				match(LPAREN);
				setState(1277);
				strExpr(0);
				setState(1278);
				match(RPAREN);
				}
				break;
			case 36:
				_localctx = new NumFuncPTRContext(_localctx);
				enterOuterAlt(_localctx, 36);
				{
				setState(1280);
				match(PTRH);
				setState(1281);
				numExpr(0);
				}
				break;
			case 37:
				_localctx = new NumFuncASCContext(_localctx);
				enterOuterAlt(_localctx, 37);
				{
				setState(1282);
				match(ASC);
				setState(1283);
				strExpr(0);
				}
				break;
			case 38:
				_localctx = new NumFuncLENContext(_localctx);
				enterOuterAlt(_localctx, 38);
				{
				setState(1284);
				match(LEN);
				setState(1285);
				strExpr(0);
				}
				break;
			case 39:
				_localctx = new NumFuncINSTR2Context(_localctx);
				enterOuterAlt(_localctx, 39);
				{
				setState(1286);
				match(INSTR);
				setState(1287);
				match(LPAREN);
				setState(1288);
				strExpr(0);
				setState(1289);
				match(COMMA);
				setState(1290);
				strExpr(0);
				setState(1291);
				match(RPAREN);
				}
				break;
			case 40:
				_localctx = new NumFuncINSTR3Context(_localctx);
				enterOuterAlt(_localctx, 40);
				{
				setState(1293);
				match(INSTR);
				setState(1294);
				match(LPAREN);
				setState(1295);
				strExpr(0);
				setState(1296);
				match(COMMA);
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
			case 41:
				_localctx = new NumFuncVALContext(_localctx);
				enterOuterAlt(_localctx, 41);
				{
				setState(1302);
				match(VAL);
				setState(1303);
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
			setState(1320);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,88,_ctx) ) {
			case 1:
				{
				_localctx = new NumExprVarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(1307);
				numVar();
				}
				break;
			case 2:
				{
				_localctx = new NumExprNumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1308);
				number();
				}
				break;
			case 3:
				{
				_localctx = new NumExprNestedContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1309);
				match(LPAREN);
				setState(1310);
				numExpr(0);
				setState(1311);
				match(RPAREN);
				}
				break;
			case 4:
				{
				_localctx = new NumExprNOTContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1313);
				match(NOT);
				setState(1314);
				numExpr(10);
				}
				break;
			case 5:
				{
				_localctx = new NumExprFuncContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1315);
				numFunc();
				}
				break;
			case 6:
				{
				_localctx = new NumExprStrRelopContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1316);
				strExpr(0);
				setState(1317);
				_la = _input.LA(1);
				if ( !(((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (EQ - 129)) | (1L << (NE - 129)) | (1L << (GT - 129)) | (1L << (GE - 129)) | (1L << (LT - 129)) | (1L << (LE - 129)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(1318);
				strExpr(0);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1345);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,90,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1343);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,89,_ctx) ) {
					case 1:
						{
						_localctx = new NumExprHatContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1322);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(1323);
						match(HAT);
						setState(1324);
						numExpr(8);
						}
						break;
					case 2:
						{
						_localctx = new NumExprMultiplyDivideContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1325);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(1326);
						_la = _input.LA(1);
						if ( !(_la==MULTIPLY || _la==DIVIDE) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1327);
						numExpr(8);
						}
						break;
					case 3:
						{
						_localctx = new NumExprDIVMODContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1328);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(1329);
						_la = _input.LA(1);
						if ( !(_la==MOD || _la==DIV) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1330);
						numExpr(7);
						}
						break;
					case 4:
						{
						_localctx = new NumExprAddSubtractContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1331);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(1332);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1333);
						numExpr(6);
						}
						break;
					case 5:
						{
						_localctx = new NumExprSHLSHRContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1334);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(1335);
						_la = _input.LA(1);
						if ( !(_la==SHL || _la==SHR) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1336);
						numExpr(5);
						}
						break;
					case 6:
						{
						_localctx = new NumExprNumRelopContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1337);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1338);
						_la = _input.LA(1);
						if ( !(((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (EQ - 129)) | (1L << (NE - 129)) | (1L << (GT - 129)) | (1L << (GE - 129)) | (1L << (LT - 129)) | (1L << (LE - 129)))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1339);
						numExpr(4);
						}
						break;
					case 7:
						{
						_localctx = new NumExprANDOREORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1340);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(1341);
						_la = _input.LA(1);
						if ( !(((((_la - 136)) & ~0x3f) == 0 && ((1L << (_la - 136)) & ((1L << (AND - 136)) | (1L << (OR - 136)) | (1L << (EOR - 136)))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1342);
						numExpr(2);
						}
						break;
					}
					} 
				}
				setState(1347);
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
			setState(1348);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00b7\u0549\4\2\t"+
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
		"`\t`\4a\ta\4b\tb\4c\tc\4d\td\3\2\7\2\u00ca\n\2\f\2\16\2\u00cd\13\2\3\2"+
		"\3\2\3\3\3\3\5\3\u00d3\n\3\3\3\5\3\u00d6\n\3\3\3\3\3\5\3\u00da\n\3\3\3"+
		"\6\3\u00dd\n\3\r\3\16\3\u00de\3\3\5\3\u00e2\n\3\3\3\3\3\5\3\u00e6\n\3"+
		"\3\4\7\4\u00e9\n\4\f\4\16\4\u00ec\13\4\3\5\7\5\u00ef\n\5\f\5\16\5\u00f2"+
		"\13\5\3\5\7\5\u00f5\n\5\f\5\16\5\u00f8\13\5\5\5\u00fa\n\5\3\6\3\6\3\7"+
		"\3\7\3\7\3\7\3\7\3\7\5\7\u0104\n\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b"+
		"\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\5\b\u011f"+
		"\n\b\3\t\3\t\3\n\3\n\3\n\3\n\3\n\6\n\u0128\n\n\r\n\16\n\u0129\3\n\3\n"+
		"\5\n\u012e\n\n\3\n\3\n\3\13\3\13\3\13\3\f\3\f\3\f\3\f\7\f\u0139\n\f\f"+
		"\f\16\f\u013c\13\f\3\r\5\r\u013f\n\r\3\r\3\r\3\r\3\r\7\r\u0145\n\r\f\r"+
		"\16\r\u0148\13\r\3\16\3\16\3\17\3\17\5\17\u014e\n\17\3\20\3\20\3\20\3"+
		"\20\5\20\u0154\n\20\3\20\3\20\3\20\3\20\3\21\3\21\3\21\3\21\5\21\u015e"+
		"\n\21\3\21\3\21\3\21\3\21\3\22\3\22\5\22\u0166\n\22\3\22\3\22\3\22\3\22"+
		"\3\22\3\22\3\22\5\22\u016f\n\22\3\22\3\22\3\22\3\23\3\23\5\23\u0176\n"+
		"\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\24\3\24\3\24\5\24\u0183"+
		"\n\24\3\24\3\24\3\25\3\25\3\25\3\25\3\25\5\25\u018c\n\25\3\26\3\26\3\26"+
		"\3\26\3\26\6\26\u0193\n\26\r\26\16\26\u0194\3\26\3\26\3\26\6\26\u019a"+
		"\n\26\r\26\16\26\u019b\5\26\u019e\n\26\3\26\3\26\3\27\5\27\u01a3\n\27"+
		"\3\27\5\27\u01a6\n\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\7\27\u01b0"+
		"\n\27\f\27\16\27\u01b3\13\27\3\30\3\30\3\30\3\31\3\31\3\31\5\31\u01bb"+
		"\n\31\3\31\3\31\3\32\3\32\3\32\3\32\7\32\u01c3\n\32\f\32\16\32\u01c6\13"+
		"\32\3\33\3\33\3\34\3\34\3\34\3\34\3\34\3\35\3\35\3\36\3\36\3\37\3\37\3"+
		"\37\3\37\3\37\3\37\7\37\u01d9\n\37\f\37\16\37\u01dc\13\37\3\37\3\37\3"+
		" \3 \3 \3 \3 \3!\3!\3!\3!\3!\3\"\3\"\3\"\3\"\3\"\3\"\3\"\5\"\u01f1\n\""+
		"\3#\3#\3#\3#\5#\u01f7\n#\3#\3#\3$\3$\5$\u01fd\n$\3%\3%\3%\3%\3%\3%\3%"+
		"\3&\3&\3&\3\'\3\'\3\'\3(\3(\3)\3)\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*"+
		"\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\5*\u0228\n*\3+\3+\3+\3+\3+\5+\u022f"+
		"\n+\3,\3,\3,\3,\3,\3-\3-\3-\3.\3.\3.\3.\3.\3/\3/\3/\3\60\5\60\u0242\n"+
		"\60\3\60\3\60\3\60\3\60\3\60\3\60\3\60\3\60\3\60\3\61\3\61\3\61\3\61\3"+
		"\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\5\61\u025d"+
		"\n\61\3\62\3\62\3\63\3\63\3\63\3\63\3\63\3\63\3\63\3\63\3\63\5\63\u026a"+
		"\n\63\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\5\64\u0275\n\64\3\65"+
		"\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\5\65"+
		"\u0285\n\65\3\66\3\66\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67"+
		"\3\67\3\67\3\67\3\67\3\67\5\67\u0298\n\67\38\38\38\38\38\38\38\38\38\3"+
		"9\39\39\39\39\39\39\39\39\39\39\39\39\39\39\39\39\39\39\59\u02b6\n9\3"+
		":\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3"+
		":\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3"+
		":\5:\u02e7\n:\3;\3;\3;\3;\3;\3<\3<\3<\3<\3<\3<\3<\3<\3<\3=\3=\3>\3>\3"+
		">\3>\3>\3>\3>\3>\3>\3?\3?\3?\3?\3?\3?\3?\3?\3?\3@\3@\3@\3@\3@\3@\3@\3"+
		"@\3@\3A\3A\3B\3B\3B\3B\7B\u031a\nB\fB\16B\u031d\13B\3B\3B\3B\3C\3C\3D"+
		"\3D\5D\u0326\nD\3E\3E\3E\5E\u032b\nE\3F\3F\3G\3G\3G\3G\3G\5G\u0334\nG"+
		"\3G\3G\3G\3G\3G\3G\3G\5G\u033d\nG\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G"+
		"\3G\3G\3G\3G\3G\5G\u0350\nG\3G\3G\3G\3G\5G\u0356\nG\3G\3G\3G\3G\5G\u035c"+
		"\nG\3G\3G\3G\3G\3G\3G\3G\3G\3G\5G\u0367\nG\3H\3H\3H\3H\3H\5H\u036e\nH"+
		"\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\5H\u037c\nH\3I\3I\3I\5I\u0381\nI"+
		"\3J\3J\5J\u0385\nJ\3K\3K\3L\3L\3M\3M\3N\3N\3O\3O\3O\3O\3O\3O\5O\u0395"+
		"\nO\3O\3O\7O\u0399\nO\fO\16O\u039c\13O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3"+
		"O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\5O\u03b6\nO\3P\3P\3P\3P\3P\7"+
		"P\u03bd\nP\fP\16P\u03c0\13P\3P\3P\3P\3P\3P\3P\3P\3P\3P\5P\u03cb\nP\3Q"+
		"\3Q\3Q\7Q\u03d0\nQ\fQ\16Q\u03d3\13Q\3R\5R\u03d6\nR\3R\3R\3R\5R\u03db\n"+
		"R\3R\7R\u03de\nR\fR\16R\u03e1\13R\3S\3S\3S\7S\u03e6\nS\fS\16S\u03e9\13"+
		"S\3T\3T\3T\7T\u03ee\nT\fT\16T\u03f1\13T\3U\5U\u03f4\nU\3U\3U\3U\3U\3U"+
		"\3U\3U\3U\5U\u03fe\nU\3V\6V\u0401\nV\rV\16V\u0402\3W\3W\3W\5W\u0408\n"+
		"W\3X\5X\u040b\nX\3X\5X\u040e\nX\3X\3X\3X\3X\7X\u0414\nX\fX\16X\u0417\13"+
		"X\3X\5X\u041a\nX\3Y\3Y\5Y\u041e\nY\3Z\3Z\3Z\3Z\3Z\5Z\u0425\nZ\3[\5[\u0428"+
		"\n[\3[\3[\3\\\3\\\3]\3]\3^\5^\u0431\n^\3^\3^\3_\3_\3_\3_\3_\3_\3_\3_\3"+
		"_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3"+
		"_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\5_\u0469"+
		"\n_\3`\3`\3a\3a\3a\3a\3a\3a\3a\3a\5a\u0475\na\3a\3a\3a\7a\u047a\na\fa"+
		"\16a\u047d\13a\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3"+
		"b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3"+
		"b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3"+
		"b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3"+
		"b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3"+
		"b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3"+
		"b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\3b\5"+
		"b\u051b\nb\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\5c\u052b\nc\3c\3"+
		"c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\3c\7c\u0542\n"+
		"c\fc\16c\u0545\13c\3d\3d\3d\2\4\u00c0\u00c4e\2\4\6\b\n\f\16\20\22\24\26"+
		"\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPRTVXZ\\^`bdfhjlnprtvxz|"+
		"~\u0080\u0082\u0084\u0086\u0088\u008a\u008c\u008e\u0090\u0092\u0094\u0096"+
		"\u0098\u009a\u009c\u009e\u00a0\u00a2\u00a4\u00a6\u00a8\u00aa\u00ac\u00ae"+
		"\u00b0\u00b2\u00b4\u00b6\u00b8\u00ba\u00bc\u00be\u00c0\u00c2\u00c4\u00c6"+
		"\2\r\4\2$$\u00a8\u00a8\4\2\30\30\32\32\3\2bc\3\2\u00ab\u00ad\3\2\u0090"+
		"\u0091\3\2\u0083\u0088\3\2\u0092\u0093\3\2\u008d\u008e\3\2\u0094\u0095"+
		"\3\2\u008a\u008c\3\2:A\2\u05cc\2\u00cb\3\2\2\2\4\u00e5\3\2\2\2\6\u00ea"+
		"\3\2\2\2\b\u00f9\3\2\2\2\n\u00fb\3\2\2\2\f\u0103\3\2\2\2\16\u011e\3\2"+
		"\2\2\20\u0120\3\2\2\2\22\u0122\3\2\2\2\24\u0131\3\2\2\2\26\u0134\3\2\2"+
		"\2\30\u013e\3\2\2\2\32\u0149\3\2\2\2\34\u014b\3\2\2\2\36\u014f\3\2\2\2"+
		" \u0159\3\2\2\2\"\u0163\3\2\2\2$\u0173\3\2\2\2&\u017f\3\2\2\2(\u0186\3"+
		"\2\2\2*\u018d\3\2\2\2,\u01a5\3\2\2\2.\u01b4\3\2\2\2\60\u01b7\3\2\2\2\62"+
		"\u01be\3\2\2\2\64\u01c7\3\2\2\2\66\u01c9\3\2\2\28\u01ce\3\2\2\2:\u01d0"+
		"\3\2\2\2<\u01d2\3\2\2\2>\u01df\3\2\2\2@\u01e4\3\2\2\2B\u01f0\3\2\2\2D"+
		"\u01f2\3\2\2\2F\u01fa\3\2\2\2H\u01fe\3\2\2\2J\u0205\3\2\2\2L\u0208\3\2"+
		"\2\2N\u020b\3\2\2\2P\u020d\3\2\2\2R\u0227\3\2\2\2T\u022e\3\2\2\2V\u0230"+
		"\3\2\2\2X\u0235\3\2\2\2Z\u0238\3\2\2\2\\\u023d\3\2\2\2^\u0241\3\2\2\2"+
		"`\u025c\3\2\2\2b\u025e\3\2\2\2d\u0269\3\2\2\2f\u0274\3\2\2\2h\u0284\3"+
		"\2\2\2j\u0286\3\2\2\2l\u0297\3\2\2\2n\u0299\3\2\2\2p\u02b5\3\2\2\2r\u02e6"+
		"\3\2\2\2t\u02e8\3\2\2\2v\u02ed\3\2\2\2x\u02f6\3\2\2\2z\u02f8\3\2\2\2|"+
		"\u0301\3\2\2\2~\u030a\3\2\2\2\u0080\u0313\3\2\2\2\u0082\u0315\3\2\2\2"+
		"\u0084\u0321\3\2\2\2\u0086\u0325\3\2\2\2\u0088\u032a\3\2\2\2\u008a\u032c"+
		"\3\2\2\2\u008c\u0366\3\2\2\2\u008e\u037b\3\2\2\2\u0090\u0380\3\2\2\2\u0092"+
		"\u0384\3\2\2\2\u0094\u0386\3\2\2\2\u0096\u0388\3\2\2\2\u0098\u038a\3\2"+
		"\2\2\u009a\u038c\3\2\2\2\u009c\u03b5\3\2\2\2\u009e\u03ca\3\2\2\2\u00a0"+
		"\u03cc\3\2\2\2\u00a2\u03d5\3\2\2\2\u00a4\u03e2\3\2\2\2\u00a6\u03ea\3\2"+
		"\2\2\u00a8\u03fd\3\2\2\2\u00aa\u0400\3\2\2\2\u00ac\u0407\3\2\2\2\u00ae"+
		"\u040a\3\2\2\2\u00b0\u041d\3\2\2\2\u00b2\u0424\3\2\2\2\u00b4\u0427\3\2"+
		"\2\2\u00b6\u042b\3\2\2\2\u00b8\u042d\3\2\2\2\u00ba\u0430\3\2\2\2\u00bc"+
		"\u0468\3\2\2\2\u00be\u046a\3\2\2\2\u00c0\u0474\3\2\2\2\u00c2\u051a\3\2"+
		"\2\2\u00c4\u052a\3\2\2\2\u00c6\u0546\3\2\2\2\u00c8\u00ca\5\4\3\2\u00c9"+
		"\u00c8\3\2\2\2\u00ca\u00cd\3\2\2\2\u00cb\u00c9\3\2\2\2\u00cb\u00cc\3\2"+
		"\2\2\u00cc\u00ce\3\2\2\2\u00cd\u00cb\3\2\2\2\u00ce\u00cf\7\2\2\3\u00cf"+
		"\3\3\2\2\2\u00d0\u00e6\7\u009c\2\2\u00d1\u00d3\5\n\6\2\u00d2\u00d1\3\2"+
		"\2\2\u00d2\u00d3\3\2\2\2\u00d3\u00d5\3\2\2\2\u00d4\u00d6\t\2\2\2\u00d5"+
		"\u00d4\3\2\2\2\u00d5\u00d6\3\2\2\2\u00d6\u00d7\3\2\2\2\u00d7\u00e6\7\u009c"+
		"\2\2\u00d8\u00da\5\n\6\2\u00d9\u00d8\3\2\2\2\u00d9\u00da\3\2\2\2\u00da"+
		"\u00dc\3\2\2\2\u00db\u00dd\5\f\7\2\u00dc\u00db\3\2\2\2\u00dd\u00de\3\2"+
		"\2\2\u00de\u00dc\3\2\2\2\u00de\u00df\3\2\2\2\u00df\u00e1\3\2\2\2\u00e0"+
		"\u00e2\t\2\2\2\u00e1\u00e0\3\2\2\2\u00e1\u00e2\3\2\2\2\u00e2\u00e3\3\2"+
		"\2\2\u00e3\u00e4\7\u009c\2\2\u00e4\u00e6\3\2\2\2\u00e5\u00d0\3\2\2\2\u00e5"+
		"\u00d2\3\2\2\2\u00e5\u00d9\3\2\2\2\u00e6\5\3\2\2\2\u00e7\u00e9\5\f\7\2"+
		"\u00e8\u00e7\3\2\2\2\u00e9\u00ec\3\2\2\2\u00ea\u00e8\3\2\2\2\u00ea\u00eb"+
		"\3\2\2\2\u00eb\7\3\2\2\2\u00ec\u00ea\3\2\2\2\u00ed\u00ef\5\f\7\2\u00ee"+
		"\u00ed\3\2\2\2\u00ef\u00f2\3\2\2\2\u00f0\u00ee\3\2\2\2\u00f0\u00f1\3\2"+
		"\2\2\u00f1\u00fa\3\2\2\2\u00f2\u00f0\3\2\2\2\u00f3\u00f5\5\4\3\2\u00f4"+
		"\u00f3\3\2\2\2\u00f5\u00f8\3\2\2\2\u00f6\u00f4\3\2\2\2\u00f6\u00f7\3\2"+
		"\2\2\u00f7\u00fa\3\2\2\2\u00f8\u00f6\3\2\2\2\u00f9\u00f0\3\2\2\2\u00f9"+
		"\u00f6\3\2\2\2\u00fa\t\3\2\2\2\u00fb\u00fc\7\u00b5\2\2\u00fc\13\3\2\2"+
		"\2\u00fd\u0104\7\u00a0\2\2\u00fe\u0104\5\16\b\2\u00ff\u0104\5B\"\2\u0100"+
		"\u0104\5R*\2\u0101\u0104\5T+\2\u0102\u0104\5`\61\2\u0103\u00fd\3\2\2\2"+
		"\u0103\u00fe\3\2\2\2\u0103\u00ff\3\2\2\2\u0103\u0100\3\2\2\2\u0103\u0101"+
		"\3\2\2\2\u0103\u0102\3\2\2\2\u0104\r\3\2\2\2\u0105\u011f\5\20\t\2\u0106"+
		"\u011f\5\22\n\2\u0107\u011f\5\24\13\2\u0108\u011f\5\26\f\2\u0109\u011f"+
		"\5\30\r\2\u010a\u011f\5\32\16\2\u010b\u011f\5\34\17\2\u010c\u011f\5\36"+
		"\20\2\u010d\u011f\5 \21\2\u010e\u011f\5\"\22\2\u010f\u011f\5$\23\2\u0110"+
		"\u011f\5&\24\2\u0111\u011f\5(\25\2\u0112\u011f\5*\26\2\u0113\u011f\5,"+
		"\27\2\u0114\u011f\5.\30\2\u0115\u011f\5\60\31\2\u0116\u011f\5\62\32\2"+
		"\u0117\u011f\5\64\33\2\u0118\u011f\5\66\34\2\u0119\u011f\58\35\2\u011a"+
		"\u011f\5:\36\2\u011b\u011f\5<\37\2\u011c\u011f\5> \2\u011d\u011f\5@!\2"+
		"\u011e\u0105\3\2\2\2\u011e\u0106\3\2\2\2\u011e\u0107\3\2\2\2\u011e\u0108"+
		"\3\2\2\2\u011e\u0109\3\2\2\2\u011e\u010a\3\2\2\2\u011e\u010b\3\2\2\2\u011e"+
		"\u010c\3\2\2\2\u011e\u010d\3\2\2\2\u011e\u010e\3\2\2\2\u011e\u010f\3\2"+
		"\2\2\u011e\u0110\3\2\2\2\u011e\u0111\3\2\2\2\u011e\u0112\3\2\2\2\u011e"+
		"\u0113\3\2\2\2\u011e\u0114\3\2\2\2\u011e\u0115\3\2\2\2\u011e\u0116\3\2"+
		"\2\2\u011e\u0117\3\2\2\2\u011e\u0118\3\2\2\2\u011e\u0119\3\2\2\2\u011e"+
		"\u011a\3\2\2\2\u011e\u011b\3\2\2\2\u011e\u011c\3\2\2\2\u011e\u011d\3\2"+
		"\2\2\u011f\17\3\2\2\2\u0120\u0121\7\3\2\2\u0121\21\3\2\2\2\u0122\u0123"+
		"\7\4\2\2\u0123\u0124\5\u00b0Y\2\u0124\u0125\7\34\2\2\u0125\u0127\7\u009c"+
		"\2\2\u0126\u0128\5\u0082B\2\u0127\u0126\3\2\2\2\u0128\u0129\3\2\2\2\u0129"+
		"\u0127\3\2\2\2\u0129\u012a\3\2\2\2\u012a\u012d\3\2\2\2\u012b\u012c\7 "+
		"\2\2\u012c\u012e\5\b\5\2\u012d\u012b\3\2\2\2\u012d\u012e\3\2\2\2\u012e"+
		"\u012f\3\2\2\2\u012f\u0130\7\13\2\2\u0130\23\3\2\2\2\u0131\u0132\7\5\2"+
		"\2\u0132\u0133\5\u00c0a\2\u0133\25\3\2\2\2\u0134\u0135\7\6\2\2\u0135\u013a"+
		"\5\u0086D\2\u0136\u0137\7\u00a1\2\2\u0137\u0139\5\u0086D\2\u0138\u0136"+
		"\3\2\2\2\u0139\u013c\3\2\2\2\u013a\u0138\3\2\2\2\u013a\u013b\3\2\2\2\u013b"+
		"\27\3\2\2\2\u013c\u013a\3\2\2\2\u013d\u013f\7\31\2\2\u013e\u013d\3\2\2"+
		"\2\u013e\u013f\3\2\2\2\u013f\u0140\3\2\2\2\u0140\u0141\7\b\2\2\u0141\u0146"+
		"\5\u009eP\2\u0142\u0143\7\u00a1\2\2\u0143\u0145\5\u009eP\2\u0144\u0142"+
		"\3\2\2\2\u0145\u0148\3\2\2\2\u0146\u0144\3\2\2\2\u0146\u0147\3\2\2\2\u0147"+
		"\31\3\2\2\2\u0148\u0146\3\2\2\2\u0149\u014a\7\n\2\2\u014a\33\3\2\2\2\u014b"+
		"\u014d\7\'\2\2\u014c\u014e\5\u00b0Y\2\u014d\u014c\3\2\2\2\u014d\u014e"+
		"\3\2\2\2\u014e\35\3\2\2\2\u014f\u0150\7\7\2\2\u0150\u0151\5\u0084C\2\u0151"+
		"\u0153\7\u00a3\2\2\u0152\u0154\5\u00a2R\2\u0153\u0152\3\2\2\2\u0153\u0154"+
		"\3\2\2\2\u0154\u0155\3\2\2\2\u0155\u0156\7\u00a5\2\2\u0156\u0157\5\b\5"+
		"\2\u0157\u0158\7\r\2\2\u0158\37\3\2\2\2\u0159\u015a\7\7\2\2\u015a\u015b"+
		"\7\u00aa\2\2\u015b\u015d\7\u00a3\2\2\u015c\u015e\5\u00a2R\2\u015d\u015c"+
		"\3\2\2\2\u015d\u015e\3\2\2\2\u015e\u015f\3\2\2\2\u015f\u0160\7\u00a5\2"+
		"\2\u0160\u0161\5\b\5\2\u0161\u0162\7\16\2\2\u0162!\3\2\2\2\u0163\u0165"+
		"\7\21\2\2\u0164\u0166\7\31\2\2\u0165\u0164\3\2\2\2\u0165\u0166\3\2\2\2"+
		"\u0166\u0167\3\2\2\2\u0167\u0168\5\u0092J\2\u0168\u0169\7\u0083\2\2\u0169"+
		"\u016a\5\u00c4c\2\u016a\u016b\7,\2\2\u016b\u016e\5\u00c4c\2\u016c\u016d"+
		"\7)\2\2\u016d\u016f\5\u00c4c\2\u016e\u016c\3\2\2\2\u016e\u016f\3\2\2\2"+
		"\u016f\u0170\3\2\2\2\u0170\u0171\5\b\5\2\u0171\u0172\7\33\2\2\u0172#\3"+
		"\2\2\2\u0173\u0175\7\21\2\2\u0174\u0176\7\31\2\2\u0175\u0174\3\2\2\2\u0175"+
		"\u0176\3\2\2\2\u0176\u0177\3\2\2\2\u0177\u0178\5\u0090I\2\u0178\u0179"+
		"\7\25\2\2\u0179\u017a\5\u0090I\2\u017a\u017b\7\u00a3\2\2\u017b\u017c\7"+
		"\u00a5\2\2\u017c\u017d\5\b\5\2\u017d\u017e\7\33\2\2\u017e%\3\2\2\2\u017f"+
		"\u0180\5\u0084C\2\u0180\u0182\7\u00a3\2\2\u0181\u0183\5\u00a4S\2\u0182"+
		"\u0181\3\2\2\2\u0182\u0183\3\2\2\2\u0183\u0184\3\2\2\2\u0184\u0185\7\u00a5"+
		"\2\2\u0185\'\3\2\2\2\u0186\u0187\7\24\2\2\u0187\u0188\5\u00b0Y\2\u0188"+
		"\u018b\5\6\4\2\u0189\u018a\7\t\2\2\u018a\u018c\5\6\4\2\u018b\u0189\3\2"+
		"\2\2\u018b\u018c\3\2\2\2\u018c)\3\2\2\2\u018d\u018e\7\24\2\2\u018e\u018f"+
		"\5\u00b0Y\2\u018f\u0190\7+\2\2\u0190\u0192\7\u009c\2\2\u0191\u0193\5\4"+
		"\3\2\u0192\u0191\3\2\2\2\u0193\u0194\3\2\2\2\u0194\u0192\3\2\2\2\u0194"+
		"\u0195\3\2\2\2\u0195\u019d\3\2\2\2\u0196\u0197\7\t\2\2\u0197\u0199\7\u009c"+
		"\2\2\u0198\u019a\5\4\3\2\u0199\u0198\3\2\2\2\u019a\u019b\3\2\2\2\u019b"+
		"\u0199\3\2\2\2\u019b\u019c\3\2\2\2\u019c\u019e\3\2\2\2\u019d\u0196\3\2"+
		"\2\2\u019d\u019e\3\2\2\2\u019e\u019f\3\2\2\2\u019f\u01a0\7\f\2\2\u01a0"+
		"+\3\2\2\2\u01a1\u01a3\t\3\2\2\u01a2\u01a1\3\2\2\2\u01a2\u01a3\3\2\2\2"+
		"\u01a3\u01a6\3\2\2\2\u01a4\u01a6\7\31\2\2\u01a5\u01a2\3\2\2\2\u01a5\u01a4"+
		"\3\2\2\2\u01a6\u01a7\3\2\2\2\u01a7\u01a8\5\u009cO\2\u01a8\u01a9\7\u0083"+
		"\2\2\u01a9\u01b1\5\u00b0Y\2\u01aa\u01ab\7\u00a1\2\2\u01ab\u01ac\5\u009c"+
		"O\2\u01ac\u01ad\7\u0083\2\2\u01ad\u01ae\5\u00b0Y\2\u01ae\u01b0\3\2\2\2"+
		"\u01af\u01aa\3\2\2\2\u01b0\u01b3\3\2\2\2\u01b1\u01af\3\2\2\2\u01b1\u01b2"+
		"\3\2\2\2\u01b2-\3\2\2\2\u01b3\u01b1\3\2\2\2\u01b4\u01b5\7\37\2\2\u01b5"+
		"\u01b6\5\u00c0a\2\u01b6/\3\2\2\2\u01b7\u01b8\7\u00aa\2\2\u01b8\u01ba\7"+
		"\u00a3\2\2\u01b9\u01bb\5\u00a4S\2\u01ba\u01b9\3\2\2\2\u01ba\u01bb\3\2"+
		"\2\2\u01bb\u01bc\3\2\2\2\u01bc\u01bd\7\u00a5\2\2\u01bd\61\3\2\2\2\u01be"+
		"\u01bf\7#\2\2\u01bf\u01c4\5\u009cO\2\u01c0\u01c1\7\u00a1\2\2\u01c1\u01c3"+
		"\5\u009cO\2\u01c2\u01c0\3\2\2\2\u01c3\u01c6\3\2\2\2\u01c4\u01c2\3\2\2"+
		"\2\u01c4\u01c5\3\2\2\2\u01c5\63\3\2\2\2\u01c6\u01c4\3\2\2\2\u01c7\u01c8"+
		"\7&\2\2\u01c8\65\3\2\2\2\u01c9\u01ca\7*\2\2\u01ca\u01cb\5\u0090I\2\u01cb"+
		"\u01cc\7\u00a1\2\2\u01cc\u01cd\5\u0090I\2\u01cd\67\3\2\2\2\u01ce\u01cf"+
		"\7.\2\2\u01cf9\3\2\2\2\u01d0\u01d1\7/\2\2\u01d1;\3\2\2\2\u01d2\u01d3\7"+
		"\61\2\2\u01d3\u01d4\5\u0094K\2\u01d4\u01d5\7\u00a3\2\2\u01d5\u01da\5\u0090"+
		"I\2\u01d6\u01d7\7\u00a1\2\2\u01d7\u01d9\5\u0090I\2\u01d8\u01d6\3\2\2\2"+
		"\u01d9\u01dc\3\2\2\2\u01da\u01d8\3\2\2\2\u01da\u01db\3\2\2\2\u01db\u01dd"+
		"\3\2\2\2\u01dc\u01da\3\2\2\2\u01dd\u01de\7\u00a5\2\2\u01de=\3\2\2\2\u01df"+
		"\u01e0\7%\2\2\u01e0\u01e1\5\b\5\2\u01e1\u01e2\7\62\2\2\u01e2\u01e3\5\u00b0"+
		"Y\2\u01e3?\3\2\2\2\u01e4\u01e5\7\64\2\2\u01e5\u01e6\5\u00b0Y\2\u01e6\u01e7"+
		"\5\b\5\2\u01e7\u01e8\7\17\2\2\u01e8A\3\2\2\2\u01e9\u01f1\5D#\2\u01ea\u01f1"+
		"\5F$\2\u01eb\u01f1\5H%\2\u01ec\u01f1\5J&\2\u01ed\u01f1\5L\'\2\u01ee\u01f1"+
		"\5N(\2\u01ef\u01f1\5P)\2\u01f0\u01e9\3\2\2\2\u01f0\u01ea\3\2\2\2\u01f0"+
		"\u01eb\3\2\2\2\u01f0\u01ec\3\2\2\2\u01f0\u01ed\3\2\2\2\u01f0\u01ee\3\2"+
		"\2\2\u01f0\u01ef\3\2\2\2\u01f1C\3\2\2\2\u01f2\u01f6\7\27\2\2\u01f3\u01f4"+
		"\5\u00c0a\2\u01f4\u01f5\7\u00a1\2\2\u01f5\u01f7\3\2\2\2\u01f6\u01f3\3"+
		"\2\2\2\u01f6\u01f7\3\2\2\2\u01f7\u01f8\3\2\2\2\u01f8\u01f9\5\u00a0Q\2"+
		"\u01f9E\3\2\2\2\u01fa\u01fc\7!\2\2\u01fb\u01fd\5\u00aeX\2\u01fc\u01fb"+
		"\3\2\2\2\u01fc\u01fd\3\2\2\2\u01fdG\3\2\2\2\u01fe\u01ff\7\65\2\2\u01ff"+
		"\u0200\5\u0096L\2\u0200\u0201\7\u00a1\2\2\u0201\u0202\5\u0096L\2\u0202"+
		"\u0203\7\u00a1\2\2\u0203\u0204\5\u0096L\2\u0204I\3\2\2\2\u0205\u0206\7"+
		"\66\2\2\u0206\u0207\5\u00c4c\2\u0207K\3\2\2\2\u0208\u0209\7\67\2\2\u0209"+
		"\u020a\5\u00c4c\2\u020aM\3\2\2\2\u020b\u020c\78\2\2\u020cO\3\2\2\2\u020d"+
		"\u020e\79\2\2\u020eQ\3\2\2\2\u020f\u0210\5\u009cO\2\u0210\u0211\7\u0098"+
		"\2\2\u0211\u0212\5\u00c4c\2\u0212\u0228\3\2\2\2\u0213\u0214\5\u009cO\2"+
		"\u0214\u0215\7\u0099\2\2\u0215\u0216\5\u00c4c\2\u0216\u0228\3\2\2\2\u0217"+
		"\u0218\5\u009cO\2\u0218\u0219\7\u0096\2\2\u0219\u021a\5\u00c4c\2\u021a"+
		"\u0228\3\2\2\2\u021b\u021c\5\u009cO\2\u021c\u021d\7\u0097\2\2\u021d\u021e"+
		"\5\u00c4c\2\u021e\u0228\3\2\2\2\u021f\u0220\5\u009cO\2\u0220\u0221\7\u009a"+
		"\2\2\u0221\u0222\5\u00c4c\2\u0222\u0228\3\2\2\2\u0223\u0224\5\u009cO\2"+
		"\u0224\u0225\7\u009b\2\2\u0225\u0226\5\u00c4c\2\u0226\u0228\3\2\2\2\u0227"+
		"\u020f\3\2\2\2\u0227\u0213\3\2\2\2\u0227\u0217\3\2\2\2\u0227\u021b\3\2"+
		"\2\2\u0227\u021f\3\2\2\2\u0227\u0223\3\2\2\2\u0228S\3\2\2\2\u0229\u022f"+
		"\5V,\2\u022a\u022f\5X-\2\u022b\u022f\5Z.\2\u022c\u022f\5\\/\2\u022d\u022f"+
		"\5^\60\2\u022e\u0229\3\2\2\2\u022e\u022a\3\2\2\2\u022e\u022b\3\2\2\2\u022e"+
		"\u022c\3\2\2\2\u022e\u022d\3\2\2\2\u022fU\3\2\2\2\u0230\u0231\7C\2\2\u0231"+
		"\u0232\5\u00c4c\2\u0232\u0233\7\u00a1\2\2\u0233\u0234\5\u00c4c\2\u0234"+
		"W\3\2\2\2\u0235\u0236\7B\2\2\u0236\u0237\5\u00c4c\2\u0237Y\3\2\2\2\u0238"+
		"\u0239\7K\2\2\u0239\u023a\5\u00c4c\2\u023a\u023b\7\u0083\2\2\u023b\u023c"+
		"\5\u00c4c\2\u023c[\3\2\2\2\u023d\u023e\7D\2\2\u023e\u023f\5\u00c4c\2\u023f"+
		"]\3\2\2\2\u0240\u0242\7\31\2\2\u0241\u0240\3\2\2\2\u0241\u0242\3\2\2\2"+
		"\u0242\u0243\3\2\2\2\u0243\u0244\5\u0098M\2\u0244\u0245\7\u00a3\2\2\u0245"+
		"\u0246\7\u00a5\2\2\u0246\u0247\7\u0083\2\2\u0247\u0248\7G\2\2\u0248\u0249"+
		"\7\u00a3\2\2\u0249\u024a\5\u00c0a\2\u024a\u024b\7\u00a5\2\2\u024b_\3\2"+
		"\2\2\u024c\u025d\5b\62\2\u024d\u025d\5d\63\2\u024e\u025d\5f\64\2\u024f"+
		"\u025d\5h\65\2\u0250\u025d\5j\66\2\u0251\u025d\5l\67\2\u0252\u025d\5n"+
		"8\2\u0253\u025d\5p9\2\u0254\u025d\5r:\2\u0255\u025d\5t;\2\u0256\u025d"+
		"\5v<\2\u0257\u025d\5x=\2\u0258\u025d\5z>\2\u0259\u025d\5|?\2\u025a\u025d"+
		"\5~@\2\u025b\u025d\5\u0080A\2\u025c\u024c\3\2\2\2\u025c\u024d\3\2\2\2"+
		"\u025c\u024e\3\2\2\2\u025c\u024f\3\2\2\2\u025c\u0250\3\2\2\2\u025c\u0251"+
		"\3\2\2\2\u025c\u0252\3\2\2\2\u025c\u0253\3\2\2\2\u025c\u0254\3\2\2\2\u025c"+
		"\u0255\3\2\2\2\u025c\u0256\3\2\2\2\u025c\u0257\3\2\2\2\u025c\u0258\3\2"+
		"\2\2\u025c\u0259\3\2\2\2\u025c\u025a\3\2\2\2\u025c\u025b\3\2\2\2\u025d"+
		"a\3\2\2\2\u025e\u025f\7N\2\2\u025fc\3\2\2\2\u0260\u0261\7Q\2\2\u0261\u026a"+
		"\5\u00c4c\2\u0262\u0263\7Q\2\2\u0263\u0264\5\u00c4c\2\u0264\u0265\7\u00a1"+
		"\2\2\u0265\u0266\5\u00c4c\2\u0266\u0267\7\u00a1\2\2\u0267\u0268\5\u00c4"+
		"c\2\u0268\u026a\3\2\2\2\u0269\u0260\3\2\2\2\u0269\u0262\3\2\2\2\u026a"+
		"e\3\2\2\2\u026b\u026c\7R\2\2\u026c\u0275\5\u00c4c\2\u026d\u026e\7R\2\2"+
		"\u026e\u026f\5\u00c4c\2\u026f\u0270\7\u00a1\2\2\u0270\u0271\5\u00c4c\2"+
		"\u0271\u0272\7\u00a1\2\2\u0272\u0273\5\u00c4c\2\u0273\u0275\3\2\2\2\u0274"+
		"\u026b\3\2\2\2\u0274\u026d\3\2\2\2\u0275g\3\2\2\2\u0276\u0285\7W\2\2\u0277"+
		"\u0278\7W\2\2\u0278\u0279\5\u00c4c\2\u0279\u027a\7\u00a1\2\2\u027a\u027b"+
		"\5\u00c4c\2\u027b\u0285\3\2\2\2\u027c\u027d\7W\2\2\u027d\u0285\7L\2\2"+
		"\u027e\u027f\7W\2\2\u027f\u0280\7L\2\2\u0280\u0281\5\u00c4c\2\u0281\u0282"+
		"\7\u00a1\2\2\u0282\u0283\5\u00c4c\2\u0283\u0285\3\2\2\2\u0284\u0276\3"+
		"\2\2\2\u0284\u0277\3\2\2\2\u0284\u027c\3\2\2\2\u0284\u027e\3\2\2\2\u0285"+
		"i\3\2\2\2\u0286\u0287\7U\2\2\u0287k\3\2\2\2\u0288\u0289\7M\2\2\u0289\u028a"+
		"\5\u00c4c\2\u028a\u028b\7\u00a1\2\2\u028b\u028c\5\u00c4c\2\u028c\u028d"+
		"\7\u00a1\2\2\u028d\u028e\5\u00c4c\2\u028e\u0298\3\2\2\2\u028f\u0290\7"+
		"M\2\2\u0290\u0291\7T\2\2\u0291\u0292\5\u00c4c\2\u0292\u0293\7\u00a1\2"+
		"\2\u0293\u0294\5\u00c4c\2\u0294\u0295\7\u00a1\2\2\u0295\u0296\5\u00c4"+
		"c\2\u0296\u0298\3\2\2\2\u0297\u0288\3\2\2\2\u0297\u028f\3\2\2\2\u0298"+
		"m\3\2\2\2\u0299\u029a\7X\2\2\u029a\u029b\5\u00c4c\2\u029b\u029c\7\u00a1"+
		"\2\2\u029c\u029d\5\u00c4c\2\u029d\u029e\7\u00a1\2\2\u029e\u029f\5\u00c4"+
		"c\2\u029f\u02a0\7\u00a1\2\2\u02a0\u02a1\5\u00c4c\2\u02a1o\3\2\2\2\u02a2"+
		"\u02a3\7Z\2\2\u02a3\u02a4\5\u00c4c\2\u02a4\u02a5\7\u00a1\2\2\u02a5\u02a6"+
		"\5\u00c4c\2\u02a6\u02a7\7\u00a1\2\2\u02a7\u02a8\5\u00c4c\2\u02a8\u02a9"+
		"\7\u00a1\2\2\u02a9\u02aa\5\u00c4c\2\u02aa\u02b6\3\2\2\2\u02ab\u02ac\7"+
		"Z\2\2\u02ac\u02ad\7T\2\2\u02ad\u02ae\5\u00c4c\2\u02ae\u02af\7\u00a1\2"+
		"\2\u02af\u02b0\5\u00c4c\2\u02b0\u02b1\7\u00a1\2\2\u02b1\u02b2\5\u00c4"+
		"c\2\u02b2\u02b3\7\u00a1\2\2\u02b3\u02b4\5\u00c4c\2\u02b4\u02b6\3\2\2\2"+
		"\u02b5\u02a2\3\2\2\2\u02b5\u02ab\3\2\2\2\u02b6q\3\2\2\2\u02b7\u02b8\7"+
		"d\2\2\u02b8\u02b9\5\u00c4c\2\u02b9\u02ba\7\u00a1\2\2\u02ba\u02bb\5\u00c4"+
		"c\2\u02bb\u02bc\7\u00a1\2\2\u02bc\u02bd\5\u00c4c\2\u02bd\u02be\7\u00a1"+
		"\2\2\u02be\u02bf\5\u00c4c\2\u02bf\u02c0\7\u00a1\2\2\u02c0\u02c1\5\u00c4"+
		"c\2\u02c1\u02c2\7\u00a1\2\2\u02c2\u02c3\5\u00c4c\2\u02c3\u02e7\3\2\2\2"+
		"\u02c4\u02c5\7d\2\2\u02c5\u02c6\7T\2\2\u02c6\u02c7\5\u00c4c\2\u02c7\u02c8"+
		"\7\u00a1\2\2\u02c8\u02c9\5\u00c4c\2\u02c9\u02ca\7\u00a1\2\2\u02ca\u02cb"+
		"\5\u00c4c\2\u02cb\u02cc\7\u00a1\2\2\u02cc\u02cd\5\u00c4c\2\u02cd\u02ce"+
		"\7\u00a1\2\2\u02ce\u02cf\5\u00c4c\2\u02cf\u02d0\7\u00a1\2\2\u02d0\u02d1"+
		"\5\u00c4c\2\u02d1\u02e7\3\2\2\2\u02d2\u02d3\7d\2\2\u02d3\u02d4\7_\2\2"+
		"\u02d4\u02d5\5\u00c4c\2\u02d5\u02d6\7\u00a1\2\2\u02d6\u02d7\5\u00c4c\2"+
		"\u02d7\u02d8\7\u00a1\2\2\u02d8\u02d9\5\u00c4c\2\u02d9\u02da\7\u00a1\2"+
		"\2\u02da\u02db\5\u00c4c\2\u02db\u02dc\7\u00a1\2\2\u02dc\u02dd\5\u00c4"+
		"c\2\u02dd\u02de\7\u00a1\2\2\u02de\u02df\5\u00c4c\2\u02df\u02e0\7\u00a1"+
		"\2\2\u02e0\u02e1\5\u00c4c\2\u02e1\u02e2\7\u00a1\2\2\u02e2\u02e3\5\u00c4"+
		"c\2\u02e3\u02e4\7\u00a1\2\2\u02e4\u02e5\5\u00c4c\2\u02e5\u02e7\3\2\2\2"+
		"\u02e6\u02b7\3\2\2\2\u02e6\u02c4\3\2\2\2\u02e6\u02d2\3\2\2\2\u02e7s\3"+
		"\2\2\2\u02e8\u02e9\7[\2\2\u02e9\u02ea\5\u00c4c\2\u02ea\u02eb\7\u00a1\2"+
		"\2\u02eb\u02ec\5\u00c4c\2\u02ecu\3\2\2\2\u02ed\u02ee\7O\2\2\u02ee\u02ef"+
		"\5\u00c4c\2\u02ef\u02f0\7\u00a1\2\2\u02f0\u02f1\5\u00c4c\2\u02f1\u02f2"+
		"\7\u00a1\2\2\u02f2\u02f3\5\u00c4c\2\u02f3\u02f4\7\u00a1\2\2\u02f4\u02f5"+
		"\5\u00c4c\2\u02f5w\3\2\2\2\u02f6\u02f7\7P\2\2\u02f7y\3\2\2\2\u02f8\u02f9"+
		"\7`\2\2\u02f9\u02fa\5\u00c4c\2\u02fa\u02fb\7\u00a1\2\2\u02fb\u02fc\5\u00c4"+
		"c\2\u02fc\u02fd\7\u00a1\2\2\u02fd\u02fe\5\u00c4c\2\u02fe\u02ff\7\u00a1"+
		"\2\2\u02ff\u0300\5\u00c4c\2\u0300{\3\2\2\2\u0301\u0302\7a\2\2\u0302\u0303"+
		"\5\u00c4c\2\u0303\u0304\7\u00a1\2\2\u0304\u0305\5\u00c4c\2\u0305\u0306"+
		"\7\u00a1\2\2\u0306\u0307\5\u00c4c\2\u0307\u0308\7\u00a1\2\2\u0308\u0309"+
		"\5\u00c0a\2\u0309}\3\2\2\2\u030a\u030b\t\4\2\2\u030b\u030c\5\u00c4c\2"+
		"\u030c\u030d\7\u00a1\2\2\u030d\u030e\5\u00c4c\2\u030e\u030f\7\u00a1\2"+
		"\2\u030f\u0310\5\u00c4c\2\u0310\u0311\7\u00a1\2\2\u0311\u0312\5\u00c0"+
		"a\2\u0312\177\3\2\2\2\u0313\u0314\7V\2\2\u0314\u0081\3\2\2\2\u0315\u0316"+
		"\7\63\2\2\u0316\u031b\5\u00b0Y\2\u0317\u0318\7\u00a1\2\2\u0318\u031a\5"+
		"\u00b0Y\2\u0319\u0317\3\2\2\2\u031a\u031d\3\2\2\2\u031b\u0319\3\2\2\2"+
		"\u031b\u031c\3\2\2\2\u031c\u031e\3\2\2\2\u031d\u031b\3\2\2\2\u031e\u031f"+
		"\7\u00a0\2\2\u031f\u0320\5\b\5\2\u0320\u0083\3\2\2\2\u0321\u0322\t\5\2"+
		"\2\u0322\u0085\3\2\2\2\u0323\u0326\5\u00b2Z\2\u0324\u0326\5\u00be`\2\u0325"+
		"\u0323\3\2\2\2\u0325\u0324\3\2\2\2\u0326\u0087\3\2\2\2\u0327\u032b\5\u008c"+
		"G\2\u0328\u032b\5\u008eH\2\u0329\u032b\5\u008aF\2\u032a\u0327\3\2\2\2"+
		"\u032a\u0328\3\2\2\2\u032a\u0329\3\2\2\2\u032b\u0089\3\2\2\2\u032c\u032d"+
		"\5\u009aN\2\u032d\u008b\3\2\2\2\u032e\u032f\5\u0094K\2\u032f\u0330\7\u00a3"+
		"\2\2\u0330\u0333\5\u00c4c\2\u0331\u0332\7\u00a1\2\2\u0332\u0334\5\u00c4"+
		"c\2\u0333\u0331\3\2\2\2\u0333\u0334\3\2\2\2\u0334\u0335\3\2\2\2\u0335"+
		"\u0336\7\u00a5\2\2\u0336\u0367\3\2\2\2\u0337\u0338\5\u0096L\2\u0338\u0339"+
		"\7\u00a3\2\2\u0339\u033c\5\u00c4c\2\u033a\u033b\7\u00a1\2\2\u033b\u033d"+
		"\5\u00c4c\2\u033c\u033a\3\2\2\2\u033c\u033d\3\2\2\2\u033d\u033e\3\2\2"+
		"\2\u033e\u033f\7\u00a5\2\2\u033f\u0367\3\2\2\2\u0340\u0341\5\u008aF\2"+
		"\u0341\u0342\7\u00a3\2\2\u0342\u0343\5\u00c4c\2\u0343\u0344\7\u00a5\2"+
		"\2\u0344\u0345\5\u0096L\2\u0345\u0367\3\2\2\2\u0346\u0347\5\u008aF\2\u0347"+
		"\u0348\7\u00a3\2\2\u0348\u0349\5\u00c4c\2\u0349\u034a\7\u00a5\2\2\u034a"+
		"\u034b\5\u0094K\2\u034b\u0367\3\2\2\2\u034c\u034d\7\u00ac\2\2\u034d\u034f"+
		"\7\u00a3\2\2\u034e\u0350\5\u00a4S\2\u034f\u034e\3\2\2\2\u034f\u0350\3"+
		"\2\2\2\u0350\u0351\3\2\2\2\u0351\u0367\7\u00a5\2\2\u0352\u0353\7\u00ab"+
		"\2\2\u0353\u0355\7\u00a3\2\2\u0354\u0356\5\u00a4S\2\u0355\u0354\3\2\2"+
		"\2\u0355\u0356\3\2\2\2\u0356\u0357\3\2\2\2\u0357\u0367\7\u00a5\2\2\u0358"+
		"\u0359\7\u00ad\2\2\u0359\u035b\7\u00a3\2\2\u035a\u035c\5\u00a4S\2\u035b"+
		"\u035a\3\2\2\2\u035b\u035c\3\2\2\2\u035c\u035d\3\2\2\2\u035d\u0367\7\u00a5"+
		"\2\2\u035e\u0367\5\u0094K\2\u035f\u0367\5\u0096L\2\u0360\u0361\5\u008a"+
		"F\2\u0361\u0362\5\u0094K\2\u0362\u0367\3\2\2\2\u0363\u0364\5\u008aF\2"+
		"\u0364\u0365\5\u0096L\2\u0365\u0367\3\2\2\2\u0366\u032e\3\2\2\2\u0366"+
		"\u0337\3\2\2\2\u0366\u0340\3\2\2\2\u0366\u0346\3\2\2\2\u0366\u034c\3\2"+
		"\2\2\u0366\u0352\3\2\2\2\u0366\u0358\3\2\2\2\u0366\u035e\3\2\2\2\u0366"+
		"\u035f\3\2\2\2\u0366\u0360\3\2\2\2\u0366\u0363\3\2\2\2\u0367\u008d\3\2"+
		"\2\2\u0368\u0369\5\u0098M\2\u0369\u036a\7\u00a3\2\2\u036a\u036d\5\u00c4"+
		"c\2\u036b\u036c\7\u00a1\2\2\u036c\u036e\5\u00c4c\2\u036d\u036b\3\2\2\2"+
		"\u036d\u036e\3\2\2\2\u036e\u036f\3\2\2\2\u036f\u0370\7\u00a5\2\2\u0370"+
		"\u037c\3\2\2\2\u0371\u0372\5\u008aF\2\u0372\u0373\7\u00a3\2\2\u0373\u0374"+
		"\5\u00c4c\2\u0374\u0375\7\u00a5\2\2\u0375\u0376\5\u0098M\2\u0376\u037c"+
		"\3\2\2\2\u0377\u037c\5\u0098M\2\u0378\u0379\5\u008aF\2\u0379\u037a\5\u0098"+
		"M\2\u037a\u037c\3\2\2\2\u037b\u0368\3\2\2\2\u037b\u0371\3\2\2\2\u037b"+
		"\u0377\3\2\2\2\u037b\u0378\3\2\2\2\u037c\u008f\3\2\2\2\u037d\u0381\5\u0094"+
		"K\2\u037e\u0381\5\u0096L\2\u037f\u0381\5\u0098M\2\u0380\u037d\3\2\2\2"+
		"\u0380\u037e\3\2\2\2\u0380\u037f\3\2\2\2\u0381\u0091\3\2\2\2\u0382\u0385"+
		"\5\u0094K\2\u0383\u0385\5\u0096L\2\u0384\u0382\3\2\2\2\u0384\u0383\3\2"+
		"\2\2\u0385\u0093\3\2\2\2\u0386\u0387\7\u00ae\2\2\u0387\u0095\3\2\2\2\u0388"+
		"\u0389\7\u00af\2\2\u0389\u0097\3\2\2\2\u038a\u038b\7\u00b0\2\2\u038b\u0099"+
		"\3\2\2\2\u038c\u038d\7\u00b1\2\2\u038d\u009b\3\2\2\2\u038e\u03b6\5\u0090"+
		"I\2\u038f\u039a\5\u0090I\2\u0390\u0391\7\u00a3\2\2\u0391\u0394\5\u00c4"+
		"c\2\u0392\u0393\7\u00a1\2\2\u0393\u0395\5\u00c4c\2\u0394\u0392\3\2\2\2"+
		"\u0394\u0395\3\2\2\2\u0395\u0396\3\2\2\2\u0396\u0397\7\u00a5\2\2\u0397"+
		"\u0399\3\2\2\2\u0398\u0390\3\2\2\2\u0399\u039c\3\2\2\2\u039a\u0398\3\2"+
		"\2\2\u039a\u039b\3\2\2\2\u039b\u03b6\3\2\2\2\u039c\u039a\3\2\2\2\u039d"+
		"\u039e\5\u008aF\2\u039e\u039f\5\u0094K\2\u039f\u03b6\3\2\2\2\u03a0\u03a1"+
		"\5\u008aF\2\u03a1\u03a2\5\u0096L\2\u03a2\u03b6\3\2\2\2\u03a3\u03a4\5\u008a"+
		"F\2\u03a4\u03a5\7\u00a3\2\2\u03a5\u03a6\5\u00c4c\2\u03a6\u03a7\7\u00a5"+
		"\2\2\u03a7\u03a8\5\u0094K\2\u03a8\u03b6\3\2\2\2\u03a9\u03aa\5\u008aF\2"+
		"\u03aa\u03ab\7\u00a3\2\2\u03ab\u03ac\5\u00c4c\2\u03ac\u03ad\7\u00a5\2"+
		"\2\u03ad\u03ae\5\u0096L\2\u03ae\u03b6\3\2\2\2\u03af\u03b6\5\u008aF\2\u03b0"+
		"\u03b1\5\u008aF\2\u03b1\u03b2\7\u00a3\2\2\u03b2\u03b3\5\u00c4c\2\u03b3"+
		"\u03b4\7\u00a5\2\2\u03b4\u03b6\3\2\2\2\u03b5\u038e\3\2\2\2\u03b5\u038f"+
		"\3\2\2\2\u03b5\u039d\3\2\2\2\u03b5\u03a0\3\2\2\2\u03b5\u03a3\3\2\2\2\u03b5"+
		"\u03a9\3\2\2\2\u03b5\u03af\3\2\2\2\u03b5\u03b0\3\2\2\2\u03b6\u009d\3\2"+
		"\2\2\u03b7\u03b8\5\u0090I\2\u03b8\u03b9\7\u00a3\2\2\u03b9\u03be\5\u00c4"+
		"c\2\u03ba\u03bb\7\u00a1\2\2\u03bb\u03bd\5\u00c4c\2\u03bc\u03ba\3\2\2\2"+
		"\u03bd\u03c0\3\2\2\2\u03be\u03bc\3\2\2\2\u03be\u03bf\3\2\2\2\u03bf\u03c1"+
		"\3\2\2\2\u03c0\u03be\3\2\2\2\u03c1\u03c2\7\u00a5\2\2\u03c2\u03cb\3\2\2"+
		"\2\u03c3\u03c4\5\u008aF\2\u03c4\u03c5\7\u00a3\2\2\u03c5\u03c6\5\u00c4"+
		"c\2\u03c6\u03c7\7\u00a1\2\2\u03c7\u03c8\5\u0094K\2\u03c8\u03c9\7\u00a5"+
		"\2\2\u03c9\u03cb\3\2\2\2\u03ca\u03b7\3\2\2\2\u03ca\u03c3\3\2\2\2\u03cb"+
		"\u009f\3\2\2\2\u03cc\u03d1\5\u009cO\2\u03cd\u03ce\7\u00a1\2\2\u03ce\u03d0"+
		"\5\u009cO\2\u03cf\u03cd\3\2\2\2\u03d0\u03d3\3\2\2\2\u03d1\u03cf\3\2\2"+
		"\2\u03d1\u03d2\3\2\2\2\u03d2\u00a1\3\2\2\2\u03d3\u03d1\3\2\2\2\u03d4\u03d6"+
		"\7\'\2\2\u03d5\u03d4\3\2\2\2\u03d5\u03d6\3\2\2\2\u03d6\u03d7\3\2\2\2\u03d7"+
		"\u03df\5\u0090I\2\u03d8\u03da\7\u00a1\2\2\u03d9\u03db\7\'\2\2\u03da\u03d9"+
		"\3\2\2\2\u03da\u03db\3\2\2\2\u03db\u03dc\3\2\2\2\u03dc\u03de\5\u0090I"+
		"\2\u03dd\u03d8\3\2\2\2\u03de\u03e1\3\2\2\2\u03df\u03dd\3\2\2\2\u03df\u03e0"+
		"\3\2\2\2\u03e0\u00a3\3\2\2\2\u03e1\u03df\3\2\2\2\u03e2\u03e7\5\u00b0Y"+
		"\2\u03e3\u03e4\7\u00a1\2\2\u03e4\u03e6\5\u00b0Y\2\u03e5\u03e3\3\2\2\2"+
		"\u03e6\u03e9\3\2\2\2\u03e7\u03e5\3\2\2\2\u03e7\u03e8\3\2\2\2\u03e8\u00a5"+
		"\3\2\2\2\u03e9\u03e7\3\2\2\2\u03ea\u03ef\5\u00b0Y\2\u03eb\u03ec\7\u00a1"+
		"\2\2\u03ec\u03ee\5\u00b0Y\2\u03ed\u03eb\3\2\2\2\u03ee\u03f1\3\2\2\2\u03ef"+
		"\u03ed\3\2\2\2\u03ef\u03f0\3\2\2\2\u03f0\u00a7\3\2\2\2\u03f1\u03ef\3\2"+
		"\2\2\u03f2\u03f4\7\u009e\2\2\u03f3\u03f2\3\2\2\2\u03f3\u03f4\3\2\2\2\u03f4"+
		"\u03f5\3\2\2\2\u03f5\u03fe\5\u00b0Y\2\u03f6\u03f7\7(\2\2\u03f7\u03f8\7"+
		"\u00a3\2\2\u03f8\u03f9\5\u00c4c\2\u03f9\u03fa\7\u00a5\2\2\u03fa\u03fe"+
		"\3\2\2\2\u03fb\u03fc\7(\2\2\u03fc\u03fe\5\u00c4c\2\u03fd\u03f3\3\2\2\2"+
		"\u03fd\u03f6\3\2\2\2\u03fd\u03fb\3\2\2\2\u03fe\u00a9\3\2\2\2\u03ff\u0401"+
		"\7\u009d\2\2\u0400\u03ff\3\2\2\2\u0401\u0402\3\2\2\2\u0402\u0400\3\2\2"+
		"\2\u0402\u0403\3\2\2\2\u0403\u00ab\3\2\2\2\u0404\u0408\7\u00a1\2\2\u0405"+
		"\u0408\7\u00a6\2\2\u0406\u0408\5\u00aaV\2\u0407\u0404\3\2\2\2\u0407\u0405"+
		"\3\2\2\2\u0407\u0406\3\2\2\2\u0408\u00ad\3\2\2\2\u0409\u040b\5\u00aaV"+
		"\2\u040a\u0409\3\2\2\2\u040a\u040b\3\2\2\2\u040b\u040d\3\2\2\2\u040c\u040e"+
		"\7\u00a6\2\2\u040d\u040c\3\2\2\2\u040d\u040e\3\2\2\2\u040e\u040f\3\2\2"+
		"\2\u040f\u0415\5\u00a8U\2\u0410\u0411\5\u00acW\2\u0411\u0412\5\u00a8U"+
		"\2\u0412\u0414\3\2\2\2\u0413\u0410\3\2\2\2\u0414\u0417\3\2\2\2\u0415\u0413"+
		"\3\2\2\2\u0415\u0416\3\2\2\2\u0416\u0419\3\2\2\2\u0417\u0415\3\2\2\2\u0418"+
		"\u041a\7\u00a6\2\2\u0419\u0418\3\2\2\2\u0419\u041a\3\2\2\2\u041a\u00af"+
		"\3\2\2\2\u041b\u041e\5\u00c4c\2\u041c\u041e\5\u00c0a\2\u041d\u041b\3\2"+
		"\2\2\u041d\u041c\3\2\2\2\u041e\u00b1\3\2\2\2\u041f\u0425\5\u00b4[\2\u0420"+
		"\u0425\5\u00ba^\2\u0421\u0425\5\u00b6\\\2\u0422\u0425\5\u00b8]\2\u0423"+
		"\u0425\5\u00c6d\2\u0424\u041f\3\2\2\2\u0424\u0420\3\2\2\2\u0424\u0421"+
		"\3\2\2\2\u0424\u0422\3\2\2\2\u0424\u0423\3\2\2\2\u0425\u00b3\3\2\2\2\u0426"+
		"\u0428\t\6\2\2\u0427\u0426\3\2\2\2\u0427\u0428\3\2\2\2\u0428\u0429\3\2"+
		"\2\2\u0429\u042a\7\u00b5\2\2\u042a\u00b5\3\2\2\2\u042b\u042c\7\u00b3\2"+
		"\2\u042c\u00b7\3\2\2\2\u042d\u042e\7\u00b4\2\2\u042e\u00b9\3\2\2\2\u042f"+
		"\u0431\t\6\2\2\u0430\u042f\3\2\2\2\u0430\u0431\3\2\2\2\u0431\u0432\3\2"+
		"\2\2\u0432\u0433\7\u00b6\2\2\u0433\u00bb\3\2\2\2\u0434\u0469\7y\2\2\u0435"+
		"\u0436\7|\2\2\u0436\u0469\5\u00c4c\2\u0437\u0438\7|\2\2\u0438\u0439\7"+
		"\u00a3\2\2\u0439\u043a\5\u00c4c\2\u043a\u043b\7\u00a5\2\2\u043b\u0469"+
		"\3\2\2\2\u043c\u043d\7}\2\2\u043d\u043e\7\u00a3\2\2\u043e\u043f\5\u00c0"+
		"a\2\u043f\u0440\7\u00a1\2\2\u0440\u0441\5\u00c4c\2\u0441\u0442\7\u00a5"+
		"\2\2\u0442\u0469\3\2\2\2\u0443\u0444\7~\2\2\u0444\u0445\7\u00a3\2\2\u0445"+
		"\u0446\5\u00c0a\2\u0446\u0447\7\u00a1\2\2\u0447\u0448\5\u00c4c\2\u0448"+
		"\u0449\7\u00a1\2\2\u0449\u044a\5\u00c4c\2\u044a\u044b\7\u00a5\2\2\u044b"+
		"\u0469\3\2\2\2\u044c\u044d\7~\2\2\u044d\u044e\7\u00a3\2\2\u044e\u044f"+
		"\5\u00c0a\2\u044f\u0450\7\u00a1\2\2\u0450\u0451\5\u00c4c\2\u0451\u0452"+
		"\7\u00a5\2\2\u0452\u0469\3\2\2\2\u0453\u0454\7\177\2\2\u0454\u0455\7\u00a3"+
		"\2\2\u0455\u0456\5\u00c0a\2\u0456\u0457\7\u00a1\2\2\u0457\u0458\5\u00c4"+
		"c\2\u0458\u0459\7\u00a5\2\2\u0459\u0469\3\2\2\2\u045a\u045b\7z\2\2\u045b"+
		"\u0469\5\u00c4c\2\u045c\u045d\7z\2\2\u045d\u045e\7\u009e\2\2\u045e\u0469"+
		"\5\u00c4c\2\u045f\u0460\7{\2\2\u0460\u0461\7\u00a3\2\2\u0461\u0462\5\u00c4"+
		"c\2\u0462\u0463\7\u00a1\2\2\u0463\u0464\5\u00c0a\2\u0464\u0465\7\u00a5"+
		"\2\2\u0465\u0469\3\2\2\2\u0466\u0467\7\67\2\2\u0467\u0469\5\u00c4c\2\u0468"+
		"\u0434\3\2\2\2\u0468\u0435\3\2\2\2\u0468\u0437\3\2\2\2\u0468\u043c\3\2"+
		"\2\2\u0468\u0443\3\2\2\2\u0468\u044c\3\2\2\2\u0468\u0453\3\2\2\2\u0468"+
		"\u045a\3\2\2\2\u0468\u045c\3\2\2\2\u0468\u045f\3\2\2\2\u0468\u0466\3\2"+
		"\2\2\u0469\u00bd\3\2\2\2\u046a\u046b\7\u00a9\2\2\u046b\u00bf\3\2\2\2\u046c"+
		"\u046d\ba\1\2\u046d\u046e\7\u00a3\2\2\u046e\u046f\5\u00c0a\2\u046f\u0470"+
		"\7\u00a5\2\2\u0470\u0475\3\2\2\2\u0471\u0475\5\u00bc_\2\u0472\u0475\5"+
		"\u008eH\2\u0473\u0475\5\u00be`\2\u0474\u046c\3\2\2\2\u0474\u0471\3\2\2"+
		"\2\u0474\u0472\3\2\2\2\u0474\u0473\3\2\2\2\u0475\u047b\3\2\2\2\u0476\u0477"+
		"\f\5\2\2\u0477\u0478\7\u0090\2\2\u0478\u047a\5\u00c0a\6\u0479\u0476\3"+
		"\2\2\2\u047a\u047d\3\2\2\2\u047b\u0479\3\2\2\2\u047b\u047c\3\2\2\2\u047c"+
		"\u00c1\3\2\2\2\u047d\u047b\3\2\2\2\u047e\u051b\7f\2\2\u047f\u051b\7\20"+
		"\2\2\u0480\u051b\7\60\2\2\u0481\u051b\7e\2\2\u0482\u051b\7\u0080\2\2\u0483"+
		"\u051b\7\u0081\2\2\u0484\u051b\7\u0082\2\2\u0485\u0486\7\u0080\2\2\u0486"+
		"\u0487\7\u00a3\2\2\u0487\u0488\5\u00c4c\2\u0488\u0489\7\u00a5\2\2\u0489"+
		"\u051b\3\2\2\2\u048a\u048b\7h\2\2\u048b\u048c\7\u00a3\2\2\u048c\u048d"+
		"\5\u00c4c\2\u048d\u048e\7\u00a5\2\2\u048e\u051b\3\2\2\2\u048f\u0490\7"+
		"i\2\2\u0490\u0491\7\u00a3\2\2\u0491\u0492\5\u00c4c\2\u0492\u0493\7\u00a5"+
		"\2\2\u0493\u051b\3\2\2\2\u0494\u0495\7j\2\2\u0495\u0496\7\u00a3\2\2\u0496"+
		"\u0497\5\u00c4c\2\u0497\u0498\7\u00a5\2\2\u0498\u051b\3\2\2\2\u0499\u049a"+
		"\7k\2\2\u049a\u049b\7\u00a3\2\2\u049b\u049c\5\u00c4c\2\u049c\u049d\7\u00a5"+
		"\2\2\u049d\u051b\3\2\2\2\u049e\u049f\7l\2\2\u049f\u04a0\7\u00a3\2\2\u04a0"+
		"\u04a1\5\u00c4c\2\u04a1\u04a2\7\u00a5\2\2\u04a2\u051b\3\2\2\2\u04a3\u04a4"+
		"\7m\2\2\u04a4\u04a5\7\u00a3\2\2\u04a5\u04a6\5\u00c4c\2\u04a6\u04a7\7\u00a5"+
		"\2\2\u04a7\u051b\3\2\2\2\u04a8\u04a9\7n\2\2\u04a9\u04aa\7\u00a3\2\2\u04aa"+
		"\u04ab\5\u00c4c\2\u04ab\u04ac\7\u00a5\2\2\u04ac\u051b\3\2\2\2\u04ad\u04ae"+
		"\7o\2\2\u04ae\u04af\7\u00a3\2\2\u04af\u04b0\5\u00c4c\2\u04b0\u04b1\7\u00a5"+
		"\2\2\u04b1\u051b\3\2\2\2\u04b2\u04b3\7p\2\2\u04b3\u04b4\7\u00a3\2\2\u04b4"+
		"\u04b5\5\u00c4c\2\u04b5\u04b6\7\u00a5\2\2\u04b6\u051b\3\2\2\2\u04b7\u04b8"+
		"\7q\2\2\u04b8\u04b9\7\u00a3\2\2\u04b9\u04ba\5\u00c4c\2\u04ba\u04bb\7\u00a5"+
		"\2\2\u04bb\u051b\3\2\2\2\u04bc\u04bd\7r\2\2\u04bd\u04be\7\u00a3\2\2\u04be"+
		"\u04bf\5\u00c4c\2\u04bf\u04c0\7\u00a5\2\2\u04c0\u051b\3\2\2\2\u04c1\u04c2"+
		"\7s\2\2\u04c2\u04c3\7\u00a3\2\2\u04c3\u04c4\5\u00c4c\2\u04c4\u04c5\7\u00a5"+
		"\2\2\u04c5\u051b\3\2\2\2\u04c6\u04c7\7g\2\2\u04c7\u04c8\7\u00a3\2\2\u04c8"+
		"\u04c9\5\u00c4c\2\u04c9\u04ca\7\u00a5\2\2\u04ca\u051b\3\2\2\2\u04cb\u04cc"+
		"\7t\2\2\u04cc\u04cd\7\u00a3\2\2\u04cd\u04ce\5\u00c4c\2\u04ce\u04cf\7\u00a5"+
		"\2\2\u04cf\u051b\3\2\2\2\u04d0\u051b\78\2\2\u04d1\u04d2\7\66\2\2\u04d2"+
		"\u051b\5\u00c4c\2\u04d3\u04d4\7\26\2\2\u04d4\u04d5\7\u00a3\2\2\u04d5\u04d6"+
		"\5\u00c4c\2\u04d6\u04d7\7\u00a5\2\2\u04d7\u051b\3\2\2\2\u04d8\u04d9\7"+
		"\22\2\2\u04d9\u04da\7\u00a3\2\2\u04da\u04db\5\u00c4c\2\u04db\u04dc\7\u00a5"+
		"\2\2\u04dc\u051b\3\2\2\2\u04dd\u051b\7]\2\2\u04de\u051b\7^\2\2\u04df\u04e0"+
		"\7\\\2\2\u04e0\u04e1\7\u00a3\2\2\u04e1\u04e2\5\u00c4c\2\u04e2\u04e3\7"+
		"\u00a1\2\2\u04e3\u04e4\5\u00c4c\2\u04e4\u04e5\7\u00a5\2\2\u04e5\u051b"+
		"\3\2\2\2\u04e6\u04e7\7Q\2\2\u04e7\u04e8\7\u00a3\2\2\u04e8\u04e9\5\u00c4"+
		"c\2\u04e9\u04ea\7\u00a1\2\2\u04ea\u04eb\5\u00c4c\2\u04eb\u04ec\7\u00a1"+
		"\2\2\u04ec\u04ed\5\u00c4c\2\u04ed\u04ee\7\u00a3\2\2\u04ee\u051b\3\2\2"+
		"\2\u04ef\u04f0\7B\2\2\u04f0\u051b\5\u00c4c\2\u04f1\u04f2\7E\2\2\u04f2"+
		"\u051b\5\u00c4c\2\u04f3\u04f4\7H\2\2\u04f4\u04f5\7\u00a3\2\2\u04f5\u04f6"+
		"\5\u00c0a\2\u04f6\u04f7\7\u00a5\2\2\u04f7\u051b\3\2\2\2\u04f8\u04f9\7"+
		"I\2\2\u04f9\u04fa\7\u00a3\2\2\u04fa\u04fb\5\u00c0a\2\u04fb\u04fc\7\u00a5"+
		"\2\2\u04fc\u051b\3\2\2\2\u04fd\u04fe\7J\2\2\u04fe\u04ff\7\u00a3\2\2\u04ff"+
		"\u0500\5\u00c0a\2\u0500\u0501\7\u00a5\2\2\u0501\u051b\3\2\2\2\u0502\u0503"+
		"\7K\2\2\u0503\u051b\5\u00c4c\2\u0504\u0505\7u\2\2\u0505\u051b\5\u00c0"+
		"a\2\u0506\u0507\7v\2\2\u0507\u051b\5\u00c0a\2\u0508\u0509\7w\2\2\u0509"+
		"\u050a\7\u00a3\2\2\u050a\u050b\5\u00c0a\2\u050b\u050c\7\u00a1\2\2\u050c"+
		"\u050d\5\u00c0a\2\u050d\u050e\7\u00a5\2\2\u050e\u051b\3\2\2\2\u050f\u0510"+
		"\7w\2\2\u0510\u0511\7\u00a3\2\2\u0511\u0512\5\u00c0a\2\u0512\u0513\7\u00a1"+
		"\2\2\u0513\u0514\5\u00c0a\2\u0514\u0515\7\u00a1\2\2\u0515\u0516\5\u00c4"+
		"c\2\u0516\u0517\7\u00a5\2\2\u0517\u051b\3\2\2\2\u0518\u0519\7x\2\2\u0519"+
		"\u051b\5\u00c0a\2\u051a\u047e\3\2\2\2\u051a\u047f\3\2\2\2\u051a\u0480"+
		"\3\2\2\2\u051a\u0481\3\2\2\2\u051a\u0482\3\2\2\2\u051a\u0483\3\2\2\2\u051a"+
		"\u0484\3\2\2\2\u051a\u0485\3\2\2\2\u051a\u048a\3\2\2\2\u051a\u048f\3\2"+
		"\2\2\u051a\u0494\3\2\2\2\u051a\u0499\3\2\2\2\u051a\u049e\3\2\2\2\u051a"+
		"\u04a3\3\2\2\2\u051a\u04a8\3\2\2\2\u051a\u04ad\3\2\2\2\u051a\u04b2\3\2"+
		"\2\2\u051a\u04b7\3\2\2\2\u051a\u04bc\3\2\2\2\u051a\u04c1\3\2\2\2\u051a"+
		"\u04c6\3\2\2\2\u051a\u04cb\3\2\2\2\u051a\u04d0\3\2\2\2\u051a\u04d1\3\2"+
		"\2\2\u051a\u04d3\3\2\2\2\u051a\u04d8\3\2\2\2\u051a\u04dd\3\2\2\2\u051a"+
		"\u04de\3\2\2\2\u051a\u04df\3\2\2\2\u051a\u04e6\3\2\2\2\u051a\u04ef\3\2"+
		"\2\2\u051a\u04f1\3\2\2\2\u051a\u04f3\3\2\2\2\u051a\u04f8\3\2\2\2\u051a"+
		"\u04fd\3\2\2\2\u051a\u0502\3\2\2\2\u051a\u0504\3\2\2\2\u051a\u0506\3\2"+
		"\2\2\u051a\u0508\3\2\2\2\u051a\u050f\3\2\2\2\u051a\u0518\3\2\2\2\u051b"+
		"\u00c3\3\2\2\2\u051c\u051d\bc\1\2\u051d\u052b\5\u008cG\2\u051e\u052b\5"+
		"\u00b2Z\2\u051f\u0520\7\u00a3\2\2\u0520\u0521\5\u00c4c\2\u0521\u0522\7"+
		"\u00a5\2\2\u0522\u052b\3\2\2\2\u0523\u0524\7\u0089\2\2\u0524\u052b\5\u00c4"+
		"c\f\u0525\u052b\5\u00c2b\2\u0526\u0527\5\u00c0a\2\u0527\u0528\t\7\2\2"+
		"\u0528\u0529\5\u00c0a\2\u0529\u052b\3\2\2\2\u052a\u051c\3\2\2\2\u052a"+
		"\u051e\3\2\2\2\u052a\u051f\3\2\2\2\u052a\u0523\3\2\2\2\u052a\u0525\3\2"+
		"\2\2\u052a\u0526\3\2\2\2\u052b\u0543\3\2\2\2\u052c\u052d\f\n\2\2\u052d"+
		"\u052e\7\u008f\2\2\u052e\u0542\5\u00c4c\n\u052f\u0530\f\t\2\2\u0530\u0531"+
		"\t\b\2\2\u0531\u0542\5\u00c4c\n\u0532\u0533\f\b\2\2\u0533\u0534\t\t\2"+
		"\2\u0534\u0542\5\u00c4c\t\u0535\u0536\f\7\2\2\u0536\u0537\t\6\2\2\u0537"+
		"\u0542\5\u00c4c\b\u0538\u0539\f\6\2\2\u0539\u053a\t\n\2\2\u053a\u0542"+
		"\5\u00c4c\7\u053b\u053c\f\5\2\2\u053c\u053d\t\7\2\2\u053d\u0542\5\u00c4"+
		"c\6\u053e\u053f\f\3\2\2\u053f\u0540\t\13\2\2\u0540\u0542\5\u00c4c\4\u0541"+
		"\u052c\3\2\2\2\u0541\u052f\3\2\2\2\u0541\u0532\3\2\2\2\u0541\u0535\3\2"+
		"\2\2\u0541\u0538\3\2\2\2\u0541\u053b\3\2\2\2\u0541\u053e\3\2\2\2\u0542"+
		"\u0545\3\2\2\2\u0543\u0541\3\2\2\2\u0543\u0544\3\2\2\2\u0544\u00c5\3\2"+
		"\2\2\u0545\u0543\3\2\2\2\u0546\u0547\t\f\2\2\u0547\u00c7\3\2\2\2]\u00cb"+
		"\u00d2\u00d5\u00d9\u00de\u00e1\u00e5\u00ea\u00f0\u00f6\u00f9\u0103\u011e"+
		"\u0129\u012d\u013a\u013e\u0146\u014d\u0153\u015d\u0165\u016e\u0175\u0182"+
		"\u018b\u0194\u019b\u019d\u01a2\u01a5\u01b1\u01ba\u01c4\u01da\u01f0\u01f6"+
		"\u01fc\u0227\u022e\u0241\u025c\u0269\u0274\u0284\u0297\u02b5\u02e6\u031b"+
		"\u0325\u032a\u0333\u033c\u034f\u0355\u035b\u0366\u036d\u037b\u0380\u0384"+
		"\u0394\u039a\u03b5\u03be\u03ca\u03d1\u03d5\u03da\u03df\u03e7\u03ef\u03f3"+
		"\u03fd\u0402\u0407\u040a\u040d\u0415\u0419\u041d\u0424\u0427\u0430\u0468"+
		"\u0474\u047b\u051a\u052a\u0541\u0543";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}