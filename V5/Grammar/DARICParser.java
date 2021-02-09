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
		CLIPOFF=78, COLOUR=79, COLOURBG=80, FILL=81, FLIP=82, SHOWFPS=83, GRAPHICS=84, 
		LINE=85, RECTANGLE=86, PLOT=87, POINT=88, SHADED=89, TEXT=90, TEXTRIGHT=91, 
		TEXTCENTRE=92, TEXTCENTER=93, TRIANGLE=94, LOADTYPEFACE=95, CREATEFONT=96, 
		TIME=97, PI=98, SQR=99, LN=100, LOG=101, EXP=102, ATN=103, TAN=104, COS=105, 
		SIN=106, ABS=107, ACS=108, ASN=109, DEG=110, RAD=111, SGN=112, ASC=113, 
		LEN=114, INSTR=115, VAL=116, TIMES=117, STRS=118, STRINGS=119, CHRS=120, 
		LEFTS=121, MIDS=122, RIGHTS=123, RND=124, RND0=125, RND1=126, EQ=127, 
		NE=128, GT=129, GE=130, LT=131, LE=132, NOT=133, AND=134, OR=135, EOR=136, 
		MOD=137, DIV=138, HAT=139, PLUS=140, MINUS=141, MULTIPLY=142, DIVIDE=143, 
		SHL=144, SHR=145, PLUS_E=146, MINUS_E=147, MULTIPLY_E=148, DIVIDE_E=149, 
		SHL_E=150, SHR_E=151, NEWLINE=152, TICK=153, TILDE=154, HASH=155, COLON=156, 
		COMMA=157, DOLLAR=158, LPAREN=159, PERCENT=160, RPAREN=161, SEMICOLON=162, 
		UNDERSCORE=163, COMMENT=164, STRINGLITERAL=165, PROC_NAME=166, FN_INTEGER=167, 
		FN_FLOAT=168, FN_STRING=169, VARIABLE_FLOAT=170, VARIABLE_INTEGER=171, 
		VARIABLE_STRING=172, VARIABLE_TYPE=173, NAME=174, HEXNUMBER=175, BINARYNUMBER=176, 
		NUMBER=177, FLOAT=178, WS=179;
	public static final int
		RULE_prog = 0, RULE_line = 1, RULE_content = 2, RULE_body = 3, RULE_linenumber = 4, 
		RULE_stmt = 5, RULE_coreStmt = 6, RULE_stmtBREAKPOINT = 7, RULE_stmtCASE = 8, 
		RULE_stmtCHAIN = 9, RULE_stmtDATA = 10, RULE_stmtDIM = 11, RULE_stmtEND = 12, 
		RULE_stmtRETURN = 13, RULE_stmtDEFFN = 14, RULE_stmtDEFPROC = 15, RULE_stmtFOR = 16, 
		RULE_stmtFORIN = 17, RULE_stmtCallFN = 18, RULE_stmtIF = 19, RULE_stmtIFMultiline = 20, 
		RULE_stmtLET = 21, RULE_stmtLOCAL = 22, RULE_stmtLOCALDIM = 23, RULE_stmtOSCLI = 24, 
		RULE_stmtCallPROC = 25, RULE_stmtREAD = 26, RULE_stmtRESTORE = 27, RULE_stmtSWAP = 28, 
		RULE_stmtTRACEON = 29, RULE_stmtTRACEOFF = 30, RULE_stmtTYPE = 31, RULE_stmtREPEAT = 32, 
		RULE_stmtWHILE = 33, RULE_keyMouseStmt = 34, RULE_stmtINPUT = 35, RULE_stmtPRINT = 36, 
		RULE_stmtMOUSE = 37, RULE_stmtINKEY = 38, RULE_stmtINKEYS = 39, RULE_stmtGET = 40, 
		RULE_stmtGETS = 41, RULE_stmtOperatorEqual = 42, RULE_ioStmt = 43, RULE_stmtBPUTH = 44, 
		RULE_stmtBGETH = 45, RULE_stmtPTRH = 46, RULE_stmtCLOSEH = 47, RULE_stmtLISTFILES = 48, 
		RULE_graphicsStmt = 49, RULE_stmtCLS = 50, RULE_stmtCOLOUR = 51, RULE_stmtCOLOURBG = 52, 
		RULE_stmtGRAPHICS = 53, RULE_stmtFLIP = 54, RULE_stmtCIRCLE = 55, RULE_stmtLINE = 56, 
		RULE_stmtRECTANGLE = 57, RULE_stmtTRIANGLE = 58, RULE_stmtPLOT = 59, RULE_stmtCLIPON = 60, 
		RULE_stmtCLIPOFF = 61, RULE_stmtTEXT = 62, RULE_stmtTEXTRIGHT = 63, RULE_stmtTEXTCENTRE = 64, 
		RULE_stmtSHOWFPS = 65, RULE_when = 66, RULE_fnName = 67, RULE_literal = 68, 
		RULE_var = 69, RULE_typeVar = 70, RULE_numVar = 71, RULE_strVar = 72, 
		RULE_justVar = 73, RULE_justNumberVar = 74, RULE_varName = 75, RULE_varNameInteger = 76, 
		RULE_varNameString = 77, RULE_varNameType = 78, RULE_varDecl = 79, RULE_varDeclWithDimension = 80, 
		RULE_varList = 81, RULE_functionVarList = 82, RULE_functionParList = 83, 
		RULE_exprList = 84, RULE_printListItem = 85, RULE_printListTick = 86, 
		RULE_printListSeparator = 87, RULE_printList = 88, RULE_expr = 89, RULE_number = 90, 
		RULE_numberInteger = 91, RULE_numberHex = 92, RULE_numberBinary = 93, 
		RULE_numberFloat = 94, RULE_strFunc = 95, RULE_string = 96, RULE_strExpr = 97, 
		RULE_numFunc = 98, RULE_numExpr = 99, RULE_nestedExpr = 100, RULE_notExpr = 101, 
		RULE_numColours = 102, RULE_compare = 103;
	private static String[] makeRuleNames() {
		return new String[] {
			"prog", "line", "content", "body", "linenumber", "stmt", "coreStmt", 
			"stmtBREAKPOINT", "stmtCASE", "stmtCHAIN", "stmtDATA", "stmtDIM", "stmtEND", 
			"stmtRETURN", "stmtDEFFN", "stmtDEFPROC", "stmtFOR", "stmtFORIN", "stmtCallFN", 
			"stmtIF", "stmtIFMultiline", "stmtLET", "stmtLOCAL", "stmtLOCALDIM", 
			"stmtOSCLI", "stmtCallPROC", "stmtREAD", "stmtRESTORE", "stmtSWAP", "stmtTRACEON", 
			"stmtTRACEOFF", "stmtTYPE", "stmtREPEAT", "stmtWHILE", "keyMouseStmt", 
			"stmtINPUT", "stmtPRINT", "stmtMOUSE", "stmtINKEY", "stmtINKEYS", "stmtGET", 
			"stmtGETS", "stmtOperatorEqual", "ioStmt", "stmtBPUTH", "stmtBGETH", 
			"stmtPTRH", "stmtCLOSEH", "stmtLISTFILES", "graphicsStmt", "stmtCLS", 
			"stmtCOLOUR", "stmtCOLOURBG", "stmtGRAPHICS", "stmtFLIP", "stmtCIRCLE", 
			"stmtLINE", "stmtRECTANGLE", "stmtTRIANGLE", "stmtPLOT", "stmtCLIPON", 
			"stmtCLIPOFF", "stmtTEXT", "stmtTEXTRIGHT", "stmtTEXTCENTRE", "stmtSHOWFPS", 
			"when", "fnName", "literal", "var", "typeVar", "numVar", "strVar", "justVar", 
			"justNumberVar", "varName", "varNameInteger", "varNameString", "varNameType", 
			"varDecl", "varDeclWithDimension", "varList", "functionVarList", "functionParList", 
			"exprList", "printListItem", "printListTick", "printListSeparator", "printList", 
			"expr", "number", "numberInteger", "numberHex", "numberBinary", "numberFloat", 
			"strFunc", "string", "strExpr", "numFunc", "numExpr", "nestedExpr", "notExpr", 
			"numColours", "compare"
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
			null, null, null, null, null, null, null, "'='", "'<>'", "'>'", "'>='", 
			"'<'", "'<='", null, null, null, null, null, null, "'^'", "'+'", "'-'", 
			"'*'", "'/'", "'<<'", "'>>'", "'+='", "'-='", "'*='", "'/='", "'<<='", 
			"'>>='", null, "'''", "'~'", "'#'", "':'", "','", "'$'", "'('", "'%'", 
			"')'", "';'", "'_'"
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
			"CLS", "CLIPON", "CLIPOFF", "COLOUR", "COLOURBG", "FILL", "FLIP", "SHOWFPS", 
			"GRAPHICS", "LINE", "RECTANGLE", "PLOT", "POINT", "SHADED", "TEXT", "TEXTRIGHT", 
			"TEXTCENTRE", "TEXTCENTER", "TRIANGLE", "LOADTYPEFACE", "CREATEFONT", 
			"TIME", "PI", "SQR", "LN", "LOG", "EXP", "ATN", "TAN", "COS", "SIN", 
			"ABS", "ACS", "ASN", "DEG", "RAD", "SGN", "ASC", "LEN", "INSTR", "VAL", 
			"TIMES", "STRS", "STRINGS", "CHRS", "LEFTS", "MIDS", "RIGHTS", "RND", 
			"RND0", "RND1", "EQ", "NE", "GT", "GE", "LT", "LE", "NOT", "AND", "OR", 
			"EOR", "MOD", "DIV", "HAT", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "SHL", 
			"SHR", "PLUS_E", "MINUS_E", "MULTIPLY_E", "DIVIDE_E", "SHL_E", "SHR_E", 
			"NEWLINE", "TICK", "TILDE", "HASH", "COLON", "COMMA", "DOLLAR", "LPAREN", 
			"PERCENT", "RPAREN", "SEMICOLON", "UNDERSCORE", "COMMENT", "STRINGLITERAL", 
			"PROC_NAME", "FN_INTEGER", "FN_FLOAT", "FN_STRING", "VARIABLE_FLOAT", 
			"VARIABLE_INTEGER", "VARIABLE_STRING", "VARIABLE_TYPE", "NAME", "HEXNUMBER", 
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
			setState(211);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (BPUTH - 64)) | (1L << (CLOSEH - 64)) | (1L << (PTRH - 64)) | (1L << (CIRCLE - 64)) | (1L << (CLS - 64)) | (1L << (CLIPON - 64)) | (1L << (CLIPOFF - 64)) | (1L << (COLOUR - 64)) | (1L << (COLOURBG - 64)) | (1L << (FLIP - 64)) | (1L << (SHOWFPS - 64)) | (1L << (GRAPHICS - 64)) | (1L << (LINE - 64)) | (1L << (RECTANGLE - 64)) | (1L << (PLOT - 64)) | (1L << (TEXT - 64)) | (1L << (TEXTRIGHT - 64)) | (1L << (TEXTCENTRE - 64)) | (1L << (TEXTCENTER - 64)) | (1L << (TRIANGLE - 64)))) != 0) || ((((_la - 152)) & ~0x3f) == 0 && ((1L << (_la - 152)) & ((1L << (NEWLINE - 152)) | (1L << (COLON - 152)) | (1L << (COMMENT - 152)) | (1L << (PROC_NAME - 152)) | (1L << (FN_INTEGER - 152)) | (1L << (FN_FLOAT - 152)) | (1L << (FN_STRING - 152)) | (1L << (VARIABLE_FLOAT - 152)) | (1L << (VARIABLE_INTEGER - 152)) | (1L << (VARIABLE_STRING - 152)) | (1L << (VARIABLE_TYPE - 152)) | (1L << (NUMBER - 152)))) != 0)) {
				{
				{
				setState(208);
				line();
				}
				}
				setState(213);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(214);
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
			setState(237);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(216);
				match(NEWLINE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(218);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(217);
					linenumber();
					}
				}

				setState(221);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REM || _la==COMMENT) {
					{
					setState(220);
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

				setState(223);
				match(NEWLINE);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(225);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(224);
					linenumber();
					}
				}

				setState(228); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(227);
					stmt();
					}
					}
					setState(230); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (BPUTH - 64)) | (1L << (CLOSEH - 64)) | (1L << (PTRH - 64)) | (1L << (CIRCLE - 64)) | (1L << (CLS - 64)) | (1L << (CLIPON - 64)) | (1L << (CLIPOFF - 64)) | (1L << (COLOUR - 64)) | (1L << (COLOURBG - 64)) | (1L << (FLIP - 64)) | (1L << (SHOWFPS - 64)) | (1L << (GRAPHICS - 64)) | (1L << (LINE - 64)) | (1L << (RECTANGLE - 64)) | (1L << (PLOT - 64)) | (1L << (TEXT - 64)) | (1L << (TEXTRIGHT - 64)) | (1L << (TEXTCENTRE - 64)) | (1L << (TEXTCENTER - 64)) | (1L << (TRIANGLE - 64)))) != 0) || ((((_la - 156)) & ~0x3f) == 0 && ((1L << (_la - 156)) & ((1L << (COLON - 156)) | (1L << (PROC_NAME - 156)) | (1L << (FN_INTEGER - 156)) | (1L << (FN_FLOAT - 156)) | (1L << (FN_STRING - 156)) | (1L << (VARIABLE_FLOAT - 156)) | (1L << (VARIABLE_INTEGER - 156)) | (1L << (VARIABLE_STRING - 156)) | (1L << (VARIABLE_TYPE - 156)))) != 0) );
				setState(233);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REM || _la==COMMENT) {
					{
					setState(232);
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

				setState(235);
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
			setState(242);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(239);
					stmt();
					}
					} 
				}
				setState(244);
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
			setState(257);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(248);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (BPUTH - 64)) | (1L << (CLOSEH - 64)) | (1L << (PTRH - 64)) | (1L << (CIRCLE - 64)) | (1L << (CLS - 64)) | (1L << (CLIPON - 64)) | (1L << (CLIPOFF - 64)) | (1L << (COLOUR - 64)) | (1L << (COLOURBG - 64)) | (1L << (FLIP - 64)) | (1L << (SHOWFPS - 64)) | (1L << (GRAPHICS - 64)) | (1L << (LINE - 64)) | (1L << (RECTANGLE - 64)) | (1L << (PLOT - 64)) | (1L << (TEXT - 64)) | (1L << (TEXTRIGHT - 64)) | (1L << (TEXTCENTRE - 64)) | (1L << (TEXTCENTER - 64)) | (1L << (TRIANGLE - 64)))) != 0) || ((((_la - 156)) & ~0x3f) == 0 && ((1L << (_la - 156)) & ((1L << (COLON - 156)) | (1L << (PROC_NAME - 156)) | (1L << (FN_INTEGER - 156)) | (1L << (FN_FLOAT - 156)) | (1L << (FN_STRING - 156)) | (1L << (VARIABLE_FLOAT - 156)) | (1L << (VARIABLE_INTEGER - 156)) | (1L << (VARIABLE_STRING - 156)) | (1L << (VARIABLE_TYPE - 156)))) != 0)) {
					{
					{
					setState(245);
					stmt();
					}
					}
					setState(250);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(254);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (BPUTH - 64)) | (1L << (CLOSEH - 64)) | (1L << (PTRH - 64)) | (1L << (CIRCLE - 64)) | (1L << (CLS - 64)) | (1L << (CLIPON - 64)) | (1L << (CLIPOFF - 64)) | (1L << (COLOUR - 64)) | (1L << (COLOURBG - 64)) | (1L << (FLIP - 64)) | (1L << (SHOWFPS - 64)) | (1L << (GRAPHICS - 64)) | (1L << (LINE - 64)) | (1L << (RECTANGLE - 64)) | (1L << (PLOT - 64)) | (1L << (TEXT - 64)) | (1L << (TEXTRIGHT - 64)) | (1L << (TEXTCENTRE - 64)) | (1L << (TEXTCENTER - 64)) | (1L << (TRIANGLE - 64)))) != 0) || ((((_la - 152)) & ~0x3f) == 0 && ((1L << (_la - 152)) & ((1L << (NEWLINE - 152)) | (1L << (COLON - 152)) | (1L << (COMMENT - 152)) | (1L << (PROC_NAME - 152)) | (1L << (FN_INTEGER - 152)) | (1L << (FN_FLOAT - 152)) | (1L << (FN_STRING - 152)) | (1L << (VARIABLE_FLOAT - 152)) | (1L << (VARIABLE_INTEGER - 152)) | (1L << (VARIABLE_STRING - 152)) | (1L << (VARIABLE_TYPE - 152)) | (1L << (NUMBER - 152)))) != 0)) {
					{
					{
					setState(251);
					line();
					}
					}
					setState(256);
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
			setState(259);
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
			setState(267);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(261);
				match(COLON);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(262);
				coreStmt();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(263);
				keyMouseStmt();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(264);
				stmtOperatorEqual();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(265);
				ioStmt();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(266);
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
		public StmtLOCALContext stmtLOCAL() {
			return getRuleContext(StmtLOCALContext.class,0);
		}
		public StmtLOCALDIMContext stmtLOCALDIM() {
			return getRuleContext(StmtLOCALDIMContext.class,0);
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
			setState(297);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(269);
				stmtBREAKPOINT();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(270);
				stmtCASE();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(271);
				stmtCHAIN();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(272);
				stmtDATA();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(273);
				stmtDIM();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(274);
				stmtEND();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(275);
				stmtRETURN();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(276);
				stmtDEFFN();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(277);
				stmtDEFPROC();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(278);
				stmtFOR();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(279);
				stmtFORIN();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(280);
				stmtCallFN();
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(281);
				stmtIF();
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(282);
				stmtIFMultiline();
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(283);
				stmtLET();
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(284);
				stmtLET();
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(285);
				stmtLOCAL();
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(286);
				stmtLOCALDIM();
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(287);
				stmtOSCLI();
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(288);
				stmtCallPROC();
				}
				break;
			case 21:
				enterOuterAlt(_localctx, 21);
				{
				setState(289);
				stmtREAD();
				}
				break;
			case 22:
				enterOuterAlt(_localctx, 22);
				{
				setState(290);
				stmtRESTORE();
				}
				break;
			case 23:
				enterOuterAlt(_localctx, 23);
				{
				setState(291);
				stmtSWAP();
				}
				break;
			case 24:
				enterOuterAlt(_localctx, 24);
				{
				setState(292);
				stmtTRACEON();
				}
				break;
			case 25:
				enterOuterAlt(_localctx, 25);
				{
				setState(293);
				stmtTRACEOFF();
				}
				break;
			case 26:
				enterOuterAlt(_localctx, 26);
				{
				setState(294);
				stmtTYPE();
				}
				break;
			case 27:
				enterOuterAlt(_localctx, 27);
				{
				setState(295);
				stmtREPEAT();
				}
				break;
			case 28:
				enterOuterAlt(_localctx, 28);
				{
				setState(296);
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
			setState(299);
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
			setState(301);
			match(CASE);
			setState(302);
			expr();
			setState(303);
			match(OF);
			setState(304);
			match(NEWLINE);
			setState(306); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(305);
				when();
				}
				}
				setState(308); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==WHEN );
			setState(312);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==OTHERWISE) {
				{
				setState(310);
				match(OTHERWISE);
				setState(311);
				body();
				}
			}

			setState(314);
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
			setState(316);
			match(CHAIN);
			setState(317);
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
			setState(319);
			match(DATA);
			setState(320);
			literal();
			setState(325);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(321);
				match(COMMA);
				setState(322);
				literal();
				}
				}
				setState(327);
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
			setState(328);
			match(DIM);
			setState(329);
			varDeclWithDimension();
			setState(334);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(330);
				match(COMMA);
				setState(331);
				varDeclWithDimension();
				}
				}
				setState(336);
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
			setState(337);
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
			setState(339);
			match(RETURN);
			setState(341);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
			case 1:
				{
				setState(340);
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
			setState(343);
			match(DEF);
			setState(344);
			fnName();
			setState(345);
			match(LPAREN);
			setState(347);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN || ((((_la - 170)) & ~0x3f) == 0 && ((1L << (_la - 170)) & ((1L << (VARIABLE_FLOAT - 170)) | (1L << (VARIABLE_INTEGER - 170)) | (1L << (VARIABLE_STRING - 170)))) != 0)) {
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
			setState(353);
			match(DEF);
			setState(354);
			match(PROC_NAME);
			setState(355);
			match(LPAREN);
			setState(357);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN || ((((_la - 170)) & ~0x3f) == 0 && ((1L << (_la - 170)) & ((1L << (VARIABLE_FLOAT - 170)) | (1L << (VARIABLE_INTEGER - 170)) | (1L << (VARIABLE_STRING - 170)))) != 0)) {
				{
				setState(356);
				functionVarList();
				}
			}

			setState(359);
			match(RPAREN);
			setState(360);
			body();
			setState(361);
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
			setState(363);
			match(FOR);
			setState(365);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(364);
				match(LOCAL);
				}
			}

			setState(367);
			justNumberVar();
			setState(368);
			match(EQ);
			setState(369);
			numExpr(0);
			setState(370);
			match(TO);
			setState(371);
			numExpr(0);
			setState(374);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==STEP) {
				{
				setState(372);
				match(STEP);
				setState(373);
				numExpr(0);
				}
			}

			setState(376);
			body();
			setState(377);
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
			setState(379);
			match(FOR);
			setState(381);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(380);
				match(LOCAL);
				}
			}

			setState(383);
			justVar();
			setState(384);
			match(IN);
			setState(385);
			justVar();
			setState(386);
			match(LPAREN);
			setState(387);
			match(RPAREN);
			setState(388);
			body();
			setState(389);
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
			setState(391);
			fnName();
			setState(392);
			match(LPAREN);
			setState(394);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (POINT - 64)) | (1L << (TIME - 64)) | (1L << (PI - 64)) | (1L << (SQR - 64)) | (1L << (LN - 64)) | (1L << (LOG - 64)) | (1L << (EXP - 64)) | (1L << (ATN - 64)) | (1L << (TAN - 64)) | (1L << (COS - 64)) | (1L << (SIN - 64)) | (1L << (ABS - 64)) | (1L << (ACS - 64)) | (1L << (ASN - 64)) | (1L << (DEG - 64)) | (1L << (RAD - 64)) | (1L << (SGN - 64)) | (1L << (ASC - 64)) | (1L << (LEN - 64)) | (1L << (INSTR - 64)) | (1L << (VAL - 64)) | (1L << (TIMES - 64)) | (1L << (STRS - 64)) | (1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)))) != 0) || ((((_la - 133)) & ~0x3f) == 0 && ((1L << (_la - 133)) & ((1L << (NOT - 133)) | (1L << (PLUS - 133)) | (1L << (MINUS - 133)) | (1L << (LPAREN - 133)) | (1L << (STRINGLITERAL - 133)) | (1L << (FN_INTEGER - 133)) | (1L << (FN_FLOAT - 133)) | (1L << (FN_STRING - 133)) | (1L << (VARIABLE_FLOAT - 133)) | (1L << (VARIABLE_INTEGER - 133)) | (1L << (VARIABLE_STRING - 133)) | (1L << (VARIABLE_TYPE - 133)) | (1L << (HEXNUMBER - 133)) | (1L << (BINARYNUMBER - 133)) | (1L << (NUMBER - 133)) | (1L << (FLOAT - 133)))) != 0)) {
				{
				setState(393);
				functionParList();
				}
			}

			setState(396);
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
		public TerminalNode THEN() { return getToken(DARICParser.THEN, 0); }
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
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(398);
			match(IF);
			setState(399);
			expr();
			setState(401);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==THEN) {
				{
				setState(400);
				match(THEN);
				}
			}

			setState(403);
			((StmtIFContext)_localctx).t = content();
			setState(406);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
			case 1:
				{
				setState(404);
				match(ELSE);
				setState(405);
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
		public List<TerminalNode> NEWLINE() { return getTokens(DARICParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(DARICParser.NEWLINE, i);
		}
		public TerminalNode ENDIF() { return getToken(DARICParser.ENDIF, 0); }
		public TerminalNode THEN() { return getToken(DARICParser.THEN, 0); }
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
			setState(408);
			match(IF);
			setState(409);
			expr();
			setState(411);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==THEN) {
				{
				setState(410);
				match(THEN);
				}
			}

			setState(413);
			match(NEWLINE);
			setState(415); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(414);
				((StmtIFMultilineContext)_localctx).t = line();
				}
				}
				setState(417); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (BPUTH - 64)) | (1L << (CLOSEH - 64)) | (1L << (PTRH - 64)) | (1L << (CIRCLE - 64)) | (1L << (CLS - 64)) | (1L << (CLIPON - 64)) | (1L << (CLIPOFF - 64)) | (1L << (COLOUR - 64)) | (1L << (COLOURBG - 64)) | (1L << (FLIP - 64)) | (1L << (SHOWFPS - 64)) | (1L << (GRAPHICS - 64)) | (1L << (LINE - 64)) | (1L << (RECTANGLE - 64)) | (1L << (PLOT - 64)) | (1L << (TEXT - 64)) | (1L << (TEXTRIGHT - 64)) | (1L << (TEXTCENTRE - 64)) | (1L << (TEXTCENTER - 64)) | (1L << (TRIANGLE - 64)))) != 0) || ((((_la - 152)) & ~0x3f) == 0 && ((1L << (_la - 152)) & ((1L << (NEWLINE - 152)) | (1L << (COLON - 152)) | (1L << (COMMENT - 152)) | (1L << (PROC_NAME - 152)) | (1L << (FN_INTEGER - 152)) | (1L << (FN_FLOAT - 152)) | (1L << (FN_STRING - 152)) | (1L << (VARIABLE_FLOAT - 152)) | (1L << (VARIABLE_INTEGER - 152)) | (1L << (VARIABLE_STRING - 152)) | (1L << (VARIABLE_TYPE - 152)) | (1L << (NUMBER - 152)))) != 0) );
			setState(426);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ELSE) {
				{
				setState(419);
				match(ELSE);
				setState(420);
				match(NEWLINE);
				setState(422); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(421);
					((StmtIFMultilineContext)_localctx).f = line();
					}
					}
					setState(424); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (BPUTH - 64)) | (1L << (CLOSEH - 64)) | (1L << (PTRH - 64)) | (1L << (CIRCLE - 64)) | (1L << (CLS - 64)) | (1L << (CLIPON - 64)) | (1L << (CLIPOFF - 64)) | (1L << (COLOUR - 64)) | (1L << (COLOURBG - 64)) | (1L << (FLIP - 64)) | (1L << (SHOWFPS - 64)) | (1L << (GRAPHICS - 64)) | (1L << (LINE - 64)) | (1L << (RECTANGLE - 64)) | (1L << (PLOT - 64)) | (1L << (TEXT - 64)) | (1L << (TEXTRIGHT - 64)) | (1L << (TEXTCENTRE - 64)) | (1L << (TEXTCENTER - 64)) | (1L << (TRIANGLE - 64)))) != 0) || ((((_la - 152)) & ~0x3f) == 0 && ((1L << (_la - 152)) & ((1L << (NEWLINE - 152)) | (1L << (COLON - 152)) | (1L << (COMMENT - 152)) | (1L << (PROC_NAME - 152)) | (1L << (FN_INTEGER - 152)) | (1L << (FN_FLOAT - 152)) | (1L << (FN_STRING - 152)) | (1L << (VARIABLE_FLOAT - 152)) | (1L << (VARIABLE_INTEGER - 152)) | (1L << (VARIABLE_STRING - 152)) | (1L << (VARIABLE_TYPE - 152)) | (1L << (NUMBER - 152)))) != 0) );
				}
			}

			setState(428);
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
			setState(436);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
			case 1:
				{
				setState(431);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LET) {
					{
					setState(430);
					match(LET);
					}
				}

				}
				break;
			case 2:
				{
				setState(434);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==GLOBAL) {
					{
					setState(433);
					match(GLOBAL);
					}
				}

				}
				break;
			}
			setState(438);
			varDecl();
			setState(439);
			match(EQ);
			setState(440);
			expr();
			setState(448);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(441);
				match(COMMA);
				setState(442);
				varDecl();
				setState(443);
				match(EQ);
				setState(444);
				expr();
				}
				}
				setState(450);
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

	public static class StmtLOCALContext extends ParserRuleContext {
		public TerminalNode LOCAL() { return getToken(DARICParser.LOCAL, 0); }
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
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StmtLOCALContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtLOCAL; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtLOCAL(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtLOCALContext stmtLOCAL() throws RecognitionException {
		StmtLOCALContext _localctx = new StmtLOCALContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_stmtLOCAL);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(451);
			match(LOCAL);
			setState(452);
			varDecl();
			setState(453);
			match(EQ);
			setState(454);
			expr();
			setState(462);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(455);
				match(COMMA);
				setState(456);
				varDecl();
				setState(457);
				match(EQ);
				setState(458);
				expr();
				}
				}
				setState(464);
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

	public static class StmtLOCALDIMContext extends ParserRuleContext {
		public TerminalNode LOCAL() { return getToken(DARICParser.LOCAL, 0); }
		public TerminalNode DIM() { return getToken(DARICParser.DIM, 0); }
		public List<VarDeclWithDimensionContext> varDeclWithDimension() {
			return getRuleContexts(VarDeclWithDimensionContext.class);
		}
		public VarDeclWithDimensionContext varDeclWithDimension(int i) {
			return getRuleContext(VarDeclWithDimensionContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public StmtLOCALDIMContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmtLOCALDIM; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtLOCALDIM(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtLOCALDIMContext stmtLOCALDIM() throws RecognitionException {
		StmtLOCALDIMContext _localctx = new StmtLOCALDIMContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_stmtLOCALDIM);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(465);
			match(LOCAL);
			setState(466);
			match(DIM);
			setState(467);
			varDeclWithDimension();
			setState(472);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(468);
				match(COMMA);
				setState(469);
				varDeclWithDimension();
				}
				}
				setState(474);
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
		enterRule(_localctx, 48, RULE_stmtOSCLI);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(475);
			match(OSCLI);
			setState(476);
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
		enterRule(_localctx, 50, RULE_stmtCallPROC);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(478);
			match(PROC_NAME);
			setState(479);
			match(LPAREN);
			setState(481);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (POINT - 64)) | (1L << (TIME - 64)) | (1L << (PI - 64)) | (1L << (SQR - 64)) | (1L << (LN - 64)) | (1L << (LOG - 64)) | (1L << (EXP - 64)) | (1L << (ATN - 64)) | (1L << (TAN - 64)) | (1L << (COS - 64)) | (1L << (SIN - 64)) | (1L << (ABS - 64)) | (1L << (ACS - 64)) | (1L << (ASN - 64)) | (1L << (DEG - 64)) | (1L << (RAD - 64)) | (1L << (SGN - 64)) | (1L << (ASC - 64)) | (1L << (LEN - 64)) | (1L << (INSTR - 64)) | (1L << (VAL - 64)) | (1L << (TIMES - 64)) | (1L << (STRS - 64)) | (1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)))) != 0) || ((((_la - 133)) & ~0x3f) == 0 && ((1L << (_la - 133)) & ((1L << (NOT - 133)) | (1L << (PLUS - 133)) | (1L << (MINUS - 133)) | (1L << (LPAREN - 133)) | (1L << (STRINGLITERAL - 133)) | (1L << (FN_INTEGER - 133)) | (1L << (FN_FLOAT - 133)) | (1L << (FN_STRING - 133)) | (1L << (VARIABLE_FLOAT - 133)) | (1L << (VARIABLE_INTEGER - 133)) | (1L << (VARIABLE_STRING - 133)) | (1L << (VARIABLE_TYPE - 133)) | (1L << (HEXNUMBER - 133)) | (1L << (BINARYNUMBER - 133)) | (1L << (NUMBER - 133)) | (1L << (FLOAT - 133)))) != 0)) {
				{
				setState(480);
				functionParList();
				}
			}

			setState(483);
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
		enterRule(_localctx, 52, RULE_stmtREAD);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(485);
			match(READ);
			setState(486);
			varDecl();
			setState(491);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(487);
				match(COMMA);
				setState(488);
				varDecl();
				}
				}
				setState(493);
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
		enterRule(_localctx, 54, RULE_stmtRESTORE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(494);
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
		enterRule(_localctx, 56, RULE_stmtSWAP);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(496);
			match(SWAP);
			setState(497);
			justVar();
			setState(498);
			match(COMMA);
			setState(499);
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
		enterRule(_localctx, 58, RULE_stmtTRACEON);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(501);
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
		enterRule(_localctx, 60, RULE_stmtTRACEOFF);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(503);
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
		enterRule(_localctx, 62, RULE_stmtTYPE);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(505);
			match(TYPE);
			setState(506);
			varName();
			setState(507);
			match(LPAREN);
			setState(508);
			justVar();
			setState(513);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(509);
				match(COMMA);
				setState(510);
				justVar();
				}
				}
				setState(515);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(516);
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
		enterRule(_localctx, 64, RULE_stmtREPEAT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(518);
			match(REPEAT);
			setState(519);
			body();
			setState(520);
			match(UNTIL);
			setState(521);
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
		enterRule(_localctx, 66, RULE_stmtWHILE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(523);
			match(WHILE);
			setState(524);
			expr();
			setState(525);
			body();
			setState(526);
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
		enterRule(_localctx, 68, RULE_keyMouseStmt);
		try {
			setState(535);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INPUT:
				enterOuterAlt(_localctx, 1);
				{
				setState(528);
				stmtINPUT();
				}
				break;
			case PRINT:
				enterOuterAlt(_localctx, 2);
				{
				setState(529);
				stmtPRINT();
				}
				break;
			case MOUSE:
				enterOuterAlt(_localctx, 3);
				{
				setState(530);
				stmtMOUSE();
				}
				break;
			case INKEY:
				enterOuterAlt(_localctx, 4);
				{
				setState(531);
				stmtINKEY();
				}
				break;
			case INKEYS:
				enterOuterAlt(_localctx, 5);
				{
				setState(532);
				stmtINKEYS();
				}
				break;
			case GET:
				enterOuterAlt(_localctx, 6);
				{
				setState(533);
				stmtGET();
				}
				break;
			case GETS:
				enterOuterAlt(_localctx, 7);
				{
				setState(534);
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
		enterRule(_localctx, 70, RULE_stmtINPUT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(537);
			match(INPUT);
			setState(541);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,40,_ctx) ) {
			case 1:
				{
				setState(538);
				strExpr(0);
				setState(539);
				match(COMMA);
				}
				break;
			}
			setState(543);
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
		enterRule(_localctx, 72, RULE_stmtPRINT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(545);
			match(PRINT);
			setState(547);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,41,_ctx) ) {
			case 1:
				{
				setState(546);
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
		enterRule(_localctx, 74, RULE_stmtMOUSE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(549);
			match(MOUSE);
			setState(550);
			varNameInteger();
			setState(551);
			match(COMMA);
			setState(552);
			varNameInteger();
			setState(553);
			match(COMMA);
			setState(554);
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
		enterRule(_localctx, 76, RULE_stmtINKEY);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(556);
			match(INKEY);
			setState(557);
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
		enterRule(_localctx, 78, RULE_stmtINKEYS);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(559);
			match(INKEYS);
			setState(560);
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
		enterRule(_localctx, 80, RULE_stmtGET);
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
		enterRule(_localctx, 82, RULE_stmtGETS);
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
		enterRule(_localctx, 84, RULE_stmtOperatorEqual);
		try {
			setState(590);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,42,_ctx) ) {
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
		enterRule(_localctx, 86, RULE_ioStmt);
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
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
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
		enterRule(_localctx, 88, RULE_stmtBPUTH);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(599);
			match(BPUTH);
			setState(600);
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
		enterRule(_localctx, 90, RULE_stmtBGETH);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(602);
			match(BGETH);
			setState(603);
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
		enterRule(_localctx, 92, RULE_stmtPTRH);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(605);
			match(PTRH);
			setState(606);
			numExpr(0);
			setState(607);
			match(EQ);
			setState(608);
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
		enterRule(_localctx, 94, RULE_stmtCLOSEH);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(610);
			match(CLOSEH);
			setState(611);
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
		enterRule(_localctx, 96, RULE_stmtLISTFILES);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(614);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(613);
				match(LOCAL);
				}
			}

			setState(616);
			varNameString();
			setState(617);
			match(LPAREN);
			setState(618);
			match(RPAREN);
			setState(619);
			match(EQ);
			setState(620);
			match(LISTFILES);
			setState(621);
			match(LPAREN);
			setState(622);
			strExpr(0);
			setState(623);
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
		enterRule(_localctx, 98, RULE_graphicsStmt);
		try {
			setState(641);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CLS:
				enterOuterAlt(_localctx, 1);
				{
				setState(625);
				stmtCLS();
				}
				break;
			case COLOUR:
				enterOuterAlt(_localctx, 2);
				{
				setState(626);
				stmtCOLOUR();
				}
				break;
			case COLOURBG:
				enterOuterAlt(_localctx, 3);
				{
				setState(627);
				stmtCOLOURBG();
				}
				break;
			case GRAPHICS:
				enterOuterAlt(_localctx, 4);
				{
				setState(628);
				stmtGRAPHICS();
				}
				break;
			case FLIP:
				enterOuterAlt(_localctx, 5);
				{
				setState(629);
				stmtFLIP();
				}
				break;
			case CIRCLE:
				enterOuterAlt(_localctx, 6);
				{
				setState(630);
				stmtCIRCLE();
				}
				break;
			case LINE:
				enterOuterAlt(_localctx, 7);
				{
				setState(631);
				stmtLINE();
				}
				break;
			case RECTANGLE:
				enterOuterAlt(_localctx, 8);
				{
				setState(632);
				stmtRECTANGLE();
				}
				break;
			case TRIANGLE:
				enterOuterAlt(_localctx, 9);
				{
				setState(633);
				stmtTRIANGLE();
				}
				break;
			case PLOT:
				enterOuterAlt(_localctx, 10);
				{
				setState(634);
				stmtPLOT();
				}
				break;
			case CLIPON:
				enterOuterAlt(_localctx, 11);
				{
				setState(635);
				stmtCLIPON();
				}
				break;
			case CLIPOFF:
				enterOuterAlt(_localctx, 12);
				{
				setState(636);
				stmtCLIPOFF();
				}
				break;
			case TEXT:
				enterOuterAlt(_localctx, 13);
				{
				setState(637);
				stmtTEXT();
				}
				break;
			case TEXTRIGHT:
				enterOuterAlt(_localctx, 14);
				{
				setState(638);
				stmtTEXTRIGHT();
				}
				break;
			case TEXTCENTRE:
			case TEXTCENTER:
				enterOuterAlt(_localctx, 15);
				{
				setState(639);
				stmtTEXTCENTRE();
				}
				break;
			case SHOWFPS:
				enterOuterAlt(_localctx, 16);
				{
				setState(640);
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
		enterRule(_localctx, 100, RULE_stmtCLS);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(643);
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
		enterRule(_localctx, 102, RULE_stmtCOLOUR);
		try {
			setState(654);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,46,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(645);
				match(COLOUR);
				setState(646);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(647);
				match(COLOUR);
				setState(648);
				numExpr(0);
				setState(649);
				match(COMMA);
				setState(650);
				numExpr(0);
				setState(651);
				match(COMMA);
				setState(652);
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
		enterRule(_localctx, 104, RULE_stmtCOLOURBG);
		try {
			setState(665);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,47,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(656);
				match(COLOURBG);
				setState(657);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(658);
				match(COLOURBG);
				setState(659);
				numExpr(0);
				setState(660);
				match(COMMA);
				setState(661);
				numExpr(0);
				setState(662);
				match(COMMA);
				setState(663);
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
		enterRule(_localctx, 106, RULE_stmtGRAPHICS);
		try {
			setState(681);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,48,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(667);
				match(GRAPHICS);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(668);
				match(GRAPHICS);
				setState(669);
				numExpr(0);
				setState(670);
				match(COMMA);
				setState(671);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(673);
				match(GRAPHICS);
				setState(674);
				match(BANKED);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(675);
				match(GRAPHICS);
				setState(676);
				match(BANKED);
				setState(677);
				numExpr(0);
				setState(678);
				match(COMMA);
				setState(679);
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
		enterRule(_localctx, 108, RULE_stmtFLIP);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(683);
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
		enterRule(_localctx, 110, RULE_stmtCIRCLE);
		try {
			setState(700);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,49,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(685);
				match(CIRCLE);
				setState(686);
				numExpr(0);
				setState(687);
				match(COMMA);
				setState(688);
				numExpr(0);
				setState(689);
				match(COMMA);
				setState(690);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(692);
				match(CIRCLE);
				setState(693);
				match(FILL);
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
		enterRule(_localctx, 112, RULE_stmtLINE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(702);
			match(LINE);
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
			setState(708);
			match(COMMA);
			setState(709);
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
		enterRule(_localctx, 114, RULE_stmtRECTANGLE);
		try {
			setState(730);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,50,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(711);
				match(RECTANGLE);
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
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(720);
				match(RECTANGLE);
				setState(721);
				match(FILL);
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
		enterRule(_localctx, 116, RULE_stmtTRIANGLE);
		try {
			setState(779);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,51,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(732);
				match(TRIANGLE);
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
				setState(738);
				match(COMMA);
				setState(739);
				numExpr(0);
				setState(740);
				match(COMMA);
				setState(741);
				numExpr(0);
				setState(742);
				match(COMMA);
				setState(743);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(745);
				match(TRIANGLE);
				setState(746);
				match(FILL);
				setState(747);
				numExpr(0);
				setState(748);
				match(COMMA);
				setState(749);
				numExpr(0);
				setState(750);
				match(COMMA);
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
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(759);
				match(TRIANGLE);
				setState(760);
				match(SHADED);
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
			}
		}
		catch (RecognitionException re) {
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
		enterRule(_localctx, 118, RULE_stmtPLOT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(781);
			match(PLOT);
			setState(782);
			numExpr(0);
			setState(783);
			match(COMMA);
			setState(784);
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
		enterRule(_localctx, 120, RULE_stmtCLIPON);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(786);
			match(CLIPON);
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
			}
		}
		catch (RecognitionException re) {
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
		enterRule(_localctx, 122, RULE_stmtCLIPOFF);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(795);
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
		enterRule(_localctx, 124, RULE_stmtTEXT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(797);
			match(TEXT);
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
		enterRule(_localctx, 126, RULE_stmtTEXTRIGHT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(806);
			match(TEXTRIGHT);
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
		enterRule(_localctx, 128, RULE_stmtTEXTCENTRE);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(815);
			_la = _input.LA(1);
			if ( !(_la==TEXTCENTRE || _la==TEXTCENTER) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
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
		enterRule(_localctx, 130, RULE_stmtSHOWFPS);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(824);
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
		enterRule(_localctx, 132, RULE_when);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(826);
			match(WHEN);
			setState(827);
			expr();
			setState(832);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(828);
				match(COMMA);
				setState(829);
				expr();
				}
				}
				setState(834);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(835);
			match(COLON);
			setState(836);
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
		enterRule(_localctx, 134, RULE_fnName);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(838);
			_la = _input.LA(1);
			if ( !(((((_la - 167)) & ~0x3f) == 0 && ((1L << (_la - 167)) & ((1L << (FN_INTEGER - 167)) | (1L << (FN_FLOAT - 167)) | (1L << (FN_STRING - 167)))) != 0)) ) {
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
		enterRule(_localctx, 136, RULE_literal);
		try {
			setState(842);
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
				setState(840);
				number();
				}
				break;
			case STRINGLITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(841);
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
		enterRule(_localctx, 138, RULE_var);
		try {
			setState(847);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,54,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(844);
				numVar();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(845);
				strVar();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(846);
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
		enterRule(_localctx, 140, RULE_typeVar);
		try {
			_localctx = new TypeVarTypeContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(849);
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
		enterRule(_localctx, 142, RULE_numVar);
		int _la;
		try {
			setState(907);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,60,_ctx) ) {
			case 1:
				_localctx = new NumVarFloatArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(851);
				varName();
				setState(852);
				match(LPAREN);
				setState(853);
				numExpr(0);
				setState(856);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(854);
					match(COMMA);
					setState(855);
					numExpr(0);
					}
				}

				setState(858);
				match(RPAREN);
				}
				break;
			case 2:
				_localctx = new NumVarIntegerArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(860);
				varNameInteger();
				setState(861);
				match(LPAREN);
				setState(862);
				numExpr(0);
				setState(865);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(863);
					match(COMMA);
					setState(864);
					numExpr(0);
					}
				}

				setState(867);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new NumVarIntegerFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(869);
				typeVar();
				setState(870);
				match(LPAREN);
				setState(871);
				numExpr(0);
				setState(872);
				match(RPAREN);
				setState(873);
				varNameInteger();
				}
				break;
			case 4:
				_localctx = new NumVarFloatFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(875);
				typeVar();
				setState(876);
				match(LPAREN);
				setState(877);
				numExpr(0);
				setState(878);
				match(RPAREN);
				setState(879);
				varName();
				}
				break;
			case 5:
				_localctx = new NumVarFloatFNContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(881);
				match(FN_FLOAT);
				setState(882);
				match(LPAREN);
				setState(884);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (POINT - 64)) | (1L << (TIME - 64)) | (1L << (PI - 64)) | (1L << (SQR - 64)) | (1L << (LN - 64)) | (1L << (LOG - 64)) | (1L << (EXP - 64)) | (1L << (ATN - 64)) | (1L << (TAN - 64)) | (1L << (COS - 64)) | (1L << (SIN - 64)) | (1L << (ABS - 64)) | (1L << (ACS - 64)) | (1L << (ASN - 64)) | (1L << (DEG - 64)) | (1L << (RAD - 64)) | (1L << (SGN - 64)) | (1L << (ASC - 64)) | (1L << (LEN - 64)) | (1L << (INSTR - 64)) | (1L << (VAL - 64)) | (1L << (TIMES - 64)) | (1L << (STRS - 64)) | (1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)))) != 0) || ((((_la - 133)) & ~0x3f) == 0 && ((1L << (_la - 133)) & ((1L << (NOT - 133)) | (1L << (PLUS - 133)) | (1L << (MINUS - 133)) | (1L << (LPAREN - 133)) | (1L << (STRINGLITERAL - 133)) | (1L << (FN_INTEGER - 133)) | (1L << (FN_FLOAT - 133)) | (1L << (FN_STRING - 133)) | (1L << (VARIABLE_FLOAT - 133)) | (1L << (VARIABLE_INTEGER - 133)) | (1L << (VARIABLE_STRING - 133)) | (1L << (VARIABLE_TYPE - 133)) | (1L << (HEXNUMBER - 133)) | (1L << (BINARYNUMBER - 133)) | (1L << (NUMBER - 133)) | (1L << (FLOAT - 133)))) != 0)) {
					{
					setState(883);
					functionParList();
					}
				}

				setState(886);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new NumVarIntegerFNContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(887);
				match(FN_INTEGER);
				setState(888);
				match(LPAREN);
				setState(890);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (POINT - 64)) | (1L << (TIME - 64)) | (1L << (PI - 64)) | (1L << (SQR - 64)) | (1L << (LN - 64)) | (1L << (LOG - 64)) | (1L << (EXP - 64)) | (1L << (ATN - 64)) | (1L << (TAN - 64)) | (1L << (COS - 64)) | (1L << (SIN - 64)) | (1L << (ABS - 64)) | (1L << (ACS - 64)) | (1L << (ASN - 64)) | (1L << (DEG - 64)) | (1L << (RAD - 64)) | (1L << (SGN - 64)) | (1L << (ASC - 64)) | (1L << (LEN - 64)) | (1L << (INSTR - 64)) | (1L << (VAL - 64)) | (1L << (TIMES - 64)) | (1L << (STRS - 64)) | (1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)))) != 0) || ((((_la - 133)) & ~0x3f) == 0 && ((1L << (_la - 133)) & ((1L << (NOT - 133)) | (1L << (PLUS - 133)) | (1L << (MINUS - 133)) | (1L << (LPAREN - 133)) | (1L << (STRINGLITERAL - 133)) | (1L << (FN_INTEGER - 133)) | (1L << (FN_FLOAT - 133)) | (1L << (FN_STRING - 133)) | (1L << (VARIABLE_FLOAT - 133)) | (1L << (VARIABLE_INTEGER - 133)) | (1L << (VARIABLE_STRING - 133)) | (1L << (VARIABLE_TYPE - 133)) | (1L << (HEXNUMBER - 133)) | (1L << (BINARYNUMBER - 133)) | (1L << (NUMBER - 133)) | (1L << (FLOAT - 133)))) != 0)) {
					{
					setState(889);
					functionParList();
					}
				}

				setState(892);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new NumVarStringFNContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(893);
				match(FN_STRING);
				setState(894);
				match(LPAREN);
				setState(896);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (POINT - 64)) | (1L << (TIME - 64)) | (1L << (PI - 64)) | (1L << (SQR - 64)) | (1L << (LN - 64)) | (1L << (LOG - 64)) | (1L << (EXP - 64)) | (1L << (ATN - 64)) | (1L << (TAN - 64)) | (1L << (COS - 64)) | (1L << (SIN - 64)) | (1L << (ABS - 64)) | (1L << (ACS - 64)) | (1L << (ASN - 64)) | (1L << (DEG - 64)) | (1L << (RAD - 64)) | (1L << (SGN - 64)) | (1L << (ASC - 64)) | (1L << (LEN - 64)) | (1L << (INSTR - 64)) | (1L << (VAL - 64)) | (1L << (TIMES - 64)) | (1L << (STRS - 64)) | (1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)))) != 0) || ((((_la - 133)) & ~0x3f) == 0 && ((1L << (_la - 133)) & ((1L << (NOT - 133)) | (1L << (PLUS - 133)) | (1L << (MINUS - 133)) | (1L << (LPAREN - 133)) | (1L << (STRINGLITERAL - 133)) | (1L << (FN_INTEGER - 133)) | (1L << (FN_FLOAT - 133)) | (1L << (FN_STRING - 133)) | (1L << (VARIABLE_FLOAT - 133)) | (1L << (VARIABLE_INTEGER - 133)) | (1L << (VARIABLE_STRING - 133)) | (1L << (VARIABLE_TYPE - 133)) | (1L << (HEXNUMBER - 133)) | (1L << (BINARYNUMBER - 133)) | (1L << (NUMBER - 133)) | (1L << (FLOAT - 133)))) != 0)) {
					{
					setState(895);
					functionParList();
					}
				}

				setState(898);
				match(RPAREN);
				}
				break;
			case 8:
				_localctx = new NumVarFloatContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(899);
				varName();
				}
				break;
			case 9:
				_localctx = new NumVarIntegerContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(900);
				varNameInteger();
				}
				break;
			case 10:
				_localctx = new NumVarFloatFieldContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(901);
				typeVar();
				setState(902);
				varName();
				}
				break;
			case 11:
				_localctx = new NumVarIntegerFieldContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(904);
				typeVar();
				setState(905);
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
		enterRule(_localctx, 144, RULE_strVar);
		int _la;
		try {
			setState(928);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,62,_ctx) ) {
			case 1:
				_localctx = new NumVarStringArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(909);
				varNameString();
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
				break;
			case 2:
				_localctx = new NumVarStringFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(918);
				typeVar();
				setState(919);
				match(LPAREN);
				setState(920);
				numExpr(0);
				setState(921);
				match(RPAREN);
				setState(922);
				varNameString();
				}
				break;
			case 3:
				_localctx = new NumVarStringContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(924);
				varNameString();
				}
				break;
			case 4:
				_localctx = new NumVarStringFieldContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(925);
				typeVar();
				setState(926);
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
		enterRule(_localctx, 146, RULE_justVar);
		try {
			setState(933);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(930);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(931);
				varNameInteger();
				}
				break;
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(932);
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
		enterRule(_localctx, 148, RULE_justNumberVar);
		try {
			setState(937);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(935);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(936);
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
		enterRule(_localctx, 150, RULE_varName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(939);
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
		enterRule(_localctx, 152, RULE_varNameInteger);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(941);
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
		enterRule(_localctx, 154, RULE_varNameString);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(943);
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
		enterRule(_localctx, 156, RULE_varNameType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(945);
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
		enterRule(_localctx, 158, RULE_varDecl);
		int _la;
		try {
			setState(986);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,67,_ctx) ) {
			case 1:
				_localctx = new VarDeclIndContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(947);
				justVar();
				}
				break;
			case 2:
				_localctx = new VarDeclArrayedContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(948);
				justVar();
				setState(959);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==LPAREN) {
					{
					{
					setState(949);
					match(LPAREN);
					setState(950);
					numExpr(0);
					setState(953);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==COMMA) {
						{
						setState(951);
						match(COMMA);
						setState(952);
						numExpr(0);
						}
					}

					setState(955);
					match(RPAREN);
					}
					}
					setState(961);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 3:
				_localctx = new VarDeclTypeVarContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(962);
				typeVar();
				setState(963);
				varName();
				}
				break;
			case 4:
				_localctx = new VarDeclTypeVarContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(965);
				typeVar();
				setState(966);
				varNameInteger();
				}
				break;
			case 5:
				_localctx = new VarDeclTypeVarArrayedContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(968);
				typeVar();
				setState(969);
				match(LPAREN);
				setState(970);
				numExpr(0);
				setState(971);
				match(RPAREN);
				setState(972);
				varName();
				}
				break;
			case 6:
				_localctx = new VarDeclTypeVarArrayedContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(974);
				typeVar();
				setState(975);
				match(LPAREN);
				setState(976);
				numExpr(0);
				setState(977);
				match(RPAREN);
				setState(978);
				varNameInteger();
				}
				break;
			case 7:
				_localctx = new VarDeclTypeContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(980);
				typeVar();
				}
				break;
			case 8:
				_localctx = new VarDeclTypeArrayedContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(981);
				typeVar();
				setState(982);
				match(LPAREN);
				setState(983);
				numExpr(0);
				setState(984);
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
		enterRule(_localctx, 160, RULE_varDeclWithDimension);
		int _la;
		try {
			setState(1007);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
			case VARIABLE_INTEGER:
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 1);
				{
				setState(988);
				justVar();
				setState(989);
				match(LPAREN);
				setState(990);
				numExpr(0);
				setState(995);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(991);
					match(COMMA);
					setState(992);
					numExpr(0);
					}
					}
					setState(997);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(998);
				match(RPAREN);
				}
				break;
			case VARIABLE_TYPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(1000);
				typeVar();
				setState(1001);
				match(LPAREN);
				setState(1002);
				numExpr(0);
				setState(1003);
				match(COMMA);
				setState(1004);
				varName();
				setState(1005);
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
		enterRule(_localctx, 162, RULE_varList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1009);
			varDecl();
			setState(1014);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1010);
				match(COMMA);
				setState(1011);
				varDecl();
				}
				}
				setState(1016);
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
		enterRule(_localctx, 164, RULE_functionVarList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1018);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN) {
				{
				setState(1017);
				match(RETURN);
				}
			}

			setState(1020);
			justVar();
			setState(1028);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1021);
				match(COMMA);
				setState(1023);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN) {
					{
					setState(1022);
					match(RETURN);
					}
				}

				setState(1025);
				justVar();
				}
				}
				setState(1030);
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
		enterRule(_localctx, 166, RULE_functionParList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1031);
			expr();
			setState(1036);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1032);
				match(COMMA);
				setState(1033);
				expr();
				}
				}
				setState(1038);
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
		enterRule(_localctx, 168, RULE_exprList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1039);
			expr();
			setState(1044);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1040);
				match(COMMA);
				setState(1041);
				expr();
				}
				}
				setState(1046);
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
		enterRule(_localctx, 170, RULE_printListItem);
		int _la;
		try {
			setState(1058);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,77,_ctx) ) {
			case 1:
				_localctx = new PrintListExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1048);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TILDE) {
					{
					setState(1047);
					match(TILDE);
					}
				}

				setState(1050);
				expr();
				}
				break;
			case 2:
				_localctx = new PrintListSPCPContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1051);
				match(SPC);
				setState(1052);
				match(LPAREN);
				setState(1053);
				numExpr(0);
				setState(1054);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new PrintListSPCContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1056);
				match(SPC);
				setState(1057);
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
		enterRule(_localctx, 172, RULE_printListTick);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1061); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(1060);
				match(TICK);
				}
				}
				setState(1063); 
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
		enterRule(_localctx, 174, RULE_printListSeparator);
		try {
			setState(1068);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COMMA:
				enterOuterAlt(_localctx, 1);
				{
				setState(1065);
				match(COMMA);
				}
				break;
			case SEMICOLON:
				enterOuterAlt(_localctx, 2);
				{
				setState(1066);
				match(SEMICOLON);
				}
				break;
			case TICK:
				enterOuterAlt(_localctx, 3);
				{
				setState(1067);
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
		enterRule(_localctx, 176, RULE_printList);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1071);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TICK) {
				{
				setState(1070);
				printListTick();
				}
			}

			setState(1074);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(1073);
				((PrintListContext)_localctx).s1 = match(SEMICOLON);
				}
			}

			setState(1076);
			printListItem();
			setState(1082);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,82,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1077);
					printListSeparator();
					setState(1078);
					printListItem();
					}
					} 
				}
				setState(1084);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,82,_ctx);
			}
			setState(1086);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(1085);
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
		enterRule(_localctx, 178, RULE_expr);
		try {
			setState(1090);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,84,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1088);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1089);
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
		enterRule(_localctx, 180, RULE_number);
		try {
			setState(1097);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,85,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1092);
				numberInteger();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1093);
				numberFloat();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1094);
				numberHex();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1095);
				numberBinary();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1096);
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
		enterRule(_localctx, 182, RULE_numberInteger);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1100);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(1099);
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

			setState(1102);
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
		enterRule(_localctx, 184, RULE_numberHex);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1104);
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
		enterRule(_localctx, 186, RULE_numberBinary);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1106);
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
		enterRule(_localctx, 188, RULE_numberFloat);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1109);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(1108);
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

			setState(1111);
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
		enterRule(_localctx, 190, RULE_strFunc);
		try {
			setState(1158);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,88,_ctx) ) {
			case 1:
				_localctx = new StrFuncTIMESContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1113);
				match(TIMES);
				}
				break;
			case 2:
				_localctx = new StrFuncCHRSContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1114);
				match(CHRS);
				setState(1115);
				numExpr(0);
				}
				break;
			case 3:
				_localctx = new StrFuncLEFTSContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1116);
				match(LEFTS);
				setState(1117);
				match(LPAREN);
				setState(1118);
				strExpr(0);
				setState(1119);
				match(COMMA);
				setState(1120);
				numExpr(0);
				setState(1121);
				match(RPAREN);
				}
				break;
			case 4:
				_localctx = new StrFuncMIDS3Context(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1123);
				match(MIDS);
				setState(1124);
				match(LPAREN);
				setState(1125);
				strExpr(0);
				setState(1126);
				match(COMMA);
				setState(1127);
				numExpr(0);
				setState(1128);
				match(COMMA);
				setState(1129);
				numExpr(0);
				setState(1130);
				match(RPAREN);
				}
				break;
			case 5:
				_localctx = new StrFuncMIDS2Context(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1132);
				match(MIDS);
				setState(1133);
				match(LPAREN);
				setState(1134);
				strExpr(0);
				setState(1135);
				match(COMMA);
				setState(1136);
				numExpr(0);
				setState(1137);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new StrFuncRIGHTSContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1139);
				match(RIGHTS);
				setState(1140);
				match(LPAREN);
				setState(1141);
				strExpr(0);
				setState(1142);
				match(COMMA);
				setState(1143);
				numExpr(0);
				setState(1144);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new StrFuncSTRSContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1146);
				match(STRS);
				setState(1147);
				numExpr(0);
				}
				break;
			case 8:
				_localctx = new StrFuncSTRSHEXContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1148);
				match(STRS);
				setState(1149);
				match(TILDE);
				setState(1150);
				numExpr(0);
				}
				break;
			case 9:
				_localctx = new StrFuncSTRINGSContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(1151);
				match(STRINGS);
				setState(1152);
				match(LPAREN);
				setState(1153);
				numExpr(0);
				setState(1154);
				match(COMMA);
				setState(1155);
				strExpr(0);
				setState(1156);
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
		enterRule(_localctx, 192, RULE_string);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1160);
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
		int _startState = 194;
		enterRecursionRule(_localctx, 194, RULE_strExpr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1170);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LPAREN:
				{
				setState(1163);
				match(LPAREN);
				setState(1164);
				strExpr(0);
				setState(1165);
				match(RPAREN);
				}
				break;
			case TIMES:
			case STRS:
			case STRINGS:
			case CHRS:
			case LEFTS:
			case MIDS:
			case RIGHTS:
				{
				setState(1167);
				strFunc();
				}
				break;
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(1168);
				strVar();
				}
				break;
			case STRINGLITERAL:
				{
				setState(1169);
				string();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(1177);
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
					setState(1172);
					if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
					setState(1173);
					match(PLUS);
					setState(1174);
					strExpr(4);
					}
					} 
				}
				setState(1179);
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
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public NumFuncLNContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncLN(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncSINContext extends NumFuncContext {
		public TerminalNode SIN() { return getToken(DARICParser.SIN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
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
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public NumFuncRADContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncRAD(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncSQRContext extends NumFuncContext {
		public TerminalNode SQR() { return getToken(DARICParser.SQR, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
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
	public static class NumFuncFLOATContext extends NumFuncContext {
		public TerminalNode FLOAT_TOKEN() { return getToken(DARICParser.FLOAT_TOKEN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
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
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
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
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
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
	public static class NumFuncATNContext extends NumFuncContext {
		public TerminalNode ATN() { return getToken(DARICParser.ATN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public NumFuncATNContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncATN(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncSGNContext extends NumFuncContext {
		public TerminalNode SGN() { return getToken(DARICParser.SGN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public NumFuncSGNContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncSGN(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncEXPContext extends NumFuncContext {
		public TerminalNode EXP() { return getToken(DARICParser.EXP, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public NumFuncEXPContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncEXP(this);
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
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
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
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
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
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public NumFuncDEGContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncDEG(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncCOSContext extends NumFuncContext {
		public TerminalNode COS() { return getToken(DARICParser.COS, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public NumFuncCOSContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncCOS(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncLOGContext extends NumFuncContext {
		public TerminalNode LOG() { return getToken(DARICParser.LOG, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public NumFuncLOGContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncLOG(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumFuncASNContext extends NumFuncContext {
		public TerminalNode ASN() { return getToken(DARICParser.ASN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public NumFuncASNContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumFuncASN(this);
			else return visitor.visitChildren(this);
		}
	}

	public final NumFuncContext numFunc() throws RecognitionException {
		NumFuncContext _localctx = new NumFuncContext(_ctx, getState());
		enterRule(_localctx, 196, RULE_numFunc);
		try {
			setState(1274);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,91,_ctx) ) {
			case 1:
				_localctx = new NumFuncPIContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1180);
				match(PI);
				}
				break;
			case 2:
				_localctx = new NumFuncFALSEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1181);
				match(FALSE);
				}
				break;
			case 3:
				_localctx = new NumFuncTRUEContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1182);
				match(TRUE);
				}
				break;
			case 4:
				_localctx = new NumFuncTIMEContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1183);
				match(TIME);
				}
				break;
			case 5:
				_localctx = new NumFuncRNDContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1184);
				match(RND);
				}
				break;
			case 6:
				_localctx = new NumFuncRND0Context(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1185);
				match(RND0);
				}
				break;
			case 7:
				_localctx = new NumFuncRND1Context(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1186);
				match(RND1);
				}
				break;
			case 8:
				_localctx = new NumFuncRNDRANGEContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1187);
				match(RND);
				setState(1188);
				match(LPAREN);
				setState(1189);
				numExpr(0);
				setState(1190);
				match(RPAREN);
				}
				break;
			case 9:
				_localctx = new NumFuncLNContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(1192);
				match(LN);
				setState(1193);
				numExpr(0);
				}
				break;
			case 10:
				_localctx = new NumFuncLOGContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(1194);
				match(LOG);
				setState(1195);
				numExpr(0);
				}
				break;
			case 11:
				_localctx = new NumFuncEXPContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(1196);
				match(EXP);
				setState(1197);
				numExpr(0);
				}
				break;
			case 12:
				_localctx = new NumFuncATNContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(1198);
				match(ATN);
				setState(1199);
				numExpr(0);
				}
				break;
			case 13:
				_localctx = new NumFuncTANContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(1200);
				match(TAN);
				setState(1201);
				numExpr(0);
				}
				break;
			case 14:
				_localctx = new NumFuncCOSContext(_localctx);
				enterOuterAlt(_localctx, 14);
				{
				setState(1202);
				match(COS);
				setState(1203);
				numExpr(0);
				}
				break;
			case 15:
				_localctx = new NumFuncSINContext(_localctx);
				enterOuterAlt(_localctx, 15);
				{
				setState(1204);
				match(SIN);
				setState(1205);
				numExpr(0);
				}
				break;
			case 16:
				_localctx = new NumFuncABSContext(_localctx);
				enterOuterAlt(_localctx, 16);
				{
				setState(1206);
				match(ABS);
				setState(1207);
				numExpr(0);
				}
				break;
			case 17:
				_localctx = new NumFuncACSContext(_localctx);
				enterOuterAlt(_localctx, 17);
				{
				setState(1208);
				match(ACS);
				setState(1209);
				numExpr(0);
				}
				break;
			case 18:
				_localctx = new NumFuncASNContext(_localctx);
				enterOuterAlt(_localctx, 18);
				{
				setState(1210);
				match(ASN);
				setState(1211);
				numExpr(0);
				}
				break;
			case 19:
				_localctx = new NumFuncDEGContext(_localctx);
				enterOuterAlt(_localctx, 19);
				{
				setState(1212);
				match(DEG);
				setState(1213);
				numExpr(0);
				}
				break;
			case 20:
				_localctx = new NumFuncRADContext(_localctx);
				enterOuterAlt(_localctx, 20);
				{
				setState(1214);
				match(RAD);
				setState(1215);
				numExpr(0);
				}
				break;
			case 21:
				_localctx = new NumFuncSQRContext(_localctx);
				enterOuterAlt(_localctx, 21);
				{
				setState(1216);
				match(SQR);
				setState(1217);
				numExpr(0);
				}
				break;
			case 22:
				_localctx = new NumFuncSGNContext(_localctx);
				enterOuterAlt(_localctx, 22);
				{
				setState(1218);
				match(SGN);
				setState(1219);
				numExpr(0);
				}
				break;
			case 23:
				_localctx = new NumFuncINTContext(_localctx);
				enterOuterAlt(_localctx, 23);
				{
				setState(1220);
				match(INT);
				setState(1221);
				numExpr(0);
				}
				break;
			case 24:
				_localctx = new NumFuncFLOATContext(_localctx);
				enterOuterAlt(_localctx, 24);
				{
				setState(1222);
				match(FLOAT_TOKEN);
				setState(1223);
				numExpr(0);
				}
				break;
			case 25:
				_localctx = new NumFuncPOINTContext(_localctx);
				enterOuterAlt(_localctx, 25);
				{
				setState(1224);
				match(POINT);
				setState(1225);
				match(LPAREN);
				setState(1226);
				numExpr(0);
				setState(1227);
				match(COMMA);
				setState(1228);
				numExpr(0);
				setState(1229);
				match(RPAREN);
				}
				break;
			case 26:
				_localctx = new NumFuncBGETHContext(_localctx);
				enterOuterAlt(_localctx, 26);
				{
				setState(1231);
				match(BGETH);
				setState(1232);
				numExpr(0);
				}
				break;
			case 27:
				_localctx = new NumFuncEOFHContext(_localctx);
				enterOuterAlt(_localctx, 27);
				{
				setState(1233);
				match(EOFH);
				setState(1234);
				numExpr(0);
				}
				break;
			case 28:
				_localctx = new NumFuncOPENINContext(_localctx);
				enterOuterAlt(_localctx, 28);
				{
				setState(1235);
				match(OPENIN);
				setState(1236);
				match(LPAREN);
				setState(1237);
				strExpr(0);
				setState(1238);
				match(RPAREN);
				}
				break;
			case 29:
				_localctx = new NumFuncOPENOUTContext(_localctx);
				enterOuterAlt(_localctx, 29);
				{
				setState(1240);
				match(OPENOUT);
				setState(1241);
				match(LPAREN);
				setState(1242);
				strExpr(0);
				setState(1243);
				match(RPAREN);
				}
				break;
			case 30:
				_localctx = new NumFuncOPENUPContext(_localctx);
				enterOuterAlt(_localctx, 30);
				{
				setState(1245);
				match(OPENUP);
				setState(1246);
				match(LPAREN);
				setState(1247);
				strExpr(0);
				setState(1248);
				match(RPAREN);
				}
				break;
			case 31:
				_localctx = new NumFuncPTRContext(_localctx);
				enterOuterAlt(_localctx, 31);
				{
				setState(1250);
				match(PTRH);
				setState(1251);
				numExpr(0);
				}
				break;
			case 32:
				_localctx = new NumFuncASCContext(_localctx);
				enterOuterAlt(_localctx, 32);
				{
				setState(1252);
				match(ASC);
				setState(1253);
				strExpr(0);
				}
				break;
			case 33:
				_localctx = new NumFuncLENContext(_localctx);
				enterOuterAlt(_localctx, 33);
				{
				setState(1254);
				match(LEN);
				setState(1255);
				strExpr(0);
				}
				break;
			case 34:
				_localctx = new NumFuncINSTR2Context(_localctx);
				enterOuterAlt(_localctx, 34);
				{
				setState(1256);
				match(INSTR);
				setState(1257);
				match(LPAREN);
				setState(1258);
				strExpr(0);
				setState(1259);
				match(COMMA);
				setState(1260);
				strExpr(0);
				setState(1261);
				match(RPAREN);
				}
				break;
			case 35:
				_localctx = new NumFuncINSTR3Context(_localctx);
				enterOuterAlt(_localctx, 35);
				{
				setState(1263);
				match(INSTR);
				setState(1264);
				match(LPAREN);
				setState(1265);
				strExpr(0);
				setState(1266);
				match(COMMA);
				setState(1267);
				strExpr(0);
				setState(1268);
				match(COMMA);
				setState(1269);
				numExpr(0);
				setState(1270);
				match(RPAREN);
				}
				break;
			case 36:
				_localctx = new NumFuncVALContext(_localctx);
				enterOuterAlt(_localctx, 36);
				{
				setState(1272);
				match(VAL);
				setState(1273);
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
	public static class NumExprSubtractContext extends NumExprContext {
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode MINUS() { return getToken(DARICParser.MINUS, 0); }
		public NumExprSubtractContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprSubtract(this);
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
	public static class NumExprEORContext extends NumExprContext {
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode EOR() { return getToken(DARICParser.EOR, 0); }
		public NumExprEORContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprEOR(this);
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
		public CompareContext compare() {
			return getRuleContext(CompareContext.class,0);
		}
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
		public CompareContext compare() {
			return getRuleContext(CompareContext.class,0);
		}
		public NumExprStrRelopContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprStrRelop(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprSHRContext extends NumExprContext {
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode SHR() { return getToken(DARICParser.SHR, 0); }
		public NumExprSHRContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprSHR(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprMultiplyContext extends NumExprContext {
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode MULTIPLY() { return getToken(DARICParser.MULTIPLY, 0); }
		public NumExprMultiplyContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprMultiply(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprMODContext extends NumExprContext {
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode MOD() { return getToken(DARICParser.MOD, 0); }
		public NumExprMODContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprMOD(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprNOTContext extends NumExprContext {
		public NotExprContext notExpr() {
			return getRuleContext(NotExprContext.class,0);
		}
		public NumExprNOTContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprNOT(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprNestedContext extends NumExprContext {
		public NestedExprContext nestedExpr() {
			return getRuleContext(NestedExprContext.class,0);
		}
		public NumExprNestedContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprNested(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprSHLContext extends NumExprContext {
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode SHL() { return getToken(DARICParser.SHL, 0); }
		public NumExprSHLContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprSHL(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprANDContext extends NumExprContext {
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode AND() { return getToken(DARICParser.AND, 0); }
		public NumExprANDContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprAND(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprPlusContext extends NumExprContext {
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode PLUS() { return getToken(DARICParser.PLUS, 0); }
		public NumExprPlusContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprPlus(this);
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
	public static class NumExprORContext extends NumExprContext {
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode OR() { return getToken(DARICParser.OR, 0); }
		public NumExprORContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprOR(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprDivideContext extends NumExprContext {
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode DIVIDE() { return getToken(DARICParser.DIVIDE, 0); }
		public NumExprDivideContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprDivide(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class NumExprDIVContext extends NumExprContext {
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode DIV() { return getToken(DARICParser.DIV, 0); }
		public NumExprDIVContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNumExprDIV(this);
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
		int _startState = 198;
		enterRecursionRule(_localctx, 198, RULE_numExpr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1288);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,92,_ctx) ) {
			case 1:
				{
				_localctx = new NumExprUnaryContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(1277);
				match(MINUS);
				setState(1278);
				numExpr(20);
				}
				break;
			case 2:
				{
				_localctx = new NumExprNOTContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1279);
				notExpr();
				}
				break;
			case 3:
				{
				_localctx = new NumExprFuncContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1280);
				numFunc();
				}
				break;
			case 4:
				{
				_localctx = new NumExprNestedContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1281);
				nestedExpr();
				}
				break;
			case 5:
				{
				_localctx = new NumExprStrRelopContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1282);
				strExpr(0);
				setState(1283);
				compare();
				setState(1284);
				strExpr(0);
				}
				break;
			case 6:
				{
				_localctx = new NumExprVarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1286);
				numVar();
				}
				break;
			case 7:
				{
				_localctx = new NumExprNumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1287);
				number();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1332);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,94,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1330);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,93,_ctx) ) {
					case 1:
						{
						_localctx = new NumExprHatContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1290);
						if (!(precpred(_ctx, 16))) throw new FailedPredicateException(this, "precpred(_ctx, 16)");
						setState(1291);
						match(HAT);
						setState(1292);
						numExpr(16);
						}
						break;
					case 2:
						{
						_localctx = new NumExprMultiplyContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1293);
						if (!(precpred(_ctx, 15))) throw new FailedPredicateException(this, "precpred(_ctx, 15)");
						setState(1294);
						match(MULTIPLY);
						setState(1295);
						numExpr(16);
						}
						break;
					case 3:
						{
						_localctx = new NumExprDivideContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1296);
						if (!(precpred(_ctx, 14))) throw new FailedPredicateException(this, "precpred(_ctx, 14)");
						setState(1297);
						match(DIVIDE);
						setState(1298);
						numExpr(15);
						}
						break;
					case 4:
						{
						_localctx = new NumExprDIVContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1299);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(1300);
						match(DIV);
						setState(1301);
						numExpr(14);
						}
						break;
					case 5:
						{
						_localctx = new NumExprMODContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1302);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(1303);
						match(MOD);
						setState(1304);
						numExpr(13);
						}
						break;
					case 6:
						{
						_localctx = new NumExprPlusContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1305);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(1306);
						match(PLUS);
						setState(1307);
						numExpr(12);
						}
						break;
					case 7:
						{
						_localctx = new NumExprSubtractContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1308);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(1309);
						match(MINUS);
						setState(1310);
						numExpr(11);
						}
						break;
					case 8:
						{
						_localctx = new NumExprNumRelopContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1311);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(1312);
						compare();
						setState(1313);
						numExpr(10);
						}
						break;
					case 9:
						{
						_localctx = new NumExprSHLContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1315);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(1316);
						match(SHL);
						setState(1317);
						numExpr(8);
						}
						break;
					case 10:
						{
						_localctx = new NumExprSHRContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1318);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(1319);
						match(SHR);
						setState(1320);
						numExpr(7);
						}
						break;
					case 11:
						{
						_localctx = new NumExprANDContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1321);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(1322);
						match(AND);
						setState(1323);
						numExpr(6);
						}
						break;
					case 12:
						{
						_localctx = new NumExprORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1324);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(1325);
						match(OR);
						setState(1326);
						numExpr(5);
						}
						break;
					case 13:
						{
						_localctx = new NumExprEORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1327);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1328);
						match(EOR);
						setState(1329);
						numExpr(4);
						}
						break;
					}
					} 
				}
				setState(1334);
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

	public static class NestedExprContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NestedExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nestedExpr; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNestedExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final NestedExprContext nestedExpr() throws RecognitionException {
		NestedExprContext _localctx = new NestedExprContext(_ctx, getState());
		enterRule(_localctx, 200, RULE_nestedExpr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1335);
			match(LPAREN);
			setState(1336);
			numExpr(0);
			setState(1337);
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

	public static class NotExprContext extends ParserRuleContext {
		public TerminalNode NOT() { return getToken(DARICParser.NOT, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public NotExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_notExpr; }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitNotExpr(this);
			else return visitor.visitChildren(this);
		}
	}

	public final NotExprContext notExpr() throws RecognitionException {
		NotExprContext _localctx = new NotExprContext(_ctx, getState());
		enterRule(_localctx, 202, RULE_notExpr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1339);
			match(NOT);
			setState(1340);
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
		enterRule(_localctx, 204, RULE_numColours);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1342);
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

	public static class CompareContext extends ParserRuleContext {
		public CompareContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compare; }
	 
		public CompareContext() { }
		public void copyFrom(CompareContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class CompareLEContext extends CompareContext {
		public TerminalNode LE() { return getToken(DARICParser.LE, 0); }
		public CompareLEContext(CompareContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitCompareLE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class CompareLTContext extends CompareContext {
		public TerminalNode LT() { return getToken(DARICParser.LT, 0); }
		public CompareLTContext(CompareContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitCompareLT(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class CompareNEContext extends CompareContext {
		public TerminalNode NE() { return getToken(DARICParser.NE, 0); }
		public CompareNEContext(CompareContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitCompareNE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class CompareGEContext extends CompareContext {
		public TerminalNode GE() { return getToken(DARICParser.GE, 0); }
		public CompareGEContext(CompareContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitCompareGE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class CompareGTContext extends CompareContext {
		public TerminalNode GT() { return getToken(DARICParser.GT, 0); }
		public CompareGTContext(CompareContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitCompareGT(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class CompareEQContext extends CompareContext {
		public TerminalNode EQ() { return getToken(DARICParser.EQ, 0); }
		public CompareEQContext(CompareContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitCompareEQ(this);
			else return visitor.visitChildren(this);
		}
	}

	public final CompareContext compare() throws RecognitionException {
		CompareContext _localctx = new CompareContext(_ctx, getState());
		enterRule(_localctx, 206, RULE_compare);
		try {
			setState(1350);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case EQ:
				_localctx = new CompareEQContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1344);
				match(EQ);
				}
				break;
			case NE:
				_localctx = new CompareNEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1345);
				match(NE);
				}
				break;
			case GT:
				_localctx = new CompareGTContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1346);
				match(GT);
				}
				break;
			case GE:
				_localctx = new CompareGEContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1347);
				match(GE);
				}
				break;
			case LT:
				_localctx = new CompareLTContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1348);
				match(LT);
				}
				break;
			case LE:
				_localctx = new CompareLEContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1349);
				match(LE);
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

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 97:
			return strExpr_sempred((StrExprContext)_localctx, predIndex);
		case 99:
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
			return precpred(_ctx, 16);
		case 2:
			return precpred(_ctx, 15);
		case 3:
			return precpred(_ctx, 14);
		case 4:
			return precpred(_ctx, 13);
		case 5:
			return precpred(_ctx, 12);
		case 6:
			return precpred(_ctx, 11);
		case 7:
			return precpred(_ctx, 10);
		case 8:
			return precpred(_ctx, 9);
		case 9:
			return precpred(_ctx, 7);
		case 10:
			return precpred(_ctx, 6);
		case 11:
			return precpred(_ctx, 5);
		case 12:
			return precpred(_ctx, 4);
		case 13:
			return precpred(_ctx, 3);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00b5\u054b\4\2\t"+
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
		"`\t`\4a\ta\4b\tb\4c\tc\4d\td\4e\te\4f\tf\4g\tg\4h\th\4i\ti\3\2\7\2\u00d4"+
		"\n\2\f\2\16\2\u00d7\13\2\3\2\3\2\3\3\3\3\5\3\u00dd\n\3\3\3\5\3\u00e0\n"+
		"\3\3\3\3\3\5\3\u00e4\n\3\3\3\6\3\u00e7\n\3\r\3\16\3\u00e8\3\3\5\3\u00ec"+
		"\n\3\3\3\3\3\5\3\u00f0\n\3\3\4\7\4\u00f3\n\4\f\4\16\4\u00f6\13\4\3\5\7"+
		"\5\u00f9\n\5\f\5\16\5\u00fc\13\5\3\5\7\5\u00ff\n\5\f\5\16\5\u0102\13\5"+
		"\5\5\u0104\n\5\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\5\7\u010e\n\7\3\b\3\b\3"+
		"\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b"+
		"\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\5\b\u012c\n\b\3\t\3\t\3\n\3\n\3\n\3\n"+
		"\3\n\6\n\u0135\n\n\r\n\16\n\u0136\3\n\3\n\5\n\u013b\n\n\3\n\3\n\3\13\3"+
		"\13\3\13\3\f\3\f\3\f\3\f\7\f\u0146\n\f\f\f\16\f\u0149\13\f\3\r\3\r\3\r"+
		"\3\r\7\r\u014f\n\r\f\r\16\r\u0152\13\r\3\16\3\16\3\17\3\17\5\17\u0158"+
		"\n\17\3\20\3\20\3\20\3\20\5\20\u015e\n\20\3\20\3\20\3\20\3\20\3\21\3\21"+
		"\3\21\3\21\5\21\u0168\n\21\3\21\3\21\3\21\3\21\3\22\3\22\5\22\u0170\n"+
		"\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\5\22\u0179\n\22\3\22\3\22\3\22"+
		"\3\23\3\23\5\23\u0180\n\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\24"+
		"\3\24\3\24\5\24\u018d\n\24\3\24\3\24\3\25\3\25\3\25\5\25\u0194\n\25\3"+
		"\25\3\25\3\25\5\25\u0199\n\25\3\26\3\26\3\26\5\26\u019e\n\26\3\26\3\26"+
		"\6\26\u01a2\n\26\r\26\16\26\u01a3\3\26\3\26\3\26\6\26\u01a9\n\26\r\26"+
		"\16\26\u01aa\5\26\u01ad\n\26\3\26\3\26\3\27\5\27\u01b2\n\27\3\27\5\27"+
		"\u01b5\n\27\5\27\u01b7\n\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\7"+
		"\27\u01c1\n\27\f\27\16\27\u01c4\13\27\3\30\3\30\3\30\3\30\3\30\3\30\3"+
		"\30\3\30\3\30\7\30\u01cf\n\30\f\30\16\30\u01d2\13\30\3\31\3\31\3\31\3"+
		"\31\3\31\7\31\u01d9\n\31\f\31\16\31\u01dc\13\31\3\32\3\32\3\32\3\33\3"+
		"\33\3\33\5\33\u01e4\n\33\3\33\3\33\3\34\3\34\3\34\3\34\7\34\u01ec\n\34"+
		"\f\34\16\34\u01ef\13\34\3\35\3\35\3\36\3\36\3\36\3\36\3\36\3\37\3\37\3"+
		" \3 \3!\3!\3!\3!\3!\3!\7!\u0202\n!\f!\16!\u0205\13!\3!\3!\3\"\3\"\3\""+
		"\3\"\3\"\3#\3#\3#\3#\3#\3$\3$\3$\3$\3$\3$\3$\5$\u021a\n$\3%\3%\3%\3%\5"+
		"%\u0220\n%\3%\3%\3&\3&\5&\u0226\n&\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3(\3(\3"+
		"(\3)\3)\3)\3*\3*\3+\3+\3,\3,\3,\3,\3,\3,\3,\3,\3,\3,\3,\3,\3,\3,\3,\3"+
		",\3,\3,\3,\3,\3,\3,\3,\3,\5,\u0251\n,\3-\3-\3-\3-\3-\5-\u0258\n-\3.\3"+
		".\3.\3/\3/\3/\3\60\3\60\3\60\3\60\3\60\3\61\3\61\3\61\3\62\5\62\u0269"+
		"\n\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\63\3\63\3\63\3\63"+
		"\3\63\3\63\3\63\3\63\3\63\3\63\3\63\3\63\3\63\3\63\3\63\3\63\5\63\u0284"+
		"\n\63\3\64\3\64\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\5\65\u0291"+
		"\n\65\3\66\3\66\3\66\3\66\3\66\3\66\3\66\3\66\3\66\5\66\u029c\n\66\3\67"+
		"\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\5\67"+
		"\u02ac\n\67\38\38\39\39\39\39\39\39\39\39\39\39\39\39\39\39\39\59\u02bf"+
		"\n9\3:\3:\3:\3:\3:\3:\3:\3:\3:\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;\3;"+
		"\3;\3;\3;\3;\3;\3;\5;\u02dd\n;\3<\3<\3<\3<\3<\3<\3<\3<\3<\3<\3<\3<\3<"+
		"\3<\3<\3<\3<\3<\3<\3<\3<\3<\3<\3<\3<\3<\3<\3<\3<\3<\3<\3<\3<\3<\3<\3<"+
		"\3<\3<\3<\3<\3<\3<\3<\3<\3<\3<\3<\5<\u030e\n<\3=\3=\3=\3=\3=\3>\3>\3>"+
		"\3>\3>\3>\3>\3>\3>\3?\3?\3@\3@\3@\3@\3@\3@\3@\3@\3@\3A\3A\3A\3A\3A\3A"+
		"\3A\3A\3A\3B\3B\3B\3B\3B\3B\3B\3B\3B\3C\3C\3D\3D\3D\3D\7D\u0341\nD\fD"+
		"\16D\u0344\13D\3D\3D\3D\3E\3E\3F\3F\5F\u034d\nF\3G\3G\3G\5G\u0352\nG\3"+
		"H\3H\3I\3I\3I\3I\3I\5I\u035b\nI\3I\3I\3I\3I\3I\3I\3I\5I\u0364\nI\3I\3"+
		"I\3I\3I\3I\3I\3I\3I\3I\3I\3I\3I\3I\3I\3I\3I\3I\5I\u0377\nI\3I\3I\3I\3"+
		"I\5I\u037d\nI\3I\3I\3I\3I\5I\u0383\nI\3I\3I\3I\3I\3I\3I\3I\3I\3I\5I\u038e"+
		"\nI\3J\3J\3J\3J\3J\5J\u0395\nJ\3J\3J\3J\3J\3J\3J\3J\3J\3J\3J\3J\3J\5J"+
		"\u03a3\nJ\3K\3K\3K\5K\u03a8\nK\3L\3L\5L\u03ac\nL\3M\3M\3N\3N\3O\3O\3P"+
		"\3P\3Q\3Q\3Q\3Q\3Q\3Q\5Q\u03bc\nQ\3Q\3Q\7Q\u03c0\nQ\fQ\16Q\u03c3\13Q\3"+
		"Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3"+
		"Q\5Q\u03dd\nQ\3R\3R\3R\3R\3R\7R\u03e4\nR\fR\16R\u03e7\13R\3R\3R\3R\3R"+
		"\3R\3R\3R\3R\3R\5R\u03f2\nR\3S\3S\3S\7S\u03f7\nS\fS\16S\u03fa\13S\3T\5"+
		"T\u03fd\nT\3T\3T\3T\5T\u0402\nT\3T\7T\u0405\nT\fT\16T\u0408\13T\3U\3U"+
		"\3U\7U\u040d\nU\fU\16U\u0410\13U\3V\3V\3V\7V\u0415\nV\fV\16V\u0418\13"+
		"V\3W\5W\u041b\nW\3W\3W\3W\3W\3W\3W\3W\3W\5W\u0425\nW\3X\6X\u0428\nX\r"+
		"X\16X\u0429\3Y\3Y\3Y\5Y\u042f\nY\3Z\5Z\u0432\nZ\3Z\5Z\u0435\nZ\3Z\3Z\3"+
		"Z\3Z\7Z\u043b\nZ\fZ\16Z\u043e\13Z\3Z\5Z\u0441\nZ\3[\3[\5[\u0445\n[\3\\"+
		"\3\\\3\\\3\\\3\\\5\\\u044c\n\\\3]\5]\u044f\n]\3]\3]\3^\3^\3_\3_\3`\5`"+
		"\u0458\n`\3`\3`\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a"+
		"\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a\3a"+
		"\3a\3a\3a\3a\5a\u0489\na\3b\3b\3c\3c\3c\3c\3c\3c\3c\3c\5c\u0495\nc\3c"+
		"\3c\3c\7c\u049a\nc\fc\16c\u049d\13c\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3"+
		"d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3"+
		"d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3"+
		"d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3"+
		"d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\3d\5d\u04fd\nd\3e\3e\3e\3e\3e\3"+
		"e\3e\3e\3e\3e\3e\3e\5e\u050b\ne\3e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3"+
		"e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3e\3"+
		"e\3e\3e\3e\3e\7e\u0535\ne\fe\16e\u0538\13e\3f\3f\3f\3f\3g\3g\3g\3h\3h"+
		"\3i\3i\3i\3i\3i\3i\5i\u0549\ni\3i\2\4\u00c4\u00c8j\2\4\6\b\n\f\16\20\22"+
		"\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPRTVXZ\\^`bdfhjlnp"+
		"rtvxz|~\u0080\u0082\u0084\u0086\u0088\u008a\u008c\u008e\u0090\u0092\u0094"+
		"\u0096\u0098\u009a\u009c\u009e\u00a0\u00a2\u00a4\u00a6\u00a8\u00aa\u00ac"+
		"\u00ae\u00b0\u00b2\u00b4\u00b6\u00b8\u00ba\u00bc\u00be\u00c0\u00c2\u00c4"+
		"\u00c6\u00c8\u00ca\u00cc\u00ce\u00d0\2\7\4\2$$\u00a6\u00a6\3\2^_\3\2\u00a9"+
		"\u00ab\3\2\u008e\u008f\3\2:A\2\u05d5\2\u00d5\3\2\2\2\4\u00ef\3\2\2\2\6"+
		"\u00f4\3\2\2\2\b\u0103\3\2\2\2\n\u0105\3\2\2\2\f\u010d\3\2\2\2\16\u012b"+
		"\3\2\2\2\20\u012d\3\2\2\2\22\u012f\3\2\2\2\24\u013e\3\2\2\2\26\u0141\3"+
		"\2\2\2\30\u014a\3\2\2\2\32\u0153\3\2\2\2\34\u0155\3\2\2\2\36\u0159\3\2"+
		"\2\2 \u0163\3\2\2\2\"\u016d\3\2\2\2$\u017d\3\2\2\2&\u0189\3\2\2\2(\u0190"+
		"\3\2\2\2*\u019a\3\2\2\2,\u01b6\3\2\2\2.\u01c5\3\2\2\2\60\u01d3\3\2\2\2"+
		"\62\u01dd\3\2\2\2\64\u01e0\3\2\2\2\66\u01e7\3\2\2\28\u01f0\3\2\2\2:\u01f2"+
		"\3\2\2\2<\u01f7\3\2\2\2>\u01f9\3\2\2\2@\u01fb\3\2\2\2B\u0208\3\2\2\2D"+
		"\u020d\3\2\2\2F\u0219\3\2\2\2H\u021b\3\2\2\2J\u0223\3\2\2\2L\u0227\3\2"+
		"\2\2N\u022e\3\2\2\2P\u0231\3\2\2\2R\u0234\3\2\2\2T\u0236\3\2\2\2V\u0250"+
		"\3\2\2\2X\u0257\3\2\2\2Z\u0259\3\2\2\2\\\u025c\3\2\2\2^\u025f\3\2\2\2"+
		"`\u0264\3\2\2\2b\u0268\3\2\2\2d\u0283\3\2\2\2f\u0285\3\2\2\2h\u0290\3"+
		"\2\2\2j\u029b\3\2\2\2l\u02ab\3\2\2\2n\u02ad\3\2\2\2p\u02be\3\2\2\2r\u02c0"+
		"\3\2\2\2t\u02dc\3\2\2\2v\u030d\3\2\2\2x\u030f\3\2\2\2z\u0314\3\2\2\2|"+
		"\u031d\3\2\2\2~\u031f\3\2\2\2\u0080\u0328\3\2\2\2\u0082\u0331\3\2\2\2"+
		"\u0084\u033a\3\2\2\2\u0086\u033c\3\2\2\2\u0088\u0348\3\2\2\2\u008a\u034c"+
		"\3\2\2\2\u008c\u0351\3\2\2\2\u008e\u0353\3\2\2\2\u0090\u038d\3\2\2\2\u0092"+
		"\u03a2\3\2\2\2\u0094\u03a7\3\2\2\2\u0096\u03ab\3\2\2\2\u0098\u03ad\3\2"+
		"\2\2\u009a\u03af\3\2\2\2\u009c\u03b1\3\2\2\2\u009e\u03b3\3\2\2\2\u00a0"+
		"\u03dc\3\2\2\2\u00a2\u03f1\3\2\2\2\u00a4\u03f3\3\2\2\2\u00a6\u03fc\3\2"+
		"\2\2\u00a8\u0409\3\2\2\2\u00aa\u0411\3\2\2\2\u00ac\u0424\3\2\2\2\u00ae"+
		"\u0427\3\2\2\2\u00b0\u042e\3\2\2\2\u00b2\u0431\3\2\2\2\u00b4\u0444\3\2"+
		"\2\2\u00b6\u044b\3\2\2\2\u00b8\u044e\3\2\2\2\u00ba\u0452\3\2\2\2\u00bc"+
		"\u0454\3\2\2\2\u00be\u0457\3\2\2\2\u00c0\u0488\3\2\2\2\u00c2\u048a\3\2"+
		"\2\2\u00c4\u0494\3\2\2\2\u00c6\u04fc\3\2\2\2\u00c8\u050a\3\2\2\2\u00ca"+
		"\u0539\3\2\2\2\u00cc\u053d\3\2\2\2\u00ce\u0540\3\2\2\2\u00d0\u0548\3\2"+
		"\2\2\u00d2\u00d4\5\4\3\2\u00d3\u00d2\3\2\2\2\u00d4\u00d7\3\2\2\2\u00d5"+
		"\u00d3\3\2\2\2\u00d5\u00d6\3\2\2\2\u00d6\u00d8\3\2\2\2\u00d7\u00d5\3\2"+
		"\2\2\u00d8\u00d9\7\2\2\3\u00d9\3\3\2\2\2\u00da\u00f0\7\u009a\2\2\u00db"+
		"\u00dd\5\n\6\2\u00dc\u00db\3\2\2\2\u00dc\u00dd\3\2\2\2\u00dd\u00df\3\2"+
		"\2\2\u00de\u00e0\t\2\2\2\u00df\u00de\3\2\2\2\u00df\u00e0\3\2\2\2\u00e0"+
		"\u00e1\3\2\2\2\u00e1\u00f0\7\u009a\2\2\u00e2\u00e4\5\n\6\2\u00e3\u00e2"+
		"\3\2\2\2\u00e3\u00e4\3\2\2\2\u00e4\u00e6\3\2\2\2\u00e5\u00e7\5\f\7\2\u00e6"+
		"\u00e5\3\2\2\2\u00e7\u00e8\3\2\2\2\u00e8\u00e6\3\2\2\2\u00e8\u00e9\3\2"+
		"\2\2\u00e9\u00eb\3\2\2\2\u00ea\u00ec\t\2\2\2\u00eb\u00ea\3\2\2\2\u00eb"+
		"\u00ec\3\2\2\2\u00ec\u00ed\3\2\2\2\u00ed\u00ee\7\u009a\2\2\u00ee\u00f0"+
		"\3\2\2\2\u00ef\u00da\3\2\2\2\u00ef\u00dc\3\2\2\2\u00ef\u00e3\3\2\2\2\u00f0"+
		"\5\3\2\2\2\u00f1\u00f3\5\f\7\2\u00f2\u00f1\3\2\2\2\u00f3\u00f6\3\2\2\2"+
		"\u00f4\u00f2\3\2\2\2\u00f4\u00f5\3\2\2\2\u00f5\7\3\2\2\2\u00f6\u00f4\3"+
		"\2\2\2\u00f7\u00f9\5\f\7\2\u00f8\u00f7\3\2\2\2\u00f9\u00fc\3\2\2\2\u00fa"+
		"\u00f8\3\2\2\2\u00fa\u00fb\3\2\2\2\u00fb\u0104\3\2\2\2\u00fc\u00fa\3\2"+
		"\2\2\u00fd\u00ff\5\4\3\2\u00fe\u00fd\3\2\2\2\u00ff\u0102\3\2\2\2\u0100"+
		"\u00fe\3\2\2\2\u0100\u0101\3\2\2\2\u0101\u0104\3\2\2\2\u0102\u0100\3\2"+
		"\2\2\u0103\u00fa\3\2\2\2\u0103\u0100\3\2\2\2\u0104\t\3\2\2\2\u0105\u0106"+
		"\7\u00b3\2\2\u0106\13\3\2\2\2\u0107\u010e\7\u009e\2\2\u0108\u010e\5\16"+
		"\b\2\u0109\u010e\5F$\2\u010a\u010e\5V,\2\u010b\u010e\5X-\2\u010c\u010e"+
		"\5d\63\2\u010d\u0107\3\2\2\2\u010d\u0108\3\2\2\2\u010d\u0109\3\2\2\2\u010d"+
		"\u010a\3\2\2\2\u010d\u010b\3\2\2\2\u010d\u010c\3\2\2\2\u010e\r\3\2\2\2"+
		"\u010f\u012c\5\20\t\2\u0110\u012c\5\22\n\2\u0111\u012c\5\24\13\2\u0112"+
		"\u012c\5\26\f\2\u0113\u012c\5\30\r\2\u0114\u012c\5\32\16\2\u0115\u012c"+
		"\5\34\17\2\u0116\u012c\5\36\20\2\u0117\u012c\5 \21\2\u0118\u012c\5\"\22"+
		"\2\u0119\u012c\5$\23\2\u011a\u012c\5&\24\2\u011b\u012c\5(\25\2\u011c\u012c"+
		"\5*\26\2\u011d\u012c\5,\27\2\u011e\u012c\5,\27\2\u011f\u012c\5.\30\2\u0120"+
		"\u012c\5\60\31\2\u0121\u012c\5\62\32\2\u0122\u012c\5\64\33\2\u0123\u012c"+
		"\5\66\34\2\u0124\u012c\58\35\2\u0125\u012c\5:\36\2\u0126\u012c\5<\37\2"+
		"\u0127\u012c\5> \2\u0128\u012c\5@!\2\u0129\u012c\5B\"\2\u012a\u012c\5"+
		"D#\2\u012b\u010f\3\2\2\2\u012b\u0110\3\2\2\2\u012b\u0111\3\2\2\2\u012b"+
		"\u0112\3\2\2\2\u012b\u0113\3\2\2\2\u012b\u0114\3\2\2\2\u012b\u0115\3\2"+
		"\2\2\u012b\u0116\3\2\2\2\u012b\u0117\3\2\2\2\u012b\u0118\3\2\2\2\u012b"+
		"\u0119\3\2\2\2\u012b\u011a\3\2\2\2\u012b\u011b\3\2\2\2\u012b\u011c\3\2"+
		"\2\2\u012b\u011d\3\2\2\2\u012b\u011e\3\2\2\2\u012b\u011f\3\2\2\2\u012b"+
		"\u0120\3\2\2\2\u012b\u0121\3\2\2\2\u012b\u0122\3\2\2\2\u012b\u0123\3\2"+
		"\2\2\u012b\u0124\3\2\2\2\u012b\u0125\3\2\2\2\u012b\u0126\3\2\2\2\u012b"+
		"\u0127\3\2\2\2\u012b\u0128\3\2\2\2\u012b\u0129\3\2\2\2\u012b\u012a\3\2"+
		"\2\2\u012c\17\3\2\2\2\u012d\u012e\7\3\2\2\u012e\21\3\2\2\2\u012f\u0130"+
		"\7\4\2\2\u0130\u0131\5\u00b4[\2\u0131\u0132\7\34\2\2\u0132\u0134\7\u009a"+
		"\2\2\u0133\u0135\5\u0086D\2\u0134\u0133\3\2\2\2\u0135\u0136\3\2\2\2\u0136"+
		"\u0134\3\2\2\2\u0136\u0137\3\2\2\2\u0137\u013a\3\2\2\2\u0138\u0139\7 "+
		"\2\2\u0139\u013b\5\b\5\2\u013a\u0138\3\2\2\2\u013a\u013b\3\2\2\2\u013b"+
		"\u013c\3\2\2\2\u013c\u013d\7\13\2\2\u013d\23\3\2\2\2\u013e\u013f\7\5\2"+
		"\2\u013f\u0140\5\u00c4c\2\u0140\25\3\2\2\2\u0141\u0142\7\6\2\2\u0142\u0147"+
		"\5\u008aF\2\u0143\u0144\7\u009f\2\2\u0144\u0146\5\u008aF\2\u0145\u0143"+
		"\3\2\2\2\u0146\u0149\3\2\2\2\u0147\u0145\3\2\2\2\u0147\u0148\3\2\2\2\u0148"+
		"\27\3\2\2\2\u0149\u0147\3\2\2\2\u014a\u014b\7\b\2\2\u014b\u0150\5\u00a2"+
		"R\2\u014c\u014d\7\u009f\2\2\u014d\u014f\5\u00a2R\2\u014e\u014c\3\2\2\2"+
		"\u014f\u0152\3\2\2\2\u0150\u014e\3\2\2\2\u0150\u0151\3\2\2\2\u0151\31"+
		"\3\2\2\2\u0152\u0150\3\2\2\2\u0153\u0154\7\n\2\2\u0154\33\3\2\2\2\u0155"+
		"\u0157\7\'\2\2\u0156\u0158\5\u00b4[\2\u0157\u0156\3\2\2\2\u0157\u0158"+
		"\3\2\2\2\u0158\35\3\2\2\2\u0159\u015a\7\7\2\2\u015a\u015b\5\u0088E\2\u015b"+
		"\u015d\7\u00a1\2\2\u015c\u015e\5\u00a6T\2\u015d\u015c\3\2\2\2\u015d\u015e"+
		"\3\2\2\2\u015e\u015f\3\2\2\2\u015f\u0160\7\u00a3\2\2\u0160\u0161\5\b\5"+
		"\2\u0161\u0162\7\r\2\2\u0162\37\3\2\2\2\u0163\u0164\7\7\2\2\u0164\u0165"+
		"\7\u00a8\2\2\u0165\u0167\7\u00a1\2\2\u0166\u0168\5\u00a6T\2\u0167\u0166"+
		"\3\2\2\2\u0167\u0168\3\2\2\2\u0168\u0169\3\2\2\2\u0169\u016a\7\u00a3\2"+
		"\2\u016a\u016b\5\b\5\2\u016b\u016c\7\16\2\2\u016c!\3\2\2\2\u016d\u016f"+
		"\7\21\2\2\u016e\u0170\7\31\2\2\u016f\u016e\3\2\2\2\u016f\u0170\3\2\2\2"+
		"\u0170\u0171\3\2\2\2\u0171\u0172\5\u0096L\2\u0172\u0173\7\u0081\2\2\u0173"+
		"\u0174\5\u00c8e\2\u0174\u0175\7,\2\2\u0175\u0178\5\u00c8e\2\u0176\u0177"+
		"\7)\2\2\u0177\u0179\5\u00c8e\2\u0178\u0176\3\2\2\2\u0178\u0179\3\2\2\2"+
		"\u0179\u017a\3\2\2\2\u017a\u017b\5\b\5\2\u017b\u017c\7\33\2\2\u017c#\3"+
		"\2\2\2\u017d\u017f\7\21\2\2\u017e\u0180\7\31\2\2\u017f\u017e\3\2\2\2\u017f"+
		"\u0180\3\2\2\2\u0180\u0181\3\2\2\2\u0181\u0182\5\u0094K\2\u0182\u0183"+
		"\7\25\2\2\u0183\u0184\5\u0094K\2\u0184\u0185\7\u00a1\2\2\u0185\u0186\7"+
		"\u00a3\2\2\u0186\u0187\5\b\5\2\u0187\u0188\7\33\2\2\u0188%\3\2\2\2\u0189"+
		"\u018a\5\u0088E\2\u018a\u018c\7\u00a1\2\2\u018b\u018d\5\u00a8U\2\u018c"+
		"\u018b\3\2\2\2\u018c\u018d\3\2\2\2\u018d\u018e\3\2\2\2\u018e\u018f\7\u00a3"+
		"\2\2\u018f\'\3\2\2\2\u0190\u0191\7\24\2\2\u0191\u0193\5\u00b4[\2\u0192"+
		"\u0194\7+\2\2\u0193\u0192\3\2\2\2\u0193\u0194\3\2\2\2\u0194\u0195\3\2"+
		"\2\2\u0195\u0198\5\6\4\2\u0196\u0197\7\t\2\2\u0197\u0199\5\6\4\2\u0198"+
		"\u0196\3\2\2\2\u0198\u0199\3\2\2\2\u0199)\3\2\2\2\u019a\u019b\7\24\2\2"+
		"\u019b\u019d\5\u00b4[\2\u019c\u019e\7+\2\2\u019d\u019c\3\2\2\2\u019d\u019e"+
		"\3\2\2\2\u019e\u019f\3\2\2\2\u019f\u01a1\7\u009a\2\2\u01a0\u01a2\5\4\3"+
		"\2\u01a1\u01a0\3\2\2\2\u01a2\u01a3\3\2\2\2\u01a3\u01a1\3\2\2\2\u01a3\u01a4"+
		"\3\2\2\2\u01a4\u01ac\3\2\2\2\u01a5\u01a6\7\t\2\2\u01a6\u01a8\7\u009a\2"+
		"\2\u01a7\u01a9\5\4\3\2\u01a8\u01a7\3\2\2\2\u01a9\u01aa\3\2\2\2\u01aa\u01a8"+
		"\3\2\2\2\u01aa\u01ab\3\2\2\2\u01ab\u01ad\3\2\2\2\u01ac\u01a5\3\2\2\2\u01ac"+
		"\u01ad\3\2\2\2\u01ad\u01ae\3\2\2\2\u01ae\u01af\7\f\2\2\u01af+\3\2\2\2"+
		"\u01b0\u01b2\7\32\2\2\u01b1\u01b0\3\2\2\2\u01b1\u01b2\3\2\2\2\u01b2\u01b7"+
		"\3\2\2\2\u01b3\u01b5\7\30\2\2\u01b4\u01b3\3\2\2\2\u01b4\u01b5\3\2\2\2"+
		"\u01b5\u01b7\3\2\2\2\u01b6\u01b1\3\2\2\2\u01b6\u01b4\3\2\2\2\u01b7\u01b8"+
		"\3\2\2\2\u01b8\u01b9\5\u00a0Q\2\u01b9\u01ba\7\u0081\2\2\u01ba\u01c2\5"+
		"\u00b4[\2\u01bb\u01bc\7\u009f\2\2\u01bc\u01bd\5\u00a0Q\2\u01bd\u01be\7"+
		"\u0081\2\2\u01be\u01bf\5\u00b4[\2\u01bf\u01c1\3\2\2\2\u01c0\u01bb\3\2"+
		"\2\2\u01c1\u01c4\3\2\2\2\u01c2\u01c0\3\2\2\2\u01c2\u01c3\3\2\2\2\u01c3"+
		"-\3\2\2\2\u01c4\u01c2\3\2\2\2\u01c5\u01c6\7\31\2\2\u01c6\u01c7\5\u00a0"+
		"Q\2\u01c7\u01c8\7\u0081\2\2\u01c8\u01d0\5\u00b4[\2\u01c9\u01ca\7\u009f"+
		"\2\2\u01ca\u01cb\5\u00a0Q\2\u01cb\u01cc\7\u0081\2\2\u01cc\u01cd\5\u00b4"+
		"[\2\u01cd\u01cf\3\2\2\2\u01ce\u01c9\3\2\2\2\u01cf\u01d2\3\2\2\2\u01d0"+
		"\u01ce\3\2\2\2\u01d0\u01d1\3\2\2\2\u01d1/\3\2\2\2\u01d2\u01d0\3\2\2\2"+
		"\u01d3\u01d4\7\31\2\2\u01d4\u01d5\7\b\2\2\u01d5\u01da\5\u00a2R\2\u01d6"+
		"\u01d7\7\u009f\2\2\u01d7\u01d9\5\u00a2R\2\u01d8\u01d6\3\2\2\2\u01d9\u01dc"+
		"\3\2\2\2\u01da\u01d8\3\2\2\2\u01da\u01db\3\2\2\2\u01db\61\3\2\2\2\u01dc"+
		"\u01da\3\2\2\2\u01dd\u01de\7\37\2\2\u01de\u01df\5\u00c4c\2\u01df\63\3"+
		"\2\2\2\u01e0\u01e1\7\u00a8\2\2\u01e1\u01e3\7\u00a1\2\2\u01e2\u01e4\5\u00a8"+
		"U\2\u01e3\u01e2\3\2\2\2\u01e3\u01e4\3\2\2\2\u01e4\u01e5\3\2\2\2\u01e5"+
		"\u01e6\7\u00a3\2\2\u01e6\65\3\2\2\2\u01e7\u01e8\7#\2\2\u01e8\u01ed\5\u00a0"+
		"Q\2\u01e9\u01ea\7\u009f\2\2\u01ea\u01ec\5\u00a0Q\2\u01eb\u01e9\3\2\2\2"+
		"\u01ec\u01ef\3\2\2\2\u01ed\u01eb\3\2\2\2\u01ed\u01ee\3\2\2\2\u01ee\67"+
		"\3\2\2\2\u01ef\u01ed\3\2\2\2\u01f0\u01f1\7&\2\2\u01f19\3\2\2\2\u01f2\u01f3"+
		"\7*\2\2\u01f3\u01f4\5\u0094K\2\u01f4\u01f5\7\u009f\2\2\u01f5\u01f6\5\u0094"+
		"K\2\u01f6;\3\2\2\2\u01f7\u01f8\7.\2\2\u01f8=\3\2\2\2\u01f9\u01fa\7/\2"+
		"\2\u01fa?\3\2\2\2\u01fb\u01fc\7\61\2\2\u01fc\u01fd\5\u0098M\2\u01fd\u01fe"+
		"\7\u00a1\2\2\u01fe\u0203\5\u0094K\2\u01ff\u0200\7\u009f\2\2\u0200\u0202"+
		"\5\u0094K\2\u0201\u01ff\3\2\2\2\u0202\u0205\3\2\2\2\u0203\u0201\3\2\2"+
		"\2\u0203\u0204\3\2\2\2\u0204\u0206\3\2\2\2\u0205\u0203\3\2\2\2\u0206\u0207"+
		"\7\u00a3\2\2\u0207A\3\2\2\2\u0208\u0209\7%\2\2\u0209\u020a\5\b\5\2\u020a"+
		"\u020b\7\62\2\2\u020b\u020c\5\u00b4[\2\u020cC\3\2\2\2\u020d\u020e\7\64"+
		"\2\2\u020e\u020f\5\u00b4[\2\u020f\u0210\5\b\5\2\u0210\u0211\7\17\2\2\u0211"+
		"E\3\2\2\2\u0212\u021a\5H%\2\u0213\u021a\5J&\2\u0214\u021a\5L\'\2\u0215"+
		"\u021a\5N(\2\u0216\u021a\5P)\2\u0217\u021a\5R*\2\u0218\u021a\5T+\2\u0219"+
		"\u0212\3\2\2\2\u0219\u0213\3\2\2\2\u0219\u0214\3\2\2\2\u0219\u0215\3\2"+
		"\2\2\u0219\u0216\3\2\2\2\u0219\u0217\3\2\2\2\u0219\u0218\3\2\2\2\u021a"+
		"G\3\2\2\2\u021b\u021f\7\27\2\2\u021c\u021d\5\u00c4c\2\u021d\u021e\7\u009f"+
		"\2\2\u021e\u0220\3\2\2\2\u021f\u021c\3\2\2\2\u021f\u0220\3\2\2\2\u0220"+
		"\u0221\3\2\2\2\u0221\u0222\5\u00a4S\2\u0222I\3\2\2\2\u0223\u0225\7!\2"+
		"\2\u0224\u0226\5\u00b2Z\2\u0225\u0224\3\2\2\2\u0225\u0226\3\2\2\2\u0226"+
		"K\3\2\2\2\u0227\u0228\7\65\2\2\u0228\u0229\5\u009aN\2\u0229\u022a\7\u009f"+
		"\2\2\u022a\u022b\5\u009aN\2\u022b\u022c\7\u009f\2\2\u022c\u022d\5\u009a"+
		"N\2\u022dM\3\2\2\2\u022e\u022f\7\66\2\2\u022f\u0230\5\u00c8e\2\u0230O"+
		"\3\2\2\2\u0231\u0232\7\67\2\2\u0232\u0233\5\u00c8e\2\u0233Q\3\2\2\2\u0234"+
		"\u0235\78\2\2\u0235S\3\2\2\2\u0236\u0237\79\2\2\u0237U\3\2\2\2\u0238\u0239"+
		"\5\u00a0Q\2\u0239\u023a\7\u0096\2\2\u023a\u023b\5\u00c8e\2\u023b\u0251"+
		"\3\2\2\2\u023c\u023d\5\u00a0Q\2\u023d\u023e\7\u0097\2\2\u023e\u023f\5"+
		"\u00c8e\2\u023f\u0251\3\2\2\2\u0240\u0241\5\u00a0Q\2\u0241\u0242\7\u0094"+
		"\2\2\u0242\u0243\5\u00c8e\2\u0243\u0251\3\2\2\2\u0244\u0245\5\u00a0Q\2"+
		"\u0245\u0246\7\u0095\2\2\u0246\u0247\5\u00c8e\2\u0247\u0251\3\2\2\2\u0248"+
		"\u0249\5\u00a0Q\2\u0249\u024a\7\u0098\2\2\u024a\u024b\5\u00c8e\2\u024b"+
		"\u0251\3\2\2\2\u024c\u024d\5\u00a0Q\2\u024d\u024e\7\u0099\2\2\u024e\u024f"+
		"\5\u00c8e\2\u024f\u0251\3\2\2\2\u0250\u0238\3\2\2\2\u0250\u023c\3\2\2"+
		"\2\u0250\u0240\3\2\2\2\u0250\u0244\3\2\2\2\u0250\u0248\3\2\2\2\u0250\u024c"+
		"\3\2\2\2\u0251W\3\2\2\2\u0252\u0258\5Z.\2\u0253\u0258\5\\/\2\u0254\u0258"+
		"\5^\60\2\u0255\u0258\5`\61\2\u0256\u0258\5b\62\2\u0257\u0252\3\2\2\2\u0257"+
		"\u0253\3\2\2\2\u0257\u0254\3\2\2\2\u0257\u0255\3\2\2\2\u0257\u0256\3\2"+
		"\2\2\u0258Y\3\2\2\2\u0259\u025a\7C\2\2\u025a\u025b\5\u00c8e\2\u025b[\3"+
		"\2\2\2\u025c\u025d\7B\2\2\u025d\u025e\5\u00c8e\2\u025e]\3\2\2\2\u025f"+
		"\u0260\7K\2\2\u0260\u0261\5\u00c8e\2\u0261\u0262\7\u0081\2\2\u0262\u0263"+
		"\5\u00c8e\2\u0263_\3\2\2\2\u0264\u0265\7D\2\2\u0265\u0266\5\u00c8e\2\u0266"+
		"a\3\2\2\2\u0267\u0269\7\31\2\2\u0268\u0267\3\2\2\2\u0268\u0269\3\2\2\2"+
		"\u0269\u026a\3\2\2\2\u026a\u026b\5\u009cO\2\u026b\u026c\7\u00a1\2\2\u026c"+
		"\u026d\7\u00a3\2\2\u026d\u026e\7\u0081\2\2\u026e\u026f\7G\2\2\u026f\u0270"+
		"\7\u00a1\2\2\u0270\u0271\5\u00c4c\2\u0271\u0272\7\u00a3\2\2\u0272c\3\2"+
		"\2\2\u0273\u0284\5f\64\2\u0274\u0284\5h\65\2\u0275\u0284\5j\66\2\u0276"+
		"\u0284\5l\67\2\u0277\u0284\5n8\2\u0278\u0284\5p9\2\u0279\u0284\5r:\2\u027a"+
		"\u0284\5t;\2\u027b\u0284\5v<\2\u027c\u0284\5x=\2\u027d\u0284\5z>\2\u027e"+
		"\u0284\5|?\2\u027f\u0284\5~@\2\u0280\u0284\5\u0080A\2\u0281\u0284\5\u0082"+
		"B\2\u0282\u0284\5\u0084C\2\u0283\u0273\3\2\2\2\u0283\u0274\3\2\2\2\u0283"+
		"\u0275\3\2\2\2\u0283\u0276\3\2\2\2\u0283\u0277\3\2\2\2\u0283\u0278\3\2"+
		"\2\2\u0283\u0279\3\2\2\2\u0283\u027a\3\2\2\2\u0283\u027b\3\2\2\2\u0283"+
		"\u027c\3\2\2\2\u0283\u027d\3\2\2\2\u0283\u027e\3\2\2\2\u0283\u027f\3\2"+
		"\2\2\u0283\u0280\3\2\2\2\u0283\u0281\3\2\2\2\u0283\u0282\3\2\2\2\u0284"+
		"e\3\2\2\2\u0285\u0286\7N\2\2\u0286g\3\2\2\2\u0287\u0288\7Q\2\2\u0288\u0291"+
		"\5\u00c8e\2\u0289\u028a\7Q\2\2\u028a\u028b\5\u00c8e\2\u028b\u028c\7\u009f"+
		"\2\2\u028c\u028d\5\u00c8e\2\u028d\u028e\7\u009f\2\2\u028e\u028f\5\u00c8"+
		"e\2\u028f\u0291\3\2\2\2\u0290\u0287\3\2\2\2\u0290\u0289\3\2\2\2\u0291"+
		"i\3\2\2\2\u0292\u0293\7R\2\2\u0293\u029c\5\u00c8e\2\u0294\u0295\7R\2\2"+
		"\u0295\u0296\5\u00c8e\2\u0296\u0297\7\u009f\2\2\u0297\u0298\5\u00c8e\2"+
		"\u0298\u0299\7\u009f\2\2\u0299\u029a\5\u00c8e\2\u029a\u029c\3\2\2\2\u029b"+
		"\u0292\3\2\2\2\u029b\u0294\3\2\2\2\u029ck\3\2\2\2\u029d\u02ac\7V\2\2\u029e"+
		"\u029f\7V\2\2\u029f\u02a0\5\u00c8e\2\u02a0\u02a1\7\u009f\2\2\u02a1\u02a2"+
		"\5\u00c8e\2\u02a2\u02ac\3\2\2\2\u02a3\u02a4\7V\2\2\u02a4\u02ac\7L\2\2"+
		"\u02a5\u02a6\7V\2\2\u02a6\u02a7\7L\2\2\u02a7\u02a8\5\u00c8e\2\u02a8\u02a9"+
		"\7\u009f\2\2\u02a9\u02aa\5\u00c8e\2\u02aa\u02ac\3\2\2\2\u02ab\u029d\3"+
		"\2\2\2\u02ab\u029e\3\2\2\2\u02ab\u02a3\3\2\2\2\u02ab\u02a5\3\2\2\2\u02ac"+
		"m\3\2\2\2\u02ad\u02ae\7T\2\2\u02aeo\3\2\2\2\u02af\u02b0\7M\2\2\u02b0\u02b1"+
		"\5\u00c8e\2\u02b1\u02b2\7\u009f\2\2\u02b2\u02b3\5\u00c8e\2\u02b3\u02b4"+
		"\7\u009f\2\2\u02b4\u02b5\5\u00c8e\2\u02b5\u02bf\3\2\2\2\u02b6\u02b7\7"+
		"M\2\2\u02b7\u02b8\7S\2\2\u02b8\u02b9\5\u00c8e\2\u02b9\u02ba\7\u009f\2"+
		"\2\u02ba\u02bb\5\u00c8e\2\u02bb\u02bc\7\u009f\2\2\u02bc\u02bd\5\u00c8"+
		"e\2\u02bd\u02bf\3\2\2\2\u02be\u02af\3\2\2\2\u02be\u02b6\3\2\2\2\u02bf"+
		"q\3\2\2\2\u02c0\u02c1\7W\2\2\u02c1\u02c2\5\u00c8e\2\u02c2\u02c3\7\u009f"+
		"\2\2\u02c3\u02c4\5\u00c8e\2\u02c4\u02c5\7\u009f\2\2\u02c5\u02c6\5\u00c8"+
		"e\2\u02c6\u02c7\7\u009f\2\2\u02c7\u02c8\5\u00c8e\2\u02c8s\3\2\2\2\u02c9"+
		"\u02ca\7X\2\2\u02ca\u02cb\5\u00c8e\2\u02cb\u02cc\7\u009f\2\2\u02cc\u02cd"+
		"\5\u00c8e\2\u02cd\u02ce\7\u009f\2\2\u02ce\u02cf\5\u00c8e\2\u02cf\u02d0"+
		"\7\u009f\2\2\u02d0\u02d1\5\u00c8e\2\u02d1\u02dd\3\2\2\2\u02d2\u02d3\7"+
		"X\2\2\u02d3\u02d4\7S\2\2\u02d4\u02d5\5\u00c8e\2\u02d5\u02d6\7\u009f\2"+
		"\2\u02d6\u02d7\5\u00c8e\2\u02d7\u02d8\7\u009f\2\2\u02d8\u02d9\5\u00c8"+
		"e\2\u02d9\u02da\7\u009f\2\2\u02da\u02db\5\u00c8e\2\u02db\u02dd\3\2\2\2"+
		"\u02dc\u02c9\3\2\2\2\u02dc\u02d2\3\2\2\2\u02ddu\3\2\2\2\u02de\u02df\7"+
		"`\2\2\u02df\u02e0\5\u00c8e\2\u02e0\u02e1\7\u009f\2\2\u02e1\u02e2\5\u00c8"+
		"e\2\u02e2\u02e3\7\u009f\2\2\u02e3\u02e4\5\u00c8e\2\u02e4\u02e5\7\u009f"+
		"\2\2\u02e5\u02e6\5\u00c8e\2\u02e6\u02e7\7\u009f\2\2\u02e7\u02e8\5\u00c8"+
		"e\2\u02e8\u02e9\7\u009f\2\2\u02e9\u02ea\5\u00c8e\2\u02ea\u030e\3\2\2\2"+
		"\u02eb\u02ec\7`\2\2\u02ec\u02ed\7S\2\2\u02ed\u02ee\5\u00c8e\2\u02ee\u02ef"+
		"\7\u009f\2\2\u02ef\u02f0\5\u00c8e\2\u02f0\u02f1\7\u009f\2\2\u02f1\u02f2"+
		"\5\u00c8e\2\u02f2\u02f3\7\u009f\2\2\u02f3\u02f4\5\u00c8e\2\u02f4\u02f5"+
		"\7\u009f\2\2\u02f5\u02f6\5\u00c8e\2\u02f6\u02f7\7\u009f\2\2\u02f7\u02f8"+
		"\5\u00c8e\2\u02f8\u030e\3\2\2\2\u02f9\u02fa\7`\2\2\u02fa\u02fb\7[\2\2"+
		"\u02fb\u02fc\5\u00c8e\2\u02fc\u02fd\7\u009f\2\2\u02fd\u02fe\5\u00c8e\2"+
		"\u02fe\u02ff\7\u009f\2\2\u02ff\u0300\5\u00c8e\2\u0300\u0301\7\u009f\2"+
		"\2\u0301\u0302\5\u00c8e\2\u0302\u0303\7\u009f\2\2\u0303\u0304\5\u00c8"+
		"e\2\u0304\u0305\7\u009f\2\2\u0305\u0306\5\u00c8e\2\u0306\u0307\7\u009f"+
		"\2\2\u0307\u0308\5\u00c8e\2\u0308\u0309\7\u009f\2\2\u0309\u030a\5\u00c8"+
		"e\2\u030a\u030b\7\u009f\2\2\u030b\u030c\5\u00c8e\2\u030c\u030e\3\2\2\2"+
		"\u030d\u02de\3\2\2\2\u030d\u02eb\3\2\2\2\u030d\u02f9\3\2\2\2\u030ew\3"+
		"\2\2\2\u030f\u0310\7Y\2\2\u0310\u0311\5\u00c8e\2\u0311\u0312\7\u009f\2"+
		"\2\u0312\u0313\5\u00c8e\2\u0313y\3\2\2\2\u0314\u0315\7O\2\2\u0315\u0316"+
		"\5\u00c8e\2\u0316\u0317\7\u009f\2\2\u0317\u0318\5\u00c8e\2\u0318\u0319"+
		"\7\u009f\2\2\u0319\u031a\5\u00c8e\2\u031a\u031b\7\u009f\2\2\u031b\u031c"+
		"\5\u00c8e\2\u031c{\3\2\2\2\u031d\u031e\7P\2\2\u031e}\3\2\2\2\u031f\u0320"+
		"\7\\\2\2\u0320\u0321\5\u00c8e\2\u0321\u0322\7\u009f\2\2\u0322\u0323\5"+
		"\u00c8e\2\u0323\u0324\7\u009f\2\2\u0324\u0325\5\u00c8e\2\u0325\u0326\7"+
		"\u009f\2\2\u0326\u0327\5\u00c8e\2\u0327\177\3\2\2\2\u0328\u0329\7]\2\2"+
		"\u0329\u032a\5\u00c8e\2\u032a\u032b\7\u009f\2\2\u032b\u032c\5\u00c8e\2"+
		"\u032c\u032d\7\u009f\2\2\u032d\u032e\5\u00c8e\2\u032e\u032f\7\u009f\2"+
		"\2\u032f\u0330\5\u00c4c\2\u0330\u0081\3\2\2\2\u0331\u0332\t\3\2\2\u0332"+
		"\u0333\5\u00c8e\2\u0333\u0334\7\u009f\2\2\u0334\u0335\5\u00c8e\2\u0335"+
		"\u0336\7\u009f\2\2\u0336\u0337\5\u00c8e\2\u0337\u0338\7\u009f\2\2\u0338"+
		"\u0339\5\u00c4c\2\u0339\u0083\3\2\2\2\u033a\u033b\7U\2\2\u033b\u0085\3"+
		"\2\2\2\u033c\u033d\7\63\2\2\u033d\u0342\5\u00b4[\2\u033e\u033f\7\u009f"+
		"\2\2\u033f\u0341\5\u00b4[\2\u0340\u033e\3\2\2\2\u0341\u0344\3\2\2\2\u0342"+
		"\u0340\3\2\2\2\u0342\u0343\3\2\2\2\u0343\u0345\3\2\2\2\u0344\u0342\3\2"+
		"\2\2\u0345\u0346\7\u009e\2\2\u0346\u0347\5\b\5\2\u0347\u0087\3\2\2\2\u0348"+
		"\u0349\t\4\2\2\u0349\u0089\3\2\2\2\u034a\u034d\5\u00b6\\\2\u034b\u034d"+
		"\5\u00c2b\2\u034c\u034a\3\2\2\2\u034c\u034b\3\2\2\2\u034d\u008b\3\2\2"+
		"\2\u034e\u0352\5\u0090I\2\u034f\u0352\5\u0092J\2\u0350\u0352\5\u008eH"+
		"\2\u0351\u034e\3\2\2\2\u0351\u034f\3\2\2\2\u0351\u0350\3\2\2\2\u0352\u008d"+
		"\3\2\2\2\u0353\u0354\5\u009eP\2\u0354\u008f\3\2\2\2\u0355\u0356\5\u0098"+
		"M\2\u0356\u0357\7\u00a1\2\2\u0357\u035a\5\u00c8e\2\u0358\u0359\7\u009f"+
		"\2\2\u0359\u035b\5\u00c8e\2\u035a\u0358\3\2\2\2\u035a\u035b\3\2\2\2\u035b"+
		"\u035c\3\2\2\2\u035c\u035d\7\u00a3\2\2\u035d\u038e\3\2\2\2\u035e\u035f"+
		"\5\u009aN\2\u035f\u0360\7\u00a1\2\2\u0360\u0363\5\u00c8e\2\u0361\u0362"+
		"\7\u009f\2\2\u0362\u0364\5\u00c8e\2\u0363\u0361\3\2\2\2\u0363\u0364\3"+
		"\2\2\2\u0364\u0365\3\2\2\2\u0365\u0366\7\u00a3\2\2\u0366\u038e\3\2\2\2"+
		"\u0367\u0368\5\u008eH\2\u0368\u0369\7\u00a1\2\2\u0369\u036a\5\u00c8e\2"+
		"\u036a\u036b\7\u00a3\2\2\u036b\u036c\5\u009aN\2\u036c\u038e\3\2\2\2\u036d"+
		"\u036e\5\u008eH\2\u036e\u036f\7\u00a1\2\2\u036f\u0370\5\u00c8e\2\u0370"+
		"\u0371\7\u00a3\2\2\u0371\u0372\5\u0098M\2\u0372\u038e\3\2\2\2\u0373\u0374"+
		"\7\u00aa\2\2\u0374\u0376\7\u00a1\2\2\u0375\u0377\5\u00a8U\2\u0376\u0375"+
		"\3\2\2\2\u0376\u0377\3\2\2\2\u0377\u0378\3\2\2\2\u0378\u038e\7\u00a3\2"+
		"\2\u0379\u037a\7\u00a9\2\2\u037a\u037c\7\u00a1\2\2\u037b\u037d\5\u00a8"+
		"U\2\u037c\u037b\3\2\2\2\u037c\u037d\3\2\2\2\u037d\u037e\3\2\2\2\u037e"+
		"\u038e\7\u00a3\2\2\u037f\u0380\7\u00ab\2\2\u0380\u0382\7\u00a1\2\2\u0381"+
		"\u0383\5\u00a8U\2\u0382\u0381\3\2\2\2\u0382\u0383\3\2\2\2\u0383\u0384"+
		"\3\2\2\2\u0384\u038e\7\u00a3\2\2\u0385\u038e\5\u0098M\2\u0386\u038e\5"+
		"\u009aN\2\u0387\u0388\5\u008eH\2\u0388\u0389\5\u0098M\2\u0389\u038e\3"+
		"\2\2\2\u038a\u038b\5\u008eH\2\u038b\u038c\5\u009aN\2\u038c\u038e\3\2\2"+
		"\2\u038d\u0355\3\2\2\2\u038d\u035e\3\2\2\2\u038d\u0367\3\2\2\2\u038d\u036d"+
		"\3\2\2\2\u038d\u0373\3\2\2\2\u038d\u0379\3\2\2\2\u038d\u037f\3\2\2\2\u038d"+
		"\u0385\3\2\2\2\u038d\u0386\3\2\2\2\u038d\u0387\3\2\2\2\u038d\u038a\3\2"+
		"\2\2\u038e\u0091\3\2\2\2\u038f\u0390\5\u009cO\2\u0390\u0391\7\u00a1\2"+
		"\2\u0391\u0394\5\u00c8e\2\u0392\u0393\7\u009f\2\2\u0393\u0395\5\u00c8"+
		"e\2\u0394\u0392\3\2\2\2\u0394\u0395\3\2\2\2\u0395\u0396\3\2\2\2\u0396"+
		"\u0397\7\u00a3\2\2\u0397\u03a3\3\2\2\2\u0398\u0399\5\u008eH\2\u0399\u039a"+
		"\7\u00a1\2\2\u039a\u039b\5\u00c8e\2\u039b\u039c\7\u00a3\2\2\u039c\u039d"+
		"\5\u009cO\2\u039d\u03a3\3\2\2\2\u039e\u03a3\5\u009cO\2\u039f\u03a0\5\u008e"+
		"H\2\u03a0\u03a1\5\u009cO\2\u03a1\u03a3\3\2\2\2\u03a2\u038f\3\2\2\2\u03a2"+
		"\u0398\3\2\2\2\u03a2\u039e\3\2\2\2\u03a2\u039f\3\2\2\2\u03a3\u0093\3\2"+
		"\2\2\u03a4\u03a8\5\u0098M\2\u03a5\u03a8\5\u009aN\2\u03a6\u03a8\5\u009c"+
		"O\2\u03a7\u03a4\3\2\2\2\u03a7\u03a5\3\2\2\2\u03a7\u03a6\3\2\2\2\u03a8"+
		"\u0095\3\2\2\2\u03a9\u03ac\5\u0098M\2\u03aa\u03ac\5\u009aN\2\u03ab\u03a9"+
		"\3\2\2\2\u03ab\u03aa\3\2\2\2\u03ac\u0097\3\2\2\2\u03ad\u03ae\7\u00ac\2"+
		"\2\u03ae\u0099\3\2\2\2\u03af\u03b0\7\u00ad\2\2\u03b0\u009b\3\2\2\2\u03b1"+
		"\u03b2\7\u00ae\2\2\u03b2\u009d\3\2\2\2\u03b3\u03b4\7\u00af\2\2\u03b4\u009f"+
		"\3\2\2\2\u03b5\u03dd\5\u0094K\2\u03b6\u03c1\5\u0094K\2\u03b7\u03b8\7\u00a1"+
		"\2\2\u03b8\u03bb\5\u00c8e\2\u03b9\u03ba\7\u009f\2\2\u03ba\u03bc\5\u00c8"+
		"e\2\u03bb\u03b9\3\2\2\2\u03bb\u03bc\3\2\2\2\u03bc\u03bd\3\2\2\2\u03bd"+
		"\u03be\7\u00a3\2\2\u03be\u03c0\3\2\2\2\u03bf\u03b7\3\2\2\2\u03c0\u03c3"+
		"\3\2\2\2\u03c1\u03bf\3\2\2\2\u03c1\u03c2\3\2\2\2\u03c2\u03dd\3\2\2\2\u03c3"+
		"\u03c1\3\2\2\2\u03c4\u03c5\5\u008eH\2\u03c5\u03c6\5\u0098M\2\u03c6\u03dd"+
		"\3\2\2\2\u03c7\u03c8\5\u008eH\2\u03c8\u03c9\5\u009aN\2\u03c9\u03dd\3\2"+
		"\2\2\u03ca\u03cb\5\u008eH\2\u03cb\u03cc\7\u00a1\2\2\u03cc\u03cd\5\u00c8"+
		"e\2\u03cd\u03ce\7\u00a3\2\2\u03ce\u03cf\5\u0098M\2\u03cf\u03dd\3\2\2\2"+
		"\u03d0\u03d1\5\u008eH\2\u03d1\u03d2\7\u00a1\2\2\u03d2\u03d3\5\u00c8e\2"+
		"\u03d3\u03d4\7\u00a3\2\2\u03d4\u03d5\5\u009aN\2\u03d5\u03dd\3\2\2\2\u03d6"+
		"\u03dd\5\u008eH\2\u03d7\u03d8\5\u008eH\2\u03d8\u03d9\7\u00a1\2\2\u03d9"+
		"\u03da\5\u00c8e\2\u03da\u03db\7\u00a3\2\2\u03db\u03dd\3\2\2\2\u03dc\u03b5"+
		"\3\2\2\2\u03dc\u03b6\3\2\2\2\u03dc\u03c4\3\2\2\2\u03dc\u03c7\3\2\2\2\u03dc"+
		"\u03ca\3\2\2\2\u03dc\u03d0\3\2\2\2\u03dc\u03d6\3\2\2\2\u03dc\u03d7\3\2"+
		"\2\2\u03dd\u00a1\3\2\2\2\u03de\u03df\5\u0094K\2\u03df\u03e0\7\u00a1\2"+
		"\2\u03e0\u03e5\5\u00c8e\2\u03e1\u03e2\7\u009f\2\2\u03e2\u03e4\5\u00c8"+
		"e\2\u03e3\u03e1\3\2\2\2\u03e4\u03e7\3\2\2\2\u03e5\u03e3\3\2\2\2\u03e5"+
		"\u03e6\3\2\2\2\u03e6\u03e8\3\2\2\2\u03e7\u03e5\3\2\2\2\u03e8\u03e9\7\u00a3"+
		"\2\2\u03e9\u03f2\3\2\2\2\u03ea\u03eb\5\u008eH\2\u03eb\u03ec\7\u00a1\2"+
		"\2\u03ec\u03ed\5\u00c8e\2\u03ed\u03ee\7\u009f\2\2\u03ee\u03ef\5\u0098"+
		"M\2\u03ef\u03f0\7\u00a3\2\2\u03f0\u03f2\3\2\2\2\u03f1\u03de\3\2\2\2\u03f1"+
		"\u03ea\3\2\2\2\u03f2\u00a3\3\2\2\2\u03f3\u03f8\5\u00a0Q\2\u03f4\u03f5"+
		"\7\u009f\2\2\u03f5\u03f7\5\u00a0Q\2\u03f6\u03f4\3\2\2\2\u03f7\u03fa\3"+
		"\2\2\2\u03f8\u03f6\3\2\2\2\u03f8\u03f9\3\2\2\2\u03f9\u00a5\3\2\2\2\u03fa"+
		"\u03f8\3\2\2\2\u03fb\u03fd\7\'\2\2\u03fc\u03fb\3\2\2\2\u03fc\u03fd\3\2"+
		"\2\2\u03fd\u03fe\3\2\2\2\u03fe\u0406\5\u0094K\2\u03ff\u0401\7\u009f\2"+
		"\2\u0400\u0402\7\'\2\2\u0401\u0400\3\2\2\2\u0401\u0402\3\2\2\2\u0402\u0403"+
		"\3\2\2\2\u0403\u0405\5\u0094K\2\u0404\u03ff\3\2\2\2\u0405\u0408\3\2\2"+
		"\2\u0406\u0404\3\2\2\2\u0406\u0407\3\2\2\2\u0407\u00a7\3\2\2\2\u0408\u0406"+
		"\3\2\2\2\u0409\u040e\5\u00b4[\2\u040a\u040b\7\u009f\2\2\u040b\u040d\5"+
		"\u00b4[\2\u040c\u040a\3\2\2\2\u040d\u0410\3\2\2\2\u040e\u040c\3\2\2\2"+
		"\u040e\u040f\3\2\2\2\u040f\u00a9\3\2\2\2\u0410\u040e\3\2\2\2\u0411\u0416"+
		"\5\u00b4[\2\u0412\u0413\7\u009f\2\2\u0413\u0415\5\u00b4[\2\u0414\u0412"+
		"\3\2\2\2\u0415\u0418\3\2\2\2\u0416\u0414\3\2\2\2\u0416\u0417\3\2\2\2\u0417"+
		"\u00ab\3\2\2\2\u0418\u0416\3\2\2\2\u0419\u041b\7\u009c\2\2\u041a\u0419"+
		"\3\2\2\2\u041a\u041b\3\2\2\2\u041b\u041c\3\2\2\2\u041c\u0425\5\u00b4["+
		"\2\u041d\u041e\7(\2\2\u041e\u041f\7\u00a1\2\2\u041f\u0420\5\u00c8e\2\u0420"+
		"\u0421\7\u00a3\2\2\u0421\u0425\3\2\2\2\u0422\u0423\7(\2\2\u0423\u0425"+
		"\5\u00c8e\2\u0424\u041a\3\2\2\2\u0424\u041d\3\2\2\2\u0424\u0422\3\2\2"+
		"\2\u0425\u00ad\3\2\2\2\u0426\u0428\7\u009b\2\2\u0427\u0426\3\2\2\2\u0428"+
		"\u0429\3\2\2\2\u0429\u0427\3\2\2\2\u0429\u042a\3\2\2\2\u042a\u00af\3\2"+
		"\2\2\u042b\u042f\7\u009f\2\2\u042c\u042f\7\u00a4\2\2\u042d\u042f\5\u00ae"+
		"X\2\u042e\u042b\3\2\2\2\u042e\u042c\3\2\2\2\u042e\u042d\3\2\2\2\u042f"+
		"\u00b1\3\2\2\2\u0430\u0432\5\u00aeX\2\u0431\u0430\3\2\2\2\u0431\u0432"+
		"\3\2\2\2\u0432\u0434\3\2\2\2\u0433\u0435\7\u00a4\2\2\u0434\u0433\3\2\2"+
		"\2\u0434\u0435\3\2\2\2\u0435\u0436\3\2\2\2\u0436\u043c\5\u00acW\2\u0437"+
		"\u0438\5\u00b0Y\2\u0438\u0439\5\u00acW\2\u0439\u043b\3\2\2\2\u043a\u0437"+
		"\3\2\2\2\u043b\u043e\3\2\2\2\u043c\u043a\3\2\2\2\u043c\u043d\3\2\2\2\u043d"+
		"\u0440\3\2\2\2\u043e\u043c\3\2\2\2\u043f\u0441\7\u00a4\2\2\u0440\u043f"+
		"\3\2\2\2\u0440\u0441\3\2\2\2\u0441\u00b3\3\2\2\2\u0442\u0445\5\u00c8e"+
		"\2\u0443\u0445\5\u00c4c\2\u0444\u0442\3\2\2\2\u0444\u0443\3\2\2\2\u0445"+
		"\u00b5\3\2\2\2\u0446\u044c\5\u00b8]\2\u0447\u044c\5\u00be`\2\u0448\u044c"+
		"\5\u00ba^\2\u0449\u044c\5\u00bc_\2\u044a\u044c\5\u00ceh\2\u044b\u0446"+
		"\3\2\2\2\u044b\u0447\3\2\2\2\u044b\u0448\3\2\2\2\u044b\u0449\3\2\2\2\u044b"+
		"\u044a\3\2\2\2\u044c\u00b7\3\2\2\2\u044d\u044f\t\5\2\2\u044e\u044d\3\2"+
		"\2\2\u044e\u044f\3\2\2\2\u044f\u0450\3\2\2\2\u0450\u0451\7\u00b3\2\2\u0451"+
		"\u00b9\3\2\2\2\u0452\u0453\7\u00b1\2\2\u0453\u00bb\3\2\2\2\u0454\u0455"+
		"\7\u00b2\2\2\u0455\u00bd\3\2\2\2\u0456\u0458\t\5\2\2\u0457\u0456\3\2\2"+
		"\2\u0457\u0458\3\2\2\2\u0458\u0459\3\2\2\2\u0459\u045a\7\u00b4\2\2\u045a"+
		"\u00bf\3\2\2\2\u045b\u0489\7w\2\2\u045c\u045d\7z\2\2\u045d\u0489\5\u00c8"+
		"e\2\u045e\u045f\7{\2\2\u045f\u0460\7\u00a1\2\2\u0460\u0461\5\u00c4c\2"+
		"\u0461\u0462\7\u009f\2\2\u0462\u0463\5\u00c8e\2\u0463\u0464\7\u00a3\2"+
		"\2\u0464\u0489\3\2\2\2\u0465\u0466\7|\2\2\u0466\u0467\7\u00a1\2\2\u0467"+
		"\u0468\5\u00c4c\2\u0468\u0469\7\u009f\2\2\u0469\u046a\5\u00c8e\2\u046a"+
		"\u046b\7\u009f\2\2\u046b\u046c\5\u00c8e\2\u046c\u046d\7\u00a3\2\2\u046d"+
		"\u0489\3\2\2\2\u046e\u046f\7|\2\2\u046f\u0470\7\u00a1\2\2\u0470\u0471"+
		"\5\u00c4c\2\u0471\u0472\7\u009f\2\2\u0472\u0473\5\u00c8e\2\u0473\u0474"+
		"\7\u00a3\2\2\u0474\u0489\3\2\2\2\u0475\u0476\7}\2\2\u0476\u0477\7\u00a1"+
		"\2\2\u0477\u0478\5\u00c4c\2\u0478\u0479\7\u009f\2\2\u0479\u047a\5\u00c8"+
		"e\2\u047a\u047b\7\u00a3\2\2\u047b\u0489\3\2\2\2\u047c\u047d\7x\2\2\u047d"+
		"\u0489\5\u00c8e\2\u047e\u047f\7x\2\2\u047f\u0480\7\u009c\2\2\u0480\u0489"+
		"\5\u00c8e\2\u0481\u0482\7y\2\2\u0482\u0483\7\u00a1\2\2\u0483\u0484\5\u00c8"+
		"e\2\u0484\u0485\7\u009f\2\2\u0485\u0486\5\u00c4c\2\u0486\u0487\7\u00a3"+
		"\2\2\u0487\u0489\3\2\2\2\u0488\u045b\3\2\2\2\u0488\u045c\3\2\2\2\u0488"+
		"\u045e\3\2\2\2\u0488\u0465\3\2\2\2\u0488\u046e\3\2\2\2\u0488\u0475\3\2"+
		"\2\2\u0488\u047c\3\2\2\2\u0488\u047e\3\2\2\2\u0488\u0481\3\2\2\2\u0489"+
		"\u00c1\3\2\2\2\u048a\u048b\7\u00a7\2\2\u048b\u00c3\3\2\2\2\u048c\u048d"+
		"\bc\1\2\u048d\u048e\7\u00a1\2\2\u048e\u048f\5\u00c4c\2\u048f\u0490\7\u00a3"+
		"\2\2\u0490\u0495\3\2\2\2\u0491\u0495\5\u00c0a\2\u0492\u0495\5\u0092J\2"+
		"\u0493\u0495\5\u00c2b\2\u0494\u048c\3\2\2\2\u0494\u0491\3\2\2\2\u0494"+
		"\u0492\3\2\2\2\u0494\u0493\3\2\2\2\u0495\u049b\3\2\2\2\u0496\u0497\f\5"+
		"\2\2\u0497\u0498\7\u008e\2\2\u0498\u049a\5\u00c4c\6\u0499\u0496\3\2\2"+
		"\2\u049a\u049d\3\2\2\2\u049b\u0499\3\2\2\2\u049b\u049c\3\2\2\2\u049c\u00c5"+
		"\3\2\2\2\u049d\u049b\3\2\2\2\u049e\u04fd\7d\2\2\u049f\u04fd\7\20\2\2\u04a0"+
		"\u04fd\7\60\2\2\u04a1\u04fd\7c\2\2\u04a2\u04fd\7~\2\2\u04a3\u04fd\7\177"+
		"\2\2\u04a4\u04fd\7\u0080\2\2\u04a5\u04a6\7~\2\2\u04a6\u04a7\7\u00a1\2"+
		"\2\u04a7\u04a8\5\u00c8e\2\u04a8\u04a9\7\u00a3\2\2\u04a9\u04fd\3\2\2\2"+
		"\u04aa\u04ab\7f\2\2\u04ab\u04fd\5\u00c8e\2\u04ac\u04ad\7g\2\2\u04ad\u04fd"+
		"\5\u00c8e\2\u04ae\u04af\7h\2\2\u04af\u04fd\5\u00c8e\2\u04b0\u04b1\7i\2"+
		"\2\u04b1\u04fd\5\u00c8e\2\u04b2\u04b3\7j\2\2\u04b3\u04fd\5\u00c8e\2\u04b4"+
		"\u04b5\7k\2\2\u04b5\u04fd\5\u00c8e\2\u04b6\u04b7\7l\2\2\u04b7\u04fd\5"+
		"\u00c8e\2\u04b8\u04b9\7m\2\2\u04b9\u04fd\5\u00c8e\2\u04ba\u04bb\7n\2\2"+
		"\u04bb\u04fd\5\u00c8e\2\u04bc\u04bd\7o\2\2\u04bd\u04fd\5\u00c8e\2\u04be"+
		"\u04bf\7p\2\2\u04bf\u04fd\5\u00c8e\2\u04c0\u04c1\7q\2\2\u04c1\u04fd\5"+
		"\u00c8e\2\u04c2\u04c3\7e\2\2\u04c3\u04fd\5\u00c8e\2\u04c4\u04c5\7r\2\2"+
		"\u04c5\u04fd\5\u00c8e\2\u04c6\u04c7\7\26\2\2\u04c7\u04fd\5\u00c8e\2\u04c8"+
		"\u04c9\7\22\2\2\u04c9\u04fd\5\u00c8e\2\u04ca\u04cb\7Z\2\2\u04cb\u04cc"+
		"\7\u00a1\2\2\u04cc\u04cd\5\u00c8e\2\u04cd\u04ce\7\u009f\2\2\u04ce\u04cf"+
		"\5\u00c8e\2\u04cf\u04d0\7\u00a3\2\2\u04d0\u04fd\3\2\2\2\u04d1\u04d2\7"+
		"B\2\2\u04d2\u04fd\5\u00c8e\2\u04d3\u04d4\7E\2\2\u04d4\u04fd\5\u00c8e\2"+
		"\u04d5\u04d6\7H\2\2\u04d6\u04d7\7\u00a1\2\2\u04d7\u04d8\5\u00c4c\2\u04d8"+
		"\u04d9\7\u00a3\2\2\u04d9\u04fd\3\2\2\2\u04da\u04db\7I\2\2\u04db\u04dc"+
		"\7\u00a1\2\2\u04dc\u04dd\5\u00c4c\2\u04dd\u04de\7\u00a3\2\2\u04de\u04fd"+
		"\3\2\2\2\u04df\u04e0\7J\2\2\u04e0\u04e1\7\u00a1\2\2\u04e1\u04e2\5\u00c4"+
		"c\2\u04e2\u04e3\7\u00a3\2\2\u04e3\u04fd\3\2\2\2\u04e4\u04e5\7K\2\2\u04e5"+
		"\u04fd\5\u00c8e\2\u04e6\u04e7\7s\2\2\u04e7\u04fd\5\u00c4c\2\u04e8\u04e9"+
		"\7t\2\2\u04e9\u04fd\5\u00c4c\2\u04ea\u04eb\7u\2\2\u04eb\u04ec\7\u00a1"+
		"\2\2\u04ec\u04ed\5\u00c4c\2\u04ed\u04ee\7\u009f\2\2\u04ee\u04ef\5\u00c4"+
		"c\2\u04ef\u04f0\7\u00a3\2\2\u04f0\u04fd\3\2\2\2\u04f1\u04f2\7u\2\2\u04f2"+
		"\u04f3\7\u00a1\2\2\u04f3\u04f4\5\u00c4c\2\u04f4\u04f5\7\u009f\2\2\u04f5"+
		"\u04f6\5\u00c4c\2\u04f6\u04f7\7\u009f\2\2\u04f7\u04f8\5\u00c8e\2\u04f8"+
		"\u04f9\7\u00a3\2\2\u04f9\u04fd\3\2\2\2\u04fa\u04fb\7v\2\2\u04fb\u04fd"+
		"\5\u00c4c\2\u04fc\u049e\3\2\2\2\u04fc\u049f\3\2\2\2\u04fc\u04a0\3\2\2"+
		"\2\u04fc\u04a1\3\2\2\2\u04fc\u04a2\3\2\2\2\u04fc\u04a3\3\2\2\2\u04fc\u04a4"+
		"\3\2\2\2\u04fc\u04a5\3\2\2\2\u04fc\u04aa\3\2\2\2\u04fc\u04ac\3\2\2\2\u04fc"+
		"\u04ae\3\2\2\2\u04fc\u04b0\3\2\2\2\u04fc\u04b2\3\2\2\2\u04fc\u04b4\3\2"+
		"\2\2\u04fc\u04b6\3\2\2\2\u04fc\u04b8\3\2\2\2\u04fc\u04ba\3\2\2\2\u04fc"+
		"\u04bc\3\2\2\2\u04fc\u04be\3\2\2\2\u04fc\u04c0\3\2\2\2\u04fc\u04c2\3\2"+
		"\2\2\u04fc\u04c4\3\2\2\2\u04fc\u04c6\3\2\2\2\u04fc\u04c8\3\2\2\2\u04fc"+
		"\u04ca\3\2\2\2\u04fc\u04d1\3\2\2\2\u04fc\u04d3\3\2\2\2\u04fc\u04d5\3\2"+
		"\2\2\u04fc\u04da\3\2\2\2\u04fc\u04df\3\2\2\2\u04fc\u04e4\3\2\2\2\u04fc"+
		"\u04e6\3\2\2\2\u04fc\u04e8\3\2\2\2\u04fc\u04ea\3\2\2\2\u04fc\u04f1\3\2"+
		"\2\2\u04fc\u04fa\3\2\2\2\u04fd\u00c7\3\2\2\2\u04fe\u04ff\be\1\2\u04ff"+
		"\u0500\7\u008f\2\2\u0500\u050b\5\u00c8e\26\u0501\u050b\5\u00ccg\2\u0502"+
		"\u050b\5\u00c6d\2\u0503\u050b\5\u00caf\2\u0504\u0505\5\u00c4c\2\u0505"+
		"\u0506\5\u00d0i\2\u0506\u0507\5\u00c4c\2\u0507\u050b\3\2\2\2\u0508\u050b"+
		"\5\u0090I\2\u0509\u050b\5\u00b6\\\2\u050a\u04fe\3\2\2\2\u050a\u0501\3"+
		"\2\2\2\u050a\u0502\3\2\2\2\u050a\u0503\3\2\2\2\u050a\u0504\3\2\2\2\u050a"+
		"\u0508\3\2\2\2\u050a\u0509\3\2\2\2\u050b\u0536\3\2\2\2\u050c\u050d\f\22"+
		"\2\2\u050d\u050e\7\u008d\2\2\u050e\u0535\5\u00c8e\22\u050f\u0510\f\21"+
		"\2\2\u0510\u0511\7\u0090\2\2\u0511\u0535\5\u00c8e\22\u0512\u0513\f\20"+
		"\2\2\u0513\u0514\7\u0091\2\2\u0514\u0535\5\u00c8e\21\u0515\u0516\f\17"+
		"\2\2\u0516\u0517\7\u008c\2\2\u0517\u0535\5\u00c8e\20\u0518\u0519\f\16"+
		"\2\2\u0519\u051a\7\u008b\2\2\u051a\u0535\5\u00c8e\17\u051b\u051c\f\r\2"+
		"\2\u051c\u051d\7\u008e\2\2\u051d\u0535\5\u00c8e\16\u051e\u051f\f\f\2\2"+
		"\u051f\u0520\7\u008f\2\2\u0520\u0535\5\u00c8e\r\u0521\u0522\f\13\2\2\u0522"+
		"\u0523\5\u00d0i\2\u0523\u0524\5\u00c8e\f\u0524\u0535\3\2\2\2\u0525\u0526"+
		"\f\t\2\2\u0526\u0527\7\u0092\2\2\u0527\u0535\5\u00c8e\n\u0528\u0529\f"+
		"\b\2\2\u0529\u052a\7\u0093\2\2\u052a\u0535\5\u00c8e\t\u052b\u052c\f\7"+
		"\2\2\u052c\u052d\7\u0088\2\2\u052d\u0535\5\u00c8e\b\u052e\u052f\f\6\2"+
		"\2\u052f\u0530\7\u0089\2\2\u0530\u0535\5\u00c8e\7\u0531\u0532\f\5\2\2"+
		"\u0532\u0533\7\u008a\2\2\u0533\u0535\5\u00c8e\6\u0534\u050c\3\2\2\2\u0534"+
		"\u050f\3\2\2\2\u0534\u0512\3\2\2\2\u0534\u0515\3\2\2\2\u0534\u0518\3\2"+
		"\2\2\u0534\u051b\3\2\2\2\u0534\u051e\3\2\2\2\u0534\u0521\3\2\2\2\u0534"+
		"\u0525\3\2\2\2\u0534\u0528\3\2\2\2\u0534\u052b\3\2\2\2\u0534\u052e\3\2"+
		"\2\2\u0534\u0531\3\2\2\2\u0535\u0538\3\2\2\2\u0536\u0534\3\2\2\2\u0536"+
		"\u0537\3\2\2\2\u0537\u00c9\3\2\2\2\u0538\u0536\3\2\2\2\u0539\u053a\7\u00a1"+
		"\2\2\u053a\u053b\5\u00c8e\2\u053b\u053c\7\u00a3\2\2\u053c\u00cb\3\2\2"+
		"\2\u053d\u053e\7\u0087\2\2\u053e\u053f\5\u00c8e\2\u053f\u00cd\3\2\2\2"+
		"\u0540\u0541\t\6\2\2\u0541\u00cf\3\2\2\2\u0542\u0549\7\u0081\2\2\u0543"+
		"\u0549\7\u0082\2\2\u0544\u0549\7\u0083\2\2\u0545\u0549\7\u0084\2\2\u0546"+
		"\u0549\7\u0085\2\2\u0547\u0549\7\u0086\2\2\u0548\u0542\3\2\2\2\u0548\u0543"+
		"\3\2\2\2\u0548\u0544\3\2\2\2\u0548\u0545\3\2\2\2\u0548\u0546\3\2\2\2\u0548"+
		"\u0547\3\2\2\2\u0549\u00d1\3\2\2\2b\u00d5\u00dc\u00df\u00e3\u00e8\u00eb"+
		"\u00ef\u00f4\u00fa\u0100\u0103\u010d\u012b\u0136\u013a\u0147\u0150\u0157"+
		"\u015d\u0167\u016f\u0178\u017f\u018c\u0193\u0198\u019d\u01a3\u01aa\u01ac"+
		"\u01b1\u01b4\u01b6\u01c2\u01d0\u01da\u01e3\u01ed\u0203\u0219\u021f\u0225"+
		"\u0250\u0257\u0268\u0283\u0290\u029b\u02ab\u02be\u02dc\u030d\u0342\u034c"+
		"\u0351\u035a\u0363\u0376\u037c\u0382\u038d\u0394\u03a2\u03a7\u03ab\u03bb"+
		"\u03c1\u03dc\u03e5\u03f1\u03f8\u03fc\u0401\u0406\u040e\u0416\u041a\u0424"+
		"\u0429\u042e\u0431\u0434\u043c\u0440\u0444\u044b\u044e\u0457\u0488\u0494"+
		"\u049b\u04fc\u050a\u0534\u0536\u0548";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}