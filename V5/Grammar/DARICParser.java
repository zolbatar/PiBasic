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
		ENDIF=10, ENDFN=11, ENDPROC=12, ENDWHILE=13, FALSE=14, FOR=15, FN=16, 
		IF=17, IN=18, INPUT=19, GLOBAL=20, LOCAL=21, LET=22, NEXT=23, OF=24, OTHERWISE=25, 
		PRINT=26, PROC=27, READ=28, REM=29, REPEAT=30, RESTORE=31, RETURN=32, 
		SPC=33, STEP=34, THEN=35, TO=36, TRACEON=37, TRACEOFF=38, TRUE=39, TYPE=40, 
		UNTIL=41, WHEN=42, WHILE=43, TIME=44, PI=45, SQR=46, LN=47, LOG=48, EXP=49, 
		ATN=50, TAN=51, COS=52, SIN=53, ABS=54, ACS=55, ASN=56, DEG=57, RAD=58, 
		SGN=59, ASC=60, LEN=61, INSTR=62, VAL=63, TIMES=64, STRS=65, STRINGS=66, 
		CHRS=67, LEFTS=68, MIDS=69, RIGHTS=70, RND=71, RND0=72, RND1=73, EQ=74, 
		NE=75, GT=76, GE=77, LT=78, LE=79, NOT=80, AND=81, OR=82, EOR=83, MOD=84, 
		DIV=85, HAT=86, PLUS=87, MINUS=88, MULTIPLY=89, DIVIDE=90, SHL=91, SHR=92, 
		PLUS_E=93, MINUS_E=94, MULTIPLY_E=95, DIVIDE_E=96, SHL_E=97, SHR_E=98, 
		NEWLINE=99, TICK=100, TILDE=101, COLON=102, COMMA=103, DOLLAR=104, LPAREN=105, 
		PERCENT=106, RPAREN=107, SEMICOLON=108, UNDERSCORE=109, COMMENT=110, STRINGLITERAL=111, 
		PROC_NAME=112, FN_INTEGER=113, FN_FLOAT=114, FN_STRING=115, VARIABLE_FLOAT=116, 
		VARIABLE_INTEGER=117, VARIABLE_STRING=118, VARIABLE_TYPE=119, NAME=120, 
		HEXNUMBER=121, BINARYNUMBER=122, NUMBER=123, FLOAT=124, ALPHA=125, DIGIT=126, 
		WS=127;
	public static final int
		RULE_prog = 0, RULE_line = 1, RULE_content = 2, RULE_body = 3, RULE_bodyStar = 4, 
		RULE_linenumber = 5, RULE_stmt = 6, RULE_when = 7, RULE_fnName = 8, RULE_literal = 9, 
		RULE_var = 10, RULE_typeVar = 11, RULE_numVar = 12, RULE_strVar = 13, 
		RULE_justVar = 14, RULE_justNumberVar = 15, RULE_varName = 16, RULE_varNameInteger = 17, 
		RULE_varNameString = 18, RULE_varNameType = 19, RULE_varDecl = 20, RULE_varDeclWithDimension = 21, 
		RULE_varList = 22, RULE_functionVarList = 23, RULE_functionParList = 24, 
		RULE_exprList = 25, RULE_printListItem = 26, RULE_printListTick = 27, 
		RULE_printListSeparator = 28, RULE_printList = 29, RULE_expr = 30, RULE_number = 31, 
		RULE_numberInteger = 32, RULE_numberHex = 33, RULE_numberBinary = 34, 
		RULE_numberFloat = 35, RULE_strFunc = 36, RULE_string = 37, RULE_strExpr = 38, 
		RULE_numFunc = 39, RULE_numExpr = 40, RULE_compare = 41;
	private static String[] makeRuleNames() {
		return new String[] {
			"prog", "line", "content", "body", "bodyStar", "linenumber", "stmt", 
			"when", "fnName", "literal", "var", "typeVar", "numVar", "strVar", "justVar", 
			"justNumberVar", "varName", "varNameInteger", "varNameString", "varNameType", 
			"varDecl", "varDeclWithDimension", "varList", "functionVarList", "functionParList", 
			"exprList", "printListItem", "printListTick", "printListSeparator", "printList", 
			"expr", "number", "numberInteger", "numberHex", "numberBinary", "numberFloat", 
			"strFunc", "string", "strExpr", "numFunc", "numExpr", "compare"
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
			null, null, "'='", "'<>'", "'>'", "'>='", "'<'", "'<='", null, null, 
			null, null, null, null, "'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", "'>>'", 
			"'+='", "'-='", "'*='", "'/='", "'<<='", "'>>='", null, "'''", "'~'", 
			"':'", "','", "'$'", "'('", "'%'", "')'", "';'", "'_'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "BREAKPOINT", "CASE", "CHAIN", "DATA", "DEF", "DIM", "ELSE", "END", 
			"ENDCASE", "ENDIF", "ENDFN", "ENDPROC", "ENDWHILE", "FALSE", "FOR", "FN", 
			"IF", "IN", "INPUT", "GLOBAL", "LOCAL", "LET", "NEXT", "OF", "OTHERWISE", 
			"PRINT", "PROC", "READ", "REM", "REPEAT", "RESTORE", "RETURN", "SPC", 
			"STEP", "THEN", "TO", "TRACEON", "TRACEOFF", "TRUE", "TYPE", "UNTIL", 
			"WHEN", "WHILE", "TIME", "PI", "SQR", "LN", "LOG", "EXP", "ATN", "TAN", 
			"COS", "SIN", "ABS", "ACS", "ASN", "DEG", "RAD", "SGN", "ASC", "LEN", 
			"INSTR", "VAL", "TIMES", "STRS", "STRINGS", "CHRS", "LEFTS", "MIDS", 
			"RIGHTS", "RND", "RND0", "RND1", "EQ", "NE", "GT", "GE", "LT", "LE", 
			"NOT", "AND", "OR", "EOR", "MOD", "DIV", "HAT", "PLUS", "MINUS", "MULTIPLY", 
			"DIVIDE", "SHL", "SHR", "PLUS_E", "MINUS_E", "MULTIPLY_E", "DIVIDE_E", 
			"SHL_E", "SHR_E", "NEWLINE", "TICK", "TILDE", "COLON", "COMMA", "DOLLAR", 
			"LPAREN", "PERCENT", "RPAREN", "SEMICOLON", "UNDERSCORE", "COMMENT", 
			"STRINGLITERAL", "PROC_NAME", "FN_INTEGER", "FN_FLOAT", "FN_STRING", 
			"VARIABLE_FLOAT", "VARIABLE_INTEGER", "VARIABLE_STRING", "VARIABLE_TYPE", 
			"NAME", "HEXNUMBER", "BINARYNUMBER", "NUMBER", "FLOAT", "ALPHA", "DIGIT", 
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterProg(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitProg(this);
		}
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_prog);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(87);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE))) != 0) || ((((_la - 99)) & ~0x3f) == 0 && ((1L << (_la - 99)) & ((1L << (NEWLINE - 99)) | (1L << (COLON - 99)) | (1L << (COMMENT - 99)) | (1L << (PROC_NAME - 99)) | (1L << (FN_INTEGER - 99)) | (1L << (FN_FLOAT - 99)) | (1L << (FN_STRING - 99)) | (1L << (VARIABLE_FLOAT - 99)) | (1L << (VARIABLE_INTEGER - 99)) | (1L << (VARIABLE_STRING - 99)) | (1L << (VARIABLE_TYPE - 99)) | (1L << (NUMBER - 99)))) != 0)) {
				{
				{
				setState(84);
				line();
				}
				}
				setState(89);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(90);
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
		public TerminalNode COLON() { return getToken(DARICParser.COLON, 0); }
		public ContentContext content() {
			return getRuleContext(ContentContext.class,0);
		}
		public LinenumberContext linenumber() {
			return getRuleContext(LinenumberContext.class,0);
		}
		public LineContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_line; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterLine(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitLine(this);
		}
	}

	public final LineContext line() throws RecognitionException {
		LineContext _localctx = new LineContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_line);
		try {
			setState(102);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NEWLINE:
				enterOuterAlt(_localctx, 1);
				{
				setState(92);
				match(NEWLINE);
				}
				break;
			case COLON:
				enterOuterAlt(_localctx, 2);
				{
				setState(93);
				match(COLON);
				setState(94);
				match(NEWLINE);
				}
				break;
			case BREAKPOINT:
			case CASE:
			case CHAIN:
			case DATA:
			case DEF:
			case DIM:
			case END:
			case FOR:
			case IF:
			case INPUT:
			case GLOBAL:
			case LOCAL:
			case LET:
			case PRINT:
			case READ:
			case REM:
			case REPEAT:
			case RESTORE:
			case RETURN:
			case TRACEON:
			case TRACEOFF:
			case TYPE:
			case WHILE:
			case COMMENT:
			case PROC_NAME:
			case FN_INTEGER:
			case FN_FLOAT:
			case FN_STRING:
			case VARIABLE_FLOAT:
			case VARIABLE_INTEGER:
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				enterOuterAlt(_localctx, 3);
				{
				setState(95);
				content();
				setState(96);
				match(NEWLINE);
				}
				break;
			case NUMBER:
				enterOuterAlt(_localctx, 4);
				{
				setState(98);
				linenumber();
				setState(99);
				content();
				setState(100);
				match(NEWLINE);
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

	public static class ContentContext extends ParserRuleContext {
		public TerminalNode COMMENT() { return getToken(DARICParser.COMMENT, 0); }
		public TerminalNode REM() { return getToken(DARICParser.REM, 0); }
		public List<StmtContext> stmt() {
			return getRuleContexts(StmtContext.class);
		}
		public StmtContext stmt(int i) {
			return getRuleContext(StmtContext.class,i);
		}
		public List<TerminalNode> COLON() { return getTokens(DARICParser.COLON); }
		public TerminalNode COLON(int i) {
			return getToken(DARICParser.COLON, i);
		}
		public ContentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_content; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterContent(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitContent(this);
		}
	}

	public final ContentContext content() throws RecognitionException {
		ContentContext _localctx = new ContentContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_content);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(115);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BREAKPOINT:
			case CASE:
			case CHAIN:
			case DATA:
			case DEF:
			case DIM:
			case END:
			case FOR:
			case IF:
			case INPUT:
			case GLOBAL:
			case LOCAL:
			case LET:
			case PRINT:
			case READ:
			case REPEAT:
			case RESTORE:
			case RETURN:
			case TRACEON:
			case TRACEOFF:
			case TYPE:
			case WHILE:
			case PROC_NAME:
			case FN_INTEGER:
			case FN_FLOAT:
			case FN_STRING:
			case VARIABLE_FLOAT:
			case VARIABLE_INTEGER:
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				{
				setState(104);
				stmt();
				setState(111);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(105);
						match(COLON);
						setState(107);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
						case 1:
							{
							setState(106);
							stmt();
							}
							break;
						}
						}
						} 
					}
					setState(113);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
				}
				}
				}
				break;
			case REM:
			case COMMENT:
				{
				setState(114);
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
				break;
			default:
				throw new NoViableAltException(this);
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
		public ContentContext content() {
			return getRuleContext(ContentContext.class,0);
		}
		public LineContext line() {
			return getRuleContext(LineContext.class,0);
		}
		public BodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_body; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterBody(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitBody(this);
		}
	}

	public final BodyContext body() throws RecognitionException {
		BodyContext _localctx = new BodyContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_body);
		try {
			setState(119);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(117);
				content();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(118);
				line();
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

	public static class BodyStarContext extends ParserRuleContext {
		public TerminalNode COLON() { return getToken(DARICParser.COLON, 0); }
		public List<BodyContext> body() {
			return getRuleContexts(BodyContext.class);
		}
		public BodyContext body(int i) {
			return getRuleContext(BodyContext.class,i);
		}
		public BodyStarContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bodyStar; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterBodyStar(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitBodyStar(this);
		}
	}

	public final BodyStarContext bodyStar() throws RecognitionException {
		BodyStarContext _localctx = new BodyStarContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_bodyStar);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(122);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				{
				setState(121);
				match(COLON);
				}
				break;
			}
			setState(127);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(124);
					body();
					}
					} 
				}
				setState(129);
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

	public static class LinenumberContext extends ParserRuleContext {
		public TerminalNode NUMBER() { return getToken(DARICParser.NUMBER, 0); }
		public LinenumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_linenumber; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterLinenumber(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitLinenumber(this);
		}
	}

	public final LinenumberContext linenumber() throws RecognitionException {
		LinenumberContext _localctx = new LinenumberContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_linenumber);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(130);
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
	public static class StmtTRACEOFFContext extends StmtContext {
		public TerminalNode TRACEOFF() { return getToken(DARICParser.TRACEOFF, 0); }
		public StmtTRACEOFFContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtTRACEOFF(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtTRACEOFF(this);
		}
	}
	public static class StmtRESTOREContext extends StmtContext {
		public TerminalNode RESTORE() { return getToken(DARICParser.RESTORE, 0); }
		public StmtRESTOREContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtRESTORE(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtRESTORE(this);
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
		public BodyStarContext bodyStar() {
			return getRuleContext(BodyStarContext.class,0);
		}
		public StmtCASEContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtCASE(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtCASE(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtTYPE(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtTYPE(this);
		}
	}
	public static class StmtCHAINContext extends StmtContext {
		public TerminalNode CHAIN() { return getToken(DARICParser.CHAIN, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public StmtCHAINContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtCHAIN(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtCHAIN(this);
		}
	}
	public static class StmtPRINTContext extends StmtContext {
		public TerminalNode PRINT() { return getToken(DARICParser.PRINT, 0); }
		public PrintListContext printList() {
			return getRuleContext(PrintListContext.class,0);
		}
		public StmtPRINTContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtPRINT(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtPRINT(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtINPUT(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtINPUT(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtDATA(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtDATA(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtLOCAL(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtLOCAL(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtREAD(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtREAD(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtCallFN(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtCallFN(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtCallPROC(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtCallPROC(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtLOCALDIM(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtLOCALDIM(this);
		}
	}
	public static class StmtWHILEContext extends StmtContext {
		public TerminalNode WHILE() { return getToken(DARICParser.WHILE, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode ENDWHILE() { return getToken(DARICParser.ENDWHILE, 0); }
		public List<BodyContext> body() {
			return getRuleContexts(BodyContext.class);
		}
		public BodyContext body(int i) {
			return getRuleContext(BodyContext.class,i);
		}
		public StmtWHILEContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtWHILE(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtWHILE(this);
		}
	}
	public static class StmtDEFPROCContext extends StmtContext {
		public TerminalNode DEF() { return getToken(DARICParser.DEF, 0); }
		public TerminalNode PROC_NAME() { return getToken(DARICParser.PROC_NAME, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public BodyStarContext bodyStar() {
			return getRuleContext(BodyStarContext.class,0);
		}
		public TerminalNode ENDPROC() { return getToken(DARICParser.ENDPROC, 0); }
		public FunctionVarListContext functionVarList() {
			return getRuleContext(FunctionVarListContext.class,0);
		}
		public StmtDEFPROCContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtDEFPROC(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtDEFPROC(this);
		}
	}
	public static class StmtENDContext extends StmtContext {
		public TerminalNode END() { return getToken(DARICParser.END, 0); }
		public StmtENDContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtEND(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtEND(this);
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
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public TerminalNode LET() { return getToken(DARICParser.LET, 0); }
		public TerminalNode GLOBAL() { return getToken(DARICParser.GLOBAL, 0); }
		public StmtLETContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtLET(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtLET(this);
		}
	}
	public static class StmtTRACEONContext extends StmtContext {
		public TerminalNode TRACEON() { return getToken(DARICParser.TRACEON, 0); }
		public StmtTRACEONContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtTRACEON(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtTRACEON(this);
		}
	}
	public static class StmtRETURNContext extends StmtContext {
		public TerminalNode RETURN() { return getToken(DARICParser.RETURN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public StmtRETURNContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtRETURN(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtRETURN(this);
		}
	}
	public static class StmtREPEATContext extends StmtContext {
		public TerminalNode REPEAT() { return getToken(DARICParser.REPEAT, 0); }
		public TerminalNode UNTIL() { return getToken(DARICParser.UNTIL, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public List<BodyContext> body() {
			return getRuleContexts(BodyContext.class);
		}
		public BodyContext body(int i) {
			return getRuleContext(BodyContext.class,i);
		}
		public StmtREPEATContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtREPEAT(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtREPEAT(this);
		}
	}
	public static class StmtBREAKPOINTContext extends StmtContext {
		public TerminalNode BREAKPOINT() { return getToken(DARICParser.BREAKPOINT, 0); }
		public StmtBREAKPOINTContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtBREAKPOINT(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtBREAKPOINT(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtDIM(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtDIM(this);
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
		public BodyStarContext bodyStar() {
			return getRuleContext(BodyStarContext.class,0);
		}
		public TerminalNode NEXT() { return getToken(DARICParser.NEXT, 0); }
		public TerminalNode LOCAL() { return getToken(DARICParser.LOCAL, 0); }
		public TerminalNode STEP() { return getToken(DARICParser.STEP, 0); }
		public StmtFORContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtFOR(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtFOR(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtIF(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtIF(this);
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
		public BodyStarContext bodyStar() {
			return getRuleContext(BodyStarContext.class,0);
		}
		public TerminalNode NEXT() { return getToken(DARICParser.NEXT, 0); }
		public TerminalNode LOCAL() { return getToken(DARICParser.LOCAL, 0); }
		public StmtFORINContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtFORIN(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtFORIN(this);
		}
	}
	public static class StmtIFMultilineContext extends StmtContext {
		public BodyStarContext t;
		public BodyStarContext f;
		public TerminalNode IF() { return getToken(DARICParser.IF, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public List<TerminalNode> NEWLINE() { return getTokens(DARICParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(DARICParser.NEWLINE, i);
		}
		public TerminalNode ENDIF() { return getToken(DARICParser.ENDIF, 0); }
		public List<BodyStarContext> bodyStar() {
			return getRuleContexts(BodyStarContext.class);
		}
		public BodyStarContext bodyStar(int i) {
			return getRuleContext(BodyStarContext.class,i);
		}
		public TerminalNode THEN() { return getToken(DARICParser.THEN, 0); }
		public TerminalNode ELSE() { return getToken(DARICParser.ELSE, 0); }
		public StmtIFMultilineContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtIFMultiline(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtIFMultiline(this);
		}
	}
	public static class StmtDEFFNContext extends StmtContext {
		public TerminalNode DEF() { return getToken(DARICParser.DEF, 0); }
		public FnNameContext fnName() {
			return getRuleContext(FnNameContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public BodyStarContext bodyStar() {
			return getRuleContext(BodyStarContext.class,0);
		}
		public TerminalNode ENDFN() { return getToken(DARICParser.ENDFN, 0); }
		public FunctionVarListContext functionVarList() {
			return getRuleContext(FunctionVarListContext.class,0);
		}
		public StmtDEFFNContext(StmtContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStmtDEFFN(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStmtDEFFN(this);
		}
	}

	public final StmtContext stmt() throws RecognitionException {
		StmtContext _localctx = new StmtContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_stmt);
		int _la;
		try {
			setState(358);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,36,_ctx) ) {
			case 1:
				_localctx = new StmtBREAKPOINTContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(132);
				match(BREAKPOINT);
				}
				break;
			case 2:
				_localctx = new StmtCASEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(133);
				match(CASE);
				setState(134);
				expr();
				setState(135);
				match(OF);
				setState(136);
				match(NEWLINE);
				setState(138); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(137);
					when();
					}
					}
					setState(140); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==WHEN );
				setState(144);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==OTHERWISE) {
					{
					setState(142);
					match(OTHERWISE);
					setState(143);
					bodyStar();
					}
				}

				setState(146);
				match(ENDCASE);
				}
				break;
			case 3:
				_localctx = new StmtCHAINContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(148);
				match(CHAIN);
				setState(149);
				strExpr(0);
				}
				break;
			case 4:
				_localctx = new StmtDATAContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(150);
				match(DATA);
				setState(151);
				literal();
				setState(156);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(152);
					match(COMMA);
					setState(153);
					literal();
					}
					}
					setState(158);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 5:
				_localctx = new StmtDIMContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(159);
				match(DIM);
				setState(160);
				varDeclWithDimension();
				setState(165);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(161);
					match(COMMA);
					setState(162);
					varDeclWithDimension();
					}
					}
					setState(167);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 6:
				_localctx = new StmtENDContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(168);
				match(END);
				}
				break;
			case 7:
				_localctx = new StmtRETURNContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(169);
				match(RETURN);
				setState(171);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
				case 1:
					{
					setState(170);
					expr();
					}
					break;
				}
				}
				break;
			case 8:
				_localctx = new StmtDEFFNContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(173);
				match(DEF);
				setState(174);
				fnName();
				setState(175);
				match(LPAREN);
				setState(177);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN || ((((_la - 116)) & ~0x3f) == 0 && ((1L << (_la - 116)) & ((1L << (VARIABLE_FLOAT - 116)) | (1L << (VARIABLE_INTEGER - 116)) | (1L << (VARIABLE_STRING - 116)))) != 0)) {
					{
					setState(176);
					functionVarList();
					}
				}

				setState(179);
				match(RPAREN);
				setState(180);
				bodyStar();
				setState(181);
				match(ENDFN);
				}
				break;
			case 9:
				_localctx = new StmtDEFPROCContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(183);
				match(DEF);
				setState(184);
				match(PROC_NAME);
				setState(185);
				match(LPAREN);
				setState(187);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN || ((((_la - 116)) & ~0x3f) == 0 && ((1L << (_la - 116)) & ((1L << (VARIABLE_FLOAT - 116)) | (1L << (VARIABLE_INTEGER - 116)) | (1L << (VARIABLE_STRING - 116)))) != 0)) {
					{
					setState(186);
					functionVarList();
					}
				}

				setState(189);
				match(RPAREN);
				setState(190);
				bodyStar();
				setState(191);
				match(ENDPROC);
				}
				break;
			case 10:
				_localctx = new StmtFORContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(193);
				match(FOR);
				setState(195);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LOCAL) {
					{
					setState(194);
					match(LOCAL);
					}
				}

				setState(197);
				justNumberVar();
				setState(198);
				match(EQ);
				setState(199);
				numExpr(0);
				setState(200);
				match(TO);
				setState(201);
				numExpr(0);
				setState(204);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==STEP) {
					{
					setState(202);
					match(STEP);
					setState(203);
					numExpr(0);
					}
				}

				setState(206);
				bodyStar();
				setState(207);
				match(NEXT);
				}
				break;
			case 11:
				_localctx = new StmtFORINContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(209);
				match(FOR);
				setState(211);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LOCAL) {
					{
					setState(210);
					match(LOCAL);
					}
				}

				setState(213);
				justVar();
				setState(214);
				match(IN);
				setState(215);
				justVar();
				setState(216);
				match(LPAREN);
				setState(217);
				match(RPAREN);
				setState(218);
				bodyStar();
				setState(219);
				match(NEXT);
				}
				break;
			case 12:
				_localctx = new StmtCallFNContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(221);
				fnName();
				setState(222);
				match(LPAREN);
				setState(224);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << TRUE) | (1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (TIMES - 64)) | (1L << (STRS - 64)) | (1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)) | (1L << (NOT - 64)) | (1L << (PLUS - 64)) | (1L << (MINUS - 64)) | (1L << (LPAREN - 64)) | (1L << (STRINGLITERAL - 64)) | (1L << (FN_INTEGER - 64)) | (1L << (FN_FLOAT - 64)) | (1L << (FN_STRING - 64)) | (1L << (VARIABLE_FLOAT - 64)) | (1L << (VARIABLE_INTEGER - 64)) | (1L << (VARIABLE_STRING - 64)) | (1L << (VARIABLE_TYPE - 64)) | (1L << (HEXNUMBER - 64)) | (1L << (BINARYNUMBER - 64)) | (1L << (NUMBER - 64)) | (1L << (FLOAT - 64)))) != 0)) {
					{
					setState(223);
					functionParList();
					}
				}

				setState(226);
				match(RPAREN);
				}
				break;
			case 13:
				_localctx = new StmtIFContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(228);
				match(IF);
				setState(229);
				expr();
				setState(231);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==THEN) {
					{
					setState(230);
					match(THEN);
					}
				}

				setState(233);
				((StmtIFContext)_localctx).t = content();
				setState(236);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,20,_ctx) ) {
				case 1:
					{
					setState(234);
					match(ELSE);
					setState(235);
					((StmtIFContext)_localctx).f = content();
					}
					break;
				}
				}
				break;
			case 14:
				_localctx = new StmtIFMultilineContext(_localctx);
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
				match(NEWLINE);
				setState(244);
				((StmtIFMultilineContext)_localctx).t = bodyStar();
				setState(247);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ELSE) {
					{
					setState(245);
					match(ELSE);
					setState(246);
					((StmtIFMultilineContext)_localctx).f = bodyStar();
					}
				}

				setState(249);
				match(NEWLINE);
				setState(250);
				match(ENDIF);
				}
				break;
			case 15:
				_localctx = new StmtINPUTContext(_localctx);
				enterOuterAlt(_localctx, 15);
				{
				setState(252);
				match(INPUT);
				setState(256);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,23,_ctx) ) {
				case 1:
					{
					setState(253);
					strExpr(0);
					setState(254);
					match(COMMA);
					}
					break;
				}
				setState(258);
				varList();
				}
				break;
			case 16:
				_localctx = new StmtLETContext(_localctx);
				enterOuterAlt(_localctx, 16);
				{
				setState(265);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,26,_ctx) ) {
				case 1:
					{
					setState(260);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==LET) {
						{
						setState(259);
						match(LET);
						}
					}

					}
					break;
				case 2:
					{
					setState(263);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==GLOBAL) {
						{
						setState(262);
						match(GLOBAL);
						}
					}

					}
					break;
				}
				setState(267);
				varDecl();
				setState(268);
				match(EQ);
				setState(269);
				expr();
				setState(277);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(270);
					match(COMMA);
					setState(271);
					varDecl();
					setState(272);
					match(EQ);
					setState(273);
					expr();
					}
					}
					setState(279);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 17:
				_localctx = new StmtLOCALContext(_localctx);
				enterOuterAlt(_localctx, 17);
				{
				setState(280);
				match(LOCAL);
				setState(281);
				varDecl();
				setState(282);
				match(EQ);
				setState(283);
				expr();
				setState(291);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(284);
					match(COMMA);
					setState(285);
					varDecl();
					setState(286);
					match(EQ);
					setState(287);
					expr();
					}
					}
					setState(293);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 18:
				_localctx = new StmtLOCALDIMContext(_localctx);
				enterOuterAlt(_localctx, 18);
				{
				setState(294);
				match(LOCAL);
				setState(295);
				match(DIM);
				setState(296);
				varDeclWithDimension();
				setState(301);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(297);
					match(COMMA);
					setState(298);
					varDeclWithDimension();
					}
					}
					setState(303);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 19:
				_localctx = new StmtPRINTContext(_localctx);
				enterOuterAlt(_localctx, 19);
				{
				setState(304);
				match(PRINT);
				setState(306);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,30,_ctx) ) {
				case 1:
					{
					setState(305);
					printList();
					}
					break;
				}
				}
				break;
			case 20:
				_localctx = new StmtCallPROCContext(_localctx);
				enterOuterAlt(_localctx, 20);
				{
				setState(308);
				match(PROC_NAME);
				setState(309);
				match(LPAREN);
				setState(311);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << TRUE) | (1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (TIMES - 64)) | (1L << (STRS - 64)) | (1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)) | (1L << (NOT - 64)) | (1L << (PLUS - 64)) | (1L << (MINUS - 64)) | (1L << (LPAREN - 64)) | (1L << (STRINGLITERAL - 64)) | (1L << (FN_INTEGER - 64)) | (1L << (FN_FLOAT - 64)) | (1L << (FN_STRING - 64)) | (1L << (VARIABLE_FLOAT - 64)) | (1L << (VARIABLE_INTEGER - 64)) | (1L << (VARIABLE_STRING - 64)) | (1L << (VARIABLE_TYPE - 64)) | (1L << (HEXNUMBER - 64)) | (1L << (BINARYNUMBER - 64)) | (1L << (NUMBER - 64)) | (1L << (FLOAT - 64)))) != 0)) {
					{
					setState(310);
					functionParList();
					}
				}

				setState(313);
				match(RPAREN);
				}
				break;
			case 21:
				_localctx = new StmtREADContext(_localctx);
				enterOuterAlt(_localctx, 21);
				{
				setState(314);
				match(READ);
				setState(315);
				varDecl();
				setState(320);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(316);
					match(COMMA);
					setState(317);
					varDecl();
					}
					}
					setState(322);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 22:
				_localctx = new StmtRESTOREContext(_localctx);
				enterOuterAlt(_localctx, 22);
				{
				setState(323);
				match(RESTORE);
				}
				break;
			case 23:
				_localctx = new StmtTRACEONContext(_localctx);
				enterOuterAlt(_localctx, 23);
				{
				setState(324);
				match(TRACEON);
				}
				break;
			case 24:
				_localctx = new StmtTRACEOFFContext(_localctx);
				enterOuterAlt(_localctx, 24);
				{
				setState(325);
				match(TRACEOFF);
				}
				break;
			case 25:
				_localctx = new StmtTYPEContext(_localctx);
				enterOuterAlt(_localctx, 25);
				{
				setState(326);
				match(TYPE);
				setState(327);
				varName();
				setState(328);
				match(LPAREN);
				setState(329);
				justVar();
				setState(334);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(330);
					match(COMMA);
					setState(331);
					justVar();
					}
					}
					setState(336);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(337);
				match(RPAREN);
				}
				break;
			case 26:
				_localctx = new StmtREPEATContext(_localctx);
				enterOuterAlt(_localctx, 26);
				{
				setState(339);
				match(REPEAT);
				setState(343);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE))) != 0) || ((((_la - 99)) & ~0x3f) == 0 && ((1L << (_la - 99)) & ((1L << (NEWLINE - 99)) | (1L << (COLON - 99)) | (1L << (COMMENT - 99)) | (1L << (PROC_NAME - 99)) | (1L << (FN_INTEGER - 99)) | (1L << (FN_FLOAT - 99)) | (1L << (FN_STRING - 99)) | (1L << (VARIABLE_FLOAT - 99)) | (1L << (VARIABLE_INTEGER - 99)) | (1L << (VARIABLE_STRING - 99)) | (1L << (VARIABLE_TYPE - 99)) | (1L << (NUMBER - 99)))) != 0)) {
					{
					{
					setState(340);
					body();
					}
					}
					setState(345);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(346);
				match(UNTIL);
				setState(347);
				expr();
				}
				break;
			case 27:
				_localctx = new StmtWHILEContext(_localctx);
				enterOuterAlt(_localctx, 27);
				{
				setState(348);
				match(WHILE);
				setState(349);
				expr();
				setState(353);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE))) != 0) || ((((_la - 99)) & ~0x3f) == 0 && ((1L << (_la - 99)) & ((1L << (NEWLINE - 99)) | (1L << (COLON - 99)) | (1L << (COMMENT - 99)) | (1L << (PROC_NAME - 99)) | (1L << (FN_INTEGER - 99)) | (1L << (FN_FLOAT - 99)) | (1L << (FN_STRING - 99)) | (1L << (VARIABLE_FLOAT - 99)) | (1L << (VARIABLE_INTEGER - 99)) | (1L << (VARIABLE_STRING - 99)) | (1L << (VARIABLE_TYPE - 99)) | (1L << (NUMBER - 99)))) != 0)) {
					{
					{
					setState(350);
					body();
					}
					}
					setState(355);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(356);
				match(ENDWHILE);
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
		public BodyStarContext bodyStar() {
			return getRuleContext(BodyStarContext.class,0);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterWhen(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitWhen(this);
		}
	}

	public final WhenContext when() throws RecognitionException {
		WhenContext _localctx = new WhenContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_when);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(360);
			match(WHEN);
			setState(361);
			expr();
			setState(366);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(362);
				match(COMMA);
				setState(363);
				expr();
				}
				}
				setState(368);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(369);
			match(COLON);
			setState(370);
			bodyStar();
			}
		}
		catch (RecognitionException re) {
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterFnName(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitFnName(this);
		}
	}

	public final FnNameContext fnName() throws RecognitionException {
		FnNameContext _localctx = new FnNameContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_fnName);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(372);
			_la = _input.LA(1);
			if ( !(((((_la - 113)) & ~0x3f) == 0 && ((1L << (_la - 113)) & ((1L << (FN_INTEGER - 113)) | (1L << (FN_FLOAT - 113)) | (1L << (FN_STRING - 113)))) != 0)) ) {
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterLiteral(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitLiteral(this);
		}
	}

	public final LiteralContext literal() throws RecognitionException {
		LiteralContext _localctx = new LiteralContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_literal);
		try {
			setState(376);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case PLUS:
			case MINUS:
			case HEXNUMBER:
			case BINARYNUMBER:
			case NUMBER:
			case FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(374);
				number();
				}
				break;
			case STRINGLITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(375);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterVar(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitVar(this);
		}
	}

	public final VarContext var() throws RecognitionException {
		VarContext _localctx = new VarContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_var);
		try {
			setState(381);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,39,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(378);
				numVar();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(379);
				strVar();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(380);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterTypeVarType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitTypeVarType(this);
		}
	}

	public final TypeVarContext typeVar() throws RecognitionException {
		TypeVarContext _localctx = new TypeVarContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_typeVar);
		try {
			_localctx = new TypeVarTypeContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(383);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumVarFloatField(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumVarFloatField(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumVarIntegerFN(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumVarIntegerFN(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumVarStringFN(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumVarStringFN(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumVarIntegerFieldArray(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumVarIntegerFieldArray(this);
		}
	}
	public static class NumVarFloatArrayContext extends NumVarContext {
		public VarNameContext varName() {
			return getRuleContext(VarNameContext.class,0);
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
		public NumVarFloatArrayContext(NumVarContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumVarFloatArray(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumVarFloatArray(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumVarFloatFN(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumVarFloatFN(this);
		}
	}
	public static class NumVarFloatContext extends NumVarContext {
		public VarNameContext varName() {
			return getRuleContext(VarNameContext.class,0);
		}
		public NumVarFloatContext(NumVarContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumVarFloat(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumVarFloat(this);
		}
	}
	public static class NumVarIntegerArrayContext extends NumVarContext {
		public VarNameIntegerContext varNameInteger() {
			return getRuleContext(VarNameIntegerContext.class,0);
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
		public NumVarIntegerArrayContext(NumVarContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumVarIntegerArray(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumVarIntegerArray(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumVarFloatFieldArray(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumVarFloatFieldArray(this);
		}
	}
	public static class NumVarIntegerContext extends NumVarContext {
		public VarNameIntegerContext varNameInteger() {
			return getRuleContext(VarNameIntegerContext.class,0);
		}
		public NumVarIntegerContext(NumVarContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumVarInteger(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumVarInteger(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumVarIntegerField(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumVarIntegerField(this);
		}
	}

	public final NumVarContext numVar() throws RecognitionException {
		NumVarContext _localctx = new NumVarContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_numVar);
		int _la;
		try {
			int _alt;
			setState(451);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,47,_ctx) ) {
			case 1:
				_localctx = new NumVarFloatArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(385);
				varName();
				setState(396);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,41,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(386);
						match(LPAREN);
						setState(387);
						numExpr(0);
						setState(390);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(388);
							match(COMMA);
							setState(389);
							numExpr(0);
							}
						}

						setState(392);
						match(RPAREN);
						}
						} 
					}
					setState(398);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,41,_ctx);
				}
				}
				break;
			case 2:
				_localctx = new NumVarIntegerArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(399);
				varNameInteger();
				setState(410);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,43,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(400);
						match(LPAREN);
						setState(401);
						numExpr(0);
						setState(404);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(402);
							match(COMMA);
							setState(403);
							numExpr(0);
							}
						}

						setState(406);
						match(RPAREN);
						}
						} 
					}
					setState(412);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,43,_ctx);
				}
				}
				break;
			case 3:
				_localctx = new NumVarFloatFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(413);
				typeVar();
				setState(414);
				match(LPAREN);
				setState(415);
				numExpr(0);
				setState(416);
				match(RPAREN);
				setState(417);
				varName();
				}
				break;
			case 4:
				_localctx = new NumVarFloatFNContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(419);
				match(FN_FLOAT);
				setState(420);
				match(LPAREN);
				setState(422);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << TRUE) | (1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (TIMES - 64)) | (1L << (STRS - 64)) | (1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)) | (1L << (NOT - 64)) | (1L << (PLUS - 64)) | (1L << (MINUS - 64)) | (1L << (LPAREN - 64)) | (1L << (STRINGLITERAL - 64)) | (1L << (FN_INTEGER - 64)) | (1L << (FN_FLOAT - 64)) | (1L << (FN_STRING - 64)) | (1L << (VARIABLE_FLOAT - 64)) | (1L << (VARIABLE_INTEGER - 64)) | (1L << (VARIABLE_STRING - 64)) | (1L << (VARIABLE_TYPE - 64)) | (1L << (HEXNUMBER - 64)) | (1L << (BINARYNUMBER - 64)) | (1L << (NUMBER - 64)) | (1L << (FLOAT - 64)))) != 0)) {
					{
					setState(421);
					functionParList();
					}
				}

				setState(424);
				match(RPAREN);
				}
				break;
			case 5:
				_localctx = new NumVarIntegerFNContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(425);
				match(FN_INTEGER);
				setState(426);
				match(LPAREN);
				setState(428);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << TRUE) | (1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (TIMES - 64)) | (1L << (STRS - 64)) | (1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)) | (1L << (NOT - 64)) | (1L << (PLUS - 64)) | (1L << (MINUS - 64)) | (1L << (LPAREN - 64)) | (1L << (STRINGLITERAL - 64)) | (1L << (FN_INTEGER - 64)) | (1L << (FN_FLOAT - 64)) | (1L << (FN_STRING - 64)) | (1L << (VARIABLE_FLOAT - 64)) | (1L << (VARIABLE_INTEGER - 64)) | (1L << (VARIABLE_STRING - 64)) | (1L << (VARIABLE_TYPE - 64)) | (1L << (HEXNUMBER - 64)) | (1L << (BINARYNUMBER - 64)) | (1L << (NUMBER - 64)) | (1L << (FLOAT - 64)))) != 0)) {
					{
					setState(427);
					functionParList();
					}
				}

				setState(430);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new NumVarStringFNContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(431);
				match(FN_STRING);
				setState(432);
				match(LPAREN);
				setState(434);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << FALSE) | (1L << TRUE) | (1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (TIMES - 64)) | (1L << (STRS - 64)) | (1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)) | (1L << (NOT - 64)) | (1L << (PLUS - 64)) | (1L << (MINUS - 64)) | (1L << (LPAREN - 64)) | (1L << (STRINGLITERAL - 64)) | (1L << (FN_INTEGER - 64)) | (1L << (FN_FLOAT - 64)) | (1L << (FN_STRING - 64)) | (1L << (VARIABLE_FLOAT - 64)) | (1L << (VARIABLE_INTEGER - 64)) | (1L << (VARIABLE_STRING - 64)) | (1L << (VARIABLE_TYPE - 64)) | (1L << (HEXNUMBER - 64)) | (1L << (BINARYNUMBER - 64)) | (1L << (NUMBER - 64)) | (1L << (FLOAT - 64)))) != 0)) {
					{
					setState(433);
					functionParList();
					}
				}

				setState(436);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new NumVarFloatContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(437);
				varName();
				}
				break;
			case 8:
				_localctx = new NumVarIntegerContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(438);
				varNameInteger();
				}
				break;
			case 9:
				_localctx = new NumVarFloatFieldContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(439);
				typeVar();
				setState(440);
				varName();
				}
				break;
			case 10:
				_localctx = new NumVarIntegerFieldContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(442);
				typeVar();
				setState(443);
				varNameInteger();
				}
				break;
			case 11:
				_localctx = new NumVarIntegerFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(445);
				typeVar();
				setState(446);
				match(LPAREN);
				setState(447);
				numExpr(0);
				setState(448);
				match(RPAREN);
				setState(449);
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
		public NumVarStringArrayContext(StrVarContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumVarStringArray(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumVarStringArray(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumVarStringFieldArray(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumVarStringFieldArray(this);
		}
	}
	public static class NumVarStringContext extends StrVarContext {
		public VarNameStringContext varNameString() {
			return getRuleContext(VarNameStringContext.class,0);
		}
		public NumVarStringContext(StrVarContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumVarString(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumVarString(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumVarStringField(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumVarStringField(this);
		}
	}

	public final StrVarContext strVar() throws RecognitionException {
		StrVarContext _localctx = new StrVarContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_strVar);
		int _la;
		try {
			int _alt;
			setState(477);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,50,_ctx) ) {
			case 1:
				_localctx = new NumVarStringArrayContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(453);
				varNameString();
				setState(464);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,49,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(454);
						match(LPAREN);
						setState(455);
						numExpr(0);
						setState(458);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(456);
							match(COMMA);
							setState(457);
							numExpr(0);
							}
						}

						setState(460);
						match(RPAREN);
						}
						} 
					}
					setState(466);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,49,_ctx);
				}
				}
				break;
			case 2:
				_localctx = new NumVarStringFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(467);
				typeVar();
				setState(468);
				match(LPAREN);
				setState(469);
				numExpr(0);
				setState(470);
				match(RPAREN);
				setState(471);
				varNameString();
				}
				break;
			case 3:
				_localctx = new NumVarStringContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(473);
				varNameString();
				}
				break;
			case 4:
				_localctx = new NumVarStringFieldContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(474);
				typeVar();
				setState(475);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterJustVar(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitJustVar(this);
		}
	}

	public final JustVarContext justVar() throws RecognitionException {
		JustVarContext _localctx = new JustVarContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_justVar);
		try {
			setState(482);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(479);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(480);
				varNameInteger();
				}
				break;
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(481);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterJustNumberVar(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitJustNumberVar(this);
		}
	}

	public final JustNumberVarContext justNumberVar() throws RecognitionException {
		JustNumberVarContext _localctx = new JustNumberVarContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_justNumberVar);
		try {
			setState(486);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(484);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(485);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterVarName(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitVarName(this);
		}
	}

	public final VarNameContext varName() throws RecognitionException {
		VarNameContext _localctx = new VarNameContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_varName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(488);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterVarNameInteger(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitVarNameInteger(this);
		}
	}

	public final VarNameIntegerContext varNameInteger() throws RecognitionException {
		VarNameIntegerContext _localctx = new VarNameIntegerContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_varNameInteger);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(490);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterVarNameString(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitVarNameString(this);
		}
	}

	public final VarNameStringContext varNameString() throws RecognitionException {
		VarNameStringContext _localctx = new VarNameStringContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_varNameString);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(492);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterVarNameType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitVarNameType(this);
		}
	}

	public final VarNameTypeContext varNameType() throws RecognitionException {
		VarNameTypeContext _localctx = new VarNameTypeContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_varNameType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(494);
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
	public static class VarDeclIndContext extends VarDeclContext {
		public JustVarContext justVar() {
			return getRuleContext(JustVarContext.class,0);
		}
		public VarDeclIndContext(VarDeclContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterVarDeclInd(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitVarDeclInd(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterVarDeclArrayed(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitVarDeclArrayed(this);
		}
	}
	public static class VarDeclTypeContext extends VarDeclContext {
		public TypeVarContext typeVar() {
			return getRuleContext(TypeVarContext.class,0);
		}
		public VarNameContext varName() {
			return getRuleContext(VarNameContext.class,0);
		}
		public VarDeclTypeContext(VarDeclContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterVarDeclType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitVarDeclType(this);
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
		public VarNameContext varName() {
			return getRuleContext(VarNameContext.class,0);
		}
		public VarDeclTypeArrayedContext(VarDeclContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterVarDeclTypeArrayed(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitVarDeclTypeArrayed(this);
		}
	}

	public final VarDeclContext varDecl() throws RecognitionException {
		VarDeclContext _localctx = new VarDeclContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_varDecl);
		int _la;
		try {
			setState(520);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,55,_ctx) ) {
			case 1:
				_localctx = new VarDeclIndContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(496);
				justVar();
				}
				break;
			case 2:
				_localctx = new VarDeclArrayedContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(497);
				justVar();
				setState(508);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==LPAREN) {
					{
					{
					setState(498);
					match(LPAREN);
					setState(499);
					numExpr(0);
					setState(502);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==COMMA) {
						{
						setState(500);
						match(COMMA);
						setState(501);
						numExpr(0);
						}
					}

					setState(504);
					match(RPAREN);
					}
					}
					setState(510);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 3:
				_localctx = new VarDeclTypeContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(511);
				typeVar();
				setState(512);
				varName();
				}
				break;
			case 4:
				_localctx = new VarDeclTypeArrayedContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(514);
				typeVar();
				setState(515);
				match(LPAREN);
				setState(516);
				numExpr(0);
				setState(517);
				match(RPAREN);
				setState(518);
				varName();
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
		public VarDeclWithDimensionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_varDeclWithDimension; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterVarDeclWithDimension(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitVarDeclWithDimension(this);
		}
	}

	public final VarDeclWithDimensionContext varDeclWithDimension() throws RecognitionException {
		VarDeclWithDimensionContext _localctx = new VarDeclWithDimensionContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_varDeclWithDimension);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(522);
			justVar();
			setState(523);
			match(LPAREN);
			setState(524);
			numExpr(0);
			setState(529);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(525);
				match(COMMA);
				setState(526);
				numExpr(0);
				}
				}
				setState(531);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(532);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterVarList(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitVarList(this);
		}
	}

	public final VarListContext varList() throws RecognitionException {
		VarListContext _localctx = new VarListContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_varList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(534);
			varDecl();
			setState(539);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(535);
				match(COMMA);
				setState(536);
				varDecl();
				}
				}
				setState(541);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterFunctionVarList(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitFunctionVarList(this);
		}
	}

	public final FunctionVarListContext functionVarList() throws RecognitionException {
		FunctionVarListContext _localctx = new FunctionVarListContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_functionVarList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(543);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN) {
				{
				setState(542);
				match(RETURN);
				}
			}

			setState(545);
			justVar();
			setState(553);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(546);
				match(COMMA);
				setState(548);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN) {
					{
					setState(547);
					match(RETURN);
					}
				}

				setState(550);
				justVar();
				}
				}
				setState(555);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterFunctionParList(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitFunctionParList(this);
		}
	}

	public final FunctionParListContext functionParList() throws RecognitionException {
		FunctionParListContext _localctx = new FunctionParListContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_functionParList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(556);
			expr();
			setState(561);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(557);
				match(COMMA);
				setState(558);
				expr();
				}
				}
				setState(563);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterExprList(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitExprList(this);
		}
	}

	public final ExprListContext exprList() throws RecognitionException {
		ExprListContext _localctx = new ExprListContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_exprList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(564);
			expr();
			setState(569);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(565);
				match(COMMA);
				setState(566);
				expr();
				}
				}
				setState(571);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterPrintListExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitPrintListExpr(this);
		}
	}
	public static class PrintListSPCContext extends PrintListItemContext {
		public TerminalNode SPC() { return getToken(DARICParser.SPC, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public PrintListSPCContext(PrintListItemContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterPrintListSPC(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitPrintListSPC(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterPrintListSPCP(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitPrintListSPCP(this);
		}
	}

	public final PrintListItemContext printListItem() throws RecognitionException {
		PrintListItemContext _localctx = new PrintListItemContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_printListItem);
		int _la;
		try {
			setState(583);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,64,_ctx) ) {
			case 1:
				_localctx = new PrintListExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(573);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TILDE) {
					{
					setState(572);
					match(TILDE);
					}
				}

				setState(575);
				expr();
				}
				break;
			case 2:
				_localctx = new PrintListSPCPContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(576);
				match(SPC);
				setState(577);
				match(LPAREN);
				setState(578);
				numExpr(0);
				setState(579);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new PrintListSPCContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(581);
				match(SPC);
				setState(582);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterPrintListTick(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitPrintListTick(this);
		}
	}

	public final PrintListTickContext printListTick() throws RecognitionException {
		PrintListTickContext _localctx = new PrintListTickContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_printListTick);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(586); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(585);
				match(TICK);
				}
				}
				setState(588); 
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterPrintListSeparator(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitPrintListSeparator(this);
		}
	}

	public final PrintListSeparatorContext printListSeparator() throws RecognitionException {
		PrintListSeparatorContext _localctx = new PrintListSeparatorContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_printListSeparator);
		try {
			setState(593);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COMMA:
				enterOuterAlt(_localctx, 1);
				{
				setState(590);
				match(COMMA);
				}
				break;
			case SEMICOLON:
				enterOuterAlt(_localctx, 2);
				{
				setState(591);
				match(SEMICOLON);
				}
				break;
			case TICK:
				enterOuterAlt(_localctx, 3);
				{
				setState(592);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterPrintList(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitPrintList(this);
		}
	}

	public final PrintListContext printList() throws RecognitionException {
		PrintListContext _localctx = new PrintListContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_printList);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(596);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TICK) {
				{
				setState(595);
				printListTick();
				}
			}

			setState(599);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(598);
				((PrintListContext)_localctx).s1 = match(SEMICOLON);
				}
			}

			setState(601);
			printListItem();
			setState(607);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,69,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(602);
					printListSeparator();
					setState(603);
					printListItem();
					}
					} 
				}
				setState(609);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,69,_ctx);
			}
			setState(611);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==SEMICOLON) {
				{
				setState(610);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitExpr(this);
		}
	}

	public final ExprContext expr() throws RecognitionException {
		ExprContext _localctx = new ExprContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_expr);
		try {
			setState(615);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,71,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(613);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(614);
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
		public NumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_number; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumber(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumber(this);
		}
	}

	public final NumberContext number() throws RecognitionException {
		NumberContext _localctx = new NumberContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_number);
		try {
			setState(621);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,72,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(617);
				numberInteger();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(618);
				numberFloat();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(619);
				numberHex();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(620);
				numberBinary();
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumberInteger(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumberInteger(this);
		}
	}

	public final NumberIntegerContext numberInteger() throws RecognitionException {
		NumberIntegerContext _localctx = new NumberIntegerContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_numberInteger);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(624);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(623);
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

			setState(626);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumberHex(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumberHex(this);
		}
	}

	public final NumberHexContext numberHex() throws RecognitionException {
		NumberHexContext _localctx = new NumberHexContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_numberHex);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(628);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumberBinary(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumberBinary(this);
		}
	}

	public final NumberBinaryContext numberBinary() throws RecognitionException {
		NumberBinaryContext _localctx = new NumberBinaryContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_numberBinary);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(630);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumberFloat(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumberFloat(this);
		}
	}

	public final NumberFloatContext numberFloat() throws RecognitionException {
		NumberFloatContext _localctx = new NumberFloatContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_numberFloat);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(633);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(632);
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

			setState(635);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStrFuncTIMES(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStrFuncTIMES(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStrFuncSTRS(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStrFuncSTRS(this);
		}
	}
	public static class StrFuncCHRSPContext extends StrFuncContext {
		public TerminalNode CHRS() { return getToken(DARICParser.CHRS, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public StrFuncCHRSPContext(StrFuncContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStrFuncCHRSP(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStrFuncCHRSP(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStrFuncRIGHTS(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStrFuncRIGHTS(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStrFuncLEFTS(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStrFuncLEFTS(this);
		}
	}
	public static class StrFuncCHRSContext extends StrFuncContext {
		public TerminalNode CHRS() { return getToken(DARICParser.CHRS, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public StrFuncCHRSContext(StrFuncContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStrFuncCHRS(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStrFuncCHRS(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStrFuncMIDS3(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStrFuncMIDS3(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStrFuncSTRSHEX(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStrFuncSTRSHEX(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStrFuncMIDS2(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStrFuncMIDS2(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStrFuncSTRINGS(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStrFuncSTRINGS(this);
		}
	}

	public final StrFuncContext strFunc() throws RecognitionException {
		StrFuncContext _localctx = new StrFuncContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_strFunc);
		try {
			setState(693);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,75,_ctx) ) {
			case 1:
				_localctx = new StrFuncTIMESContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(637);
				match(TIMES);
				}
				break;
			case 2:
				_localctx = new StrFuncCHRSPContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(638);
				match(CHRS);
				setState(639);
				match(LPAREN);
				setState(640);
				numExpr(0);
				setState(641);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new StrFuncCHRSContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(643);
				match(CHRS);
				setState(644);
				numExpr(0);
				}
				break;
			case 4:
				_localctx = new StrFuncLEFTSContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(645);
				match(LEFTS);
				setState(646);
				match(LPAREN);
				setState(647);
				strExpr(0);
				setState(648);
				match(COMMA);
				setState(649);
				numExpr(0);
				setState(650);
				match(RPAREN);
				}
				break;
			case 5:
				_localctx = new StrFuncMIDS3Context(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(652);
				match(MIDS);
				setState(653);
				match(LPAREN);
				setState(654);
				strExpr(0);
				setState(655);
				match(COMMA);
				setState(656);
				numExpr(0);
				setState(657);
				match(COMMA);
				setState(658);
				numExpr(0);
				setState(659);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new StrFuncMIDS2Context(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(661);
				match(MIDS);
				setState(662);
				match(LPAREN);
				setState(663);
				strExpr(0);
				setState(664);
				match(COMMA);
				setState(665);
				numExpr(0);
				setState(666);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new StrFuncRIGHTSContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(668);
				match(RIGHTS);
				setState(669);
				match(LPAREN);
				setState(670);
				strExpr(0);
				setState(671);
				match(COMMA);
				setState(672);
				numExpr(0);
				setState(673);
				match(RPAREN);
				}
				break;
			case 8:
				_localctx = new StrFuncSTRSContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(675);
				match(STRS);
				setState(676);
				match(LPAREN);
				setState(677);
				numExpr(0);
				setState(678);
				match(RPAREN);
				}
				break;
			case 9:
				_localctx = new StrFuncSTRSHEXContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(680);
				match(STRS);
				setState(681);
				match(TILDE);
				setState(682);
				match(LPAREN);
				setState(683);
				numExpr(0);
				setState(684);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new StrFuncSTRINGSContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(686);
				match(STRINGS);
				setState(687);
				match(LPAREN);
				setState(688);
				numExpr(0);
				setState(689);
				match(COMMA);
				setState(690);
				strExpr(0);
				setState(691);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterString(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitString(this);
		}
	}

	public final StringContext string() throws RecognitionException {
		StringContext _localctx = new StringContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_string);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(695);
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
		public StrFuncContext strFunc() {
			return getRuleContext(StrFuncContext.class,0);
		}
		public StringContext string() {
			return getRuleContext(StringContext.class,0);
		}
		public StrVarContext strVar() {
			return getRuleContext(StrVarContext.class,0);
		}
		public List<StrExprContext> strExpr() {
			return getRuleContexts(StrExprContext.class);
		}
		public StrExprContext strExpr(int i) {
			return getRuleContext(StrExprContext.class,i);
		}
		public TerminalNode PLUS() { return getToken(DARICParser.PLUS, 0); }
		public StrExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_strExpr; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterStrExpr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitStrExpr(this);
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
		int _startState = 76;
		enterRecursionRule(_localctx, 76, RULE_strExpr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(701);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TIMES:
			case STRS:
			case STRINGS:
			case CHRS:
			case LEFTS:
			case MIDS:
			case RIGHTS:
				{
				setState(698);
				strFunc();
				}
				break;
			case STRINGLITERAL:
				{
				setState(699);
				string();
				}
				break;
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(700);
				strVar();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(708);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,77,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StrExprContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_strExpr);
					setState(703);
					if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
					setState(704);
					match(PLUS);
					setState(705);
					strExpr(4);
					}
					} 
				}
				setState(710);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,77,_ctx);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncRND0(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncRND0(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncRNDRANGE(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncRNDRANGE(this);
		}
	}
	public static class NumFuncRND1Context extends NumFuncContext {
		public TerminalNode RND1() { return getToken(DARICParser.RND1, 0); }
		public NumFuncRND1Context(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncRND1(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncRND1(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncLN(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncLN(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncSIN(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncSIN(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncRAD(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncRAD(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncSQR(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncSQR(this);
		}
	}
	public static class NumFuncLENContext extends NumFuncContext {
		public TerminalNode LEN() { return getToken(DARICParser.LEN, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncLENContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncLEN(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncLEN(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncACS(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncACS(this);
		}
	}
	public static class NumFuncPIContext extends NumFuncContext {
		public TerminalNode PI() { return getToken(DARICParser.PI, 0); }
		public NumFuncPIContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncPI(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncPI(this);
		}
	}
	public static class NumFuncFALSEContext extends NumFuncContext {
		public TerminalNode FALSE() { return getToken(DARICParser.FALSE, 0); }
		public NumFuncFALSEContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncFALSE(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncFALSE(this);
		}
	}
	public static class NumFuncRNDContext extends NumFuncContext {
		public TerminalNode RND() { return getToken(DARICParser.RND, 0); }
		public NumFuncRNDContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncRND(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncRND(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncINSTR3(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncINSTR3(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncINSTR2(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncINSTR2(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncTAN(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncTAN(this);
		}
	}
	public static class NumFuncVALContext extends NumFuncContext {
		public TerminalNode VAL() { return getToken(DARICParser.VAL, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncVALContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncVAL(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncVAL(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncATN(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncATN(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncSGN(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncSGN(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncEXP(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncEXP(this);
		}
	}
	public static class NumFuncTIMEContext extends NumFuncContext {
		public TerminalNode TIME() { return getToken(DARICParser.TIME, 0); }
		public NumFuncTIMEContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncTIME(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncTIME(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncABS(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncABS(this);
		}
	}
	public static class NumFuncTRUEContext extends NumFuncContext {
		public TerminalNode TRUE() { return getToken(DARICParser.TRUE, 0); }
		public NumFuncTRUEContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncTRUE(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncTRUE(this);
		}
	}
	public static class NumFuncASCContext extends NumFuncContext {
		public TerminalNode ASC() { return getToken(DARICParser.ASC, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public StrExprContext strExpr() {
			return getRuleContext(StrExprContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public NumFuncASCContext(NumFuncContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncASC(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncASC(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncDEG(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncDEG(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncCOS(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncCOS(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncLOG(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncLOG(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumFuncASN(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumFuncASN(this);
		}
	}

	public final NumFuncContext numFunc() throws RecognitionException {
		NumFuncContext _localctx = new NumFuncContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_numFunc);
		try {
			setState(824);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,78,_ctx) ) {
			case 1:
				_localctx = new NumFuncPIContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(711);
				match(PI);
				}
				break;
			case 2:
				_localctx = new NumFuncFALSEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(712);
				match(FALSE);
				}
				break;
			case 3:
				_localctx = new NumFuncTRUEContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(713);
				match(TRUE);
				}
				break;
			case 4:
				_localctx = new NumFuncTIMEContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(714);
				match(TIME);
				}
				break;
			case 5:
				_localctx = new NumFuncRNDContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(715);
				match(RND);
				}
				break;
			case 6:
				_localctx = new NumFuncRND0Context(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(716);
				match(RND0);
				}
				break;
			case 7:
				_localctx = new NumFuncRND1Context(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(717);
				match(RND1);
				}
				break;
			case 8:
				_localctx = new NumFuncRNDRANGEContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(718);
				match(RND);
				setState(719);
				match(LPAREN);
				setState(720);
				numExpr(0);
				setState(721);
				match(RPAREN);
				}
				break;
			case 9:
				_localctx = new NumFuncLNContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(723);
				match(LN);
				setState(724);
				match(LPAREN);
				setState(725);
				numExpr(0);
				setState(726);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new NumFuncLOGContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(728);
				match(LOG);
				setState(729);
				match(LPAREN);
				setState(730);
				numExpr(0);
				setState(731);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new NumFuncEXPContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(733);
				match(EXP);
				setState(734);
				match(LPAREN);
				setState(735);
				numExpr(0);
				setState(736);
				match(RPAREN);
				}
				break;
			case 12:
				_localctx = new NumFuncATNContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(738);
				match(ATN);
				setState(739);
				match(LPAREN);
				setState(740);
				numExpr(0);
				setState(741);
				match(RPAREN);
				}
				break;
			case 13:
				_localctx = new NumFuncTANContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(743);
				match(TAN);
				setState(744);
				match(LPAREN);
				setState(745);
				numExpr(0);
				setState(746);
				match(RPAREN);
				}
				break;
			case 14:
				_localctx = new NumFuncCOSContext(_localctx);
				enterOuterAlt(_localctx, 14);
				{
				setState(748);
				match(COS);
				setState(749);
				match(LPAREN);
				setState(750);
				numExpr(0);
				setState(751);
				match(RPAREN);
				}
				break;
			case 15:
				_localctx = new NumFuncSINContext(_localctx);
				enterOuterAlt(_localctx, 15);
				{
				setState(753);
				match(SIN);
				setState(754);
				match(LPAREN);
				setState(755);
				numExpr(0);
				setState(756);
				match(RPAREN);
				}
				break;
			case 16:
				_localctx = new NumFuncABSContext(_localctx);
				enterOuterAlt(_localctx, 16);
				{
				setState(758);
				match(ABS);
				setState(759);
				match(LPAREN);
				setState(760);
				numExpr(0);
				setState(761);
				match(RPAREN);
				}
				break;
			case 17:
				_localctx = new NumFuncACSContext(_localctx);
				enterOuterAlt(_localctx, 17);
				{
				setState(763);
				match(ACS);
				setState(764);
				match(LPAREN);
				setState(765);
				numExpr(0);
				setState(766);
				match(RPAREN);
				}
				break;
			case 18:
				_localctx = new NumFuncASNContext(_localctx);
				enterOuterAlt(_localctx, 18);
				{
				setState(768);
				match(ASN);
				setState(769);
				match(LPAREN);
				setState(770);
				numExpr(0);
				setState(771);
				match(RPAREN);
				}
				break;
			case 19:
				_localctx = new NumFuncDEGContext(_localctx);
				enterOuterAlt(_localctx, 19);
				{
				setState(773);
				match(DEG);
				setState(774);
				match(LPAREN);
				setState(775);
				numExpr(0);
				setState(776);
				match(RPAREN);
				}
				break;
			case 20:
				_localctx = new NumFuncRADContext(_localctx);
				enterOuterAlt(_localctx, 20);
				{
				setState(778);
				match(RAD);
				setState(779);
				match(LPAREN);
				setState(780);
				numExpr(0);
				setState(781);
				match(RPAREN);
				}
				break;
			case 21:
				_localctx = new NumFuncSQRContext(_localctx);
				enterOuterAlt(_localctx, 21);
				{
				setState(783);
				match(SQR);
				setState(784);
				match(LPAREN);
				setState(785);
				numExpr(0);
				setState(786);
				match(RPAREN);
				}
				break;
			case 22:
				_localctx = new NumFuncSGNContext(_localctx);
				enterOuterAlt(_localctx, 22);
				{
				setState(788);
				match(SGN);
				setState(789);
				match(LPAREN);
				setState(790);
				numExpr(0);
				setState(791);
				match(RPAREN);
				}
				break;
			case 23:
				_localctx = new NumFuncASCContext(_localctx);
				enterOuterAlt(_localctx, 23);
				{
				setState(793);
				match(ASC);
				setState(794);
				match(LPAREN);
				setState(795);
				strExpr(0);
				setState(796);
				match(RPAREN);
				}
				break;
			case 24:
				_localctx = new NumFuncLENContext(_localctx);
				enterOuterAlt(_localctx, 24);
				{
				setState(798);
				match(LEN);
				setState(799);
				match(LPAREN);
				setState(800);
				strExpr(0);
				setState(801);
				match(RPAREN);
				}
				break;
			case 25:
				_localctx = new NumFuncINSTR2Context(_localctx);
				enterOuterAlt(_localctx, 25);
				{
				setState(803);
				match(INSTR);
				setState(804);
				match(LPAREN);
				setState(805);
				strExpr(0);
				setState(806);
				match(COMMA);
				setState(807);
				strExpr(0);
				setState(808);
				match(RPAREN);
				}
				break;
			case 26:
				_localctx = new NumFuncINSTR3Context(_localctx);
				enterOuterAlt(_localctx, 26);
				{
				setState(810);
				match(INSTR);
				setState(811);
				match(LPAREN);
				setState(812);
				strExpr(0);
				setState(813);
				match(COMMA);
				setState(814);
				strExpr(0);
				setState(815);
				match(COMMA);
				setState(816);
				numExpr(0);
				setState(817);
				match(RPAREN);
				}
				break;
			case 27:
				_localctx = new NumFuncVALContext(_localctx);
				enterOuterAlt(_localctx, 27);
				{
				setState(819);
				match(VAL);
				setState(820);
				match(LPAREN);
				setState(821);
				strExpr(0);
				setState(822);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumExprNumber(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumExprNumber(this);
		}
	}
	public static class NumExprFuncContext extends NumExprContext {
		public NumFuncContext numFunc() {
			return getRuleContext(NumFuncContext.class,0);
		}
		public NumExprFuncContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumExprFunc(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumExprFunc(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumExprSubtract(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumExprSubtract(this);
		}
	}
	public static class NumExprVarContext extends NumExprContext {
		public NumVarContext numVar() {
			return getRuleContext(NumVarContext.class,0);
		}
		public NumExprVarContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumExprVar(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumExprVar(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumExprEOR(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumExprEOR(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumExprHat(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumExprHat(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumExprNumRelop(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumExprNumRelop(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumExprStrRelop(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumExprStrRelop(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumExprSHR(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumExprSHR(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumExprMultiply(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumExprMultiply(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumExprMOD(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumExprMOD(this);
		}
	}
	public static class NumExprNOTContext extends NumExprContext {
		public TerminalNode NOT() { return getToken(DARICParser.NOT, 0); }
		public NumExprContext numExpr() {
			return getRuleContext(NumExprContext.class,0);
		}
		public NumExprNOTContext(NumExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumExprNOT(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumExprNOT(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumExprNested(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumExprNested(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumExprSHL(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumExprSHL(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumExprAND(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumExprAND(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumExprPlus(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumExprPlus(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumExprOR(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumExprOR(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumExprDivide(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumExprDivide(this);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterNumExprDIV(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitNumExprDIV(this);
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
		int _startState = 80;
		enterRecursionRule(_localctx, 80, RULE_numExpr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(840);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,79,_ctx) ) {
			case 1:
				{
				_localctx = new NumExprFuncContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(827);
				numFunc();
				}
				break;
			case 2:
				{
				_localctx = new NumExprNOTContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(828);
				match(NOT);
				setState(829);
				numExpr(18);
				}
				break;
			case 3:
				{
				_localctx = new NumExprNestedContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(830);
				match(LPAREN);
				setState(831);
				numExpr(0);
				setState(832);
				match(RPAREN);
				}
				break;
			case 4:
				{
				_localctx = new NumExprStrRelopContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(834);
				strExpr(0);
				setState(835);
				compare();
				setState(836);
				strExpr(0);
				}
				break;
			case 5:
				{
				_localctx = new NumExprNumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(838);
				number();
				}
				break;
			case 6:
				{
				_localctx = new NumExprVarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(839);
				numVar();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(884);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,81,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(882);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,80,_ctx) ) {
					case 1:
						{
						_localctx = new NumExprHatContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(842);
						if (!(precpred(_ctx, 16))) throw new FailedPredicateException(this, "precpred(_ctx, 16)");
						setState(843);
						match(HAT);
						setState(844);
						numExpr(16);
						}
						break;
					case 2:
						{
						_localctx = new NumExprMultiplyContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(845);
						if (!(precpred(_ctx, 15))) throw new FailedPredicateException(this, "precpred(_ctx, 15)");
						setState(846);
						match(MULTIPLY);
						setState(847);
						numExpr(16);
						}
						break;
					case 3:
						{
						_localctx = new NumExprDivideContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(848);
						if (!(precpred(_ctx, 14))) throw new FailedPredicateException(this, "precpred(_ctx, 14)");
						setState(849);
						match(DIVIDE);
						setState(850);
						numExpr(15);
						}
						break;
					case 4:
						{
						_localctx = new NumExprDIVContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(851);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(852);
						match(DIV);
						setState(853);
						numExpr(14);
						}
						break;
					case 5:
						{
						_localctx = new NumExprMODContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(854);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(855);
						match(MOD);
						setState(856);
						numExpr(13);
						}
						break;
					case 6:
						{
						_localctx = new NumExprPlusContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(857);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(858);
						match(PLUS);
						setState(859);
						numExpr(12);
						}
						break;
					case 7:
						{
						_localctx = new NumExprSubtractContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(860);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(861);
						match(MINUS);
						setState(862);
						numExpr(11);
						}
						break;
					case 8:
						{
						_localctx = new NumExprNumRelopContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(863);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(864);
						compare();
						setState(865);
						numExpr(10);
						}
						break;
					case 9:
						{
						_localctx = new NumExprSHLContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(867);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(868);
						match(SHL);
						setState(869);
						numExpr(8);
						}
						break;
					case 10:
						{
						_localctx = new NumExprSHRContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(870);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(871);
						match(SHR);
						setState(872);
						numExpr(7);
						}
						break;
					case 11:
						{
						_localctx = new NumExprANDContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(873);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(874);
						match(AND);
						setState(875);
						numExpr(6);
						}
						break;
					case 12:
						{
						_localctx = new NumExprORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(876);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(877);
						match(OR);
						setState(878);
						numExpr(5);
						}
						break;
					case 13:
						{
						_localctx = new NumExprEORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(879);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(880);
						match(EOR);
						setState(881);
						numExpr(4);
						}
						break;
					}
					} 
				}
				setState(886);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,81,_ctx);
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
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterCompareLE(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitCompareLE(this);
		}
	}
	public static class CompareLTContext extends CompareContext {
		public TerminalNode LT() { return getToken(DARICParser.LT, 0); }
		public CompareLTContext(CompareContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterCompareLT(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitCompareLT(this);
		}
	}
	public static class CompareNEContext extends CompareContext {
		public TerminalNode NE() { return getToken(DARICParser.NE, 0); }
		public CompareNEContext(CompareContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterCompareNE(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitCompareNE(this);
		}
	}
	public static class CompareGEContext extends CompareContext {
		public TerminalNode GE() { return getToken(DARICParser.GE, 0); }
		public CompareGEContext(CompareContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterCompareGE(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitCompareGE(this);
		}
	}
	public static class CompareGTContext extends CompareContext {
		public TerminalNode GT() { return getToken(DARICParser.GT, 0); }
		public CompareGTContext(CompareContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterCompareGT(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitCompareGT(this);
		}
	}
	public static class CompareEQContext extends CompareContext {
		public TerminalNode EQ() { return getToken(DARICParser.EQ, 0); }
		public CompareEQContext(CompareContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterCompareEQ(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitCompareEQ(this);
		}
	}

	public final CompareContext compare() throws RecognitionException {
		CompareContext _localctx = new CompareContext(_ctx, getState());
		enterRule(_localctx, 82, RULE_compare);
		try {
			setState(893);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case EQ:
				_localctx = new CompareEQContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(887);
				match(EQ);
				}
				break;
			case NE:
				_localctx = new CompareNEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(888);
				match(NE);
				}
				break;
			case GT:
				_localctx = new CompareGTContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(889);
				match(GT);
				}
				break;
			case GE:
				_localctx = new CompareGEContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(890);
				match(GE);
				}
				break;
			case LT:
				_localctx = new CompareLTContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(891);
				match(LT);
				}
				break;
			case LE:
				_localctx = new CompareLEContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(892);
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
		case 38:
			return strExpr_sempred((StrExprContext)_localctx, predIndex);
		case 40:
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u0081\u0382\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\3"+
		"\2\7\2X\n\2\f\2\16\2[\13\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3"+
		"\3\3\5\3i\n\3\3\4\3\4\3\4\5\4n\n\4\7\4p\n\4\f\4\16\4s\13\4\3\4\5\4v\n"+
		"\4\3\5\3\5\5\5z\n\5\3\6\5\6}\n\6\3\6\7\6\u0080\n\6\f\6\16\6\u0083\13\6"+
		"\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\b\6\b\u008d\n\b\r\b\16\b\u008e\3\b\3\b"+
		"\5\b\u0093\n\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\7\b\u009d\n\b\f\b\16\b"+
		"\u00a0\13\b\3\b\3\b\3\b\3\b\7\b\u00a6\n\b\f\b\16\b\u00a9\13\b\3\b\3\b"+
		"\3\b\5\b\u00ae\n\b\3\b\3\b\3\b\3\b\5\b\u00b4\n\b\3\b\3\b\3\b\3\b\3\b\3"+
		"\b\3\b\3\b\5\b\u00be\n\b\3\b\3\b\3\b\3\b\3\b\3\b\5\b\u00c6\n\b\3\b\3\b"+
		"\3\b\3\b\3\b\3\b\3\b\5\b\u00cf\n\b\3\b\3\b\3\b\3\b\3\b\5\b\u00d6\n\b\3"+
		"\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\5\b\u00e3\n\b\3\b\3\b\3\b\3"+
		"\b\3\b\5\b\u00ea\n\b\3\b\3\b\3\b\5\b\u00ef\n\b\3\b\3\b\3\b\5\b\u00f4\n"+
		"\b\3\b\3\b\3\b\3\b\5\b\u00fa\n\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\5\b\u0103"+
		"\n\b\3\b\3\b\5\b\u0107\n\b\3\b\5\b\u010a\n\b\5\b\u010c\n\b\3\b\3\b\3\b"+
		"\3\b\3\b\3\b\3\b\3\b\7\b\u0116\n\b\f\b\16\b\u0119\13\b\3\b\3\b\3\b\3\b"+
		"\3\b\3\b\3\b\3\b\3\b\7\b\u0124\n\b\f\b\16\b\u0127\13\b\3\b\3\b\3\b\3\b"+
		"\3\b\7\b\u012e\n\b\f\b\16\b\u0131\13\b\3\b\3\b\5\b\u0135\n\b\3\b\3\b\3"+
		"\b\5\b\u013a\n\b\3\b\3\b\3\b\3\b\3\b\7\b\u0141\n\b\f\b\16\b\u0144\13\b"+
		"\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\7\b\u014f\n\b\f\b\16\b\u0152\13\b"+
		"\3\b\3\b\3\b\3\b\7\b\u0158\n\b\f\b\16\b\u015b\13\b\3\b\3\b\3\b\3\b\3\b"+
		"\7\b\u0162\n\b\f\b\16\b\u0165\13\b\3\b\3\b\5\b\u0169\n\b\3\t\3\t\3\t\3"+
		"\t\7\t\u016f\n\t\f\t\16\t\u0172\13\t\3\t\3\t\3\t\3\n\3\n\3\13\3\13\5\13"+
		"\u017b\n\13\3\f\3\f\3\f\5\f\u0180\n\f\3\r\3\r\3\16\3\16\3\16\3\16\3\16"+
		"\5\16\u0189\n\16\3\16\3\16\7\16\u018d\n\16\f\16\16\16\u0190\13\16\3\16"+
		"\3\16\3\16\3\16\3\16\5\16\u0197\n\16\3\16\3\16\7\16\u019b\n\16\f\16\16"+
		"\16\u019e\13\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\5\16\u01a9"+
		"\n\16\3\16\3\16\3\16\3\16\5\16\u01af\n\16\3\16\3\16\3\16\3\16\5\16\u01b5"+
		"\n\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16"+
		"\3\16\3\16\5\16\u01c6\n\16\3\17\3\17\3\17\3\17\3\17\5\17\u01cd\n\17\3"+
		"\17\3\17\7\17\u01d1\n\17\f\17\16\17\u01d4\13\17\3\17\3\17\3\17\3\17\3"+
		"\17\3\17\3\17\3\17\3\17\3\17\5\17\u01e0\n\17\3\20\3\20\3\20\5\20\u01e5"+
		"\n\20\3\21\3\21\5\21\u01e9\n\21\3\22\3\22\3\23\3\23\3\24\3\24\3\25\3\25"+
		"\3\26\3\26\3\26\3\26\3\26\3\26\5\26\u01f9\n\26\3\26\3\26\7\26\u01fd\n"+
		"\26\f\26\16\26\u0200\13\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26"+
		"\5\26\u020b\n\26\3\27\3\27\3\27\3\27\3\27\7\27\u0212\n\27\f\27\16\27\u0215"+
		"\13\27\3\27\3\27\3\30\3\30\3\30\7\30\u021c\n\30\f\30\16\30\u021f\13\30"+
		"\3\31\5\31\u0222\n\31\3\31\3\31\3\31\5\31\u0227\n\31\3\31\7\31\u022a\n"+
		"\31\f\31\16\31\u022d\13\31\3\32\3\32\3\32\7\32\u0232\n\32\f\32\16\32\u0235"+
		"\13\32\3\33\3\33\3\33\7\33\u023a\n\33\f\33\16\33\u023d\13\33\3\34\5\34"+
		"\u0240\n\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\5\34\u024a\n\34\3"+
		"\35\6\35\u024d\n\35\r\35\16\35\u024e\3\36\3\36\3\36\5\36\u0254\n\36\3"+
		"\37\5\37\u0257\n\37\3\37\5\37\u025a\n\37\3\37\3\37\3\37\3\37\7\37\u0260"+
		"\n\37\f\37\16\37\u0263\13\37\3\37\5\37\u0266\n\37\3 \3 \5 \u026a\n \3"+
		"!\3!\3!\3!\5!\u0270\n!\3\"\5\"\u0273\n\"\3\"\3\"\3#\3#\3$\3$\3%\5%\u027c"+
		"\n%\3%\3%\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&"+
		"\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&"+
		"\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\5&\u02b8\n&\3\'\3\'\3(\3(\3(\3"+
		"(\5(\u02c0\n(\3(\3(\3(\7(\u02c5\n(\f(\16(\u02c8\13(\3)\3)\3)\3)\3)\3)"+
		"\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)"+
		"\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)"+
		"\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)"+
		"\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)"+
		"\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\5)\u033b\n)\3*\3*\3*\3*"+
		"\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\5*\u034b\n*\3*\3*\3*\3*\3*\3*\3*\3*\3*"+
		"\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*\3*"+
		"\3*\3*\3*\3*\3*\3*\3*\3*\7*\u0375\n*\f*\16*\u0378\13*\3+\3+\3+\3+\3+\3"+
		"+\5+\u0380\n+\3+\2\4NR,\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*"+
		",.\60\62\64\668:<>@BDFHJLNPRT\2\5\4\2\37\37pp\3\2su\3\2YZ\2\u040d\2Y\3"+
		"\2\2\2\4h\3\2\2\2\6u\3\2\2\2\by\3\2\2\2\n|\3\2\2\2\f\u0084\3\2\2\2\16"+
		"\u0168\3\2\2\2\20\u016a\3\2\2\2\22\u0176\3\2\2\2\24\u017a\3\2\2\2\26\u017f"+
		"\3\2\2\2\30\u0181\3\2\2\2\32\u01c5\3\2\2\2\34\u01df\3\2\2\2\36\u01e4\3"+
		"\2\2\2 \u01e8\3\2\2\2\"\u01ea\3\2\2\2$\u01ec\3\2\2\2&\u01ee\3\2\2\2(\u01f0"+
		"\3\2\2\2*\u020a\3\2\2\2,\u020c\3\2\2\2.\u0218\3\2\2\2\60\u0221\3\2\2\2"+
		"\62\u022e\3\2\2\2\64\u0236\3\2\2\2\66\u0249\3\2\2\28\u024c\3\2\2\2:\u0253"+
		"\3\2\2\2<\u0256\3\2\2\2>\u0269\3\2\2\2@\u026f\3\2\2\2B\u0272\3\2\2\2D"+
		"\u0276\3\2\2\2F\u0278\3\2\2\2H\u027b\3\2\2\2J\u02b7\3\2\2\2L\u02b9\3\2"+
		"\2\2N\u02bf\3\2\2\2P\u033a\3\2\2\2R\u034a\3\2\2\2T\u037f\3\2\2\2VX\5\4"+
		"\3\2WV\3\2\2\2X[\3\2\2\2YW\3\2\2\2YZ\3\2\2\2Z\\\3\2\2\2[Y\3\2\2\2\\]\7"+
		"\2\2\3]\3\3\2\2\2^i\7e\2\2_`\7h\2\2`i\7e\2\2ab\5\6\4\2bc\7e\2\2ci\3\2"+
		"\2\2de\5\f\7\2ef\5\6\4\2fg\7e\2\2gi\3\2\2\2h^\3\2\2\2h_\3\2\2\2ha\3\2"+
		"\2\2hd\3\2\2\2i\5\3\2\2\2jq\5\16\b\2km\7h\2\2ln\5\16\b\2ml\3\2\2\2mn\3"+
		"\2\2\2np\3\2\2\2ok\3\2\2\2ps\3\2\2\2qo\3\2\2\2qr\3\2\2\2rv\3\2\2\2sq\3"+
		"\2\2\2tv\t\2\2\2uj\3\2\2\2ut\3\2\2\2v\7\3\2\2\2wz\5\6\4\2xz\5\4\3\2yw"+
		"\3\2\2\2yx\3\2\2\2z\t\3\2\2\2{}\7h\2\2|{\3\2\2\2|}\3\2\2\2}\u0081\3\2"+
		"\2\2~\u0080\5\b\5\2\177~\3\2\2\2\u0080\u0083\3\2\2\2\u0081\177\3\2\2\2"+
		"\u0081\u0082\3\2\2\2\u0082\13\3\2\2\2\u0083\u0081\3\2\2\2\u0084\u0085"+
		"\7}\2\2\u0085\r\3\2\2\2\u0086\u0169\7\3\2\2\u0087\u0088\7\4\2\2\u0088"+
		"\u0089\5> \2\u0089\u008a\7\32\2\2\u008a\u008c\7e\2\2\u008b\u008d\5\20"+
		"\t\2\u008c\u008b\3\2\2\2\u008d\u008e\3\2\2\2\u008e\u008c\3\2\2\2\u008e"+
		"\u008f\3\2\2\2\u008f\u0092\3\2\2\2\u0090\u0091\7\33\2\2\u0091\u0093\5"+
		"\n\6\2\u0092\u0090\3\2\2\2\u0092\u0093\3\2\2\2\u0093\u0094\3\2\2\2\u0094"+
		"\u0095\7\13\2\2\u0095\u0169\3\2\2\2\u0096\u0097\7\5\2\2\u0097\u0169\5"+
		"N(\2\u0098\u0099\7\6\2\2\u0099\u009e\5\24\13\2\u009a\u009b\7i\2\2\u009b"+
		"\u009d\5\24\13\2\u009c\u009a\3\2\2\2\u009d\u00a0\3\2\2\2\u009e\u009c\3"+
		"\2\2\2\u009e\u009f\3\2\2\2\u009f\u0169\3\2\2\2\u00a0\u009e\3\2\2\2\u00a1"+
		"\u00a2\7\b\2\2\u00a2\u00a7\5,\27\2\u00a3\u00a4\7i\2\2\u00a4\u00a6\5,\27"+
		"\2\u00a5\u00a3\3\2\2\2\u00a6\u00a9\3\2\2\2\u00a7\u00a5\3\2\2\2\u00a7\u00a8"+
		"\3\2\2\2\u00a8\u0169\3\2\2\2\u00a9\u00a7\3\2\2\2\u00aa\u0169\7\n\2\2\u00ab"+
		"\u00ad\7\"\2\2\u00ac\u00ae\5> \2\u00ad\u00ac\3\2\2\2\u00ad\u00ae\3\2\2"+
		"\2\u00ae\u0169\3\2\2\2\u00af\u00b0\7\7\2\2\u00b0\u00b1\5\22\n\2\u00b1"+
		"\u00b3\7k\2\2\u00b2\u00b4\5\60\31\2\u00b3\u00b2\3\2\2\2\u00b3\u00b4\3"+
		"\2\2\2\u00b4\u00b5\3\2\2\2\u00b5\u00b6\7m\2\2\u00b6\u00b7\5\n\6\2\u00b7"+
		"\u00b8\7\r\2\2\u00b8\u0169\3\2\2\2\u00b9\u00ba\7\7\2\2\u00ba\u00bb\7r"+
		"\2\2\u00bb\u00bd\7k\2\2\u00bc\u00be\5\60\31\2\u00bd\u00bc\3\2\2\2\u00bd"+
		"\u00be\3\2\2\2\u00be\u00bf\3\2\2\2\u00bf\u00c0\7m\2\2\u00c0\u00c1\5\n"+
		"\6\2\u00c1\u00c2\7\16\2\2\u00c2\u0169\3\2\2\2\u00c3\u00c5\7\21\2\2\u00c4"+
		"\u00c6\7\27\2\2\u00c5\u00c4\3\2\2\2\u00c5\u00c6\3\2\2\2\u00c6\u00c7\3"+
		"\2\2\2\u00c7\u00c8\5 \21\2\u00c8\u00c9\7L\2\2\u00c9\u00ca\5R*\2\u00ca"+
		"\u00cb\7&\2\2\u00cb\u00ce\5R*\2\u00cc\u00cd\7$\2\2\u00cd\u00cf\5R*\2\u00ce"+
		"\u00cc\3\2\2\2\u00ce\u00cf\3\2\2\2\u00cf\u00d0\3\2\2\2\u00d0\u00d1\5\n"+
		"\6\2\u00d1\u00d2\7\31\2\2\u00d2\u0169\3\2\2\2\u00d3\u00d5\7\21\2\2\u00d4"+
		"\u00d6\7\27\2\2\u00d5\u00d4\3\2\2\2\u00d5\u00d6\3\2\2\2\u00d6\u00d7\3"+
		"\2\2\2\u00d7\u00d8\5\36\20\2\u00d8\u00d9\7\24\2\2\u00d9\u00da\5\36\20"+
		"\2\u00da\u00db\7k\2\2\u00db\u00dc\7m\2\2\u00dc\u00dd\5\n\6\2\u00dd\u00de"+
		"\7\31\2\2\u00de\u0169\3\2\2\2\u00df\u00e0\5\22\n\2\u00e0\u00e2\7k\2\2"+
		"\u00e1\u00e3\5\62\32\2\u00e2\u00e1\3\2\2\2\u00e2\u00e3\3\2\2\2\u00e3\u00e4"+
		"\3\2\2\2\u00e4\u00e5\7m\2\2\u00e5\u0169\3\2\2\2\u00e6\u00e7\7\23\2\2\u00e7"+
		"\u00e9\5> \2\u00e8\u00ea\7%\2\2\u00e9\u00e8\3\2\2\2\u00e9\u00ea\3\2\2"+
		"\2\u00ea\u00eb\3\2\2\2\u00eb\u00ee\5\6\4\2\u00ec\u00ed\7\t\2\2\u00ed\u00ef"+
		"\5\6\4\2\u00ee\u00ec\3\2\2\2\u00ee\u00ef\3\2\2\2\u00ef\u0169\3\2\2\2\u00f0"+
		"\u00f1\7\23\2\2\u00f1\u00f3\5> \2\u00f2\u00f4\7%\2\2\u00f3\u00f2\3\2\2"+
		"\2\u00f3\u00f4\3\2\2\2\u00f4\u00f5\3\2\2\2\u00f5\u00f6\7e\2\2\u00f6\u00f9"+
		"\5\n\6\2\u00f7\u00f8\7\t\2\2\u00f8\u00fa\5\n\6\2\u00f9\u00f7\3\2\2\2\u00f9"+
		"\u00fa\3\2\2\2\u00fa\u00fb\3\2\2\2\u00fb\u00fc\7e\2\2\u00fc\u00fd\7\f"+
		"\2\2\u00fd\u0169\3\2\2\2\u00fe\u0102\7\25\2\2\u00ff\u0100\5N(\2\u0100"+
		"\u0101\7i\2\2\u0101\u0103\3\2\2\2\u0102\u00ff\3\2\2\2\u0102\u0103\3\2"+
		"\2\2\u0103\u0104\3\2\2\2\u0104\u0169\5.\30\2\u0105\u0107\7\30\2\2\u0106"+
		"\u0105\3\2\2\2\u0106\u0107\3\2\2\2\u0107\u010c\3\2\2\2\u0108\u010a\7\26"+
		"\2\2\u0109\u0108\3\2\2\2\u0109\u010a\3\2\2\2\u010a\u010c\3\2\2\2\u010b"+
		"\u0106\3\2\2\2\u010b\u0109\3\2\2\2\u010c\u010d\3\2\2\2\u010d\u010e\5*"+
		"\26\2\u010e\u010f\7L\2\2\u010f\u0117\5> \2\u0110\u0111\7i\2\2\u0111\u0112"+
		"\5*\26\2\u0112\u0113\7L\2\2\u0113\u0114\5> \2\u0114\u0116\3\2\2\2\u0115"+
		"\u0110\3\2\2\2\u0116\u0119\3\2\2\2\u0117\u0115\3\2\2\2\u0117\u0118\3\2"+
		"\2\2\u0118\u0169\3\2\2\2\u0119\u0117\3\2\2\2\u011a\u011b\7\27\2\2\u011b"+
		"\u011c\5*\26\2\u011c\u011d\7L\2\2\u011d\u0125\5> \2\u011e\u011f\7i\2\2"+
		"\u011f\u0120\5*\26\2\u0120\u0121\7L\2\2\u0121\u0122\5> \2\u0122\u0124"+
		"\3\2\2\2\u0123\u011e\3\2\2\2\u0124\u0127\3\2\2\2\u0125\u0123\3\2\2\2\u0125"+
		"\u0126\3\2\2\2\u0126\u0169\3\2\2\2\u0127\u0125\3\2\2\2\u0128\u0129\7\27"+
		"\2\2\u0129\u012a\7\b\2\2\u012a\u012f\5,\27\2\u012b\u012c\7i\2\2\u012c"+
		"\u012e\5,\27\2\u012d\u012b\3\2\2\2\u012e\u0131\3\2\2\2\u012f\u012d\3\2"+
		"\2\2\u012f\u0130\3\2\2\2\u0130\u0169\3\2\2\2\u0131\u012f\3\2\2\2\u0132"+
		"\u0134\7\34\2\2\u0133\u0135\5<\37\2\u0134\u0133\3\2\2\2\u0134\u0135\3"+
		"\2\2\2\u0135\u0169\3\2\2\2\u0136\u0137\7r\2\2\u0137\u0139\7k\2\2\u0138"+
		"\u013a\5\62\32\2\u0139\u0138\3\2\2\2\u0139\u013a\3\2\2\2\u013a\u013b\3"+
		"\2\2\2\u013b\u0169\7m\2\2\u013c\u013d\7\36\2\2\u013d\u0142\5*\26\2\u013e"+
		"\u013f\7i\2\2\u013f\u0141\5*\26\2\u0140\u013e\3\2\2\2\u0141\u0144\3\2"+
		"\2\2\u0142\u0140\3\2\2\2\u0142\u0143\3\2\2\2\u0143\u0169\3\2\2\2\u0144"+
		"\u0142\3\2\2\2\u0145\u0169\7!\2\2\u0146\u0169\7\'\2\2\u0147\u0169\7(\2"+
		"\2\u0148\u0149\7*\2\2\u0149\u014a\5\"\22\2\u014a\u014b\7k\2\2\u014b\u0150"+
		"\5\36\20\2\u014c\u014d\7i\2\2\u014d\u014f\5\36\20\2\u014e\u014c\3\2\2"+
		"\2\u014f\u0152\3\2\2\2\u0150\u014e\3\2\2\2\u0150\u0151\3\2\2\2\u0151\u0153"+
		"\3\2\2\2\u0152\u0150\3\2\2\2\u0153\u0154\7m\2\2\u0154\u0169\3\2\2\2\u0155"+
		"\u0159\7 \2\2\u0156\u0158\5\b\5\2\u0157\u0156\3\2\2\2\u0158\u015b\3\2"+
		"\2\2\u0159\u0157\3\2\2\2\u0159\u015a\3\2\2\2\u015a\u015c\3\2\2\2\u015b"+
		"\u0159\3\2\2\2\u015c\u015d\7+\2\2\u015d\u0169\5> \2\u015e\u015f\7-\2\2"+
		"\u015f\u0163\5> \2\u0160\u0162\5\b\5\2\u0161\u0160\3\2\2\2\u0162\u0165"+
		"\3\2\2\2\u0163\u0161\3\2\2\2\u0163\u0164\3\2\2\2\u0164\u0166\3\2\2\2\u0165"+
		"\u0163\3\2\2\2\u0166\u0167\7\17\2\2\u0167\u0169\3\2\2\2\u0168\u0086\3"+
		"\2\2\2\u0168\u0087\3\2\2\2\u0168\u0096\3\2\2\2\u0168\u0098\3\2\2\2\u0168"+
		"\u00a1\3\2\2\2\u0168\u00aa\3\2\2\2\u0168\u00ab\3\2\2\2\u0168\u00af\3\2"+
		"\2\2\u0168\u00b9\3\2\2\2\u0168\u00c3\3\2\2\2\u0168\u00d3\3\2\2\2\u0168"+
		"\u00df\3\2\2\2\u0168\u00e6\3\2\2\2\u0168\u00f0\3\2\2\2\u0168\u00fe\3\2"+
		"\2\2\u0168\u010b\3\2\2\2\u0168\u011a\3\2\2\2\u0168\u0128\3\2\2\2\u0168"+
		"\u0132\3\2\2\2\u0168\u0136\3\2\2\2\u0168\u013c\3\2\2\2\u0168\u0145\3\2"+
		"\2\2\u0168\u0146\3\2\2\2\u0168\u0147\3\2\2\2\u0168\u0148\3\2\2\2\u0168"+
		"\u0155\3\2\2\2\u0168\u015e\3\2\2\2\u0169\17\3\2\2\2\u016a\u016b\7,\2\2"+
		"\u016b\u0170\5> \2\u016c\u016d\7i\2\2\u016d\u016f\5> \2\u016e\u016c\3"+
		"\2\2\2\u016f\u0172\3\2\2\2\u0170\u016e\3\2\2\2\u0170\u0171\3\2\2\2\u0171"+
		"\u0173\3\2\2\2\u0172\u0170\3\2\2\2\u0173\u0174\7h\2\2\u0174\u0175\5\n"+
		"\6\2\u0175\21\3\2\2\2\u0176\u0177\t\3\2\2\u0177\23\3\2\2\2\u0178\u017b"+
		"\5@!\2\u0179\u017b\5L\'\2\u017a\u0178\3\2\2\2\u017a\u0179\3\2\2\2\u017b"+
		"\25\3\2\2\2\u017c\u0180\5\32\16\2\u017d\u0180\5\34\17\2\u017e\u0180\5"+
		"\30\r\2\u017f\u017c\3\2\2\2\u017f\u017d\3\2\2\2\u017f\u017e\3\2\2\2\u0180"+
		"\27\3\2\2\2\u0181\u0182\5(\25\2\u0182\31\3\2\2\2\u0183\u018e\5\"\22\2"+
		"\u0184\u0185\7k\2\2\u0185\u0188\5R*\2\u0186\u0187\7i\2\2\u0187\u0189\5"+
		"R*\2\u0188\u0186\3\2\2\2\u0188\u0189\3\2\2\2\u0189\u018a\3\2\2\2\u018a"+
		"\u018b\7m\2\2\u018b\u018d\3\2\2\2\u018c\u0184\3\2\2\2\u018d\u0190\3\2"+
		"\2\2\u018e\u018c\3\2\2\2\u018e\u018f\3\2\2\2\u018f\u01c6\3\2\2\2\u0190"+
		"\u018e\3\2\2\2\u0191\u019c\5$\23\2\u0192\u0193\7k\2\2\u0193\u0196\5R*"+
		"\2\u0194\u0195\7i\2\2\u0195\u0197\5R*\2\u0196\u0194\3\2\2\2\u0196\u0197"+
		"\3\2\2\2\u0197\u0198\3\2\2\2\u0198\u0199\7m\2\2\u0199\u019b\3\2\2\2\u019a"+
		"\u0192\3\2\2\2\u019b\u019e\3\2\2\2\u019c\u019a\3\2\2\2\u019c\u019d\3\2"+
		"\2\2\u019d\u01c6\3\2\2\2\u019e\u019c\3\2\2\2\u019f\u01a0\5\30\r\2\u01a0"+
		"\u01a1\7k\2\2\u01a1\u01a2\5R*\2\u01a2\u01a3\7m\2\2\u01a3\u01a4\5\"\22"+
		"\2\u01a4\u01c6\3\2\2\2\u01a5\u01a6\7t\2\2\u01a6\u01a8\7k\2\2\u01a7\u01a9"+
		"\5\62\32\2\u01a8\u01a7\3\2\2\2\u01a8\u01a9\3\2\2\2\u01a9\u01aa\3\2\2\2"+
		"\u01aa\u01c6\7m\2\2\u01ab\u01ac\7s\2\2\u01ac\u01ae\7k\2\2\u01ad\u01af"+
		"\5\62\32\2\u01ae\u01ad\3\2\2\2\u01ae\u01af\3\2\2\2\u01af\u01b0\3\2\2\2"+
		"\u01b0\u01c6\7m\2\2\u01b1\u01b2\7u\2\2\u01b2\u01b4\7k\2\2\u01b3\u01b5"+
		"\5\62\32\2\u01b4\u01b3\3\2\2\2\u01b4\u01b5\3\2\2\2\u01b5\u01b6\3\2\2\2"+
		"\u01b6\u01c6\7m\2\2\u01b7\u01c6\5\"\22\2\u01b8\u01c6\5$\23\2\u01b9\u01ba"+
		"\5\30\r\2\u01ba\u01bb\5\"\22\2\u01bb\u01c6\3\2\2\2\u01bc\u01bd\5\30\r"+
		"\2\u01bd\u01be\5$\23\2\u01be\u01c6\3\2\2\2\u01bf\u01c0\5\30\r\2\u01c0"+
		"\u01c1\7k\2\2\u01c1\u01c2\5R*\2\u01c2\u01c3\7m\2\2\u01c3\u01c4\5$\23\2"+
		"\u01c4\u01c6\3\2\2\2\u01c5\u0183\3\2\2\2\u01c5\u0191\3\2\2\2\u01c5\u019f"+
		"\3\2\2\2\u01c5\u01a5\3\2\2\2\u01c5\u01ab\3\2\2\2\u01c5\u01b1\3\2\2\2\u01c5"+
		"\u01b7\3\2\2\2\u01c5\u01b8\3\2\2\2\u01c5\u01b9\3\2\2\2\u01c5\u01bc\3\2"+
		"\2\2\u01c5\u01bf\3\2\2\2\u01c6\33\3\2\2\2\u01c7\u01d2\5&\24\2\u01c8\u01c9"+
		"\7k\2\2\u01c9\u01cc\5R*\2\u01ca\u01cb\7i\2\2\u01cb\u01cd\5R*\2\u01cc\u01ca"+
		"\3\2\2\2\u01cc\u01cd\3\2\2\2\u01cd\u01ce\3\2\2\2\u01ce\u01cf\7m\2\2\u01cf"+
		"\u01d1\3\2\2\2\u01d0\u01c8\3\2\2\2\u01d1\u01d4\3\2\2\2\u01d2\u01d0\3\2"+
		"\2\2\u01d2\u01d3\3\2\2\2\u01d3\u01e0\3\2\2\2\u01d4\u01d2\3\2\2\2\u01d5"+
		"\u01d6\5\30\r\2\u01d6\u01d7\7k\2\2\u01d7\u01d8\5R*\2\u01d8\u01d9\7m\2"+
		"\2\u01d9\u01da\5&\24\2\u01da\u01e0\3\2\2\2\u01db\u01e0\5&\24\2\u01dc\u01dd"+
		"\5\30\r\2\u01dd\u01de\5&\24\2\u01de\u01e0\3\2\2\2\u01df\u01c7\3\2\2\2"+
		"\u01df\u01d5\3\2\2\2\u01df\u01db\3\2\2\2\u01df\u01dc\3\2\2\2\u01e0\35"+
		"\3\2\2\2\u01e1\u01e5\5\"\22\2\u01e2\u01e5\5$\23\2\u01e3\u01e5\5&\24\2"+
		"\u01e4\u01e1\3\2\2\2\u01e4\u01e2\3\2\2\2\u01e4\u01e3\3\2\2\2\u01e5\37"+
		"\3\2\2\2\u01e6\u01e9\5\"\22\2\u01e7\u01e9\5$\23\2\u01e8\u01e6\3\2\2\2"+
		"\u01e8\u01e7\3\2\2\2\u01e9!\3\2\2\2\u01ea\u01eb\7v\2\2\u01eb#\3\2\2\2"+
		"\u01ec\u01ed\7w\2\2\u01ed%\3\2\2\2\u01ee\u01ef\7x\2\2\u01ef\'\3\2\2\2"+
		"\u01f0\u01f1\7y\2\2\u01f1)\3\2\2\2\u01f2\u020b\5\36\20\2\u01f3\u01fe\5"+
		"\36\20\2\u01f4\u01f5\7k\2\2\u01f5\u01f8\5R*\2\u01f6\u01f7\7i\2\2\u01f7"+
		"\u01f9\5R*\2\u01f8\u01f6\3\2\2\2\u01f8\u01f9\3\2\2\2\u01f9\u01fa\3\2\2"+
		"\2\u01fa\u01fb\7m\2\2\u01fb\u01fd\3\2\2\2\u01fc\u01f4\3\2\2\2\u01fd\u0200"+
		"\3\2\2\2\u01fe\u01fc\3\2\2\2\u01fe\u01ff\3\2\2\2\u01ff\u020b\3\2\2\2\u0200"+
		"\u01fe\3\2\2\2\u0201\u0202\5\30\r\2\u0202\u0203\5\"\22\2\u0203\u020b\3"+
		"\2\2\2\u0204\u0205\5\30\r\2\u0205\u0206\7k\2\2\u0206\u0207\5R*\2\u0207"+
		"\u0208\7m\2\2\u0208\u0209\5\"\22\2\u0209\u020b\3\2\2\2\u020a\u01f2\3\2"+
		"\2\2\u020a\u01f3\3\2\2\2\u020a\u0201\3\2\2\2\u020a\u0204\3\2\2\2\u020b"+
		"+\3\2\2\2\u020c\u020d\5\36\20\2\u020d\u020e\7k\2\2\u020e\u0213\5R*\2\u020f"+
		"\u0210\7i\2\2\u0210\u0212\5R*\2\u0211\u020f\3\2\2\2\u0212\u0215\3\2\2"+
		"\2\u0213\u0211\3\2\2\2\u0213\u0214\3\2\2\2\u0214\u0216\3\2\2\2\u0215\u0213"+
		"\3\2\2\2\u0216\u0217\7m\2\2\u0217-\3\2\2\2\u0218\u021d\5*\26\2\u0219\u021a"+
		"\7i\2\2\u021a\u021c\5*\26\2\u021b\u0219\3\2\2\2\u021c\u021f\3\2\2\2\u021d"+
		"\u021b\3\2\2\2\u021d\u021e\3\2\2\2\u021e/\3\2\2\2\u021f\u021d\3\2\2\2"+
		"\u0220\u0222\7\"\2\2\u0221\u0220\3\2\2\2\u0221\u0222\3\2\2\2\u0222\u0223"+
		"\3\2\2\2\u0223\u022b\5\36\20\2\u0224\u0226\7i\2\2\u0225\u0227\7\"\2\2"+
		"\u0226\u0225\3\2\2\2\u0226\u0227\3\2\2\2\u0227\u0228\3\2\2\2\u0228\u022a"+
		"\5\36\20\2\u0229\u0224\3\2\2\2\u022a\u022d\3\2\2\2\u022b\u0229\3\2\2\2"+
		"\u022b\u022c\3\2\2\2\u022c\61\3\2\2\2\u022d\u022b\3\2\2\2\u022e\u0233"+
		"\5> \2\u022f\u0230\7i\2\2\u0230\u0232\5> \2\u0231\u022f\3\2\2\2\u0232"+
		"\u0235\3\2\2\2\u0233\u0231\3\2\2\2\u0233\u0234\3\2\2\2\u0234\63\3\2\2"+
		"\2\u0235\u0233\3\2\2\2\u0236\u023b\5> \2\u0237\u0238\7i\2\2\u0238\u023a"+
		"\5> \2\u0239\u0237\3\2\2\2\u023a\u023d\3\2\2\2\u023b\u0239\3\2\2\2\u023b"+
		"\u023c\3\2\2\2\u023c\65\3\2\2\2\u023d\u023b\3\2\2\2\u023e\u0240\7g\2\2"+
		"\u023f\u023e\3\2\2\2\u023f\u0240\3\2\2\2\u0240\u0241\3\2\2\2\u0241\u024a"+
		"\5> \2\u0242\u0243\7#\2\2\u0243\u0244\7k\2\2\u0244\u0245\5R*\2\u0245\u0246"+
		"\7m\2\2\u0246\u024a\3\2\2\2\u0247\u0248\7#\2\2\u0248\u024a\5R*\2\u0249"+
		"\u023f\3\2\2\2\u0249\u0242\3\2\2\2\u0249\u0247\3\2\2\2\u024a\67\3\2\2"+
		"\2\u024b\u024d\7f\2\2\u024c\u024b\3\2\2\2\u024d\u024e\3\2\2\2\u024e\u024c"+
		"\3\2\2\2\u024e\u024f\3\2\2\2\u024f9\3\2\2\2\u0250\u0254\7i\2\2\u0251\u0254"+
		"\7n\2\2\u0252\u0254\58\35\2\u0253\u0250\3\2\2\2\u0253\u0251\3\2\2\2\u0253"+
		"\u0252\3\2\2\2\u0254;\3\2\2\2\u0255\u0257\58\35\2\u0256\u0255\3\2\2\2"+
		"\u0256\u0257\3\2\2\2\u0257\u0259\3\2\2\2\u0258\u025a\7n\2\2\u0259\u0258"+
		"\3\2\2\2\u0259\u025a\3\2\2\2\u025a\u025b\3\2\2\2\u025b\u0261\5\66\34\2"+
		"\u025c\u025d\5:\36\2\u025d\u025e\5\66\34\2\u025e\u0260\3\2\2\2\u025f\u025c"+
		"\3\2\2\2\u0260\u0263\3\2\2\2\u0261\u025f\3\2\2\2\u0261\u0262\3\2\2\2\u0262"+
		"\u0265\3\2\2\2\u0263\u0261\3\2\2\2\u0264\u0266\7n\2\2\u0265\u0264\3\2"+
		"\2\2\u0265\u0266\3\2\2\2\u0266=\3\2\2\2\u0267\u026a\5R*\2\u0268\u026a"+
		"\5N(\2\u0269\u0267\3\2\2\2\u0269\u0268\3\2\2\2\u026a?\3\2\2\2\u026b\u0270"+
		"\5B\"\2\u026c\u0270\5H%\2\u026d\u0270\5D#\2\u026e\u0270\5F$\2\u026f\u026b"+
		"\3\2\2\2\u026f\u026c\3\2\2\2\u026f\u026d\3\2\2\2\u026f\u026e\3\2\2\2\u0270"+
		"A\3\2\2\2\u0271\u0273\t\4\2\2\u0272\u0271\3\2\2\2\u0272\u0273\3\2\2\2"+
		"\u0273\u0274\3\2\2\2\u0274\u0275\7}\2\2\u0275C\3\2\2\2\u0276\u0277\7{"+
		"\2\2\u0277E\3\2\2\2\u0278\u0279\7|\2\2\u0279G\3\2\2\2\u027a\u027c\t\4"+
		"\2\2\u027b\u027a\3\2\2\2\u027b\u027c\3\2\2\2\u027c\u027d\3\2\2\2\u027d"+
		"\u027e\7~\2\2\u027eI\3\2\2\2\u027f\u02b8\7B\2\2\u0280\u0281\7E\2\2\u0281"+
		"\u0282\7k\2\2\u0282\u0283\5R*\2\u0283\u0284\7m\2\2\u0284\u02b8\3\2\2\2"+
		"\u0285\u0286\7E\2\2\u0286\u02b8\5R*\2\u0287\u0288\7F\2\2\u0288\u0289\7"+
		"k\2\2\u0289\u028a\5N(\2\u028a\u028b\7i\2\2\u028b\u028c\5R*\2\u028c\u028d"+
		"\7m\2\2\u028d\u02b8\3\2\2\2\u028e\u028f\7G\2\2\u028f\u0290\7k\2\2\u0290"+
		"\u0291\5N(\2\u0291\u0292\7i\2\2\u0292\u0293\5R*\2\u0293\u0294\7i\2\2\u0294"+
		"\u0295\5R*\2\u0295\u0296\7m\2\2\u0296\u02b8\3\2\2\2\u0297\u0298\7G\2\2"+
		"\u0298\u0299\7k\2\2\u0299\u029a\5N(\2\u029a\u029b\7i\2\2\u029b\u029c\5"+
		"R*\2\u029c\u029d\7m\2\2\u029d\u02b8\3\2\2\2\u029e\u029f\7H\2\2\u029f\u02a0"+
		"\7k\2\2\u02a0\u02a1\5N(\2\u02a1\u02a2\7i\2\2\u02a2\u02a3\5R*\2\u02a3\u02a4"+
		"\7m\2\2\u02a4\u02b8\3\2\2\2\u02a5\u02a6\7C\2\2\u02a6\u02a7\7k\2\2\u02a7"+
		"\u02a8\5R*\2\u02a8\u02a9\7m\2\2\u02a9\u02b8\3\2\2\2\u02aa\u02ab\7C\2\2"+
		"\u02ab\u02ac\7g\2\2\u02ac\u02ad\7k\2\2\u02ad\u02ae\5R*\2\u02ae\u02af\7"+
		"m\2\2\u02af\u02b8\3\2\2\2\u02b0\u02b1\7D\2\2\u02b1\u02b2\7k\2\2\u02b2"+
		"\u02b3\5R*\2\u02b3\u02b4\7i\2\2\u02b4\u02b5\5N(\2\u02b5\u02b6\7m\2\2\u02b6"+
		"\u02b8\3\2\2\2\u02b7\u027f\3\2\2\2\u02b7\u0280\3\2\2\2\u02b7\u0285\3\2"+
		"\2\2\u02b7\u0287\3\2\2\2\u02b7\u028e\3\2\2\2\u02b7\u0297\3\2\2\2\u02b7"+
		"\u029e\3\2\2\2\u02b7\u02a5\3\2\2\2\u02b7\u02aa\3\2\2\2\u02b7\u02b0\3\2"+
		"\2\2\u02b8K\3\2\2\2\u02b9\u02ba\7q\2\2\u02baM\3\2\2\2\u02bb\u02bc\b(\1"+
		"\2\u02bc\u02c0\5J&\2\u02bd\u02c0\5L\'\2\u02be\u02c0\5\34\17\2\u02bf\u02bb"+
		"\3\2\2\2\u02bf\u02bd\3\2\2\2\u02bf\u02be\3\2\2\2\u02c0\u02c6\3\2\2\2\u02c1"+
		"\u02c2\f\5\2\2\u02c2\u02c3\7Y\2\2\u02c3\u02c5\5N(\6\u02c4\u02c1\3\2\2"+
		"\2\u02c5\u02c8\3\2\2\2\u02c6\u02c4\3\2\2\2\u02c6\u02c7\3\2\2\2\u02c7O"+
		"\3\2\2\2\u02c8\u02c6\3\2\2\2\u02c9\u033b\7/\2\2\u02ca\u033b\7\20\2\2\u02cb"+
		"\u033b\7)\2\2\u02cc\u033b\7.\2\2\u02cd\u033b\7I\2\2\u02ce\u033b\7J\2\2"+
		"\u02cf\u033b\7K\2\2\u02d0\u02d1\7I\2\2\u02d1\u02d2\7k\2\2\u02d2\u02d3"+
		"\5R*\2\u02d3\u02d4\7m\2\2\u02d4\u033b\3\2\2\2\u02d5\u02d6\7\61\2\2\u02d6"+
		"\u02d7\7k\2\2\u02d7\u02d8\5R*\2\u02d8\u02d9\7m\2\2\u02d9\u033b\3\2\2\2"+
		"\u02da\u02db\7\62\2\2\u02db\u02dc\7k\2\2\u02dc\u02dd\5R*\2\u02dd\u02de"+
		"\7m\2\2\u02de\u033b\3\2\2\2\u02df\u02e0\7\63\2\2\u02e0\u02e1\7k\2\2\u02e1"+
		"\u02e2\5R*\2\u02e2\u02e3\7m\2\2\u02e3\u033b\3\2\2\2\u02e4\u02e5\7\64\2"+
		"\2\u02e5\u02e6\7k\2\2\u02e6\u02e7\5R*\2\u02e7\u02e8\7m\2\2\u02e8\u033b"+
		"\3\2\2\2\u02e9\u02ea\7\65\2\2\u02ea\u02eb\7k\2\2\u02eb\u02ec\5R*\2\u02ec"+
		"\u02ed\7m\2\2\u02ed\u033b\3\2\2\2\u02ee\u02ef\7\66\2\2\u02ef\u02f0\7k"+
		"\2\2\u02f0\u02f1\5R*\2\u02f1\u02f2\7m\2\2\u02f2\u033b\3\2\2\2\u02f3\u02f4"+
		"\7\67\2\2\u02f4\u02f5\7k\2\2\u02f5\u02f6\5R*\2\u02f6\u02f7\7m\2\2\u02f7"+
		"\u033b\3\2\2\2\u02f8\u02f9\78\2\2\u02f9\u02fa\7k\2\2\u02fa\u02fb\5R*\2"+
		"\u02fb\u02fc\7m\2\2\u02fc\u033b\3\2\2\2\u02fd\u02fe\79\2\2\u02fe\u02ff"+
		"\7k\2\2\u02ff\u0300\5R*\2\u0300\u0301\7m\2\2\u0301\u033b\3\2\2\2\u0302"+
		"\u0303\7:\2\2\u0303\u0304\7k\2\2\u0304\u0305\5R*\2\u0305\u0306\7m\2\2"+
		"\u0306\u033b\3\2\2\2\u0307\u0308\7;\2\2\u0308\u0309\7k\2\2\u0309\u030a"+
		"\5R*\2\u030a\u030b\7m\2\2\u030b\u033b\3\2\2\2\u030c\u030d\7<\2\2\u030d"+
		"\u030e\7k\2\2\u030e\u030f\5R*\2\u030f\u0310\7m\2\2\u0310\u033b\3\2\2\2"+
		"\u0311\u0312\7\60\2\2\u0312\u0313\7k\2\2\u0313\u0314\5R*\2\u0314\u0315"+
		"\7m\2\2\u0315\u033b\3\2\2\2\u0316\u0317\7=\2\2\u0317\u0318\7k\2\2\u0318"+
		"\u0319\5R*\2\u0319\u031a\7m\2\2\u031a\u033b\3\2\2\2\u031b\u031c\7>\2\2"+
		"\u031c\u031d\7k\2\2\u031d\u031e\5N(\2\u031e\u031f\7m\2\2\u031f\u033b\3"+
		"\2\2\2\u0320\u0321\7?\2\2\u0321\u0322\7k\2\2\u0322\u0323\5N(\2\u0323\u0324"+
		"\7m\2\2\u0324\u033b\3\2\2\2\u0325\u0326\7@\2\2\u0326\u0327\7k\2\2\u0327"+
		"\u0328\5N(\2\u0328\u0329\7i\2\2\u0329\u032a\5N(\2\u032a\u032b\7m\2\2\u032b"+
		"\u033b\3\2\2\2\u032c\u032d\7@\2\2\u032d\u032e\7k\2\2\u032e\u032f\5N(\2"+
		"\u032f\u0330\7i\2\2\u0330\u0331\5N(\2\u0331\u0332\7i\2\2\u0332\u0333\5"+
		"R*\2\u0333\u0334\7m\2\2\u0334\u033b\3\2\2\2\u0335\u0336\7A\2\2\u0336\u0337"+
		"\7k\2\2\u0337\u0338\5N(\2\u0338\u0339\7m\2\2\u0339\u033b\3\2\2\2\u033a"+
		"\u02c9\3\2\2\2\u033a\u02ca\3\2\2\2\u033a\u02cb\3\2\2\2\u033a\u02cc\3\2"+
		"\2\2\u033a\u02cd\3\2\2\2\u033a\u02ce\3\2\2\2\u033a\u02cf\3\2\2\2\u033a"+
		"\u02d0\3\2\2\2\u033a\u02d5\3\2\2\2\u033a\u02da\3\2\2\2\u033a\u02df\3\2"+
		"\2\2\u033a\u02e4\3\2\2\2\u033a\u02e9\3\2\2\2\u033a\u02ee\3\2\2\2\u033a"+
		"\u02f3\3\2\2\2\u033a\u02f8\3\2\2\2\u033a\u02fd\3\2\2\2\u033a\u0302\3\2"+
		"\2\2\u033a\u0307\3\2\2\2\u033a\u030c\3\2\2\2\u033a\u0311\3\2\2\2\u033a"+
		"\u0316\3\2\2\2\u033a\u031b\3\2\2\2\u033a\u0320\3\2\2\2\u033a\u0325\3\2"+
		"\2\2\u033a\u032c\3\2\2\2\u033a\u0335\3\2\2\2\u033bQ\3\2\2\2\u033c\u033d"+
		"\b*\1\2\u033d\u034b\5P)\2\u033e\u033f\7R\2\2\u033f\u034b\5R*\24\u0340"+
		"\u0341\7k\2\2\u0341\u0342\5R*\2\u0342\u0343\7m\2\2\u0343\u034b\3\2\2\2"+
		"\u0344\u0345\5N(\2\u0345\u0346\5T+\2\u0346\u0347\5N(\2\u0347\u034b\3\2"+
		"\2\2\u0348\u034b\5@!\2\u0349\u034b\5\32\16\2\u034a\u033c\3\2\2\2\u034a"+
		"\u033e\3\2\2\2\u034a\u0340\3\2\2\2\u034a\u0344\3\2\2\2\u034a\u0348\3\2"+
		"\2\2\u034a\u0349\3\2\2\2\u034b\u0376\3\2\2\2\u034c\u034d\f\22\2\2\u034d"+
		"\u034e\7X\2\2\u034e\u0375\5R*\22\u034f\u0350\f\21\2\2\u0350\u0351\7[\2"+
		"\2\u0351\u0375\5R*\22\u0352\u0353\f\20\2\2\u0353\u0354\7\\\2\2\u0354\u0375"+
		"\5R*\21\u0355\u0356\f\17\2\2\u0356\u0357\7W\2\2\u0357\u0375\5R*\20\u0358"+
		"\u0359\f\16\2\2\u0359\u035a\7V\2\2\u035a\u0375\5R*\17\u035b\u035c\f\r"+
		"\2\2\u035c\u035d\7Y\2\2\u035d\u0375\5R*\16\u035e\u035f\f\f\2\2\u035f\u0360"+
		"\7Z\2\2\u0360\u0375\5R*\r\u0361\u0362\f\13\2\2\u0362\u0363\5T+\2\u0363"+
		"\u0364\5R*\f\u0364\u0375\3\2\2\2\u0365\u0366\f\t\2\2\u0366\u0367\7]\2"+
		"\2\u0367\u0375\5R*\n\u0368\u0369\f\b\2\2\u0369\u036a\7^\2\2\u036a\u0375"+
		"\5R*\t\u036b\u036c\f\7\2\2\u036c\u036d\7S\2\2\u036d\u0375\5R*\b\u036e"+
		"\u036f\f\6\2\2\u036f\u0370\7T\2\2\u0370\u0375\5R*\7\u0371\u0372\f\5\2"+
		"\2\u0372\u0373\7U\2\2\u0373\u0375\5R*\6\u0374\u034c\3\2\2\2\u0374\u034f"+
		"\3\2\2\2\u0374\u0352\3\2\2\2\u0374\u0355\3\2\2\2\u0374\u0358\3\2\2\2\u0374"+
		"\u035b\3\2\2\2\u0374\u035e\3\2\2\2\u0374\u0361\3\2\2\2\u0374\u0365\3\2"+
		"\2\2\u0374\u0368\3\2\2\2\u0374\u036b\3\2\2\2\u0374\u036e\3\2\2\2\u0374"+
		"\u0371\3\2\2\2\u0375\u0378\3\2\2\2\u0376\u0374\3\2\2\2\u0376\u0377\3\2"+
		"\2\2\u0377S\3\2\2\2\u0378\u0376\3\2\2\2\u0379\u0380\7L\2\2\u037a\u0380"+
		"\7M\2\2\u037b\u0380\7N\2\2\u037c\u0380\7O\2\2\u037d\u0380\7P\2\2\u037e"+
		"\u0380\7Q\2\2\u037f\u0379\3\2\2\2\u037f\u037a\3\2\2\2\u037f\u037b\3\2"+
		"\2\2\u037f\u037c\3\2\2\2\u037f\u037d\3\2\2\2\u037f\u037e\3\2\2\2\u0380"+
		"U\3\2\2\2UYhmquy|\u0081\u008e\u0092\u009e\u00a7\u00ad\u00b3\u00bd\u00c5"+
		"\u00ce\u00d5\u00e2\u00e9\u00ee\u00f3\u00f9\u0102\u0106\u0109\u010b\u0117"+
		"\u0125\u012f\u0134\u0139\u0142\u0150\u0159\u0163\u0168\u0170\u017a\u017f"+
		"\u0188\u018e\u0196\u019c\u01a8\u01ae\u01b4\u01c5\u01cc\u01d2\u01df\u01e4"+
		"\u01e8\u01f8\u01fe\u020a\u0213\u021d\u0221\u0226\u022b\u0233\u023b\u023f"+
		"\u0249\u024e\u0253\u0256\u0259\u0261\u0265\u0269\u026f\u0272\u027b\u02b7"+
		"\u02bf\u02c6\u033a\u034a\u0374\u0376\u037f";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}