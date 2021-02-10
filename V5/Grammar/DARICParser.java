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
		RENDERFRAME=91, CREATEVERTEX=92, CREATETRIANGLE=93, TRANSLATE=94, ROTATE=95, 
		SCALE=96, DELETEOBJECT=97, CREATESHAPE=98, CREATEOBJECT=99, SOLID=100, 
		WIREFRAME=101, SHADED=102, FILLEDWIREFRAME=103, BGETH=104, BPUTH=105, 
		CLOSEH=106, EOFH=107, GETSH=108, LISTFILES=109, OPENIN=110, OPENOUT=111, 
		OPENUP=112, PTRH=113, BANKED=114, CIRCLE=115, CLS=116, CLIPON=117, CLIPOFF=118, 
		COLOUR=119, COLOURBG=120, CREATEFONT=121, FILL=122, FLIP=123, SHOWFPS=124, 
		GRAPHICS=125, LINE=126, LOADTYPEFACE=127, RECTANGLE=128, PLOT=129, POINT=130, 
		SCREENWIDTH=131, SCREENHEIGHT=132, TEXT=133, TEXTRIGHT=134, TEXTCENTRE=135, 
		TEXTCENTER=136, TRIANGLE=137, TIME=138, PI=139, SQR=140, LN=141, LOG=142, 
		EXP=143, ATN=144, TAN=145, COS=146, SIN=147, ABS=148, ACS=149, ASN=150, 
		DEG=151, RAD=152, SGN=153, ASC=154, LEN=155, INSTR=156, VAL=157, TIMES=158, 
		STRS=159, STRINGS=160, CHRS=161, LEFTS=162, MIDS=163, RIGHTS=164, RND=165, 
		RND0=166, RND1=167, EQ=168, NE=169, GT=170, GE=171, LT=172, LE=173, NOT=174, 
		AND=175, OR=176, EOR=177, MOD=178, DIV=179, HAT=180, PLUS=181, MINUS=182, 
		MULTIPLY=183, DIVIDE=184, SHL=185, SHR=186, PLUS_E=187, MINUS_E=188, MULTIPLY_E=189, 
		DIVIDE_E=190, SHL_E=191, SHR_E=192, NEWLINE=193, TICK=194, TILDE=195, 
		HASH=196, COLON=197, COMMA=198, DOLLAR=199, LPAREN=200, PERCENT=201, RPAREN=202, 
		SEMICOLON=203, UNDERSCORE=204, COMMENT=205, STRINGLITERAL=206, PROC_NAME=207, 
		FN_INTEGER=208, FN_FLOAT=209, FN_STRING=210, VARIABLE_FLOAT=211, VARIABLE_INTEGER=212, 
		VARIABLE_STRING=213, VARIABLE_TYPE=214, HEXNUMBER=215, BINARYNUMBER=216, 
		NUMBER=217, FLOAT=218, WS=219;
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
		RULE_stmtSHOWFPS = 63, RULE_stmtRENDERFRAME = 64, RULE_stmtCREATEVERTEX = 65, 
		RULE_stmtCREATETRIANGLE = 66, RULE_stmtTRANSLATE = 67, RULE_stmtROTATE = 68, 
		RULE_stmtSCALE = 69, RULE_stmtDELETEOBJECT = 70, RULE_when = 71, RULE_fnName = 72, 
		RULE_literal = 73, RULE_var = 74, RULE_typeVar = 75, RULE_numVar = 76, 
		RULE_strVar = 77, RULE_justVar = 78, RULE_justNumberVar = 79, RULE_varName = 80, 
		RULE_varNameInteger = 81, RULE_varNameString = 82, RULE_varNameType = 83, 
		RULE_varDecl = 84, RULE_varDeclWithDimension = 85, RULE_varList = 86, 
		RULE_functionVarList = 87, RULE_functionParList = 88, RULE_exprList = 89, 
		RULE_printListItem = 90, RULE_printListTick = 91, RULE_printListSeparator = 92, 
		RULE_printList = 93, RULE_expr = 94, RULE_number = 95, RULE_numberInteger = 96, 
		RULE_numberHex = 97, RULE_numberBinary = 98, RULE_numberFloat = 99, RULE_strFunc = 100, 
		RULE_string = 101, RULE_strExpr = 102, RULE_numFunc = 103, RULE_numExpr = 104, 
		RULE_numColours = 105, RULE_defaultFonts = 106;
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
			"SERIF100", "RENDERFRAME", "CREATEVERTEX", "CREATETRIANGLE", "TRANSLATE", 
			"ROTATE", "SCALE", "DELETEOBJECT", "CREATESHAPE", "CREATEOBJECT", "SOLID", 
			"WIREFRAME", "SHADED", "FILLEDWIREFRAME", "BGETH", "BPUTH", "CLOSEH", 
			"EOFH", "GETSH", "LISTFILES", "OPENIN", "OPENOUT", "OPENUP", "PTRH", 
			"BANKED", "CIRCLE", "CLS", "CLIPON", "CLIPOFF", "COLOUR", "COLOURBG", 
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
			setState(217);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 91)) & ~0x3f) == 0 && ((1L << (_la - 91)) & ((1L << (RENDERFRAME - 91)) | (1L << (CREATEVERTEX - 91)) | (1L << (CREATETRIANGLE - 91)) | (1L << (TRANSLATE - 91)) | (1L << (ROTATE - 91)) | (1L << (SCALE - 91)) | (1L << (DELETEOBJECT - 91)) | (1L << (BGETH - 91)) | (1L << (BPUTH - 91)) | (1L << (CLOSEH - 91)) | (1L << (PTRH - 91)) | (1L << (CIRCLE - 91)) | (1L << (CLS - 91)) | (1L << (CLIPON - 91)) | (1L << (CLIPOFF - 91)) | (1L << (COLOUR - 91)) | (1L << (COLOURBG - 91)) | (1L << (FLIP - 91)) | (1L << (SHOWFPS - 91)) | (1L << (GRAPHICS - 91)) | (1L << (LINE - 91)) | (1L << (RECTANGLE - 91)) | (1L << (PLOT - 91)) | (1L << (TEXT - 91)) | (1L << (TEXTRIGHT - 91)) | (1L << (TEXTCENTRE - 91)) | (1L << (TEXTCENTER - 91)) | (1L << (TRIANGLE - 91)))) != 0) || ((((_la - 193)) & ~0x3f) == 0 && ((1L << (_la - 193)) & ((1L << (NEWLINE - 193)) | (1L << (COLON - 193)) | (1L << (COMMENT - 193)) | (1L << (PROC_NAME - 193)) | (1L << (FN_INTEGER - 193)) | (1L << (FN_FLOAT - 193)) | (1L << (FN_STRING - 193)) | (1L << (VARIABLE_FLOAT - 193)) | (1L << (VARIABLE_INTEGER - 193)) | (1L << (VARIABLE_STRING - 193)) | (1L << (VARIABLE_TYPE - 193)) | (1L << (NUMBER - 193)))) != 0)) {
				{
				{
				setState(214);
				line();
				}
				}
				setState(219);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(220);
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
			setState(243);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(222);
				match(NEWLINE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(224);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(223);
					linenumber();
					}
				}

				setState(227);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REM || _la==COMMENT) {
					{
					setState(226);
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

				setState(229);
				match(NEWLINE);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(231);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(230);
					linenumber();
					}
				}

				setState(234); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(233);
					stmt();
					}
					}
					setState(236); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 91)) & ~0x3f) == 0 && ((1L << (_la - 91)) & ((1L << (RENDERFRAME - 91)) | (1L << (CREATEVERTEX - 91)) | (1L << (CREATETRIANGLE - 91)) | (1L << (TRANSLATE - 91)) | (1L << (ROTATE - 91)) | (1L << (SCALE - 91)) | (1L << (DELETEOBJECT - 91)) | (1L << (BGETH - 91)) | (1L << (BPUTH - 91)) | (1L << (CLOSEH - 91)) | (1L << (PTRH - 91)) | (1L << (CIRCLE - 91)) | (1L << (CLS - 91)) | (1L << (CLIPON - 91)) | (1L << (CLIPOFF - 91)) | (1L << (COLOUR - 91)) | (1L << (COLOURBG - 91)) | (1L << (FLIP - 91)) | (1L << (SHOWFPS - 91)) | (1L << (GRAPHICS - 91)) | (1L << (LINE - 91)) | (1L << (RECTANGLE - 91)) | (1L << (PLOT - 91)) | (1L << (TEXT - 91)) | (1L << (TEXTRIGHT - 91)) | (1L << (TEXTCENTRE - 91)) | (1L << (TEXTCENTER - 91)) | (1L << (TRIANGLE - 91)))) != 0) || ((((_la - 197)) & ~0x3f) == 0 && ((1L << (_la - 197)) & ((1L << (COLON - 197)) | (1L << (PROC_NAME - 197)) | (1L << (FN_INTEGER - 197)) | (1L << (FN_FLOAT - 197)) | (1L << (FN_STRING - 197)) | (1L << (VARIABLE_FLOAT - 197)) | (1L << (VARIABLE_INTEGER - 197)) | (1L << (VARIABLE_STRING - 197)) | (1L << (VARIABLE_TYPE - 197)))) != 0) );
				setState(239);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REM || _la==COMMENT) {
					{
					setState(238);
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

				setState(241);
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
			setState(248);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(245);
					stmt();
					}
					} 
				}
				setState(250);
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
			setState(263);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(254);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 91)) & ~0x3f) == 0 && ((1L << (_la - 91)) & ((1L << (RENDERFRAME - 91)) | (1L << (CREATEVERTEX - 91)) | (1L << (CREATETRIANGLE - 91)) | (1L << (TRANSLATE - 91)) | (1L << (ROTATE - 91)) | (1L << (SCALE - 91)) | (1L << (DELETEOBJECT - 91)) | (1L << (BGETH - 91)) | (1L << (BPUTH - 91)) | (1L << (CLOSEH - 91)) | (1L << (PTRH - 91)) | (1L << (CIRCLE - 91)) | (1L << (CLS - 91)) | (1L << (CLIPON - 91)) | (1L << (CLIPOFF - 91)) | (1L << (COLOUR - 91)) | (1L << (COLOURBG - 91)) | (1L << (FLIP - 91)) | (1L << (SHOWFPS - 91)) | (1L << (GRAPHICS - 91)) | (1L << (LINE - 91)) | (1L << (RECTANGLE - 91)) | (1L << (PLOT - 91)) | (1L << (TEXT - 91)) | (1L << (TEXTRIGHT - 91)) | (1L << (TEXTCENTRE - 91)) | (1L << (TEXTCENTER - 91)) | (1L << (TRIANGLE - 91)))) != 0) || ((((_la - 197)) & ~0x3f) == 0 && ((1L << (_la - 197)) & ((1L << (COLON - 197)) | (1L << (PROC_NAME - 197)) | (1L << (FN_INTEGER - 197)) | (1L << (FN_FLOAT - 197)) | (1L << (FN_STRING - 197)) | (1L << (VARIABLE_FLOAT - 197)) | (1L << (VARIABLE_INTEGER - 197)) | (1L << (VARIABLE_STRING - 197)) | (1L << (VARIABLE_TYPE - 197)))) != 0)) {
					{
					{
					setState(251);
					stmt();
					}
					}
					setState(256);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(260);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 91)) & ~0x3f) == 0 && ((1L << (_la - 91)) & ((1L << (RENDERFRAME - 91)) | (1L << (CREATEVERTEX - 91)) | (1L << (CREATETRIANGLE - 91)) | (1L << (TRANSLATE - 91)) | (1L << (ROTATE - 91)) | (1L << (SCALE - 91)) | (1L << (DELETEOBJECT - 91)) | (1L << (BGETH - 91)) | (1L << (BPUTH - 91)) | (1L << (CLOSEH - 91)) | (1L << (PTRH - 91)) | (1L << (CIRCLE - 91)) | (1L << (CLS - 91)) | (1L << (CLIPON - 91)) | (1L << (CLIPOFF - 91)) | (1L << (COLOUR - 91)) | (1L << (COLOURBG - 91)) | (1L << (FLIP - 91)) | (1L << (SHOWFPS - 91)) | (1L << (GRAPHICS - 91)) | (1L << (LINE - 91)) | (1L << (RECTANGLE - 91)) | (1L << (PLOT - 91)) | (1L << (TEXT - 91)) | (1L << (TEXTRIGHT - 91)) | (1L << (TEXTCENTRE - 91)) | (1L << (TEXTCENTER - 91)) | (1L << (TRIANGLE - 91)))) != 0) || ((((_la - 193)) & ~0x3f) == 0 && ((1L << (_la - 193)) & ((1L << (NEWLINE - 193)) | (1L << (COLON - 193)) | (1L << (COMMENT - 193)) | (1L << (PROC_NAME - 193)) | (1L << (FN_INTEGER - 193)) | (1L << (FN_FLOAT - 193)) | (1L << (FN_STRING - 193)) | (1L << (VARIABLE_FLOAT - 193)) | (1L << (VARIABLE_INTEGER - 193)) | (1L << (VARIABLE_STRING - 193)) | (1L << (VARIABLE_TYPE - 193)) | (1L << (NUMBER - 193)))) != 0)) {
					{
					{
					setState(257);
					line();
					}
					}
					setState(262);
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
			setState(265);
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
			setState(273);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(267);
				match(COLON);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(268);
				coreStmt();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(269);
				keyMouseStmt();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(270);
				stmtOperatorEqual();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(271);
				ioStmt();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(272);
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
			setState(300);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(275);
				stmtBREAKPOINT();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(276);
				stmtCASE();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(277);
				stmtCHAIN();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(278);
				stmtDATA();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(279);
				stmtDIM();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(280);
				stmtEND();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(281);
				stmtRETURN();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(282);
				stmtDEFFN();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(283);
				stmtDEFPROC();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(284);
				stmtFOR();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(285);
				stmtFORIN();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(286);
				stmtCallFN();
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(287);
				stmtIF();
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(288);
				stmtIFMultiline();
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(289);
				stmtLET();
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(290);
				stmtOSCLI();
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(291);
				stmtCallPROC();
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(292);
				stmtREAD();
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(293);
				stmtRESTORE();
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(294);
				stmtSWAP();
				}
				break;
			case 21:
				enterOuterAlt(_localctx, 21);
				{
				setState(295);
				stmtTRACEON();
				}
				break;
			case 22:
				enterOuterAlt(_localctx, 22);
				{
				setState(296);
				stmtTRACEOFF();
				}
				break;
			case 23:
				enterOuterAlt(_localctx, 23);
				{
				setState(297);
				stmtTYPE();
				}
				break;
			case 24:
				enterOuterAlt(_localctx, 24);
				{
				setState(298);
				stmtREPEAT();
				}
				break;
			case 25:
				enterOuterAlt(_localctx, 25);
				{
				setState(299);
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
			setState(302);
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
			setState(304);
			match(CASE);
			setState(305);
			expr();
			setState(306);
			match(OF);
			setState(307);
			match(NEWLINE);
			setState(309); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(308);
				when();
				}
				}
				setState(311); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==WHEN );
			setState(315);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==OTHERWISE) {
				{
				setState(313);
				match(OTHERWISE);
				setState(314);
				body();
				}
			}

			setState(317);
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
			setState(319);
			match(CHAIN);
			setState(320);
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
			setState(322);
			match(DATA);
			setState(323);
			literal();
			setState(328);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(324);
				match(COMMA);
				setState(325);
				literal();
				}
				}
				setState(330);
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
			setState(332);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(331);
				match(LOCAL);
				}
			}

			setState(334);
			match(DIM);
			setState(335);
			varDeclWithDimension();
			setState(340);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(336);
				match(COMMA);
				setState(337);
				varDeclWithDimension();
				}
				}
				setState(342);
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
			setState(343);
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
			setState(345);
			match(RETURN);
			setState(347);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				{
				setState(346);
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
			setState(349);
			match(DEF);
			setState(350);
			fnName();
			setState(351);
			match(LPAREN);
			setState(353);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN || ((((_la - 211)) & ~0x3f) == 0 && ((1L << (_la - 211)) & ((1L << (VARIABLE_FLOAT - 211)) | (1L << (VARIABLE_INTEGER - 211)) | (1L << (VARIABLE_STRING - 211)))) != 0)) {
				{
				setState(352);
				functionVarList();
				}
			}

			setState(355);
			match(RPAREN);
			setState(356);
			body();
			setState(357);
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
			setState(359);
			match(DEF);
			setState(360);
			match(PROC_NAME);
			setState(361);
			match(LPAREN);
			setState(363);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN || ((((_la - 211)) & ~0x3f) == 0 && ((1L << (_la - 211)) & ((1L << (VARIABLE_FLOAT - 211)) | (1L << (VARIABLE_INTEGER - 211)) | (1L << (VARIABLE_STRING - 211)))) != 0)) {
				{
				setState(362);
				functionVarList();
				}
			}

			setState(365);
			match(RPAREN);
			setState(366);
			body();
			setState(367);
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
			justNumberVar();
			setState(374);
			match(EQ);
			setState(375);
			numExpr(0);
			setState(376);
			match(TO);
			setState(377);
			numExpr(0);
			setState(380);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==STEP) {
				{
				setState(378);
				match(STEP);
				setState(379);
				numExpr(0);
				}
			}

			setState(382);
			body();
			setState(383);
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
			setState(385);
			match(FOR);
			setState(387);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(386);
				match(LOCAL);
				}
			}

			setState(389);
			justVar();
			setState(390);
			match(IN);
			setState(391);
			justVar();
			setState(392);
			match(LPAREN);
			setState(393);
			match(RPAREN);
			setState(394);
			body();
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
			setState(397);
			fnName();
			setState(398);
			match(LPAREN);
			setState(400);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)) | (1L << (LOADTYPEFACE - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (POINT - 130)) | (1L << (SCREENWIDTH - 130)) | (1L << (SCREENHEIGHT - 130)) | (1L << (TIME - 130)) | (1L << (PI - 130)) | (1L << (SQR - 130)) | (1L << (LN - 130)) | (1L << (LOG - 130)) | (1L << (EXP - 130)) | (1L << (ATN - 130)) | (1L << (TAN - 130)) | (1L << (COS - 130)) | (1L << (SIN - 130)) | (1L << (ABS - 130)) | (1L << (ACS - 130)) | (1L << (ASN - 130)) | (1L << (DEG - 130)) | (1L << (RAD - 130)) | (1L << (SGN - 130)) | (1L << (ASC - 130)) | (1L << (LEN - 130)) | (1L << (INSTR - 130)) | (1L << (VAL - 130)) | (1L << (TIMES - 130)) | (1L << (STRS - 130)) | (1L << (STRINGS - 130)) | (1L << (CHRS - 130)) | (1L << (LEFTS - 130)) | (1L << (MIDS - 130)) | (1L << (RIGHTS - 130)) | (1L << (RND - 130)) | (1L << (RND0 - 130)) | (1L << (RND1 - 130)) | (1L << (NOT - 130)) | (1L << (PLUS - 130)) | (1L << (MINUS - 130)))) != 0) || ((((_la - 200)) & ~0x3f) == 0 && ((1L << (_la - 200)) & ((1L << (LPAREN - 200)) | (1L << (STRINGLITERAL - 200)) | (1L << (FN_INTEGER - 200)) | (1L << (FN_FLOAT - 200)) | (1L << (FN_STRING - 200)) | (1L << (VARIABLE_FLOAT - 200)) | (1L << (VARIABLE_INTEGER - 200)) | (1L << (VARIABLE_STRING - 200)) | (1L << (VARIABLE_TYPE - 200)) | (1L << (HEXNUMBER - 200)) | (1L << (BINARYNUMBER - 200)) | (1L << (NUMBER - 200)) | (1L << (FLOAT - 200)))) != 0)) {
				{
				setState(399);
				functionParList();
				}
			}

			setState(402);
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
			setState(404);
			match(IF);
			setState(405);
			expr();
			setState(406);
			((StmtIFContext)_localctx).t = content();
			setState(409);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
			case 1:
				{
				setState(407);
				match(ELSE);
				setState(408);
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
			setState(411);
			match(IF);
			setState(412);
			expr();
			setState(413);
			match(THEN);
			setState(414);
			match(NEWLINE);
			setState(416); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(415);
				((StmtIFMultilineContext)_localctx).t = line();
				}
				}
				setState(418); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 91)) & ~0x3f) == 0 && ((1L << (_la - 91)) & ((1L << (RENDERFRAME - 91)) | (1L << (CREATEVERTEX - 91)) | (1L << (CREATETRIANGLE - 91)) | (1L << (TRANSLATE - 91)) | (1L << (ROTATE - 91)) | (1L << (SCALE - 91)) | (1L << (DELETEOBJECT - 91)) | (1L << (BGETH - 91)) | (1L << (BPUTH - 91)) | (1L << (CLOSEH - 91)) | (1L << (PTRH - 91)) | (1L << (CIRCLE - 91)) | (1L << (CLS - 91)) | (1L << (CLIPON - 91)) | (1L << (CLIPOFF - 91)) | (1L << (COLOUR - 91)) | (1L << (COLOURBG - 91)) | (1L << (FLIP - 91)) | (1L << (SHOWFPS - 91)) | (1L << (GRAPHICS - 91)) | (1L << (LINE - 91)) | (1L << (RECTANGLE - 91)) | (1L << (PLOT - 91)) | (1L << (TEXT - 91)) | (1L << (TEXTRIGHT - 91)) | (1L << (TEXTCENTRE - 91)) | (1L << (TEXTCENTER - 91)) | (1L << (TRIANGLE - 91)))) != 0) || ((((_la - 193)) & ~0x3f) == 0 && ((1L << (_la - 193)) & ((1L << (NEWLINE - 193)) | (1L << (COLON - 193)) | (1L << (COMMENT - 193)) | (1L << (PROC_NAME - 193)) | (1L << (FN_INTEGER - 193)) | (1L << (FN_FLOAT - 193)) | (1L << (FN_STRING - 193)) | (1L << (VARIABLE_FLOAT - 193)) | (1L << (VARIABLE_INTEGER - 193)) | (1L << (VARIABLE_STRING - 193)) | (1L << (VARIABLE_TYPE - 193)) | (1L << (NUMBER - 193)))) != 0) );
			setState(427);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ELSE) {
				{
				setState(420);
				match(ELSE);
				setState(421);
				match(NEWLINE);
				setState(423); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(422);
					((StmtIFMultilineContext)_localctx).f = line();
					}
					}
					setState(425); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS))) != 0) || ((((_la - 91)) & ~0x3f) == 0 && ((1L << (_la - 91)) & ((1L << (RENDERFRAME - 91)) | (1L << (CREATEVERTEX - 91)) | (1L << (CREATETRIANGLE - 91)) | (1L << (TRANSLATE - 91)) | (1L << (ROTATE - 91)) | (1L << (SCALE - 91)) | (1L << (DELETEOBJECT - 91)) | (1L << (BGETH - 91)) | (1L << (BPUTH - 91)) | (1L << (CLOSEH - 91)) | (1L << (PTRH - 91)) | (1L << (CIRCLE - 91)) | (1L << (CLS - 91)) | (1L << (CLIPON - 91)) | (1L << (CLIPOFF - 91)) | (1L << (COLOUR - 91)) | (1L << (COLOURBG - 91)) | (1L << (FLIP - 91)) | (1L << (SHOWFPS - 91)) | (1L << (GRAPHICS - 91)) | (1L << (LINE - 91)) | (1L << (RECTANGLE - 91)) | (1L << (PLOT - 91)) | (1L << (TEXT - 91)) | (1L << (TEXTRIGHT - 91)) | (1L << (TEXTCENTRE - 91)) | (1L << (TEXTCENTER - 91)) | (1L << (TRIANGLE - 91)))) != 0) || ((((_la - 193)) & ~0x3f) == 0 && ((1L << (_la - 193)) & ((1L << (NEWLINE - 193)) | (1L << (COLON - 193)) | (1L << (COMMENT - 193)) | (1L << (PROC_NAME - 193)) | (1L << (FN_INTEGER - 193)) | (1L << (FN_FLOAT - 193)) | (1L << (FN_STRING - 193)) | (1L << (VARIABLE_FLOAT - 193)) | (1L << (VARIABLE_INTEGER - 193)) | (1L << (VARIABLE_STRING - 193)) | (1L << (VARIABLE_TYPE - 193)) | (1L << (NUMBER - 193)))) != 0) );
				}
			}

			setState(429);
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
			setState(435);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case GLOBAL:
			case LET:
			case VARIABLE_FLOAT:
			case VARIABLE_INTEGER:
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(432);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==GLOBAL || _la==LET) {
					{
					setState(431);
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
				setState(434);
				match(LOCAL);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(437);
			varDecl();
			setState(438);
			match(EQ);
			setState(439);
			expr();
			setState(447);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(440);
				match(COMMA);
				setState(441);
				varDecl();
				setState(442);
				match(EQ);
				setState(443);
				expr();
				}
				}
				setState(449);
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
			setState(450);
			match(OSCLI);
			setState(451);
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
			setState(453);
			match(PROC_NAME);
			setState(454);
			match(LPAREN);
			setState(456);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)) | (1L << (LOADTYPEFACE - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (POINT - 130)) | (1L << (SCREENWIDTH - 130)) | (1L << (SCREENHEIGHT - 130)) | (1L << (TIME - 130)) | (1L << (PI - 130)) | (1L << (SQR - 130)) | (1L << (LN - 130)) | (1L << (LOG - 130)) | (1L << (EXP - 130)) | (1L << (ATN - 130)) | (1L << (TAN - 130)) | (1L << (COS - 130)) | (1L << (SIN - 130)) | (1L << (ABS - 130)) | (1L << (ACS - 130)) | (1L << (ASN - 130)) | (1L << (DEG - 130)) | (1L << (RAD - 130)) | (1L << (SGN - 130)) | (1L << (ASC - 130)) | (1L << (LEN - 130)) | (1L << (INSTR - 130)) | (1L << (VAL - 130)) | (1L << (TIMES - 130)) | (1L << (STRS - 130)) | (1L << (STRINGS - 130)) | (1L << (CHRS - 130)) | (1L << (LEFTS - 130)) | (1L << (MIDS - 130)) | (1L << (RIGHTS - 130)) | (1L << (RND - 130)) | (1L << (RND0 - 130)) | (1L << (RND1 - 130)) | (1L << (NOT - 130)) | (1L << (PLUS - 130)) | (1L << (MINUS - 130)))) != 0) || ((((_la - 200)) & ~0x3f) == 0 && ((1L << (_la - 200)) & ((1L << (LPAREN - 200)) | (1L << (STRINGLITERAL - 200)) | (1L << (FN_INTEGER - 200)) | (1L << (FN_FLOAT - 200)) | (1L << (FN_STRING - 200)) | (1L << (VARIABLE_FLOAT - 200)) | (1L << (VARIABLE_INTEGER - 200)) | (1L << (VARIABLE_STRING - 200)) | (1L << (VARIABLE_TYPE - 200)) | (1L << (HEXNUMBER - 200)) | (1L << (BINARYNUMBER - 200)) | (1L << (NUMBER - 200)) | (1L << (FLOAT - 200)))) != 0)) {
				{
				setState(455);
				functionParList();
				}
			}

			setState(458);
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
			setState(460);
			match(READ);
			setState(461);
			varDecl();
			setState(466);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(462);
				match(COMMA);
				setState(463);
				varDecl();
				}
				}
				setState(468);
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
			setState(469);
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
			setState(471);
			match(SWAP);
			setState(472);
			justVar();
			setState(473);
			match(COMMA);
			setState(474);
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
			setState(476);
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
			setState(478);
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
			setState(480);
			match(TYPE);
			setState(481);
			varName();
			setState(482);
			match(LPAREN);
			setState(483);
			justVar();
			setState(488);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(484);
				match(COMMA);
				setState(485);
				justVar();
				}
				}
				setState(490);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(491);
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
			setState(493);
			match(REPEAT);
			setState(494);
			body();
			setState(495);
			match(UNTIL);
			setState(496);
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
			setState(498);
			match(WHILE);
			setState(499);
			expr();
			setState(500);
			body();
			setState(501);
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
			setState(510);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INPUT:
				enterOuterAlt(_localctx, 1);
				{
				setState(503);
				stmtINPUT();
				}
				break;
			case PRINT:
				enterOuterAlt(_localctx, 2);
				{
				setState(504);
				stmtPRINT();
				}
				break;
			case MOUSE:
				enterOuterAlt(_localctx, 3);
				{
				setState(505);
				stmtMOUSE();
				}
				break;
			case INKEY:
				enterOuterAlt(_localctx, 4);
				{
				setState(506);
				stmtINKEY();
				}
				break;
			case INKEYS:
				enterOuterAlt(_localctx, 5);
				{
				setState(507);
				stmtINKEYS();
				}
				break;
			case GET:
				enterOuterAlt(_localctx, 6);
				{
				setState(508);
				stmtGET();
				}
				break;
			case GETS:
				enterOuterAlt(_localctx, 7);
				{
				setState(509);
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
			setState(512);
			match(INPUT);
			setState(516);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,36,_ctx) ) {
			case 1:
				{
				setState(513);
				strExpr(0);
				setState(514);
				match(COMMA);
				}
				break;
			}
			setState(518);
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
			setState(520);
			match(PRINT);
			setState(522);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,37,_ctx) ) {
			case 1:
				{
				setState(521);
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
			setState(524);
			match(MOUSE);
			setState(525);
			varNameInteger();
			setState(526);
			match(COMMA);
			setState(527);
			varNameInteger();
			setState(528);
			match(COMMA);
			setState(529);
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
			setState(531);
			match(INKEY);
			setState(532);
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
			setState(534);
			match(INKEYS);
			setState(535);
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
			setState(537);
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
			setState(539);
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
			setState(565);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(541);
				varDecl();
				setState(542);
				match(MULTIPLY_E);
				setState(543);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(545);
				varDecl();
				setState(546);
				match(DIVIDE_E);
				setState(547);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(549);
				varDecl();
				setState(550);
				match(PLUS_E);
				setState(551);
				numExpr(0);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(553);
				varDecl();
				setState(554);
				match(MINUS_E);
				setState(555);
				numExpr(0);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(557);
				varDecl();
				setState(558);
				match(SHL_E);
				setState(559);
				numExpr(0);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(561);
				varDecl();
				setState(562);
				match(SHR_E);
				setState(563);
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
			setState(572);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BPUTH:
				enterOuterAlt(_localctx, 1);
				{
				setState(567);
				stmtBPUTH();
				}
				break;
			case BGETH:
				enterOuterAlt(_localctx, 2);
				{
				setState(568);
				stmtBGETH();
				}
				break;
			case PTRH:
				enterOuterAlt(_localctx, 3);
				{
				setState(569);
				stmtPTRH();
				}
				break;
			case CLOSEH:
				enterOuterAlt(_localctx, 4);
				{
				setState(570);
				stmtCLOSEH();
				}
				break;
			case LOCAL:
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 5);
				{
				setState(571);
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
			setState(574);
			match(BPUTH);
			setState(575);
			numExpr(0);
			setState(576);
			match(COMMA);
			setState(577);
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
			setState(579);
			match(BGETH);
			setState(580);
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
			setState(582);
			match(PTRH);
			setState(583);
			numExpr(0);
			setState(584);
			match(EQ);
			setState(585);
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
			setState(587);
			match(CLOSEH);
			setState(588);
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
			setState(591);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LOCAL) {
				{
				setState(590);
				match(LOCAL);
				}
			}

			setState(593);
			varNameString();
			setState(594);
			match(LPAREN);
			setState(595);
			match(RPAREN);
			setState(596);
			match(EQ);
			setState(597);
			match(LISTFILES);
			setState(598);
			match(LPAREN);
			setState(599);
			strExpr(0);
			setState(600);
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
		enterRule(_localctx, 94, RULE_graphicsStmt);
		try {
			setState(625);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CLS:
				enterOuterAlt(_localctx, 1);
				{
				setState(602);
				stmtCLS();
				}
				break;
			case COLOUR:
				enterOuterAlt(_localctx, 2);
				{
				setState(603);
				stmtCOLOUR();
				}
				break;
			case COLOURBG:
				enterOuterAlt(_localctx, 3);
				{
				setState(604);
				stmtCOLOURBG();
				}
				break;
			case GRAPHICS:
				enterOuterAlt(_localctx, 4);
				{
				setState(605);
				stmtGRAPHICS();
				}
				break;
			case FLIP:
				enterOuterAlt(_localctx, 5);
				{
				setState(606);
				stmtFLIP();
				}
				break;
			case CIRCLE:
				enterOuterAlt(_localctx, 6);
				{
				setState(607);
				stmtCIRCLE();
				}
				break;
			case LINE:
				enterOuterAlt(_localctx, 7);
				{
				setState(608);
				stmtLINE();
				}
				break;
			case RECTANGLE:
				enterOuterAlt(_localctx, 8);
				{
				setState(609);
				stmtRECTANGLE();
				}
				break;
			case TRIANGLE:
				enterOuterAlt(_localctx, 9);
				{
				setState(610);
				stmtTRIANGLE();
				}
				break;
			case PLOT:
				enterOuterAlt(_localctx, 10);
				{
				setState(611);
				stmtPLOT();
				}
				break;
			case CLIPON:
				enterOuterAlt(_localctx, 11);
				{
				setState(612);
				stmtCLIPON();
				}
				break;
			case CLIPOFF:
				enterOuterAlt(_localctx, 12);
				{
				setState(613);
				stmtCLIPOFF();
				}
				break;
			case TEXT:
				enterOuterAlt(_localctx, 13);
				{
				setState(614);
				stmtTEXT();
				}
				break;
			case TEXTRIGHT:
				enterOuterAlt(_localctx, 14);
				{
				setState(615);
				stmtTEXTRIGHT();
				}
				break;
			case TEXTCENTRE:
			case TEXTCENTER:
				enterOuterAlt(_localctx, 15);
				{
				setState(616);
				stmtTEXTCENTRE();
				}
				break;
			case SHOWFPS:
				enterOuterAlt(_localctx, 16);
				{
				setState(617);
				stmtSHOWFPS();
				}
				break;
			case RENDERFRAME:
				enterOuterAlt(_localctx, 17);
				{
				setState(618);
				stmtRENDERFRAME();
				}
				break;
			case CREATEVERTEX:
				enterOuterAlt(_localctx, 18);
				{
				setState(619);
				stmtCREATEVERTEX();
				}
				break;
			case CREATETRIANGLE:
				enterOuterAlt(_localctx, 19);
				{
				setState(620);
				stmtCREATETRIANGLE();
				}
				break;
			case TRANSLATE:
				enterOuterAlt(_localctx, 20);
				{
				setState(621);
				stmtTRANSLATE();
				}
				break;
			case ROTATE:
				enterOuterAlt(_localctx, 21);
				{
				setState(622);
				stmtROTATE();
				}
				break;
			case SCALE:
				enterOuterAlt(_localctx, 22);
				{
				setState(623);
				stmtSCALE();
				}
				break;
			case DELETEOBJECT:
				enterOuterAlt(_localctx, 23);
				{
				setState(624);
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
		enterRule(_localctx, 96, RULE_stmtCLS);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(627);
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
			setState(638);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,42,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(629);
				match(COLOUR);
				setState(630);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(631);
				match(COLOUR);
				setState(632);
				numExpr(0);
				setState(633);
				match(COMMA);
				setState(634);
				numExpr(0);
				setState(635);
				match(COMMA);
				setState(636);
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
			setState(649);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(640);
				match(COLOURBG);
				setState(641);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(642);
				match(COLOURBG);
				setState(643);
				numExpr(0);
				setState(644);
				match(COMMA);
				setState(645);
				numExpr(0);
				setState(646);
				match(COMMA);
				setState(647);
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
			setState(665);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,44,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(651);
				match(GRAPHICS);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(652);
				match(GRAPHICS);
				setState(653);
				numExpr(0);
				setState(654);
				match(COMMA);
				setState(655);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(657);
				match(GRAPHICS);
				setState(658);
				match(BANKED);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(659);
				match(GRAPHICS);
				setState(660);
				match(BANKED);
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
			setState(667);
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
			setState(684);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,45,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(669);
				match(CIRCLE);
				setState(670);
				numExpr(0);
				setState(671);
				match(COMMA);
				setState(672);
				numExpr(0);
				setState(673);
				match(COMMA);
				setState(674);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(676);
				match(CIRCLE);
				setState(677);
				match(FILL);
				setState(678);
				numExpr(0);
				setState(679);
				match(COMMA);
				setState(680);
				numExpr(0);
				setState(681);
				match(COMMA);
				setState(682);
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
			setState(686);
			match(LINE);
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
			setState(692);
			match(COMMA);
			setState(693);
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
			setState(714);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,46,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(695);
				match(RECTANGLE);
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
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(704);
				match(RECTANGLE);
				setState(705);
				match(FILL);
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
				setState(711);
				match(COMMA);
				setState(712);
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
			setState(763);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,47,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(716);
				match(TRIANGLE);
				setState(717);
				numExpr(0);
				setState(718);
				match(COMMA);
				setState(719);
				numExpr(0);
				setState(720);
				match(COMMA);
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
				match(TRIANGLE);
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
				setState(738);
				match(COMMA);
				setState(739);
				numExpr(0);
				setState(740);
				match(COMMA);
				setState(741);
				numExpr(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(743);
				match(TRIANGLE);
				setState(744);
				match(SHADED);
				setState(745);
				numExpr(0);
				setState(746);
				match(COMMA);
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
			}
		}
		catch (RecognitionException re) {
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
			setState(765);
			match(PLOT);
			setState(766);
			numExpr(0);
			setState(767);
			match(COMMA);
			setState(768);
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
			setState(770);
			match(CLIPON);
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
		}
		catch (RecognitionException re) {
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
			setState(779);
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
			setState(781);
			match(TEXT);
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
			setState(787);
			match(COMMA);
			setState(788);
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
			setState(790);
			match(TEXTRIGHT);
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
			setState(799);
			_la = _input.LA(1);
			if ( !(_la==TEXTCENTRE || _la==TEXTCENTER) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
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
			setState(808);
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
		enterRule(_localctx, 128, RULE_stmtRENDERFRAME);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(810);
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
		enterRule(_localctx, 130, RULE_stmtCREATEVERTEX);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(812);
			match(CREATEVERTEX);
			setState(813);
			varNameType();
			setState(814);
			match(LPAREN);
			setState(815);
			numExpr(0);
			setState(816);
			match(RPAREN);
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
			numExpr(0);
			setState(823);
			match(COMMA);
			setState(824);
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
		enterRule(_localctx, 132, RULE_stmtCREATETRIANGLE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(826);
			match(CREATETRIANGLE);
			setState(827);
			varNameType();
			setState(828);
			match(LPAREN);
			setState(829);
			numExpr(0);
			setState(830);
			match(RPAREN);
			setState(831);
			match(COMMA);
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
			}
		}
		catch (RecognitionException re) {
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
		enterRule(_localctx, 134, RULE_stmtTRANSLATE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(840);
			match(TRANSLATE);
			setState(841);
			numExpr(0);
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
			}
		}
		catch (RecognitionException re) {
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
		enterRule(_localctx, 136, RULE_stmtROTATE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(849);
			match(ROTATE);
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
			}
		}
		catch (RecognitionException re) {
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
		enterRule(_localctx, 138, RULE_stmtSCALE);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(858);
			match(SCALE);
			setState(859);
			numExpr(0);
			setState(860);
			match(COMMA);
			setState(861);
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
		enterRule(_localctx, 140, RULE_stmtDELETEOBJECT);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(863);
			match(DELETEOBJECT);
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
		enterRule(_localctx, 142, RULE_when);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(866);
			match(WHEN);
			setState(867);
			expr();
			setState(872);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(868);
				match(COMMA);
				setState(869);
				expr();
				}
				}
				setState(874);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(875);
			match(COLON);
			setState(876);
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
		enterRule(_localctx, 144, RULE_fnName);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(878);
			_la = _input.LA(1);
			if ( !(((((_la - 208)) & ~0x3f) == 0 && ((1L << (_la - 208)) & ((1L << (FN_INTEGER - 208)) | (1L << (FN_FLOAT - 208)) | (1L << (FN_STRING - 208)))) != 0)) ) {
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
		enterRule(_localctx, 146, RULE_literal);
		try {
			setState(882);
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
				setState(880);
				number();
				}
				break;
			case STRINGLITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(881);
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
		enterRule(_localctx, 148, RULE_var);
		try {
			setState(887);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,50,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(884);
				numVar();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(885);
				strVar();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(886);
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
		enterRule(_localctx, 150, RULE_typeVar);
		try {
			_localctx = new TypeVarTypeContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(889);
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
		enterRule(_localctx, 152, RULE_numVar);
		int _la;
		try {
			setState(941);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,55,_ctx) ) {
			case 1:
				_localctx = new NumVarFloatArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(891);
				varName();
				setState(892);
				match(LPAREN);
				setState(893);
				numExpr(0);
				setState(896);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(894);
					match(COMMA);
					setState(895);
					numExpr(0);
					}
				}

				setState(898);
				match(RPAREN);
				}
				break;
			case 2:
				_localctx = new NumVarIntegerArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(900);
				varNameInteger();
				setState(901);
				match(LPAREN);
				setState(902);
				numExpr(0);
				setState(905);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(903);
					match(COMMA);
					setState(904);
					numExpr(0);
					}
				}

				setState(907);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new NumVarIntegerFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(909);
				typeVar();
				setState(910);
				match(LPAREN);
				setState(911);
				numExpr(0);
				setState(912);
				match(RPAREN);
				setState(913);
				varNameInteger();
				}
				break;
			case 4:
				_localctx = new NumVarFloatFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(915);
				typeVar();
				setState(916);
				match(LPAREN);
				setState(917);
				numExpr(0);
				setState(918);
				match(RPAREN);
				setState(919);
				varName();
				}
				break;
			case 5:
				_localctx = new NumVarFloatFNContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(921);
				match(FN_FLOAT);
				setState(922);
				match(LPAREN);
				setState(924);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)) | (1L << (LOADTYPEFACE - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (POINT - 130)) | (1L << (SCREENWIDTH - 130)) | (1L << (SCREENHEIGHT - 130)) | (1L << (TIME - 130)) | (1L << (PI - 130)) | (1L << (SQR - 130)) | (1L << (LN - 130)) | (1L << (LOG - 130)) | (1L << (EXP - 130)) | (1L << (ATN - 130)) | (1L << (TAN - 130)) | (1L << (COS - 130)) | (1L << (SIN - 130)) | (1L << (ABS - 130)) | (1L << (ACS - 130)) | (1L << (ASN - 130)) | (1L << (DEG - 130)) | (1L << (RAD - 130)) | (1L << (SGN - 130)) | (1L << (ASC - 130)) | (1L << (LEN - 130)) | (1L << (INSTR - 130)) | (1L << (VAL - 130)) | (1L << (TIMES - 130)) | (1L << (STRS - 130)) | (1L << (STRINGS - 130)) | (1L << (CHRS - 130)) | (1L << (LEFTS - 130)) | (1L << (MIDS - 130)) | (1L << (RIGHTS - 130)) | (1L << (RND - 130)) | (1L << (RND0 - 130)) | (1L << (RND1 - 130)) | (1L << (NOT - 130)) | (1L << (PLUS - 130)) | (1L << (MINUS - 130)))) != 0) || ((((_la - 200)) & ~0x3f) == 0 && ((1L << (_la - 200)) & ((1L << (LPAREN - 200)) | (1L << (STRINGLITERAL - 200)) | (1L << (FN_INTEGER - 200)) | (1L << (FN_FLOAT - 200)) | (1L << (FN_STRING - 200)) | (1L << (VARIABLE_FLOAT - 200)) | (1L << (VARIABLE_INTEGER - 200)) | (1L << (VARIABLE_STRING - 200)) | (1L << (VARIABLE_TYPE - 200)) | (1L << (HEXNUMBER - 200)) | (1L << (BINARYNUMBER - 200)) | (1L << (NUMBER - 200)) | (1L << (FLOAT - 200)))) != 0)) {
					{
					setState(923);
					functionParList();
					}
				}

				setState(926);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new NumVarIntegerFNContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(927);
				match(FN_INTEGER);
				setState(928);
				match(LPAREN);
				setState(930);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)) | (1L << (LOADTYPEFACE - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (POINT - 130)) | (1L << (SCREENWIDTH - 130)) | (1L << (SCREENHEIGHT - 130)) | (1L << (TIME - 130)) | (1L << (PI - 130)) | (1L << (SQR - 130)) | (1L << (LN - 130)) | (1L << (LOG - 130)) | (1L << (EXP - 130)) | (1L << (ATN - 130)) | (1L << (TAN - 130)) | (1L << (COS - 130)) | (1L << (SIN - 130)) | (1L << (ABS - 130)) | (1L << (ACS - 130)) | (1L << (ASN - 130)) | (1L << (DEG - 130)) | (1L << (RAD - 130)) | (1L << (SGN - 130)) | (1L << (ASC - 130)) | (1L << (LEN - 130)) | (1L << (INSTR - 130)) | (1L << (VAL - 130)) | (1L << (TIMES - 130)) | (1L << (STRS - 130)) | (1L << (STRINGS - 130)) | (1L << (CHRS - 130)) | (1L << (LEFTS - 130)) | (1L << (MIDS - 130)) | (1L << (RIGHTS - 130)) | (1L << (RND - 130)) | (1L << (RND0 - 130)) | (1L << (RND1 - 130)) | (1L << (NOT - 130)) | (1L << (PLUS - 130)) | (1L << (MINUS - 130)))) != 0) || ((((_la - 200)) & ~0x3f) == 0 && ((1L << (_la - 200)) & ((1L << (LPAREN - 200)) | (1L << (STRINGLITERAL - 200)) | (1L << (FN_INTEGER - 200)) | (1L << (FN_FLOAT - 200)) | (1L << (FN_STRING - 200)) | (1L << (VARIABLE_FLOAT - 200)) | (1L << (VARIABLE_INTEGER - 200)) | (1L << (VARIABLE_STRING - 200)) | (1L << (VARIABLE_TYPE - 200)) | (1L << (HEXNUMBER - 200)) | (1L << (BINARYNUMBER - 200)) | (1L << (NUMBER - 200)) | (1L << (FLOAT - 200)))) != 0)) {
					{
					setState(929);
					functionParList();
					}
				}

				setState(932);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new NumVarFloatContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(933);
				varName();
				}
				break;
			case 8:
				_localctx = new NumVarIntegerContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(934);
				varNameInteger();
				}
				break;
			case 9:
				_localctx = new NumVarFloatFieldContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(935);
				typeVar();
				setState(936);
				varName();
				}
				break;
			case 10:
				_localctx = new NumVarIntegerFieldContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(938);
				typeVar();
				setState(939);
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
		enterRule(_localctx, 154, RULE_strVar);
		int _la;
		try {
			setState(968);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,58,_ctx) ) {
			case 1:
				_localctx = new NumVarStringArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(943);
				varNameString();
				setState(944);
				match(LPAREN);
				setState(945);
				numExpr(0);
				setState(948);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(946);
					match(COMMA);
					setState(947);
					numExpr(0);
					}
				}

				setState(950);
				match(RPAREN);
				}
				break;
			case 2:
				_localctx = new NumVarStringFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(952);
				typeVar();
				setState(953);
				match(LPAREN);
				setState(954);
				numExpr(0);
				setState(955);
				match(RPAREN);
				setState(956);
				varNameString();
				}
				break;
			case 3:
				_localctx = new NumVarStringContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(958);
				varNameString();
				}
				break;
			case 4:
				_localctx = new NumVarStringFieldContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(959);
				typeVar();
				setState(960);
				varNameString();
				}
				break;
			case 5:
				_localctx = new NumVarStringFNContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(962);
				match(FN_STRING);
				setState(963);
				match(LPAREN);
				setState(965);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (MONO15 - 64)) | (1L << (MONO20 - 64)) | (1L << (MONO25 - 64)) | (1L << (MONO30 - 64)) | (1L << (MONO35 - 64)) | (1L << (MONO40 - 64)) | (1L << (MONO50 - 64)) | (1L << (MONO75 - 64)) | (1L << (MONO100 - 64)) | (1L << (PROP15 - 64)) | (1L << (PROP20 - 64)) | (1L << (PROP25 - 64)) | (1L << (PROP30 - 64)) | (1L << (PROP35 - 64)) | (1L << (PROP40 - 64)) | (1L << (PROP50 - 64)) | (1L << (PROP75 - 64)) | (1L << (PROP100 - 64)) | (1L << (SERIF15 - 64)) | (1L << (SERIF20 - 64)) | (1L << (SERIF25 - 64)) | (1L << (SERIF30 - 64)) | (1L << (SERIF35 - 64)) | (1L << (SERIF40 - 64)) | (1L << (SERIF50 - 64)) | (1L << (SERIF75 - 64)) | (1L << (SERIF100 - 64)) | (1L << (CREATESHAPE - 64)) | (1L << (CREATEOBJECT - 64)) | (1L << (BGETH - 64)) | (1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (COLOUR - 64)) | (1L << (CREATEFONT - 64)) | (1L << (LOADTYPEFACE - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (POINT - 130)) | (1L << (SCREENWIDTH - 130)) | (1L << (SCREENHEIGHT - 130)) | (1L << (TIME - 130)) | (1L << (PI - 130)) | (1L << (SQR - 130)) | (1L << (LN - 130)) | (1L << (LOG - 130)) | (1L << (EXP - 130)) | (1L << (ATN - 130)) | (1L << (TAN - 130)) | (1L << (COS - 130)) | (1L << (SIN - 130)) | (1L << (ABS - 130)) | (1L << (ACS - 130)) | (1L << (ASN - 130)) | (1L << (DEG - 130)) | (1L << (RAD - 130)) | (1L << (SGN - 130)) | (1L << (ASC - 130)) | (1L << (LEN - 130)) | (1L << (INSTR - 130)) | (1L << (VAL - 130)) | (1L << (TIMES - 130)) | (1L << (STRS - 130)) | (1L << (STRINGS - 130)) | (1L << (CHRS - 130)) | (1L << (LEFTS - 130)) | (1L << (MIDS - 130)) | (1L << (RIGHTS - 130)) | (1L << (RND - 130)) | (1L << (RND0 - 130)) | (1L << (RND1 - 130)) | (1L << (NOT - 130)) | (1L << (PLUS - 130)) | (1L << (MINUS - 130)))) != 0) || ((((_la - 200)) & ~0x3f) == 0 && ((1L << (_la - 200)) & ((1L << (LPAREN - 200)) | (1L << (STRINGLITERAL - 200)) | (1L << (FN_INTEGER - 200)) | (1L << (FN_FLOAT - 200)) | (1L << (FN_STRING - 200)) | (1L << (VARIABLE_FLOAT - 200)) | (1L << (VARIABLE_INTEGER - 200)) | (1L << (VARIABLE_STRING - 200)) | (1L << (VARIABLE_TYPE - 200)) | (1L << (HEXNUMBER - 200)) | (1L << (BINARYNUMBER - 200)) | (1L << (NUMBER - 200)) | (1L << (FLOAT - 200)))) != 0)) {
					{
					setState(964);
					functionParList();
					}
				}

				setState(967);
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
		enterRule(_localctx, 156, RULE_justVar);
		try {
			setState(973);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(970);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(971);
				varNameInteger();
				}
				break;
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(972);
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
		enterRule(_localctx, 158, RULE_justNumberVar);
		try {
			setState(977);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(975);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(976);
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
		enterRule(_localctx, 160, RULE_varName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(979);
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
		enterRule(_localctx, 162, RULE_varNameInteger);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(981);
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
		enterRule(_localctx, 164, RULE_varNameString);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(983);
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
		enterRule(_localctx, 166, RULE_varNameType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(985);
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
		enterRule(_localctx, 168, RULE_varDecl);
		int _la;
		try {
			setState(1026);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,63,_ctx) ) {
			case 1:
				_localctx = new VarDeclIndContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(987);
				justVar();
				}
				break;
			case 2:
				_localctx = new VarDeclArrayedContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(988);
				justVar();
				setState(999);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==LPAREN) {
					{
					{
					setState(989);
					match(LPAREN);
					setState(990);
					numExpr(0);
					setState(993);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==COMMA) {
						{
						setState(991);
						match(COMMA);
						setState(992);
						numExpr(0);
						}
					}

					setState(995);
					match(RPAREN);
					}
					}
					setState(1001);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 3:
				_localctx = new VarDeclTypeVarContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1002);
				typeVar();
				setState(1003);
				varName();
				}
				break;
			case 4:
				_localctx = new VarDeclTypeVarContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1005);
				typeVar();
				setState(1006);
				varNameInteger();
				}
				break;
			case 5:
				_localctx = new VarDeclTypeVarArrayedContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1008);
				typeVar();
				setState(1009);
				match(LPAREN);
				setState(1010);
				numExpr(0);
				setState(1011);
				match(RPAREN);
				setState(1012);
				varName();
				}
				break;
			case 6:
				_localctx = new VarDeclTypeVarArrayedContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1014);
				typeVar();
				setState(1015);
				match(LPAREN);
				setState(1016);
				numExpr(0);
				setState(1017);
				match(RPAREN);
				setState(1018);
				varNameInteger();
				}
				break;
			case 7:
				_localctx = new VarDeclTypeContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1020);
				typeVar();
				}
				break;
			case 8:
				_localctx = new VarDeclTypeArrayedContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1021);
				typeVar();
				setState(1022);
				match(LPAREN);
				setState(1023);
				numExpr(0);
				setState(1024);
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
		enterRule(_localctx, 170, RULE_varDeclWithDimension);
		int _la;
		try {
			setState(1047);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
			case VARIABLE_INTEGER:
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 1);
				{
				setState(1028);
				justVar();
				setState(1029);
				match(LPAREN);
				setState(1030);
				numExpr(0);
				setState(1035);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(1031);
					match(COMMA);
					setState(1032);
					numExpr(0);
					}
					}
					setState(1037);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1038);
				match(RPAREN);
				}
				break;
			case VARIABLE_TYPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(1040);
				typeVar();
				setState(1041);
				match(LPAREN);
				setState(1042);
				numExpr(0);
				setState(1043);
				match(COMMA);
				setState(1044);
				varName();
				setState(1045);
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
		enterRule(_localctx, 172, RULE_varList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1049);
			varDecl();
			setState(1054);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1050);
				match(COMMA);
				setState(1051);
				varDecl();
				}
				}
				setState(1056);
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
		enterRule(_localctx, 174, RULE_functionVarList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1058);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN) {
				{
				setState(1057);
				match(RETURN);
				}
			}

			setState(1060);
			justVar();
			setState(1068);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1061);
				match(COMMA);
				setState(1063);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN) {
					{
					setState(1062);
					match(RETURN);
					}
				}

				setState(1065);
				justVar();
				}
				}
				setState(1070);
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
		enterRule(_localctx, 176, RULE_functionParList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1071);
			expr();
			setState(1076);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1072);
				match(COMMA);
				setState(1073);
				expr();
				}
				}
				setState(1078);
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
		enterRule(_localctx, 178, RULE_exprList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1079);
			expr();
			setState(1084);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1080);
				match(COMMA);
				setState(1081);
				expr();
				}
				}
				setState(1086);
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
		enterRule(_localctx, 180, RULE_printListItem);
		int _la;
		try {
			setState(1098);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,73,_ctx) ) {
			case 1:
				_localctx = new PrintListExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1088);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TILDE) {
					{
					setState(1087);
					match(TILDE);
					}
				}

				setState(1090);
				expr();
				}
				break;
			case 2:
				_localctx = new PrintListSPCPContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1091);
				match(SPC);
				setState(1092);
				match(LPAREN);
				setState(1093);
				numExpr(0);
				setState(1094);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new PrintListSPCContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1096);
				match(SPC);
				setState(1097);
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
		enterRule(_localctx, 182, RULE_printListTick);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1101); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(1100);
				match(TICK);
				}
				}
				setState(1103); 
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
		enterRule(_localctx, 184, RULE_printListSeparator);
		try {
			setState(1108);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COMMA:
				enterOuterAlt(_localctx, 1);
				{
				setState(1105);
				match(COMMA);
				}
				break;
			case SEMICOLON:
				enterOuterAlt(_localctx, 2);
				{
				setState(1106);
				match(SEMICOLON);
				}
				break;
			case TICK:
				enterOuterAlt(_localctx, 3);
				{
				setState(1107);
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
		enterRule(_localctx, 186, RULE_printList);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1111);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TICK) {
				{
				setState(1110);
				printListTick();
				}
			}

			setState(1114);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(1113);
				((PrintListContext)_localctx).s1 = match(SEMICOLON);
				}
			}

			setState(1116);
			printListItem();
			setState(1122);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,78,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1117);
					printListSeparator();
					setState(1118);
					printListItem();
					}
					} 
				}
				setState(1124);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,78,_ctx);
			}
			setState(1126);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(1125);
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
		enterRule(_localctx, 188, RULE_expr);
		try {
			setState(1130);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,80,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1128);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1129);
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
		enterRule(_localctx, 190, RULE_number);
		try {
			setState(1138);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,81,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1132);
				numberInteger();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1133);
				numberFloat();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1134);
				numberHex();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1135);
				numberBinary();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1136);
				numColours();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1137);
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
		enterRule(_localctx, 192, RULE_numberInteger);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1141);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(1140);
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

			setState(1143);
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
		enterRule(_localctx, 194, RULE_numberHex);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1145);
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
		enterRule(_localctx, 196, RULE_numberBinary);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1147);
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
		enterRule(_localctx, 198, RULE_numberFloat);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1150);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(1149);
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

			setState(1152);
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
		enterRule(_localctx, 200, RULE_strFunc);
		try {
			setState(1206);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,84,_ctx) ) {
			case 1:
				_localctx = new StrFuncTIMESContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1154);
				match(TIMES);
				}
				break;
			case 2:
				_localctx = new StrFuncCHRSContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1155);
				match(CHRS);
				setState(1156);
				numExpr(0);
				}
				break;
			case 3:
				_localctx = new StrFuncCHRSContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1157);
				match(CHRS);
				setState(1158);
				match(LPAREN);
				setState(1159);
				numExpr(0);
				setState(1160);
				match(RPAREN);
				}
				break;
			case 4:
				_localctx = new StrFuncLEFTSContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1162);
				match(LEFTS);
				setState(1163);
				match(LPAREN);
				setState(1164);
				strExpr(0);
				setState(1165);
				match(COMMA);
				setState(1166);
				numExpr(0);
				setState(1167);
				match(RPAREN);
				}
				break;
			case 5:
				_localctx = new StrFuncMIDS3Context(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1169);
				match(MIDS);
				setState(1170);
				match(LPAREN);
				setState(1171);
				strExpr(0);
				setState(1172);
				match(COMMA);
				setState(1173);
				numExpr(0);
				setState(1174);
				match(COMMA);
				setState(1175);
				numExpr(0);
				setState(1176);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new StrFuncMIDS2Context(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1178);
				match(MIDS);
				setState(1179);
				match(LPAREN);
				setState(1180);
				strExpr(0);
				setState(1181);
				match(COMMA);
				setState(1182);
				numExpr(0);
				setState(1183);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new StrFuncRIGHTSContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1185);
				match(RIGHTS);
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
			case 8:
				_localctx = new StrFuncSTRSContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1192);
				match(STRS);
				setState(1193);
				numExpr(0);
				}
				break;
			case 9:
				_localctx = new StrFuncSTRSHEXContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(1194);
				match(STRS);
				setState(1195);
				match(TILDE);
				setState(1196);
				numExpr(0);
				}
				break;
			case 10:
				_localctx = new StrFuncSTRINGSContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(1197);
				match(STRINGS);
				setState(1198);
				match(LPAREN);
				setState(1199);
				numExpr(0);
				setState(1200);
				match(COMMA);
				setState(1201);
				strExpr(0);
				setState(1202);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new StrFuncINKEYSContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(1204);
				match(INKEYS);
				setState(1205);
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
		enterRule(_localctx, 202, RULE_string);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1208);
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
		int _startState = 204;
		enterRecursionRule(_localctx, 204, RULE_strExpr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1218);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LPAREN:
				{
				setState(1211);
				match(LPAREN);
				setState(1212);
				strExpr(0);
				setState(1213);
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
				setState(1215);
				strFunc();
				}
				break;
			case FN_STRING:
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(1216);
				strVar();
				}
				break;
			case STRINGLITERAL:
				{
				setState(1217);
				string();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(1225);
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
					setState(1220);
					if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
					setState(1221);
					match(PLUS);
					setState(1222);
					strExpr(4);
					}
					} 
				}
				setState(1227);
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
		enterRule(_localctx, 206, RULE_numFunc);
		int _la;
		try {
			setState(1415);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,87,_ctx) ) {
			case 1:
				_localctx = new NumFuncPIContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1228);
				match(PI);
				}
				break;
			case 2:
				_localctx = new NumFuncFALSEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1229);
				match(FALSE);
				}
				break;
			case 3:
				_localctx = new NumFuncTRUEContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1230);
				match(TRUE);
				}
				break;
			case 4:
				_localctx = new NumFuncTIMEContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1231);
				match(TIME);
				}
				break;
			case 5:
				_localctx = new NumFuncRNDContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1232);
				match(RND);
				}
				break;
			case 6:
				_localctx = new NumFuncRND0Context(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1233);
				match(RND0);
				}
				break;
			case 7:
				_localctx = new NumFuncRND1Context(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(1234);
				match(RND1);
				}
				break;
			case 8:
				_localctx = new NumFuncRNDRANGEContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(1235);
				match(RND);
				setState(1236);
				match(LPAREN);
				setState(1237);
				numExpr(0);
				setState(1238);
				match(RPAREN);
				}
				break;
			case 9:
				_localctx = new NumFuncLNContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(1240);
				match(LN);
				setState(1241);
				match(LPAREN);
				setState(1242);
				numExpr(0);
				setState(1243);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new NumFuncLOGContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(1245);
				match(LOG);
				setState(1246);
				match(LPAREN);
				setState(1247);
				numExpr(0);
				setState(1248);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new NumFuncEXPContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(1250);
				match(EXP);
				setState(1251);
				match(LPAREN);
				setState(1252);
				numExpr(0);
				setState(1253);
				match(RPAREN);
				}
				break;
			case 12:
				_localctx = new NumFuncATNContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(1255);
				match(ATN);
				setState(1256);
				match(LPAREN);
				setState(1257);
				numExpr(0);
				setState(1258);
				match(RPAREN);
				}
				break;
			case 13:
				_localctx = new NumFuncTANContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(1260);
				match(TAN);
				setState(1261);
				match(LPAREN);
				setState(1262);
				numExpr(0);
				setState(1263);
				match(RPAREN);
				}
				break;
			case 14:
				_localctx = new NumFuncCOSContext(_localctx);
				enterOuterAlt(_localctx, 14);
				{
				setState(1265);
				match(COS);
				setState(1266);
				match(LPAREN);
				setState(1267);
				numExpr(0);
				setState(1268);
				match(RPAREN);
				}
				break;
			case 15:
				_localctx = new NumFuncSINContext(_localctx);
				enterOuterAlt(_localctx, 15);
				{
				setState(1270);
				match(SIN);
				setState(1271);
				match(LPAREN);
				setState(1272);
				numExpr(0);
				setState(1273);
				match(RPAREN);
				}
				break;
			case 16:
				_localctx = new NumFuncABSContext(_localctx);
				enterOuterAlt(_localctx, 16);
				{
				setState(1275);
				match(ABS);
				setState(1276);
				match(LPAREN);
				setState(1277);
				numExpr(0);
				setState(1278);
				match(RPAREN);
				}
				break;
			case 17:
				_localctx = new NumFuncACSContext(_localctx);
				enterOuterAlt(_localctx, 17);
				{
				setState(1280);
				match(ACS);
				setState(1281);
				match(LPAREN);
				setState(1282);
				numExpr(0);
				setState(1283);
				match(RPAREN);
				}
				break;
			case 18:
				_localctx = new NumFuncASNContext(_localctx);
				enterOuterAlt(_localctx, 18);
				{
				setState(1285);
				match(ASN);
				setState(1286);
				match(LPAREN);
				setState(1287);
				numExpr(0);
				setState(1288);
				match(RPAREN);
				}
				break;
			case 19:
				_localctx = new NumFuncDEGContext(_localctx);
				enterOuterAlt(_localctx, 19);
				{
				setState(1290);
				match(DEG);
				setState(1291);
				match(LPAREN);
				setState(1292);
				numExpr(0);
				setState(1293);
				match(RPAREN);
				}
				break;
			case 20:
				_localctx = new NumFuncRADContext(_localctx);
				enterOuterAlt(_localctx, 20);
				{
				setState(1295);
				match(RAD);
				setState(1296);
				match(LPAREN);
				setState(1297);
				numExpr(0);
				setState(1298);
				match(RPAREN);
				}
				break;
			case 21:
				_localctx = new NumFuncSQRContext(_localctx);
				enterOuterAlt(_localctx, 21);
				{
				setState(1300);
				match(SQR);
				setState(1301);
				match(LPAREN);
				setState(1302);
				numExpr(0);
				setState(1303);
				match(RPAREN);
				}
				break;
			case 22:
				_localctx = new NumFuncSGNContext(_localctx);
				enterOuterAlt(_localctx, 22);
				{
				setState(1305);
				match(SGN);
				setState(1306);
				match(LPAREN);
				setState(1307);
				numExpr(0);
				setState(1308);
				match(RPAREN);
				}
				break;
			case 23:
				_localctx = new NumFuncGETContext(_localctx);
				enterOuterAlt(_localctx, 23);
				{
				setState(1310);
				match(GET);
				}
				break;
			case 24:
				_localctx = new NumFuncINKEYContext(_localctx);
				enterOuterAlt(_localctx, 24);
				{
				setState(1311);
				match(INKEY);
				setState(1312);
				numExpr(0);
				}
				break;
			case 25:
				_localctx = new NumFuncINTContext(_localctx);
				enterOuterAlt(_localctx, 25);
				{
				setState(1313);
				match(INT);
				setState(1314);
				match(LPAREN);
				setState(1315);
				numExpr(0);
				setState(1316);
				match(RPAREN);
				}
				break;
			case 26:
				_localctx = new NumFuncFLOATContext(_localctx);
				enterOuterAlt(_localctx, 26);
				{
				setState(1318);
				match(FLOAT_TOKEN);
				setState(1319);
				match(LPAREN);
				setState(1320);
				numExpr(0);
				setState(1321);
				match(RPAREN);
				}
				break;
			case 27:
				_localctx = new NumFuncSCREENWIDTHContext(_localctx);
				enterOuterAlt(_localctx, 27);
				{
				setState(1323);
				match(SCREENWIDTH);
				}
				break;
			case 28:
				_localctx = new NumFuncSCREENHEIGHTContext(_localctx);
				enterOuterAlt(_localctx, 28);
				{
				setState(1324);
				match(SCREENHEIGHT);
				}
				break;
			case 29:
				_localctx = new NumFuncPOINTContext(_localctx);
				enterOuterAlt(_localctx, 29);
				{
				setState(1325);
				match(POINT);
				setState(1326);
				match(LPAREN);
				setState(1327);
				numExpr(0);
				setState(1328);
				match(COMMA);
				setState(1329);
				numExpr(0);
				setState(1330);
				match(RPAREN);
				}
				break;
			case 30:
				_localctx = new NumFuncCOLOURContext(_localctx);
				enterOuterAlt(_localctx, 30);
				{
				setState(1332);
				match(COLOUR);
				setState(1333);
				match(LPAREN);
				setState(1334);
				numExpr(0);
				setState(1335);
				match(COMMA);
				setState(1336);
				numExpr(0);
				setState(1337);
				match(COMMA);
				setState(1338);
				numExpr(0);
				setState(1339);
				match(LPAREN);
				}
				break;
			case 31:
				_localctx = new NumFuncLOADTYPEFACEContext(_localctx);
				enterOuterAlt(_localctx, 31);
				{
				setState(1341);
				match(LOADTYPEFACE);
				setState(1342);
				strExpr(0);
				}
				break;
			case 32:
				_localctx = new NumFuncCREATEFONTContext(_localctx);
				enterOuterAlt(_localctx, 32);
				{
				setState(1343);
				match(CREATEFONT);
				setState(1344);
				numExpr(0);
				setState(1345);
				match(COMMA);
				setState(1346);
				numExpr(0);
				}
				break;
			case 33:
				_localctx = new NumFuncSHAPEContext(_localctx);
				enterOuterAlt(_localctx, 33);
				{
				setState(1348);
				match(CREATESHAPE);
				setState(1349);
				varNameType();
				setState(1350);
				match(COMMA);
				setState(1351);
				varNameType();
				}
				break;
			case 34:
				_localctx = new NumFuncOBJECTContext(_localctx);
				enterOuterAlt(_localctx, 34);
				{
				setState(1353);
				match(CREATEOBJECT);
				setState(1354);
				numExpr(0);
				setState(1355);
				match(COMMA);
				setState(1356);
				numExpr(0);
				setState(1357);
				match(COMMA);
				setState(1358);
				numExpr(0);
				setState(1359);
				match(COMMA);
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
				match(COMMA);
				setState(1366);
				numExpr(0);
				setState(1367);
				match(COMMA);
				setState(1368);
				numExpr(0);
				setState(1369);
				match(COMMA);
				setState(1370);
				_la = _input.LA(1);
				if ( !(((((_la - 100)) & ~0x3f) == 0 && ((1L << (_la - 100)) & ((1L << (SOLID - 100)) | (1L << (WIREFRAME - 100)) | (1L << (SHADED - 100)) | (1L << (FILLEDWIREFRAME - 100)))) != 0)) ) {
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
				setState(1372);
				match(BGETH);
				setState(1373);
				numExpr(0);
				}
				break;
			case 36:
				_localctx = new NumFuncEOFHContext(_localctx);
				enterOuterAlt(_localctx, 36);
				{
				setState(1374);
				match(EOFH);
				setState(1375);
				numExpr(0);
				}
				break;
			case 37:
				_localctx = new NumFuncOPENINContext(_localctx);
				enterOuterAlt(_localctx, 37);
				{
				setState(1376);
				match(OPENIN);
				setState(1377);
				match(LPAREN);
				setState(1378);
				strExpr(0);
				setState(1379);
				match(RPAREN);
				}
				break;
			case 38:
				_localctx = new NumFuncOPENOUTContext(_localctx);
				enterOuterAlt(_localctx, 38);
				{
				setState(1381);
				match(OPENOUT);
				setState(1382);
				match(LPAREN);
				setState(1383);
				strExpr(0);
				setState(1384);
				match(RPAREN);
				}
				break;
			case 39:
				_localctx = new NumFuncOPENUPContext(_localctx);
				enterOuterAlt(_localctx, 39);
				{
				setState(1386);
				match(OPENUP);
				setState(1387);
				match(LPAREN);
				setState(1388);
				strExpr(0);
				setState(1389);
				match(RPAREN);
				}
				break;
			case 40:
				_localctx = new NumFuncPTRContext(_localctx);
				enterOuterAlt(_localctx, 40);
				{
				setState(1391);
				match(PTRH);
				setState(1392);
				numExpr(0);
				}
				break;
			case 41:
				_localctx = new NumFuncASCContext(_localctx);
				enterOuterAlt(_localctx, 41);
				{
				setState(1393);
				match(ASC);
				setState(1394);
				strExpr(0);
				}
				break;
			case 42:
				_localctx = new NumFuncLENContext(_localctx);
				enterOuterAlt(_localctx, 42);
				{
				setState(1395);
				match(LEN);
				setState(1396);
				strExpr(0);
				}
				break;
			case 43:
				_localctx = new NumFuncINSTR2Context(_localctx);
				enterOuterAlt(_localctx, 43);
				{
				setState(1397);
				match(INSTR);
				setState(1398);
				match(LPAREN);
				setState(1399);
				strExpr(0);
				setState(1400);
				match(COMMA);
				setState(1401);
				strExpr(0);
				setState(1402);
				match(RPAREN);
				}
				break;
			case 44:
				_localctx = new NumFuncINSTR3Context(_localctx);
				enterOuterAlt(_localctx, 44);
				{
				setState(1404);
				match(INSTR);
				setState(1405);
				match(LPAREN);
				setState(1406);
				strExpr(0);
				setState(1407);
				match(COMMA);
				setState(1408);
				strExpr(0);
				setState(1409);
				match(COMMA);
				setState(1410);
				numExpr(0);
				setState(1411);
				match(RPAREN);
				}
				break;
			case 45:
				_localctx = new NumFuncVALContext(_localctx);
				enterOuterAlt(_localctx, 45);
				{
				setState(1413);
				match(VAL);
				setState(1414);
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
		int _startState = 208;
		enterRecursionRule(_localctx, 208, RULE_numExpr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1433);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,88,_ctx) ) {
			case 1:
				{
				_localctx = new NumExprVarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(1418);
				numVar();
				}
				break;
			case 2:
				{
				_localctx = new NumExprNumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1419);
				number();
				}
				break;
			case 3:
				{
				_localctx = new NumExprNestedContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1420);
				match(LPAREN);
				setState(1421);
				numExpr(0);
				setState(1422);
				match(RPAREN);
				}
				break;
			case 4:
				{
				_localctx = new NumExprUnaryContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1424);
				match(MINUS);
				setState(1425);
				numExpr(11);
				}
				break;
			case 5:
				{
				_localctx = new NumExprNOTContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1426);
				match(NOT);
				setState(1427);
				numExpr(10);
				}
				break;
			case 6:
				{
				_localctx = new NumExprFuncContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1428);
				numFunc();
				}
				break;
			case 7:
				{
				_localctx = new NumExprStrRelopContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1429);
				strExpr(0);
				setState(1430);
				_la = _input.LA(1);
				if ( !(((((_la - 168)) & ~0x3f) == 0 && ((1L << (_la - 168)) & ((1L << (EQ - 168)) | (1L << (NE - 168)) | (1L << (GT - 168)) | (1L << (GE - 168)) | (1L << (LT - 168)) | (1L << (LE - 168)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(1431);
				strExpr(0);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1458);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,90,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1456);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,89,_ctx) ) {
					case 1:
						{
						_localctx = new NumExprHatContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1435);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(1436);
						match(HAT);
						setState(1437);
						numExpr(8);
						}
						break;
					case 2:
						{
						_localctx = new NumExprMultiplyDivideContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1438);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(1439);
						_la = _input.LA(1);
						if ( !(_la==MULTIPLY || _la==DIVIDE) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1440);
						numExpr(8);
						}
						break;
					case 3:
						{
						_localctx = new NumExprDIVMODContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1441);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(1442);
						_la = _input.LA(1);
						if ( !(_la==MOD || _la==DIV) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1443);
						numExpr(7);
						}
						break;
					case 4:
						{
						_localctx = new NumExprAddSubtractContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1444);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(1445);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1446);
						numExpr(6);
						}
						break;
					case 5:
						{
						_localctx = new NumExprSHLSHRContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1447);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(1448);
						_la = _input.LA(1);
						if ( !(_la==SHL || _la==SHR) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1449);
						numExpr(5);
						}
						break;
					case 6:
						{
						_localctx = new NumExprNumRelopContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1450);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1451);
						_la = _input.LA(1);
						if ( !(((((_la - 168)) & ~0x3f) == 0 && ((1L << (_la - 168)) & ((1L << (EQ - 168)) | (1L << (NE - 168)) | (1L << (GT - 168)) | (1L << (GE - 168)) | (1L << (LT - 168)) | (1L << (LE - 168)))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1452);
						numExpr(4);
						}
						break;
					case 7:
						{
						_localctx = new NumExprANDOREORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1453);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(1454);
						_la = _input.LA(1);
						if ( !(((((_la - 175)) & ~0x3f) == 0 && ((1L << (_la - 175)) & ((1L << (AND - 175)) | (1L << (OR - 175)) | (1L << (EOR - 175)))) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(1455);
						numExpr(2);
						}
						break;
					}
					} 
				}
				setState(1460);
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
		enterRule(_localctx, 210, RULE_numColours);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1461);
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
		enterRule(_localctx, 212, RULE_defaultFonts);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1463);
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
		case 102:
			return strExpr_sempred((StrExprContext)_localctx, predIndex);
		case 104:
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00dd\u05bc\4\2\t"+
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
		"k\4l\tl\3\2\7\2\u00da\n\2\f\2\16\2\u00dd\13\2\3\2\3\2\3\3\3\3\5\3\u00e3"+
		"\n\3\3\3\5\3\u00e6\n\3\3\3\3\3\5\3\u00ea\n\3\3\3\6\3\u00ed\n\3\r\3\16"+
		"\3\u00ee\3\3\5\3\u00f2\n\3\3\3\3\3\5\3\u00f6\n\3\3\4\7\4\u00f9\n\4\f\4"+
		"\16\4\u00fc\13\4\3\5\7\5\u00ff\n\5\f\5\16\5\u0102\13\5\3\5\7\5\u0105\n"+
		"\5\f\5\16\5\u0108\13\5\5\5\u010a\n\5\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\5"+
		"\7\u0114\n\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3"+
		"\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\5\b\u012f\n\b\3\t\3\t\3\n\3"+
		"\n\3\n\3\n\3\n\6\n\u0138\n\n\r\n\16\n\u0139\3\n\3\n\5\n\u013e\n\n\3\n"+
		"\3\n\3\13\3\13\3\13\3\f\3\f\3\f\3\f\7\f\u0149\n\f\f\f\16\f\u014c\13\f"+
		"\3\r\5\r\u014f\n\r\3\r\3\r\3\r\3\r\7\r\u0155\n\r\f\r\16\r\u0158\13\r\3"+
		"\16\3\16\3\17\3\17\5\17\u015e\n\17\3\20\3\20\3\20\3\20\5\20\u0164\n\20"+
		"\3\20\3\20\3\20\3\20\3\21\3\21\3\21\3\21\5\21\u016e\n\21\3\21\3\21\3\21"+
		"\3\21\3\22\3\22\5\22\u0176\n\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\5\22"+
		"\u017f\n\22\3\22\3\22\3\22\3\23\3\23\5\23\u0186\n\23\3\23\3\23\3\23\3"+
		"\23\3\23\3\23\3\23\3\23\3\24\3\24\3\24\5\24\u0193\n\24\3\24\3\24\3\25"+
		"\3\25\3\25\3\25\3\25\5\25\u019c\n\25\3\26\3\26\3\26\3\26\3\26\6\26\u01a3"+
		"\n\26\r\26\16\26\u01a4\3\26\3\26\3\26\6\26\u01aa\n\26\r\26\16\26\u01ab"+
		"\5\26\u01ae\n\26\3\26\3\26\3\27\5\27\u01b3\n\27\3\27\5\27\u01b6\n\27\3"+
		"\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\7\27\u01c0\n\27\f\27\16\27\u01c3"+
		"\13\27\3\30\3\30\3\30\3\31\3\31\3\31\5\31\u01cb\n\31\3\31\3\31\3\32\3"+
		"\32\3\32\3\32\7\32\u01d3\n\32\f\32\16\32\u01d6\13\32\3\33\3\33\3\34\3"+
		"\34\3\34\3\34\3\34\3\35\3\35\3\36\3\36\3\37\3\37\3\37\3\37\3\37\3\37\7"+
		"\37\u01e9\n\37\f\37\16\37\u01ec\13\37\3\37\3\37\3 \3 \3 \3 \3 \3!\3!\3"+
		"!\3!\3!\3\"\3\"\3\"\3\"\3\"\3\"\3\"\5\"\u0201\n\"\3#\3#\3#\3#\5#\u0207"+
		"\n#\3#\3#\3$\3$\5$\u020d\n$\3%\3%\3%\3%\3%\3%\3%\3&\3&\3&\3\'\3\'\3\'"+
		"\3(\3(\3)\3)\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*"+
		"\3*\3*\3*\3*\3*\5*\u0238\n*\3+\3+\3+\3+\3+\5+\u023f\n+\3,\3,\3,\3,\3,"+
		"\3-\3-\3-\3.\3.\3.\3.\3.\3/\3/\3/\3\60\5\60\u0252\n\60\3\60\3\60\3\60"+
		"\3\60\3\60\3\60\3\60\3\60\3\60\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61"+
		"\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61"+
		"\3\61\5\61\u0274\n\61\3\62\3\62\3\63\3\63\3\63\3\63\3\63\3\63\3\63\3\63"+
		"\3\63\5\63\u0281\n\63\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\3\64\5\64"+
		"\u028c\n\64\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65\3\65"+
		"\3\65\3\65\5\65\u029c\n\65\3\66\3\66\3\67\3\67\3\67\3\67\3\67\3\67\3\67"+
		"\3\67\3\67\3\67\3\67\3\67\3\67\3\67\3\67\5\67\u02af\n\67\38\38\38\38\3"+
		"8\38\38\38\38\39\39\39\39\39\39\39\39\39\39\39\39\39\39\39\39\39\39\3"+
		"9\59\u02cd\n9\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3"+
		":\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3:\3"+
		":\3:\3:\3:\3:\3:\5:\u02fe\n:\3;\3;\3;\3;\3;\3<\3<\3<\3<\3<\3<\3<\3<\3"+
		"<\3=\3=\3>\3>\3>\3>\3>\3>\3>\3>\3>\3?\3?\3?\3?\3?\3?\3?\3?\3?\3@\3@\3"+
		"@\3@\3@\3@\3@\3@\3@\3A\3A\3B\3B\3C\3C\3C\3C\3C\3C\3C\3C\3C\3C\3C\3C\3"+
		"C\3C\3D\3D\3D\3D\3D\3D\3D\3D\3D\3D\3D\3D\3D\3D\3E\3E\3E\3E\3E\3E\3E\3"+
		"E\3E\3F\3F\3F\3F\3F\3F\3F\3F\3F\3G\3G\3G\3G\3G\3H\3H\3H\3I\3I\3I\3I\7"+
		"I\u0369\nI\fI\16I\u036c\13I\3I\3I\3I\3J\3J\3K\3K\5K\u0375\nK\3L\3L\3L"+
		"\5L\u037a\nL\3M\3M\3N\3N\3N\3N\3N\5N\u0383\nN\3N\3N\3N\3N\3N\3N\3N\5N"+
		"\u038c\nN\3N\3N\3N\3N\3N\3N\3N\3N\3N\3N\3N\3N\3N\3N\3N\3N\3N\5N\u039f"+
		"\nN\3N\3N\3N\3N\5N\u03a5\nN\3N\3N\3N\3N\3N\3N\3N\3N\3N\5N\u03b0\nN\3O"+
		"\3O\3O\3O\3O\5O\u03b7\nO\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O\3O"+
		"\5O\u03c8\nO\3O\5O\u03cb\nO\3P\3P\3P\5P\u03d0\nP\3Q\3Q\5Q\u03d4\nQ\3R"+
		"\3R\3S\3S\3T\3T\3U\3U\3V\3V\3V\3V\3V\3V\5V\u03e4\nV\3V\3V\7V\u03e8\nV"+
		"\fV\16V\u03eb\13V\3V\3V\3V\3V\3V\3V\3V\3V\3V\3V\3V\3V\3V\3V\3V\3V\3V\3"+
		"V\3V\3V\3V\3V\3V\3V\5V\u0405\nV\3W\3W\3W\3W\3W\7W\u040c\nW\fW\16W\u040f"+
		"\13W\3W\3W\3W\3W\3W\3W\3W\3W\3W\5W\u041a\nW\3X\3X\3X\7X\u041f\nX\fX\16"+
		"X\u0422\13X\3Y\5Y\u0425\nY\3Y\3Y\3Y\5Y\u042a\nY\3Y\7Y\u042d\nY\fY\16Y"+
		"\u0430\13Y\3Z\3Z\3Z\7Z\u0435\nZ\fZ\16Z\u0438\13Z\3[\3[\3[\7[\u043d\n["+
		"\f[\16[\u0440\13[\3\\\5\\\u0443\n\\\3\\\3\\\3\\\3\\\3\\\3\\\3\\\3\\\5"+
		"\\\u044d\n\\\3]\6]\u0450\n]\r]\16]\u0451\3^\3^\3^\5^\u0457\n^\3_\5_\u045a"+
		"\n_\3_\5_\u045d\n_\3_\3_\3_\3_\7_\u0463\n_\f_\16_\u0466\13_\3_\5_\u0469"+
		"\n_\3`\3`\5`\u046d\n`\3a\3a\3a\3a\3a\3a\5a\u0475\na\3b\5b\u0478\nb\3b"+
		"\3b\3c\3c\3d\3d\3e\5e\u0481\ne\3e\3e\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f"+
		"\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f"+
		"\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\3f\5f\u04b9\nf\3g"+
		"\3g\3h\3h\3h\3h\3h\3h\3h\3h\5h\u04c5\nh\3h\3h\3h\7h\u04ca\nh\fh\16h\u04cd"+
		"\13h\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3"+
		"i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3"+
		"i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3"+
		"i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3"+
		"i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3"+
		"i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3"+
		"i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3"+
		"i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3i\3"+
		"i\3i\3i\3i\3i\5i\u058a\ni\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3"+
		"j\3j\5j\u059c\nj\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3j\3"+
		"j\3j\3j\3j\7j\u05b3\nj\fj\16j\u05b6\13j\3k\3k\3l\3l\3l\2\4\u00ce\u00d2"+
		"m\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDF"+
		"HJLNPRTVXZ\\^`bdfhjlnprtvxz|~\u0080\u0082\u0084\u0086\u0088\u008a\u008c"+
		"\u008e\u0090\u0092\u0094\u0096\u0098\u009a\u009c\u009e\u00a0\u00a2\u00a4"+
		"\u00a6\u00a8\u00aa\u00ac\u00ae\u00b0\u00b2\u00b4\u00b6\u00b8\u00ba\u00bc"+
		"\u00be\u00c0\u00c2\u00c4\u00c6\u00c8\u00ca\u00cc\u00ce\u00d0\u00d2\u00d4"+
		"\u00d6\2\17\4\2$$\u00cf\u00cf\4\2\30\30\32\32\3\2\u0089\u008a\3\2\u00d2"+
		"\u00d4\3\2\u00b7\u00b8\3\2fi\3\2\u00aa\u00af\3\2\u00b9\u00ba\3\2\u00b4"+
		"\u00b5\3\2\u00bb\u00bc\3\2\u00b1\u00b3\3\2:A\3\2B\\\2\u0644\2\u00db\3"+
		"\2\2\2\4\u00f5\3\2\2\2\6\u00fa\3\2\2\2\b\u0109\3\2\2\2\n\u010b\3\2\2\2"+
		"\f\u0113\3\2\2\2\16\u012e\3\2\2\2\20\u0130\3\2\2\2\22\u0132\3\2\2\2\24"+
		"\u0141\3\2\2\2\26\u0144\3\2\2\2\30\u014e\3\2\2\2\32\u0159\3\2\2\2\34\u015b"+
		"\3\2\2\2\36\u015f\3\2\2\2 \u0169\3\2\2\2\"\u0173\3\2\2\2$\u0183\3\2\2"+
		"\2&\u018f\3\2\2\2(\u0196\3\2\2\2*\u019d\3\2\2\2,\u01b5\3\2\2\2.\u01c4"+
		"\3\2\2\2\60\u01c7\3\2\2\2\62\u01ce\3\2\2\2\64\u01d7\3\2\2\2\66\u01d9\3"+
		"\2\2\28\u01de\3\2\2\2:\u01e0\3\2\2\2<\u01e2\3\2\2\2>\u01ef\3\2\2\2@\u01f4"+
		"\3\2\2\2B\u0200\3\2\2\2D\u0202\3\2\2\2F\u020a\3\2\2\2H\u020e\3\2\2\2J"+
		"\u0215\3\2\2\2L\u0218\3\2\2\2N\u021b\3\2\2\2P\u021d\3\2\2\2R\u0237\3\2"+
		"\2\2T\u023e\3\2\2\2V\u0240\3\2\2\2X\u0245\3\2\2\2Z\u0248\3\2\2\2\\\u024d"+
		"\3\2\2\2^\u0251\3\2\2\2`\u0273\3\2\2\2b\u0275\3\2\2\2d\u0280\3\2\2\2f"+
		"\u028b\3\2\2\2h\u029b\3\2\2\2j\u029d\3\2\2\2l\u02ae\3\2\2\2n\u02b0\3\2"+
		"\2\2p\u02cc\3\2\2\2r\u02fd\3\2\2\2t\u02ff\3\2\2\2v\u0304\3\2\2\2x\u030d"+
		"\3\2\2\2z\u030f\3\2\2\2|\u0318\3\2\2\2~\u0321\3\2\2\2\u0080\u032a\3\2"+
		"\2\2\u0082\u032c\3\2\2\2\u0084\u032e\3\2\2\2\u0086\u033c\3\2\2\2\u0088"+
		"\u034a\3\2\2\2\u008a\u0353\3\2\2\2\u008c\u035c\3\2\2\2\u008e\u0361\3\2"+
		"\2\2\u0090\u0364\3\2\2\2\u0092\u0370\3\2\2\2\u0094\u0374\3\2\2\2\u0096"+
		"\u0379\3\2\2\2\u0098\u037b\3\2\2\2\u009a\u03af\3\2\2\2\u009c\u03ca\3\2"+
		"\2\2\u009e\u03cf\3\2\2\2\u00a0\u03d3\3\2\2\2\u00a2\u03d5\3\2\2\2\u00a4"+
		"\u03d7\3\2\2\2\u00a6\u03d9\3\2\2\2\u00a8\u03db\3\2\2\2\u00aa\u0404\3\2"+
		"\2\2\u00ac\u0419\3\2\2\2\u00ae\u041b\3\2\2\2\u00b0\u0424\3\2\2\2\u00b2"+
		"\u0431\3\2\2\2\u00b4\u0439\3\2\2\2\u00b6\u044c\3\2\2\2\u00b8\u044f\3\2"+
		"\2\2\u00ba\u0456\3\2\2\2\u00bc\u0459\3\2\2\2\u00be\u046c\3\2\2\2\u00c0"+
		"\u0474\3\2\2\2\u00c2\u0477\3\2\2\2\u00c4\u047b\3\2\2\2\u00c6\u047d\3\2"+
		"\2\2\u00c8\u0480\3\2\2\2\u00ca\u04b8\3\2\2\2\u00cc\u04ba\3\2\2\2\u00ce"+
		"\u04c4\3\2\2\2\u00d0\u0589\3\2\2\2\u00d2\u059b\3\2\2\2\u00d4\u05b7\3\2"+
		"\2\2\u00d6\u05b9\3\2\2\2\u00d8\u00da\5\4\3\2\u00d9\u00d8\3\2\2\2\u00da"+
		"\u00dd\3\2\2\2\u00db\u00d9\3\2\2\2\u00db\u00dc\3\2\2\2\u00dc\u00de\3\2"+
		"\2\2\u00dd\u00db\3\2\2\2\u00de\u00df\7\2\2\3\u00df\3\3\2\2\2\u00e0\u00f6"+
		"\7\u00c3\2\2\u00e1\u00e3\5\n\6\2\u00e2\u00e1\3\2\2\2\u00e2\u00e3\3\2\2"+
		"\2\u00e3\u00e5\3\2\2\2\u00e4\u00e6\t\2\2\2\u00e5\u00e4\3\2\2\2\u00e5\u00e6"+
		"\3\2\2\2\u00e6\u00e7\3\2\2\2\u00e7\u00f6\7\u00c3\2\2\u00e8\u00ea\5\n\6"+
		"\2\u00e9\u00e8\3\2\2\2\u00e9\u00ea\3\2\2\2\u00ea\u00ec\3\2\2\2\u00eb\u00ed"+
		"\5\f\7\2\u00ec\u00eb\3\2\2\2\u00ed\u00ee\3\2\2\2\u00ee\u00ec\3\2\2\2\u00ee"+
		"\u00ef\3\2\2\2\u00ef\u00f1\3\2\2\2\u00f0\u00f2\t\2\2\2\u00f1\u00f0\3\2"+
		"\2\2\u00f1\u00f2\3\2\2\2\u00f2\u00f3\3\2\2\2\u00f3\u00f4\7\u00c3\2\2\u00f4"+
		"\u00f6\3\2\2\2\u00f5\u00e0\3\2\2\2\u00f5\u00e2\3\2\2\2\u00f5\u00e9\3\2"+
		"\2\2\u00f6\5\3\2\2\2\u00f7\u00f9\5\f\7\2\u00f8\u00f7\3\2\2\2\u00f9\u00fc"+
		"\3\2\2\2\u00fa\u00f8\3\2\2\2\u00fa\u00fb\3\2\2\2\u00fb\7\3\2\2\2\u00fc"+
		"\u00fa\3\2\2\2\u00fd\u00ff\5\f\7\2\u00fe\u00fd\3\2\2\2\u00ff\u0102\3\2"+
		"\2\2\u0100\u00fe\3\2\2\2\u0100\u0101\3\2\2\2\u0101\u010a\3\2\2\2\u0102"+
		"\u0100\3\2\2\2\u0103\u0105\5\4\3\2\u0104\u0103\3\2\2\2\u0105\u0108\3\2"+
		"\2\2\u0106\u0104\3\2\2\2\u0106\u0107\3\2\2\2\u0107\u010a\3\2\2\2\u0108"+
		"\u0106\3\2\2\2\u0109\u0100\3\2\2\2\u0109\u0106\3\2\2\2\u010a\t\3\2\2\2"+
		"\u010b\u010c\7\u00db\2\2\u010c\13\3\2\2\2\u010d\u0114\7\u00c7\2\2\u010e"+
		"\u0114\5\16\b\2\u010f\u0114\5B\"\2\u0110\u0114\5R*\2\u0111\u0114\5T+\2"+
		"\u0112\u0114\5`\61\2\u0113\u010d\3\2\2\2\u0113\u010e\3\2\2\2\u0113\u010f"+
		"\3\2\2\2\u0113\u0110\3\2\2\2\u0113\u0111\3\2\2\2\u0113\u0112\3\2\2\2\u0114"+
		"\r\3\2\2\2\u0115\u012f\5\20\t\2\u0116\u012f\5\22\n\2\u0117\u012f\5\24"+
		"\13\2\u0118\u012f\5\26\f\2\u0119\u012f\5\30\r\2\u011a\u012f\5\32\16\2"+
		"\u011b\u012f\5\34\17\2\u011c\u012f\5\36\20\2\u011d\u012f\5 \21\2\u011e"+
		"\u012f\5\"\22\2\u011f\u012f\5$\23\2\u0120\u012f\5&\24\2\u0121\u012f\5"+
		"(\25\2\u0122\u012f\5*\26\2\u0123\u012f\5,\27\2\u0124\u012f\5.\30\2\u0125"+
		"\u012f\5\60\31\2\u0126\u012f\5\62\32\2\u0127\u012f\5\64\33\2\u0128\u012f"+
		"\5\66\34\2\u0129\u012f\58\35\2\u012a\u012f\5:\36\2\u012b\u012f\5<\37\2"+
		"\u012c\u012f\5> \2\u012d\u012f\5@!\2\u012e\u0115\3\2\2\2\u012e\u0116\3"+
		"\2\2\2\u012e\u0117\3\2\2\2\u012e\u0118\3\2\2\2\u012e\u0119\3\2\2\2\u012e"+
		"\u011a\3\2\2\2\u012e\u011b\3\2\2\2\u012e\u011c\3\2\2\2\u012e\u011d\3\2"+
		"\2\2\u012e\u011e\3\2\2\2\u012e\u011f\3\2\2\2\u012e\u0120\3\2\2\2\u012e"+
		"\u0121\3\2\2\2\u012e\u0122\3\2\2\2\u012e\u0123\3\2\2\2\u012e\u0124\3\2"+
		"\2\2\u012e\u0125\3\2\2\2\u012e\u0126\3\2\2\2\u012e\u0127\3\2\2\2\u012e"+
		"\u0128\3\2\2\2\u012e\u0129\3\2\2\2\u012e\u012a\3\2\2\2\u012e\u012b\3\2"+
		"\2\2\u012e\u012c\3\2\2\2\u012e\u012d\3\2\2\2\u012f\17\3\2\2\2\u0130\u0131"+
		"\7\3\2\2\u0131\21\3\2\2\2\u0132\u0133\7\4\2\2\u0133\u0134\5\u00be`\2\u0134"+
		"\u0135\7\34\2\2\u0135\u0137\7\u00c3\2\2\u0136\u0138\5\u0090I\2\u0137\u0136"+
		"\3\2\2\2\u0138\u0139\3\2\2\2\u0139\u0137\3\2\2\2\u0139\u013a\3\2\2\2\u013a"+
		"\u013d\3\2\2\2\u013b\u013c\7 \2\2\u013c\u013e\5\b\5\2\u013d\u013b\3\2"+
		"\2\2\u013d\u013e\3\2\2\2\u013e\u013f\3\2\2\2\u013f\u0140\7\13\2\2\u0140"+
		"\23\3\2\2\2\u0141\u0142\7\5\2\2\u0142\u0143\5\u00ceh\2\u0143\25\3\2\2"+
		"\2\u0144\u0145\7\6\2\2\u0145\u014a\5\u0094K\2\u0146\u0147\7\u00c8\2\2"+
		"\u0147\u0149\5\u0094K\2\u0148\u0146\3\2\2\2\u0149\u014c\3\2\2\2\u014a"+
		"\u0148\3\2\2\2\u014a\u014b\3\2\2\2\u014b\27\3\2\2\2\u014c\u014a\3\2\2"+
		"\2\u014d\u014f\7\31\2\2\u014e\u014d\3\2\2\2\u014e\u014f\3\2\2\2\u014f"+
		"\u0150\3\2\2\2\u0150\u0151\7\b\2\2\u0151\u0156\5\u00acW\2\u0152\u0153"+
		"\7\u00c8\2\2\u0153\u0155\5\u00acW\2\u0154\u0152\3\2\2\2\u0155\u0158\3"+
		"\2\2\2\u0156\u0154\3\2\2\2\u0156\u0157\3\2\2\2\u0157\31\3\2\2\2\u0158"+
		"\u0156\3\2\2\2\u0159\u015a\7\n\2\2\u015a\33\3\2\2\2\u015b\u015d\7\'\2"+
		"\2\u015c\u015e\5\u00be`\2\u015d\u015c\3\2\2\2\u015d\u015e\3\2\2\2\u015e"+
		"\35\3\2\2\2\u015f\u0160\7\7\2\2\u0160\u0161\5\u0092J\2\u0161\u0163\7\u00ca"+
		"\2\2\u0162\u0164\5\u00b0Y\2\u0163\u0162\3\2\2\2\u0163\u0164\3\2\2\2\u0164"+
		"\u0165\3\2\2\2\u0165\u0166\7\u00cc\2\2\u0166\u0167\5\b\5\2\u0167\u0168"+
		"\7\r\2\2\u0168\37\3\2\2\2\u0169\u016a\7\7\2\2\u016a\u016b\7\u00d1\2\2"+
		"\u016b\u016d\7\u00ca\2\2\u016c\u016e\5\u00b0Y\2\u016d\u016c\3\2\2\2\u016d"+
		"\u016e\3\2\2\2\u016e\u016f\3\2\2\2\u016f\u0170\7\u00cc\2\2\u0170\u0171"+
		"\5\b\5\2\u0171\u0172\7\16\2\2\u0172!\3\2\2\2\u0173\u0175\7\21\2\2\u0174"+
		"\u0176\7\31\2\2\u0175\u0174\3\2\2\2\u0175\u0176\3\2\2\2\u0176\u0177\3"+
		"\2\2\2\u0177\u0178\5\u00a0Q\2\u0178\u0179\7\u00aa\2\2\u0179\u017a\5\u00d2"+
		"j\2\u017a\u017b\7,\2\2\u017b\u017e\5\u00d2j\2\u017c\u017d\7)\2\2\u017d"+
		"\u017f\5\u00d2j\2\u017e\u017c\3\2\2\2\u017e\u017f\3\2\2\2\u017f\u0180"+
		"\3\2\2\2\u0180\u0181\5\b\5\2\u0181\u0182\7\33\2\2\u0182#\3\2\2\2\u0183"+
		"\u0185\7\21\2\2\u0184\u0186\7\31\2\2\u0185\u0184\3\2\2\2\u0185\u0186\3"+
		"\2\2\2\u0186\u0187\3\2\2\2\u0187\u0188\5\u009eP\2\u0188\u0189\7\25\2\2"+
		"\u0189\u018a\5\u009eP\2\u018a\u018b\7\u00ca\2\2\u018b\u018c\7\u00cc\2"+
		"\2\u018c\u018d\5\b\5\2\u018d\u018e\7\33\2\2\u018e%\3\2\2\2\u018f\u0190"+
		"\5\u0092J\2\u0190\u0192\7\u00ca\2\2\u0191\u0193\5\u00b2Z\2\u0192\u0191"+
		"\3\2\2\2\u0192\u0193\3\2\2\2\u0193\u0194\3\2\2\2\u0194\u0195\7\u00cc\2"+
		"\2\u0195\'\3\2\2\2\u0196\u0197\7\24\2\2\u0197\u0198\5\u00be`\2\u0198\u019b"+
		"\5\6\4\2\u0199\u019a\7\t\2\2\u019a\u019c\5\6\4\2\u019b\u0199\3\2\2\2\u019b"+
		"\u019c\3\2\2\2\u019c)\3\2\2\2\u019d\u019e\7\24\2\2\u019e\u019f\5\u00be"+
		"`\2\u019f\u01a0\7+\2\2\u01a0\u01a2\7\u00c3\2\2\u01a1\u01a3\5\4\3\2\u01a2"+
		"\u01a1\3\2\2\2\u01a3\u01a4\3\2\2\2\u01a4\u01a2\3\2\2\2\u01a4\u01a5\3\2"+
		"\2\2\u01a5\u01ad\3\2\2\2\u01a6\u01a7\7\t\2\2\u01a7\u01a9\7\u00c3\2\2\u01a8"+
		"\u01aa\5\4\3\2\u01a9\u01a8\3\2\2\2\u01aa\u01ab\3\2\2\2\u01ab\u01a9\3\2"+
		"\2\2\u01ab\u01ac\3\2\2\2\u01ac\u01ae\3\2\2\2\u01ad\u01a6\3\2\2\2\u01ad"+
		"\u01ae\3\2\2\2\u01ae\u01af\3\2\2\2\u01af\u01b0\7\f\2\2\u01b0+\3\2\2\2"+
		"\u01b1\u01b3\t\3\2\2\u01b2\u01b1\3\2\2\2\u01b2\u01b3\3\2\2\2\u01b3\u01b6"+
		"\3\2\2\2\u01b4\u01b6\7\31\2\2\u01b5\u01b2\3\2\2\2\u01b5\u01b4\3\2\2\2"+
		"\u01b6\u01b7\3\2\2\2\u01b7\u01b8\5\u00aaV\2\u01b8\u01b9\7\u00aa\2\2\u01b9"+
		"\u01c1\5\u00be`\2\u01ba\u01bb\7\u00c8\2\2\u01bb\u01bc\5\u00aaV\2\u01bc"+
		"\u01bd\7\u00aa\2\2\u01bd\u01be\5\u00be`\2\u01be\u01c0\3\2\2\2\u01bf\u01ba"+
		"\3\2\2\2\u01c0\u01c3\3\2\2\2\u01c1\u01bf\3\2\2\2\u01c1\u01c2\3\2\2\2\u01c2"+
		"-\3\2\2\2\u01c3\u01c1\3\2\2\2\u01c4\u01c5\7\37\2\2\u01c5\u01c6\5\u00ce"+
		"h\2\u01c6/\3\2\2\2\u01c7\u01c8\7\u00d1\2\2\u01c8\u01ca\7\u00ca\2\2\u01c9"+
		"\u01cb\5\u00b2Z\2\u01ca\u01c9\3\2\2\2\u01ca\u01cb\3\2\2\2\u01cb\u01cc"+
		"\3\2\2\2\u01cc\u01cd\7\u00cc\2\2\u01cd\61\3\2\2\2\u01ce\u01cf\7#\2\2\u01cf"+
		"\u01d4\5\u00aaV\2\u01d0\u01d1\7\u00c8\2\2\u01d1\u01d3\5\u00aaV\2\u01d2"+
		"\u01d0\3\2\2\2\u01d3\u01d6\3\2\2\2\u01d4\u01d2\3\2\2\2\u01d4\u01d5\3\2"+
		"\2\2\u01d5\63\3\2\2\2\u01d6\u01d4\3\2\2\2\u01d7\u01d8\7&\2\2\u01d8\65"+
		"\3\2\2\2\u01d9\u01da\7*\2\2\u01da\u01db\5\u009eP\2\u01db\u01dc\7\u00c8"+
		"\2\2\u01dc\u01dd\5\u009eP\2\u01dd\67\3\2\2\2\u01de\u01df\7.\2\2\u01df"+
		"9\3\2\2\2\u01e0\u01e1\7/\2\2\u01e1;\3\2\2\2\u01e2\u01e3\7\61\2\2\u01e3"+
		"\u01e4\5\u00a2R\2\u01e4\u01e5\7\u00ca\2\2\u01e5\u01ea\5\u009eP\2\u01e6"+
		"\u01e7\7\u00c8\2\2\u01e7\u01e9\5\u009eP\2\u01e8\u01e6\3\2\2\2\u01e9\u01ec"+
		"\3\2\2\2\u01ea\u01e8\3\2\2\2\u01ea\u01eb\3\2\2\2\u01eb\u01ed\3\2\2\2\u01ec"+
		"\u01ea\3\2\2\2\u01ed\u01ee\7\u00cc\2\2\u01ee=\3\2\2\2\u01ef\u01f0\7%\2"+
		"\2\u01f0\u01f1\5\b\5\2\u01f1\u01f2\7\62\2\2\u01f2\u01f3\5\u00be`\2\u01f3"+
		"?\3\2\2\2\u01f4\u01f5\7\64\2\2\u01f5\u01f6\5\u00be`\2\u01f6\u01f7\5\b"+
		"\5\2\u01f7\u01f8\7\17\2\2\u01f8A\3\2\2\2\u01f9\u0201\5D#\2\u01fa\u0201"+
		"\5F$\2\u01fb\u0201\5H%\2\u01fc\u0201\5J&\2\u01fd\u0201\5L\'\2\u01fe\u0201"+
		"\5N(\2\u01ff\u0201\5P)\2\u0200\u01f9\3\2\2\2\u0200\u01fa\3\2\2\2\u0200"+
		"\u01fb\3\2\2\2\u0200\u01fc\3\2\2\2\u0200\u01fd\3\2\2\2\u0200\u01fe\3\2"+
		"\2\2\u0200\u01ff\3\2\2\2\u0201C\3\2\2\2\u0202\u0206\7\27\2\2\u0203\u0204"+
		"\5\u00ceh\2\u0204\u0205\7\u00c8\2\2\u0205\u0207\3\2\2\2\u0206\u0203\3"+
		"\2\2\2\u0206\u0207\3\2\2\2\u0207\u0208\3\2\2\2\u0208\u0209\5\u00aeX\2"+
		"\u0209E\3\2\2\2\u020a\u020c\7!\2\2\u020b\u020d\5\u00bc_\2\u020c\u020b"+
		"\3\2\2\2\u020c\u020d\3\2\2\2\u020dG\3\2\2\2\u020e\u020f\7\65\2\2\u020f"+
		"\u0210\5\u00a4S\2\u0210\u0211\7\u00c8\2\2\u0211\u0212\5\u00a4S\2\u0212"+
		"\u0213\7\u00c8\2\2\u0213\u0214\5\u00a4S\2\u0214I\3\2\2\2\u0215\u0216\7"+
		"\66\2\2\u0216\u0217\5\u00d2j\2\u0217K\3\2\2\2\u0218\u0219\7\67\2\2\u0219"+
		"\u021a\5\u00d2j\2\u021aM\3\2\2\2\u021b\u021c\78\2\2\u021cO\3\2\2\2\u021d"+
		"\u021e\79\2\2\u021eQ\3\2\2\2\u021f\u0220\5\u00aaV\2\u0220\u0221\7\u00bf"+
		"\2\2\u0221\u0222\5\u00d2j\2\u0222\u0238\3\2\2\2\u0223\u0224\5\u00aaV\2"+
		"\u0224\u0225\7\u00c0\2\2\u0225\u0226\5\u00d2j\2\u0226\u0238\3\2\2\2\u0227"+
		"\u0228\5\u00aaV\2\u0228\u0229\7\u00bd\2\2\u0229\u022a\5\u00d2j\2\u022a"+
		"\u0238\3\2\2\2\u022b\u022c\5\u00aaV\2\u022c\u022d\7\u00be\2\2\u022d\u022e"+
		"\5\u00d2j\2\u022e\u0238\3\2\2\2\u022f\u0230\5\u00aaV\2\u0230\u0231\7\u00c1"+
		"\2\2\u0231\u0232\5\u00d2j\2\u0232\u0238\3\2\2\2\u0233\u0234\5\u00aaV\2"+
		"\u0234\u0235\7\u00c2\2\2\u0235\u0236\5\u00d2j\2\u0236\u0238\3\2\2\2\u0237"+
		"\u021f\3\2\2\2\u0237\u0223\3\2\2\2\u0237\u0227\3\2\2\2\u0237\u022b\3\2"+
		"\2\2\u0237\u022f\3\2\2\2\u0237\u0233\3\2\2\2\u0238S\3\2\2\2\u0239\u023f"+
		"\5V,\2\u023a\u023f\5X-\2\u023b\u023f\5Z.\2\u023c\u023f\5\\/\2\u023d\u023f"+
		"\5^\60\2\u023e\u0239\3\2\2\2\u023e\u023a\3\2\2\2\u023e\u023b\3\2\2\2\u023e"+
		"\u023c\3\2\2\2\u023e\u023d\3\2\2\2\u023fU\3\2\2\2\u0240\u0241\7k\2\2\u0241"+
		"\u0242\5\u00d2j\2\u0242\u0243\7\u00c8\2\2\u0243\u0244\5\u00d2j\2\u0244"+
		"W\3\2\2\2\u0245\u0246\7j\2\2\u0246\u0247\5\u00d2j\2\u0247Y\3\2\2\2\u0248"+
		"\u0249\7s\2\2\u0249\u024a\5\u00d2j\2\u024a\u024b\7\u00aa\2\2\u024b\u024c"+
		"\5\u00d2j\2\u024c[\3\2\2\2\u024d\u024e\7l\2\2\u024e\u024f\5\u00d2j\2\u024f"+
		"]\3\2\2\2\u0250\u0252\7\31\2\2\u0251\u0250\3\2\2\2\u0251\u0252\3\2\2\2"+
		"\u0252\u0253\3\2\2\2\u0253\u0254\5\u00a6T\2\u0254\u0255\7\u00ca\2\2\u0255"+
		"\u0256\7\u00cc\2\2\u0256\u0257\7\u00aa\2\2\u0257\u0258\7o\2\2\u0258\u0259"+
		"\7\u00ca\2\2\u0259\u025a\5\u00ceh\2\u025a\u025b\7\u00cc\2\2\u025b_\3\2"+
		"\2\2\u025c\u0274\5b\62\2\u025d\u0274\5d\63\2\u025e\u0274\5f\64\2\u025f"+
		"\u0274\5h\65\2\u0260\u0274\5j\66\2\u0261\u0274\5l\67\2\u0262\u0274\5n"+
		"8\2\u0263\u0274\5p9\2\u0264\u0274\5r:\2\u0265\u0274\5t;\2\u0266\u0274"+
		"\5v<\2\u0267\u0274\5x=\2\u0268\u0274\5z>\2\u0269\u0274\5|?\2\u026a\u0274"+
		"\5~@\2\u026b\u0274\5\u0080A\2\u026c\u0274\5\u0082B\2\u026d\u0274\5\u0084"+
		"C\2\u026e\u0274\5\u0086D\2\u026f\u0274\5\u0088E\2\u0270\u0274\5\u008a"+
		"F\2\u0271\u0274\5\u008cG\2\u0272\u0274\5\u008eH\2\u0273\u025c\3\2\2\2"+
		"\u0273\u025d\3\2\2\2\u0273\u025e\3\2\2\2\u0273\u025f\3\2\2\2\u0273\u0260"+
		"\3\2\2\2\u0273\u0261\3\2\2\2\u0273\u0262\3\2\2\2\u0273\u0263\3\2\2\2\u0273"+
		"\u0264\3\2\2\2\u0273\u0265\3\2\2\2\u0273\u0266\3\2\2\2\u0273\u0267\3\2"+
		"\2\2\u0273\u0268\3\2\2\2\u0273\u0269\3\2\2\2\u0273\u026a\3\2\2\2\u0273"+
		"\u026b\3\2\2\2\u0273\u026c\3\2\2\2\u0273\u026d\3\2\2\2\u0273\u026e\3\2"+
		"\2\2\u0273\u026f\3\2\2\2\u0273\u0270\3\2\2\2\u0273\u0271\3\2\2\2\u0273"+
		"\u0272\3\2\2\2\u0274a\3\2\2\2\u0275\u0276\7v\2\2\u0276c\3\2\2\2\u0277"+
		"\u0278\7y\2\2\u0278\u0281\5\u00d2j\2\u0279\u027a\7y\2\2\u027a\u027b\5"+
		"\u00d2j\2\u027b\u027c\7\u00c8\2\2\u027c\u027d\5\u00d2j\2\u027d\u027e\7"+
		"\u00c8\2\2\u027e\u027f\5\u00d2j\2\u027f\u0281\3\2\2\2\u0280\u0277\3\2"+
		"\2\2\u0280\u0279\3\2\2\2\u0281e\3\2\2\2\u0282\u0283\7z\2\2\u0283\u028c"+
		"\5\u00d2j\2\u0284\u0285\7z\2\2\u0285\u0286\5\u00d2j\2\u0286\u0287\7\u00c8"+
		"\2\2\u0287\u0288\5\u00d2j\2\u0288\u0289\7\u00c8\2\2\u0289\u028a\5\u00d2"+
		"j\2\u028a\u028c\3\2\2\2\u028b\u0282\3\2\2\2\u028b\u0284\3\2\2\2\u028c"+
		"g\3\2\2\2\u028d\u029c\7\177\2\2\u028e\u028f\7\177\2\2\u028f\u0290\5\u00d2"+
		"j\2\u0290\u0291\7\u00c8\2\2\u0291\u0292\5\u00d2j\2\u0292\u029c\3\2\2\2"+
		"\u0293\u0294\7\177\2\2\u0294\u029c\7t\2\2\u0295\u0296\7\177\2\2\u0296"+
		"\u0297\7t\2\2\u0297\u0298\5\u00d2j\2\u0298\u0299\7\u00c8\2\2\u0299\u029a"+
		"\5\u00d2j\2\u029a\u029c\3\2\2\2\u029b\u028d\3\2\2\2\u029b\u028e\3\2\2"+
		"\2\u029b\u0293\3\2\2\2\u029b\u0295\3\2\2\2\u029ci\3\2\2\2\u029d\u029e"+
		"\7}\2\2\u029ek\3\2\2\2\u029f\u02a0\7u\2\2\u02a0\u02a1\5\u00d2j\2\u02a1"+
		"\u02a2\7\u00c8\2\2\u02a2\u02a3\5\u00d2j\2\u02a3\u02a4\7\u00c8\2\2\u02a4"+
		"\u02a5\5\u00d2j\2\u02a5\u02af\3\2\2\2\u02a6\u02a7\7u\2\2\u02a7\u02a8\7"+
		"|\2\2\u02a8\u02a9\5\u00d2j\2\u02a9\u02aa\7\u00c8\2\2\u02aa\u02ab\5\u00d2"+
		"j\2\u02ab\u02ac\7\u00c8\2\2\u02ac\u02ad\5\u00d2j\2\u02ad\u02af\3\2\2\2"+
		"\u02ae\u029f\3\2\2\2\u02ae\u02a6\3\2\2\2\u02afm\3\2\2\2\u02b0\u02b1\7"+
		"\u0080\2\2\u02b1\u02b2\5\u00d2j\2\u02b2\u02b3\7\u00c8\2\2\u02b3\u02b4"+
		"\5\u00d2j\2\u02b4\u02b5\7\u00c8\2\2\u02b5\u02b6\5\u00d2j\2\u02b6\u02b7"+
		"\7\u00c8\2\2\u02b7\u02b8\5\u00d2j\2\u02b8o\3\2\2\2\u02b9\u02ba\7\u0082"+
		"\2\2\u02ba\u02bb\5\u00d2j\2\u02bb\u02bc\7\u00c8\2\2\u02bc\u02bd\5\u00d2"+
		"j\2\u02bd\u02be\7\u00c8\2\2\u02be\u02bf\5\u00d2j\2\u02bf\u02c0\7\u00c8"+
		"\2\2\u02c0\u02c1\5\u00d2j\2\u02c1\u02cd\3\2\2\2\u02c2\u02c3\7\u0082\2"+
		"\2\u02c3\u02c4\7|\2\2\u02c4\u02c5\5\u00d2j\2\u02c5\u02c6\7\u00c8\2\2\u02c6"+
		"\u02c7\5\u00d2j\2\u02c7\u02c8\7\u00c8\2\2\u02c8\u02c9\5\u00d2j\2\u02c9"+
		"\u02ca\7\u00c8\2\2\u02ca\u02cb\5\u00d2j\2\u02cb\u02cd\3\2\2\2\u02cc\u02b9"+
		"\3\2\2\2\u02cc\u02c2\3\2\2\2\u02cdq\3\2\2\2\u02ce\u02cf\7\u008b\2\2\u02cf"+
		"\u02d0\5\u00d2j\2\u02d0\u02d1\7\u00c8\2\2\u02d1\u02d2\5\u00d2j\2\u02d2"+
		"\u02d3\7\u00c8\2\2\u02d3\u02d4\5\u00d2j\2\u02d4\u02d5\7\u00c8\2\2\u02d5"+
		"\u02d6\5\u00d2j\2\u02d6\u02d7\7\u00c8\2\2\u02d7\u02d8\5\u00d2j\2\u02d8"+
		"\u02d9\7\u00c8\2\2\u02d9\u02da\5\u00d2j\2\u02da\u02fe\3\2\2\2\u02db\u02dc"+
		"\7\u008b\2\2\u02dc\u02dd\7|\2\2\u02dd\u02de\5\u00d2j\2\u02de\u02df\7\u00c8"+
		"\2\2\u02df\u02e0\5\u00d2j\2\u02e0\u02e1\7\u00c8\2\2\u02e1\u02e2\5\u00d2"+
		"j\2\u02e2\u02e3\7\u00c8\2\2\u02e3\u02e4\5\u00d2j\2\u02e4\u02e5\7\u00c8"+
		"\2\2\u02e5\u02e6\5\u00d2j\2\u02e6\u02e7\7\u00c8\2\2\u02e7\u02e8\5\u00d2"+
		"j\2\u02e8\u02fe\3\2\2\2\u02e9\u02ea\7\u008b\2\2\u02ea\u02eb\7h\2\2\u02eb"+
		"\u02ec\5\u00d2j\2\u02ec\u02ed\7\u00c8\2\2\u02ed\u02ee\5\u00d2j\2\u02ee"+
		"\u02ef\7\u00c8\2\2\u02ef\u02f0\5\u00d2j\2\u02f0\u02f1\7\u00c8\2\2\u02f1"+
		"\u02f2\5\u00d2j\2\u02f2\u02f3\7\u00c8\2\2\u02f3\u02f4\5\u00d2j\2\u02f4"+
		"\u02f5\7\u00c8\2\2\u02f5\u02f6\5\u00d2j\2\u02f6\u02f7\7\u00c8\2\2\u02f7"+
		"\u02f8\5\u00d2j\2\u02f8\u02f9\7\u00c8\2\2\u02f9\u02fa\5\u00d2j\2\u02fa"+
		"\u02fb\7\u00c8\2\2\u02fb\u02fc\5\u00d2j\2\u02fc\u02fe\3\2\2\2\u02fd\u02ce"+
		"\3\2\2\2\u02fd\u02db\3\2\2\2\u02fd\u02e9\3\2\2\2\u02fes\3\2\2\2\u02ff"+
		"\u0300\7\u0083\2\2\u0300\u0301\5\u00d2j\2\u0301\u0302\7\u00c8\2\2\u0302"+
		"\u0303\5\u00d2j\2\u0303u\3\2\2\2\u0304\u0305\7w\2\2\u0305\u0306\5\u00d2"+
		"j\2\u0306\u0307\7\u00c8\2\2\u0307\u0308\5\u00d2j\2\u0308\u0309\7\u00c8"+
		"\2\2\u0309\u030a\5\u00d2j\2\u030a\u030b\7\u00c8\2\2\u030b\u030c\5\u00d2"+
		"j\2\u030cw\3\2\2\2\u030d\u030e\7x\2\2\u030ey\3\2\2\2\u030f\u0310\7\u0087"+
		"\2\2\u0310\u0311\5\u00d2j\2\u0311\u0312\7\u00c8\2\2\u0312\u0313\5\u00d2"+
		"j\2\u0313\u0314\7\u00c8\2\2\u0314\u0315\5\u00d2j\2\u0315\u0316\7\u00c8"+
		"\2\2\u0316\u0317\5\u00ceh\2\u0317{\3\2\2\2\u0318\u0319\7\u0088\2\2\u0319"+
		"\u031a\5\u00d2j\2\u031a\u031b\7\u00c8\2\2\u031b\u031c\5\u00d2j\2\u031c"+
		"\u031d\7\u00c8\2\2\u031d\u031e\5\u00d2j\2\u031e\u031f\7\u00c8\2\2\u031f"+
		"\u0320\5\u00ceh\2\u0320}\3\2\2\2\u0321\u0322\t\4\2\2\u0322\u0323\5\u00d2"+
		"j\2\u0323\u0324\7\u00c8\2\2\u0324\u0325\5\u00d2j\2\u0325\u0326\7\u00c8"+
		"\2\2\u0326\u0327\5\u00d2j\2\u0327\u0328\7\u00c8\2\2\u0328\u0329\5\u00ce"+
		"h\2\u0329\177\3\2\2\2\u032a\u032b\7~\2\2\u032b\u0081\3\2\2\2\u032c\u032d"+
		"\7]\2\2\u032d\u0083\3\2\2\2\u032e\u032f\7^\2\2\u032f\u0330\5\u00a8U\2"+
		"\u0330\u0331\7\u00ca\2\2\u0331\u0332\5\u00d2j\2\u0332\u0333\7\u00cc\2"+
		"\2\u0333\u0334\7\u00c8\2\2\u0334\u0335\5\u00d2j\2\u0335\u0336\7\u00c8"+
		"\2\2\u0336\u0337\5\u00d2j\2\u0337\u0338\7\u00c8\2\2\u0338\u0339\5\u00d2"+
		"j\2\u0339\u033a\7\u00c8\2\2\u033a\u033b\5\u00d2j\2\u033b\u0085\3\2\2\2"+
		"\u033c\u033d\7_\2\2\u033d\u033e\5\u00a8U\2\u033e\u033f\7\u00ca\2\2\u033f"+
		"\u0340\5\u00d2j\2\u0340\u0341\7\u00cc\2\2\u0341\u0342\7\u00c8\2\2\u0342"+
		"\u0343\5\u00d2j\2\u0343\u0344\7\u00c8\2\2\u0344\u0345\5\u00d2j\2\u0345"+
		"\u0346\7\u00c8\2\2\u0346\u0347\5\u00d2j\2\u0347\u0348\7\u00c8\2\2\u0348"+
		"\u0349\5\u00d2j\2\u0349\u0087\3\2\2\2\u034a\u034b\7`\2\2\u034b\u034c\5"+
		"\u00d2j\2\u034c\u034d\7\u00c8\2\2\u034d\u034e\5\u00d2j\2\u034e\u034f\7"+
		"\u00c8\2\2\u034f\u0350\5\u00d2j\2\u0350\u0351\7\u00c8\2\2\u0351\u0352"+
		"\5\u00d2j\2\u0352\u0089\3\2\2\2\u0353\u0354\7a\2\2\u0354\u0355\5\u00d2"+
		"j\2\u0355\u0356\7\u00c8\2\2\u0356\u0357\5\u00d2j\2\u0357\u0358\7\u00c8"+
		"\2\2\u0358\u0359\5\u00d2j\2\u0359\u035a\7\u00c8\2\2\u035a\u035b\5\u00d2"+
		"j\2\u035b\u008b\3\2\2\2\u035c\u035d\7b\2\2\u035d\u035e\5\u00d2j\2\u035e"+
		"\u035f\7\u00c8\2\2\u035f\u0360\5\u00d2j\2\u0360\u008d\3\2\2\2\u0361\u0362"+
		"\7c\2\2\u0362\u0363\5\u00d2j\2\u0363\u008f\3\2\2\2\u0364\u0365\7\63\2"+
		"\2\u0365\u036a\5\u00be`\2\u0366\u0367\7\u00c8\2\2\u0367\u0369\5\u00be"+
		"`\2\u0368\u0366\3\2\2\2\u0369\u036c\3\2\2\2\u036a\u0368\3\2\2\2\u036a"+
		"\u036b\3\2\2\2\u036b\u036d\3\2\2\2\u036c\u036a\3\2\2\2\u036d\u036e\7\u00c7"+
		"\2\2\u036e\u036f\5\b\5\2\u036f\u0091\3\2\2\2\u0370\u0371\t\5\2\2\u0371"+
		"\u0093\3\2\2\2\u0372\u0375\5\u00c0a\2\u0373\u0375\5\u00ccg\2\u0374\u0372"+
		"\3\2\2\2\u0374\u0373\3\2\2\2\u0375\u0095\3\2\2\2\u0376\u037a\5\u009aN"+
		"\2\u0377\u037a\5\u009cO\2\u0378\u037a\5\u0098M\2\u0379\u0376\3\2\2\2\u0379"+
		"\u0377\3\2\2\2\u0379\u0378\3\2\2\2\u037a\u0097\3\2\2\2\u037b\u037c\5\u00a8"+
		"U\2\u037c\u0099\3\2\2\2\u037d\u037e\5\u00a2R\2\u037e\u037f\7\u00ca\2\2"+
		"\u037f\u0382\5\u00d2j\2\u0380\u0381\7\u00c8\2\2\u0381\u0383\5\u00d2j\2"+
		"\u0382\u0380\3\2\2\2\u0382\u0383\3\2\2\2\u0383\u0384\3\2\2\2\u0384\u0385"+
		"\7\u00cc\2\2\u0385\u03b0\3\2\2\2\u0386\u0387\5\u00a4S\2\u0387\u0388\7"+
		"\u00ca\2\2\u0388\u038b\5\u00d2j\2\u0389\u038a\7\u00c8\2\2\u038a\u038c"+
		"\5\u00d2j\2\u038b\u0389\3\2\2\2\u038b\u038c\3\2\2\2\u038c\u038d\3\2\2"+
		"\2\u038d\u038e\7\u00cc\2\2\u038e\u03b0\3\2\2\2\u038f\u0390\5\u0098M\2"+
		"\u0390\u0391\7\u00ca\2\2\u0391\u0392\5\u00d2j\2\u0392\u0393\7\u00cc\2"+
		"\2\u0393\u0394\5\u00a4S\2\u0394\u03b0\3\2\2\2\u0395\u0396\5\u0098M\2\u0396"+
		"\u0397\7\u00ca\2\2\u0397\u0398\5\u00d2j\2\u0398\u0399\7\u00cc\2\2\u0399"+
		"\u039a\5\u00a2R\2\u039a\u03b0\3\2\2\2\u039b\u039c\7\u00d3\2\2\u039c\u039e"+
		"\7\u00ca\2\2\u039d\u039f\5\u00b2Z\2\u039e\u039d\3\2\2\2\u039e\u039f\3"+
		"\2\2\2\u039f\u03a0\3\2\2\2\u03a0\u03b0\7\u00cc\2\2\u03a1\u03a2\7\u00d2"+
		"\2\2\u03a2\u03a4\7\u00ca\2\2\u03a3\u03a5\5\u00b2Z\2\u03a4\u03a3\3\2\2"+
		"\2\u03a4\u03a5\3\2\2\2\u03a5\u03a6\3\2\2\2\u03a6\u03b0\7\u00cc\2\2\u03a7"+
		"\u03b0\5\u00a2R\2\u03a8\u03b0\5\u00a4S\2\u03a9\u03aa\5\u0098M\2\u03aa"+
		"\u03ab\5\u00a2R\2\u03ab\u03b0\3\2\2\2\u03ac\u03ad\5\u0098M\2\u03ad\u03ae"+
		"\5\u00a4S\2\u03ae\u03b0\3\2\2\2\u03af\u037d\3\2\2\2\u03af\u0386\3\2\2"+
		"\2\u03af\u038f\3\2\2\2\u03af\u0395\3\2\2\2\u03af\u039b\3\2\2\2\u03af\u03a1"+
		"\3\2\2\2\u03af\u03a7\3\2\2\2\u03af\u03a8\3\2\2\2\u03af\u03a9\3\2\2\2\u03af"+
		"\u03ac\3\2\2\2\u03b0\u009b\3\2\2\2\u03b1\u03b2\5\u00a6T\2\u03b2\u03b3"+
		"\7\u00ca\2\2\u03b3\u03b6\5\u00d2j\2\u03b4\u03b5\7\u00c8\2\2\u03b5\u03b7"+
		"\5\u00d2j\2\u03b6\u03b4\3\2\2\2\u03b6\u03b7\3\2\2\2\u03b7\u03b8\3\2\2"+
		"\2\u03b8\u03b9\7\u00cc\2\2\u03b9\u03cb\3\2\2\2\u03ba\u03bb\5\u0098M\2"+
		"\u03bb\u03bc\7\u00ca\2\2\u03bc\u03bd\5\u00d2j\2\u03bd\u03be\7\u00cc\2"+
		"\2\u03be\u03bf\5\u00a6T\2\u03bf\u03cb\3\2\2\2\u03c0\u03cb\5\u00a6T\2\u03c1"+
		"\u03c2\5\u0098M\2\u03c2\u03c3\5\u00a6T\2\u03c3\u03cb\3\2\2\2\u03c4\u03c5"+
		"\7\u00d4\2\2\u03c5\u03c7\7\u00ca\2\2\u03c6\u03c8\5\u00b2Z\2\u03c7\u03c6"+
		"\3\2\2\2\u03c7\u03c8\3\2\2\2\u03c8\u03c9\3\2\2\2\u03c9\u03cb\7\u00cc\2"+
		"\2\u03ca\u03b1\3\2\2\2\u03ca\u03ba\3\2\2\2\u03ca\u03c0\3\2\2\2\u03ca\u03c1"+
		"\3\2\2\2\u03ca\u03c4\3\2\2\2\u03cb\u009d\3\2\2\2\u03cc\u03d0\5\u00a2R"+
		"\2\u03cd\u03d0\5\u00a4S\2\u03ce\u03d0\5\u00a6T\2\u03cf\u03cc\3\2\2\2\u03cf"+
		"\u03cd\3\2\2\2\u03cf\u03ce\3\2\2\2\u03d0\u009f\3\2\2\2\u03d1\u03d4\5\u00a2"+
		"R\2\u03d2\u03d4\5\u00a4S\2\u03d3\u03d1\3\2\2\2\u03d3\u03d2\3\2\2\2\u03d4"+
		"\u00a1\3\2\2\2\u03d5\u03d6\7\u00d5\2\2\u03d6\u00a3\3\2\2\2\u03d7\u03d8"+
		"\7\u00d6\2\2\u03d8\u00a5\3\2\2\2\u03d9\u03da\7\u00d7\2\2\u03da\u00a7\3"+
		"\2\2\2\u03db\u03dc\7\u00d8\2\2\u03dc\u00a9\3\2\2\2\u03dd\u0405\5\u009e"+
		"P\2\u03de\u03e9\5\u009eP\2\u03df\u03e0\7\u00ca\2\2\u03e0\u03e3\5\u00d2"+
		"j\2\u03e1\u03e2\7\u00c8\2\2\u03e2\u03e4\5\u00d2j\2\u03e3\u03e1\3\2\2\2"+
		"\u03e3\u03e4\3\2\2\2\u03e4\u03e5\3\2\2\2\u03e5\u03e6\7\u00cc\2\2\u03e6"+
		"\u03e8\3\2\2\2\u03e7\u03df\3\2\2\2\u03e8\u03eb\3\2\2\2\u03e9\u03e7\3\2"+
		"\2\2\u03e9\u03ea\3\2\2\2\u03ea\u0405\3\2\2\2\u03eb\u03e9\3\2\2\2\u03ec"+
		"\u03ed\5\u0098M\2\u03ed\u03ee\5\u00a2R\2\u03ee\u0405\3\2\2\2\u03ef\u03f0"+
		"\5\u0098M\2\u03f0\u03f1\5\u00a4S\2\u03f1\u0405\3\2\2\2\u03f2\u03f3\5\u0098"+
		"M\2\u03f3\u03f4\7\u00ca\2\2\u03f4\u03f5\5\u00d2j\2\u03f5\u03f6\7\u00cc"+
		"\2\2\u03f6\u03f7\5\u00a2R\2\u03f7\u0405\3\2\2\2\u03f8\u03f9\5\u0098M\2"+
		"\u03f9\u03fa\7\u00ca\2\2\u03fa\u03fb\5\u00d2j\2\u03fb\u03fc\7\u00cc\2"+
		"\2\u03fc\u03fd\5\u00a4S\2\u03fd\u0405\3\2\2\2\u03fe\u0405\5\u0098M\2\u03ff"+
		"\u0400\5\u0098M\2\u0400\u0401\7\u00ca\2\2\u0401\u0402\5\u00d2j\2\u0402"+
		"\u0403\7\u00cc\2\2\u0403\u0405\3\2\2\2\u0404\u03dd\3\2\2\2\u0404\u03de"+
		"\3\2\2\2\u0404\u03ec\3\2\2\2\u0404\u03ef\3\2\2\2\u0404\u03f2\3\2\2\2\u0404"+
		"\u03f8\3\2\2\2\u0404\u03fe\3\2\2\2\u0404\u03ff\3\2\2\2\u0405\u00ab\3\2"+
		"\2\2\u0406\u0407\5\u009eP\2\u0407\u0408\7\u00ca\2\2\u0408\u040d\5\u00d2"+
		"j\2\u0409\u040a\7\u00c8\2\2\u040a\u040c\5\u00d2j\2\u040b\u0409\3\2\2\2"+
		"\u040c\u040f\3\2\2\2\u040d\u040b\3\2\2\2\u040d\u040e\3\2\2\2\u040e\u0410"+
		"\3\2\2\2\u040f\u040d\3\2\2\2\u0410\u0411\7\u00cc\2\2\u0411\u041a\3\2\2"+
		"\2\u0412\u0413\5\u0098M\2\u0413\u0414\7\u00ca\2\2\u0414\u0415\5\u00d2"+
		"j\2\u0415\u0416\7\u00c8\2\2\u0416\u0417\5\u00a2R\2\u0417\u0418\7\u00cc"+
		"\2\2\u0418\u041a\3\2\2\2\u0419\u0406\3\2\2\2\u0419\u0412\3\2\2\2\u041a"+
		"\u00ad\3\2\2\2\u041b\u0420\5\u00aaV\2\u041c\u041d\7\u00c8\2\2\u041d\u041f"+
		"\5\u00aaV\2\u041e\u041c\3\2\2\2\u041f\u0422\3\2\2\2\u0420\u041e\3\2\2"+
		"\2\u0420\u0421\3\2\2\2\u0421\u00af\3\2\2\2\u0422\u0420\3\2\2\2\u0423\u0425"+
		"\7\'\2\2\u0424\u0423\3\2\2\2\u0424\u0425\3\2\2\2\u0425\u0426\3\2\2\2\u0426"+
		"\u042e\5\u009eP\2\u0427\u0429\7\u00c8\2\2\u0428\u042a\7\'\2\2\u0429\u0428"+
		"\3\2\2\2\u0429\u042a\3\2\2\2\u042a\u042b\3\2\2\2\u042b\u042d\5\u009eP"+
		"\2\u042c\u0427\3\2\2\2\u042d\u0430\3\2\2\2\u042e\u042c\3\2\2\2\u042e\u042f"+
		"\3\2\2\2\u042f\u00b1\3\2\2\2\u0430\u042e\3\2\2\2\u0431\u0436\5\u00be`"+
		"\2\u0432\u0433\7\u00c8\2\2\u0433\u0435\5\u00be`\2\u0434\u0432\3\2\2\2"+
		"\u0435\u0438\3\2\2\2\u0436\u0434\3\2\2\2\u0436\u0437\3\2\2\2\u0437\u00b3"+
		"\3\2\2\2\u0438\u0436\3\2\2\2\u0439\u043e\5\u00be`\2\u043a\u043b\7\u00c8"+
		"\2\2\u043b\u043d\5\u00be`\2\u043c\u043a\3\2\2\2\u043d\u0440\3\2\2\2\u043e"+
		"\u043c\3\2\2\2\u043e\u043f\3\2\2\2\u043f\u00b5\3\2\2\2\u0440\u043e\3\2"+
		"\2\2\u0441\u0443\7\u00c5\2\2\u0442\u0441\3\2\2\2\u0442\u0443\3\2\2\2\u0443"+
		"\u0444\3\2\2\2\u0444\u044d\5\u00be`\2\u0445\u0446\7(\2\2\u0446\u0447\7"+
		"\u00ca\2\2\u0447\u0448\5\u00d2j\2\u0448\u0449\7\u00cc\2\2\u0449\u044d"+
		"\3\2\2\2\u044a\u044b\7(\2\2\u044b\u044d\5\u00d2j\2\u044c\u0442\3\2\2\2"+
		"\u044c\u0445\3\2\2\2\u044c\u044a\3\2\2\2\u044d\u00b7\3\2\2\2\u044e\u0450"+
		"\7\u00c4\2\2\u044f\u044e\3\2\2\2\u0450\u0451\3\2\2\2\u0451\u044f\3\2\2"+
		"\2\u0451\u0452\3\2\2\2\u0452\u00b9\3\2\2\2\u0453\u0457\7\u00c8\2\2\u0454"+
		"\u0457\7\u00cd\2\2\u0455\u0457\5\u00b8]\2\u0456\u0453\3\2\2\2\u0456\u0454"+
		"\3\2\2\2\u0456\u0455\3\2\2\2\u0457\u00bb\3\2\2\2\u0458\u045a\5\u00b8]"+
		"\2\u0459\u0458\3\2\2\2\u0459\u045a\3\2\2\2\u045a\u045c\3\2\2\2\u045b\u045d"+
		"\7\u00cd\2\2\u045c\u045b\3\2\2\2\u045c\u045d\3\2\2\2\u045d\u045e\3\2\2"+
		"\2\u045e\u0464\5\u00b6\\\2\u045f\u0460\5\u00ba^\2\u0460\u0461\5\u00b6"+
		"\\\2\u0461\u0463\3\2\2\2\u0462\u045f\3\2\2\2\u0463\u0466\3\2\2\2\u0464"+
		"\u0462\3\2\2\2\u0464\u0465\3\2\2\2\u0465\u0468\3\2\2\2\u0466\u0464\3\2"+
		"\2\2\u0467\u0469\7\u00cd\2\2\u0468\u0467\3\2\2\2\u0468\u0469\3\2\2\2\u0469"+
		"\u00bd\3\2\2\2\u046a\u046d\5\u00d2j\2\u046b\u046d\5\u00ceh\2\u046c\u046a"+
		"\3\2\2\2\u046c\u046b\3\2\2\2\u046d\u00bf\3\2\2\2\u046e\u0475\5\u00c2b"+
		"\2\u046f\u0475\5\u00c8e\2\u0470\u0475\5\u00c4c\2\u0471\u0475\5\u00c6d"+
		"\2\u0472\u0475\5\u00d4k\2\u0473\u0475\5\u00d6l\2\u0474\u046e\3\2\2\2\u0474"+
		"\u046f\3\2\2\2\u0474\u0470\3\2\2\2\u0474\u0471\3\2\2\2\u0474\u0472\3\2"+
		"\2\2\u0474\u0473\3\2\2\2\u0475\u00c1\3\2\2\2\u0476\u0478\t\6\2\2\u0477"+
		"\u0476\3\2\2\2\u0477\u0478\3\2\2\2\u0478\u0479\3\2\2\2\u0479\u047a\7\u00db"+
		"\2\2\u047a\u00c3\3\2\2\2\u047b\u047c\7\u00d9\2\2\u047c\u00c5\3\2\2\2\u047d"+
		"\u047e\7\u00da\2\2\u047e\u00c7\3\2\2\2\u047f\u0481\t\6\2\2\u0480\u047f"+
		"\3\2\2\2\u0480\u0481\3\2\2\2\u0481\u0482\3\2\2\2\u0482\u0483\7\u00dc\2"+
		"\2\u0483\u00c9\3\2\2\2\u0484\u04b9\7\u00a0\2\2\u0485\u0486\7\u00a3\2\2"+
		"\u0486\u04b9\5\u00d2j\2\u0487\u0488\7\u00a3\2\2\u0488\u0489\7\u00ca\2"+
		"\2\u0489\u048a\5\u00d2j\2\u048a\u048b\7\u00cc\2\2\u048b\u04b9\3\2\2\2"+
		"\u048c\u048d\7\u00a4\2\2\u048d\u048e\7\u00ca\2\2\u048e\u048f\5\u00ceh"+
		"\2\u048f\u0490\7\u00c8\2\2\u0490\u0491\5\u00d2j\2\u0491\u0492\7\u00cc"+
		"\2\2\u0492\u04b9\3\2\2\2\u0493\u0494\7\u00a5\2\2\u0494\u0495\7\u00ca\2"+
		"\2\u0495\u0496\5\u00ceh\2\u0496\u0497\7\u00c8\2\2\u0497\u0498\5\u00d2"+
		"j\2\u0498\u0499\7\u00c8\2\2\u0499\u049a\5\u00d2j\2\u049a\u049b\7\u00cc"+
		"\2\2\u049b\u04b9\3\2\2\2\u049c\u049d\7\u00a5\2\2\u049d\u049e\7\u00ca\2"+
		"\2\u049e\u049f\5\u00ceh\2\u049f\u04a0\7\u00c8\2\2\u04a0\u04a1\5\u00d2"+
		"j\2\u04a1\u04a2\7\u00cc\2\2\u04a2\u04b9\3\2\2\2\u04a3\u04a4\7\u00a6\2"+
		"\2\u04a4\u04a5\7\u00ca\2\2\u04a5\u04a6\5\u00ceh\2\u04a6\u04a7\7\u00c8"+
		"\2\2\u04a7\u04a8\5\u00d2j\2\u04a8\u04a9\7\u00cc\2\2\u04a9\u04b9\3\2\2"+
		"\2\u04aa\u04ab\7\u00a1\2\2\u04ab\u04b9\5\u00d2j\2\u04ac\u04ad\7\u00a1"+
		"\2\2\u04ad\u04ae\7\u00c5\2\2\u04ae\u04b9\5\u00d2j\2\u04af\u04b0\7\u00a2"+
		"\2\2\u04b0\u04b1\7\u00ca\2\2\u04b1\u04b2\5\u00d2j\2\u04b2\u04b3\7\u00c8"+
		"\2\2\u04b3\u04b4\5\u00ceh\2\u04b4\u04b5\7\u00cc\2\2\u04b5\u04b9\3\2\2"+
		"\2\u04b6\u04b7\7\67\2\2\u04b7\u04b9\5\u00d2j\2\u04b8\u0484\3\2\2\2\u04b8"+
		"\u0485\3\2\2\2\u04b8\u0487\3\2\2\2\u04b8\u048c\3\2\2\2\u04b8\u0493\3\2"+
		"\2\2\u04b8\u049c\3\2\2\2\u04b8\u04a3\3\2\2\2\u04b8\u04aa\3\2\2\2\u04b8"+
		"\u04ac\3\2\2\2\u04b8\u04af\3\2\2\2\u04b8\u04b6\3\2\2\2\u04b9\u00cb\3\2"+
		"\2\2\u04ba\u04bb\7\u00d0\2\2\u04bb\u00cd\3\2\2\2\u04bc\u04bd\bh\1\2\u04bd"+
		"\u04be\7\u00ca\2\2\u04be\u04bf\5\u00ceh\2\u04bf\u04c0\7\u00cc\2\2\u04c0"+
		"\u04c5\3\2\2\2\u04c1\u04c5\5\u00caf\2\u04c2\u04c5\5\u009cO\2\u04c3\u04c5"+
		"\5\u00ccg\2\u04c4\u04bc\3\2\2\2\u04c4\u04c1\3\2\2\2\u04c4\u04c2\3\2\2"+
		"\2\u04c4\u04c3\3\2\2\2\u04c5\u04cb\3\2\2\2\u04c6\u04c7\f\5\2\2\u04c7\u04c8"+
		"\7\u00b7\2\2\u04c8\u04ca\5\u00ceh\6\u04c9\u04c6\3\2\2\2\u04ca\u04cd\3"+
		"\2\2\2\u04cb\u04c9\3\2\2\2\u04cb\u04cc\3\2\2\2\u04cc\u00cf\3\2\2\2\u04cd"+
		"\u04cb\3\2\2\2\u04ce\u058a\7\u008d\2\2\u04cf\u058a\7\20\2\2\u04d0\u058a"+
		"\7\60\2\2\u04d1\u058a\7\u008c\2\2\u04d2\u058a\7\u00a7\2\2\u04d3\u058a"+
		"\7\u00a8\2\2\u04d4\u058a\7\u00a9\2\2\u04d5\u04d6\7\u00a7\2\2\u04d6\u04d7"+
		"\7\u00ca\2\2\u04d7\u04d8\5\u00d2j\2\u04d8\u04d9\7\u00cc\2\2\u04d9\u058a"+
		"\3\2\2\2\u04da\u04db\7\u008f\2\2\u04db\u04dc\7\u00ca\2\2\u04dc\u04dd\5"+
		"\u00d2j\2\u04dd\u04de\7\u00cc\2\2\u04de\u058a\3\2\2\2\u04df\u04e0\7\u0090"+
		"\2\2\u04e0\u04e1\7\u00ca\2\2\u04e1\u04e2\5\u00d2j\2\u04e2\u04e3\7\u00cc"+
		"\2\2\u04e3\u058a\3\2\2\2\u04e4\u04e5\7\u0091\2\2\u04e5\u04e6\7\u00ca\2"+
		"\2\u04e6\u04e7\5\u00d2j\2\u04e7\u04e8\7\u00cc\2\2\u04e8\u058a\3\2\2\2"+
		"\u04e9\u04ea\7\u0092\2\2\u04ea\u04eb\7\u00ca\2\2\u04eb\u04ec\5\u00d2j"+
		"\2\u04ec\u04ed\7\u00cc\2\2\u04ed\u058a\3\2\2\2\u04ee\u04ef\7\u0093\2\2"+
		"\u04ef\u04f0\7\u00ca\2\2\u04f0\u04f1\5\u00d2j\2\u04f1\u04f2\7\u00cc\2"+
		"\2\u04f2\u058a\3\2\2\2\u04f3\u04f4\7\u0094\2\2\u04f4\u04f5\7\u00ca\2\2"+
		"\u04f5\u04f6\5\u00d2j\2\u04f6\u04f7\7\u00cc\2\2\u04f7\u058a\3\2\2\2\u04f8"+
		"\u04f9\7\u0095\2\2\u04f9\u04fa\7\u00ca\2\2\u04fa\u04fb\5\u00d2j\2\u04fb"+
		"\u04fc\7\u00cc\2\2\u04fc\u058a\3\2\2\2\u04fd\u04fe\7\u0096\2\2\u04fe\u04ff"+
		"\7\u00ca\2\2\u04ff\u0500\5\u00d2j\2\u0500\u0501\7\u00cc\2\2\u0501\u058a"+
		"\3\2\2\2\u0502\u0503\7\u0097\2\2\u0503\u0504\7\u00ca\2\2\u0504\u0505\5"+
		"\u00d2j\2\u0505\u0506\7\u00cc\2\2\u0506\u058a\3\2\2\2\u0507\u0508\7\u0098"+
		"\2\2\u0508\u0509\7\u00ca\2\2\u0509\u050a\5\u00d2j\2\u050a\u050b\7\u00cc"+
		"\2\2\u050b\u058a\3\2\2\2\u050c\u050d\7\u0099\2\2\u050d\u050e\7\u00ca\2"+
		"\2\u050e\u050f\5\u00d2j\2\u050f\u0510\7\u00cc\2\2\u0510\u058a\3\2\2\2"+
		"\u0511\u0512\7\u009a\2\2\u0512\u0513\7\u00ca\2\2\u0513\u0514\5\u00d2j"+
		"\2\u0514\u0515\7\u00cc\2\2\u0515\u058a\3\2\2\2\u0516\u0517\7\u008e\2\2"+
		"\u0517\u0518\7\u00ca\2\2\u0518\u0519\5\u00d2j\2\u0519\u051a\7\u00cc\2"+
		"\2\u051a\u058a\3\2\2\2\u051b\u051c\7\u009b\2\2\u051c\u051d\7\u00ca\2\2"+
		"\u051d\u051e\5\u00d2j\2\u051e\u051f\7\u00cc\2\2\u051f\u058a\3\2\2\2\u0520"+
		"\u058a\78\2\2\u0521\u0522\7\66\2\2\u0522\u058a\5\u00d2j\2\u0523\u0524"+
		"\7\26\2\2\u0524\u0525\7\u00ca\2\2\u0525\u0526\5\u00d2j\2\u0526\u0527\7"+
		"\u00cc\2\2\u0527\u058a\3\2\2\2\u0528\u0529\7\22\2\2\u0529\u052a\7\u00ca"+
		"\2\2\u052a\u052b\5\u00d2j\2\u052b\u052c\7\u00cc\2\2\u052c\u058a\3\2\2"+
		"\2\u052d\u058a\7\u0085\2\2\u052e\u058a\7\u0086\2\2\u052f\u0530\7\u0084"+
		"\2\2\u0530\u0531\7\u00ca\2\2\u0531\u0532\5\u00d2j\2\u0532\u0533\7\u00c8"+
		"\2\2\u0533\u0534\5\u00d2j\2\u0534\u0535\7\u00cc\2\2\u0535\u058a\3\2\2"+
		"\2\u0536\u0537\7y\2\2\u0537\u0538\7\u00ca\2\2\u0538\u0539\5\u00d2j\2\u0539"+
		"\u053a\7\u00c8\2\2\u053a\u053b\5\u00d2j\2\u053b\u053c\7\u00c8\2\2\u053c"+
		"\u053d\5\u00d2j\2\u053d\u053e\7\u00ca\2\2\u053e\u058a\3\2\2\2\u053f\u0540"+
		"\7\u0081\2\2\u0540\u058a\5\u00ceh\2\u0541\u0542\7{\2\2\u0542\u0543\5\u00d2"+
		"j\2\u0543\u0544\7\u00c8\2\2\u0544\u0545\5\u00d2j\2\u0545\u058a\3\2\2\2"+
		"\u0546\u0547\7d\2\2\u0547\u0548\5\u00a8U\2\u0548\u0549\7\u00c8\2\2\u0549"+
		"\u054a\5\u00a8U\2\u054a\u058a\3\2\2\2\u054b\u054c\7e\2\2\u054c\u054d\5"+
		"\u00d2j\2\u054d\u054e\7\u00c8\2\2\u054e\u054f\5\u00d2j\2\u054f\u0550\7"+
		"\u00c8\2\2\u0550\u0551\5\u00d2j\2\u0551\u0552\7\u00c8\2\2\u0552\u0553"+
		"\5\u00d2j\2\u0553\u0554\7\u00c8\2\2\u0554\u0555\5\u00d2j\2\u0555\u0556"+
		"\7\u00c8\2\2\u0556\u0557\5\u00d2j\2\u0557\u0558\7\u00c8\2\2\u0558\u0559"+
		"\5\u00d2j\2\u0559\u055a\7\u00c8\2\2\u055a\u055b\5\u00d2j\2\u055b\u055c"+
		"\7\u00c8\2\2\u055c\u055d\t\7\2\2\u055d\u058a\3\2\2\2\u055e\u055f\7j\2"+
		"\2\u055f\u058a\5\u00d2j\2\u0560\u0561\7m\2\2\u0561\u058a\5\u00d2j\2\u0562"+
		"\u0563\7p\2\2\u0563\u0564\7\u00ca\2\2\u0564\u0565\5\u00ceh\2\u0565\u0566"+
		"\7\u00cc\2\2\u0566\u058a\3\2\2\2\u0567\u0568\7q\2\2\u0568\u0569\7\u00ca"+
		"\2\2\u0569\u056a\5\u00ceh\2\u056a\u056b\7\u00cc\2\2\u056b\u058a\3\2\2"+
		"\2\u056c\u056d\7r\2\2\u056d\u056e\7\u00ca\2\2\u056e\u056f\5\u00ceh\2\u056f"+
		"\u0570\7\u00cc\2\2\u0570\u058a\3\2\2\2\u0571\u0572\7s\2\2\u0572\u058a"+
		"\5\u00d2j\2\u0573\u0574\7\u009c\2\2\u0574\u058a\5\u00ceh\2\u0575\u0576"+
		"\7\u009d\2\2\u0576\u058a\5\u00ceh\2\u0577\u0578\7\u009e\2\2\u0578\u0579"+
		"\7\u00ca\2\2\u0579\u057a\5\u00ceh\2\u057a\u057b\7\u00c8\2\2\u057b\u057c"+
		"\5\u00ceh\2\u057c\u057d\7\u00cc\2\2\u057d\u058a\3\2\2\2\u057e\u057f\7"+
		"\u009e\2\2\u057f\u0580\7\u00ca\2\2\u0580\u0581\5\u00ceh\2\u0581\u0582"+
		"\7\u00c8\2\2\u0582\u0583\5\u00ceh\2\u0583\u0584\7\u00c8\2\2\u0584\u0585"+
		"\5\u00d2j\2\u0585\u0586\7\u00cc\2\2\u0586\u058a\3\2\2\2\u0587\u0588\7"+
		"\u009f\2\2\u0588\u058a\5\u00ceh\2\u0589\u04ce\3\2\2\2\u0589\u04cf\3\2"+
		"\2\2\u0589\u04d0\3\2\2\2\u0589\u04d1\3\2\2\2\u0589\u04d2\3\2\2\2\u0589"+
		"\u04d3\3\2\2\2\u0589\u04d4\3\2\2\2\u0589\u04d5\3\2\2\2\u0589\u04da\3\2"+
		"\2\2\u0589\u04df\3\2\2\2\u0589\u04e4\3\2\2\2\u0589\u04e9\3\2\2\2\u0589"+
		"\u04ee\3\2\2\2\u0589\u04f3\3\2\2\2\u0589\u04f8\3\2\2\2\u0589\u04fd\3\2"+
		"\2\2\u0589\u0502\3\2\2\2\u0589\u0507\3\2\2\2\u0589\u050c\3\2\2\2\u0589"+
		"\u0511\3\2\2\2\u0589\u0516\3\2\2\2\u0589\u051b\3\2\2\2\u0589\u0520\3\2"+
		"\2\2\u0589\u0521\3\2\2\2\u0589\u0523\3\2\2\2\u0589\u0528\3\2\2\2\u0589"+
		"\u052d\3\2\2\2\u0589\u052e\3\2\2\2\u0589\u052f\3\2\2\2\u0589\u0536\3\2"+
		"\2\2\u0589\u053f\3\2\2\2\u0589\u0541\3\2\2\2\u0589\u0546\3\2\2\2\u0589"+
		"\u054b\3\2\2\2\u0589\u055e\3\2\2\2\u0589\u0560\3\2\2\2\u0589\u0562\3\2"+
		"\2\2\u0589\u0567\3\2\2\2\u0589\u056c\3\2\2\2\u0589\u0571\3\2\2\2\u0589"+
		"\u0573\3\2\2\2\u0589\u0575\3\2\2\2\u0589\u0577\3\2\2\2\u0589\u057e\3\2"+
		"\2\2\u0589\u0587\3\2\2\2\u058a\u00d1\3\2\2\2\u058b\u058c\bj\1\2\u058c"+
		"\u059c\5\u009aN\2\u058d\u059c\5\u00c0a\2\u058e\u058f\7\u00ca\2\2\u058f"+
		"\u0590\5\u00d2j\2\u0590\u0591\7\u00cc\2\2\u0591\u059c\3\2\2\2\u0592\u0593"+
		"\7\u00b8\2\2\u0593\u059c\5\u00d2j\r\u0594\u0595\7\u00b0\2\2\u0595\u059c"+
		"\5\u00d2j\f\u0596\u059c\5\u00d0i\2\u0597\u0598\5\u00ceh\2\u0598\u0599"+
		"\t\b\2\2\u0599\u059a\5\u00ceh\2\u059a\u059c\3\2\2\2\u059b\u058b\3\2\2"+
		"\2\u059b\u058d\3\2\2\2\u059b\u058e\3\2\2\2\u059b\u0592\3\2\2\2\u059b\u0594"+
		"\3\2\2\2\u059b\u0596\3\2\2\2\u059b\u0597\3\2\2\2\u059c\u05b4\3\2\2\2\u059d"+
		"\u059e\f\n\2\2\u059e\u059f\7\u00b6\2\2\u059f\u05b3\5\u00d2j\n\u05a0\u05a1"+
		"\f\t\2\2\u05a1\u05a2\t\t\2\2\u05a2\u05b3\5\u00d2j\n\u05a3\u05a4\f\b\2"+
		"\2\u05a4\u05a5\t\n\2\2\u05a5\u05b3\5\u00d2j\t\u05a6\u05a7\f\7\2\2\u05a7"+
		"\u05a8\t\6\2\2\u05a8\u05b3\5\u00d2j\b\u05a9\u05aa\f\6\2\2\u05aa\u05ab"+
		"\t\13\2\2\u05ab\u05b3\5\u00d2j\7\u05ac\u05ad\f\5\2\2\u05ad\u05ae\t\b\2"+
		"\2\u05ae\u05b3\5\u00d2j\6\u05af\u05b0\f\3\2\2\u05b0\u05b1\t\f\2\2\u05b1"+
		"\u05b3\5\u00d2j\4\u05b2\u059d\3\2\2\2\u05b2\u05a0\3\2\2\2\u05b2\u05a3"+
		"\3\2\2\2\u05b2\u05a6\3\2\2\2\u05b2\u05a9\3\2\2\2\u05b2\u05ac\3\2\2\2\u05b2"+
		"\u05af\3\2\2\2\u05b3\u05b6\3\2\2\2\u05b4\u05b2\3\2\2\2\u05b4\u05b5\3\2"+
		"\2\2\u05b5\u00d3\3\2\2\2\u05b6\u05b4\3\2\2\2\u05b7\u05b8\t\r\2\2\u05b8"+
		"\u00d5\3\2\2\2\u05b9\u05ba\t\16\2\2\u05ba\u00d7\3\2\2\2]\u00db\u00e2\u00e5"+
		"\u00e9\u00ee\u00f1\u00f5\u00fa\u0100\u0106\u0109\u0113\u012e\u0139\u013d"+
		"\u014a\u014e\u0156\u015d\u0163\u016d\u0175\u017e\u0185\u0192\u019b\u01a4"+
		"\u01ab\u01ad\u01b2\u01b5\u01c1\u01ca\u01d4\u01ea\u0200\u0206\u020c\u0237"+
		"\u023e\u0251\u0273\u0280\u028b\u029b\u02ae\u02cc\u02fd\u036a\u0374\u0379"+
		"\u0382\u038b\u039e\u03a4\u03af\u03b6\u03c7\u03ca\u03cf\u03d3\u03e3\u03e9"+
		"\u0404\u040d\u0419\u0420\u0424\u0429\u042e\u0436\u043e\u0442\u044c\u0451"+
		"\u0456\u0459\u045c\u0464\u0468\u046c\u0474\u0477\u0480\u04b8\u04c4\u04cb"+
		"\u0589\u059b\u05b2\u05b4";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}