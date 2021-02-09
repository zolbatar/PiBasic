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
		OF=26, OSCLI=27, OTHERWISE=28, PRINT=29, PROC=30, READ=31, REM=32, REPEAT=33, 
		RESTORE=34, RETURN=35, SPC=36, STEP=37, SWAP=38, THEN=39, TO=40, TRACEON=41, 
		TRACEOFF=42, TRUE=43, TYPE=44, UNTIL=45, WHEN=46, WHILE=47, MOUSE=48, 
		INKEY=49, INKEYS=50, GET=51, GETS=52, RED=53, GREEN=54, YELLOW=55, BLUE=56, 
		MAGENTA=57, CYAN=58, WHITE=59, BLACK=60, BGETH=61, BPUTH=62, CLOSEH=63, 
		EOFH=64, GETSH=65, LISTFILES=66, OPENIN=67, OPENOUT=68, OPENUP=69, PTRH=70, 
		BANKED=71, CIRCLE=72, CLS=73, CLIPON=74, CLIPOFF=75, COLOUR=76, COLOURBG=77, 
		FILL=78, FLIP=79, SHOWFPS=80, GRAPHICS=81, LINE=82, RECTANGLE=83, PLOT=84, 
		POINT=85, SHADED=86, TEXT=87, TEXTRIGHT=88, TEXTCENTRE=89, TEXTCENTER=90, 
		TRIANGLE=91, LOADTYPEFACE=92, CREATEFONT=93, TIME=94, PI=95, SQR=96, LN=97, 
		LOG=98, EXP=99, ATN=100, TAN=101, COS=102, SIN=103, ABS=104, ACS=105, 
		ASN=106, DEG=107, RAD=108, SGN=109, ASC=110, LEN=111, INSTR=112, VAL=113, 
		TIMES=114, STRS=115, STRINGS=116, CHRS=117, LEFTS=118, MIDS=119, RIGHTS=120, 
		RND=121, RND0=122, RND1=123, EQ=124, NE=125, GT=126, GE=127, LT=128, LE=129, 
		NOT=130, AND=131, OR=132, EOR=133, MOD=134, DIV=135, HAT=136, PLUS=137, 
		MINUS=138, MULTIPLY=139, DIVIDE=140, SHL=141, SHR=142, PLUS_E=143, MINUS_E=144, 
		MULTIPLY_E=145, DIVIDE_E=146, SHL_E=147, SHR_E=148, NEWLINE=149, TICK=150, 
		TILDE=151, HASH=152, COLON=153, COMMA=154, DOLLAR=155, LPAREN=156, PERCENT=157, 
		RPAREN=158, SEMICOLON=159, UNDERSCORE=160, COMMENT=161, STRINGLITERAL=162, 
		PROC_NAME=163, FN_INTEGER=164, FN_FLOAT=165, FN_STRING=166, VARIABLE_FLOAT=167, 
		VARIABLE_INTEGER=168, VARIABLE_STRING=169, VARIABLE_TYPE=170, NAME=171, 
		HEXNUMBER=172, BINARYNUMBER=173, NUMBER=174, FLOAT=175, WS=176;
	public static final int
		RULE_prog = 0, RULE_line = 1, RULE_content = 2, RULE_body = 3, RULE_linenumber = 4, 
		RULE_stmt = 5, RULE_when = 6, RULE_fnName = 7, RULE_literal = 8, RULE_var = 9, 
		RULE_typeVar = 10, RULE_numVar = 11, RULE_strVar = 12, RULE_justVar = 13, 
		RULE_justNumberVar = 14, RULE_varName = 15, RULE_varNameInteger = 16, 
		RULE_varNameString = 17, RULE_varNameType = 18, RULE_varDecl = 19, RULE_varDeclWithDimension = 20, 
		RULE_varList = 21, RULE_functionVarList = 22, RULE_functionParList = 23, 
		RULE_exprList = 24, RULE_printListItem = 25, RULE_printListTick = 26, 
		RULE_printListSeparator = 27, RULE_printList = 28, RULE_expr = 29, RULE_number = 30, 
		RULE_numberInteger = 31, RULE_numberHex = 32, RULE_numberBinary = 33, 
		RULE_numberFloat = 34, RULE_strFunc = 35, RULE_string = 36, RULE_strExpr = 37, 
		RULE_numFunc = 38, RULE_numExpr = 39, RULE_nestedExpr = 40, RULE_notExpr = 41, 
		RULE_numColours = 42, RULE_compare = 43;
	private static String[] makeRuleNames() {
		return new String[] {
			"prog", "line", "content", "body", "linenumber", "stmt", "when", "fnName", 
			"literal", "var", "typeVar", "numVar", "strVar", "justVar", "justNumberVar", 
			"varName", "varNameInteger", "varNameString", "varNameType", "varDecl", 
			"varDeclWithDimension", "varList", "functionVarList", "functionParList", 
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
			null, null, null, null, "'='", "'<>'", "'>'", "'>='", "'<'", "'<='", 
			null, null, null, null, null, null, "'^'", "'+'", "'-'", "'*'", "'/'", 
			"'<<'", "'>>'", "'+='", "'-='", "'*='", "'/='", "'<<='", "'>>='", null, 
			"'''", "'~'", "'#'", "':'", "','", "'$'", "'('", "'%'", "')'", "';'", 
			"'_'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "BREAKPOINT", "CASE", "CHAIN", "DATA", "DEF", "DIM", "ELSE", "END", 
			"ENDCASE", "ENDIF", "ENDFN", "ENDPROC", "ENDWHILE", "FALSE", "FOR", "FLOAT_TOKEN", 
			"FN", "IF", "IN", "INT", "INPUT", "GLOBAL", "LOCAL", "LET", "NEXT", "OF", 
			"OSCLI", "OTHERWISE", "PRINT", "PROC", "READ", "REM", "REPEAT", "RESTORE", 
			"RETURN", "SPC", "STEP", "SWAP", "THEN", "TO", "TRACEON", "TRACEOFF", 
			"TRUE", "TYPE", "UNTIL", "WHEN", "WHILE", "MOUSE", "INKEY", "INKEYS", 
			"GET", "GETS", "RED", "GREEN", "YELLOW", "BLUE", "MAGENTA", "CYAN", "WHITE", 
			"BLACK", "BGETH", "BPUTH", "CLOSEH", "EOFH", "GETSH", "LISTFILES", "OPENIN", 
			"OPENOUT", "OPENUP", "PTRH", "BANKED", "CIRCLE", "CLS", "CLIPON", "CLIPOFF", 
			"COLOUR", "COLOURBG", "FILL", "FLIP", "SHOWFPS", "GRAPHICS", "LINE", 
			"RECTANGLE", "PLOT", "POINT", "SHADED", "TEXT", "TEXTRIGHT", "TEXTCENTRE", 
			"TEXTCENTER", "TRIANGLE", "LOADTYPEFACE", "CREATEFONT", "TIME", "PI", 
			"SQR", "LN", "LOG", "EXP", "ATN", "TAN", "COS", "SIN", "ABS", "ACS", 
			"ASN", "DEG", "RAD", "SGN", "ASC", "LEN", "INSTR", "VAL", "TIMES", "STRS", 
			"STRINGS", "CHRS", "LEFTS", "MIDS", "RIGHTS", "RND", "RND0", "RND1", 
			"EQ", "NE", "GT", "GE", "LT", "LE", "NOT", "AND", "OR", "EOR", "MOD", 
			"DIV", "HAT", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "SHL", "SHR", "PLUS_E", 
			"MINUS_E", "MULTIPLY_E", "DIVIDE_E", "SHL_E", "SHR_E", "NEWLINE", "TICK", 
			"TILDE", "HASH", "COLON", "COMMA", "DOLLAR", "LPAREN", "PERCENT", "RPAREN", 
			"SEMICOLON", "UNDERSCORE", "COMMENT", "STRINGLITERAL", "PROC_NAME", "FN_INTEGER", 
			"FN_FLOAT", "FN_STRING", "VARIABLE_FLOAT", "VARIABLE_INTEGER", "VARIABLE_STRING", 
			"VARIABLE_TYPE", "NAME", "HEXNUMBER", "BINARYNUMBER", "NUMBER", "FLOAT", 
			"WS"
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
			setState(91);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << BGETH) | (1L << BPUTH) | (1L << CLOSEH))) != 0) || ((((_la - 70)) & ~0x3f) == 0 && ((1L << (_la - 70)) & ((1L << (PTRH - 70)) | (1L << (CIRCLE - 70)) | (1L << (CLS - 70)) | (1L << (CLIPON - 70)) | (1L << (CLIPOFF - 70)) | (1L << (COLOUR - 70)) | (1L << (COLOURBG - 70)) | (1L << (FLIP - 70)) | (1L << (SHOWFPS - 70)) | (1L << (GRAPHICS - 70)) | (1L << (LINE - 70)) | (1L << (RECTANGLE - 70)) | (1L << (PLOT - 70)) | (1L << (TEXT - 70)) | (1L << (TEXTRIGHT - 70)) | (1L << (TEXTCENTRE - 70)) | (1L << (TEXTCENTER - 70)) | (1L << (TRIANGLE - 70)))) != 0) || ((((_la - 149)) & ~0x3f) == 0 && ((1L << (_la - 149)) & ((1L << (NEWLINE - 149)) | (1L << (COLON - 149)) | (1L << (COMMENT - 149)) | (1L << (PROC_NAME - 149)) | (1L << (FN_INTEGER - 149)) | (1L << (FN_FLOAT - 149)) | (1L << (FN_STRING - 149)) | (1L << (VARIABLE_FLOAT - 149)) | (1L << (VARIABLE_INTEGER - 149)) | (1L << (VARIABLE_STRING - 149)) | (1L << (VARIABLE_TYPE - 149)) | (1L << (NUMBER - 149)))) != 0)) {
				{
				{
				setState(88);
				line();
				}
				}
				setState(93);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(94);
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
			setState(117);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(96);
				match(NEWLINE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(98);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(97);
					linenumber();
					}
				}

				setState(101);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REM || _la==COMMENT) {
					{
					setState(100);
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

				setState(103);
				match(NEWLINE);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(105);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NUMBER) {
					{
					setState(104);
					linenumber();
					}
				}

				setState(108); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(107);
					stmt();
					}
					}
					setState(110); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << BGETH) | (1L << BPUTH) | (1L << CLOSEH))) != 0) || ((((_la - 70)) & ~0x3f) == 0 && ((1L << (_la - 70)) & ((1L << (PTRH - 70)) | (1L << (CIRCLE - 70)) | (1L << (CLS - 70)) | (1L << (CLIPON - 70)) | (1L << (CLIPOFF - 70)) | (1L << (COLOUR - 70)) | (1L << (COLOURBG - 70)) | (1L << (FLIP - 70)) | (1L << (SHOWFPS - 70)) | (1L << (GRAPHICS - 70)) | (1L << (LINE - 70)) | (1L << (RECTANGLE - 70)) | (1L << (PLOT - 70)) | (1L << (TEXT - 70)) | (1L << (TEXTRIGHT - 70)) | (1L << (TEXTCENTRE - 70)) | (1L << (TEXTCENTER - 70)) | (1L << (TRIANGLE - 70)))) != 0) || ((((_la - 153)) & ~0x3f) == 0 && ((1L << (_la - 153)) & ((1L << (COLON - 153)) | (1L << (PROC_NAME - 153)) | (1L << (FN_INTEGER - 153)) | (1L << (FN_FLOAT - 153)) | (1L << (FN_STRING - 153)) | (1L << (VARIABLE_FLOAT - 153)) | (1L << (VARIABLE_INTEGER - 153)) | (1L << (VARIABLE_STRING - 153)) | (1L << (VARIABLE_TYPE - 153)))) != 0) );
				setState(113);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REM || _la==COMMENT) {
					{
					setState(112);
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

				setState(115);
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
			setState(122);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(119);
					stmt();
					}
					} 
				}
				setState(124);
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
			setState(137);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(128);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << BGETH) | (1L << BPUTH) | (1L << CLOSEH))) != 0) || ((((_la - 70)) & ~0x3f) == 0 && ((1L << (_la - 70)) & ((1L << (PTRH - 70)) | (1L << (CIRCLE - 70)) | (1L << (CLS - 70)) | (1L << (CLIPON - 70)) | (1L << (CLIPOFF - 70)) | (1L << (COLOUR - 70)) | (1L << (COLOURBG - 70)) | (1L << (FLIP - 70)) | (1L << (SHOWFPS - 70)) | (1L << (GRAPHICS - 70)) | (1L << (LINE - 70)) | (1L << (RECTANGLE - 70)) | (1L << (PLOT - 70)) | (1L << (TEXT - 70)) | (1L << (TEXTRIGHT - 70)) | (1L << (TEXTCENTRE - 70)) | (1L << (TEXTCENTER - 70)) | (1L << (TRIANGLE - 70)))) != 0) || ((((_la - 153)) & ~0x3f) == 0 && ((1L << (_la - 153)) & ((1L << (COLON - 153)) | (1L << (PROC_NAME - 153)) | (1L << (FN_INTEGER - 153)) | (1L << (FN_FLOAT - 153)) | (1L << (FN_STRING - 153)) | (1L << (VARIABLE_FLOAT - 153)) | (1L << (VARIABLE_INTEGER - 153)) | (1L << (VARIABLE_STRING - 153)) | (1L << (VARIABLE_TYPE - 153)))) != 0)) {
					{
					{
					setState(125);
					stmt();
					}
					}
					setState(130);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(134);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << BGETH) | (1L << BPUTH) | (1L << CLOSEH))) != 0) || ((((_la - 70)) & ~0x3f) == 0 && ((1L << (_la - 70)) & ((1L << (PTRH - 70)) | (1L << (CIRCLE - 70)) | (1L << (CLS - 70)) | (1L << (CLIPON - 70)) | (1L << (CLIPOFF - 70)) | (1L << (COLOUR - 70)) | (1L << (COLOURBG - 70)) | (1L << (FLIP - 70)) | (1L << (SHOWFPS - 70)) | (1L << (GRAPHICS - 70)) | (1L << (LINE - 70)) | (1L << (RECTANGLE - 70)) | (1L << (PLOT - 70)) | (1L << (TEXT - 70)) | (1L << (TEXTRIGHT - 70)) | (1L << (TEXTCENTRE - 70)) | (1L << (TEXTCENTER - 70)) | (1L << (TRIANGLE - 70)))) != 0) || ((((_la - 149)) & ~0x3f) == 0 && ((1L << (_la - 149)) & ((1L << (NEWLINE - 149)) | (1L << (COLON - 149)) | (1L << (COMMENT - 149)) | (1L << (PROC_NAME - 149)) | (1L << (FN_INTEGER - 149)) | (1L << (FN_FLOAT - 149)) | (1L << (FN_STRING - 149)) | (1L << (VARIABLE_FLOAT - 149)) | (1L << (VARIABLE_INTEGER - 149)) | (1L << (VARIABLE_STRING - 149)) | (1L << (VARIABLE_TYPE - 149)) | (1L << (NUMBER - 149)))) != 0)) {
					{
					{
					setState(131);
					line();
					}
					}
					setState(136);
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
			setState(139);
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
		public StmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stmt; }
	 
		public StmtContext() { }
		public void copyFrom(StmtContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class StmtPTRHContext extends StmtContext {
		public TerminalNode PTRH() { return getToken(DARICParser.PTRH, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode EQ() { return getToken(DARICParser.EQ, 0); }
		public StmtPTRHContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtPTRH(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtCASEContext extends StmtContext {
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
		public StmtCASEContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCASE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtTYPEContext extends StmtContext {
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
		public StmtTYPEContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtTYPE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtPRINTContext extends StmtContext {
		public TerminalNode PRINT() { return getToken(DARICParser.PRINT, 0); }
		public PrintListContext printList() {
			return getRuleContext(PrintListContext.class,0);
		}
		public StmtPRINTContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtPRINT(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtINPUTContext extends StmtContext {
		public TerminalNode INPUT() { return getToken(DARICParser.INPUT, 0); }
		public VarListContext varList() {
			return getRuleContext(VarListContext.class,0);
		}
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public StmtINPUTContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtINPUT(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtDATAContext extends StmtContext {
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
		public StmtDATAContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtDATA(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtGRAPHICSContext extends StmtContext {
		public TerminalNode GRAPHICS() { return getToken(DARICParser.GRAPHICS, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public TerminalNode BANKED() { return getToken(DARICParser.BANKED, 0); }
		public StmtGRAPHICSContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtGRAPHICS(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtLOCALContext extends StmtContext {
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
		public StmtLOCALContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtLOCAL(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtCOLOURContext extends StmtContext {
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
		public StmtCOLOURContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCOLOUR(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtTEXTCENTREContext extends StmtContext {
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
		public StmtTEXTCENTREContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtTEXTCENTRE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtMOUSEContext extends StmtContext {
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
		public StmtMOUSEContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtMOUSE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtCallFNContext extends StmtContext {
		public FnNameContext fnName() {
			return getRuleContext(FnNameContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public FunctionParListContext functionParList() {
			return getRuleContext(FunctionParListContext.class,0);
		}
		public StmtCallFNContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCallFN(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtLOCALDIMContext extends StmtContext {
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
		public StmtLOCALDIMContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtLOCALDIM(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtLETContext extends StmtContext {
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
		public TerminalNode LET() { return getToken(DARICParser.LET, 0); }
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public TerminalNode GLOBAL() { return getToken(DARICParser.GLOBAL, 0); }
		public StmtLETContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtLET(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtTRACEONContext extends StmtContext {
		public TerminalNode TRACEON() { return getToken(DARICParser.TRACEON, 0); }
		public StmtTRACEONContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtTRACEON(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtCIRCLEContext extends StmtContext {
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
		public StmtCIRCLEContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCIRCLE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtPLOTContext extends StmtContext {
		public TerminalNode PLOT() { return getToken(DARICParser.PLOT, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public StmtPLOTContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtPLOT(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtCLIPONContext extends StmtContext {
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
		public StmtCLIPONContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCLIPON(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtLISTFILESContext extends StmtContext {
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
		public StmtLISTFILESContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtLISTFILES(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtDIMContext extends StmtContext {
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
		public StmtDIMContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtDIM(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtBPUTHContext extends StmtContext {
		public TerminalNode BPUTH() { return getToken(DARICParser.BPUTH, 0); }
		public List<NumExprContext> numExpr() {
			return getRuleContexts(NumExprContext.class);
		}
		public NumExprContext numExpr(int i) {
			return getRuleContext(NumExprContext.class,i);
		}
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public StmtBPUTHContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtBPUTH(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtOperatorEqualContext extends StmtContext {
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
		public StmtOperatorEqualContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtOperatorEqual(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtIFContext extends StmtContext {
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
		public StmtIFContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtIF(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtDEFFNContext extends StmtContext {
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
		public StmtDEFFNContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtDEFFN(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtCOLOURBGContext extends StmtContext {
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
		public StmtCOLOURBGContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCOLOURBG(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtLINEContext extends StmtContext {
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
		public StmtLINEContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtLINE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtTRACEOFFContext extends StmtContext {
		public TerminalNode TRACEOFF() { return getToken(DARICParser.TRACEOFF, 0); }
		public StmtTRACEOFFContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtTRACEOFF(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtRESTOREContext extends StmtContext {
		public TerminalNode RESTORE() { return getToken(DARICParser.RESTORE, 0); }
		public StmtRESTOREContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtRESTORE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtCHAINContext extends StmtContext {
		public TerminalNode CHAIN() { return getToken(DARICParser.CHAIN, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public StmtCHAINContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCHAIN(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtFLIPContext extends StmtContext {
		public TerminalNode FLIP() { return getToken(DARICParser.FLIP, 0); }
		public StmtFLIPContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtFLIP(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtBGETHContext extends StmtContext {
		public TerminalNode BGETH() { return getToken(DARICParser.BGETH, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public StmtBGETHContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtBGETH(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtINKEYSContext extends StmtContext {
		public TerminalNode INKEYS() { return getToken(DARICParser.INKEYS, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public StmtINKEYSContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtINKEYS(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtCLSContext extends StmtContext {
		public TerminalNode CLS() { return getToken(DARICParser.CLS, 0); }
		public StmtCLSContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCLS(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtSHOWFPSContext extends StmtContext {
		public TerminalNode SHOWFPS() { return getToken(DARICParser.SHOWFPS, 0); }
		public StmtSHOWFPSContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtSHOWFPS(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtSWAPContext extends StmtContext {
		public TerminalNode SWAP() { return getToken(DARICParser.SWAP, 0); }
		public List<JustVarContext> justVar() {
			return getRuleContexts(JustVarContext.class);
		}
		public JustVarContext justVar(int i) {
			return getRuleContext(JustVarContext.class,i);
		}
		public TerminalNode COMMA() { return getToken(DARICParser.COMMA, 0); }
		public StmtSWAPContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtSWAP(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtINKEYContext extends StmtContext {
		public TerminalNode INKEY() { return getToken(DARICParser.INKEY, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public StmtINKEYContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtINKEY(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtGETSContext extends StmtContext {
		public TerminalNode GETS() { return getToken(DARICParser.GETS, 0); }
		public StmtGETSContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtGETS(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtREADContext extends StmtContext {
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
		public StmtREADContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtREAD(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtCallPROCContext extends StmtContext {
		public TerminalNode PROC_NAME() { return getToken(DARICParser.PROC_NAME, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public FunctionParListContext functionParList() {
			return getRuleContext(FunctionParListContext.class,0);
		}
		public StmtCallPROCContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCallPROC(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtWHILEContext extends StmtContext {
		public TerminalNode WHILE() { return getToken(DARICParser.WHILE, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public BodyContext body() {
			return getRuleContext(BodyContext.class,0);
		}
		public TerminalNode ENDWHILE() { return getToken(DARICParser.ENDWHILE, 0); }
		public StmtWHILEContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtWHILE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtCOLONContext extends StmtContext {
		public TerminalNode COLON() { return getToken(DARICParser.COLON, 0); }
		public StmtCOLONContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCOLON(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtCLOSEHContext extends StmtContext {
		public TerminalNode CLOSEH() { return getToken(DARICParser.CLOSEH, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public StmtCLOSEHContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCLOSEH(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtDEFPROCContext extends StmtContext {
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
		public StmtDEFPROCContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtDEFPROC(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtENDContext extends StmtContext {
		public TerminalNode END() { return getToken(DARICParser.END, 0); }
		public StmtENDContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtEND(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtRECTANGLEContext extends StmtContext {
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
		public StmtRECTANGLEContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtRECTANGLE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtOSCLIContext extends StmtContext {
		public TerminalNode OSCLI() { return getToken(DARICParser.OSCLI, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public StmtOSCLIContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtOSCLI(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtRETURNContext extends StmtContext {
		public TerminalNode RETURN() { return getToken(DARICParser.RETURN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public StmtRETURNContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtRETURN(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtTEXTRIGHTContext extends StmtContext {
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
		public StmtTEXTRIGHTContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtTEXTRIGHT(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtREPEATContext extends StmtContext {
		public TerminalNode REPEAT() { return getToken(DARICParser.REPEAT, 0); }
		public BodyContext body() {
			return getRuleContext(BodyContext.class,0);
		}
		public TerminalNode UNTIL() { return getToken(DARICParser.UNTIL, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public StmtREPEATContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtREPEAT(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtTRIANGLEContext extends StmtContext {
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
		public StmtTRIANGLEContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtTRIANGLE(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtTEXTContext extends StmtContext {
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
		public StmtTEXTContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtTEXT(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtBREAKPOINTContext extends StmtContext {
		public TerminalNode BREAKPOINT() { return getToken(DARICParser.BREAKPOINT, 0); }
		public StmtBREAKPOINTContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtBREAKPOINT(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtFORContext extends StmtContext {
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
		public StmtFORContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtFOR(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtFORINContext extends StmtContext {
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
		public StmtFORINContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtFORIN(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtIFMultilineContext extends StmtContext {
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
		public StmtIFMultilineContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtIFMultiline(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtGETContext extends StmtContext {
		public TerminalNode GET() { return getToken(DARICParser.GET, 0); }
		public StmtGETContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtGET(this);
			else return visitor.visitChildren(this);
		}
	}
	public static class StmtCLIPOFFContext extends StmtContext {
		public TerminalNode CLIPOFF() { return getToken(DARICParser.CLIPOFF, 0); }
		public StmtCLIPOFFContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof DARICVisitor ) return ((DARICVisitor<? extends T>)visitor).visitStmtCLIPOFF(this);
			else return visitor.visitChildren(this);
		}
	}

	public final StmtContext stmt() throws RecognitionException {
		StmtContext _localctx = new StmtContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_stmt);
		int _la;
		try {
			setState(615);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,40,_ctx) ) {
			case 1:
				_localctx = new StmtCOLONContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(141);
				match(COLON);
				}
				break;
			case 2:
				_localctx = new StmtBREAKPOINTContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(142);
				match(BREAKPOINT);
				}
				break;
			case 3:
				_localctx = new StmtCASEContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(143);
				match(CASE);
				setState(144);
				expr();
				setState(145);
				match(OF);
				setState(146);
				match(NEWLINE);
				setState(148); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(147);
					when();
					}
					}
					setState(150); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==WHEN );
				setState(154);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==OTHERWISE) {
					{
					setState(152);
					match(OTHERWISE);
					setState(153);
					body();
					}
				}

				setState(156);
				match(ENDCASE);
				}
				break;
			case 4:
				_localctx = new StmtCHAINContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(158);
				match(CHAIN);
				setState(159);
				strExpr(0);
				}
				break;
			case 5:
				_localctx = new StmtDATAContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(160);
				match(DATA);
				setState(161);
				literal();
				setState(166);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(162);
					match(COMMA);
					setState(163);
					literal();
					}
					}
					setState(168);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 6:
				_localctx = new StmtDIMContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(169);
				match(DIM);
				setState(170);
				varDeclWithDimension();
				setState(175);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(171);
					match(COMMA);
					setState(172);
					varDeclWithDimension();
					}
					}
					setState(177);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 7:
				_localctx = new StmtENDContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(178);
				match(END);
				}
				break;
			case 8:
				_localctx = new StmtRETURNContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(179);
				match(RETURN);
				setState(181);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
				case 1:
					{
					setState(180);
					expr();
					}
					break;
				}
				}
				break;
			case 9:
				_localctx = new StmtDEFFNContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(183);
				match(DEF);
				setState(184);
				fnName();
				setState(185);
				match(LPAREN);
				setState(187);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN || ((((_la - 167)) & ~0x3f) == 0 && ((1L << (_la - 167)) & ((1L << (VARIABLE_FLOAT - 167)) | (1L << (VARIABLE_INTEGER - 167)) | (1L << (VARIABLE_STRING - 167)))) != 0)) {
					{
					setState(186);
					functionVarList();
					}
				}

				setState(189);
				match(RPAREN);
				setState(190);
				body();
				setState(191);
				match(ENDFN);
				}
				break;
			case 10:
				_localctx = new StmtDEFPROCContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(193);
				match(DEF);
				setState(194);
				match(PROC_NAME);
				setState(195);
				match(LPAREN);
				setState(197);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN || ((((_la - 167)) & ~0x3f) == 0 && ((1L << (_la - 167)) & ((1L << (VARIABLE_FLOAT - 167)) | (1L << (VARIABLE_INTEGER - 167)) | (1L << (VARIABLE_STRING - 167)))) != 0)) {
					{
					setState(196);
					functionVarList();
					}
				}

				setState(199);
				match(RPAREN);
				setState(200);
				body();
				setState(201);
				match(ENDPROC);
				}
				break;
			case 11:
				_localctx = new StmtFORContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(203);
				match(FOR);
				setState(205);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LOCAL) {
					{
					setState(204);
					match(LOCAL);
					}
				}

				setState(207);
				justNumberVar();
				setState(208);
				match(EQ);
				setState(209);
				numExpr(0);
				setState(210);
				match(TO);
				setState(211);
				numExpr(0);
				setState(214);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==STEP) {
					{
					setState(212);
					match(STEP);
					setState(213);
					numExpr(0);
					}
				}

				setState(216);
				body();
				setState(217);
				match(NEXT);
				}
				break;
			case 12:
				_localctx = new StmtFORINContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(219);
				match(FOR);
				setState(221);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LOCAL) {
					{
					setState(220);
					match(LOCAL);
					}
				}

				setState(223);
				justVar();
				setState(224);
				match(IN);
				setState(225);
				justVar();
				setState(226);
				match(LPAREN);
				setState(227);
				match(RPAREN);
				setState(228);
				body();
				setState(229);
				match(NEXT);
				}
				break;
			case 13:
				_localctx = new StmtCallFNContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(231);
				fnName();
				setState(232);
				match(LPAREN);
				setState(234);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK) | (1L << BGETH))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (POINT - 64)) | (1L << (TIME - 64)) | (1L << (PI - 64)) | (1L << (SQR - 64)) | (1L << (LN - 64)) | (1L << (LOG - 64)) | (1L << (EXP - 64)) | (1L << (ATN - 64)) | (1L << (TAN - 64)) | (1L << (COS - 64)) | (1L << (SIN - 64)) | (1L << (ABS - 64)) | (1L << (ACS - 64)) | (1L << (ASN - 64)) | (1L << (DEG - 64)) | (1L << (RAD - 64)) | (1L << (SGN - 64)) | (1L << (ASC - 64)) | (1L << (LEN - 64)) | (1L << (INSTR - 64)) | (1L << (VAL - 64)) | (1L << (TIMES - 64)) | (1L << (STRS - 64)) | (1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (NOT - 130)) | (1L << (PLUS - 130)) | (1L << (MINUS - 130)) | (1L << (LPAREN - 130)) | (1L << (STRINGLITERAL - 130)) | (1L << (FN_INTEGER - 130)) | (1L << (FN_FLOAT - 130)) | (1L << (FN_STRING - 130)) | (1L << (VARIABLE_FLOAT - 130)) | (1L << (VARIABLE_INTEGER - 130)) | (1L << (VARIABLE_STRING - 130)) | (1L << (VARIABLE_TYPE - 130)) | (1L << (HEXNUMBER - 130)) | (1L << (BINARYNUMBER - 130)) | (1L << (NUMBER - 130)) | (1L << (FLOAT - 130)))) != 0)) {
					{
					setState(233);
					functionParList();
					}
				}

				setState(236);
				match(RPAREN);
				}
				break;
			case 14:
				_localctx = new StmtIFContext(_localctx);
				enterOuterAlt(_localctx, 14);
				{
				setState(238);
				match(IF);
				setState(239);
				expr();
				setState(241);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==THEN) {
					{
					setState(240);
					match(THEN);
					}
				}

				setState(243);
				((StmtIFContext)_localctx).t = content();
				setState(246);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,23,_ctx) ) {
				case 1:
					{
					setState(244);
					match(ELSE);
					setState(245);
					((StmtIFContext)_localctx).f = content();
					}
					break;
				}
				}
				break;
			case 15:
				_localctx = new StmtIFMultilineContext(_localctx);
				enterOuterAlt(_localctx, 15);
				{
				setState(248);
				match(IF);
				setState(249);
				expr();
				setState(251);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==THEN) {
					{
					setState(250);
					match(THEN);
					}
				}

				setState(253);
				match(NEWLINE);
				setState(255); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(254);
					((StmtIFMultilineContext)_localctx).t = line();
					}
					}
					setState(257); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << BGETH) | (1L << BPUTH) | (1L << CLOSEH))) != 0) || ((((_la - 70)) & ~0x3f) == 0 && ((1L << (_la - 70)) & ((1L << (PTRH - 70)) | (1L << (CIRCLE - 70)) | (1L << (CLS - 70)) | (1L << (CLIPON - 70)) | (1L << (CLIPOFF - 70)) | (1L << (COLOUR - 70)) | (1L << (COLOURBG - 70)) | (1L << (FLIP - 70)) | (1L << (SHOWFPS - 70)) | (1L << (GRAPHICS - 70)) | (1L << (LINE - 70)) | (1L << (RECTANGLE - 70)) | (1L << (PLOT - 70)) | (1L << (TEXT - 70)) | (1L << (TEXTRIGHT - 70)) | (1L << (TEXTCENTRE - 70)) | (1L << (TEXTCENTER - 70)) | (1L << (TRIANGLE - 70)))) != 0) || ((((_la - 149)) & ~0x3f) == 0 && ((1L << (_la - 149)) & ((1L << (NEWLINE - 149)) | (1L << (COLON - 149)) | (1L << (COMMENT - 149)) | (1L << (PROC_NAME - 149)) | (1L << (FN_INTEGER - 149)) | (1L << (FN_FLOAT - 149)) | (1L << (FN_STRING - 149)) | (1L << (VARIABLE_FLOAT - 149)) | (1L << (VARIABLE_INTEGER - 149)) | (1L << (VARIABLE_STRING - 149)) | (1L << (VARIABLE_TYPE - 149)) | (1L << (NUMBER - 149)))) != 0) );
				setState(266);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ELSE) {
					{
					setState(259);
					match(ELSE);
					setState(260);
					match(NEWLINE);
					setState(262); 
					_errHandler.sync(this);
					_la = _input.LA(1);
					do {
						{
						{
						setState(261);
						((StmtIFMultilineContext)_localctx).f = line();
						}
						}
						setState(264); 
						_errHandler.sync(this);
						_la = _input.LA(1);
					} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << OSCLI) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << SWAP) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << MOUSE) | (1L << INKEY) | (1L << INKEYS) | (1L << GET) | (1L << GETS) | (1L << BGETH) | (1L << BPUTH) | (1L << CLOSEH))) != 0) || ((((_la - 70)) & ~0x3f) == 0 && ((1L << (_la - 70)) & ((1L << (PTRH - 70)) | (1L << (CIRCLE - 70)) | (1L << (CLS - 70)) | (1L << (CLIPON - 70)) | (1L << (CLIPOFF - 70)) | (1L << (COLOUR - 70)) | (1L << (COLOURBG - 70)) | (1L << (FLIP - 70)) | (1L << (SHOWFPS - 70)) | (1L << (GRAPHICS - 70)) | (1L << (LINE - 70)) | (1L << (RECTANGLE - 70)) | (1L << (PLOT - 70)) | (1L << (TEXT - 70)) | (1L << (TEXTRIGHT - 70)) | (1L << (TEXTCENTRE - 70)) | (1L << (TEXTCENTER - 70)) | (1L << (TRIANGLE - 70)))) != 0) || ((((_la - 149)) & ~0x3f) == 0 && ((1L << (_la - 149)) & ((1L << (NEWLINE - 149)) | (1L << (COLON - 149)) | (1L << (COMMENT - 149)) | (1L << (PROC_NAME - 149)) | (1L << (FN_INTEGER - 149)) | (1L << (FN_FLOAT - 149)) | (1L << (FN_STRING - 149)) | (1L << (VARIABLE_FLOAT - 149)) | (1L << (VARIABLE_INTEGER - 149)) | (1L << (VARIABLE_STRING - 149)) | (1L << (VARIABLE_TYPE - 149)) | (1L << (NUMBER - 149)))) != 0) );
					}
				}

				setState(268);
				match(ENDIF);
				}
				break;
			case 16:
				_localctx = new StmtLETContext(_localctx);
				enterOuterAlt(_localctx, 16);
				{
				setState(271);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LET) {
					{
					setState(270);
					match(LET);
					}
				}

				setState(273);
				varDecl();
				setState(274);
				match(EQ);
				setState(275);
				expr();
				setState(283);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(276);
					match(COMMA);
					setState(277);
					varDecl();
					setState(278);
					match(EQ);
					setState(279);
					expr();
					}
					}
					setState(285);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 17:
				_localctx = new StmtLETContext(_localctx);
				enterOuterAlt(_localctx, 17);
				{
				setState(287);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==GLOBAL) {
					{
					setState(286);
					match(GLOBAL);
					}
				}

				setState(289);
				varDecl();
				setState(290);
				match(EQ);
				setState(291);
				expr();
				setState(299);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(292);
					match(COMMA);
					setState(293);
					varDecl();
					setState(294);
					match(EQ);
					setState(295);
					expr();
					}
					}
					setState(301);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 18:
				_localctx = new StmtLOCALContext(_localctx);
				enterOuterAlt(_localctx, 18);
				{
				setState(302);
				match(LOCAL);
				setState(303);
				varDecl();
				setState(304);
				match(EQ);
				setState(305);
				expr();
				setState(313);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(306);
					match(COMMA);
					setState(307);
					varDecl();
					setState(308);
					match(EQ);
					setState(309);
					expr();
					}
					}
					setState(315);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 19:
				_localctx = new StmtLOCALDIMContext(_localctx);
				enterOuterAlt(_localctx, 19);
				{
				setState(316);
				match(LOCAL);
				setState(317);
				match(DIM);
				setState(318);
				varDeclWithDimension();
				setState(323);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(319);
					match(COMMA);
					setState(320);
					varDeclWithDimension();
					}
					}
					setState(325);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 20:
				_localctx = new StmtOSCLIContext(_localctx);
				enterOuterAlt(_localctx, 20);
				{
				setState(326);
				match(OSCLI);
				setState(327);
				strExpr(0);
				}
				break;
			case 21:
				_localctx = new StmtCallPROCContext(_localctx);
				enterOuterAlt(_localctx, 21);
				{
				setState(328);
				match(PROC_NAME);
				setState(329);
				match(LPAREN);
				setState(331);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK) | (1L << BGETH))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (POINT - 64)) | (1L << (TIME - 64)) | (1L << (PI - 64)) | (1L << (SQR - 64)) | (1L << (LN - 64)) | (1L << (LOG - 64)) | (1L << (EXP - 64)) | (1L << (ATN - 64)) | (1L << (TAN - 64)) | (1L << (COS - 64)) | (1L << (SIN - 64)) | (1L << (ABS - 64)) | (1L << (ACS - 64)) | (1L << (ASN - 64)) | (1L << (DEG - 64)) | (1L << (RAD - 64)) | (1L << (SGN - 64)) | (1L << (ASC - 64)) | (1L << (LEN - 64)) | (1L << (INSTR - 64)) | (1L << (VAL - 64)) | (1L << (TIMES - 64)) | (1L << (STRS - 64)) | (1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (NOT - 130)) | (1L << (PLUS - 130)) | (1L << (MINUS - 130)) | (1L << (LPAREN - 130)) | (1L << (STRINGLITERAL - 130)) | (1L << (FN_INTEGER - 130)) | (1L << (FN_FLOAT - 130)) | (1L << (FN_STRING - 130)) | (1L << (VARIABLE_FLOAT - 130)) | (1L << (VARIABLE_INTEGER - 130)) | (1L << (VARIABLE_STRING - 130)) | (1L << (VARIABLE_TYPE - 130)) | (1L << (HEXNUMBER - 130)) | (1L << (BINARYNUMBER - 130)) | (1L << (NUMBER - 130)) | (1L << (FLOAT - 130)))) != 0)) {
					{
					setState(330);
					functionParList();
					}
				}

				setState(333);
				match(RPAREN);
				}
				break;
			case 22:
				_localctx = new StmtREADContext(_localctx);
				enterOuterAlt(_localctx, 22);
				{
				setState(334);
				match(READ);
				setState(335);
				varDecl();
				setState(340);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(336);
					match(COMMA);
					setState(337);
					varDecl();
					}
					}
					setState(342);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 23:
				_localctx = new StmtRESTOREContext(_localctx);
				enterOuterAlt(_localctx, 23);
				{
				setState(343);
				match(RESTORE);
				}
				break;
			case 24:
				_localctx = new StmtSWAPContext(_localctx);
				enterOuterAlt(_localctx, 24);
				{
				setState(344);
				match(SWAP);
				setState(345);
				justVar();
				setState(346);
				match(COMMA);
				setState(347);
				justVar();
				}
				break;
			case 25:
				_localctx = new StmtTRACEONContext(_localctx);
				enterOuterAlt(_localctx, 25);
				{
				setState(349);
				match(TRACEON);
				}
				break;
			case 26:
				_localctx = new StmtTRACEOFFContext(_localctx);
				enterOuterAlt(_localctx, 26);
				{
				setState(350);
				match(TRACEOFF);
				}
				break;
			case 27:
				_localctx = new StmtTYPEContext(_localctx);
				enterOuterAlt(_localctx, 27);
				{
				setState(351);
				match(TYPE);
				setState(352);
				varName();
				setState(353);
				match(LPAREN);
				setState(354);
				justVar();
				setState(359);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(355);
					match(COMMA);
					setState(356);
					justVar();
					}
					}
					setState(361);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(362);
				match(RPAREN);
				}
				break;
			case 28:
				_localctx = new StmtREPEATContext(_localctx);
				enterOuterAlt(_localctx, 28);
				{
				setState(364);
				match(REPEAT);
				setState(365);
				body();
				setState(366);
				match(UNTIL);
				setState(367);
				expr();
				}
				break;
			case 29:
				_localctx = new StmtWHILEContext(_localctx);
				enterOuterAlt(_localctx, 29);
				{
				setState(369);
				match(WHILE);
				setState(370);
				expr();
				setState(371);
				body();
				setState(372);
				match(ENDWHILE);
				}
				break;
			case 30:
				_localctx = new StmtINPUTContext(_localctx);
				enterOuterAlt(_localctx, 30);
				{
				setState(374);
				match(INPUT);
				setState(378);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,37,_ctx) ) {
				case 1:
					{
					setState(375);
					strExpr(0);
					setState(376);
					match(COMMA);
					}
					break;
				}
				setState(380);
				varList();
				}
				break;
			case 31:
				_localctx = new StmtPRINTContext(_localctx);
				enterOuterAlt(_localctx, 31);
				{
				setState(381);
				match(PRINT);
				setState(383);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
				case 1:
					{
					setState(382);
					printList();
					}
					break;
				}
				}
				break;
			case 32:
				_localctx = new StmtMOUSEContext(_localctx);
				enterOuterAlt(_localctx, 32);
				{
				setState(385);
				match(MOUSE);
				setState(386);
				varNameInteger();
				setState(387);
				match(COMMA);
				setState(388);
				varNameInteger();
				setState(389);
				match(COMMA);
				setState(390);
				varNameInteger();
				}
				break;
			case 33:
				_localctx = new StmtINKEYContext(_localctx);
				enterOuterAlt(_localctx, 33);
				{
				setState(392);
				match(INKEY);
				setState(393);
				numExpr(0);
				}
				break;
			case 34:
				_localctx = new StmtINKEYSContext(_localctx);
				enterOuterAlt(_localctx, 34);
				{
				setState(394);
				match(INKEYS);
				setState(395);
				numExpr(0);
				}
				break;
			case 35:
				_localctx = new StmtGETContext(_localctx);
				enterOuterAlt(_localctx, 35);
				{
				setState(396);
				match(GET);
				}
				break;
			case 36:
				_localctx = new StmtGETSContext(_localctx);
				enterOuterAlt(_localctx, 36);
				{
				setState(397);
				match(GETS);
				}
				break;
			case 37:
				_localctx = new StmtOperatorEqualContext(_localctx);
				enterOuterAlt(_localctx, 37);
				{
				setState(398);
				varDecl();
				setState(399);
				match(MULTIPLY_E);
				setState(400);
				numExpr(0);
				}
				break;
			case 38:
				_localctx = new StmtOperatorEqualContext(_localctx);
				enterOuterAlt(_localctx, 38);
				{
				setState(402);
				varDecl();
				setState(403);
				match(DIVIDE_E);
				setState(404);
				numExpr(0);
				}
				break;
			case 39:
				_localctx = new StmtOperatorEqualContext(_localctx);
				enterOuterAlt(_localctx, 39);
				{
				setState(406);
				varDecl();
				setState(407);
				match(PLUS_E);
				setState(408);
				numExpr(0);
				}
				break;
			case 40:
				_localctx = new StmtOperatorEqualContext(_localctx);
				enterOuterAlt(_localctx, 40);
				{
				setState(410);
				varDecl();
				setState(411);
				match(MINUS_E);
				setState(412);
				numExpr(0);
				}
				break;
			case 41:
				_localctx = new StmtOperatorEqualContext(_localctx);
				enterOuterAlt(_localctx, 41);
				{
				setState(414);
				varDecl();
				setState(415);
				match(SHL_E);
				setState(416);
				numExpr(0);
				}
				break;
			case 42:
				_localctx = new StmtOperatorEqualContext(_localctx);
				enterOuterAlt(_localctx, 42);
				{
				setState(418);
				varDecl();
				setState(419);
				match(SHR_E);
				setState(420);
				numExpr(0);
				}
				break;
			case 43:
				_localctx = new StmtBPUTHContext(_localctx);
				enterOuterAlt(_localctx, 43);
				{
				setState(422);
				match(BPUTH);
				setState(423);
				numExpr(0);
				setState(424);
				match(COMMA);
				setState(425);
				numExpr(0);
				}
				break;
			case 44:
				_localctx = new StmtBGETHContext(_localctx);
				enterOuterAlt(_localctx, 44);
				{
				setState(427);
				match(BGETH);
				setState(428);
				numExpr(0);
				}
				break;
			case 45:
				_localctx = new StmtPTRHContext(_localctx);
				enterOuterAlt(_localctx, 45);
				{
				setState(429);
				match(PTRH);
				setState(430);
				numExpr(0);
				setState(431);
				match(EQ);
				setState(432);
				numExpr(0);
				}
				break;
			case 46:
				_localctx = new StmtCLOSEHContext(_localctx);
				enterOuterAlt(_localctx, 46);
				{
				setState(434);
				match(CLOSEH);
				setState(435);
				numExpr(0);
				}
				break;
			case 47:
				_localctx = new StmtLISTFILESContext(_localctx);
				enterOuterAlt(_localctx, 47);
				{
				setState(437);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LOCAL) {
					{
					setState(436);
					match(LOCAL);
					}
				}

				setState(439);
				varNameString();
				setState(440);
				match(LPAREN);
				setState(441);
				match(RPAREN);
				setState(442);
				match(EQ);
				setState(443);
				match(LISTFILES);
				setState(444);
				match(LPAREN);
				setState(445);
				strExpr(0);
				setState(446);
				match(RPAREN);
				}
				break;
			case 48:
				_localctx = new StmtCLSContext(_localctx);
				enterOuterAlt(_localctx, 48);
				{
				setState(448);
				match(CLS);
				}
				break;
			case 49:
				_localctx = new StmtCOLOURContext(_localctx);
				enterOuterAlt(_localctx, 49);
				{
				setState(449);
				match(COLOUR);
				setState(450);
				numExpr(0);
				}
				break;
			case 50:
				_localctx = new StmtCOLOURContext(_localctx);
				enterOuterAlt(_localctx, 50);
				{
				setState(451);
				match(COLOUR);
				setState(452);
				numExpr(0);
				setState(453);
				match(COMMA);
				setState(454);
				numExpr(0);
				setState(455);
				match(COMMA);
				setState(456);
				numExpr(0);
				}
				break;
			case 51:
				_localctx = new StmtCOLOURBGContext(_localctx);
				enterOuterAlt(_localctx, 51);
				{
				setState(458);
				match(COLOURBG);
				setState(459);
				numExpr(0);
				}
				break;
			case 52:
				_localctx = new StmtCOLOURBGContext(_localctx);
				enterOuterAlt(_localctx, 52);
				{
				setState(460);
				match(COLOURBG);
				setState(461);
				numExpr(0);
				setState(462);
				match(COMMA);
				setState(463);
				numExpr(0);
				setState(464);
				match(COMMA);
				setState(465);
				numExpr(0);
				}
				break;
			case 53:
				_localctx = new StmtGRAPHICSContext(_localctx);
				enterOuterAlt(_localctx, 53);
				{
				setState(467);
				match(GRAPHICS);
				}
				break;
			case 54:
				_localctx = new StmtGRAPHICSContext(_localctx);
				enterOuterAlt(_localctx, 54);
				{
				setState(468);
				match(GRAPHICS);
				setState(469);
				numExpr(0);
				setState(470);
				match(COMMA);
				setState(471);
				numExpr(0);
				}
				break;
			case 55:
				_localctx = new StmtGRAPHICSContext(_localctx);
				enterOuterAlt(_localctx, 55);
				{
				setState(473);
				match(GRAPHICS);
				setState(474);
				match(BANKED);
				}
				break;
			case 56:
				_localctx = new StmtGRAPHICSContext(_localctx);
				enterOuterAlt(_localctx, 56);
				{
				setState(475);
				match(GRAPHICS);
				setState(476);
				match(BANKED);
				setState(477);
				numExpr(0);
				setState(478);
				match(COMMA);
				setState(479);
				numExpr(0);
				}
				break;
			case 57:
				_localctx = new StmtFLIPContext(_localctx);
				enterOuterAlt(_localctx, 57);
				{
				setState(481);
				match(FLIP);
				}
				break;
			case 58:
				_localctx = new StmtCIRCLEContext(_localctx);
				enterOuterAlt(_localctx, 58);
				{
				setState(482);
				match(CIRCLE);
				setState(483);
				numExpr(0);
				setState(484);
				match(COMMA);
				setState(485);
				numExpr(0);
				setState(486);
				match(COMMA);
				setState(487);
				numExpr(0);
				}
				break;
			case 59:
				_localctx = new StmtCIRCLEContext(_localctx);
				enterOuterAlt(_localctx, 59);
				{
				setState(489);
				match(CIRCLE);
				setState(490);
				match(FILL);
				setState(491);
				numExpr(0);
				setState(492);
				match(COMMA);
				setState(493);
				numExpr(0);
				setState(494);
				match(COMMA);
				setState(495);
				numExpr(0);
				}
				break;
			case 60:
				_localctx = new StmtLINEContext(_localctx);
				enterOuterAlt(_localctx, 60);
				{
				setState(497);
				match(LINE);
				setState(498);
				numExpr(0);
				setState(499);
				match(COMMA);
				setState(500);
				numExpr(0);
				setState(501);
				match(COMMA);
				setState(502);
				numExpr(0);
				setState(503);
				match(COMMA);
				setState(504);
				numExpr(0);
				}
				break;
			case 61:
				_localctx = new StmtRECTANGLEContext(_localctx);
				enterOuterAlt(_localctx, 61);
				{
				setState(506);
				match(RECTANGLE);
				setState(507);
				numExpr(0);
				setState(508);
				match(COMMA);
				setState(509);
				numExpr(0);
				setState(510);
				match(COMMA);
				setState(511);
				numExpr(0);
				setState(512);
				match(COMMA);
				setState(513);
				numExpr(0);
				}
				break;
			case 62:
				_localctx = new StmtRECTANGLEContext(_localctx);
				enterOuterAlt(_localctx, 62);
				{
				setState(515);
				match(RECTANGLE);
				setState(516);
				match(FILL);
				setState(517);
				numExpr(0);
				setState(518);
				match(COMMA);
				setState(519);
				numExpr(0);
				setState(520);
				match(COMMA);
				setState(521);
				numExpr(0);
				setState(522);
				match(COMMA);
				setState(523);
				numExpr(0);
				}
				break;
			case 63:
				_localctx = new StmtTRIANGLEContext(_localctx);
				enterOuterAlt(_localctx, 63);
				{
				setState(525);
				match(TRIANGLE);
				setState(526);
				numExpr(0);
				setState(527);
				match(COMMA);
				setState(528);
				numExpr(0);
				setState(529);
				match(COMMA);
				setState(530);
				numExpr(0);
				setState(531);
				match(COMMA);
				setState(532);
				numExpr(0);
				setState(533);
				match(COMMA);
				setState(534);
				numExpr(0);
				setState(535);
				match(COMMA);
				setState(536);
				numExpr(0);
				}
				break;
			case 64:
				_localctx = new StmtTRIANGLEContext(_localctx);
				enterOuterAlt(_localctx, 64);
				{
				setState(538);
				match(TRIANGLE);
				setState(539);
				match(FILL);
				setState(540);
				numExpr(0);
				setState(541);
				match(COMMA);
				setState(542);
				numExpr(0);
				setState(543);
				match(COMMA);
				setState(544);
				numExpr(0);
				setState(545);
				match(COMMA);
				setState(546);
				numExpr(0);
				setState(547);
				match(COMMA);
				setState(548);
				numExpr(0);
				setState(549);
				match(COMMA);
				setState(550);
				numExpr(0);
				}
				break;
			case 65:
				_localctx = new StmtTRIANGLEContext(_localctx);
				enterOuterAlt(_localctx, 65);
				{
				setState(552);
				match(TRIANGLE);
				setState(553);
				match(SHADED);
				setState(554);
				numExpr(0);
				setState(555);
				match(COMMA);
				setState(556);
				numExpr(0);
				setState(557);
				match(COMMA);
				setState(558);
				numExpr(0);
				setState(559);
				match(COMMA);
				setState(560);
				numExpr(0);
				setState(561);
				match(COMMA);
				setState(562);
				numExpr(0);
				setState(563);
				match(COMMA);
				setState(564);
				numExpr(0);
				setState(565);
				match(COMMA);
				setState(566);
				numExpr(0);
				setState(567);
				match(COMMA);
				setState(568);
				numExpr(0);
				setState(569);
				match(COMMA);
				setState(570);
				numExpr(0);
				}
				break;
			case 66:
				_localctx = new StmtPLOTContext(_localctx);
				enterOuterAlt(_localctx, 66);
				{
				setState(572);
				match(PLOT);
				setState(573);
				numExpr(0);
				setState(574);
				match(COMMA);
				setState(575);
				numExpr(0);
				}
				break;
			case 67:
				_localctx = new StmtCLIPONContext(_localctx);
				enterOuterAlt(_localctx, 67);
				{
				setState(577);
				match(CLIPON);
				setState(578);
				numExpr(0);
				setState(579);
				match(COMMA);
				setState(580);
				numExpr(0);
				setState(581);
				match(COMMA);
				setState(582);
				numExpr(0);
				setState(583);
				match(COMMA);
				setState(584);
				numExpr(0);
				}
				break;
			case 68:
				_localctx = new StmtCLIPOFFContext(_localctx);
				enterOuterAlt(_localctx, 68);
				{
				setState(586);
				match(CLIPOFF);
				}
				break;
			case 69:
				_localctx = new StmtTEXTContext(_localctx);
				enterOuterAlt(_localctx, 69);
				{
				setState(587);
				match(TEXT);
				setState(588);
				numExpr(0);
				setState(589);
				match(COMMA);
				setState(590);
				numExpr(0);
				setState(591);
				match(COMMA);
				setState(592);
				numExpr(0);
				setState(593);
				match(COMMA);
				setState(594);
				numExpr(0);
				}
				break;
			case 70:
				_localctx = new StmtTEXTRIGHTContext(_localctx);
				enterOuterAlt(_localctx, 70);
				{
				setState(596);
				match(TEXTRIGHT);
				setState(597);
				numExpr(0);
				setState(598);
				match(COMMA);
				setState(599);
				numExpr(0);
				setState(600);
				match(COMMA);
				setState(601);
				numExpr(0);
				setState(602);
				match(COMMA);
				setState(603);
				strExpr(0);
				}
				break;
			case 71:
				_localctx = new StmtTEXTCENTREContext(_localctx);
				enterOuterAlt(_localctx, 71);
				{
				setState(605);
				_la = _input.LA(1);
				if ( !(_la==TEXTCENTRE || _la==TEXTCENTER) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(606);
				numExpr(0);
				setState(607);
				match(COMMA);
				setState(608);
				numExpr(0);
				setState(609);
				match(COMMA);
				setState(610);
				numExpr(0);
				setState(611);
				match(COMMA);
				setState(612);
				strExpr(0);
				}
				break;
			case 72:
				_localctx = new StmtSHOWFPSContext(_localctx);
				enterOuterAlt(_localctx, 72);
				{
				setState(614);
				match(SHOWFPS);
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
		enterRule(_localctx, 12, RULE_when);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(617);
			match(WHEN);
			setState(618);
			expr();
			setState(623);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(619);
				match(COMMA);
				setState(620);
				expr();
				}
				}
				setState(625);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(626);
			match(COLON);
			setState(627);
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
		enterRule(_localctx, 14, RULE_fnName);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(629);
			_la = _input.LA(1);
			if ( !(((((_la - 164)) & ~0x3f) == 0 && ((1L << (_la - 164)) & ((1L << (FN_INTEGER - 164)) | (1L << (FN_FLOAT - 164)) | (1L << (FN_STRING - 164)))) != 0)) ) {
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
		enterRule(_localctx, 16, RULE_literal);
		try {
			setState(633);
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
				setState(631);
				number();
				}
				break;
			case STRINGLITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(632);
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
		enterRule(_localctx, 18, RULE_var);
		try {
			setState(638);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(635);
				numVar();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(636);
				strVar();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(637);
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
		enterRule(_localctx, 20, RULE_typeVar);
		try {
			_localctx = new TypeVarTypeContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(640);
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
		enterRule(_localctx, 22, RULE_numVar);
		int _la;
		try {
			setState(698);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,49,_ctx) ) {
			case 1:
				_localctx = new NumVarFloatArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(642);
				varName();
				setState(643);
				match(LPAREN);
				setState(644);
				numExpr(0);
				setState(647);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(645);
					match(COMMA);
					setState(646);
					numExpr(0);
					}
				}

				setState(649);
				match(RPAREN);
				}
				break;
			case 2:
				_localctx = new NumVarIntegerArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(651);
				varNameInteger();
				setState(652);
				match(LPAREN);
				setState(653);
				numExpr(0);
				setState(656);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(654);
					match(COMMA);
					setState(655);
					numExpr(0);
					}
				}

				setState(658);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new NumVarIntegerFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(660);
				typeVar();
				setState(661);
				match(LPAREN);
				setState(662);
				numExpr(0);
				setState(663);
				match(RPAREN);
				setState(664);
				varNameInteger();
				}
				break;
			case 4:
				_localctx = new NumVarFloatFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(666);
				typeVar();
				setState(667);
				match(LPAREN);
				setState(668);
				numExpr(0);
				setState(669);
				match(RPAREN);
				setState(670);
				varName();
				}
				break;
			case 5:
				_localctx = new NumVarFloatFNContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(672);
				match(FN_FLOAT);
				setState(673);
				match(LPAREN);
				setState(675);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK) | (1L << BGETH))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (POINT - 64)) | (1L << (TIME - 64)) | (1L << (PI - 64)) | (1L << (SQR - 64)) | (1L << (LN - 64)) | (1L << (LOG - 64)) | (1L << (EXP - 64)) | (1L << (ATN - 64)) | (1L << (TAN - 64)) | (1L << (COS - 64)) | (1L << (SIN - 64)) | (1L << (ABS - 64)) | (1L << (ACS - 64)) | (1L << (ASN - 64)) | (1L << (DEG - 64)) | (1L << (RAD - 64)) | (1L << (SGN - 64)) | (1L << (ASC - 64)) | (1L << (LEN - 64)) | (1L << (INSTR - 64)) | (1L << (VAL - 64)) | (1L << (TIMES - 64)) | (1L << (STRS - 64)) | (1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (NOT - 130)) | (1L << (PLUS - 130)) | (1L << (MINUS - 130)) | (1L << (LPAREN - 130)) | (1L << (STRINGLITERAL - 130)) | (1L << (FN_INTEGER - 130)) | (1L << (FN_FLOAT - 130)) | (1L << (FN_STRING - 130)) | (1L << (VARIABLE_FLOAT - 130)) | (1L << (VARIABLE_INTEGER - 130)) | (1L << (VARIABLE_STRING - 130)) | (1L << (VARIABLE_TYPE - 130)) | (1L << (HEXNUMBER - 130)) | (1L << (BINARYNUMBER - 130)) | (1L << (NUMBER - 130)) | (1L << (FLOAT - 130)))) != 0)) {
					{
					setState(674);
					functionParList();
					}
				}

				setState(677);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new NumVarIntegerFNContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(678);
				match(FN_INTEGER);
				setState(679);
				match(LPAREN);
				setState(681);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK) | (1L << BGETH))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (POINT - 64)) | (1L << (TIME - 64)) | (1L << (PI - 64)) | (1L << (SQR - 64)) | (1L << (LN - 64)) | (1L << (LOG - 64)) | (1L << (EXP - 64)) | (1L << (ATN - 64)) | (1L << (TAN - 64)) | (1L << (COS - 64)) | (1L << (SIN - 64)) | (1L << (ABS - 64)) | (1L << (ACS - 64)) | (1L << (ASN - 64)) | (1L << (DEG - 64)) | (1L << (RAD - 64)) | (1L << (SGN - 64)) | (1L << (ASC - 64)) | (1L << (LEN - 64)) | (1L << (INSTR - 64)) | (1L << (VAL - 64)) | (1L << (TIMES - 64)) | (1L << (STRS - 64)) | (1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (NOT - 130)) | (1L << (PLUS - 130)) | (1L << (MINUS - 130)) | (1L << (LPAREN - 130)) | (1L << (STRINGLITERAL - 130)) | (1L << (FN_INTEGER - 130)) | (1L << (FN_FLOAT - 130)) | (1L << (FN_STRING - 130)) | (1L << (VARIABLE_FLOAT - 130)) | (1L << (VARIABLE_INTEGER - 130)) | (1L << (VARIABLE_STRING - 130)) | (1L << (VARIABLE_TYPE - 130)) | (1L << (HEXNUMBER - 130)) | (1L << (BINARYNUMBER - 130)) | (1L << (NUMBER - 130)) | (1L << (FLOAT - 130)))) != 0)) {
					{
					setState(680);
					functionParList();
					}
				}

				setState(683);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new NumVarStringFNContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(684);
				match(FN_STRING);
				setState(685);
				match(LPAREN);
				setState(687);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << FLOAT_TOKEN) | (1L << INT) | (1L << TRUE) | (1L << RED) | (1L << GREEN) | (1L << YELLOW) | (1L << BLUE) | (1L << MAGENTA) | (1L << CYAN) | (1L << WHITE) | (1L << BLACK) | (1L << BGETH))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (EOFH - 64)) | (1L << (OPENIN - 64)) | (1L << (OPENOUT - 64)) | (1L << (OPENUP - 64)) | (1L << (PTRH - 64)) | (1L << (POINT - 64)) | (1L << (TIME - 64)) | (1L << (PI - 64)) | (1L << (SQR - 64)) | (1L << (LN - 64)) | (1L << (LOG - 64)) | (1L << (EXP - 64)) | (1L << (ATN - 64)) | (1L << (TAN - 64)) | (1L << (COS - 64)) | (1L << (SIN - 64)) | (1L << (ABS - 64)) | (1L << (ACS - 64)) | (1L << (ASN - 64)) | (1L << (DEG - 64)) | (1L << (RAD - 64)) | (1L << (SGN - 64)) | (1L << (ASC - 64)) | (1L << (LEN - 64)) | (1L << (INSTR - 64)) | (1L << (VAL - 64)) | (1L << (TIMES - 64)) | (1L << (STRS - 64)) | (1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (NOT - 130)) | (1L << (PLUS - 130)) | (1L << (MINUS - 130)) | (1L << (LPAREN - 130)) | (1L << (STRINGLITERAL - 130)) | (1L << (FN_INTEGER - 130)) | (1L << (FN_FLOAT - 130)) | (1L << (FN_STRING - 130)) | (1L << (VARIABLE_FLOAT - 130)) | (1L << (VARIABLE_INTEGER - 130)) | (1L << (VARIABLE_STRING - 130)) | (1L << (VARIABLE_TYPE - 130)) | (1L << (HEXNUMBER - 130)) | (1L << (BINARYNUMBER - 130)) | (1L << (NUMBER - 130)) | (1L << (FLOAT - 130)))) != 0)) {
					{
					setState(686);
					functionParList();
					}
				}

				setState(689);
				match(RPAREN);
				}
				break;
			case 8:
				_localctx = new NumVarFloatContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(690);
				varName();
				}
				break;
			case 9:
				_localctx = new NumVarIntegerContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(691);
				varNameInteger();
				}
				break;
			case 10:
				_localctx = new NumVarFloatFieldContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(692);
				typeVar();
				setState(693);
				varName();
				}
				break;
			case 11:
				_localctx = new NumVarIntegerFieldContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(695);
				typeVar();
				setState(696);
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
		enterRule(_localctx, 24, RULE_strVar);
		int _la;
		try {
			setState(719);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,51,_ctx) ) {
			case 1:
				_localctx = new NumVarStringArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(700);
				varNameString();
				setState(701);
				match(LPAREN);
				setState(702);
				numExpr(0);
				setState(705);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(703);
					match(COMMA);
					setState(704);
					numExpr(0);
					}
				}

				setState(707);
				match(RPAREN);
				}
				break;
			case 2:
				_localctx = new NumVarStringFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(709);
				typeVar();
				setState(710);
				match(LPAREN);
				setState(711);
				numExpr(0);
				setState(712);
				match(RPAREN);
				setState(713);
				varNameString();
				}
				break;
			case 3:
				_localctx = new NumVarStringContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(715);
				varNameString();
				}
				break;
			case 4:
				_localctx = new NumVarStringFieldContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(716);
				typeVar();
				setState(717);
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
		enterRule(_localctx, 26, RULE_justVar);
		try {
			setState(724);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(721);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(722);
				varNameInteger();
				}
				break;
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(723);
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
		enterRule(_localctx, 28, RULE_justNumberVar);
		try {
			setState(728);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(726);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(727);
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
		enterRule(_localctx, 30, RULE_varName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(730);
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
		enterRule(_localctx, 32, RULE_varNameInteger);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(732);
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
		enterRule(_localctx, 34, RULE_varNameString);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(734);
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
		enterRule(_localctx, 36, RULE_varNameType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(736);
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
		enterRule(_localctx, 38, RULE_varDecl);
		int _la;
		try {
			setState(777);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,56,_ctx) ) {
			case 1:
				_localctx = new VarDeclIndContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(738);
				justVar();
				}
				break;
			case 2:
				_localctx = new VarDeclArrayedContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(739);
				justVar();
				setState(750);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==LPAREN) {
					{
					{
					setState(740);
					match(LPAREN);
					setState(741);
					numExpr(0);
					setState(744);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==COMMA) {
						{
						setState(742);
						match(COMMA);
						setState(743);
						numExpr(0);
						}
					}

					setState(746);
					match(RPAREN);
					}
					}
					setState(752);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 3:
				_localctx = new VarDeclTypeVarContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(753);
				typeVar();
				setState(754);
				varName();
				}
				break;
			case 4:
				_localctx = new VarDeclTypeVarContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(756);
				typeVar();
				setState(757);
				varNameInteger();
				}
				break;
			case 5:
				_localctx = new VarDeclTypeVarArrayedContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(759);
				typeVar();
				setState(760);
				match(LPAREN);
				setState(761);
				numExpr(0);
				setState(762);
				match(RPAREN);
				setState(763);
				varName();
				}
				break;
			case 6:
				_localctx = new VarDeclTypeVarArrayedContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(765);
				typeVar();
				setState(766);
				match(LPAREN);
				setState(767);
				numExpr(0);
				setState(768);
				match(RPAREN);
				setState(769);
				varNameInteger();
				}
				break;
			case 7:
				_localctx = new VarDeclTypeContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(771);
				typeVar();
				}
				break;
			case 8:
				_localctx = new VarDeclTypeArrayedContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(772);
				typeVar();
				setState(773);
				match(LPAREN);
				setState(774);
				numExpr(0);
				setState(775);
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
		enterRule(_localctx, 40, RULE_varDeclWithDimension);
		int _la;
		try {
			setState(798);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
			case VARIABLE_INTEGER:
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 1);
				{
				setState(779);
				justVar();
				setState(780);
				match(LPAREN);
				setState(781);
				numExpr(0);
				setState(786);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(782);
					match(COMMA);
					setState(783);
					numExpr(0);
					}
					}
					setState(788);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(789);
				match(RPAREN);
				}
				break;
			case VARIABLE_TYPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(791);
				typeVar();
				setState(792);
				match(LPAREN);
				setState(793);
				numExpr(0);
				setState(794);
				match(COMMA);
				setState(795);
				varName();
				setState(796);
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
		enterRule(_localctx, 42, RULE_varList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(800);
			varDecl();
			setState(805);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(801);
				match(COMMA);
				setState(802);
				varDecl();
				}
				}
				setState(807);
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
		enterRule(_localctx, 44, RULE_functionVarList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(809);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN) {
				{
				setState(808);
				match(RETURN);
				}
			}

			setState(811);
			justVar();
			setState(819);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(812);
				match(COMMA);
				setState(814);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN) {
					{
					setState(813);
					match(RETURN);
					}
				}

				setState(816);
				justVar();
				}
				}
				setState(821);
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
		enterRule(_localctx, 46, RULE_functionParList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(822);
			expr();
			setState(827);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(823);
				match(COMMA);
				setState(824);
				expr();
				}
				}
				setState(829);
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
		enterRule(_localctx, 48, RULE_exprList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(830);
			expr();
			setState(835);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(831);
				match(COMMA);
				setState(832);
				expr();
				}
				}
				setState(837);
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
		enterRule(_localctx, 50, RULE_printListItem);
		int _la;
		try {
			setState(849);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,66,_ctx) ) {
			case 1:
				_localctx = new PrintListExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(839);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TILDE) {
					{
					setState(838);
					match(TILDE);
					}
				}

				setState(841);
				expr();
				}
				break;
			case 2:
				_localctx = new PrintListSPCPContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(842);
				match(SPC);
				setState(843);
				match(LPAREN);
				setState(844);
				numExpr(0);
				setState(845);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new PrintListSPCContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(847);
				match(SPC);
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
		enterRule(_localctx, 52, RULE_printListTick);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(852); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(851);
				match(TICK);
				}
				}
				setState(854); 
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
		enterRule(_localctx, 54, RULE_printListSeparator);
		try {
			setState(859);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COMMA:
				enterOuterAlt(_localctx, 1);
				{
				setState(856);
				match(COMMA);
				}
				break;
			case SEMICOLON:
				enterOuterAlt(_localctx, 2);
				{
				setState(857);
				match(SEMICOLON);
				}
				break;
			case TICK:
				enterOuterAlt(_localctx, 3);
				{
				setState(858);
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
		enterRule(_localctx, 56, RULE_printList);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(862);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TICK) {
				{
				setState(861);
				printListTick();
				}
			}

			setState(865);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(864);
				((PrintListContext)_localctx).s1 = match(SEMICOLON);
				}
			}

			setState(867);
			printListItem();
			setState(873);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,71,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(868);
					printListSeparator();
					setState(869);
					printListItem();
					}
					} 
				}
				setState(875);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,71,_ctx);
			}
			setState(877);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(876);
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
		enterRule(_localctx, 58, RULE_expr);
		try {
			setState(881);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,73,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(879);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(880);
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
		enterRule(_localctx, 60, RULE_number);
		try {
			setState(888);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NUMBER:
				enterOuterAlt(_localctx, 1);
				{
				setState(883);
				numberInteger();
				}
				break;
			case PLUS:
			case MINUS:
			case FLOAT:
				enterOuterAlt(_localctx, 2);
				{
				setState(884);
				numberFloat();
				}
				break;
			case HEXNUMBER:
				enterOuterAlt(_localctx, 3);
				{
				setState(885);
				numberHex();
				}
				break;
			case BINARYNUMBER:
				enterOuterAlt(_localctx, 4);
				{
				setState(886);
				numberBinary();
				}
				break;
			case RED:
			case GREEN:
			case YELLOW:
			case BLUE:
			case MAGENTA:
			case CYAN:
			case WHITE:
			case BLACK:
				enterOuterAlt(_localctx, 5);
				{
				setState(887);
				numColours();
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

	public static class NumberIntegerContext extends ParserRuleContext {
		public TerminalNode NUMBER() { return getToken(DARICParser.NUMBER, 0); }
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
		enterRule(_localctx, 62, RULE_numberInteger);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(890);
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
		enterRule(_localctx, 64, RULE_numberHex);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(892);
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
		enterRule(_localctx, 66, RULE_numberBinary);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(894);
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
		enterRule(_localctx, 68, RULE_numberFloat);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(897);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(896);
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

			setState(899);
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
		enterRule(_localctx, 70, RULE_strFunc);
		try {
			setState(946);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,76,_ctx) ) {
			case 1:
				_localctx = new StrFuncTIMESContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(901);
				match(TIMES);
				}
				break;
			case 2:
				_localctx = new StrFuncCHRSContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(902);
				match(CHRS);
				setState(903);
				numExpr(0);
				}
				break;
			case 3:
				_localctx = new StrFuncLEFTSContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(904);
				match(LEFTS);
				setState(905);
				match(LPAREN);
				setState(906);
				strExpr(0);
				setState(907);
				match(COMMA);
				setState(908);
				numExpr(0);
				setState(909);
				match(RPAREN);
				}
				break;
			case 4:
				_localctx = new StrFuncMIDS3Context(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(911);
				match(MIDS);
				setState(912);
				match(LPAREN);
				setState(913);
				strExpr(0);
				setState(914);
				match(COMMA);
				setState(915);
				numExpr(0);
				setState(916);
				match(COMMA);
				setState(917);
				numExpr(0);
				setState(918);
				match(RPAREN);
				}
				break;
			case 5:
				_localctx = new StrFuncMIDS2Context(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(920);
				match(MIDS);
				setState(921);
				match(LPAREN);
				setState(922);
				strExpr(0);
				setState(923);
				match(COMMA);
				setState(924);
				numExpr(0);
				setState(925);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new StrFuncRIGHTSContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(927);
				match(RIGHTS);
				setState(928);
				match(LPAREN);
				setState(929);
				strExpr(0);
				setState(930);
				match(COMMA);
				setState(931);
				numExpr(0);
				setState(932);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new StrFuncSTRSContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(934);
				match(STRS);
				setState(935);
				numExpr(0);
				}
				break;
			case 8:
				_localctx = new StrFuncSTRSHEXContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(936);
				match(STRS);
				setState(937);
				match(TILDE);
				setState(938);
				numExpr(0);
				}
				break;
			case 9:
				_localctx = new StrFuncSTRINGSContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(939);
				match(STRINGS);
				setState(940);
				match(LPAREN);
				setState(941);
				numExpr(0);
				setState(942);
				match(COMMA);
				setState(943);
				strExpr(0);
				setState(944);
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
		enterRule(_localctx, 72, RULE_string);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(948);
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
		int _startState = 74;
		enterRecursionRule(_localctx, 74, RULE_strExpr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(958);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LPAREN:
				{
				setState(951);
				match(LPAREN);
				setState(952);
				strExpr(0);
				setState(953);
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
				setState(955);
				strFunc();
				}
				break;
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(956);
				strVar();
				}
				break;
			case STRINGLITERAL:
				{
				setState(957);
				string();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(965);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,78,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StrExprContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_strExpr);
					setState(960);
					if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
					setState(961);
					match(PLUS);
					setState(962);
					strExpr(4);
					}
					} 
				}
				setState(967);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,78,_ctx);
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
		enterRule(_localctx, 76, RULE_numFunc);
		try {
			setState(1062);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,79,_ctx) ) {
			case 1:
				_localctx = new NumFuncPIContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(968);
				match(PI);
				}
				break;
			case 2:
				_localctx = new NumFuncFALSEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(969);
				match(FALSE);
				}
				break;
			case 3:
				_localctx = new NumFuncTRUEContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(970);
				match(TRUE);
				}
				break;
			case 4:
				_localctx = new NumFuncTIMEContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(971);
				match(TIME);
				}
				break;
			case 5:
				_localctx = new NumFuncRNDContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(972);
				match(RND);
				}
				break;
			case 6:
				_localctx = new NumFuncRND0Context(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(973);
				match(RND0);
				}
				break;
			case 7:
				_localctx = new NumFuncRND1Context(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(974);
				match(RND1);
				}
				break;
			case 8:
				_localctx = new NumFuncRNDRANGEContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(975);
				match(RND);
				setState(976);
				match(LPAREN);
				setState(977);
				numExpr(0);
				setState(978);
				match(RPAREN);
				}
				break;
			case 9:
				_localctx = new NumFuncLNContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(980);
				match(LN);
				setState(981);
				numExpr(0);
				}
				break;
			case 10:
				_localctx = new NumFuncLOGContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(982);
				match(LOG);
				setState(983);
				numExpr(0);
				}
				break;
			case 11:
				_localctx = new NumFuncEXPContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(984);
				match(EXP);
				setState(985);
				numExpr(0);
				}
				break;
			case 12:
				_localctx = new NumFuncATNContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(986);
				match(ATN);
				setState(987);
				numExpr(0);
				}
				break;
			case 13:
				_localctx = new NumFuncTANContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(988);
				match(TAN);
				setState(989);
				numExpr(0);
				}
				break;
			case 14:
				_localctx = new NumFuncCOSContext(_localctx);
				enterOuterAlt(_localctx, 14);
				{
				setState(990);
				match(COS);
				setState(991);
				numExpr(0);
				}
				break;
			case 15:
				_localctx = new NumFuncSINContext(_localctx);
				enterOuterAlt(_localctx, 15);
				{
				setState(992);
				match(SIN);
				setState(993);
				numExpr(0);
				}
				break;
			case 16:
				_localctx = new NumFuncABSContext(_localctx);
				enterOuterAlt(_localctx, 16);
				{
				setState(994);
				match(ABS);
				setState(995);
				numExpr(0);
				}
				break;
			case 17:
				_localctx = new NumFuncACSContext(_localctx);
				enterOuterAlt(_localctx, 17);
				{
				setState(996);
				match(ACS);
				setState(997);
				numExpr(0);
				}
				break;
			case 18:
				_localctx = new NumFuncASNContext(_localctx);
				enterOuterAlt(_localctx, 18);
				{
				setState(998);
				match(ASN);
				setState(999);
				numExpr(0);
				}
				break;
			case 19:
				_localctx = new NumFuncDEGContext(_localctx);
				enterOuterAlt(_localctx, 19);
				{
				setState(1000);
				match(DEG);
				setState(1001);
				numExpr(0);
				}
				break;
			case 20:
				_localctx = new NumFuncRADContext(_localctx);
				enterOuterAlt(_localctx, 20);
				{
				setState(1002);
				match(RAD);
				setState(1003);
				numExpr(0);
				}
				break;
			case 21:
				_localctx = new NumFuncSQRContext(_localctx);
				enterOuterAlt(_localctx, 21);
				{
				setState(1004);
				match(SQR);
				setState(1005);
				numExpr(0);
				}
				break;
			case 22:
				_localctx = new NumFuncSGNContext(_localctx);
				enterOuterAlt(_localctx, 22);
				{
				setState(1006);
				match(SGN);
				setState(1007);
				numExpr(0);
				}
				break;
			case 23:
				_localctx = new NumFuncINTContext(_localctx);
				enterOuterAlt(_localctx, 23);
				{
				setState(1008);
				match(INT);
				setState(1009);
				numExpr(0);
				}
				break;
			case 24:
				_localctx = new NumFuncFLOATContext(_localctx);
				enterOuterAlt(_localctx, 24);
				{
				setState(1010);
				match(FLOAT_TOKEN);
				setState(1011);
				numExpr(0);
				}
				break;
			case 25:
				_localctx = new NumFuncPOINTContext(_localctx);
				enterOuterAlt(_localctx, 25);
				{
				setState(1012);
				match(POINT);
				setState(1013);
				match(LPAREN);
				setState(1014);
				numExpr(0);
				setState(1015);
				match(COMMA);
				setState(1016);
				numExpr(0);
				setState(1017);
				match(RPAREN);
				}
				break;
			case 26:
				_localctx = new NumFuncBGETHContext(_localctx);
				enterOuterAlt(_localctx, 26);
				{
				setState(1019);
				match(BGETH);
				setState(1020);
				numExpr(0);
				}
				break;
			case 27:
				_localctx = new NumFuncEOFHContext(_localctx);
				enterOuterAlt(_localctx, 27);
				{
				setState(1021);
				match(EOFH);
				setState(1022);
				numExpr(0);
				}
				break;
			case 28:
				_localctx = new NumFuncOPENINContext(_localctx);
				enterOuterAlt(_localctx, 28);
				{
				setState(1023);
				match(OPENIN);
				setState(1024);
				match(LPAREN);
				setState(1025);
				strExpr(0);
				setState(1026);
				match(RPAREN);
				}
				break;
			case 29:
				_localctx = new NumFuncOPENOUTContext(_localctx);
				enterOuterAlt(_localctx, 29);
				{
				setState(1028);
				match(OPENOUT);
				setState(1029);
				match(LPAREN);
				setState(1030);
				strExpr(0);
				setState(1031);
				match(RPAREN);
				}
				break;
			case 30:
				_localctx = new NumFuncOPENUPContext(_localctx);
				enterOuterAlt(_localctx, 30);
				{
				setState(1033);
				match(OPENUP);
				setState(1034);
				match(LPAREN);
				setState(1035);
				strExpr(0);
				setState(1036);
				match(RPAREN);
				}
				break;
			case 31:
				_localctx = new NumFuncPTRContext(_localctx);
				enterOuterAlt(_localctx, 31);
				{
				setState(1038);
				match(PTRH);
				setState(1039);
				numExpr(0);
				}
				break;
			case 32:
				_localctx = new NumFuncASCContext(_localctx);
				enterOuterAlt(_localctx, 32);
				{
				setState(1040);
				match(ASC);
				setState(1041);
				strExpr(0);
				}
				break;
			case 33:
				_localctx = new NumFuncLENContext(_localctx);
				enterOuterAlt(_localctx, 33);
				{
				setState(1042);
				match(LEN);
				setState(1043);
				strExpr(0);
				}
				break;
			case 34:
				_localctx = new NumFuncINSTR2Context(_localctx);
				enterOuterAlt(_localctx, 34);
				{
				setState(1044);
				match(INSTR);
				setState(1045);
				match(LPAREN);
				setState(1046);
				strExpr(0);
				setState(1047);
				match(COMMA);
				setState(1048);
				strExpr(0);
				setState(1049);
				match(RPAREN);
				}
				break;
			case 35:
				_localctx = new NumFuncINSTR3Context(_localctx);
				enterOuterAlt(_localctx, 35);
				{
				setState(1051);
				match(INSTR);
				setState(1052);
				match(LPAREN);
				setState(1053);
				strExpr(0);
				setState(1054);
				match(COMMA);
				setState(1055);
				strExpr(0);
				setState(1056);
				match(COMMA);
				setState(1057);
				numExpr(0);
				setState(1058);
				match(RPAREN);
				}
				break;
			case 36:
				_localctx = new NumFuncVALContext(_localctx);
				enterOuterAlt(_localctx, 36);
				{
				setState(1060);
				match(VAL);
				setState(1061);
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
		int _startState = 78;
		enterRecursionRule(_localctx, 78, RULE_numExpr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1076);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,80,_ctx) ) {
			case 1:
				{
				_localctx = new NumExprUnaryContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(1065);
				match(MINUS);
				setState(1066);
				numExpr(20);
				}
				break;
			case 2:
				{
				_localctx = new NumExprNOTContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1067);
				notExpr();
				}
				break;
			case 3:
				{
				_localctx = new NumExprFuncContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1068);
				numFunc();
				}
				break;
			case 4:
				{
				_localctx = new NumExprNestedContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1069);
				nestedExpr();
				}
				break;
			case 5:
				{
				_localctx = new NumExprStrRelopContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1070);
				strExpr(0);
				setState(1071);
				compare();
				setState(1072);
				strExpr(0);
				}
				break;
			case 6:
				{
				_localctx = new NumExprVarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1074);
				numVar();
				}
				break;
			case 7:
				{
				_localctx = new NumExprNumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(1075);
				number();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1120);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,82,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1118);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,81,_ctx) ) {
					case 1:
						{
						_localctx = new NumExprHatContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1078);
						if (!(precpred(_ctx, 16))) throw new FailedPredicateException(this, "precpred(_ctx, 16)");
						setState(1079);
						match(HAT);
						setState(1080);
						numExpr(16);
						}
						break;
					case 2:
						{
						_localctx = new NumExprMultiplyContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1081);
						if (!(precpred(_ctx, 15))) throw new FailedPredicateException(this, "precpred(_ctx, 15)");
						setState(1082);
						match(MULTIPLY);
						setState(1083);
						numExpr(16);
						}
						break;
					case 3:
						{
						_localctx = new NumExprDivideContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1084);
						if (!(precpred(_ctx, 14))) throw new FailedPredicateException(this, "precpred(_ctx, 14)");
						setState(1085);
						match(DIVIDE);
						setState(1086);
						numExpr(15);
						}
						break;
					case 4:
						{
						_localctx = new NumExprDIVContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1087);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(1088);
						match(DIV);
						setState(1089);
						numExpr(14);
						}
						break;
					case 5:
						{
						_localctx = new NumExprMODContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1090);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(1091);
						match(MOD);
						setState(1092);
						numExpr(13);
						}
						break;
					case 6:
						{
						_localctx = new NumExprPlusContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1093);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(1094);
						match(PLUS);
						setState(1095);
						numExpr(12);
						}
						break;
					case 7:
						{
						_localctx = new NumExprSubtractContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1096);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(1097);
						match(MINUS);
						setState(1098);
						numExpr(11);
						}
						break;
					case 8:
						{
						_localctx = new NumExprNumRelopContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1099);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(1100);
						compare();
						setState(1101);
						numExpr(10);
						}
						break;
					case 9:
						{
						_localctx = new NumExprSHLContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1103);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(1104);
						match(SHL);
						setState(1105);
						numExpr(8);
						}
						break;
					case 10:
						{
						_localctx = new NumExprSHRContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1106);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(1107);
						match(SHR);
						setState(1108);
						numExpr(7);
						}
						break;
					case 11:
						{
						_localctx = new NumExprANDContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1109);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(1110);
						match(AND);
						setState(1111);
						numExpr(6);
						}
						break;
					case 12:
						{
						_localctx = new NumExprORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1112);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(1113);
						match(OR);
						setState(1114);
						numExpr(5);
						}
						break;
					case 13:
						{
						_localctx = new NumExprEORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(1115);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1116);
						match(EOR);
						setState(1117);
						numExpr(4);
						}
						break;
					}
					} 
				}
				setState(1122);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,82,_ctx);
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
		enterRule(_localctx, 80, RULE_nestedExpr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1123);
			match(LPAREN);
			setState(1124);
			numExpr(0);
			setState(1125);
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
		enterRule(_localctx, 82, RULE_notExpr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1127);
			match(NOT);
			setState(1128);
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
		enterRule(_localctx, 84, RULE_numColours);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1130);
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
		enterRule(_localctx, 86, RULE_compare);
		try {
			setState(1138);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case EQ:
				_localctx = new CompareEQContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1132);
				match(EQ);
				}
				break;
			case NE:
				_localctx = new CompareNEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1133);
				match(NE);
				}
				break;
			case GT:
				_localctx = new CompareGTContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(1134);
				match(GT);
				}
				break;
			case GE:
				_localctx = new CompareGEContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(1135);
				match(GE);
				}
				break;
			case LT:
				_localctx = new CompareLTContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(1136);
				match(LT);
				}
				break;
			case LE:
				_localctx = new CompareLEContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(1137);
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
		case 37:
			return strExpr_sempred((StrExprContext)_localctx, predIndex);
		case 39:
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00b2\u0477\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\3\2\7\2\\\n\2\f\2\16\2_\13\2\3\2\3\2\3\3\3\3\5\3e\n\3\3\3\5"+
		"\3h\n\3\3\3\3\3\5\3l\n\3\3\3\6\3o\n\3\r\3\16\3p\3\3\5\3t\n\3\3\3\3\3\5"+
		"\3x\n\3\3\4\7\4{\n\4\f\4\16\4~\13\4\3\5\7\5\u0081\n\5\f\5\16\5\u0084\13"+
		"\5\3\5\7\5\u0087\n\5\f\5\16\5\u008a\13\5\5\5\u008c\n\5\3\6\3\6\3\7\3\7"+
		"\3\7\3\7\3\7\3\7\3\7\6\7\u0097\n\7\r\7\16\7\u0098\3\7\3\7\5\7\u009d\n"+
		"\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\7\7\u00a7\n\7\f\7\16\7\u00aa\13\7\3"+
		"\7\3\7\3\7\3\7\7\7\u00b0\n\7\f\7\16\7\u00b3\13\7\3\7\3\7\3\7\5\7\u00b8"+
		"\n\7\3\7\3\7\3\7\3\7\5\7\u00be\n\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\5\7"+
		"\u00c8\n\7\3\7\3\7\3\7\3\7\3\7\3\7\5\7\u00d0\n\7\3\7\3\7\3\7\3\7\3\7\3"+
		"\7\3\7\5\7\u00d9\n\7\3\7\3\7\3\7\3\7\3\7\5\7\u00e0\n\7\3\7\3\7\3\7\3\7"+
		"\3\7\3\7\3\7\3\7\3\7\3\7\3\7\5\7\u00ed\n\7\3\7\3\7\3\7\3\7\3\7\5\7\u00f4"+
		"\n\7\3\7\3\7\3\7\5\7\u00f9\n\7\3\7\3\7\3\7\5\7\u00fe\n\7\3\7\3\7\6\7\u0102"+
		"\n\7\r\7\16\7\u0103\3\7\3\7\3\7\6\7\u0109\n\7\r\7\16\7\u010a\5\7\u010d"+
		"\n\7\3\7\3\7\3\7\5\7\u0112\n\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\7\7\u011c"+
		"\n\7\f\7\16\7\u011f\13\7\3\7\5\7\u0122\n\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7"+
		"\3\7\7\7\u012c\n\7\f\7\16\7\u012f\13\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7"+
		"\3\7\7\7\u013a\n\7\f\7\16\7\u013d\13\7\3\7\3\7\3\7\3\7\3\7\7\7\u0144\n"+
		"\7\f\7\16\7\u0147\13\7\3\7\3\7\3\7\3\7\3\7\5\7\u014e\n\7\3\7\3\7\3\7\3"+
		"\7\3\7\7\7\u0155\n\7\f\7\16\7\u0158\13\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3"+
		"\7\3\7\3\7\3\7\3\7\3\7\3\7\7\7\u0168\n\7\f\7\16\7\u016b\13\7\3\7\3\7\3"+
		"\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\5\7\u017d\n\7\3"+
		"\7\3\7\3\7\5\7\u0182\n\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3"+
		"\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7"+
		"\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3"+
		"\7\3\7\3\7\3\7\3\7\3\7\5\7\u01b8\n\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3"+
		"\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7"+
		"\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3"+
		"\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7"+
		"\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3"+
		"\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7"+
		"\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3"+
		"\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7"+
		"\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3"+
		"\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7"+
		"\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\5\7\u026a\n\7\3\b\3\b\3\b\3\b"+
		"\7\b\u0270\n\b\f\b\16\b\u0273\13\b\3\b\3\b\3\b\3\t\3\t\3\n\3\n\5\n\u027c"+
		"\n\n\3\13\3\13\3\13\5\13\u0281\n\13\3\f\3\f\3\r\3\r\3\r\3\r\3\r\5\r\u028a"+
		"\n\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\5\r\u0293\n\r\3\r\3\r\3\r\3\r\3\r\3\r"+
		"\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\5\r\u02a6\n\r\3\r\3\r\3\r"+
		"\3\r\5\r\u02ac\n\r\3\r\3\r\3\r\3\r\5\r\u02b2\n\r\3\r\3\r\3\r\3\r\3\r\3"+
		"\r\3\r\3\r\3\r\5\r\u02bd\n\r\3\16\3\16\3\16\3\16\3\16\5\16\u02c4\n\16"+
		"\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\5\16\u02d2"+
		"\n\16\3\17\3\17\3\17\5\17\u02d7\n\17\3\20\3\20\5\20\u02db\n\20\3\21\3"+
		"\21\3\22\3\22\3\23\3\23\3\24\3\24\3\25\3\25\3\25\3\25\3\25\3\25\5\25\u02eb"+
		"\n\25\3\25\3\25\7\25\u02ef\n\25\f\25\16\25\u02f2\13\25\3\25\3\25\3\25"+
		"\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25"+
		"\3\25\3\25\3\25\3\25\3\25\3\25\3\25\5\25\u030c\n\25\3\26\3\26\3\26\3\26"+
		"\3\26\7\26\u0313\n\26\f\26\16\26\u0316\13\26\3\26\3\26\3\26\3\26\3\26"+
		"\3\26\3\26\3\26\3\26\5\26\u0321\n\26\3\27\3\27\3\27\7\27\u0326\n\27\f"+
		"\27\16\27\u0329\13\27\3\30\5\30\u032c\n\30\3\30\3\30\3\30\5\30\u0331\n"+
		"\30\3\30\7\30\u0334\n\30\f\30\16\30\u0337\13\30\3\31\3\31\3\31\7\31\u033c"+
		"\n\31\f\31\16\31\u033f\13\31\3\32\3\32\3\32\7\32\u0344\n\32\f\32\16\32"+
		"\u0347\13\32\3\33\5\33\u034a\n\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3"+
		"\33\5\33\u0354\n\33\3\34\6\34\u0357\n\34\r\34\16\34\u0358\3\35\3\35\3"+
		"\35\5\35\u035e\n\35\3\36\5\36\u0361\n\36\3\36\5\36\u0364\n\36\3\36\3\36"+
		"\3\36\3\36\7\36\u036a\n\36\f\36\16\36\u036d\13\36\3\36\5\36\u0370\n\36"+
		"\3\37\3\37\5\37\u0374\n\37\3 \3 \3 \3 \3 \5 \u037b\n \3!\3!\3\"\3\"\3"+
		"#\3#\3$\5$\u0384\n$\3$\3$\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3"+
		"%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3"+
		"%\3%\3%\3%\3%\3%\3%\3%\5%\u03b5\n%\3&\3&\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3"+
		"\'\5\'\u03c1\n\'\3\'\3\'\3\'\7\'\u03c6\n\'\f\'\16\'\u03c9\13\'\3(\3(\3"+
		"(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3"+
		"(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3"+
		"(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3"+
		"(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\5"+
		"(\u0429\n(\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\5)\u0437\n)\3)\3)\3)\3"+
		")\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3"+
		")\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\7)\u0461\n)\f)\16)\u0464\13)"+
		"\3*\3*\3*\3*\3+\3+\3+\3,\3,\3-\3-\3-\3-\3-\3-\5-\u0475\n-\3-\2\4LP.\2"+
		"\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJL"+
		"NPRTVX\2\7\4\2\"\"\u00a3\u00a3\3\2[\\\3\2\u00a6\u00a8\3\2\u008b\u008c"+
		"\3\2\67>\2\u053c\2]\3\2\2\2\4w\3\2\2\2\6|\3\2\2\2\b\u008b\3\2\2\2\n\u008d"+
		"\3\2\2\2\f\u0269\3\2\2\2\16\u026b\3\2\2\2\20\u0277\3\2\2\2\22\u027b\3"+
		"\2\2\2\24\u0280\3\2\2\2\26\u0282\3\2\2\2\30\u02bc\3\2\2\2\32\u02d1\3\2"+
		"\2\2\34\u02d6\3\2\2\2\36\u02da\3\2\2\2 \u02dc\3\2\2\2\"\u02de\3\2\2\2"+
		"$\u02e0\3\2\2\2&\u02e2\3\2\2\2(\u030b\3\2\2\2*\u0320\3\2\2\2,\u0322\3"+
		"\2\2\2.\u032b\3\2\2\2\60\u0338\3\2\2\2\62\u0340\3\2\2\2\64\u0353\3\2\2"+
		"\2\66\u0356\3\2\2\28\u035d\3\2\2\2:\u0360\3\2\2\2<\u0373\3\2\2\2>\u037a"+
		"\3\2\2\2@\u037c\3\2\2\2B\u037e\3\2\2\2D\u0380\3\2\2\2F\u0383\3\2\2\2H"+
		"\u03b4\3\2\2\2J\u03b6\3\2\2\2L\u03c0\3\2\2\2N\u0428\3\2\2\2P\u0436\3\2"+
		"\2\2R\u0465\3\2\2\2T\u0469\3\2\2\2V\u046c\3\2\2\2X\u0474\3\2\2\2Z\\\5"+
		"\4\3\2[Z\3\2\2\2\\_\3\2\2\2][\3\2\2\2]^\3\2\2\2^`\3\2\2\2_]\3\2\2\2`a"+
		"\7\2\2\3a\3\3\2\2\2bx\7\u0097\2\2ce\5\n\6\2dc\3\2\2\2de\3\2\2\2eg\3\2"+
		"\2\2fh\t\2\2\2gf\3\2\2\2gh\3\2\2\2hi\3\2\2\2ix\7\u0097\2\2jl\5\n\6\2k"+
		"j\3\2\2\2kl\3\2\2\2ln\3\2\2\2mo\5\f\7\2nm\3\2\2\2op\3\2\2\2pn\3\2\2\2"+
		"pq\3\2\2\2qs\3\2\2\2rt\t\2\2\2sr\3\2\2\2st\3\2\2\2tu\3\2\2\2uv\7\u0097"+
		"\2\2vx\3\2\2\2wb\3\2\2\2wd\3\2\2\2wk\3\2\2\2x\5\3\2\2\2y{\5\f\7\2zy\3"+
		"\2\2\2{~\3\2\2\2|z\3\2\2\2|}\3\2\2\2}\7\3\2\2\2~|\3\2\2\2\177\u0081\5"+
		"\f\7\2\u0080\177\3\2\2\2\u0081\u0084\3\2\2\2\u0082\u0080\3\2\2\2\u0082"+
		"\u0083\3\2\2\2\u0083\u008c\3\2\2\2\u0084\u0082\3\2\2\2\u0085\u0087\5\4"+
		"\3\2\u0086\u0085\3\2\2\2\u0087\u008a\3\2\2\2\u0088\u0086\3\2\2\2\u0088"+
		"\u0089\3\2\2\2\u0089\u008c\3\2\2\2\u008a\u0088\3\2\2\2\u008b\u0082\3\2"+
		"\2\2\u008b\u0088\3\2\2\2\u008c\t\3\2\2\2\u008d\u008e\7\u00b0\2\2\u008e"+
		"\13\3\2\2\2\u008f\u026a\7\u009b\2\2\u0090\u026a\7\3\2\2\u0091\u0092\7"+
		"\4\2\2\u0092\u0093\5<\37\2\u0093\u0094\7\34\2\2\u0094\u0096\7\u0097\2"+
		"\2\u0095\u0097\5\16\b\2\u0096\u0095\3\2\2\2\u0097\u0098\3\2\2\2\u0098"+
		"\u0096\3\2\2\2\u0098\u0099\3\2\2\2\u0099\u009c\3\2\2\2\u009a\u009b\7\36"+
		"\2\2\u009b\u009d\5\b\5\2\u009c\u009a\3\2\2\2\u009c\u009d\3\2\2\2\u009d"+
		"\u009e\3\2\2\2\u009e\u009f\7\13\2\2\u009f\u026a\3\2\2\2\u00a0\u00a1\7"+
		"\5\2\2\u00a1\u026a\5L\'\2\u00a2\u00a3\7\6\2\2\u00a3\u00a8\5\22\n\2\u00a4"+
		"\u00a5\7\u009c\2\2\u00a5\u00a7\5\22\n\2\u00a6\u00a4\3\2\2\2\u00a7\u00aa"+
		"\3\2\2\2\u00a8\u00a6\3\2\2\2\u00a8\u00a9\3\2\2\2\u00a9\u026a\3\2\2\2\u00aa"+
		"\u00a8\3\2\2\2\u00ab\u00ac\7\b\2\2\u00ac\u00b1\5*\26\2\u00ad\u00ae\7\u009c"+
		"\2\2\u00ae\u00b0\5*\26\2\u00af\u00ad\3\2\2\2\u00b0\u00b3\3\2\2\2\u00b1"+
		"\u00af\3\2\2\2\u00b1\u00b2\3\2\2\2\u00b2\u026a\3\2\2\2\u00b3\u00b1\3\2"+
		"\2\2\u00b4\u026a\7\n\2\2\u00b5\u00b7\7%\2\2\u00b6\u00b8\5<\37\2\u00b7"+
		"\u00b6\3\2\2\2\u00b7\u00b8\3\2\2\2\u00b8\u026a\3\2\2\2\u00b9\u00ba\7\7"+
		"\2\2\u00ba\u00bb\5\20\t\2\u00bb\u00bd\7\u009e\2\2\u00bc\u00be\5.\30\2"+
		"\u00bd\u00bc\3\2\2\2\u00bd\u00be\3\2\2\2\u00be\u00bf\3\2\2\2\u00bf\u00c0"+
		"\7\u00a0\2\2\u00c0\u00c1\5\b\5\2\u00c1\u00c2\7\r\2\2\u00c2\u026a\3\2\2"+
		"\2\u00c3\u00c4\7\7\2\2\u00c4\u00c5\7\u00a5\2\2\u00c5\u00c7\7\u009e\2\2"+
		"\u00c6\u00c8\5.\30\2\u00c7\u00c6\3\2\2\2\u00c7\u00c8\3\2\2\2\u00c8\u00c9"+
		"\3\2\2\2\u00c9\u00ca\7\u00a0\2\2\u00ca\u00cb\5\b\5\2\u00cb\u00cc\7\16"+
		"\2\2\u00cc\u026a\3\2\2\2\u00cd\u00cf\7\21\2\2\u00ce\u00d0\7\31\2\2\u00cf"+
		"\u00ce\3\2\2\2\u00cf\u00d0\3\2\2\2\u00d0\u00d1\3\2\2\2\u00d1\u00d2\5\36"+
		"\20\2\u00d2\u00d3\7~\2\2\u00d3\u00d4\5P)\2\u00d4\u00d5\7*\2\2\u00d5\u00d8"+
		"\5P)\2\u00d6\u00d7\7\'\2\2\u00d7\u00d9\5P)\2\u00d8\u00d6\3\2\2\2\u00d8"+
		"\u00d9\3\2\2\2\u00d9\u00da\3\2\2\2\u00da\u00db\5\b\5\2\u00db\u00dc\7\33"+
		"\2\2\u00dc\u026a\3\2\2\2\u00dd\u00df\7\21\2\2\u00de\u00e0\7\31\2\2\u00df"+
		"\u00de\3\2\2\2\u00df\u00e0\3\2\2\2\u00e0\u00e1\3\2\2\2\u00e1\u00e2\5\34"+
		"\17\2\u00e2\u00e3\7\25\2\2\u00e3\u00e4\5\34\17\2\u00e4\u00e5\7\u009e\2"+
		"\2\u00e5\u00e6\7\u00a0\2\2\u00e6\u00e7\5\b\5\2\u00e7\u00e8\7\33\2\2\u00e8"+
		"\u026a\3\2\2\2\u00e9\u00ea\5\20\t\2\u00ea\u00ec\7\u009e\2\2\u00eb\u00ed"+
		"\5\60\31\2\u00ec\u00eb\3\2\2\2\u00ec\u00ed\3\2\2\2\u00ed\u00ee\3\2\2\2"+
		"\u00ee\u00ef\7\u00a0\2\2\u00ef\u026a\3\2\2\2\u00f0\u00f1\7\24\2\2\u00f1"+
		"\u00f3\5<\37\2\u00f2\u00f4\7)\2\2\u00f3\u00f2\3\2\2\2\u00f3\u00f4\3\2"+
		"\2\2\u00f4\u00f5\3\2\2\2\u00f5\u00f8\5\6\4\2\u00f6\u00f7\7\t\2\2\u00f7"+
		"\u00f9\5\6\4\2\u00f8\u00f6\3\2\2\2\u00f8\u00f9\3\2\2\2\u00f9\u026a\3\2"+
		"\2\2\u00fa\u00fb\7\24\2\2\u00fb\u00fd\5<\37\2\u00fc\u00fe\7)\2\2\u00fd"+
		"\u00fc\3\2\2\2\u00fd\u00fe\3\2\2\2\u00fe\u00ff\3\2\2\2\u00ff\u0101\7\u0097"+
		"\2\2\u0100\u0102\5\4\3\2\u0101\u0100\3\2\2\2\u0102\u0103\3\2\2\2\u0103"+
		"\u0101\3\2\2\2\u0103\u0104\3\2\2\2\u0104\u010c\3\2\2\2\u0105\u0106\7\t"+
		"\2\2\u0106\u0108\7\u0097\2\2\u0107\u0109\5\4\3\2\u0108\u0107\3\2\2\2\u0109"+
		"\u010a\3\2\2\2\u010a\u0108\3\2\2\2\u010a\u010b\3\2\2\2\u010b\u010d\3\2"+
		"\2\2\u010c\u0105\3\2\2\2\u010c\u010d\3\2\2\2\u010d\u010e\3\2\2\2\u010e"+
		"\u010f\7\f\2\2\u010f\u026a\3\2\2\2\u0110\u0112\7\32\2\2\u0111\u0110\3"+
		"\2\2\2\u0111\u0112\3\2\2\2\u0112\u0113\3\2\2\2\u0113\u0114\5(\25\2\u0114"+
		"\u0115\7~\2\2\u0115\u011d\5<\37\2\u0116\u0117\7\u009c\2\2\u0117\u0118"+
		"\5(\25\2\u0118\u0119\7~\2\2\u0119\u011a\5<\37\2\u011a\u011c\3\2\2\2\u011b"+
		"\u0116\3\2\2\2\u011c\u011f\3\2\2\2\u011d\u011b\3\2\2\2\u011d\u011e\3\2"+
		"\2\2\u011e\u026a\3\2\2\2\u011f\u011d\3\2\2\2\u0120\u0122\7\30\2\2\u0121"+
		"\u0120\3\2\2\2\u0121\u0122\3\2\2\2\u0122\u0123\3\2\2\2\u0123\u0124\5("+
		"\25\2\u0124\u0125\7~\2\2\u0125\u012d\5<\37\2\u0126\u0127\7\u009c\2\2\u0127"+
		"\u0128\5(\25\2\u0128\u0129\7~\2\2\u0129\u012a\5<\37\2\u012a\u012c\3\2"+
		"\2\2\u012b\u0126\3\2\2\2\u012c\u012f\3\2\2\2\u012d\u012b\3\2\2\2\u012d"+
		"\u012e\3\2\2\2\u012e\u026a\3\2\2\2\u012f\u012d\3\2\2\2\u0130\u0131\7\31"+
		"\2\2\u0131\u0132\5(\25\2\u0132\u0133\7~\2\2\u0133\u013b\5<\37\2\u0134"+
		"\u0135\7\u009c\2\2\u0135\u0136\5(\25\2\u0136\u0137\7~\2\2\u0137\u0138"+
		"\5<\37\2\u0138\u013a\3\2\2\2\u0139\u0134\3\2\2\2\u013a\u013d\3\2\2\2\u013b"+
		"\u0139\3\2\2\2\u013b\u013c\3\2\2\2\u013c\u026a\3\2\2\2\u013d\u013b\3\2"+
		"\2\2\u013e\u013f\7\31\2\2\u013f\u0140\7\b\2\2\u0140\u0145\5*\26\2\u0141"+
		"\u0142\7\u009c\2\2\u0142\u0144\5*\26\2\u0143\u0141\3\2\2\2\u0144\u0147"+
		"\3\2\2\2\u0145\u0143\3\2\2\2\u0145\u0146\3\2\2\2\u0146\u026a\3\2\2\2\u0147"+
		"\u0145\3\2\2\2\u0148\u0149\7\35\2\2\u0149\u026a\5L\'\2\u014a\u014b\7\u00a5"+
		"\2\2\u014b\u014d\7\u009e\2\2\u014c\u014e\5\60\31\2\u014d\u014c\3\2\2\2"+
		"\u014d\u014e\3\2\2\2\u014e\u014f\3\2\2\2\u014f\u026a\7\u00a0\2\2\u0150"+
		"\u0151\7!\2\2\u0151\u0156\5(\25\2\u0152\u0153\7\u009c\2\2\u0153\u0155"+
		"\5(\25\2\u0154\u0152\3\2\2\2\u0155\u0158\3\2\2\2\u0156\u0154\3\2\2\2\u0156"+
		"\u0157\3\2\2\2\u0157\u026a\3\2\2\2\u0158\u0156\3\2\2\2\u0159\u026a\7$"+
		"\2\2\u015a\u015b\7(\2\2\u015b\u015c\5\34\17\2\u015c\u015d\7\u009c\2\2"+
		"\u015d\u015e\5\34\17\2\u015e\u026a\3\2\2\2\u015f\u026a\7+\2\2\u0160\u026a"+
		"\7,\2\2\u0161\u0162\7.\2\2\u0162\u0163\5 \21\2\u0163\u0164\7\u009e\2\2"+
		"\u0164\u0169\5\34\17\2\u0165\u0166\7\u009c\2\2\u0166\u0168\5\34\17\2\u0167"+
		"\u0165\3\2\2\2\u0168\u016b\3\2\2\2\u0169\u0167\3\2\2\2\u0169\u016a\3\2"+
		"\2\2\u016a\u016c\3\2\2\2\u016b\u0169\3\2\2\2\u016c\u016d\7\u00a0\2\2\u016d"+
		"\u026a\3\2\2\2\u016e\u016f\7#\2\2\u016f\u0170\5\b\5\2\u0170\u0171\7/\2"+
		"\2\u0171\u0172\5<\37\2\u0172\u026a\3\2\2\2\u0173\u0174\7\61\2\2\u0174"+
		"\u0175\5<\37\2\u0175\u0176\5\b\5\2\u0176\u0177\7\17\2\2\u0177\u026a\3"+
		"\2\2\2\u0178\u017c\7\27\2\2\u0179\u017a\5L\'\2\u017a\u017b\7\u009c\2\2"+
		"\u017b\u017d\3\2\2\2\u017c\u0179\3\2\2\2\u017c\u017d\3\2\2\2\u017d\u017e"+
		"\3\2\2\2\u017e\u026a\5,\27\2\u017f\u0181\7\37\2\2\u0180\u0182\5:\36\2"+
		"\u0181\u0180\3\2\2\2\u0181\u0182\3\2\2\2\u0182\u026a\3\2\2\2\u0183\u0184"+
		"\7\62\2\2\u0184\u0185\5\"\22\2\u0185\u0186\7\u009c\2\2\u0186\u0187\5\""+
		"\22\2\u0187\u0188\7\u009c\2\2\u0188\u0189\5\"\22\2\u0189\u026a\3\2\2\2"+
		"\u018a\u018b\7\63\2\2\u018b\u026a\5P)\2\u018c\u018d\7\64\2\2\u018d\u026a"+
		"\5P)\2\u018e\u026a\7\65\2\2\u018f\u026a\7\66\2\2\u0190\u0191\5(\25\2\u0191"+
		"\u0192\7\u0093\2\2\u0192\u0193\5P)\2\u0193\u026a\3\2\2\2\u0194\u0195\5"+
		"(\25\2\u0195\u0196\7\u0094\2\2\u0196\u0197\5P)\2\u0197\u026a\3\2\2\2\u0198"+
		"\u0199\5(\25\2\u0199\u019a\7\u0091\2\2\u019a\u019b\5P)\2\u019b\u026a\3"+
		"\2\2\2\u019c\u019d\5(\25\2\u019d\u019e\7\u0092\2\2\u019e\u019f\5P)\2\u019f"+
		"\u026a\3\2\2\2\u01a0\u01a1\5(\25\2\u01a1\u01a2\7\u0095\2\2\u01a2\u01a3"+
		"\5P)\2\u01a3\u026a\3\2\2\2\u01a4\u01a5\5(\25\2\u01a5\u01a6\7\u0096\2\2"+
		"\u01a6\u01a7\5P)\2\u01a7\u026a\3\2\2\2\u01a8\u01a9\7@\2\2\u01a9\u01aa"+
		"\5P)\2\u01aa\u01ab\7\u009c\2\2\u01ab\u01ac\5P)\2\u01ac\u026a\3\2\2\2\u01ad"+
		"\u01ae\7?\2\2\u01ae\u026a\5P)\2\u01af\u01b0\7H\2\2\u01b0\u01b1\5P)\2\u01b1"+
		"\u01b2\7~\2\2\u01b2\u01b3\5P)\2\u01b3\u026a\3\2\2\2\u01b4\u01b5\7A\2\2"+
		"\u01b5\u026a\5P)\2\u01b6\u01b8\7\31\2\2\u01b7\u01b6\3\2\2\2\u01b7\u01b8"+
		"\3\2\2\2\u01b8\u01b9\3\2\2\2\u01b9\u01ba\5$\23\2\u01ba\u01bb\7\u009e\2"+
		"\2\u01bb\u01bc\7\u00a0\2\2\u01bc\u01bd\7~\2\2\u01bd\u01be\7D\2\2\u01be"+
		"\u01bf\7\u009e\2\2\u01bf\u01c0\5L\'\2\u01c0\u01c1\7\u00a0\2\2\u01c1\u026a"+
		"\3\2\2\2\u01c2\u026a\7K\2\2\u01c3\u01c4\7N\2\2\u01c4\u026a\5P)\2\u01c5"+
		"\u01c6\7N\2\2\u01c6\u01c7\5P)\2\u01c7\u01c8\7\u009c\2\2\u01c8\u01c9\5"+
		"P)\2\u01c9\u01ca\7\u009c\2\2\u01ca\u01cb\5P)\2\u01cb\u026a\3\2\2\2\u01cc"+
		"\u01cd\7O\2\2\u01cd\u026a\5P)\2\u01ce\u01cf\7O\2\2\u01cf\u01d0\5P)\2\u01d0"+
		"\u01d1\7\u009c\2\2\u01d1\u01d2\5P)\2\u01d2\u01d3\7\u009c\2\2\u01d3\u01d4"+
		"\5P)\2\u01d4\u026a\3\2\2\2\u01d5\u026a\7S\2\2\u01d6\u01d7\7S\2\2\u01d7"+
		"\u01d8\5P)\2\u01d8\u01d9\7\u009c\2\2\u01d9\u01da\5P)\2\u01da\u026a\3\2"+
		"\2\2\u01db\u01dc\7S\2\2\u01dc\u026a\7I\2\2\u01dd\u01de\7S\2\2\u01de\u01df"+
		"\7I\2\2\u01df\u01e0\5P)\2\u01e0\u01e1\7\u009c\2\2\u01e1\u01e2\5P)\2\u01e2"+
		"\u026a\3\2\2\2\u01e3\u026a\7Q\2\2\u01e4\u01e5\7J\2\2\u01e5\u01e6\5P)\2"+
		"\u01e6\u01e7\7\u009c\2\2\u01e7\u01e8\5P)\2\u01e8\u01e9\7\u009c\2\2\u01e9"+
		"\u01ea\5P)\2\u01ea\u026a\3\2\2\2\u01eb\u01ec\7J\2\2\u01ec\u01ed\7P\2\2"+
		"\u01ed\u01ee\5P)\2\u01ee\u01ef\7\u009c\2\2\u01ef\u01f0\5P)\2\u01f0\u01f1"+
		"\7\u009c\2\2\u01f1\u01f2\5P)\2\u01f2\u026a\3\2\2\2\u01f3\u01f4\7T\2\2"+
		"\u01f4\u01f5\5P)\2\u01f5\u01f6\7\u009c\2\2\u01f6\u01f7\5P)\2\u01f7\u01f8"+
		"\7\u009c\2\2\u01f8\u01f9\5P)\2\u01f9\u01fa\7\u009c\2\2\u01fa\u01fb\5P"+
		")\2\u01fb\u026a\3\2\2\2\u01fc\u01fd\7U\2\2\u01fd\u01fe\5P)\2\u01fe\u01ff"+
		"\7\u009c\2\2\u01ff\u0200\5P)\2\u0200\u0201\7\u009c\2\2\u0201\u0202\5P"+
		")\2\u0202\u0203\7\u009c\2\2\u0203\u0204\5P)\2\u0204\u026a\3\2\2\2\u0205"+
		"\u0206\7U\2\2\u0206\u0207\7P\2\2\u0207\u0208\5P)\2\u0208\u0209\7\u009c"+
		"\2\2\u0209\u020a\5P)\2\u020a\u020b\7\u009c\2\2\u020b\u020c\5P)\2\u020c"+
		"\u020d\7\u009c\2\2\u020d\u020e\5P)\2\u020e\u026a\3\2\2\2\u020f\u0210\7"+
		"]\2\2\u0210\u0211\5P)\2\u0211\u0212\7\u009c\2\2\u0212\u0213\5P)\2\u0213"+
		"\u0214\7\u009c\2\2\u0214\u0215\5P)\2\u0215\u0216\7\u009c\2\2\u0216\u0217"+
		"\5P)\2\u0217\u0218\7\u009c\2\2\u0218\u0219\5P)\2\u0219\u021a\7\u009c\2"+
		"\2\u021a\u021b\5P)\2\u021b\u026a\3\2\2\2\u021c\u021d\7]\2\2\u021d\u021e"+
		"\7P\2\2\u021e\u021f\5P)\2\u021f\u0220\7\u009c\2\2\u0220\u0221\5P)\2\u0221"+
		"\u0222\7\u009c\2\2\u0222\u0223\5P)\2\u0223\u0224\7\u009c\2\2\u0224\u0225"+
		"\5P)\2\u0225\u0226\7\u009c\2\2\u0226\u0227\5P)\2\u0227\u0228\7\u009c\2"+
		"\2\u0228\u0229\5P)\2\u0229\u026a\3\2\2\2\u022a\u022b\7]\2\2\u022b\u022c"+
		"\7X\2\2\u022c\u022d\5P)\2\u022d\u022e\7\u009c\2\2\u022e\u022f\5P)\2\u022f"+
		"\u0230\7\u009c\2\2\u0230\u0231\5P)\2\u0231\u0232\7\u009c\2\2\u0232\u0233"+
		"\5P)\2\u0233\u0234\7\u009c\2\2\u0234\u0235\5P)\2\u0235\u0236\7\u009c\2"+
		"\2\u0236\u0237\5P)\2\u0237\u0238\7\u009c\2\2\u0238\u0239\5P)\2\u0239\u023a"+
		"\7\u009c\2\2\u023a\u023b\5P)\2\u023b\u023c\7\u009c\2\2\u023c\u023d\5P"+
		")\2\u023d\u026a\3\2\2\2\u023e\u023f\7V\2\2\u023f\u0240\5P)\2\u0240\u0241"+
		"\7\u009c\2\2\u0241\u0242\5P)\2\u0242\u026a\3\2\2\2\u0243\u0244\7L\2\2"+
		"\u0244\u0245\5P)\2\u0245\u0246\7\u009c\2\2\u0246\u0247\5P)\2\u0247\u0248"+
		"\7\u009c\2\2\u0248\u0249\5P)\2\u0249\u024a\7\u009c\2\2\u024a\u024b\5P"+
		")\2\u024b\u026a\3\2\2\2\u024c\u026a\7M\2\2\u024d\u024e\7Y\2\2\u024e\u024f"+
		"\5P)\2\u024f\u0250\7\u009c\2\2\u0250\u0251\5P)\2\u0251\u0252\7\u009c\2"+
		"\2\u0252\u0253\5P)\2\u0253\u0254\7\u009c\2\2\u0254\u0255\5P)\2\u0255\u026a"+
		"\3\2\2\2\u0256\u0257\7Z\2\2\u0257\u0258\5P)\2\u0258\u0259\7\u009c\2\2"+
		"\u0259\u025a\5P)\2\u025a\u025b\7\u009c\2\2\u025b\u025c\5P)\2\u025c\u025d"+
		"\7\u009c\2\2\u025d\u025e\5L\'\2\u025e\u026a\3\2\2\2\u025f\u0260\t\3\2"+
		"\2\u0260\u0261\5P)\2\u0261\u0262\7\u009c\2\2\u0262\u0263\5P)\2\u0263\u0264"+
		"\7\u009c\2\2\u0264\u0265\5P)\2\u0265\u0266\7\u009c\2\2\u0266\u0267\5L"+
		"\'\2\u0267\u026a\3\2\2\2\u0268\u026a\7R\2\2\u0269\u008f\3\2\2\2\u0269"+
		"\u0090\3\2\2\2\u0269\u0091\3\2\2\2\u0269\u00a0\3\2\2\2\u0269\u00a2\3\2"+
		"\2\2\u0269\u00ab\3\2\2\2\u0269\u00b4\3\2\2\2\u0269\u00b5\3\2\2\2\u0269"+
		"\u00b9\3\2\2\2\u0269\u00c3\3\2\2\2\u0269\u00cd\3\2\2\2\u0269\u00dd\3\2"+
		"\2\2\u0269\u00e9\3\2\2\2\u0269\u00f0\3\2\2\2\u0269\u00fa\3\2\2\2\u0269"+
		"\u0111\3\2\2\2\u0269\u0121\3\2\2\2\u0269\u0130\3\2\2\2\u0269\u013e\3\2"+
		"\2\2\u0269\u0148\3\2\2\2\u0269\u014a\3\2\2\2\u0269\u0150\3\2\2\2\u0269"+
		"\u0159\3\2\2\2\u0269\u015a\3\2\2\2\u0269\u015f\3\2\2\2\u0269\u0160\3\2"+
		"\2\2\u0269\u0161\3\2\2\2\u0269\u016e\3\2\2\2\u0269\u0173\3\2\2\2\u0269"+
		"\u0178\3\2\2\2\u0269\u017f\3\2\2\2\u0269\u0183\3\2\2\2\u0269\u018a\3\2"+
		"\2\2\u0269\u018c\3\2\2\2\u0269\u018e\3\2\2\2\u0269\u018f\3\2\2\2\u0269"+
		"\u0190\3\2\2\2\u0269\u0194\3\2\2\2\u0269\u0198\3\2\2\2\u0269\u019c\3\2"+
		"\2\2\u0269\u01a0\3\2\2\2\u0269\u01a4\3\2\2\2\u0269\u01a8\3\2\2\2\u0269"+
		"\u01ad\3\2\2\2\u0269\u01af\3\2\2\2\u0269\u01b4\3\2\2\2\u0269\u01b7\3\2"+
		"\2\2\u0269\u01c2\3\2\2\2\u0269\u01c3\3\2\2\2\u0269\u01c5\3\2\2\2\u0269"+
		"\u01cc\3\2\2\2\u0269\u01ce\3\2\2\2\u0269\u01d5\3\2\2\2\u0269\u01d6\3\2"+
		"\2\2\u0269\u01db\3\2\2\2\u0269\u01dd\3\2\2\2\u0269\u01e3\3\2\2\2\u0269"+
		"\u01e4\3\2\2\2\u0269\u01eb\3\2\2\2\u0269\u01f3\3\2\2\2\u0269\u01fc\3\2"+
		"\2\2\u0269\u0205\3\2\2\2\u0269\u020f\3\2\2\2\u0269\u021c\3\2\2\2\u0269"+
		"\u022a\3\2\2\2\u0269\u023e\3\2\2\2\u0269\u0243\3\2\2\2\u0269\u024c\3\2"+
		"\2\2\u0269\u024d\3\2\2\2\u0269\u0256\3\2\2\2\u0269\u025f\3\2\2\2\u0269"+
		"\u0268\3\2\2\2\u026a\r\3\2\2\2\u026b\u026c\7\60\2\2\u026c\u0271\5<\37"+
		"\2\u026d\u026e\7\u009c\2\2\u026e\u0270\5<\37\2\u026f\u026d\3\2\2\2\u0270"+
		"\u0273\3\2\2\2\u0271\u026f\3\2\2\2\u0271\u0272\3\2\2\2\u0272\u0274\3\2"+
		"\2\2\u0273\u0271\3\2\2\2\u0274\u0275\7\u009b\2\2\u0275\u0276\5\b\5\2\u0276"+
		"\17\3\2\2\2\u0277\u0278\t\4\2\2\u0278\21\3\2\2\2\u0279\u027c\5> \2\u027a"+
		"\u027c\5J&\2\u027b\u0279\3\2\2\2\u027b\u027a\3\2\2\2\u027c\23\3\2\2\2"+
		"\u027d\u0281\5\30\r\2\u027e\u0281\5\32\16\2\u027f\u0281\5\26\f\2\u0280"+
		"\u027d\3\2\2\2\u0280\u027e\3\2\2\2\u0280\u027f\3\2\2\2\u0281\25\3\2\2"+
		"\2\u0282\u0283\5&\24\2\u0283\27\3\2\2\2\u0284\u0285\5 \21\2\u0285\u0286"+
		"\7\u009e\2\2\u0286\u0289\5P)\2\u0287\u0288\7\u009c\2\2\u0288\u028a\5P"+
		")\2\u0289\u0287\3\2\2\2\u0289\u028a\3\2\2\2\u028a\u028b\3\2\2\2\u028b"+
		"\u028c\7\u00a0\2\2\u028c\u02bd\3\2\2\2\u028d\u028e\5\"\22\2\u028e\u028f"+
		"\7\u009e\2\2\u028f\u0292\5P)\2\u0290\u0291\7\u009c\2\2\u0291\u0293\5P"+
		")\2\u0292\u0290\3\2\2\2\u0292\u0293\3\2\2\2\u0293\u0294\3\2\2\2\u0294"+
		"\u0295\7\u00a0\2\2\u0295\u02bd\3\2\2\2\u0296\u0297\5\26\f\2\u0297\u0298"+
		"\7\u009e\2\2\u0298\u0299\5P)\2\u0299\u029a\7\u00a0\2\2\u029a\u029b\5\""+
		"\22\2\u029b\u02bd\3\2\2\2\u029c\u029d\5\26\f\2\u029d\u029e\7\u009e\2\2"+
		"\u029e\u029f\5P)\2\u029f\u02a0\7\u00a0\2\2\u02a0\u02a1\5 \21\2\u02a1\u02bd"+
		"\3\2\2\2\u02a2\u02a3\7\u00a7\2\2\u02a3\u02a5\7\u009e\2\2\u02a4\u02a6\5"+
		"\60\31\2\u02a5\u02a4\3\2\2\2\u02a5\u02a6\3\2\2\2\u02a6\u02a7\3\2\2\2\u02a7"+
		"\u02bd\7\u00a0\2\2\u02a8\u02a9\7\u00a6\2\2\u02a9\u02ab\7\u009e\2\2\u02aa"+
		"\u02ac\5\60\31\2\u02ab\u02aa\3\2\2\2\u02ab\u02ac\3\2\2\2\u02ac\u02ad\3"+
		"\2\2\2\u02ad\u02bd\7\u00a0\2\2\u02ae\u02af\7\u00a8\2\2\u02af\u02b1\7\u009e"+
		"\2\2\u02b0\u02b2\5\60\31\2\u02b1\u02b0\3\2\2\2\u02b1\u02b2\3\2\2\2\u02b2"+
		"\u02b3\3\2\2\2\u02b3\u02bd\7\u00a0\2\2\u02b4\u02bd\5 \21\2\u02b5\u02bd"+
		"\5\"\22\2\u02b6\u02b7\5\26\f\2\u02b7\u02b8\5 \21\2\u02b8\u02bd\3\2\2\2"+
		"\u02b9\u02ba\5\26\f\2\u02ba\u02bb\5\"\22\2\u02bb\u02bd\3\2\2\2\u02bc\u0284"+
		"\3\2\2\2\u02bc\u028d\3\2\2\2\u02bc\u0296\3\2\2\2\u02bc\u029c\3\2\2\2\u02bc"+
		"\u02a2\3\2\2\2\u02bc\u02a8\3\2\2\2\u02bc\u02ae\3\2\2\2\u02bc\u02b4\3\2"+
		"\2\2\u02bc\u02b5\3\2\2\2\u02bc\u02b6\3\2\2\2\u02bc\u02b9\3\2\2\2\u02bd"+
		"\31\3\2\2\2\u02be\u02bf\5$\23\2\u02bf\u02c0\7\u009e\2\2\u02c0\u02c3\5"+
		"P)\2\u02c1\u02c2\7\u009c\2\2\u02c2\u02c4\5P)\2\u02c3\u02c1\3\2\2\2\u02c3"+
		"\u02c4\3\2\2\2\u02c4\u02c5\3\2\2\2\u02c5\u02c6\7\u00a0\2\2\u02c6\u02d2"+
		"\3\2\2\2\u02c7\u02c8\5\26\f\2\u02c8\u02c9\7\u009e\2\2\u02c9\u02ca\5P)"+
		"\2\u02ca\u02cb\7\u00a0\2\2\u02cb\u02cc\5$\23\2\u02cc\u02d2\3\2\2\2\u02cd"+
		"\u02d2\5$\23\2\u02ce\u02cf\5\26\f\2\u02cf\u02d0\5$\23\2\u02d0\u02d2\3"+
		"\2\2\2\u02d1\u02be\3\2\2\2\u02d1\u02c7\3\2\2\2\u02d1\u02cd\3\2\2\2\u02d1"+
		"\u02ce\3\2\2\2\u02d2\33\3\2\2\2\u02d3\u02d7\5 \21\2\u02d4\u02d7\5\"\22"+
		"\2\u02d5\u02d7\5$\23\2\u02d6\u02d3\3\2\2\2\u02d6\u02d4\3\2\2\2\u02d6\u02d5"+
		"\3\2\2\2\u02d7\35\3\2\2\2\u02d8\u02db\5 \21\2\u02d9\u02db\5\"\22\2\u02da"+
		"\u02d8\3\2\2\2\u02da\u02d9\3\2\2\2\u02db\37\3\2\2\2\u02dc\u02dd\7\u00a9"+
		"\2\2\u02dd!\3\2\2\2\u02de\u02df\7\u00aa\2\2\u02df#\3\2\2\2\u02e0\u02e1"+
		"\7\u00ab\2\2\u02e1%\3\2\2\2\u02e2\u02e3\7\u00ac\2\2\u02e3\'\3\2\2\2\u02e4"+
		"\u030c\5\34\17\2\u02e5\u02f0\5\34\17\2\u02e6\u02e7\7\u009e\2\2\u02e7\u02ea"+
		"\5P)\2\u02e8\u02e9\7\u009c\2\2\u02e9\u02eb\5P)\2\u02ea\u02e8\3\2\2\2\u02ea"+
		"\u02eb\3\2\2\2\u02eb\u02ec\3\2\2\2\u02ec\u02ed\7\u00a0\2\2\u02ed\u02ef"+
		"\3\2\2\2\u02ee\u02e6\3\2\2\2\u02ef\u02f2\3\2\2\2\u02f0\u02ee\3\2\2\2\u02f0"+
		"\u02f1\3\2\2\2\u02f1\u030c\3\2\2\2\u02f2\u02f0\3\2\2\2\u02f3\u02f4\5\26"+
		"\f\2\u02f4\u02f5\5 \21\2\u02f5\u030c\3\2\2\2\u02f6\u02f7\5\26\f\2\u02f7"+
		"\u02f8\5\"\22\2\u02f8\u030c\3\2\2\2\u02f9\u02fa\5\26\f\2\u02fa\u02fb\7"+
		"\u009e\2\2\u02fb\u02fc\5P)\2\u02fc\u02fd\7\u00a0\2\2\u02fd\u02fe\5 \21"+
		"\2\u02fe\u030c\3\2\2\2\u02ff\u0300\5\26\f\2\u0300\u0301\7\u009e\2\2\u0301"+
		"\u0302\5P)\2\u0302\u0303\7\u00a0\2\2\u0303\u0304\5\"\22\2\u0304\u030c"+
		"\3\2\2\2\u0305\u030c\5\26\f\2\u0306\u0307\5\26\f\2\u0307\u0308\7\u009e"+
		"\2\2\u0308\u0309\5P)\2\u0309\u030a\7\u00a0\2\2\u030a\u030c\3\2\2\2\u030b"+
		"\u02e4\3\2\2\2\u030b\u02e5\3\2\2\2\u030b\u02f3\3\2\2\2\u030b\u02f6\3\2"+
		"\2\2\u030b\u02f9\3\2\2\2\u030b\u02ff\3\2\2\2\u030b\u0305\3\2\2\2\u030b"+
		"\u0306\3\2\2\2\u030c)\3\2\2\2\u030d\u030e\5\34\17\2\u030e\u030f\7\u009e"+
		"\2\2\u030f\u0314\5P)\2\u0310\u0311\7\u009c\2\2\u0311\u0313\5P)\2\u0312"+
		"\u0310\3\2\2\2\u0313\u0316\3\2\2\2\u0314\u0312\3\2\2\2\u0314\u0315\3\2"+
		"\2\2\u0315\u0317\3\2\2\2\u0316\u0314\3\2\2\2\u0317\u0318\7\u00a0\2\2\u0318"+
		"\u0321\3\2\2\2\u0319\u031a\5\26\f\2\u031a\u031b\7\u009e\2\2\u031b\u031c"+
		"\5P)\2\u031c\u031d\7\u009c\2\2\u031d\u031e\5 \21\2\u031e\u031f\7\u00a0"+
		"\2\2\u031f\u0321\3\2\2\2\u0320\u030d\3\2\2\2\u0320\u0319\3\2\2\2\u0321"+
		"+\3\2\2\2\u0322\u0327\5(\25\2\u0323\u0324\7\u009c\2\2\u0324\u0326\5(\25"+
		"\2\u0325\u0323\3\2\2\2\u0326\u0329\3\2\2\2\u0327\u0325\3\2\2\2\u0327\u0328"+
		"\3\2\2\2\u0328-\3\2\2\2\u0329\u0327\3\2\2\2\u032a\u032c\7%\2\2\u032b\u032a"+
		"\3\2\2\2\u032b\u032c\3\2\2\2\u032c\u032d\3\2\2\2\u032d\u0335\5\34\17\2"+
		"\u032e\u0330\7\u009c\2\2\u032f\u0331\7%\2\2\u0330\u032f\3\2\2\2\u0330"+
		"\u0331\3\2\2\2\u0331\u0332\3\2\2\2\u0332\u0334\5\34\17\2\u0333\u032e\3"+
		"\2\2\2\u0334\u0337\3\2\2\2\u0335\u0333\3\2\2\2\u0335\u0336\3\2\2\2\u0336"+
		"/\3\2\2\2\u0337\u0335\3\2\2\2\u0338\u033d\5<\37\2\u0339\u033a\7\u009c"+
		"\2\2\u033a\u033c\5<\37\2\u033b\u0339\3\2\2\2\u033c\u033f\3\2\2\2\u033d"+
		"\u033b\3\2\2\2\u033d\u033e\3\2\2\2\u033e\61\3\2\2\2\u033f\u033d\3\2\2"+
		"\2\u0340\u0345\5<\37\2\u0341\u0342\7\u009c\2\2\u0342\u0344\5<\37\2\u0343"+
		"\u0341\3\2\2\2\u0344\u0347\3\2\2\2\u0345\u0343\3\2\2\2\u0345\u0346\3\2"+
		"\2\2\u0346\63\3\2\2\2\u0347\u0345\3\2\2\2\u0348\u034a\7\u0099\2\2\u0349"+
		"\u0348\3\2\2\2\u0349\u034a\3\2\2\2\u034a\u034b\3\2\2\2\u034b\u0354\5<"+
		"\37\2\u034c\u034d\7&\2\2\u034d\u034e\7\u009e\2\2\u034e\u034f\5P)\2\u034f"+
		"\u0350\7\u00a0\2\2\u0350\u0354\3\2\2\2\u0351\u0352\7&\2\2\u0352\u0354"+
		"\5P)\2\u0353\u0349\3\2\2\2\u0353\u034c\3\2\2\2\u0353\u0351\3\2\2\2\u0354"+
		"\65\3\2\2\2\u0355\u0357\7\u0098\2\2\u0356\u0355\3\2\2\2\u0357\u0358\3"+
		"\2\2\2\u0358\u0356\3\2\2\2\u0358\u0359\3\2\2\2\u0359\67\3\2\2\2\u035a"+
		"\u035e\7\u009c\2\2\u035b\u035e\7\u00a1\2\2\u035c\u035e\5\66\34\2\u035d"+
		"\u035a\3\2\2\2\u035d\u035b\3\2\2\2\u035d\u035c\3\2\2\2\u035e9\3\2\2\2"+
		"\u035f\u0361\5\66\34\2\u0360\u035f\3\2\2\2\u0360\u0361\3\2\2\2\u0361\u0363"+
		"\3\2\2\2\u0362\u0364\7\u00a1\2\2\u0363\u0362\3\2\2\2\u0363\u0364\3\2\2"+
		"\2\u0364\u0365\3\2\2\2\u0365\u036b\5\64\33\2\u0366\u0367\58\35\2\u0367"+
		"\u0368\5\64\33\2\u0368\u036a\3\2\2\2\u0369\u0366\3\2\2\2\u036a\u036d\3"+
		"\2\2\2\u036b\u0369\3\2\2\2\u036b\u036c\3\2\2\2\u036c\u036f\3\2\2\2\u036d"+
		"\u036b\3\2\2\2\u036e\u0370\7\u00a1\2\2\u036f\u036e\3\2\2\2\u036f\u0370"+
		"\3\2\2\2\u0370;\3\2\2\2\u0371\u0374\5P)\2\u0372\u0374\5L\'\2\u0373\u0371"+
		"\3\2\2\2\u0373\u0372\3\2\2\2\u0374=\3\2\2\2\u0375\u037b\5@!\2\u0376\u037b"+
		"\5F$\2\u0377\u037b\5B\"\2\u0378\u037b\5D#\2\u0379\u037b\5V,\2\u037a\u0375"+
		"\3\2\2\2\u037a\u0376\3\2\2\2\u037a\u0377\3\2\2\2\u037a\u0378\3\2\2\2\u037a"+
		"\u0379\3\2\2\2\u037b?\3\2\2\2\u037c\u037d\7\u00b0\2\2\u037dA\3\2\2\2\u037e"+
		"\u037f\7\u00ae\2\2\u037fC\3\2\2\2\u0380\u0381\7\u00af\2\2\u0381E\3\2\2"+
		"\2\u0382\u0384\t\5\2\2\u0383\u0382\3\2\2\2\u0383\u0384\3\2\2\2\u0384\u0385"+
		"\3\2\2\2\u0385\u0386\7\u00b1\2\2\u0386G\3\2\2\2\u0387\u03b5\7t\2\2\u0388"+
		"\u0389\7w\2\2\u0389\u03b5\5P)\2\u038a\u038b\7x\2\2\u038b\u038c\7\u009e"+
		"\2\2\u038c\u038d\5L\'\2\u038d\u038e\7\u009c\2\2\u038e\u038f\5P)\2\u038f"+
		"\u0390\7\u00a0\2\2\u0390\u03b5\3\2\2\2\u0391\u0392\7y\2\2\u0392\u0393"+
		"\7\u009e\2\2\u0393\u0394\5L\'\2\u0394\u0395\7\u009c\2\2\u0395\u0396\5"+
		"P)\2\u0396\u0397\7\u009c\2\2\u0397\u0398\5P)\2\u0398\u0399\7\u00a0\2\2"+
		"\u0399\u03b5\3\2\2\2\u039a\u039b\7y\2\2\u039b\u039c\7\u009e\2\2\u039c"+
		"\u039d\5L\'\2\u039d\u039e\7\u009c\2\2\u039e\u039f\5P)\2\u039f\u03a0\7"+
		"\u00a0\2\2\u03a0\u03b5\3\2\2\2\u03a1\u03a2\7z\2\2\u03a2\u03a3\7\u009e"+
		"\2\2\u03a3\u03a4\5L\'\2\u03a4\u03a5\7\u009c\2\2\u03a5\u03a6\5P)\2\u03a6"+
		"\u03a7\7\u00a0\2\2\u03a7\u03b5\3\2\2\2\u03a8\u03a9\7u\2\2\u03a9\u03b5"+
		"\5P)\2\u03aa\u03ab\7u\2\2\u03ab\u03ac\7\u0099\2\2\u03ac\u03b5\5P)\2\u03ad"+
		"\u03ae\7v\2\2\u03ae\u03af\7\u009e\2\2\u03af\u03b0\5P)\2\u03b0\u03b1\7"+
		"\u009c\2\2\u03b1\u03b2\5L\'\2\u03b2\u03b3\7\u00a0\2\2\u03b3\u03b5\3\2"+
		"\2\2\u03b4\u0387\3\2\2\2\u03b4\u0388\3\2\2\2\u03b4\u038a\3\2\2\2\u03b4"+
		"\u0391\3\2\2\2\u03b4\u039a\3\2\2\2\u03b4\u03a1\3\2\2\2\u03b4\u03a8\3\2"+
		"\2\2\u03b4\u03aa\3\2\2\2\u03b4\u03ad\3\2\2\2\u03b5I\3\2\2\2\u03b6\u03b7"+
		"\7\u00a4\2\2\u03b7K\3\2\2\2\u03b8\u03b9\b\'\1\2\u03b9\u03ba\7\u009e\2"+
		"\2\u03ba\u03bb\5L\'\2\u03bb\u03bc\7\u00a0\2\2\u03bc\u03c1\3\2\2\2\u03bd"+
		"\u03c1\5H%\2\u03be\u03c1\5\32\16\2\u03bf\u03c1\5J&\2\u03c0\u03b8\3\2\2"+
		"\2\u03c0\u03bd\3\2\2\2\u03c0\u03be\3\2\2\2\u03c0\u03bf\3\2\2\2\u03c1\u03c7"+
		"\3\2\2\2\u03c2\u03c3\f\5\2\2\u03c3\u03c4\7\u008b\2\2\u03c4\u03c6\5L\'"+
		"\6\u03c5\u03c2\3\2\2\2\u03c6\u03c9\3\2\2\2\u03c7\u03c5\3\2\2\2\u03c7\u03c8"+
		"\3\2\2\2\u03c8M\3\2\2\2\u03c9\u03c7\3\2\2\2\u03ca\u0429\7a\2\2\u03cb\u0429"+
		"\7\20\2\2\u03cc\u0429\7-\2\2\u03cd\u0429\7`\2\2\u03ce\u0429\7{\2\2\u03cf"+
		"\u0429\7|\2\2\u03d0\u0429\7}\2\2\u03d1\u03d2\7{\2\2\u03d2\u03d3\7\u009e"+
		"\2\2\u03d3\u03d4\5P)\2\u03d4\u03d5\7\u00a0\2\2\u03d5\u0429\3\2\2\2\u03d6"+
		"\u03d7\7c\2\2\u03d7\u0429\5P)\2\u03d8\u03d9\7d\2\2\u03d9\u0429\5P)\2\u03da"+
		"\u03db\7e\2\2\u03db\u0429\5P)\2\u03dc\u03dd\7f\2\2\u03dd\u0429\5P)\2\u03de"+
		"\u03df\7g\2\2\u03df\u0429\5P)\2\u03e0\u03e1\7h\2\2\u03e1\u0429\5P)\2\u03e2"+
		"\u03e3\7i\2\2\u03e3\u0429\5P)\2\u03e4\u03e5\7j\2\2\u03e5\u0429\5P)\2\u03e6"+
		"\u03e7\7k\2\2\u03e7\u0429\5P)\2\u03e8\u03e9\7l\2\2\u03e9\u0429\5P)\2\u03ea"+
		"\u03eb\7m\2\2\u03eb\u0429\5P)\2\u03ec\u03ed\7n\2\2\u03ed\u0429\5P)\2\u03ee"+
		"\u03ef\7b\2\2\u03ef\u0429\5P)\2\u03f0\u03f1\7o\2\2\u03f1\u0429\5P)\2\u03f2"+
		"\u03f3\7\26\2\2\u03f3\u0429\5P)\2\u03f4\u03f5\7\22\2\2\u03f5\u0429\5P"+
		")\2\u03f6\u03f7\7W\2\2\u03f7\u03f8\7\u009e\2\2\u03f8\u03f9\5P)\2\u03f9"+
		"\u03fa\7\u009c\2\2\u03fa\u03fb\5P)\2\u03fb\u03fc\7\u00a0\2\2\u03fc\u0429"+
		"\3\2\2\2\u03fd\u03fe\7?\2\2\u03fe\u0429\5P)\2\u03ff\u0400\7B\2\2\u0400"+
		"\u0429\5P)\2\u0401\u0402\7E\2\2\u0402\u0403\7\u009e\2\2\u0403\u0404\5"+
		"L\'\2\u0404\u0405\7\u00a0\2\2\u0405\u0429\3\2\2\2\u0406\u0407\7F\2\2\u0407"+
		"\u0408\7\u009e\2\2\u0408\u0409\5L\'\2\u0409\u040a\7\u00a0\2\2\u040a\u0429"+
		"\3\2\2\2\u040b\u040c\7G\2\2\u040c\u040d\7\u009e\2\2\u040d\u040e\5L\'\2"+
		"\u040e\u040f\7\u00a0\2\2\u040f\u0429\3\2\2\2\u0410\u0411\7H\2\2\u0411"+
		"\u0429\5P)\2\u0412\u0413\7p\2\2\u0413\u0429\5L\'\2\u0414\u0415\7q\2\2"+
		"\u0415\u0429\5L\'\2\u0416\u0417\7r\2\2\u0417\u0418\7\u009e\2\2\u0418\u0419"+
		"\5L\'\2\u0419\u041a\7\u009c\2\2\u041a\u041b\5L\'\2\u041b\u041c\7\u00a0"+
		"\2\2\u041c\u0429\3\2\2\2\u041d\u041e\7r\2\2\u041e\u041f\7\u009e\2\2\u041f"+
		"\u0420\5L\'\2\u0420\u0421\7\u009c\2\2\u0421\u0422\5L\'\2\u0422\u0423\7"+
		"\u009c\2\2\u0423\u0424\5P)\2\u0424\u0425\7\u00a0\2\2\u0425\u0429\3\2\2"+
		"\2\u0426\u0427\7s\2\2\u0427\u0429\5L\'\2\u0428\u03ca\3\2\2\2\u0428\u03cb"+
		"\3\2\2\2\u0428\u03cc\3\2\2\2\u0428\u03cd\3\2\2\2\u0428\u03ce\3\2\2\2\u0428"+
		"\u03cf\3\2\2\2\u0428\u03d0\3\2\2\2\u0428\u03d1\3\2\2\2\u0428\u03d6\3\2"+
		"\2\2\u0428\u03d8\3\2\2\2\u0428\u03da\3\2\2\2\u0428\u03dc\3\2\2\2\u0428"+
		"\u03de\3\2\2\2\u0428\u03e0\3\2\2\2\u0428\u03e2\3\2\2\2\u0428\u03e4\3\2"+
		"\2\2\u0428\u03e6\3\2\2\2\u0428\u03e8\3\2\2\2\u0428\u03ea\3\2\2\2\u0428"+
		"\u03ec\3\2\2\2\u0428\u03ee\3\2\2\2\u0428\u03f0\3\2\2\2\u0428\u03f2\3\2"+
		"\2\2\u0428\u03f4\3\2\2\2\u0428\u03f6\3\2\2\2\u0428\u03fd\3\2\2\2\u0428"+
		"\u03ff\3\2\2\2\u0428\u0401\3\2\2\2\u0428\u0406\3\2\2\2\u0428\u040b\3\2"+
		"\2\2\u0428\u0410\3\2\2\2\u0428\u0412\3\2\2\2\u0428\u0414\3\2\2\2\u0428"+
		"\u0416\3\2\2\2\u0428\u041d\3\2\2\2\u0428\u0426\3\2\2\2\u0429O\3\2\2\2"+
		"\u042a\u042b\b)\1\2\u042b\u042c\7\u008c\2\2\u042c\u0437\5P)\26\u042d\u0437"+
		"\5T+\2\u042e\u0437\5N(\2\u042f\u0437\5R*\2\u0430\u0431\5L\'\2\u0431\u0432"+
		"\5X-\2\u0432\u0433\5L\'\2\u0433\u0437\3\2\2\2\u0434\u0437\5\30\r\2\u0435"+
		"\u0437\5> \2\u0436\u042a\3\2\2\2\u0436\u042d\3\2\2\2\u0436\u042e\3\2\2"+
		"\2\u0436\u042f\3\2\2\2\u0436\u0430\3\2\2\2\u0436\u0434\3\2\2\2\u0436\u0435"+
		"\3\2\2\2\u0437\u0462\3\2\2\2\u0438\u0439\f\22\2\2\u0439\u043a\7\u008a"+
		"\2\2\u043a\u0461\5P)\22\u043b\u043c\f\21\2\2\u043c\u043d\7\u008d\2\2\u043d"+
		"\u0461\5P)\22\u043e\u043f\f\20\2\2\u043f\u0440\7\u008e\2\2\u0440\u0461"+
		"\5P)\21\u0441\u0442\f\17\2\2\u0442\u0443\7\u0089\2\2\u0443\u0461\5P)\20"+
		"\u0444\u0445\f\16\2\2\u0445\u0446\7\u0088\2\2\u0446\u0461\5P)\17\u0447"+
		"\u0448\f\r\2\2\u0448\u0449\7\u008b\2\2\u0449\u0461\5P)\16\u044a\u044b"+
		"\f\f\2\2\u044b\u044c\7\u008c\2\2\u044c\u0461\5P)\r\u044d\u044e\f\13\2"+
		"\2\u044e\u044f\5X-\2\u044f\u0450\5P)\f\u0450\u0461\3\2\2\2\u0451\u0452"+
		"\f\t\2\2\u0452\u0453\7\u008f\2\2\u0453\u0461\5P)\n\u0454\u0455\f\b\2\2"+
		"\u0455\u0456\7\u0090\2\2\u0456\u0461\5P)\t\u0457\u0458\f\7\2\2\u0458\u0459"+
		"\7\u0085\2\2\u0459\u0461\5P)\b\u045a\u045b\f\6\2\2\u045b\u045c\7\u0086"+
		"\2\2\u045c\u0461\5P)\7\u045d\u045e\f\5\2\2\u045e\u045f\7\u0087\2\2\u045f"+
		"\u0461\5P)\6\u0460\u0438\3\2\2\2\u0460\u043b\3\2\2\2\u0460\u043e\3\2\2"+
		"\2\u0460\u0441\3\2\2\2\u0460\u0444\3\2\2\2\u0460\u0447\3\2\2\2\u0460\u044a"+
		"\3\2\2\2\u0460\u044d\3\2\2\2\u0460\u0451\3\2\2\2\u0460\u0454\3\2\2\2\u0460"+
		"\u0457\3\2\2\2\u0460\u045a\3\2\2\2\u0460\u045d\3\2\2\2\u0461\u0464\3\2"+
		"\2\2\u0462\u0460\3\2\2\2\u0462\u0463\3\2\2\2\u0463Q\3\2\2\2\u0464\u0462"+
		"\3\2\2\2\u0465\u0466\7\u009e\2\2\u0466\u0467\5P)\2\u0467\u0468\7\u00a0"+
		"\2\2\u0468S\3\2\2\2\u0469\u046a\7\u0084\2\2\u046a\u046b\5P)\2\u046bU\3"+
		"\2\2\2\u046c\u046d\t\6\2\2\u046dW\3\2\2\2\u046e\u0475\7~\2\2\u046f\u0475"+
		"\7\177\2\2\u0470\u0475\7\u0080\2\2\u0471\u0475\7\u0081\2\2\u0472\u0475"+
		"\7\u0082\2\2\u0473\u0475\7\u0083\2\2\u0474\u046e\3\2\2\2\u0474\u046f\3"+
		"\2\2\2\u0474\u0470\3\2\2\2\u0474\u0471\3\2\2\2\u0474\u0472\3\2\2\2\u0474"+
		"\u0473\3\2\2\2\u0475Y\3\2\2\2V]dgkpsw|\u0082\u0088\u008b\u0098\u009c\u00a8"+
		"\u00b1\u00b7\u00bd\u00c7\u00cf\u00d8\u00df\u00ec\u00f3\u00f8\u00fd\u0103"+
		"\u010a\u010c\u0111\u011d\u0121\u012d\u013b\u0145\u014d\u0156\u0169\u017c"+
		"\u0181\u01b7\u0269\u0271\u027b\u0280\u0289\u0292\u02a5\u02ab\u02b1\u02bc"+
		"\u02c3\u02d1\u02d6\u02da\u02ea\u02f0\u030b\u0314\u0320\u0327\u032b\u0330"+
		"\u0335\u033d\u0345\u0349\u0353\u0358\u035d\u0360\u0363\u036b\u036f\u0373"+
		"\u037a\u0383\u03b4\u03c0\u03c7\u0428\u0436\u0460\u0462\u0474";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}