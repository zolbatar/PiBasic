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
		ENDIF=10, ENDFN=11, ENDPROC=12, ENDWHILE=13, FN=14, IF=15, INPUT=16, GLOBAL=17, 
		LOCAL=18, LET=19, THEN=20, OF=21, OTHERWISE=22, PRINT=23, PROC=24, READ=25, 
		REM=26, REPEAT=27, RESTORE=28, RETURN=29, SPC=30, TRACEON=31, TRACEOFF=32, 
		TYPE=33, UNTIL=34, WHEN=35, WHILE=36, TIME=37, PI=38, SQR=39, LN=40, LOG=41, 
		EXP=42, ATN=43, TAN=44, COS=45, SIN=46, ABS=47, ACS=48, ASN=49, DEG=50, 
		RAD=51, SGN=52, ASC=53, LEN=54, INSTR=55, VAL=56, TIMES=57, STRS=58, STRINGS=59, 
		CHRS=60, LEFTS=61, MIDS=62, RIGHTS=63, RND=64, RND0=65, RND1=66, EQ=67, 
		NE=68, GT=69, GE=70, LT=71, LE=72, NOT=73, AND=74, OR=75, EOR=76, MOD=77, 
		DIV=78, HAT=79, PLUS=80, MINUS=81, MULTIPLY=82, DIVIDE=83, SHL=84, SHR=85, 
		PLUS_E=86, MINUS_E=87, MULTIPLY_E=88, DIVIDE_E=89, SHL_E=90, SHR_E=91, 
		NEWLINE=92, TICK=93, TILDE=94, COLON=95, COMMA=96, DOLLAR=97, LPAREN=98, 
		PERCENT=99, RPAREN=100, SEMICOLON=101, UNDERSCORE=102, COMMENT=103, STRINGLITERAL=104, 
		PROC_NAME=105, FN_INTEGER=106, FN_FLOAT=107, FN_STRING=108, VARIABLE_FLOAT=109, 
		VARIABLE_INTEGER=110, VARIABLE_STRING=111, VARIABLE_TYPE=112, NAME=113, 
		HEXNUMBER=114, BINARYNUMBER=115, NUMBER=116, FLOAT=117, ALPHA=118, DIGIT=119, 
		WS=120;
	public static final int
		RULE_prog = 0, RULE_line = 1, RULE_content = 2, RULE_body = 3, RULE_bodyStar = 4, 
		RULE_linenumber = 5, RULE_stmt = 6, RULE_when = 7, RULE_fnName = 8, RULE_literal = 9, 
		RULE_var = 10, RULE_typeVar = 11, RULE_numVar = 12, RULE_strVar = 13, 
		RULE_justVar = 14, RULE_varName = 15, RULE_varNameInteger = 16, RULE_varNameString = 17, 
		RULE_varNameType = 18, RULE_varDecl = 19, RULE_varDeclWithDimension = 20, 
		RULE_varList = 21, RULE_functionVarList = 22, RULE_functionParList = 23, 
		RULE_exprList = 24, RULE_printListItem = 25, RULE_printStartingTicks = 26, 
		RULE_printList = 27, RULE_expr = 28, RULE_number = 29, RULE_numberInteger = 30, 
		RULE_numberHex = 31, RULE_numberBinary = 32, RULE_numberFloat = 33, RULE_strFunc = 34, 
		RULE_string = 35, RULE_strExpr = 36, RULE_numFunc = 37, RULE_numExpr = 38, 
		RULE_compare = 39;
	private static String[] makeRuleNames() {
		return new String[] {
			"prog", "line", "content", "body", "bodyStar", "linenumber", "stmt", 
			"when", "fnName", "literal", "var", "typeVar", "numVar", "strVar", "justVar", 
			"varName", "varNameInteger", "varNameString", "varNameType", "varDecl", 
			"varDeclWithDimension", "varList", "functionVarList", "functionParList", 
			"exprList", "printListItem", "printStartingTicks", "printList", "expr", 
			"number", "numberInteger", "numberHex", "numberBinary", "numberFloat", 
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
			null, null, null, null, null, null, null, "'='", "'<>'", "'>'", "'>='", 
			"'<'", "'<='", null, null, null, null, null, null, "'^'", "'+'", "'-'", 
			"'*'", "'/'", "'<<'", "'>>'", "'+='", "'-='", "'*='", "'/='", "'<<='", 
			"'>>='", null, "'''", "'~'", "':'", "','", "'$'", "'('", "'%'", "')'", 
			"';'", "'_'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "BREAKPOINT", "CASE", "CHAIN", "DATA", "DEF", "DIM", "ELSE", "END", 
			"ENDCASE", "ENDIF", "ENDFN", "ENDPROC", "ENDWHILE", "FN", "IF", "INPUT", 
			"GLOBAL", "LOCAL", "LET", "THEN", "OF", "OTHERWISE", "PRINT", "PROC", 
			"READ", "REM", "REPEAT", "RESTORE", "RETURN", "SPC", "TRACEON", "TRACEOFF", 
			"TYPE", "UNTIL", "WHEN", "WHILE", "TIME", "PI", "SQR", "LN", "LOG", "EXP", 
			"ATN", "TAN", "COS", "SIN", "ABS", "ACS", "ASN", "DEG", "RAD", "SGN", 
			"ASC", "LEN", "INSTR", "VAL", "TIMES", "STRS", "STRINGS", "CHRS", "LEFTS", 
			"MIDS", "RIGHTS", "RND", "RND0", "RND1", "EQ", "NE", "GT", "GE", "LT", 
			"LE", "NOT", "AND", "OR", "EOR", "MOD", "DIV", "HAT", "PLUS", "MINUS", 
			"MULTIPLY", "DIVIDE", "SHL", "SHR", "PLUS_E", "MINUS_E", "MULTIPLY_E", 
			"DIVIDE_E", "SHL_E", "SHR_E", "NEWLINE", "TICK", "TILDE", "COLON", "COMMA", 
			"DOLLAR", "LPAREN", "PERCENT", "RPAREN", "SEMICOLON", "UNDERSCORE", "COMMENT", 
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
			setState(83);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (EQ - 67)) | (1L << (NEWLINE - 67)) | (1L << (COLON - 67)) | (1L << (COMMENT - 67)) | (1L << (PROC_NAME - 67)) | (1L << (FN_INTEGER - 67)) | (1L << (FN_FLOAT - 67)) | (1L << (FN_STRING - 67)) | (1L << (VARIABLE_FLOAT - 67)) | (1L << (VARIABLE_INTEGER - 67)) | (1L << (VARIABLE_STRING - 67)) | (1L << (VARIABLE_TYPE - 67)) | (1L << (NUMBER - 67)))) != 0)) {
				{
				{
				setState(80);
				line();
				}
				}
				setState(85);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(86);
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
			setState(98);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NEWLINE:
				enterOuterAlt(_localctx, 1);
				{
				setState(88);
				match(NEWLINE);
				}
				break;
			case COLON:
				enterOuterAlt(_localctx, 2);
				{
				setState(89);
				match(COLON);
				setState(90);
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
			case EQ:
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
				setState(91);
				content();
				setState(92);
				match(NEWLINE);
				}
				break;
			case NUMBER:
				enterOuterAlt(_localctx, 4);
				{
				setState(94);
				linenumber();
				setState(95);
				content();
				setState(96);
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
			setState(111);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BREAKPOINT:
			case CASE:
			case CHAIN:
			case DATA:
			case DEF:
			case DIM:
			case END:
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
			case EQ:
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
				setState(100);
				stmt();
				setState(107);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(101);
						match(COLON);
						setState(103);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
						case 1:
							{
							setState(102);
							stmt();
							}
							break;
						}
						}
						} 
					}
					setState(109);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
				}
				}
				}
				break;
			case REM:
			case COMMENT:
				{
				setState(110);
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
			setState(115);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(113);
				content();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(114);
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
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(120);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (EQ - 67)) | (1L << (NEWLINE - 67)) | (1L << (COLON - 67)) | (1L << (COMMENT - 67)) | (1L << (PROC_NAME - 67)) | (1L << (FN_INTEGER - 67)) | (1L << (FN_FLOAT - 67)) | (1L << (FN_STRING - 67)) | (1L << (VARIABLE_FLOAT - 67)) | (1L << (VARIABLE_INTEGER - 67)) | (1L << (VARIABLE_STRING - 67)) | (1L << (VARIABLE_TYPE - 67)) | (1L << (NUMBER - 67)))) != 0)) {
				{
				{
				setState(117);
				body();
				}
				}
				setState(122);
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
			setState(123);
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
		public TerminalNode COLON() { return getToken(DARICParser.COLON, 0); }
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
		public TerminalNode EQ() { return getToken(DARICParser.EQ, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode RETURN() { return getToken(DARICParser.RETURN, 0); }
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
	public static class StmtIFMultilineContext extends StmtContext {
		public BodyStarContext t;
		public BodyStarContext f;
		public TerminalNode IF() { return getToken(DARICParser.IF, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
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
		public TerminalNode COLON() { return getToken(DARICParser.COLON, 0); }
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
			setState(331);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,35,_ctx) ) {
			case 1:
				_localctx = new StmtBREAKPOINTContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(125);
				match(BREAKPOINT);
				}
				break;
			case 2:
				_localctx = new StmtCASEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(126);
				match(CASE);
				setState(127);
				expr();
				setState(128);
				match(OF);
				setState(129);
				match(NEWLINE);
				setState(131); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(130);
					when();
					}
					}
					setState(133); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==WHEN );
				setState(137);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==OTHERWISE) {
					{
					setState(135);
					match(OTHERWISE);
					setState(136);
					bodyStar();
					}
				}

				setState(139);
				match(ENDCASE);
				}
				break;
			case 3:
				_localctx = new StmtCHAINContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(141);
				match(CHAIN);
				setState(142);
				strExpr(0);
				}
				break;
			case 4:
				_localctx = new StmtDATAContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(143);
				match(DATA);
				setState(144);
				literal();
				setState(149);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(145);
					match(COMMA);
					setState(146);
					literal();
					}
					}
					setState(151);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 5:
				_localctx = new StmtDIMContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(152);
				match(DIM);
				setState(153);
				varDeclWithDimension();
				setState(158);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(154);
					match(COMMA);
					setState(155);
					varDeclWithDimension();
					}
					}
					setState(160);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 6:
				_localctx = new StmtENDContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(161);
				match(END);
				}
				break;
			case 7:
				_localctx = new StmtRETURNContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(162);
				match(EQ);
				setState(164);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
				case 1:
					{
					setState(163);
					expr();
					}
					break;
				}
				}
				break;
			case 8:
				_localctx = new StmtRETURNContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(166);
				match(RETURN);
				setState(168);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
				case 1:
					{
					setState(167);
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
				setState(170);
				match(DEF);
				setState(171);
				fnName();
				setState(172);
				match(LPAREN);
				setState(174);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN || ((((_la - 109)) & ~0x3f) == 0 && ((1L << (_la - 109)) & ((1L << (VARIABLE_FLOAT - 109)) | (1L << (VARIABLE_INTEGER - 109)) | (1L << (VARIABLE_STRING - 109)))) != 0)) {
					{
					setState(173);
					functionVarList();
					}
				}

				setState(176);
				match(RPAREN);
				setState(178);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
				case 1:
					{
					setState(177);
					match(COLON);
					}
					break;
				}
				setState(180);
				bodyStar();
				setState(181);
				match(ENDFN);
				}
				break;
			case 10:
				_localctx = new StmtDEFPROCContext(_localctx);
				enterOuterAlt(_localctx, 10);
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
				if (_la==RETURN || ((((_la - 109)) & ~0x3f) == 0 && ((1L << (_la - 109)) & ((1L << (VARIABLE_FLOAT - 109)) | (1L << (VARIABLE_INTEGER - 109)) | (1L << (VARIABLE_STRING - 109)))) != 0)) {
					{
					setState(186);
					functionVarList();
					}
				}

				setState(189);
				match(RPAREN);
				setState(191);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
				case 1:
					{
					setState(190);
					match(COLON);
					}
					break;
				}
				setState(193);
				bodyStar();
				setState(194);
				match(ENDPROC);
				}
				break;
			case 11:
				_localctx = new StmtCallFNContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(196);
				fnName();
				setState(197);
				match(LPAREN);
				setState(199);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL) | (1L << TIMES) | (1L << STRS) | (1L << STRINGS) | (1L << CHRS) | (1L << LEFTS) | (1L << MIDS) | (1L << RIGHTS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)) | (1L << (NOT - 64)) | (1L << (PLUS - 64)) | (1L << (MINUS - 64)) | (1L << (LPAREN - 64)) | (1L << (STRINGLITERAL - 64)) | (1L << (FN_INTEGER - 64)) | (1L << (FN_FLOAT - 64)) | (1L << (FN_STRING - 64)) | (1L << (VARIABLE_FLOAT - 64)) | (1L << (VARIABLE_INTEGER - 64)) | (1L << (VARIABLE_STRING - 64)) | (1L << (VARIABLE_TYPE - 64)) | (1L << (HEXNUMBER - 64)) | (1L << (BINARYNUMBER - 64)) | (1L << (NUMBER - 64)) | (1L << (FLOAT - 64)))) != 0)) {
					{
					setState(198);
					functionParList();
					}
				}

				setState(201);
				match(RPAREN);
				}
				break;
			case 12:
				_localctx = new StmtIFContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(203);
				match(IF);
				setState(204);
				expr();
				setState(206);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==THEN) {
					{
					setState(205);
					match(THEN);
					}
				}

				setState(208);
				((StmtIFContext)_localctx).t = content();
				setState(211);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
				case 1:
					{
					setState(209);
					match(ELSE);
					setState(210);
					((StmtIFContext)_localctx).f = content();
					}
					break;
				}
				}
				break;
			case 13:
				_localctx = new StmtIFMultilineContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(213);
				match(IF);
				setState(214);
				expr();
				setState(216);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==THEN) {
					{
					setState(215);
					match(THEN);
					}
				}

				setState(218);
				((StmtIFMultilineContext)_localctx).t = bodyStar();
				setState(221);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ELSE) {
					{
					setState(219);
					match(ELSE);
					setState(220);
					((StmtIFMultilineContext)_localctx).f = bodyStar();
					}
				}

				setState(223);
				match(ENDIF);
				}
				break;
			case 14:
				_localctx = new StmtINPUTContext(_localctx);
				enterOuterAlt(_localctx, 14);
				{
				setState(225);
				match(INPUT);
				setState(229);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
				case 1:
					{
					setState(226);
					strExpr(0);
					setState(227);
					match(COMMA);
					}
					break;
				}
				setState(231);
				varList();
				}
				break;
			case 15:
				_localctx = new StmtLETContext(_localctx);
				enterOuterAlt(_localctx, 15);
				{
				setState(238);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
				case 1:
					{
					setState(233);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==LET) {
						{
						setState(232);
						match(LET);
						}
					}

					}
					break;
				case 2:
					{
					setState(236);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==GLOBAL) {
						{
						setState(235);
						match(GLOBAL);
						}
					}

					}
					break;
				}
				setState(240);
				varDecl();
				setState(241);
				match(EQ);
				setState(242);
				expr();
				setState(250);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(243);
					match(COMMA);
					setState(244);
					varDecl();
					setState(245);
					match(EQ);
					setState(246);
					expr();
					}
					}
					setState(252);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 16:
				_localctx = new StmtLOCALContext(_localctx);
				enterOuterAlt(_localctx, 16);
				{
				setState(253);
				match(LOCAL);
				setState(254);
				varDecl();
				setState(255);
				match(EQ);
				setState(256);
				expr();
				setState(264);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(257);
					match(COMMA);
					setState(258);
					varDecl();
					setState(259);
					match(EQ);
					setState(260);
					expr();
					}
					}
					setState(266);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 17:
				_localctx = new StmtLOCALDIMContext(_localctx);
				enterOuterAlt(_localctx, 17);
				{
				setState(267);
				match(LOCAL);
				setState(268);
				match(DIM);
				setState(269);
				varDeclWithDimension();
				setState(274);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(270);
					match(COMMA);
					setState(271);
					varDeclWithDimension();
					}
					}
					setState(276);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 18:
				_localctx = new StmtPRINTContext(_localctx);
				enterOuterAlt(_localctx, 18);
				{
				setState(277);
				match(PRINT);
				setState(279);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,29,_ctx) ) {
				case 1:
					{
					setState(278);
					printList();
					}
					break;
				}
				}
				break;
			case 19:
				_localctx = new StmtCallPROCContext(_localctx);
				enterOuterAlt(_localctx, 19);
				{
				setState(281);
				match(PROC_NAME);
				setState(282);
				match(LPAREN);
				setState(284);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL) | (1L << TIMES) | (1L << STRS) | (1L << STRINGS) | (1L << CHRS) | (1L << LEFTS) | (1L << MIDS) | (1L << RIGHTS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)) | (1L << (NOT - 64)) | (1L << (PLUS - 64)) | (1L << (MINUS - 64)) | (1L << (LPAREN - 64)) | (1L << (STRINGLITERAL - 64)) | (1L << (FN_INTEGER - 64)) | (1L << (FN_FLOAT - 64)) | (1L << (FN_STRING - 64)) | (1L << (VARIABLE_FLOAT - 64)) | (1L << (VARIABLE_INTEGER - 64)) | (1L << (VARIABLE_STRING - 64)) | (1L << (VARIABLE_TYPE - 64)) | (1L << (HEXNUMBER - 64)) | (1L << (BINARYNUMBER - 64)) | (1L << (NUMBER - 64)) | (1L << (FLOAT - 64)))) != 0)) {
					{
					setState(283);
					functionParList();
					}
				}

				setState(286);
				match(RPAREN);
				}
				break;
			case 20:
				_localctx = new StmtREADContext(_localctx);
				enterOuterAlt(_localctx, 20);
				{
				setState(287);
				match(READ);
				setState(288);
				varDecl();
				setState(293);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(289);
					match(COMMA);
					setState(290);
					varDecl();
					}
					}
					setState(295);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 21:
				_localctx = new StmtRESTOREContext(_localctx);
				enterOuterAlt(_localctx, 21);
				{
				setState(296);
				match(RESTORE);
				}
				break;
			case 22:
				_localctx = new StmtTRACEONContext(_localctx);
				enterOuterAlt(_localctx, 22);
				{
				setState(297);
				match(TRACEON);
				}
				break;
			case 23:
				_localctx = new StmtTRACEOFFContext(_localctx);
				enterOuterAlt(_localctx, 23);
				{
				setState(298);
				match(TRACEOFF);
				}
				break;
			case 24:
				_localctx = new StmtTYPEContext(_localctx);
				enterOuterAlt(_localctx, 24);
				{
				setState(299);
				match(TYPE);
				setState(300);
				varName();
				setState(301);
				match(LPAREN);
				setState(302);
				justVar();
				setState(307);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(303);
					match(COMMA);
					setState(304);
					justVar();
					}
					}
					setState(309);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(310);
				match(RPAREN);
				}
				break;
			case 25:
				_localctx = new StmtREPEATContext(_localctx);
				enterOuterAlt(_localctx, 25);
				{
				setState(312);
				match(REPEAT);
				setState(316);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (EQ - 67)) | (1L << (NEWLINE - 67)) | (1L << (COLON - 67)) | (1L << (COMMENT - 67)) | (1L << (PROC_NAME - 67)) | (1L << (FN_INTEGER - 67)) | (1L << (FN_FLOAT - 67)) | (1L << (FN_STRING - 67)) | (1L << (VARIABLE_FLOAT - 67)) | (1L << (VARIABLE_INTEGER - 67)) | (1L << (VARIABLE_STRING - 67)) | (1L << (VARIABLE_TYPE - 67)) | (1L << (NUMBER - 67)))) != 0)) {
					{
					{
					setState(313);
					body();
					}
					}
					setState(318);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(319);
				match(UNTIL);
				setState(320);
				expr();
				}
				break;
			case 26:
				_localctx = new StmtWHILEContext(_localctx);
				enterOuterAlt(_localctx, 26);
				{
				setState(321);
				match(WHILE);
				setState(322);
				expr();
				setState(326);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (EQ - 67)) | (1L << (NEWLINE - 67)) | (1L << (COLON - 67)) | (1L << (COMMENT - 67)) | (1L << (PROC_NAME - 67)) | (1L << (FN_INTEGER - 67)) | (1L << (FN_FLOAT - 67)) | (1L << (FN_STRING - 67)) | (1L << (VARIABLE_FLOAT - 67)) | (1L << (VARIABLE_INTEGER - 67)) | (1L << (VARIABLE_STRING - 67)) | (1L << (VARIABLE_TYPE - 67)) | (1L << (NUMBER - 67)))) != 0)) {
					{
					{
					setState(323);
					body();
					}
					}
					setState(328);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(329);
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
			setState(333);
			match(WHEN);
			setState(334);
			expr();
			setState(339);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(335);
				match(COMMA);
				setState(336);
				expr();
				}
				}
				setState(341);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(342);
			match(COLON);
			setState(343);
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
			setState(345);
			_la = _input.LA(1);
			if ( !(((((_la - 106)) & ~0x3f) == 0 && ((1L << (_la - 106)) & ((1L << (FN_INTEGER - 106)) | (1L << (FN_FLOAT - 106)) | (1L << (FN_STRING - 106)))) != 0)) ) {
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
			setState(349);
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
				setState(347);
				number();
				}
				break;
			case STRINGLITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(348);
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
			setState(354);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(351);
				numVar();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(352);
				strVar();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(353);
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
			setState(356);
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
			setState(424);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,46,_ctx) ) {
			case 1:
				_localctx = new NumVarFloatContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(358);
				varName();
				}
				break;
			case 2:
				_localctx = new NumVarFloatArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(359);
				varName();
				setState(370);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,40,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(360);
						match(LPAREN);
						setState(361);
						numExpr(0);
						setState(364);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(362);
							match(COMMA);
							setState(363);
							numExpr(0);
							}
						}

						setState(366);
						match(RPAREN);
						}
						} 
					}
					setState(372);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,40,_ctx);
				}
				}
				break;
			case 3:
				_localctx = new NumVarIntegerContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(373);
				varNameInteger();
				}
				break;
			case 4:
				_localctx = new NumVarIntegerArrayContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(374);
				varNameInteger();
				setState(385);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,42,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(375);
						match(LPAREN);
						setState(376);
						numExpr(0);
						setState(379);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(377);
							match(COMMA);
							setState(378);
							numExpr(0);
							}
						}

						setState(381);
						match(RPAREN);
						}
						} 
					}
					setState(387);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,42,_ctx);
				}
				}
				break;
			case 5:
				_localctx = new NumVarFloatFieldContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(388);
				typeVar();
				setState(389);
				varName();
				}
				break;
			case 6:
				_localctx = new NumVarFloatFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(391);
				typeVar();
				setState(392);
				match(LPAREN);
				setState(393);
				numExpr(0);
				setState(394);
				match(RPAREN);
				setState(395);
				varName();
				}
				break;
			case 7:
				_localctx = new NumVarIntegerFieldContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(397);
				typeVar();
				setState(398);
				varNameInteger();
				}
				break;
			case 8:
				_localctx = new NumVarIntegerFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(400);
				typeVar();
				setState(401);
				match(LPAREN);
				setState(402);
				numExpr(0);
				setState(403);
				match(RPAREN);
				setState(404);
				varNameInteger();
				}
				break;
			case 9:
				_localctx = new NumVarFloatFNContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(406);
				match(FN_FLOAT);
				setState(407);
				match(LPAREN);
				setState(409);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL) | (1L << TIMES) | (1L << STRS) | (1L << STRINGS) | (1L << CHRS) | (1L << LEFTS) | (1L << MIDS) | (1L << RIGHTS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)) | (1L << (NOT - 64)) | (1L << (PLUS - 64)) | (1L << (MINUS - 64)) | (1L << (LPAREN - 64)) | (1L << (STRINGLITERAL - 64)) | (1L << (FN_INTEGER - 64)) | (1L << (FN_FLOAT - 64)) | (1L << (FN_STRING - 64)) | (1L << (VARIABLE_FLOAT - 64)) | (1L << (VARIABLE_INTEGER - 64)) | (1L << (VARIABLE_STRING - 64)) | (1L << (VARIABLE_TYPE - 64)) | (1L << (HEXNUMBER - 64)) | (1L << (BINARYNUMBER - 64)) | (1L << (NUMBER - 64)) | (1L << (FLOAT - 64)))) != 0)) {
					{
					setState(408);
					functionParList();
					}
				}

				setState(411);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new NumVarIntegerFNContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(412);
				match(FN_INTEGER);
				setState(413);
				match(LPAREN);
				setState(415);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL) | (1L << TIMES) | (1L << STRS) | (1L << STRINGS) | (1L << CHRS) | (1L << LEFTS) | (1L << MIDS) | (1L << RIGHTS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)) | (1L << (NOT - 64)) | (1L << (PLUS - 64)) | (1L << (MINUS - 64)) | (1L << (LPAREN - 64)) | (1L << (STRINGLITERAL - 64)) | (1L << (FN_INTEGER - 64)) | (1L << (FN_FLOAT - 64)) | (1L << (FN_STRING - 64)) | (1L << (VARIABLE_FLOAT - 64)) | (1L << (VARIABLE_INTEGER - 64)) | (1L << (VARIABLE_STRING - 64)) | (1L << (VARIABLE_TYPE - 64)) | (1L << (HEXNUMBER - 64)) | (1L << (BINARYNUMBER - 64)) | (1L << (NUMBER - 64)) | (1L << (FLOAT - 64)))) != 0)) {
					{
					setState(414);
					functionParList();
					}
				}

				setState(417);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new NumVarStringFNContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(418);
				match(FN_STRING);
				setState(419);
				match(LPAREN);
				setState(421);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL) | (1L << TIMES) | (1L << STRS) | (1L << STRINGS) | (1L << CHRS) | (1L << LEFTS) | (1L << MIDS) | (1L << RIGHTS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)) | (1L << (NOT - 64)) | (1L << (PLUS - 64)) | (1L << (MINUS - 64)) | (1L << (LPAREN - 64)) | (1L << (STRINGLITERAL - 64)) | (1L << (FN_INTEGER - 64)) | (1L << (FN_FLOAT - 64)) | (1L << (FN_STRING - 64)) | (1L << (VARIABLE_FLOAT - 64)) | (1L << (VARIABLE_INTEGER - 64)) | (1L << (VARIABLE_STRING - 64)) | (1L << (VARIABLE_TYPE - 64)) | (1L << (HEXNUMBER - 64)) | (1L << (BINARYNUMBER - 64)) | (1L << (NUMBER - 64)) | (1L << (FLOAT - 64)))) != 0)) {
					{
					setState(420);
					functionParList();
					}
				}

				setState(423);
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

	public final StrVarContext strVar() throws RecognitionException {
		StrVarContext _localctx = new StrVarContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_strVar);
		int _la;
		try {
			int _alt;
			setState(450);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,49,_ctx) ) {
			case 1:
				_localctx = new NumVarStringContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(426);
				varNameString();
				}
				break;
			case 2:
				_localctx = new NumVarStringArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(427);
				varNameString();
				setState(438);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,48,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(428);
						match(LPAREN);
						setState(429);
						numExpr(0);
						setState(432);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(430);
							match(COMMA);
							setState(431);
							numExpr(0);
							}
						}

						setState(434);
						match(RPAREN);
						}
						} 
					}
					setState(440);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,48,_ctx);
				}
				}
				break;
			case 3:
				_localctx = new NumVarStringFieldContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(441);
				typeVar();
				setState(442);
				varNameString();
				}
				break;
			case 4:
				_localctx = new NumVarStringFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(444);
				typeVar();
				setState(445);
				match(LPAREN);
				setState(446);
				numExpr(0);
				setState(447);
				match(RPAREN);
				setState(448);
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
			setState(455);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(452);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(453);
				varNameInteger();
				}
				break;
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(454);
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
		enterRule(_localctx, 30, RULE_varName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(457);
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
		enterRule(_localctx, 32, RULE_varNameInteger);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(459);
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
		enterRule(_localctx, 34, RULE_varNameString);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(461);
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
		enterRule(_localctx, 36, RULE_varNameType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(463);
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
		public VarContext var() {
			return getRuleContext(VarContext.class,0);
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
		public VarContext var() {
			return getRuleContext(VarContext.class,0);
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
		enterRule(_localctx, 38, RULE_varDecl);
		int _la;
		try {
			setState(489);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,53,_ctx) ) {
			case 1:
				_localctx = new VarDeclIndContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(465);
				var();
				}
				break;
			case 2:
				_localctx = new VarDeclArrayedContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(466);
				var();
				setState(477);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==LPAREN) {
					{
					{
					setState(467);
					match(LPAREN);
					setState(468);
					numExpr(0);
					setState(471);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==COMMA) {
						{
						setState(469);
						match(COMMA);
						setState(470);
						numExpr(0);
						}
					}

					setState(473);
					match(RPAREN);
					}
					}
					setState(479);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 3:
				_localctx = new VarDeclTypeContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(480);
				typeVar();
				setState(481);
				varName();
				}
				break;
			case 4:
				_localctx = new VarDeclTypeArrayedContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(483);
				typeVar();
				setState(484);
				match(LPAREN);
				setState(485);
				numExpr(0);
				setState(486);
				match(RPAREN);
				setState(487);
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
		public VarContext var() {
			return getRuleContext(VarContext.class,0);
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
		enterRule(_localctx, 40, RULE_varDeclWithDimension);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(491);
			var();
			setState(492);
			match(LPAREN);
			setState(493);
			numExpr(0);
			setState(498);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(494);
				match(COMMA);
				setState(495);
				numExpr(0);
				}
				}
				setState(500);
				_errHandler.sync(this);
				_la = _input.LA(1);
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
		enterRule(_localctx, 42, RULE_varList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(503);
			varDecl();
			setState(508);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(504);
				match(COMMA);
				setState(505);
				varDecl();
				}
				}
				setState(510);
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
		enterRule(_localctx, 44, RULE_functionVarList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(512);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN) {
				{
				setState(511);
				match(RETURN);
				}
			}

			setState(514);
			justVar();
			setState(522);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(515);
				match(COMMA);
				setState(517);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN) {
					{
					setState(516);
					match(RETURN);
					}
				}

				setState(519);
				justVar();
				}
				}
				setState(524);
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
		enterRule(_localctx, 46, RULE_functionParList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(525);
			expr();
			setState(530);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(526);
				match(COMMA);
				setState(527);
				expr();
				}
				}
				setState(532);
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
		enterRule(_localctx, 48, RULE_exprList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(533);
			expr();
			setState(538);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(534);
				match(COMMA);
				setState(535);
				expr();
				}
				}
				setState(540);
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
		enterRule(_localctx, 50, RULE_printListItem);
		int _la;
		try {
			setState(552);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,62,_ctx) ) {
			case 1:
				_localctx = new PrintListExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(542);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TILDE) {
					{
					setState(541);
					match(TILDE);
					}
				}

				setState(544);
				expr();
				}
				break;
			case 2:
				_localctx = new PrintListSPCPContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(545);
				match(SPC);
				setState(546);
				match(LPAREN);
				setState(547);
				numExpr(0);
				setState(548);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new PrintListSPCContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(550);
				match(SPC);
				setState(551);
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

	public static class PrintStartingTicksContext extends ParserRuleContext {
		public PrintStartingTicksContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_printStartingTicks; }
	 
		public PrintStartingTicksContext() { }
		public void copyFrom(PrintStartingTicksContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class PrintListTickContext extends PrintStartingTicksContext {
		public List<TerminalNode> TICK() { return getTokens(DARICParser.TICK); }
		public TerminalNode TICK(int i) {
			return getToken(DARICParser.TICK, i);
		}
		public PrintListTickContext(PrintStartingTicksContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).enterPrintListTick(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof DARICListener ) ((DARICListener)listener).exitPrintListTick(this);
		}
	}

	public final PrintStartingTicksContext printStartingTicks() throws RecognitionException {
		PrintStartingTicksContext _localctx = new PrintStartingTicksContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_printStartingTicks);
		int _la;
		try {
			_localctx = new PrintListTickContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(555); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(554);
				match(TICK);
				}
				}
				setState(557); 
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

	public static class PrintListContext extends ParserRuleContext {
		public List<PrintListItemContext> printListItem() {
			return getRuleContexts(PrintListItemContext.class);
		}
		public PrintListItemContext printListItem(int i) {
			return getRuleContext(PrintListItemContext.class,i);
		}
		public PrintStartingTicksContext printStartingTicks() {
			return getRuleContext(PrintStartingTicksContext.class,0);
		}
		public List<TerminalNode> COMMA() { return getTokens(DARICParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(DARICParser.COMMA, i);
		}
		public List<TerminalNode> SEMICOLON() { return getTokens(DARICParser.SEMICOLON); }
		public TerminalNode SEMICOLON(int i) {
			return getToken(DARICParser.SEMICOLON, i);
		}
		public List<TerminalNode> TICK() { return getTokens(DARICParser.TICK); }
		public TerminalNode TICK(int i) {
			return getToken(DARICParser.TICK, i);
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
		enterRule(_localctx, 54, RULE_printList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(560);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TICK) {
				{
				setState(559);
				printStartingTicks();
				}
			}

			setState(563);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(562);
				match(COMMA);
				}
			}

			setState(565);
			printListItem();
			setState(572);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 93)) & ~0x3f) == 0 && ((1L << (_la - 93)) & ((1L << (TICK - 93)) | (1L << (COMMA - 93)) | (1L << (SEMICOLON - 93)))) != 0)) {
				{
				{
				setState(566);
				_la = _input.LA(1);
				if ( !(((((_la - 93)) & ~0x3f) == 0 && ((1L << (_la - 93)) & ((1L << (TICK - 93)) | (1L << (COMMA - 93)) | (1L << (SEMICOLON - 93)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(568);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,66,_ctx) ) {
				case 1:
					{
					setState(567);
					printListItem();
					}
					break;
				}
				}
				}
				setState(574);
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
		enterRule(_localctx, 56, RULE_expr);
		try {
			setState(577);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,68,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(575);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(576);
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
		enterRule(_localctx, 58, RULE_number);
		try {
			setState(583);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,69,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(579);
				numberInteger();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(580);
				numberFloat();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(581);
				numberHex();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(582);
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
		enterRule(_localctx, 60, RULE_numberInteger);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(586);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(585);
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

			setState(588);
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
		enterRule(_localctx, 62, RULE_numberHex);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(590);
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
		enterRule(_localctx, 64, RULE_numberBinary);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(592);
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
		enterRule(_localctx, 66, RULE_numberFloat);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(595);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(594);
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

			setState(597);
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
		enterRule(_localctx, 68, RULE_strFunc);
		try {
			setState(655);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,72,_ctx) ) {
			case 1:
				_localctx = new StrFuncTIMESContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(599);
				match(TIMES);
				}
				break;
			case 2:
				_localctx = new StrFuncCHRSPContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(600);
				match(CHRS);
				setState(601);
				match(LPAREN);
				setState(602);
				numExpr(0);
				setState(603);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new StrFuncCHRSContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(605);
				match(CHRS);
				setState(606);
				numExpr(0);
				}
				break;
			case 4:
				_localctx = new StrFuncLEFTSContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(607);
				match(LEFTS);
				setState(608);
				match(LPAREN);
				setState(609);
				strExpr(0);
				setState(610);
				match(COMMA);
				setState(611);
				numExpr(0);
				setState(612);
				match(RPAREN);
				}
				break;
			case 5:
				_localctx = new StrFuncMIDS3Context(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(614);
				match(MIDS);
				setState(615);
				match(LPAREN);
				setState(616);
				strExpr(0);
				setState(617);
				match(COMMA);
				setState(618);
				numExpr(0);
				setState(619);
				match(COMMA);
				setState(620);
				numExpr(0);
				setState(621);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new StrFuncMIDS2Context(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(623);
				match(MIDS);
				setState(624);
				match(LPAREN);
				setState(625);
				strExpr(0);
				setState(626);
				match(COMMA);
				setState(627);
				numExpr(0);
				setState(628);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new StrFuncRIGHTSContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(630);
				match(RIGHTS);
				setState(631);
				match(LPAREN);
				setState(632);
				strExpr(0);
				setState(633);
				match(COMMA);
				setState(634);
				numExpr(0);
				setState(635);
				match(RPAREN);
				}
				break;
			case 8:
				_localctx = new StrFuncSTRSContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(637);
				match(STRS);
				setState(638);
				match(LPAREN);
				setState(639);
				numExpr(0);
				setState(640);
				match(RPAREN);
				}
				break;
			case 9:
				_localctx = new StrFuncSTRSHEXContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(642);
				match(STRS);
				setState(643);
				match(TILDE);
				setState(644);
				match(LPAREN);
				setState(645);
				numExpr(0);
				setState(646);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new StrFuncSTRINGSContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(648);
				match(STRINGS);
				setState(649);
				match(LPAREN);
				setState(650);
				numExpr(0);
				setState(651);
				match(COMMA);
				setState(652);
				strExpr(0);
				setState(653);
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
		enterRule(_localctx, 70, RULE_string);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(657);
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
		public StringContext string() {
			return getRuleContext(StringContext.class,0);
		}
		public StrVarContext strVar() {
			return getRuleContext(StrVarContext.class,0);
		}
		public StrFuncContext strFunc() {
			return getRuleContext(StrFuncContext.class,0);
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
		int _startState = 72;
		enterRecursionRule(_localctx, 72, RULE_strExpr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(663);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STRINGLITERAL:
				{
				setState(660);
				string();
				}
				break;
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(661);
				strVar();
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
				setState(662);
				strFunc();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(670);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,74,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StrExprContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_strExpr);
					setState(665);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(666);
					match(PLUS);
					setState(667);
					strExpr(2);
					}
					} 
				}
				setState(672);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,74,_ctx);
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
		enterRule(_localctx, 74, RULE_numFunc);
		try {
			setState(784);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,75,_ctx) ) {
			case 1:
				_localctx = new NumFuncPIContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(673);
				match(PI);
				}
				break;
			case 2:
				_localctx = new NumFuncTIMEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(674);
				match(TIME);
				}
				break;
			case 3:
				_localctx = new NumFuncRNDContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(675);
				match(RND);
				}
				break;
			case 4:
				_localctx = new NumFuncRND0Context(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(676);
				match(RND0);
				}
				break;
			case 5:
				_localctx = new NumFuncRND1Context(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(677);
				match(RND1);
				}
				break;
			case 6:
				_localctx = new NumFuncRNDRANGEContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(678);
				match(RND);
				setState(679);
				match(LPAREN);
				setState(680);
				numExpr(0);
				setState(681);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new NumFuncLNContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(683);
				match(LN);
				setState(684);
				match(LPAREN);
				setState(685);
				numExpr(0);
				setState(686);
				match(RPAREN);
				}
				break;
			case 8:
				_localctx = new NumFuncLOGContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(688);
				match(LOG);
				setState(689);
				match(LPAREN);
				setState(690);
				numExpr(0);
				setState(691);
				match(RPAREN);
				}
				break;
			case 9:
				_localctx = new NumFuncEXPContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(693);
				match(EXP);
				setState(694);
				match(LPAREN);
				setState(695);
				numExpr(0);
				setState(696);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new NumFuncATNContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(698);
				match(ATN);
				setState(699);
				match(LPAREN);
				setState(700);
				numExpr(0);
				setState(701);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new NumFuncTANContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(703);
				match(TAN);
				setState(704);
				match(LPAREN);
				setState(705);
				numExpr(0);
				setState(706);
				match(RPAREN);
				}
				break;
			case 12:
				_localctx = new NumFuncCOSContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(708);
				match(COS);
				setState(709);
				match(LPAREN);
				setState(710);
				numExpr(0);
				setState(711);
				match(RPAREN);
				}
				break;
			case 13:
				_localctx = new NumFuncSINContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(713);
				match(SIN);
				setState(714);
				match(LPAREN);
				setState(715);
				numExpr(0);
				setState(716);
				match(RPAREN);
				}
				break;
			case 14:
				_localctx = new NumFuncABSContext(_localctx);
				enterOuterAlt(_localctx, 14);
				{
				setState(718);
				match(ABS);
				setState(719);
				match(LPAREN);
				setState(720);
				numExpr(0);
				setState(721);
				match(RPAREN);
				}
				break;
			case 15:
				_localctx = new NumFuncACSContext(_localctx);
				enterOuterAlt(_localctx, 15);
				{
				setState(723);
				match(ACS);
				setState(724);
				match(LPAREN);
				setState(725);
				numExpr(0);
				setState(726);
				match(RPAREN);
				}
				break;
			case 16:
				_localctx = new NumFuncASNContext(_localctx);
				enterOuterAlt(_localctx, 16);
				{
				setState(728);
				match(ASN);
				setState(729);
				match(LPAREN);
				setState(730);
				numExpr(0);
				setState(731);
				match(RPAREN);
				}
				break;
			case 17:
				_localctx = new NumFuncDEGContext(_localctx);
				enterOuterAlt(_localctx, 17);
				{
				setState(733);
				match(DEG);
				setState(734);
				match(LPAREN);
				setState(735);
				numExpr(0);
				setState(736);
				match(RPAREN);
				}
				break;
			case 18:
				_localctx = new NumFuncRADContext(_localctx);
				enterOuterAlt(_localctx, 18);
				{
				setState(738);
				match(RAD);
				setState(739);
				match(LPAREN);
				setState(740);
				numExpr(0);
				setState(741);
				match(RPAREN);
				}
				break;
			case 19:
				_localctx = new NumFuncSQRContext(_localctx);
				enterOuterAlt(_localctx, 19);
				{
				setState(743);
				match(SQR);
				setState(744);
				match(LPAREN);
				setState(745);
				numExpr(0);
				setState(746);
				match(RPAREN);
				}
				break;
			case 20:
				_localctx = new NumFuncSGNContext(_localctx);
				enterOuterAlt(_localctx, 20);
				{
				setState(748);
				match(SGN);
				setState(749);
				match(LPAREN);
				setState(750);
				numExpr(0);
				setState(751);
				match(RPAREN);
				}
				break;
			case 21:
				_localctx = new NumFuncASCContext(_localctx);
				enterOuterAlt(_localctx, 21);
				{
				setState(753);
				match(ASC);
				setState(754);
				match(LPAREN);
				setState(755);
				strExpr(0);
				setState(756);
				match(RPAREN);
				}
				break;
			case 22:
				_localctx = new NumFuncLENContext(_localctx);
				enterOuterAlt(_localctx, 22);
				{
				setState(758);
				match(LEN);
				setState(759);
				match(LPAREN);
				setState(760);
				strExpr(0);
				setState(761);
				match(RPAREN);
				}
				break;
			case 23:
				_localctx = new NumFuncINSTR2Context(_localctx);
				enterOuterAlt(_localctx, 23);
				{
				setState(763);
				match(INSTR);
				setState(764);
				match(LPAREN);
				setState(765);
				strExpr(0);
				setState(766);
				match(COMMA);
				setState(767);
				strExpr(0);
				setState(768);
				match(RPAREN);
				}
				break;
			case 24:
				_localctx = new NumFuncINSTR3Context(_localctx);
				enterOuterAlt(_localctx, 24);
				{
				setState(770);
				match(INSTR);
				setState(771);
				match(LPAREN);
				setState(772);
				strExpr(0);
				setState(773);
				match(COMMA);
				setState(774);
				strExpr(0);
				setState(775);
				match(COMMA);
				setState(776);
				numExpr(0);
				setState(777);
				match(RPAREN);
				}
				break;
			case 25:
				_localctx = new NumFuncVALContext(_localctx);
				enterOuterAlt(_localctx, 25);
				{
				setState(779);
				match(VAL);
				setState(780);
				match(LPAREN);
				setState(781);
				strExpr(0);
				setState(782);
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
		int _startState = 76;
		enterRecursionRule(_localctx, 76, RULE_numExpr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(800);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,76,_ctx) ) {
			case 1:
				{
				_localctx = new NumExprNumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(787);
				number();
				}
				break;
			case 2:
				{
				_localctx = new NumExprVarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(788);
				numVar();
				}
				break;
			case 3:
				{
				_localctx = new NumExprFuncContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(789);
				numFunc();
				}
				break;
			case 4:
				{
				_localctx = new NumExprNOTContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(790);
				match(NOT);
				setState(791);
				numExpr(16);
				}
				break;
			case 5:
				{
				_localctx = new NumExprNestedContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(792);
				match(LPAREN);
				setState(793);
				numExpr(0);
				setState(794);
				match(RPAREN);
				}
				break;
			case 6:
				{
				_localctx = new NumExprStrRelopContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(796);
				strExpr(0);
				setState(797);
				compare();
				setState(798);
				strExpr(0);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(844);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,78,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(842);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,77,_ctx) ) {
					case 1:
						{
						_localctx = new NumExprHatContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(802);
						if (!(precpred(_ctx, 14))) throw new FailedPredicateException(this, "precpred(_ctx, 14)");
						setState(803);
						match(HAT);
						setState(804);
						numExpr(14);
						}
						break;
					case 2:
						{
						_localctx = new NumExprMultiplyContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(805);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(806);
						match(MULTIPLY);
						setState(807);
						numExpr(14);
						}
						break;
					case 3:
						{
						_localctx = new NumExprDivideContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(808);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(809);
						match(DIVIDE);
						setState(810);
						numExpr(13);
						}
						break;
					case 4:
						{
						_localctx = new NumExprDIVContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(811);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(812);
						match(DIV);
						setState(813);
						numExpr(12);
						}
						break;
					case 5:
						{
						_localctx = new NumExprMODContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(814);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(815);
						match(MOD);
						setState(816);
						numExpr(11);
						}
						break;
					case 6:
						{
						_localctx = new NumExprPlusContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(817);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(818);
						match(PLUS);
						setState(819);
						numExpr(10);
						}
						break;
					case 7:
						{
						_localctx = new NumExprSubtractContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(820);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(821);
						match(MINUS);
						setState(822);
						numExpr(9);
						}
						break;
					case 8:
						{
						_localctx = new NumExprNumRelopContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(823);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(824);
						compare();
						setState(825);
						numExpr(8);
						}
						break;
					case 9:
						{
						_localctx = new NumExprSHLContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(827);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(828);
						match(SHL);
						setState(829);
						numExpr(6);
						}
						break;
					case 10:
						{
						_localctx = new NumExprSHRContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(830);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(831);
						match(SHR);
						setState(832);
						numExpr(5);
						}
						break;
					case 11:
						{
						_localctx = new NumExprANDContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(833);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(834);
						match(AND);
						setState(835);
						numExpr(4);
						}
						break;
					case 12:
						{
						_localctx = new NumExprORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(836);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(837);
						match(OR);
						setState(838);
						numExpr(3);
						}
						break;
					case 13:
						{
						_localctx = new NumExprEORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(839);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(840);
						match(EOR);
						setState(841);
						numExpr(2);
						}
						break;
					}
					} 
				}
				setState(846);
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
		enterRule(_localctx, 78, RULE_compare);
		try {
			setState(853);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case EQ:
				_localctx = new CompareEQContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(847);
				match(EQ);
				}
				break;
			case NE:
				_localctx = new CompareNEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(848);
				match(NE);
				}
				break;
			case GT:
				_localctx = new CompareGTContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(849);
				match(GT);
				}
				break;
			case GE:
				_localctx = new CompareGEContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(850);
				match(GE);
				}
				break;
			case LT:
				_localctx = new CompareLTContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(851);
				match(LT);
				}
				break;
			case LE:
				_localctx = new CompareLEContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(852);
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
		case 36:
			return strExpr_sempred((StrExprContext)_localctx, predIndex);
		case 38:
			return numExpr_sempred((NumExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean strExpr_sempred(StrExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean numExpr_sempred(NumExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return precpred(_ctx, 14);
		case 2:
			return precpred(_ctx, 13);
		case 3:
			return precpred(_ctx, 12);
		case 4:
			return precpred(_ctx, 11);
		case 5:
			return precpred(_ctx, 10);
		case 6:
			return precpred(_ctx, 9);
		case 7:
			return precpred(_ctx, 8);
		case 8:
			return precpred(_ctx, 7);
		case 9:
			return precpred(_ctx, 5);
		case 10:
			return precpred(_ctx, 4);
		case 11:
			return precpred(_ctx, 3);
		case 12:
			return precpred(_ctx, 2);
		case 13:
			return precpred(_ctx, 1);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3z\u035a\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\3\2\7\2T\n\2\f"+
		"\2\16\2W\13\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3e\n\3"+
		"\3\4\3\4\3\4\5\4j\n\4\7\4l\n\4\f\4\16\4o\13\4\3\4\5\4r\n\4\3\5\3\5\5\5"+
		"v\n\5\3\6\7\6y\n\6\f\6\16\6|\13\6\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\b\6\b"+
		"\u0086\n\b\r\b\16\b\u0087\3\b\3\b\5\b\u008c\n\b\3\b\3\b\3\b\3\b\3\b\3"+
		"\b\3\b\3\b\7\b\u0096\n\b\f\b\16\b\u0099\13\b\3\b\3\b\3\b\3\b\7\b\u009f"+
		"\n\b\f\b\16\b\u00a2\13\b\3\b\3\b\3\b\5\b\u00a7\n\b\3\b\3\b\5\b\u00ab\n"+
		"\b\3\b\3\b\3\b\3\b\5\b\u00b1\n\b\3\b\3\b\5\b\u00b5\n\b\3\b\3\b\3\b\3\b"+
		"\3\b\3\b\3\b\5\b\u00be\n\b\3\b\3\b\5\b\u00c2\n\b\3\b\3\b\3\b\3\b\3\b\3"+
		"\b\5\b\u00ca\n\b\3\b\3\b\3\b\3\b\3\b\5\b\u00d1\n\b\3\b\3\b\3\b\5\b\u00d6"+
		"\n\b\3\b\3\b\3\b\5\b\u00db\n\b\3\b\3\b\3\b\5\b\u00e0\n\b\3\b\3\b\3\b\3"+
		"\b\3\b\3\b\5\b\u00e8\n\b\3\b\3\b\5\b\u00ec\n\b\3\b\5\b\u00ef\n\b\5\b\u00f1"+
		"\n\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\7\b\u00fb\n\b\f\b\16\b\u00fe\13\b"+
		"\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\7\b\u0109\n\b\f\b\16\b\u010c\13\b"+
		"\3\b\3\b\3\b\3\b\3\b\7\b\u0113\n\b\f\b\16\b\u0116\13\b\3\b\3\b\5\b\u011a"+
		"\n\b\3\b\3\b\3\b\5\b\u011f\n\b\3\b\3\b\3\b\3\b\3\b\7\b\u0126\n\b\f\b\16"+
		"\b\u0129\13\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\7\b\u0134\n\b\f\b\16"+
		"\b\u0137\13\b\3\b\3\b\3\b\3\b\7\b\u013d\n\b\f\b\16\b\u0140\13\b\3\b\3"+
		"\b\3\b\3\b\3\b\7\b\u0147\n\b\f\b\16\b\u014a\13\b\3\b\3\b\5\b\u014e\n\b"+
		"\3\t\3\t\3\t\3\t\7\t\u0154\n\t\f\t\16\t\u0157\13\t\3\t\3\t\3\t\3\n\3\n"+
		"\3\13\3\13\5\13\u0160\n\13\3\f\3\f\3\f\5\f\u0165\n\f\3\r\3\r\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\5\16\u016f\n\16\3\16\3\16\7\16\u0173\n\16\f\16\16"+
		"\16\u0176\13\16\3\16\3\16\3\16\3\16\3\16\3\16\5\16\u017e\n\16\3\16\3\16"+
		"\7\16\u0182\n\16\f\16\16\16\u0185\13\16\3\16\3\16\3\16\3\16\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16"+
		"\3\16\5\16\u019c\n\16\3\16\3\16\3\16\3\16\5\16\u01a2\n\16\3\16\3\16\3"+
		"\16\3\16\5\16\u01a8\n\16\3\16\5\16\u01ab\n\16\3\17\3\17\3\17\3\17\3\17"+
		"\3\17\5\17\u01b3\n\17\3\17\3\17\7\17\u01b7\n\17\f\17\16\17\u01ba\13\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\5\17\u01c5\n\17\3\20\3\20"+
		"\3\20\5\20\u01ca\n\20\3\21\3\21\3\22\3\22\3\23\3\23\3\24\3\24\3\25\3\25"+
		"\3\25\3\25\3\25\3\25\5\25\u01da\n\25\3\25\3\25\7\25\u01de\n\25\f\25\16"+
		"\25\u01e1\13\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\5\25\u01ec"+
		"\n\25\3\26\3\26\3\26\3\26\3\26\7\26\u01f3\n\26\f\26\16\26\u01f6\13\26"+
		"\3\26\3\26\3\27\3\27\3\27\7\27\u01fd\n\27\f\27\16\27\u0200\13\27\3\30"+
		"\5\30\u0203\n\30\3\30\3\30\3\30\5\30\u0208\n\30\3\30\7\30\u020b\n\30\f"+
		"\30\16\30\u020e\13\30\3\31\3\31\3\31\7\31\u0213\n\31\f\31\16\31\u0216"+
		"\13\31\3\32\3\32\3\32\7\32\u021b\n\32\f\32\16\32\u021e\13\32\3\33\5\33"+
		"\u0221\n\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\5\33\u022b\n\33\3"+
		"\34\6\34\u022e\n\34\r\34\16\34\u022f\3\35\5\35\u0233\n\35\3\35\5\35\u0236"+
		"\n\35\3\35\3\35\3\35\5\35\u023b\n\35\7\35\u023d\n\35\f\35\16\35\u0240"+
		"\13\35\3\36\3\36\5\36\u0244\n\36\3\37\3\37\3\37\3\37\5\37\u024a\n\37\3"+
		" \5 \u024d\n \3 \3 \3!\3!\3\"\3\"\3#\5#\u0256\n#\3#\3#\3$\3$\3$\3$\3$"+
		"\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$"+
		"\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$"+
		"\3$\3$\3$\3$\3$\5$\u0292\n$\3%\3%\3&\3&\3&\3&\5&\u029a\n&\3&\3&\3&\7&"+
		"\u029f\n&\f&\16&\u02a2\13&\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'"+
		"\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3"+
		"\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'"+
		"\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3"+
		"\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'"+
		"\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3"+
		"\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\5\'\u0313\n\'\3(\3"+
		"(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\5(\u0323\n(\3(\3(\3(\3(\3(\3(\3"+
		"(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3"+
		"(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\7(\u034d\n(\f(\16(\u0350\13(\3)\3)\3)"+
		"\3)\3)\3)\5)\u0358\n)\3)\2\4JN*\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36"+
		" \"$&(*,.\60\62\64\668:<>@BDFHJLNP\2\6\4\2\34\34ii\3\2ln\5\2__bbgg\3\2"+
		"RS\2\u03e0\2U\3\2\2\2\4d\3\2\2\2\6q\3\2\2\2\bu\3\2\2\2\nz\3\2\2\2\f}\3"+
		"\2\2\2\16\u014d\3\2\2\2\20\u014f\3\2\2\2\22\u015b\3\2\2\2\24\u015f\3\2"+
		"\2\2\26\u0164\3\2\2\2\30\u0166\3\2\2\2\32\u01aa\3\2\2\2\34\u01c4\3\2\2"+
		"\2\36\u01c9\3\2\2\2 \u01cb\3\2\2\2\"\u01cd\3\2\2\2$\u01cf\3\2\2\2&\u01d1"+
		"\3\2\2\2(\u01eb\3\2\2\2*\u01ed\3\2\2\2,\u01f9\3\2\2\2.\u0202\3\2\2\2\60"+
		"\u020f\3\2\2\2\62\u0217\3\2\2\2\64\u022a\3\2\2\2\66\u022d\3\2\2\28\u0232"+
		"\3\2\2\2:\u0243\3\2\2\2<\u0249\3\2\2\2>\u024c\3\2\2\2@\u0250\3\2\2\2B"+
		"\u0252\3\2\2\2D\u0255\3\2\2\2F\u0291\3\2\2\2H\u0293\3\2\2\2J\u0299\3\2"+
		"\2\2L\u0312\3\2\2\2N\u0322\3\2\2\2P\u0357\3\2\2\2RT\5\4\3\2SR\3\2\2\2"+
		"TW\3\2\2\2US\3\2\2\2UV\3\2\2\2VX\3\2\2\2WU\3\2\2\2XY\7\2\2\3Y\3\3\2\2"+
		"\2Ze\7^\2\2[\\\7a\2\2\\e\7^\2\2]^\5\6\4\2^_\7^\2\2_e\3\2\2\2`a\5\f\7\2"+
		"ab\5\6\4\2bc\7^\2\2ce\3\2\2\2dZ\3\2\2\2d[\3\2\2\2d]\3\2\2\2d`\3\2\2\2"+
		"e\5\3\2\2\2fm\5\16\b\2gi\7a\2\2hj\5\16\b\2ih\3\2\2\2ij\3\2\2\2jl\3\2\2"+
		"\2kg\3\2\2\2lo\3\2\2\2mk\3\2\2\2mn\3\2\2\2nr\3\2\2\2om\3\2\2\2pr\t\2\2"+
		"\2qf\3\2\2\2qp\3\2\2\2r\7\3\2\2\2sv\5\6\4\2tv\5\4\3\2us\3\2\2\2ut\3\2"+
		"\2\2v\t\3\2\2\2wy\5\b\5\2xw\3\2\2\2y|\3\2\2\2zx\3\2\2\2z{\3\2\2\2{\13"+
		"\3\2\2\2|z\3\2\2\2}~\7v\2\2~\r\3\2\2\2\177\u014e\7\3\2\2\u0080\u0081\7"+
		"\4\2\2\u0081\u0082\5:\36\2\u0082\u0083\7\27\2\2\u0083\u0085\7^\2\2\u0084"+
		"\u0086\5\20\t\2\u0085\u0084\3\2\2\2\u0086\u0087\3\2\2\2\u0087\u0085\3"+
		"\2\2\2\u0087\u0088\3\2\2\2\u0088\u008b\3\2\2\2\u0089\u008a\7\30\2\2\u008a"+
		"\u008c\5\n\6\2\u008b\u0089\3\2\2\2\u008b\u008c\3\2\2\2\u008c\u008d\3\2"+
		"\2\2\u008d\u008e\7\13\2\2\u008e\u014e\3\2\2\2\u008f\u0090\7\5\2\2\u0090"+
		"\u014e\5J&\2\u0091\u0092\7\6\2\2\u0092\u0097\5\24\13\2\u0093\u0094\7b"+
		"\2\2\u0094\u0096\5\24\13\2\u0095\u0093\3\2\2\2\u0096\u0099\3\2\2\2\u0097"+
		"\u0095\3\2\2\2\u0097\u0098\3\2\2\2\u0098\u014e\3\2\2\2\u0099\u0097\3\2"+
		"\2\2\u009a\u009b\7\b\2\2\u009b\u00a0\5*\26\2\u009c\u009d\7b\2\2\u009d"+
		"\u009f\5*\26\2\u009e\u009c\3\2\2\2\u009f\u00a2\3\2\2\2\u00a0\u009e\3\2"+
		"\2\2\u00a0\u00a1\3\2\2\2\u00a1\u014e\3\2\2\2\u00a2\u00a0\3\2\2\2\u00a3"+
		"\u014e\7\n\2\2\u00a4\u00a6\7E\2\2\u00a5\u00a7\5:\36\2\u00a6\u00a5\3\2"+
		"\2\2\u00a6\u00a7\3\2\2\2\u00a7\u014e\3\2\2\2\u00a8\u00aa\7\37\2\2\u00a9"+
		"\u00ab\5:\36\2\u00aa\u00a9\3\2\2\2\u00aa\u00ab\3\2\2\2\u00ab\u014e\3\2"+
		"\2\2\u00ac\u00ad\7\7\2\2\u00ad\u00ae\5\22\n\2\u00ae\u00b0\7d\2\2\u00af"+
		"\u00b1\5.\30\2\u00b0\u00af\3\2\2\2\u00b0\u00b1\3\2\2\2\u00b1\u00b2\3\2"+
		"\2\2\u00b2\u00b4\7f\2\2\u00b3\u00b5\7a\2\2\u00b4\u00b3\3\2\2\2\u00b4\u00b5"+
		"\3\2\2\2\u00b5\u00b6\3\2\2\2\u00b6\u00b7\5\n\6\2\u00b7\u00b8\7\r\2\2\u00b8"+
		"\u014e\3\2\2\2\u00b9\u00ba\7\7\2\2\u00ba\u00bb\7k\2\2\u00bb\u00bd\7d\2"+
		"\2\u00bc\u00be\5.\30\2\u00bd\u00bc\3\2\2\2\u00bd\u00be\3\2\2\2\u00be\u00bf"+
		"\3\2\2\2\u00bf\u00c1\7f\2\2\u00c0\u00c2\7a\2\2\u00c1\u00c0\3\2\2\2\u00c1"+
		"\u00c2\3\2\2\2\u00c2\u00c3\3\2\2\2\u00c3\u00c4\5\n\6\2\u00c4\u00c5\7\16"+
		"\2\2\u00c5\u014e\3\2\2\2\u00c6\u00c7\5\22\n\2\u00c7\u00c9\7d\2\2\u00c8"+
		"\u00ca\5\60\31\2\u00c9\u00c8\3\2\2\2\u00c9\u00ca\3\2\2\2\u00ca\u00cb\3"+
		"\2\2\2\u00cb\u00cc\7f\2\2\u00cc\u014e\3\2\2\2\u00cd\u00ce\7\21\2\2\u00ce"+
		"\u00d0\5:\36\2\u00cf\u00d1\7\26\2\2\u00d0\u00cf\3\2\2\2\u00d0\u00d1\3"+
		"\2\2\2\u00d1\u00d2\3\2\2\2\u00d2\u00d5\5\6\4\2\u00d3\u00d4\7\t\2\2\u00d4"+
		"\u00d6\5\6\4\2\u00d5\u00d3\3\2\2\2\u00d5\u00d6\3\2\2\2\u00d6\u014e\3\2"+
		"\2\2\u00d7\u00d8\7\21\2\2\u00d8\u00da\5:\36\2\u00d9\u00db\7\26\2\2\u00da"+
		"\u00d9\3\2\2\2\u00da\u00db\3\2\2\2\u00db\u00dc\3\2\2\2\u00dc\u00df\5\n"+
		"\6\2\u00dd\u00de\7\t\2\2\u00de\u00e0\5\n\6\2\u00df\u00dd\3\2\2\2\u00df"+
		"\u00e0\3\2\2\2\u00e0\u00e1\3\2\2\2\u00e1\u00e2\7\f\2\2\u00e2\u014e\3\2"+
		"\2\2\u00e3\u00e7\7\22\2\2\u00e4\u00e5\5J&\2\u00e5\u00e6\7b\2\2\u00e6\u00e8"+
		"\3\2\2\2\u00e7\u00e4\3\2\2\2\u00e7\u00e8\3\2\2\2\u00e8\u00e9\3\2\2\2\u00e9"+
		"\u014e\5,\27\2\u00ea\u00ec\7\25\2\2\u00eb\u00ea\3\2\2\2\u00eb\u00ec\3"+
		"\2\2\2\u00ec\u00f1\3\2\2\2\u00ed\u00ef\7\23\2\2\u00ee\u00ed\3\2\2\2\u00ee"+
		"\u00ef\3\2\2\2\u00ef\u00f1\3\2\2\2\u00f0\u00eb\3\2\2\2\u00f0\u00ee\3\2"+
		"\2\2\u00f1\u00f2\3\2\2\2\u00f2\u00f3\5(\25\2\u00f3\u00f4\7E\2\2\u00f4"+
		"\u00fc\5:\36\2\u00f5\u00f6\7b\2\2\u00f6\u00f7\5(\25\2\u00f7\u00f8\7E\2"+
		"\2\u00f8\u00f9\5:\36\2\u00f9\u00fb\3\2\2\2\u00fa\u00f5\3\2\2\2\u00fb\u00fe"+
		"\3\2\2\2\u00fc\u00fa\3\2\2\2\u00fc\u00fd\3\2\2\2\u00fd\u014e\3\2\2\2\u00fe"+
		"\u00fc\3\2\2\2\u00ff\u0100\7\24\2\2\u0100\u0101\5(\25\2\u0101\u0102\7"+
		"E\2\2\u0102\u010a\5:\36\2\u0103\u0104\7b\2\2\u0104\u0105\5(\25\2\u0105"+
		"\u0106\7E\2\2\u0106\u0107\5:\36\2\u0107\u0109\3\2\2\2\u0108\u0103\3\2"+
		"\2\2\u0109\u010c\3\2\2\2\u010a\u0108\3\2\2\2\u010a\u010b\3\2\2\2\u010b"+
		"\u014e\3\2\2\2\u010c\u010a\3\2\2\2\u010d\u010e\7\24\2\2\u010e\u010f\7"+
		"\b\2\2\u010f\u0114\5*\26\2\u0110\u0111\7b\2\2\u0111\u0113\5*\26\2\u0112"+
		"\u0110\3\2\2\2\u0113\u0116\3\2\2\2\u0114\u0112\3\2\2\2\u0114\u0115\3\2"+
		"\2\2\u0115\u014e\3\2\2\2\u0116\u0114\3\2\2\2\u0117\u0119\7\31\2\2\u0118"+
		"\u011a\58\35\2\u0119\u0118\3\2\2\2\u0119\u011a\3\2\2\2\u011a\u014e\3\2"+
		"\2\2\u011b\u011c\7k\2\2\u011c\u011e\7d\2\2\u011d\u011f\5\60\31\2\u011e"+
		"\u011d\3\2\2\2\u011e\u011f\3\2\2\2\u011f\u0120\3\2\2\2\u0120\u014e\7f"+
		"\2\2\u0121\u0122\7\33\2\2\u0122\u0127\5(\25\2\u0123\u0124\7b\2\2\u0124"+
		"\u0126\5(\25\2\u0125\u0123\3\2\2\2\u0126\u0129\3\2\2\2\u0127\u0125\3\2"+
		"\2\2\u0127\u0128\3\2\2\2\u0128\u014e\3\2\2\2\u0129\u0127\3\2\2\2\u012a"+
		"\u014e\7\36\2\2\u012b\u014e\7!\2\2\u012c\u014e\7\"\2\2\u012d\u012e\7#"+
		"\2\2\u012e\u012f\5 \21\2\u012f\u0130\7d\2\2\u0130\u0135\5\36\20\2\u0131"+
		"\u0132\7b\2\2\u0132\u0134\5\36\20\2\u0133\u0131\3\2\2\2\u0134\u0137\3"+
		"\2\2\2\u0135\u0133\3\2\2\2\u0135\u0136\3\2\2\2\u0136\u0138\3\2\2\2\u0137"+
		"\u0135\3\2\2\2\u0138\u0139\7f\2\2\u0139\u014e\3\2\2\2\u013a\u013e\7\35"+
		"\2\2\u013b\u013d\5\b\5\2\u013c\u013b\3\2\2\2\u013d\u0140\3\2\2\2\u013e"+
		"\u013c\3\2\2\2\u013e\u013f\3\2\2\2\u013f\u0141\3\2\2\2\u0140\u013e\3\2"+
		"\2\2\u0141\u0142\7$\2\2\u0142\u014e\5:\36\2\u0143\u0144\7&\2\2\u0144\u0148"+
		"\5:\36\2\u0145\u0147\5\b\5\2\u0146\u0145\3\2\2\2\u0147\u014a\3\2\2\2\u0148"+
		"\u0146\3\2\2\2\u0148\u0149\3\2\2\2\u0149\u014b\3\2\2\2\u014a\u0148\3\2"+
		"\2\2\u014b\u014c\7\17\2\2\u014c\u014e\3\2\2\2\u014d\177\3\2\2\2\u014d"+
		"\u0080\3\2\2\2\u014d\u008f\3\2\2\2\u014d\u0091\3\2\2\2\u014d\u009a\3\2"+
		"\2\2\u014d\u00a3\3\2\2\2\u014d\u00a4\3\2\2\2\u014d\u00a8\3\2\2\2\u014d"+
		"\u00ac\3\2\2\2\u014d\u00b9\3\2\2\2\u014d\u00c6\3\2\2\2\u014d\u00cd\3\2"+
		"\2\2\u014d\u00d7\3\2\2\2\u014d\u00e3\3\2\2\2\u014d\u00f0\3\2\2\2\u014d"+
		"\u00ff\3\2\2\2\u014d\u010d\3\2\2\2\u014d\u0117\3\2\2\2\u014d\u011b\3\2"+
		"\2\2\u014d\u0121\3\2\2\2\u014d\u012a\3\2\2\2\u014d\u012b\3\2\2\2\u014d"+
		"\u012c\3\2\2\2\u014d\u012d\3\2\2\2\u014d\u013a\3\2\2\2\u014d\u0143\3\2"+
		"\2\2\u014e\17\3\2\2\2\u014f\u0150\7%\2\2\u0150\u0155\5:\36\2\u0151\u0152"+
		"\7b\2\2\u0152\u0154\5:\36\2\u0153\u0151\3\2\2\2\u0154\u0157\3\2\2\2\u0155"+
		"\u0153\3\2\2\2\u0155\u0156\3\2\2\2\u0156\u0158\3\2\2\2\u0157\u0155\3\2"+
		"\2\2\u0158\u0159\7a\2\2\u0159\u015a\5\n\6\2\u015a\21\3\2\2\2\u015b\u015c"+
		"\t\3\2\2\u015c\23\3\2\2\2\u015d\u0160\5<\37\2\u015e\u0160\5H%\2\u015f"+
		"\u015d\3\2\2\2\u015f\u015e\3\2\2\2\u0160\25\3\2\2\2\u0161\u0165\5\32\16"+
		"\2\u0162\u0165\5\34\17\2\u0163\u0165\5\30\r\2\u0164\u0161\3\2\2\2\u0164"+
		"\u0162\3\2\2\2\u0164\u0163\3\2\2\2\u0165\27\3\2\2\2\u0166\u0167\5&\24"+
		"\2\u0167\31\3\2\2\2\u0168\u01ab\5 \21\2\u0169\u0174\5 \21\2\u016a\u016b"+
		"\7d\2\2\u016b\u016e\5N(\2\u016c\u016d\7b\2\2\u016d\u016f\5N(\2\u016e\u016c"+
		"\3\2\2\2\u016e\u016f\3\2\2\2\u016f\u0170\3\2\2\2\u0170\u0171\7f\2\2\u0171"+
		"\u0173\3\2\2\2\u0172\u016a\3\2\2\2\u0173\u0176\3\2\2\2\u0174\u0172\3\2"+
		"\2\2\u0174\u0175\3\2\2\2\u0175\u01ab\3\2\2\2\u0176\u0174\3\2\2\2\u0177"+
		"\u01ab\5\"\22\2\u0178\u0183\5\"\22\2\u0179\u017a\7d\2\2\u017a\u017d\5"+
		"N(\2\u017b\u017c\7b\2\2\u017c\u017e\5N(\2\u017d\u017b\3\2\2\2\u017d\u017e"+
		"\3\2\2\2\u017e\u017f\3\2\2\2\u017f\u0180\7f\2\2\u0180\u0182\3\2\2\2\u0181"+
		"\u0179\3\2\2\2\u0182\u0185\3\2\2\2\u0183\u0181\3\2\2\2\u0183\u0184\3\2"+
		"\2\2\u0184\u01ab\3\2\2\2\u0185\u0183\3\2\2\2\u0186\u0187\5\30\r\2\u0187"+
		"\u0188\5 \21\2\u0188\u01ab\3\2\2\2\u0189\u018a\5\30\r\2\u018a\u018b\7"+
		"d\2\2\u018b\u018c\5N(\2\u018c\u018d\7f\2\2\u018d\u018e\5 \21\2\u018e\u01ab"+
		"\3\2\2\2\u018f\u0190\5\30\r\2\u0190\u0191\5\"\22\2\u0191\u01ab\3\2\2\2"+
		"\u0192\u0193\5\30\r\2\u0193\u0194\7d\2\2\u0194\u0195\5N(\2\u0195\u0196"+
		"\7f\2\2\u0196\u0197\5\"\22\2\u0197\u01ab\3\2\2\2\u0198\u0199\7m\2\2\u0199"+
		"\u019b\7d\2\2\u019a\u019c\5\60\31\2\u019b\u019a\3\2\2\2\u019b\u019c\3"+
		"\2\2\2\u019c\u019d\3\2\2\2\u019d\u01ab\7f\2\2\u019e\u019f\7l\2\2\u019f"+
		"\u01a1\7d\2\2\u01a0\u01a2\5\60\31\2\u01a1\u01a0\3\2\2\2\u01a1\u01a2\3"+
		"\2\2\2\u01a2\u01a3\3\2\2\2\u01a3\u01ab\7f\2\2\u01a4\u01a5\7n\2\2\u01a5"+
		"\u01a7\7d\2\2\u01a6\u01a8\5\60\31\2\u01a7\u01a6\3\2\2\2\u01a7\u01a8\3"+
		"\2\2\2\u01a8\u01a9\3\2\2\2\u01a9\u01ab\7f\2\2\u01aa\u0168\3\2\2\2\u01aa"+
		"\u0169\3\2\2\2\u01aa\u0177\3\2\2\2\u01aa\u0178\3\2\2\2\u01aa\u0186\3\2"+
		"\2\2\u01aa\u0189\3\2\2\2\u01aa\u018f\3\2\2\2\u01aa\u0192\3\2\2\2\u01aa"+
		"\u0198\3\2\2\2\u01aa\u019e\3\2\2\2\u01aa\u01a4\3\2\2\2\u01ab\33\3\2\2"+
		"\2\u01ac\u01c5\5$\23\2\u01ad\u01b8\5$\23\2\u01ae\u01af\7d\2\2\u01af\u01b2"+
		"\5N(\2\u01b0\u01b1\7b\2\2\u01b1\u01b3\5N(\2\u01b2\u01b0\3\2\2\2\u01b2"+
		"\u01b3\3\2\2\2\u01b3\u01b4\3\2\2\2\u01b4\u01b5\7f\2\2\u01b5\u01b7\3\2"+
		"\2\2\u01b6\u01ae\3\2\2\2\u01b7\u01ba\3\2\2\2\u01b8\u01b6\3\2\2\2\u01b8"+
		"\u01b9\3\2\2\2\u01b9\u01c5\3\2\2\2\u01ba\u01b8\3\2\2\2\u01bb\u01bc\5\30"+
		"\r\2\u01bc\u01bd\5$\23\2\u01bd\u01c5\3\2\2\2\u01be\u01bf\5\30\r\2\u01bf"+
		"\u01c0\7d\2\2\u01c0\u01c1\5N(\2\u01c1\u01c2\7f\2\2\u01c2\u01c3\5$\23\2"+
		"\u01c3\u01c5\3\2\2\2\u01c4\u01ac\3\2\2\2\u01c4\u01ad\3\2\2\2\u01c4\u01bb"+
		"\3\2\2\2\u01c4\u01be\3\2\2\2\u01c5\35\3\2\2\2\u01c6\u01ca\5 \21\2\u01c7"+
		"\u01ca\5\"\22\2\u01c8\u01ca\5$\23\2\u01c9\u01c6\3\2\2\2\u01c9\u01c7\3"+
		"\2\2\2\u01c9\u01c8\3\2\2\2\u01ca\37\3\2\2\2\u01cb\u01cc\7o\2\2\u01cc!"+
		"\3\2\2\2\u01cd\u01ce\7p\2\2\u01ce#\3\2\2\2\u01cf\u01d0\7q\2\2\u01d0%\3"+
		"\2\2\2\u01d1\u01d2\7r\2\2\u01d2\'\3\2\2\2\u01d3\u01ec\5\26\f\2\u01d4\u01df"+
		"\5\26\f\2\u01d5\u01d6\7d\2\2\u01d6\u01d9\5N(\2\u01d7\u01d8\7b\2\2\u01d8"+
		"\u01da\5N(\2\u01d9\u01d7\3\2\2\2\u01d9\u01da\3\2\2\2\u01da\u01db\3\2\2"+
		"\2\u01db\u01dc\7f\2\2\u01dc\u01de\3\2\2\2\u01dd\u01d5\3\2\2\2\u01de\u01e1"+
		"\3\2\2\2\u01df\u01dd\3\2\2\2\u01df\u01e0\3\2\2\2\u01e0\u01ec\3\2\2\2\u01e1"+
		"\u01df\3\2\2\2\u01e2\u01e3\5\30\r\2\u01e3\u01e4\5 \21\2\u01e4\u01ec\3"+
		"\2\2\2\u01e5\u01e6\5\30\r\2\u01e6\u01e7\7d\2\2\u01e7\u01e8\5N(\2\u01e8"+
		"\u01e9\7f\2\2\u01e9\u01ea\5 \21\2\u01ea\u01ec\3\2\2\2\u01eb\u01d3\3\2"+
		"\2\2\u01eb\u01d4\3\2\2\2\u01eb\u01e2\3\2\2\2\u01eb\u01e5\3\2\2\2\u01ec"+
		")\3\2\2\2\u01ed\u01ee\5\26\f\2\u01ee\u01ef\7d\2\2\u01ef\u01f4\5N(\2\u01f0"+
		"\u01f1\7b\2\2\u01f1\u01f3\5N(\2\u01f2\u01f0\3\2\2\2\u01f3\u01f6\3\2\2"+
		"\2\u01f4\u01f2\3\2\2\2\u01f4\u01f5\3\2\2\2\u01f5\u01f7\3\2\2\2\u01f6\u01f4"+
		"\3\2\2\2\u01f7\u01f8\7f\2\2\u01f8+\3\2\2\2\u01f9\u01fe\5(\25\2\u01fa\u01fb"+
		"\7b\2\2\u01fb\u01fd\5(\25\2\u01fc\u01fa\3\2\2\2\u01fd\u0200\3\2\2\2\u01fe"+
		"\u01fc\3\2\2\2\u01fe\u01ff\3\2\2\2\u01ff-\3\2\2\2\u0200\u01fe\3\2\2\2"+
		"\u0201\u0203\7\37\2\2\u0202\u0201\3\2\2\2\u0202\u0203\3\2\2\2\u0203\u0204"+
		"\3\2\2\2\u0204\u020c\5\36\20\2\u0205\u0207\7b\2\2\u0206\u0208\7\37\2\2"+
		"\u0207\u0206\3\2\2\2\u0207\u0208\3\2\2\2\u0208\u0209\3\2\2\2\u0209\u020b"+
		"\5\36\20\2\u020a\u0205\3\2\2\2\u020b\u020e\3\2\2\2\u020c\u020a\3\2\2\2"+
		"\u020c\u020d\3\2\2\2\u020d/\3\2\2\2\u020e\u020c\3\2\2\2\u020f\u0214\5"+
		":\36\2\u0210\u0211\7b\2\2\u0211\u0213\5:\36\2\u0212\u0210\3\2\2\2\u0213"+
		"\u0216\3\2\2\2\u0214\u0212\3\2\2\2\u0214\u0215\3\2\2\2\u0215\61\3\2\2"+
		"\2\u0216\u0214\3\2\2\2\u0217\u021c\5:\36\2\u0218\u0219\7b\2\2\u0219\u021b"+
		"\5:\36\2\u021a\u0218\3\2\2\2\u021b\u021e\3\2\2\2\u021c\u021a\3\2\2\2\u021c"+
		"\u021d\3\2\2\2\u021d\63\3\2\2\2\u021e\u021c\3\2\2\2\u021f\u0221\7`\2\2"+
		"\u0220\u021f\3\2\2\2\u0220\u0221\3\2\2\2\u0221\u0222\3\2\2\2\u0222\u022b"+
		"\5:\36\2\u0223\u0224\7 \2\2\u0224\u0225\7d\2\2\u0225\u0226\5N(\2\u0226"+
		"\u0227\7f\2\2\u0227\u022b\3\2\2\2\u0228\u0229\7 \2\2\u0229\u022b\5N(\2"+
		"\u022a\u0220\3\2\2\2\u022a\u0223\3\2\2\2\u022a\u0228\3\2\2\2\u022b\65"+
		"\3\2\2\2\u022c\u022e\7_\2\2\u022d\u022c\3\2\2\2\u022e\u022f\3\2\2\2\u022f"+
		"\u022d\3\2\2\2\u022f\u0230\3\2\2\2\u0230\67\3\2\2\2\u0231\u0233\5\66\34"+
		"\2\u0232\u0231\3\2\2\2\u0232\u0233\3\2\2\2\u0233\u0235\3\2\2\2\u0234\u0236"+
		"\7b\2\2\u0235\u0234\3\2\2\2\u0235\u0236\3\2\2\2\u0236\u0237\3\2\2\2\u0237"+
		"\u023e\5\64\33\2\u0238\u023a\t\4\2\2\u0239\u023b\5\64\33\2\u023a\u0239"+
		"\3\2\2\2\u023a\u023b\3\2\2\2\u023b\u023d\3\2\2\2\u023c\u0238\3\2\2\2\u023d"+
		"\u0240\3\2\2\2\u023e\u023c\3\2\2\2\u023e\u023f\3\2\2\2\u023f9\3\2\2\2"+
		"\u0240\u023e\3\2\2\2\u0241\u0244\5N(\2\u0242\u0244\5J&\2\u0243\u0241\3"+
		"\2\2\2\u0243\u0242\3\2\2\2\u0244;\3\2\2\2\u0245\u024a\5> \2\u0246\u024a"+
		"\5D#\2\u0247\u024a\5@!\2\u0248\u024a\5B\"\2\u0249\u0245\3\2\2\2\u0249"+
		"\u0246\3\2\2\2\u0249\u0247\3\2\2\2\u0249\u0248\3\2\2\2\u024a=\3\2\2\2"+
		"\u024b\u024d\t\5\2\2\u024c\u024b\3\2\2\2\u024c\u024d\3\2\2\2\u024d\u024e"+
		"\3\2\2\2\u024e\u024f\7v\2\2\u024f?\3\2\2\2\u0250\u0251\7t\2\2\u0251A\3"+
		"\2\2\2\u0252\u0253\7u\2\2\u0253C\3\2\2\2\u0254\u0256\t\5\2\2\u0255\u0254"+
		"\3\2\2\2\u0255\u0256\3\2\2\2\u0256\u0257\3\2\2\2\u0257\u0258\7w\2\2\u0258"+
		"E\3\2\2\2\u0259\u0292\7;\2\2\u025a\u025b\7>\2\2\u025b\u025c\7d\2\2\u025c"+
		"\u025d\5N(\2\u025d\u025e\7f\2\2\u025e\u0292\3\2\2\2\u025f\u0260\7>\2\2"+
		"\u0260\u0292\5N(\2\u0261\u0262\7?\2\2\u0262\u0263\7d\2\2\u0263\u0264\5"+
		"J&\2\u0264\u0265\7b\2\2\u0265\u0266\5N(\2\u0266\u0267\7f\2\2\u0267\u0292"+
		"\3\2\2\2\u0268\u0269\7@\2\2\u0269\u026a\7d\2\2\u026a\u026b\5J&\2\u026b"+
		"\u026c\7b\2\2\u026c\u026d\5N(\2\u026d\u026e\7b\2\2\u026e\u026f\5N(\2\u026f"+
		"\u0270\7f\2\2\u0270\u0292\3\2\2\2\u0271\u0272\7@\2\2\u0272\u0273\7d\2"+
		"\2\u0273\u0274\5J&\2\u0274\u0275\7b\2\2\u0275\u0276\5N(\2\u0276\u0277"+
		"\7f\2\2\u0277\u0292\3\2\2\2\u0278\u0279\7A\2\2\u0279\u027a\7d\2\2\u027a"+
		"\u027b\5J&\2\u027b\u027c\7b\2\2\u027c\u027d\5N(\2\u027d\u027e\7f\2\2\u027e"+
		"\u0292\3\2\2\2\u027f\u0280\7<\2\2\u0280\u0281\7d\2\2\u0281\u0282\5N(\2"+
		"\u0282\u0283\7f\2\2\u0283\u0292\3\2\2\2\u0284\u0285\7<\2\2\u0285\u0286"+
		"\7`\2\2\u0286\u0287\7d\2\2\u0287\u0288\5N(\2\u0288\u0289\7f\2\2\u0289"+
		"\u0292\3\2\2\2\u028a\u028b\7=\2\2\u028b\u028c\7d\2\2\u028c\u028d\5N(\2"+
		"\u028d\u028e\7b\2\2\u028e\u028f\5J&\2\u028f\u0290\7f\2\2\u0290\u0292\3"+
		"\2\2\2\u0291\u0259\3\2\2\2\u0291\u025a\3\2\2\2\u0291\u025f\3\2\2\2\u0291"+
		"\u0261\3\2\2\2\u0291\u0268\3\2\2\2\u0291\u0271\3\2\2\2\u0291\u0278\3\2"+
		"\2\2\u0291\u027f\3\2\2\2\u0291\u0284\3\2\2\2\u0291\u028a\3\2\2\2\u0292"+
		"G\3\2\2\2\u0293\u0294\7j\2\2\u0294I\3\2\2\2\u0295\u0296\b&\1\2\u0296\u029a"+
		"\5H%\2\u0297\u029a\5\34\17\2\u0298\u029a\5F$\2\u0299\u0295\3\2\2\2\u0299"+
		"\u0297\3\2\2\2\u0299\u0298\3\2\2\2\u029a\u02a0\3\2\2\2\u029b\u029c\f\3"+
		"\2\2\u029c\u029d\7R\2\2\u029d\u029f\5J&\4\u029e\u029b\3\2\2\2\u029f\u02a2"+
		"\3\2\2\2\u02a0\u029e\3\2\2\2\u02a0\u02a1\3\2\2\2\u02a1K\3\2\2\2\u02a2"+
		"\u02a0\3\2\2\2\u02a3\u0313\7(\2\2\u02a4\u0313\7\'\2\2\u02a5\u0313\7B\2"+
		"\2\u02a6\u0313\7C\2\2\u02a7\u0313\7D\2\2\u02a8\u02a9\7B\2\2\u02a9\u02aa"+
		"\7d\2\2\u02aa\u02ab\5N(\2\u02ab\u02ac\7f\2\2\u02ac\u0313\3\2\2\2\u02ad"+
		"\u02ae\7*\2\2\u02ae\u02af\7d\2\2\u02af\u02b0\5N(\2\u02b0\u02b1\7f\2\2"+
		"\u02b1\u0313\3\2\2\2\u02b2\u02b3\7+\2\2\u02b3\u02b4\7d\2\2\u02b4\u02b5"+
		"\5N(\2\u02b5\u02b6\7f\2\2\u02b6\u0313\3\2\2\2\u02b7\u02b8\7,\2\2\u02b8"+
		"\u02b9\7d\2\2\u02b9\u02ba\5N(\2\u02ba\u02bb\7f\2\2\u02bb\u0313\3\2\2\2"+
		"\u02bc\u02bd\7-\2\2\u02bd\u02be\7d\2\2\u02be\u02bf\5N(\2\u02bf\u02c0\7"+
		"f\2\2\u02c0\u0313\3\2\2\2\u02c1\u02c2\7.\2\2\u02c2\u02c3\7d\2\2\u02c3"+
		"\u02c4\5N(\2\u02c4\u02c5\7f\2\2\u02c5\u0313\3\2\2\2\u02c6\u02c7\7/\2\2"+
		"\u02c7\u02c8\7d\2\2\u02c8\u02c9\5N(\2\u02c9\u02ca\7f\2\2\u02ca\u0313\3"+
		"\2\2\2\u02cb\u02cc\7\60\2\2\u02cc\u02cd\7d\2\2\u02cd\u02ce\5N(\2\u02ce"+
		"\u02cf\7f\2\2\u02cf\u0313\3\2\2\2\u02d0\u02d1\7\61\2\2\u02d1\u02d2\7d"+
		"\2\2\u02d2\u02d3\5N(\2\u02d3\u02d4\7f\2\2\u02d4\u0313\3\2\2\2\u02d5\u02d6"+
		"\7\62\2\2\u02d6\u02d7\7d\2\2\u02d7\u02d8\5N(\2\u02d8\u02d9\7f\2\2\u02d9"+
		"\u0313\3\2\2\2\u02da\u02db\7\63\2\2\u02db\u02dc\7d\2\2\u02dc\u02dd\5N"+
		"(\2\u02dd\u02de\7f\2\2\u02de\u0313\3\2\2\2\u02df\u02e0\7\64\2\2\u02e0"+
		"\u02e1\7d\2\2\u02e1\u02e2\5N(\2\u02e2\u02e3\7f\2\2\u02e3\u0313\3\2\2\2"+
		"\u02e4\u02e5\7\65\2\2\u02e5\u02e6\7d\2\2\u02e6\u02e7\5N(\2\u02e7\u02e8"+
		"\7f\2\2\u02e8\u0313\3\2\2\2\u02e9\u02ea\7)\2\2\u02ea\u02eb\7d\2\2\u02eb"+
		"\u02ec\5N(\2\u02ec\u02ed\7f\2\2\u02ed\u0313\3\2\2\2\u02ee\u02ef\7\66\2"+
		"\2\u02ef\u02f0\7d\2\2\u02f0\u02f1\5N(\2\u02f1\u02f2\7f\2\2\u02f2\u0313"+
		"\3\2\2\2\u02f3\u02f4\7\67\2\2\u02f4\u02f5\7d\2\2\u02f5\u02f6\5J&\2\u02f6"+
		"\u02f7\7f\2\2\u02f7\u0313\3\2\2\2\u02f8\u02f9\78\2\2\u02f9\u02fa\7d\2"+
		"\2\u02fa\u02fb\5J&\2\u02fb\u02fc\7f\2\2\u02fc\u0313\3\2\2\2\u02fd\u02fe"+
		"\79\2\2\u02fe\u02ff\7d\2\2\u02ff\u0300\5J&\2\u0300\u0301\7b\2\2\u0301"+
		"\u0302\5J&\2\u0302\u0303\7f\2\2\u0303\u0313\3\2\2\2\u0304\u0305\79\2\2"+
		"\u0305\u0306\7d\2\2\u0306\u0307\5J&\2\u0307\u0308\7b\2\2\u0308\u0309\5"+
		"J&\2\u0309\u030a\7b\2\2\u030a\u030b\5N(\2\u030b\u030c\7f\2\2\u030c\u0313"+
		"\3\2\2\2\u030d\u030e\7:\2\2\u030e\u030f\7d\2\2\u030f\u0310\5J&\2\u0310"+
		"\u0311\7f\2\2\u0311\u0313\3\2\2\2\u0312\u02a3\3\2\2\2\u0312\u02a4\3\2"+
		"\2\2\u0312\u02a5\3\2\2\2\u0312\u02a6\3\2\2\2\u0312\u02a7\3\2\2\2\u0312"+
		"\u02a8\3\2\2\2\u0312\u02ad\3\2\2\2\u0312\u02b2\3\2\2\2\u0312\u02b7\3\2"+
		"\2\2\u0312\u02bc\3\2\2\2\u0312\u02c1\3\2\2\2\u0312\u02c6\3\2\2\2\u0312"+
		"\u02cb\3\2\2\2\u0312\u02d0\3\2\2\2\u0312\u02d5\3\2\2\2\u0312\u02da\3\2"+
		"\2\2\u0312\u02df\3\2\2\2\u0312\u02e4\3\2\2\2\u0312\u02e9\3\2\2\2\u0312"+
		"\u02ee\3\2\2\2\u0312\u02f3\3\2\2\2\u0312\u02f8\3\2\2\2\u0312\u02fd\3\2"+
		"\2\2\u0312\u0304\3\2\2\2\u0312\u030d\3\2\2\2\u0313M\3\2\2\2\u0314\u0315"+
		"\b(\1\2\u0315\u0323\5<\37\2\u0316\u0323\5\32\16\2\u0317\u0323\5L\'\2\u0318"+
		"\u0319\7K\2\2\u0319\u0323\5N(\22\u031a\u031b\7d\2\2\u031b\u031c\5N(\2"+
		"\u031c\u031d\7f\2\2\u031d\u0323\3\2\2\2\u031e\u031f\5J&\2\u031f\u0320"+
		"\5P)\2\u0320\u0321\5J&\2\u0321\u0323\3\2\2\2\u0322\u0314\3\2\2\2\u0322"+
		"\u0316\3\2\2\2\u0322\u0317\3\2\2\2\u0322\u0318\3\2\2\2\u0322\u031a\3\2"+
		"\2\2\u0322\u031e\3\2\2\2\u0323\u034e\3\2\2\2\u0324\u0325\f\20\2\2\u0325"+
		"\u0326\7Q\2\2\u0326\u034d\5N(\20\u0327\u0328\f\17\2\2\u0328\u0329\7T\2"+
		"\2\u0329\u034d\5N(\20\u032a\u032b\f\16\2\2\u032b\u032c\7U\2\2\u032c\u034d"+
		"\5N(\17\u032d\u032e\f\r\2\2\u032e\u032f\7P\2\2\u032f\u034d\5N(\16\u0330"+
		"\u0331\f\f\2\2\u0331\u0332\7O\2\2\u0332\u034d\5N(\r\u0333\u0334\f\13\2"+
		"\2\u0334\u0335\7R\2\2\u0335\u034d\5N(\f\u0336\u0337\f\n\2\2\u0337\u0338"+
		"\7S\2\2\u0338\u034d\5N(\13\u0339\u033a\f\t\2\2\u033a\u033b\5P)\2\u033b"+
		"\u033c\5N(\n\u033c\u034d\3\2\2\2\u033d\u033e\f\7\2\2\u033e\u033f\7V\2"+
		"\2\u033f\u034d\5N(\b\u0340\u0341\f\6\2\2\u0341\u0342\7W\2\2\u0342\u034d"+
		"\5N(\7\u0343\u0344\f\5\2\2\u0344\u0345\7L\2\2\u0345\u034d\5N(\6\u0346"+
		"\u0347\f\4\2\2\u0347\u0348\7M\2\2\u0348\u034d\5N(\5\u0349\u034a\f\3\2"+
		"\2\u034a\u034b\7N\2\2\u034b\u034d\5N(\4\u034c\u0324\3\2\2\2\u034c\u0327"+
		"\3\2\2\2\u034c\u032a\3\2\2\2\u034c\u032d\3\2\2\2\u034c\u0330\3\2\2\2\u034c"+
		"\u0333\3\2\2\2\u034c\u0336\3\2\2\2\u034c\u0339\3\2\2\2\u034c\u033d\3\2"+
		"\2\2\u034c\u0340\3\2\2\2\u034c\u0343\3\2\2\2\u034c\u0346\3\2\2\2\u034c"+
		"\u0349\3\2\2\2\u034d\u0350\3\2\2\2\u034e\u034c\3\2\2\2\u034e\u034f\3\2"+
		"\2\2\u034fO\3\2\2\2\u0350\u034e\3\2\2\2\u0351\u0358\7E\2\2\u0352\u0358"+
		"\7F\2\2\u0353\u0358\7G\2\2\u0354\u0358\7H\2\2\u0355\u0358\7I\2\2\u0356"+
		"\u0358\7J\2\2\u0357\u0351\3\2\2\2\u0357\u0352\3\2\2\2\u0357\u0353\3\2"+
		"\2\2\u0357\u0354\3\2\2\2\u0357\u0355\3\2\2\2\u0357\u0356\3\2\2\2\u0358"+
		"Q\3\2\2\2RUdimquz\u0087\u008b\u0097\u00a0\u00a6\u00aa\u00b0\u00b4\u00bd"+
		"\u00c1\u00c9\u00d0\u00d5\u00da\u00df\u00e7\u00eb\u00ee\u00f0\u00fc\u010a"+
		"\u0114\u0119\u011e\u0127\u0135\u013e\u0148\u014d\u0155\u015f\u0164\u016e"+
		"\u0174\u017d\u0183\u019b\u01a1\u01a7\u01aa\u01b2\u01b8\u01c4\u01c9\u01d9"+
		"\u01df\u01eb\u01f4\u01fe\u0202\u0207\u020c\u0214\u021c\u0220\u022a\u022f"+
		"\u0232\u0235\u023a\u023e\u0243\u0249\u024c\u0255\u0291\u0299\u02a0\u0312"+
		"\u0322\u034c\u034e\u0357";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}