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
		ENDIF=10, ENDFN=11, ENDPROC=12, ENDWHILE=13, FOR=14, FN=15, IF=16, IN=17, 
		INPUT=18, GLOBAL=19, LOCAL=20, LET=21, NEXT=22, OF=23, OTHERWISE=24, PRINT=25, 
		PROC=26, READ=27, REM=28, REPEAT=29, RESTORE=30, RETURN=31, SPC=32, STEP=33, 
		THEN=34, TO=35, TRACEON=36, TRACEOFF=37, TYPE=38, UNTIL=39, WHEN=40, WHILE=41, 
		TIME=42, PI=43, SQR=44, LN=45, LOG=46, EXP=47, ATN=48, TAN=49, COS=50, 
		SIN=51, ABS=52, ACS=53, ASN=54, DEG=55, RAD=56, SGN=57, ASC=58, LEN=59, 
		INSTR=60, VAL=61, TIMES=62, STRS=63, STRINGS=64, CHRS=65, LEFTS=66, MIDS=67, 
		RIGHTS=68, RND=69, RND0=70, RND1=71, EQ=72, NE=73, GT=74, GE=75, LT=76, 
		LE=77, NOT=78, AND=79, OR=80, EOR=81, MOD=82, DIV=83, HAT=84, PLUS=85, 
		MINUS=86, MULTIPLY=87, DIVIDE=88, SHL=89, SHR=90, PLUS_E=91, MINUS_E=92, 
		MULTIPLY_E=93, DIVIDE_E=94, SHL_E=95, SHR_E=96, NEWLINE=97, TICK=98, TILDE=99, 
		COLON=100, COMMA=101, DOLLAR=102, LPAREN=103, PERCENT=104, RPAREN=105, 
		SEMICOLON=106, UNDERSCORE=107, COMMENT=108, STRINGLITERAL=109, PROC_NAME=110, 
		FN_INTEGER=111, FN_FLOAT=112, FN_STRING=113, VARIABLE_FLOAT=114, VARIABLE_INTEGER=115, 
		VARIABLE_STRING=116, VARIABLE_TYPE=117, NAME=118, HEXNUMBER=119, BINARYNUMBER=120, 
		NUMBER=121, FLOAT=122, ALPHA=123, DIGIT=124, WS=125;
	public static final int
		RULE_prog = 0, RULE_line = 1, RULE_content = 2, RULE_body = 3, RULE_bodyStar = 4, 
		RULE_linenumber = 5, RULE_stmt = 6, RULE_when = 7, RULE_fnName = 8, RULE_literal = 9, 
		RULE_var = 10, RULE_typeVar = 11, RULE_numVar = 12, RULE_strVar = 13, 
		RULE_justVar = 14, RULE_justNumberVar = 15, RULE_varName = 16, RULE_varNameInteger = 17, 
		RULE_varNameString = 18, RULE_varNameType = 19, RULE_varDecl = 20, RULE_varDeclWithDimension = 21, 
		RULE_varList = 22, RULE_functionVarList = 23, RULE_functionParList = 24, 
		RULE_exprList = 25, RULE_printListItem = 26, RULE_printStartingTicks = 27, 
		RULE_printList = 28, RULE_expr = 29, RULE_number = 30, RULE_numberInteger = 31, 
		RULE_numberHex = 32, RULE_numberBinary = 33, RULE_numberFloat = 34, RULE_strFunc = 35, 
		RULE_string = 36, RULE_strExpr = 37, RULE_numFunc = 38, RULE_numExpr = 39, 
		RULE_compare = 40;
	private static String[] makeRuleNames() {
		return new String[] {
			"prog", "line", "content", "body", "bodyStar", "linenumber", "stmt", 
			"when", "fnName", "literal", "var", "typeVar", "numVar", "strVar", "justVar", 
			"justNumberVar", "varName", "varNameInteger", "varNameString", "varNameType", 
			"varDecl", "varDeclWithDimension", "varList", "functionVarList", "functionParList", 
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
			null, null, null, null, null, null, null, null, null, null, null, null, 
			"'='", "'<>'", "'>'", "'>='", "'<'", "'<='", null, null, null, null, 
			null, null, "'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", "'>>'", "'+='", 
			"'-='", "'*='", "'/='", "'<<='", "'>>='", null, "'''", "'~'", "':'", 
			"','", "'$'", "'('", "'%'", "')'", "';'", "'_'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "BREAKPOINT", "CASE", "CHAIN", "DATA", "DEF", "DIM", "ELSE", "END", 
			"ENDCASE", "ENDIF", "ENDFN", "ENDPROC", "ENDWHILE", "FOR", "FN", "IF", 
			"IN", "INPUT", "GLOBAL", "LOCAL", "LET", "NEXT", "OF", "OTHERWISE", "PRINT", 
			"PROC", "READ", "REM", "REPEAT", "RESTORE", "RETURN", "SPC", "STEP", 
			"THEN", "TO", "TRACEON", "TRACEOFF", "TYPE", "UNTIL", "WHEN", "WHILE", 
			"TIME", "PI", "SQR", "LN", "LOG", "EXP", "ATN", "TAN", "COS", "SIN", 
			"ABS", "ACS", "ASN", "DEG", "RAD", "SGN", "ASC", "LEN", "INSTR", "VAL", 
			"TIMES", "STRS", "STRINGS", "CHRS", "LEFTS", "MIDS", "RIGHTS", "RND", 
			"RND0", "RND1", "EQ", "NE", "GT", "GE", "LT", "LE", "NOT", "AND", "OR", 
			"EOR", "MOD", "DIV", "HAT", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "SHL", 
			"SHR", "PLUS_E", "MINUS_E", "MULTIPLY_E", "DIVIDE_E", "SHL_E", "SHR_E", 
			"NEWLINE", "TICK", "TILDE", "COLON", "COMMA", "DOLLAR", "LPAREN", "PERCENT", 
			"RPAREN", "SEMICOLON", "UNDERSCORE", "COMMENT", "STRINGLITERAL", "PROC_NAME", 
			"FN_INTEGER", "FN_FLOAT", "FN_STRING", "VARIABLE_FLOAT", "VARIABLE_INTEGER", 
			"VARIABLE_STRING", "VARIABLE_TYPE", "NAME", "HEXNUMBER", "BINARYNUMBER", 
			"NUMBER", "FLOAT", "ALPHA", "DIGIT", "WS"
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
			setState(85);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE))) != 0) || ((((_la - 72)) & ~0x3f) == 0 && ((1L << (_la - 72)) & ((1L << (EQ - 72)) | (1L << (NEWLINE - 72)) | (1L << (COLON - 72)) | (1L << (COMMENT - 72)) | (1L << (PROC_NAME - 72)) | (1L << (FN_INTEGER - 72)) | (1L << (FN_FLOAT - 72)) | (1L << (FN_STRING - 72)) | (1L << (VARIABLE_FLOAT - 72)) | (1L << (VARIABLE_INTEGER - 72)) | (1L << (VARIABLE_STRING - 72)) | (1L << (VARIABLE_TYPE - 72)) | (1L << (NUMBER - 72)))) != 0)) {
				{
				{
				setState(82);
				line();
				}
				}
				setState(87);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(88);
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
			setState(100);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NEWLINE:
				enterOuterAlt(_localctx, 1);
				{
				setState(90);
				match(NEWLINE);
				}
				break;
			case COLON:
				enterOuterAlt(_localctx, 2);
				{
				setState(91);
				match(COLON);
				setState(92);
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
				setState(93);
				content();
				setState(94);
				match(NEWLINE);
				}
				break;
			case NUMBER:
				enterOuterAlt(_localctx, 4);
				{
				setState(96);
				linenumber();
				setState(97);
				content();
				setState(98);
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
			setState(113);
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
				setState(102);
				stmt();
				setState(109);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(103);
						match(COLON);
						setState(105);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
						case 1:
							{
							setState(104);
							stmt();
							}
							break;
						}
						}
						} 
					}
					setState(111);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
				}
				}
				}
				break;
			case REM:
			case COMMENT:
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
			setState(117);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(115);
				content();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(116);
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
			setState(122);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE))) != 0) || ((((_la - 72)) & ~0x3f) == 0 && ((1L << (_la - 72)) & ((1L << (EQ - 72)) | (1L << (NEWLINE - 72)) | (1L << (COLON - 72)) | (1L << (COMMENT - 72)) | (1L << (PROC_NAME - 72)) | (1L << (FN_INTEGER - 72)) | (1L << (FN_FLOAT - 72)) | (1L << (FN_STRING - 72)) | (1L << (VARIABLE_FLOAT - 72)) | (1L << (VARIABLE_INTEGER - 72)) | (1L << (VARIABLE_STRING - 72)) | (1L << (VARIABLE_TYPE - 72)) | (1L << (NUMBER - 72)))) != 0)) {
				{
				{
				setState(119);
				body();
				}
				}
				setState(124);
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
			setState(125);
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
			setState(361);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
			case 1:
				_localctx = new StmtBREAKPOINTContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(127);
				match(BREAKPOINT);
				}
				break;
			case 2:
				_localctx = new StmtCASEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(128);
				match(CASE);
				setState(129);
				expr();
				setState(130);
				match(OF);
				setState(131);
				match(NEWLINE);
				setState(133); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(132);
					when();
					}
					}
					setState(135); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==WHEN );
				setState(139);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==OTHERWISE) {
					{
					setState(137);
					match(OTHERWISE);
					setState(138);
					bodyStar();
					}
				}

				setState(141);
				match(ENDCASE);
				}
				break;
			case 3:
				_localctx = new StmtCHAINContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(143);
				match(CHAIN);
				setState(144);
				strExpr(0);
				}
				break;
			case 4:
				_localctx = new StmtDATAContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(145);
				match(DATA);
				setState(146);
				literal();
				setState(151);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(147);
					match(COMMA);
					setState(148);
					literal();
					}
					}
					setState(153);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 5:
				_localctx = new StmtDIMContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(154);
				match(DIM);
				setState(155);
				varDeclWithDimension();
				setState(160);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(156);
					match(COMMA);
					setState(157);
					varDeclWithDimension();
					}
					}
					setState(162);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 6:
				_localctx = new StmtENDContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(163);
				match(END);
				}
				break;
			case 7:
				_localctx = new StmtRETURNContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(164);
				match(EQ);
				setState(166);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
				case 1:
					{
					setState(165);
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
				setState(168);
				match(RETURN);
				setState(170);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
				case 1:
					{
					setState(169);
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
				setState(172);
				match(DEF);
				setState(173);
				fnName();
				setState(174);
				match(LPAREN);
				setState(176);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN || ((((_la - 114)) & ~0x3f) == 0 && ((1L << (_la - 114)) & ((1L << (VARIABLE_FLOAT - 114)) | (1L << (VARIABLE_INTEGER - 114)) | (1L << (VARIABLE_STRING - 114)))) != 0)) {
					{
					setState(175);
					functionVarList();
					}
				}

				setState(178);
				match(RPAREN);
				setState(180);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
				case 1:
					{
					setState(179);
					match(COLON);
					}
					break;
				}
				setState(182);
				bodyStar();
				setState(183);
				match(ENDFN);
				}
				break;
			case 10:
				_localctx = new StmtDEFPROCContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(185);
				match(DEF);
				setState(186);
				match(PROC_NAME);
				setState(187);
				match(LPAREN);
				setState(189);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN || ((((_la - 114)) & ~0x3f) == 0 && ((1L << (_la - 114)) & ((1L << (VARIABLE_FLOAT - 114)) | (1L << (VARIABLE_INTEGER - 114)) | (1L << (VARIABLE_STRING - 114)))) != 0)) {
					{
					setState(188);
					functionVarList();
					}
				}

				setState(191);
				match(RPAREN);
				setState(193);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
				case 1:
					{
					setState(192);
					match(COLON);
					}
					break;
				}
				setState(195);
				bodyStar();
				setState(196);
				match(ENDPROC);
				}
				break;
			case 11:
				_localctx = new StmtFORContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(198);
				match(FOR);
				setState(200);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LOCAL) {
					{
					setState(199);
					match(LOCAL);
					}
				}

				setState(202);
				justNumberVar();
				setState(203);
				match(EQ);
				setState(204);
				numExpr(0);
				setState(205);
				match(TO);
				setState(206);
				numExpr(0);
				setState(209);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==STEP) {
					{
					setState(207);
					match(STEP);
					setState(208);
					numExpr(0);
					}
				}

				setState(211);
				bodyStar();
				setState(212);
				match(NEXT);
				}
				break;
			case 12:
				_localctx = new StmtFORINContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(214);
				match(FOR);
				setState(216);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LOCAL) {
					{
					setState(215);
					match(LOCAL);
					}
				}

				setState(218);
				justVar();
				setState(219);
				match(IN);
				setState(220);
				justVar();
				setState(221);
				match(LPAREN);
				setState(222);
				match(RPAREN);
				setState(223);
				bodyStar();
				setState(224);
				match(NEXT);
				}
				break;
			case 13:
				_localctx = new StmtCallFNContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(226);
				fnName();
				setState(227);
				match(LPAREN);
				setState(229);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL) | (1L << TIMES) | (1L << STRS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)) | (1L << (NOT - 64)) | (1L << (PLUS - 64)) | (1L << (MINUS - 64)) | (1L << (LPAREN - 64)) | (1L << (STRINGLITERAL - 64)) | (1L << (FN_INTEGER - 64)) | (1L << (FN_FLOAT - 64)) | (1L << (FN_STRING - 64)) | (1L << (VARIABLE_FLOAT - 64)) | (1L << (VARIABLE_INTEGER - 64)) | (1L << (VARIABLE_STRING - 64)) | (1L << (VARIABLE_TYPE - 64)) | (1L << (HEXNUMBER - 64)) | (1L << (BINARYNUMBER - 64)) | (1L << (NUMBER - 64)) | (1L << (FLOAT - 64)))) != 0)) {
					{
					setState(228);
					functionParList();
					}
				}

				setState(231);
				match(RPAREN);
				}
				break;
			case 14:
				_localctx = new StmtIFContext(_localctx);
				enterOuterAlt(_localctx, 14);
				{
				setState(233);
				match(IF);
				setState(234);
				expr();
				setState(236);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==THEN) {
					{
					setState(235);
					match(THEN);
					}
				}

				setState(238);
				((StmtIFContext)_localctx).t = content();
				setState(241);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
				case 1:
					{
					setState(239);
					match(ELSE);
					setState(240);
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
				setState(243);
				match(IF);
				setState(244);
				expr();
				setState(246);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==THEN) {
					{
					setState(245);
					match(THEN);
					}
				}

				setState(248);
				((StmtIFMultilineContext)_localctx).t = bodyStar();
				setState(251);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ELSE) {
					{
					setState(249);
					match(ELSE);
					setState(250);
					((StmtIFMultilineContext)_localctx).f = bodyStar();
					}
				}

				setState(253);
				match(ENDIF);
				}
				break;
			case 16:
				_localctx = new StmtINPUTContext(_localctx);
				enterOuterAlt(_localctx, 16);
				{
				setState(255);
				match(INPUT);
				setState(259);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
				case 1:
					{
					setState(256);
					strExpr(0);
					setState(257);
					match(COMMA);
					}
					break;
				}
				setState(261);
				varList();
				}
				break;
			case 17:
				_localctx = new StmtLETContext(_localctx);
				enterOuterAlt(_localctx, 17);
				{
				setState(268);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
				case 1:
					{
					setState(263);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==LET) {
						{
						setState(262);
						match(LET);
						}
					}

					}
					break;
				case 2:
					{
					setState(266);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==GLOBAL) {
						{
						setState(265);
						match(GLOBAL);
						}
					}

					}
					break;
				}
				setState(270);
				varDecl();
				setState(271);
				match(EQ);
				setState(272);
				expr();
				setState(280);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(273);
					match(COMMA);
					setState(274);
					varDecl();
					setState(275);
					match(EQ);
					setState(276);
					expr();
					}
					}
					setState(282);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 18:
				_localctx = new StmtLOCALContext(_localctx);
				enterOuterAlt(_localctx, 18);
				{
				setState(283);
				match(LOCAL);
				setState(284);
				varDecl();
				setState(285);
				match(EQ);
				setState(286);
				expr();
				setState(294);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(287);
					match(COMMA);
					setState(288);
					varDecl();
					setState(289);
					match(EQ);
					setState(290);
					expr();
					}
					}
					setState(296);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 19:
				_localctx = new StmtLOCALDIMContext(_localctx);
				enterOuterAlt(_localctx, 19);
				{
				setState(297);
				match(LOCAL);
				setState(298);
				match(DIM);
				setState(299);
				varDeclWithDimension();
				setState(304);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(300);
					match(COMMA);
					setState(301);
					varDeclWithDimension();
					}
					}
					setState(306);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 20:
				_localctx = new StmtPRINTContext(_localctx);
				enterOuterAlt(_localctx, 20);
				{
				setState(307);
				match(PRINT);
				setState(309);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
				case 1:
					{
					setState(308);
					printList();
					}
					break;
				}
				}
				break;
			case 21:
				_localctx = new StmtCallPROCContext(_localctx);
				enterOuterAlt(_localctx, 21);
				{
				setState(311);
				match(PROC_NAME);
				setState(312);
				match(LPAREN);
				setState(314);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL) | (1L << TIMES) | (1L << STRS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)) | (1L << (NOT - 64)) | (1L << (PLUS - 64)) | (1L << (MINUS - 64)) | (1L << (LPAREN - 64)) | (1L << (STRINGLITERAL - 64)) | (1L << (FN_INTEGER - 64)) | (1L << (FN_FLOAT - 64)) | (1L << (FN_STRING - 64)) | (1L << (VARIABLE_FLOAT - 64)) | (1L << (VARIABLE_INTEGER - 64)) | (1L << (VARIABLE_STRING - 64)) | (1L << (VARIABLE_TYPE - 64)) | (1L << (HEXNUMBER - 64)) | (1L << (BINARYNUMBER - 64)) | (1L << (NUMBER - 64)) | (1L << (FLOAT - 64)))) != 0)) {
					{
					setState(313);
					functionParList();
					}
				}

				setState(316);
				match(RPAREN);
				}
				break;
			case 22:
				_localctx = new StmtREADContext(_localctx);
				enterOuterAlt(_localctx, 22);
				{
				setState(317);
				match(READ);
				setState(318);
				varDecl();
				setState(323);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(319);
					match(COMMA);
					setState(320);
					varDecl();
					}
					}
					setState(325);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 23:
				_localctx = new StmtRESTOREContext(_localctx);
				enterOuterAlt(_localctx, 23);
				{
				setState(326);
				match(RESTORE);
				}
				break;
			case 24:
				_localctx = new StmtTRACEONContext(_localctx);
				enterOuterAlt(_localctx, 24);
				{
				setState(327);
				match(TRACEON);
				}
				break;
			case 25:
				_localctx = new StmtTRACEOFFContext(_localctx);
				enterOuterAlt(_localctx, 25);
				{
				setState(328);
				match(TRACEOFF);
				}
				break;
			case 26:
				_localctx = new StmtTYPEContext(_localctx);
				enterOuterAlt(_localctx, 26);
				{
				setState(329);
				match(TYPE);
				setState(330);
				varName();
				setState(331);
				match(LPAREN);
				setState(332);
				justVar();
				setState(337);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(333);
					match(COMMA);
					setState(334);
					justVar();
					}
					}
					setState(339);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(340);
				match(RPAREN);
				}
				break;
			case 27:
				_localctx = new StmtREPEATContext(_localctx);
				enterOuterAlt(_localctx, 27);
				{
				setState(342);
				match(REPEAT);
				setState(346);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE))) != 0) || ((((_la - 72)) & ~0x3f) == 0 && ((1L << (_la - 72)) & ((1L << (EQ - 72)) | (1L << (NEWLINE - 72)) | (1L << (COLON - 72)) | (1L << (COMMENT - 72)) | (1L << (PROC_NAME - 72)) | (1L << (FN_INTEGER - 72)) | (1L << (FN_FLOAT - 72)) | (1L << (FN_STRING - 72)) | (1L << (VARIABLE_FLOAT - 72)) | (1L << (VARIABLE_INTEGER - 72)) | (1L << (VARIABLE_STRING - 72)) | (1L << (VARIABLE_TYPE - 72)) | (1L << (NUMBER - 72)))) != 0)) {
					{
					{
					setState(343);
					body();
					}
					}
					setState(348);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(349);
				match(UNTIL);
				setState(350);
				expr();
				}
				break;
			case 28:
				_localctx = new StmtWHILEContext(_localctx);
				enterOuterAlt(_localctx, 28);
				{
				setState(351);
				match(WHILE);
				setState(352);
				expr();
				setState(356);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CASE) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << FOR) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE))) != 0) || ((((_la - 72)) & ~0x3f) == 0 && ((1L << (_la - 72)) & ((1L << (EQ - 72)) | (1L << (NEWLINE - 72)) | (1L << (COLON - 72)) | (1L << (COMMENT - 72)) | (1L << (PROC_NAME - 72)) | (1L << (FN_INTEGER - 72)) | (1L << (FN_FLOAT - 72)) | (1L << (FN_STRING - 72)) | (1L << (VARIABLE_FLOAT - 72)) | (1L << (VARIABLE_INTEGER - 72)) | (1L << (VARIABLE_STRING - 72)) | (1L << (VARIABLE_TYPE - 72)) | (1L << (NUMBER - 72)))) != 0)) {
					{
					{
					setState(353);
					body();
					}
					}
					setState(358);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(359);
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
			setState(363);
			match(WHEN);
			setState(364);
			expr();
			setState(369);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(365);
				match(COMMA);
				setState(366);
				expr();
				}
				}
				setState(371);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(372);
			match(COLON);
			setState(373);
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
			setState(375);
			_la = _input.LA(1);
			if ( !(((((_la - 111)) & ~0x3f) == 0 && ((1L << (_la - 111)) & ((1L << (FN_INTEGER - 111)) | (1L << (FN_FLOAT - 111)) | (1L << (FN_STRING - 111)))) != 0)) ) {
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
			setState(379);
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
				setState(377);
				number();
				}
				break;
			case STRINGLITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(378);
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
			setState(384);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,41,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(381);
				numVar();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(382);
				strVar();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(383);
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
			setState(386);
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
			setState(454);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,49,_ctx) ) {
			case 1:
				_localctx = new NumVarFloatContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(388);
				varName();
				}
				break;
			case 2:
				_localctx = new NumVarFloatArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(389);
				varName();
				setState(400);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,43,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(390);
						match(LPAREN);
						setState(391);
						numExpr(0);
						setState(394);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(392);
							match(COMMA);
							setState(393);
							numExpr(0);
							}
						}

						setState(396);
						match(RPAREN);
						}
						} 
					}
					setState(402);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,43,_ctx);
				}
				}
				break;
			case 3:
				_localctx = new NumVarIntegerContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(403);
				varNameInteger();
				}
				break;
			case 4:
				_localctx = new NumVarIntegerArrayContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(404);
				varNameInteger();
				setState(415);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,45,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(405);
						match(LPAREN);
						setState(406);
						numExpr(0);
						setState(409);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(407);
							match(COMMA);
							setState(408);
							numExpr(0);
							}
						}

						setState(411);
						match(RPAREN);
						}
						} 
					}
					setState(417);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,45,_ctx);
				}
				}
				break;
			case 5:
				_localctx = new NumVarFloatFieldContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(418);
				typeVar();
				setState(419);
				varName();
				}
				break;
			case 6:
				_localctx = new NumVarFloatFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(421);
				typeVar();
				setState(422);
				match(LPAREN);
				setState(423);
				numExpr(0);
				setState(424);
				match(RPAREN);
				setState(425);
				varName();
				}
				break;
			case 7:
				_localctx = new NumVarIntegerFieldContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(427);
				typeVar();
				setState(428);
				varNameInteger();
				}
				break;
			case 8:
				_localctx = new NumVarIntegerFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(430);
				typeVar();
				setState(431);
				match(LPAREN);
				setState(432);
				numExpr(0);
				setState(433);
				match(RPAREN);
				setState(434);
				varNameInteger();
				}
				break;
			case 9:
				_localctx = new NumVarFloatFNContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(436);
				match(FN_FLOAT);
				setState(437);
				match(LPAREN);
				setState(439);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL) | (1L << TIMES) | (1L << STRS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)) | (1L << (NOT - 64)) | (1L << (PLUS - 64)) | (1L << (MINUS - 64)) | (1L << (LPAREN - 64)) | (1L << (STRINGLITERAL - 64)) | (1L << (FN_INTEGER - 64)) | (1L << (FN_FLOAT - 64)) | (1L << (FN_STRING - 64)) | (1L << (VARIABLE_FLOAT - 64)) | (1L << (VARIABLE_INTEGER - 64)) | (1L << (VARIABLE_STRING - 64)) | (1L << (VARIABLE_TYPE - 64)) | (1L << (HEXNUMBER - 64)) | (1L << (BINARYNUMBER - 64)) | (1L << (NUMBER - 64)) | (1L << (FLOAT - 64)))) != 0)) {
					{
					setState(438);
					functionParList();
					}
				}

				setState(441);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new NumVarIntegerFNContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(442);
				match(FN_INTEGER);
				setState(443);
				match(LPAREN);
				setState(445);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL) | (1L << TIMES) | (1L << STRS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)) | (1L << (NOT - 64)) | (1L << (PLUS - 64)) | (1L << (MINUS - 64)) | (1L << (LPAREN - 64)) | (1L << (STRINGLITERAL - 64)) | (1L << (FN_INTEGER - 64)) | (1L << (FN_FLOAT - 64)) | (1L << (FN_STRING - 64)) | (1L << (VARIABLE_FLOAT - 64)) | (1L << (VARIABLE_INTEGER - 64)) | (1L << (VARIABLE_STRING - 64)) | (1L << (VARIABLE_TYPE - 64)) | (1L << (HEXNUMBER - 64)) | (1L << (BINARYNUMBER - 64)) | (1L << (NUMBER - 64)) | (1L << (FLOAT - 64)))) != 0)) {
					{
					setState(444);
					functionParList();
					}
				}

				setState(447);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new NumVarStringFNContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(448);
				match(FN_STRING);
				setState(449);
				match(LPAREN);
				setState(451);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL) | (1L << TIMES) | (1L << STRS))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (STRINGS - 64)) | (1L << (CHRS - 64)) | (1L << (LEFTS - 64)) | (1L << (MIDS - 64)) | (1L << (RIGHTS - 64)) | (1L << (RND - 64)) | (1L << (RND0 - 64)) | (1L << (RND1 - 64)) | (1L << (NOT - 64)) | (1L << (PLUS - 64)) | (1L << (MINUS - 64)) | (1L << (LPAREN - 64)) | (1L << (STRINGLITERAL - 64)) | (1L << (FN_INTEGER - 64)) | (1L << (FN_FLOAT - 64)) | (1L << (FN_STRING - 64)) | (1L << (VARIABLE_FLOAT - 64)) | (1L << (VARIABLE_INTEGER - 64)) | (1L << (VARIABLE_STRING - 64)) | (1L << (VARIABLE_TYPE - 64)) | (1L << (HEXNUMBER - 64)) | (1L << (BINARYNUMBER - 64)) | (1L << (NUMBER - 64)) | (1L << (FLOAT - 64)))) != 0)) {
					{
					setState(450);
					functionParList();
					}
				}

				setState(453);
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
			setState(480);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,52,_ctx) ) {
			case 1:
				_localctx = new NumVarStringContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(456);
				varNameString();
				}
				break;
			case 2:
				_localctx = new NumVarStringArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(457);
				varNameString();
				setState(468);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,51,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(458);
						match(LPAREN);
						setState(459);
						numExpr(0);
						setState(462);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(460);
							match(COMMA);
							setState(461);
							numExpr(0);
							}
						}

						setState(464);
						match(RPAREN);
						}
						} 
					}
					setState(470);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,51,_ctx);
				}
				}
				break;
			case 3:
				_localctx = new NumVarStringFieldContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(471);
				typeVar();
				setState(472);
				varNameString();
				}
				break;
			case 4:
				_localctx = new NumVarStringFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(474);
				typeVar();
				setState(475);
				match(LPAREN);
				setState(476);
				numExpr(0);
				setState(477);
				match(RPAREN);
				setState(478);
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
			setState(485);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(482);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(483);
				varNameInteger();
				}
				break;
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(484);
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
			setState(489);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(487);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(488);
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
			setState(491);
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
			setState(493);
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
			setState(495);
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
			setState(497);
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
		enterRule(_localctx, 40, RULE_varDecl);
		int _la;
		try {
			setState(523);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,57,_ctx) ) {
			case 1:
				_localctx = new VarDeclIndContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(499);
				var();
				}
				break;
			case 2:
				_localctx = new VarDeclArrayedContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(500);
				var();
				setState(511);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==LPAREN) {
					{
					{
					setState(501);
					match(LPAREN);
					setState(502);
					numExpr(0);
					setState(505);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==COMMA) {
						{
						setState(503);
						match(COMMA);
						setState(504);
						numExpr(0);
						}
					}

					setState(507);
					match(RPAREN);
					}
					}
					setState(513);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 3:
				_localctx = new VarDeclTypeContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(514);
				typeVar();
				setState(515);
				varName();
				}
				break;
			case 4:
				_localctx = new VarDeclTypeArrayedContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(517);
				typeVar();
				setState(518);
				match(LPAREN);
				setState(519);
				numExpr(0);
				setState(520);
				match(RPAREN);
				setState(521);
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
		enterRule(_localctx, 42, RULE_varDeclWithDimension);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(525);
			var();
			setState(526);
			match(LPAREN);
			setState(527);
			numExpr(0);
			setState(532);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(528);
				match(COMMA);
				setState(529);
				numExpr(0);
				}
				}
				setState(534);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(535);
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
			setState(537);
			varDecl();
			setState(542);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(538);
				match(COMMA);
				setState(539);
				varDecl();
				}
				}
				setState(544);
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
			setState(546);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN) {
				{
				setState(545);
				match(RETURN);
				}
			}

			setState(548);
			justVar();
			setState(556);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(549);
				match(COMMA);
				setState(551);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN) {
					{
					setState(550);
					match(RETURN);
					}
				}

				setState(553);
				justVar();
				}
				}
				setState(558);
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
			setState(559);
			expr();
			setState(564);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(560);
				match(COMMA);
				setState(561);
				expr();
				}
				}
				setState(566);
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
			setState(567);
			expr();
			setState(572);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(568);
				match(COMMA);
				setState(569);
				expr();
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
			setState(586);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,66,_ctx) ) {
			case 1:
				_localctx = new PrintListExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(576);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TILDE) {
					{
					setState(575);
					match(TILDE);
					}
				}

				setState(578);
				expr();
				}
				break;
			case 2:
				_localctx = new PrintListSPCPContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(579);
				match(SPC);
				setState(580);
				match(LPAREN);
				setState(581);
				numExpr(0);
				setState(582);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new PrintListSPCContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(584);
				match(SPC);
				setState(585);
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
		enterRule(_localctx, 54, RULE_printStartingTicks);
		int _la;
		try {
			_localctx = new PrintListTickContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(589); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(588);
				match(TICK);
				}
				}
				setState(591); 
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
		enterRule(_localctx, 56, RULE_printList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(594);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TICK) {
				{
				setState(593);
				printStartingTicks();
				}
			}

			setState(597);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(596);
				match(COMMA);
				}
			}

			setState(599);
			printListItem();
			setState(606);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 98)) & ~0x3f) == 0 && ((1L << (_la - 98)) & ((1L << (TICK - 98)) | (1L << (COMMA - 98)) | (1L << (SEMICOLON - 98)))) != 0)) {
				{
				{
				setState(600);
				_la = _input.LA(1);
				if ( !(((((_la - 98)) & ~0x3f) == 0 && ((1L << (_la - 98)) & ((1L << (TICK - 98)) | (1L << (COMMA - 98)) | (1L << (SEMICOLON - 98)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(602);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,70,_ctx) ) {
				case 1:
					{
					setState(601);
					printListItem();
					}
					break;
				}
				}
				}
				setState(608);
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
		enterRule(_localctx, 58, RULE_expr);
		try {
			setState(611);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,72,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(609);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(610);
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
		enterRule(_localctx, 60, RULE_number);
		try {
			setState(617);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,73,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(613);
				numberInteger();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(614);
				numberFloat();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(615);
				numberHex();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(616);
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
		enterRule(_localctx, 62, RULE_numberInteger);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(620);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(619);
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

			setState(622);
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
		enterRule(_localctx, 64, RULE_numberHex);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(624);
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
		enterRule(_localctx, 66, RULE_numberBinary);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(626);
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
		enterRule(_localctx, 68, RULE_numberFloat);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(629);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(628);
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

			setState(631);
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
		enterRule(_localctx, 70, RULE_strFunc);
		try {
			setState(689);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,76,_ctx) ) {
			case 1:
				_localctx = new StrFuncTIMESContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(633);
				match(TIMES);
				}
				break;
			case 2:
				_localctx = new StrFuncCHRSPContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(634);
				match(CHRS);
				setState(635);
				match(LPAREN);
				setState(636);
				numExpr(0);
				setState(637);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new StrFuncCHRSContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(639);
				match(CHRS);
				setState(640);
				numExpr(0);
				}
				break;
			case 4:
				_localctx = new StrFuncLEFTSContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(641);
				match(LEFTS);
				setState(642);
				match(LPAREN);
				setState(643);
				strExpr(0);
				setState(644);
				match(COMMA);
				setState(645);
				numExpr(0);
				setState(646);
				match(RPAREN);
				}
				break;
			case 5:
				_localctx = new StrFuncMIDS3Context(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(648);
				match(MIDS);
				setState(649);
				match(LPAREN);
				setState(650);
				strExpr(0);
				setState(651);
				match(COMMA);
				setState(652);
				numExpr(0);
				setState(653);
				match(COMMA);
				setState(654);
				numExpr(0);
				setState(655);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new StrFuncMIDS2Context(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(657);
				match(MIDS);
				setState(658);
				match(LPAREN);
				setState(659);
				strExpr(0);
				setState(660);
				match(COMMA);
				setState(661);
				numExpr(0);
				setState(662);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new StrFuncRIGHTSContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(664);
				match(RIGHTS);
				setState(665);
				match(LPAREN);
				setState(666);
				strExpr(0);
				setState(667);
				match(COMMA);
				setState(668);
				numExpr(0);
				setState(669);
				match(RPAREN);
				}
				break;
			case 8:
				_localctx = new StrFuncSTRSContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(671);
				match(STRS);
				setState(672);
				match(LPAREN);
				setState(673);
				numExpr(0);
				setState(674);
				match(RPAREN);
				}
				break;
			case 9:
				_localctx = new StrFuncSTRSHEXContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(676);
				match(STRS);
				setState(677);
				match(TILDE);
				setState(678);
				match(LPAREN);
				setState(679);
				numExpr(0);
				setState(680);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new StrFuncSTRINGSContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(682);
				match(STRINGS);
				setState(683);
				match(LPAREN);
				setState(684);
				numExpr(0);
				setState(685);
				match(COMMA);
				setState(686);
				strExpr(0);
				setState(687);
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
		enterRule(_localctx, 72, RULE_string);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(691);
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
		int _startState = 74;
		enterRecursionRule(_localctx, 74, RULE_strExpr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(697);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STRINGLITERAL:
				{
				setState(694);
				string();
				}
				break;
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(695);
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
				setState(696);
				strFunc();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(704);
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
					setState(699);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(700);
					match(PLUS);
					setState(701);
					strExpr(2);
					}
					} 
				}
				setState(706);
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
		enterRule(_localctx, 76, RULE_numFunc);
		try {
			setState(818);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,79,_ctx) ) {
			case 1:
				_localctx = new NumFuncPIContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(707);
				match(PI);
				}
				break;
			case 2:
				_localctx = new NumFuncTIMEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(708);
				match(TIME);
				}
				break;
			case 3:
				_localctx = new NumFuncRNDContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(709);
				match(RND);
				}
				break;
			case 4:
				_localctx = new NumFuncRND0Context(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(710);
				match(RND0);
				}
				break;
			case 5:
				_localctx = new NumFuncRND1Context(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(711);
				match(RND1);
				}
				break;
			case 6:
				_localctx = new NumFuncRNDRANGEContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(712);
				match(RND);
				setState(713);
				match(LPAREN);
				setState(714);
				numExpr(0);
				setState(715);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new NumFuncLNContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(717);
				match(LN);
				setState(718);
				match(LPAREN);
				setState(719);
				numExpr(0);
				setState(720);
				match(RPAREN);
				}
				break;
			case 8:
				_localctx = new NumFuncLOGContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(722);
				match(LOG);
				setState(723);
				match(LPAREN);
				setState(724);
				numExpr(0);
				setState(725);
				match(RPAREN);
				}
				break;
			case 9:
				_localctx = new NumFuncEXPContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(727);
				match(EXP);
				setState(728);
				match(LPAREN);
				setState(729);
				numExpr(0);
				setState(730);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new NumFuncATNContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(732);
				match(ATN);
				setState(733);
				match(LPAREN);
				setState(734);
				numExpr(0);
				setState(735);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new NumFuncTANContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(737);
				match(TAN);
				setState(738);
				match(LPAREN);
				setState(739);
				numExpr(0);
				setState(740);
				match(RPAREN);
				}
				break;
			case 12:
				_localctx = new NumFuncCOSContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(742);
				match(COS);
				setState(743);
				match(LPAREN);
				setState(744);
				numExpr(0);
				setState(745);
				match(RPAREN);
				}
				break;
			case 13:
				_localctx = new NumFuncSINContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(747);
				match(SIN);
				setState(748);
				match(LPAREN);
				setState(749);
				numExpr(0);
				setState(750);
				match(RPAREN);
				}
				break;
			case 14:
				_localctx = new NumFuncABSContext(_localctx);
				enterOuterAlt(_localctx, 14);
				{
				setState(752);
				match(ABS);
				setState(753);
				match(LPAREN);
				setState(754);
				numExpr(0);
				setState(755);
				match(RPAREN);
				}
				break;
			case 15:
				_localctx = new NumFuncACSContext(_localctx);
				enterOuterAlt(_localctx, 15);
				{
				setState(757);
				match(ACS);
				setState(758);
				match(LPAREN);
				setState(759);
				numExpr(0);
				setState(760);
				match(RPAREN);
				}
				break;
			case 16:
				_localctx = new NumFuncASNContext(_localctx);
				enterOuterAlt(_localctx, 16);
				{
				setState(762);
				match(ASN);
				setState(763);
				match(LPAREN);
				setState(764);
				numExpr(0);
				setState(765);
				match(RPAREN);
				}
				break;
			case 17:
				_localctx = new NumFuncDEGContext(_localctx);
				enterOuterAlt(_localctx, 17);
				{
				setState(767);
				match(DEG);
				setState(768);
				match(LPAREN);
				setState(769);
				numExpr(0);
				setState(770);
				match(RPAREN);
				}
				break;
			case 18:
				_localctx = new NumFuncRADContext(_localctx);
				enterOuterAlt(_localctx, 18);
				{
				setState(772);
				match(RAD);
				setState(773);
				match(LPAREN);
				setState(774);
				numExpr(0);
				setState(775);
				match(RPAREN);
				}
				break;
			case 19:
				_localctx = new NumFuncSQRContext(_localctx);
				enterOuterAlt(_localctx, 19);
				{
				setState(777);
				match(SQR);
				setState(778);
				match(LPAREN);
				setState(779);
				numExpr(0);
				setState(780);
				match(RPAREN);
				}
				break;
			case 20:
				_localctx = new NumFuncSGNContext(_localctx);
				enterOuterAlt(_localctx, 20);
				{
				setState(782);
				match(SGN);
				setState(783);
				match(LPAREN);
				setState(784);
				numExpr(0);
				setState(785);
				match(RPAREN);
				}
				break;
			case 21:
				_localctx = new NumFuncASCContext(_localctx);
				enterOuterAlt(_localctx, 21);
				{
				setState(787);
				match(ASC);
				setState(788);
				match(LPAREN);
				setState(789);
				strExpr(0);
				setState(790);
				match(RPAREN);
				}
				break;
			case 22:
				_localctx = new NumFuncLENContext(_localctx);
				enterOuterAlt(_localctx, 22);
				{
				setState(792);
				match(LEN);
				setState(793);
				match(LPAREN);
				setState(794);
				strExpr(0);
				setState(795);
				match(RPAREN);
				}
				break;
			case 23:
				_localctx = new NumFuncINSTR2Context(_localctx);
				enterOuterAlt(_localctx, 23);
				{
				setState(797);
				match(INSTR);
				setState(798);
				match(LPAREN);
				setState(799);
				strExpr(0);
				setState(800);
				match(COMMA);
				setState(801);
				strExpr(0);
				setState(802);
				match(RPAREN);
				}
				break;
			case 24:
				_localctx = new NumFuncINSTR3Context(_localctx);
				enterOuterAlt(_localctx, 24);
				{
				setState(804);
				match(INSTR);
				setState(805);
				match(LPAREN);
				setState(806);
				strExpr(0);
				setState(807);
				match(COMMA);
				setState(808);
				strExpr(0);
				setState(809);
				match(COMMA);
				setState(810);
				numExpr(0);
				setState(811);
				match(RPAREN);
				}
				break;
			case 25:
				_localctx = new NumFuncVALContext(_localctx);
				enterOuterAlt(_localctx, 25);
				{
				setState(813);
				match(VAL);
				setState(814);
				match(LPAREN);
				setState(815);
				strExpr(0);
				setState(816);
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
		int _startState = 78;
		enterRecursionRule(_localctx, 78, RULE_numExpr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(834);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,80,_ctx) ) {
			case 1:
				{
				_localctx = new NumExprNumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(821);
				number();
				}
				break;
			case 2:
				{
				_localctx = new NumExprVarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(822);
				numVar();
				}
				break;
			case 3:
				{
				_localctx = new NumExprFuncContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(823);
				numFunc();
				}
				break;
			case 4:
				{
				_localctx = new NumExprNOTContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(824);
				match(NOT);
				setState(825);
				numExpr(16);
				}
				break;
			case 5:
				{
				_localctx = new NumExprNestedContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(826);
				match(LPAREN);
				setState(827);
				numExpr(0);
				setState(828);
				match(RPAREN);
				}
				break;
			case 6:
				{
				_localctx = new NumExprStrRelopContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(830);
				strExpr(0);
				setState(831);
				compare();
				setState(832);
				strExpr(0);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(878);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,82,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(876);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,81,_ctx) ) {
					case 1:
						{
						_localctx = new NumExprHatContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(836);
						if (!(precpred(_ctx, 14))) throw new FailedPredicateException(this, "precpred(_ctx, 14)");
						setState(837);
						match(HAT);
						setState(838);
						numExpr(14);
						}
						break;
					case 2:
						{
						_localctx = new NumExprMultiplyContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(839);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(840);
						match(MULTIPLY);
						setState(841);
						numExpr(14);
						}
						break;
					case 3:
						{
						_localctx = new NumExprDivideContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(842);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(843);
						match(DIVIDE);
						setState(844);
						numExpr(13);
						}
						break;
					case 4:
						{
						_localctx = new NumExprDIVContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(845);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(846);
						match(DIV);
						setState(847);
						numExpr(12);
						}
						break;
					case 5:
						{
						_localctx = new NumExprMODContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(848);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(849);
						match(MOD);
						setState(850);
						numExpr(11);
						}
						break;
					case 6:
						{
						_localctx = new NumExprPlusContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(851);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(852);
						match(PLUS);
						setState(853);
						numExpr(10);
						}
						break;
					case 7:
						{
						_localctx = new NumExprSubtractContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(854);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(855);
						match(MINUS);
						setState(856);
						numExpr(9);
						}
						break;
					case 8:
						{
						_localctx = new NumExprNumRelopContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(857);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(858);
						compare();
						setState(859);
						numExpr(8);
						}
						break;
					case 9:
						{
						_localctx = new NumExprSHLContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(861);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(862);
						match(SHL);
						setState(863);
						numExpr(6);
						}
						break;
					case 10:
						{
						_localctx = new NumExprSHRContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(864);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(865);
						match(SHR);
						setState(866);
						numExpr(5);
						}
						break;
					case 11:
						{
						_localctx = new NumExprANDContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(867);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(868);
						match(AND);
						setState(869);
						numExpr(4);
						}
						break;
					case 12:
						{
						_localctx = new NumExprORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(870);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(871);
						match(OR);
						setState(872);
						numExpr(3);
						}
						break;
					case 13:
						{
						_localctx = new NumExprEORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(873);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(874);
						match(EOR);
						setState(875);
						numExpr(2);
						}
						break;
					}
					} 
				}
				setState(880);
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
		enterRule(_localctx, 80, RULE_compare);
		try {
			setState(887);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case EQ:
				_localctx = new CompareEQContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(881);
				match(EQ);
				}
				break;
			case NE:
				_localctx = new CompareNEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(882);
				match(NE);
				}
				break;
			case GT:
				_localctx = new CompareGTContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(883);
				match(GT);
				}
				break;
			case GE:
				_localctx = new CompareGEContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(884);
				match(GE);
				}
				break;
			case LT:
				_localctx = new CompareLTContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(885);
				match(LT);
				}
				break;
			case LE:
				_localctx = new CompareLEContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(886);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\177\u037c\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\3\2\7\2"+
		"V\n\2\f\2\16\2Y\13\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5"+
		"\3g\n\3\3\4\3\4\3\4\5\4l\n\4\7\4n\n\4\f\4\16\4q\13\4\3\4\5\4t\n\4\3\5"+
		"\3\5\5\5x\n\5\3\6\7\6{\n\6\f\6\16\6~\13\6\3\7\3\7\3\b\3\b\3\b\3\b\3\b"+
		"\3\b\6\b\u0088\n\b\r\b\16\b\u0089\3\b\3\b\5\b\u008e\n\b\3\b\3\b\3\b\3"+
		"\b\3\b\3\b\3\b\3\b\7\b\u0098\n\b\f\b\16\b\u009b\13\b\3\b\3\b\3\b\3\b\7"+
		"\b\u00a1\n\b\f\b\16\b\u00a4\13\b\3\b\3\b\3\b\5\b\u00a9\n\b\3\b\3\b\5\b"+
		"\u00ad\n\b\3\b\3\b\3\b\3\b\5\b\u00b3\n\b\3\b\3\b\5\b\u00b7\n\b\3\b\3\b"+
		"\3\b\3\b\3\b\3\b\3\b\5\b\u00c0\n\b\3\b\3\b\5\b\u00c4\n\b\3\b\3\b\3\b\3"+
		"\b\3\b\5\b\u00cb\n\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\5\b\u00d4\n\b\3\b\3\b"+
		"\3\b\3\b\3\b\5\b\u00db\n\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b"+
		"\5\b\u00e8\n\b\3\b\3\b\3\b\3\b\3\b\5\b\u00ef\n\b\3\b\3\b\3\b\5\b\u00f4"+
		"\n\b\3\b\3\b\3\b\5\b\u00f9\n\b\3\b\3\b\3\b\5\b\u00fe\n\b\3\b\3\b\3\b\3"+
		"\b\3\b\3\b\5\b\u0106\n\b\3\b\3\b\5\b\u010a\n\b\3\b\5\b\u010d\n\b\5\b\u010f"+
		"\n\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\7\b\u0119\n\b\f\b\16\b\u011c\13\b"+
		"\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\7\b\u0127\n\b\f\b\16\b\u012a\13\b"+
		"\3\b\3\b\3\b\3\b\3\b\7\b\u0131\n\b\f\b\16\b\u0134\13\b\3\b\3\b\5\b\u0138"+
		"\n\b\3\b\3\b\3\b\5\b\u013d\n\b\3\b\3\b\3\b\3\b\3\b\7\b\u0144\n\b\f\b\16"+
		"\b\u0147\13\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\7\b\u0152\n\b\f\b\16"+
		"\b\u0155\13\b\3\b\3\b\3\b\3\b\7\b\u015b\n\b\f\b\16\b\u015e\13\b\3\b\3"+
		"\b\3\b\3\b\3\b\7\b\u0165\n\b\f\b\16\b\u0168\13\b\3\b\3\b\5\b\u016c\n\b"+
		"\3\t\3\t\3\t\3\t\7\t\u0172\n\t\f\t\16\t\u0175\13\t\3\t\3\t\3\t\3\n\3\n"+
		"\3\13\3\13\5\13\u017e\n\13\3\f\3\f\3\f\5\f\u0183\n\f\3\r\3\r\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\5\16\u018d\n\16\3\16\3\16\7\16\u0191\n\16\f\16\16"+
		"\16\u0194\13\16\3\16\3\16\3\16\3\16\3\16\3\16\5\16\u019c\n\16\3\16\3\16"+
		"\7\16\u01a0\n\16\f\16\16\16\u01a3\13\16\3\16\3\16\3\16\3\16\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16"+
		"\3\16\5\16\u01ba\n\16\3\16\3\16\3\16\3\16\5\16\u01c0\n\16\3\16\3\16\3"+
		"\16\3\16\5\16\u01c6\n\16\3\16\5\16\u01c9\n\16\3\17\3\17\3\17\3\17\3\17"+
		"\3\17\5\17\u01d1\n\17\3\17\3\17\7\17\u01d5\n\17\f\17\16\17\u01d8\13\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\5\17\u01e3\n\17\3\20\3\20"+
		"\3\20\5\20\u01e8\n\20\3\21\3\21\5\21\u01ec\n\21\3\22\3\22\3\23\3\23\3"+
		"\24\3\24\3\25\3\25\3\26\3\26\3\26\3\26\3\26\3\26\5\26\u01fc\n\26\3\26"+
		"\3\26\7\26\u0200\n\26\f\26\16\26\u0203\13\26\3\26\3\26\3\26\3\26\3\26"+
		"\3\26\3\26\3\26\3\26\5\26\u020e\n\26\3\27\3\27\3\27\3\27\3\27\7\27\u0215"+
		"\n\27\f\27\16\27\u0218\13\27\3\27\3\27\3\30\3\30\3\30\7\30\u021f\n\30"+
		"\f\30\16\30\u0222\13\30\3\31\5\31\u0225\n\31\3\31\3\31\3\31\5\31\u022a"+
		"\n\31\3\31\7\31\u022d\n\31\f\31\16\31\u0230\13\31\3\32\3\32\3\32\7\32"+
		"\u0235\n\32\f\32\16\32\u0238\13\32\3\33\3\33\3\33\7\33\u023d\n\33\f\33"+
		"\16\33\u0240\13\33\3\34\5\34\u0243\n\34\3\34\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\3\34\5\34\u024d\n\34\3\35\6\35\u0250\n\35\r\35\16\35\u0251\3\36"+
		"\5\36\u0255\n\36\3\36\5\36\u0258\n\36\3\36\3\36\3\36\5\36\u025d\n\36\7"+
		"\36\u025f\n\36\f\36\16\36\u0262\13\36\3\37\3\37\5\37\u0266\n\37\3 \3 "+
		"\3 \3 \5 \u026c\n \3!\5!\u026f\n!\3!\3!\3\"\3\"\3#\3#\3$\5$\u0278\n$\3"+
		"$\3$\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3"+
		"%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3"+
		"%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\5%\u02b4\n%\3&\3&\3\'\3\'\3\'\3\'\5"+
		"\'\u02bc\n\'\3\'\3\'\3\'\7\'\u02c1\n\'\f\'\16\'\u02c4\13\'\3(\3(\3(\3"+
		"(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3"+
		"(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3"+
		"(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3"+
		"(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3"+
		"(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\3(\5(\u0335\n(\3)\3)\3)\3"+
		")\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\5)\u0345\n)\3)\3)\3)\3)\3)\3)\3)\3)\3"+
		")\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3)\3"+
		")\3)\3)\3)\3)\3)\3)\3)\3)\7)\u036f\n)\f)\16)\u0372\13)\3*\3*\3*\3*\3*"+
		"\3*\5*\u037a\n*\3*\2\4LP+\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&"+
		"(*,.\60\62\64\668:<>@BDFHJLNPR\2\6\4\2\36\36nn\3\2qs\5\2ddggll\3\2WX\2"+
		"\u0407\2W\3\2\2\2\4f\3\2\2\2\6s\3\2\2\2\bw\3\2\2\2\n|\3\2\2\2\f\177\3"+
		"\2\2\2\16\u016b\3\2\2\2\20\u016d\3\2\2\2\22\u0179\3\2\2\2\24\u017d\3\2"+
		"\2\2\26\u0182\3\2\2\2\30\u0184\3\2\2\2\32\u01c8\3\2\2\2\34\u01e2\3\2\2"+
		"\2\36\u01e7\3\2\2\2 \u01eb\3\2\2\2\"\u01ed\3\2\2\2$\u01ef\3\2\2\2&\u01f1"+
		"\3\2\2\2(\u01f3\3\2\2\2*\u020d\3\2\2\2,\u020f\3\2\2\2.\u021b\3\2\2\2\60"+
		"\u0224\3\2\2\2\62\u0231\3\2\2\2\64\u0239\3\2\2\2\66\u024c\3\2\2\28\u024f"+
		"\3\2\2\2:\u0254\3\2\2\2<\u0265\3\2\2\2>\u026b\3\2\2\2@\u026e\3\2\2\2B"+
		"\u0272\3\2\2\2D\u0274\3\2\2\2F\u0277\3\2\2\2H\u02b3\3\2\2\2J\u02b5\3\2"+
		"\2\2L\u02bb\3\2\2\2N\u0334\3\2\2\2P\u0344\3\2\2\2R\u0379\3\2\2\2TV\5\4"+
		"\3\2UT\3\2\2\2VY\3\2\2\2WU\3\2\2\2WX\3\2\2\2XZ\3\2\2\2YW\3\2\2\2Z[\7\2"+
		"\2\3[\3\3\2\2\2\\g\7c\2\2]^\7f\2\2^g\7c\2\2_`\5\6\4\2`a\7c\2\2ag\3\2\2"+
		"\2bc\5\f\7\2cd\5\6\4\2de\7c\2\2eg\3\2\2\2f\\\3\2\2\2f]\3\2\2\2f_\3\2\2"+
		"\2fb\3\2\2\2g\5\3\2\2\2ho\5\16\b\2ik\7f\2\2jl\5\16\b\2kj\3\2\2\2kl\3\2"+
		"\2\2ln\3\2\2\2mi\3\2\2\2nq\3\2\2\2om\3\2\2\2op\3\2\2\2pt\3\2\2\2qo\3\2"+
		"\2\2rt\t\2\2\2sh\3\2\2\2sr\3\2\2\2t\7\3\2\2\2ux\5\6\4\2vx\5\4\3\2wu\3"+
		"\2\2\2wv\3\2\2\2x\t\3\2\2\2y{\5\b\5\2zy\3\2\2\2{~\3\2\2\2|z\3\2\2\2|}"+
		"\3\2\2\2}\13\3\2\2\2~|\3\2\2\2\177\u0080\7{\2\2\u0080\r\3\2\2\2\u0081"+
		"\u016c\7\3\2\2\u0082\u0083\7\4\2\2\u0083\u0084\5<\37\2\u0084\u0085\7\31"+
		"\2\2\u0085\u0087\7c\2\2\u0086\u0088\5\20\t\2\u0087\u0086\3\2\2\2\u0088"+
		"\u0089\3\2\2\2\u0089\u0087\3\2\2\2\u0089\u008a\3\2\2\2\u008a\u008d\3\2"+
		"\2\2\u008b\u008c\7\32\2\2\u008c\u008e\5\n\6\2\u008d\u008b\3\2\2\2\u008d"+
		"\u008e\3\2\2\2\u008e\u008f\3\2\2\2\u008f\u0090\7\13\2\2\u0090\u016c\3"+
		"\2\2\2\u0091\u0092\7\5\2\2\u0092\u016c\5L\'\2\u0093\u0094\7\6\2\2\u0094"+
		"\u0099\5\24\13\2\u0095\u0096\7g\2\2\u0096\u0098\5\24\13\2\u0097\u0095"+
		"\3\2\2\2\u0098\u009b\3\2\2\2\u0099\u0097\3\2\2\2\u0099\u009a\3\2\2\2\u009a"+
		"\u016c\3\2\2\2\u009b\u0099\3\2\2\2\u009c\u009d\7\b\2\2\u009d\u00a2\5,"+
		"\27\2\u009e\u009f\7g\2\2\u009f\u00a1\5,\27\2\u00a0\u009e\3\2\2\2\u00a1"+
		"\u00a4\3\2\2\2\u00a2\u00a0\3\2\2\2\u00a2\u00a3\3\2\2\2\u00a3\u016c\3\2"+
		"\2\2\u00a4\u00a2\3\2\2\2\u00a5\u016c\7\n\2\2\u00a6\u00a8\7J\2\2\u00a7"+
		"\u00a9\5<\37\2\u00a8\u00a7\3\2\2\2\u00a8\u00a9\3\2\2\2\u00a9\u016c\3\2"+
		"\2\2\u00aa\u00ac\7!\2\2\u00ab\u00ad\5<\37\2\u00ac\u00ab\3\2\2\2\u00ac"+
		"\u00ad\3\2\2\2\u00ad\u016c\3\2\2\2\u00ae\u00af\7\7\2\2\u00af\u00b0\5\22"+
		"\n\2\u00b0\u00b2\7i\2\2\u00b1\u00b3\5\60\31\2\u00b2\u00b1\3\2\2\2\u00b2"+
		"\u00b3\3\2\2\2\u00b3\u00b4\3\2\2\2\u00b4\u00b6\7k\2\2\u00b5\u00b7\7f\2"+
		"\2\u00b6\u00b5\3\2\2\2\u00b6\u00b7\3\2\2\2\u00b7\u00b8\3\2\2\2\u00b8\u00b9"+
		"\5\n\6\2\u00b9\u00ba\7\r\2\2\u00ba\u016c\3\2\2\2\u00bb\u00bc\7\7\2\2\u00bc"+
		"\u00bd\7p\2\2\u00bd\u00bf\7i\2\2\u00be\u00c0\5\60\31\2\u00bf\u00be\3\2"+
		"\2\2\u00bf\u00c0\3\2\2\2\u00c0\u00c1\3\2\2\2\u00c1\u00c3\7k\2\2\u00c2"+
		"\u00c4\7f\2\2\u00c3\u00c2\3\2\2\2\u00c3\u00c4\3\2\2\2\u00c4\u00c5\3\2"+
		"\2\2\u00c5\u00c6\5\n\6\2\u00c6\u00c7\7\16\2\2\u00c7\u016c\3\2\2\2\u00c8"+
		"\u00ca\7\20\2\2\u00c9\u00cb\7\26\2\2\u00ca\u00c9\3\2\2\2\u00ca\u00cb\3"+
		"\2\2\2\u00cb\u00cc\3\2\2\2\u00cc\u00cd\5 \21\2\u00cd\u00ce\7J\2\2\u00ce"+
		"\u00cf\5P)\2\u00cf\u00d0\7%\2\2\u00d0\u00d3\5P)\2\u00d1\u00d2\7#\2\2\u00d2"+
		"\u00d4\5P)\2\u00d3\u00d1\3\2\2\2\u00d3\u00d4\3\2\2\2\u00d4\u00d5\3\2\2"+
		"\2\u00d5\u00d6\5\n\6\2\u00d6\u00d7\7\30\2\2\u00d7\u016c\3\2\2\2\u00d8"+
		"\u00da\7\20\2\2\u00d9\u00db\7\26\2\2\u00da\u00d9\3\2\2\2\u00da\u00db\3"+
		"\2\2\2\u00db\u00dc\3\2\2\2\u00dc\u00dd\5\36\20\2\u00dd\u00de\7\23\2\2"+
		"\u00de\u00df\5\36\20\2\u00df\u00e0\7i\2\2\u00e0\u00e1\7k\2\2\u00e1\u00e2"+
		"\5\n\6\2\u00e2\u00e3\7\30\2\2\u00e3\u016c\3\2\2\2\u00e4\u00e5\5\22\n\2"+
		"\u00e5\u00e7\7i\2\2\u00e6\u00e8\5\62\32\2\u00e7\u00e6\3\2\2\2\u00e7\u00e8"+
		"\3\2\2\2\u00e8\u00e9\3\2\2\2\u00e9\u00ea\7k\2\2\u00ea\u016c\3\2\2\2\u00eb"+
		"\u00ec\7\22\2\2\u00ec\u00ee\5<\37\2\u00ed\u00ef\7$\2\2\u00ee\u00ed\3\2"+
		"\2\2\u00ee\u00ef\3\2\2\2\u00ef\u00f0\3\2\2\2\u00f0\u00f3\5\6\4\2\u00f1"+
		"\u00f2\7\t\2\2\u00f2\u00f4\5\6\4\2\u00f3\u00f1\3\2\2\2\u00f3\u00f4\3\2"+
		"\2\2\u00f4\u016c\3\2\2\2\u00f5\u00f6\7\22\2\2\u00f6\u00f8\5<\37\2\u00f7"+
		"\u00f9\7$\2\2\u00f8\u00f7\3\2\2\2\u00f8\u00f9\3\2\2\2\u00f9\u00fa\3\2"+
		"\2\2\u00fa\u00fd\5\n\6\2\u00fb\u00fc\7\t\2\2\u00fc\u00fe\5\n\6\2\u00fd"+
		"\u00fb\3\2\2\2\u00fd\u00fe\3\2\2\2\u00fe\u00ff\3\2\2\2\u00ff\u0100\7\f"+
		"\2\2\u0100\u016c\3\2\2\2\u0101\u0105\7\24\2\2\u0102\u0103\5L\'\2\u0103"+
		"\u0104\7g\2\2\u0104\u0106\3\2\2\2\u0105\u0102\3\2\2\2\u0105\u0106\3\2"+
		"\2\2\u0106\u0107\3\2\2\2\u0107\u016c\5.\30\2\u0108\u010a\7\27\2\2\u0109"+
		"\u0108\3\2\2\2\u0109\u010a\3\2\2\2\u010a\u010f\3\2\2\2\u010b\u010d\7\25"+
		"\2\2\u010c\u010b\3\2\2\2\u010c\u010d\3\2\2\2\u010d\u010f\3\2\2\2\u010e"+
		"\u0109\3\2\2\2\u010e\u010c\3\2\2\2\u010f\u0110\3\2\2\2\u0110\u0111\5*"+
		"\26\2\u0111\u0112\7J\2\2\u0112\u011a\5<\37\2\u0113\u0114\7g\2\2\u0114"+
		"\u0115\5*\26\2\u0115\u0116\7J\2\2\u0116\u0117\5<\37\2\u0117\u0119\3\2"+
		"\2\2\u0118\u0113\3\2\2\2\u0119\u011c\3\2\2\2\u011a\u0118\3\2\2\2\u011a"+
		"\u011b\3\2\2\2\u011b\u016c\3\2\2\2\u011c\u011a\3\2\2\2\u011d\u011e\7\26"+
		"\2\2\u011e\u011f\5*\26\2\u011f\u0120\7J\2\2\u0120\u0128\5<\37\2\u0121"+
		"\u0122\7g\2\2\u0122\u0123\5*\26\2\u0123\u0124\7J\2\2\u0124\u0125\5<\37"+
		"\2\u0125\u0127\3\2\2\2\u0126\u0121\3\2\2\2\u0127\u012a\3\2\2\2\u0128\u0126"+
		"\3\2\2\2\u0128\u0129\3\2\2\2\u0129\u016c\3\2\2\2\u012a\u0128\3\2\2\2\u012b"+
		"\u012c\7\26\2\2\u012c\u012d\7\b\2\2\u012d\u0132\5,\27\2\u012e\u012f\7"+
		"g\2\2\u012f\u0131\5,\27\2\u0130\u012e\3\2\2\2\u0131\u0134\3\2\2\2\u0132"+
		"\u0130\3\2\2\2\u0132\u0133\3\2\2\2\u0133\u016c\3\2\2\2\u0134\u0132\3\2"+
		"\2\2\u0135\u0137\7\33\2\2\u0136\u0138\5:\36\2\u0137\u0136\3\2\2\2\u0137"+
		"\u0138\3\2\2\2\u0138\u016c\3\2\2\2\u0139\u013a\7p\2\2\u013a\u013c\7i\2"+
		"\2\u013b\u013d\5\62\32\2\u013c\u013b\3\2\2\2\u013c\u013d\3\2\2\2\u013d"+
		"\u013e\3\2\2\2\u013e\u016c\7k\2\2\u013f\u0140\7\35\2\2\u0140\u0145\5*"+
		"\26\2\u0141\u0142\7g\2\2\u0142\u0144\5*\26\2\u0143\u0141\3\2\2\2\u0144"+
		"\u0147\3\2\2\2\u0145\u0143\3\2\2\2\u0145\u0146\3\2\2\2\u0146\u016c\3\2"+
		"\2\2\u0147\u0145\3\2\2\2\u0148\u016c\7 \2\2\u0149\u016c\7&\2\2\u014a\u016c"+
		"\7\'\2\2\u014b\u014c\7(\2\2\u014c\u014d\5\"\22\2\u014d\u014e\7i\2\2\u014e"+
		"\u0153\5\36\20\2\u014f\u0150\7g\2\2\u0150\u0152\5\36\20\2\u0151\u014f"+
		"\3\2\2\2\u0152\u0155\3\2\2\2\u0153\u0151\3\2\2\2\u0153\u0154\3\2\2\2\u0154"+
		"\u0156\3\2\2\2\u0155\u0153\3\2\2\2\u0156\u0157\7k\2\2\u0157\u016c\3\2"+
		"\2\2\u0158\u015c\7\37\2\2\u0159\u015b\5\b\5\2\u015a\u0159\3\2\2\2\u015b"+
		"\u015e\3\2\2\2\u015c\u015a\3\2\2\2\u015c\u015d\3\2\2\2\u015d\u015f\3\2"+
		"\2\2\u015e\u015c\3\2\2\2\u015f\u0160\7)\2\2\u0160\u016c\5<\37\2\u0161"+
		"\u0162\7+\2\2\u0162\u0166\5<\37\2\u0163\u0165\5\b\5\2\u0164\u0163\3\2"+
		"\2\2\u0165\u0168\3\2\2\2\u0166\u0164\3\2\2\2\u0166\u0167\3\2\2\2\u0167"+
		"\u0169\3\2\2\2\u0168\u0166\3\2\2\2\u0169\u016a\7\17\2\2\u016a\u016c\3"+
		"\2\2\2\u016b\u0081\3\2\2\2\u016b\u0082\3\2\2\2\u016b\u0091\3\2\2\2\u016b"+
		"\u0093\3\2\2\2\u016b\u009c\3\2\2\2\u016b\u00a5\3\2\2\2\u016b\u00a6\3\2"+
		"\2\2\u016b\u00aa\3\2\2\2\u016b\u00ae\3\2\2\2\u016b\u00bb\3\2\2\2\u016b"+
		"\u00c8\3\2\2\2\u016b\u00d8\3\2\2\2\u016b\u00e4\3\2\2\2\u016b\u00eb\3\2"+
		"\2\2\u016b\u00f5\3\2\2\2\u016b\u0101\3\2\2\2\u016b\u010e\3\2\2\2\u016b"+
		"\u011d\3\2\2\2\u016b\u012b\3\2\2\2\u016b\u0135\3\2\2\2\u016b\u0139\3\2"+
		"\2\2\u016b\u013f\3\2\2\2\u016b\u0148\3\2\2\2\u016b\u0149\3\2\2\2\u016b"+
		"\u014a\3\2\2\2\u016b\u014b\3\2\2\2\u016b\u0158\3\2\2\2\u016b\u0161\3\2"+
		"\2\2\u016c\17\3\2\2\2\u016d\u016e\7*\2\2\u016e\u0173\5<\37\2\u016f\u0170"+
		"\7g\2\2\u0170\u0172\5<\37\2\u0171\u016f\3\2\2\2\u0172\u0175\3\2\2\2\u0173"+
		"\u0171\3\2\2\2\u0173\u0174\3\2\2\2\u0174\u0176\3\2\2\2\u0175\u0173\3\2"+
		"\2\2\u0176\u0177\7f\2\2\u0177\u0178\5\n\6\2\u0178\21\3\2\2\2\u0179\u017a"+
		"\t\3\2\2\u017a\23\3\2\2\2\u017b\u017e\5> \2\u017c\u017e\5J&\2\u017d\u017b"+
		"\3\2\2\2\u017d\u017c\3\2\2\2\u017e\25\3\2\2\2\u017f\u0183\5\32\16\2\u0180"+
		"\u0183\5\34\17\2\u0181\u0183\5\30\r\2\u0182\u017f\3\2\2\2\u0182\u0180"+
		"\3\2\2\2\u0182\u0181\3\2\2\2\u0183\27\3\2\2\2\u0184\u0185\5(\25\2\u0185"+
		"\31\3\2\2\2\u0186\u01c9\5\"\22\2\u0187\u0192\5\"\22\2\u0188\u0189\7i\2"+
		"\2\u0189\u018c\5P)\2\u018a\u018b\7g\2\2\u018b\u018d\5P)\2\u018c\u018a"+
		"\3\2\2\2\u018c\u018d\3\2\2\2\u018d\u018e\3\2\2\2\u018e\u018f\7k\2\2\u018f"+
		"\u0191\3\2\2\2\u0190\u0188\3\2\2\2\u0191\u0194\3\2\2\2\u0192\u0190\3\2"+
		"\2\2\u0192\u0193\3\2\2\2\u0193\u01c9\3\2\2\2\u0194\u0192\3\2\2\2\u0195"+
		"\u01c9\5$\23\2\u0196\u01a1\5$\23\2\u0197\u0198\7i\2\2\u0198\u019b\5P)"+
		"\2\u0199\u019a\7g\2\2\u019a\u019c\5P)\2\u019b\u0199\3\2\2\2\u019b\u019c"+
		"\3\2\2\2\u019c\u019d\3\2\2\2\u019d\u019e\7k\2\2\u019e\u01a0\3\2\2\2\u019f"+
		"\u0197\3\2\2\2\u01a0\u01a3\3\2\2\2\u01a1\u019f\3\2\2\2\u01a1\u01a2\3\2"+
		"\2\2\u01a2\u01c9\3\2\2\2\u01a3\u01a1\3\2\2\2\u01a4\u01a5\5\30\r\2\u01a5"+
		"\u01a6\5\"\22\2\u01a6\u01c9\3\2\2\2\u01a7\u01a8\5\30\r\2\u01a8\u01a9\7"+
		"i\2\2\u01a9\u01aa\5P)\2\u01aa\u01ab\7k\2\2\u01ab\u01ac\5\"\22\2\u01ac"+
		"\u01c9\3\2\2\2\u01ad\u01ae\5\30\r\2\u01ae\u01af\5$\23\2\u01af\u01c9\3"+
		"\2\2\2\u01b0\u01b1\5\30\r\2\u01b1\u01b2\7i\2\2\u01b2\u01b3\5P)\2\u01b3"+
		"\u01b4\7k\2\2\u01b4\u01b5\5$\23\2\u01b5\u01c9\3\2\2\2\u01b6\u01b7\7r\2"+
		"\2\u01b7\u01b9\7i\2\2\u01b8\u01ba\5\62\32\2\u01b9\u01b8\3\2\2\2\u01b9"+
		"\u01ba\3\2\2\2\u01ba\u01bb\3\2\2\2\u01bb\u01c9\7k\2\2\u01bc\u01bd\7q\2"+
		"\2\u01bd\u01bf\7i\2\2\u01be\u01c0\5\62\32\2\u01bf\u01be\3\2\2\2\u01bf"+
		"\u01c0\3\2\2\2\u01c0\u01c1\3\2\2\2\u01c1\u01c9\7k\2\2\u01c2\u01c3\7s\2"+
		"\2\u01c3\u01c5\7i\2\2\u01c4\u01c6\5\62\32\2\u01c5\u01c4\3\2\2\2\u01c5"+
		"\u01c6\3\2\2\2\u01c6\u01c7\3\2\2\2\u01c7\u01c9\7k\2\2\u01c8\u0186\3\2"+
		"\2\2\u01c8\u0187\3\2\2\2\u01c8\u0195\3\2\2\2\u01c8\u0196\3\2\2\2\u01c8"+
		"\u01a4\3\2\2\2\u01c8\u01a7\3\2\2\2\u01c8\u01ad\3\2\2\2\u01c8\u01b0\3\2"+
		"\2\2\u01c8\u01b6\3\2\2\2\u01c8\u01bc\3\2\2\2\u01c8\u01c2\3\2\2\2\u01c9"+
		"\33\3\2\2\2\u01ca\u01e3\5&\24\2\u01cb\u01d6\5&\24\2\u01cc\u01cd\7i\2\2"+
		"\u01cd\u01d0\5P)\2\u01ce\u01cf\7g\2\2\u01cf\u01d1\5P)\2\u01d0\u01ce\3"+
		"\2\2\2\u01d0\u01d1\3\2\2\2\u01d1\u01d2\3\2\2\2\u01d2\u01d3\7k\2\2\u01d3"+
		"\u01d5\3\2\2\2\u01d4\u01cc\3\2\2\2\u01d5\u01d8\3\2\2\2\u01d6\u01d4\3\2"+
		"\2\2\u01d6\u01d7\3\2\2\2\u01d7\u01e3\3\2\2\2\u01d8\u01d6\3\2\2\2\u01d9"+
		"\u01da\5\30\r\2\u01da\u01db\5&\24\2\u01db\u01e3\3\2\2\2\u01dc\u01dd\5"+
		"\30\r\2\u01dd\u01de\7i\2\2\u01de\u01df\5P)\2\u01df\u01e0\7k\2\2\u01e0"+
		"\u01e1\5&\24\2\u01e1\u01e3\3\2\2\2\u01e2\u01ca\3\2\2\2\u01e2\u01cb\3\2"+
		"\2\2\u01e2\u01d9\3\2\2\2\u01e2\u01dc\3\2\2\2\u01e3\35\3\2\2\2\u01e4\u01e8"+
		"\5\"\22\2\u01e5\u01e8\5$\23\2\u01e6\u01e8\5&\24\2\u01e7\u01e4\3\2\2\2"+
		"\u01e7\u01e5\3\2\2\2\u01e7\u01e6\3\2\2\2\u01e8\37\3\2\2\2\u01e9\u01ec"+
		"\5\"\22\2\u01ea\u01ec\5$\23\2\u01eb\u01e9\3\2\2\2\u01eb\u01ea\3\2\2\2"+
		"\u01ec!\3\2\2\2\u01ed\u01ee\7t\2\2\u01ee#\3\2\2\2\u01ef\u01f0\7u\2\2\u01f0"+
		"%\3\2\2\2\u01f1\u01f2\7v\2\2\u01f2\'\3\2\2\2\u01f3\u01f4\7w\2\2\u01f4"+
		")\3\2\2\2\u01f5\u020e\5\26\f\2\u01f6\u0201\5\26\f\2\u01f7\u01f8\7i\2\2"+
		"\u01f8\u01fb\5P)\2\u01f9\u01fa\7g\2\2\u01fa\u01fc\5P)\2\u01fb\u01f9\3"+
		"\2\2\2\u01fb\u01fc\3\2\2\2\u01fc\u01fd\3\2\2\2\u01fd\u01fe\7k\2\2\u01fe"+
		"\u0200\3\2\2\2\u01ff\u01f7\3\2\2\2\u0200\u0203\3\2\2\2\u0201\u01ff\3\2"+
		"\2\2\u0201\u0202\3\2\2\2\u0202\u020e\3\2\2\2\u0203\u0201\3\2\2\2\u0204"+
		"\u0205\5\30\r\2\u0205\u0206\5\"\22\2\u0206\u020e\3\2\2\2\u0207\u0208\5"+
		"\30\r\2\u0208\u0209\7i\2\2\u0209\u020a\5P)\2\u020a\u020b\7k\2\2\u020b"+
		"\u020c\5\"\22\2\u020c\u020e\3\2\2\2\u020d\u01f5\3\2\2\2\u020d\u01f6\3"+
		"\2\2\2\u020d\u0204\3\2\2\2\u020d\u0207\3\2\2\2\u020e+\3\2\2\2\u020f\u0210"+
		"\5\26\f\2\u0210\u0211\7i\2\2\u0211\u0216\5P)\2\u0212\u0213\7g\2\2\u0213"+
		"\u0215\5P)\2\u0214\u0212\3\2\2\2\u0215\u0218\3\2\2\2\u0216\u0214\3\2\2"+
		"\2\u0216\u0217\3\2\2\2\u0217\u0219\3\2\2\2\u0218\u0216\3\2\2\2\u0219\u021a"+
		"\7k\2\2\u021a-\3\2\2\2\u021b\u0220\5*\26\2\u021c\u021d\7g\2\2\u021d\u021f"+
		"\5*\26\2\u021e\u021c\3\2\2\2\u021f\u0222\3\2\2\2\u0220\u021e\3\2\2\2\u0220"+
		"\u0221\3\2\2\2\u0221/\3\2\2\2\u0222\u0220\3\2\2\2\u0223\u0225\7!\2\2\u0224"+
		"\u0223\3\2\2\2\u0224\u0225\3\2\2\2\u0225\u0226\3\2\2\2\u0226\u022e\5\36"+
		"\20\2\u0227\u0229\7g\2\2\u0228\u022a\7!\2\2\u0229\u0228\3\2\2\2\u0229"+
		"\u022a\3\2\2\2\u022a\u022b\3\2\2\2\u022b\u022d\5\36\20\2\u022c\u0227\3"+
		"\2\2\2\u022d\u0230\3\2\2\2\u022e\u022c\3\2\2\2\u022e\u022f\3\2\2\2\u022f"+
		"\61\3\2\2\2\u0230\u022e\3\2\2\2\u0231\u0236\5<\37\2\u0232\u0233\7g\2\2"+
		"\u0233\u0235\5<\37\2\u0234\u0232\3\2\2\2\u0235\u0238\3\2\2\2\u0236\u0234"+
		"\3\2\2\2\u0236\u0237\3\2\2\2\u0237\63\3\2\2\2\u0238\u0236\3\2\2\2\u0239"+
		"\u023e\5<\37\2\u023a\u023b\7g\2\2\u023b\u023d\5<\37\2\u023c\u023a\3\2"+
		"\2\2\u023d\u0240\3\2\2\2\u023e\u023c\3\2\2\2\u023e\u023f\3\2\2\2\u023f"+
		"\65\3\2\2\2\u0240\u023e\3\2\2\2\u0241\u0243\7e\2\2\u0242\u0241\3\2\2\2"+
		"\u0242\u0243\3\2\2\2\u0243\u0244\3\2\2\2\u0244\u024d\5<\37\2\u0245\u0246"+
		"\7\"\2\2\u0246\u0247\7i\2\2\u0247\u0248\5P)\2\u0248\u0249\7k\2\2\u0249"+
		"\u024d\3\2\2\2\u024a\u024b\7\"\2\2\u024b\u024d\5P)\2\u024c\u0242\3\2\2"+
		"\2\u024c\u0245\3\2\2\2\u024c\u024a\3\2\2\2\u024d\67\3\2\2\2\u024e\u0250"+
		"\7d\2\2\u024f\u024e\3\2\2\2\u0250\u0251\3\2\2\2\u0251\u024f\3\2\2\2\u0251"+
		"\u0252\3\2\2\2\u02529\3\2\2\2\u0253\u0255\58\35\2\u0254\u0253\3\2\2\2"+
		"\u0254\u0255\3\2\2\2\u0255\u0257\3\2\2\2\u0256\u0258\7g\2\2\u0257\u0256"+
		"\3\2\2\2\u0257\u0258\3\2\2\2\u0258\u0259\3\2\2\2\u0259\u0260\5\66\34\2"+
		"\u025a\u025c\t\4\2\2\u025b\u025d\5\66\34\2\u025c\u025b\3\2\2\2\u025c\u025d"+
		"\3\2\2\2\u025d\u025f\3\2\2\2\u025e\u025a\3\2\2\2\u025f\u0262\3\2\2\2\u0260"+
		"\u025e\3\2\2\2\u0260\u0261\3\2\2\2\u0261;\3\2\2\2\u0262\u0260\3\2\2\2"+
		"\u0263\u0266\5P)\2\u0264\u0266\5L\'\2\u0265\u0263\3\2\2\2\u0265\u0264"+
		"\3\2\2\2\u0266=\3\2\2\2\u0267\u026c\5@!\2\u0268\u026c\5F$\2\u0269\u026c"+
		"\5B\"\2\u026a\u026c\5D#\2\u026b\u0267\3\2\2\2\u026b\u0268\3\2\2\2\u026b"+
		"\u0269\3\2\2\2\u026b\u026a\3\2\2\2\u026c?\3\2\2\2\u026d\u026f\t\5\2\2"+
		"\u026e\u026d\3\2\2\2\u026e\u026f\3\2\2\2\u026f\u0270\3\2\2\2\u0270\u0271"+
		"\7{\2\2\u0271A\3\2\2\2\u0272\u0273\7y\2\2\u0273C\3\2\2\2\u0274\u0275\7"+
		"z\2\2\u0275E\3\2\2\2\u0276\u0278\t\5\2\2\u0277\u0276\3\2\2\2\u0277\u0278"+
		"\3\2\2\2\u0278\u0279\3\2\2\2\u0279\u027a\7|\2\2\u027aG\3\2\2\2\u027b\u02b4"+
		"\7@\2\2\u027c\u027d\7C\2\2\u027d\u027e\7i\2\2\u027e\u027f\5P)\2\u027f"+
		"\u0280\7k\2\2\u0280\u02b4\3\2\2\2\u0281\u0282\7C\2\2\u0282\u02b4\5P)\2"+
		"\u0283\u0284\7D\2\2\u0284\u0285\7i\2\2\u0285\u0286\5L\'\2\u0286\u0287"+
		"\7g\2\2\u0287\u0288\5P)\2\u0288\u0289\7k\2\2\u0289\u02b4\3\2\2\2\u028a"+
		"\u028b\7E\2\2\u028b\u028c\7i\2\2\u028c\u028d\5L\'\2\u028d\u028e\7g\2\2"+
		"\u028e\u028f\5P)\2\u028f\u0290\7g\2\2\u0290\u0291\5P)\2\u0291\u0292\7"+
		"k\2\2\u0292\u02b4\3\2\2\2\u0293\u0294\7E\2\2\u0294\u0295\7i\2\2\u0295"+
		"\u0296\5L\'\2\u0296\u0297\7g\2\2\u0297\u0298\5P)\2\u0298\u0299\7k\2\2"+
		"\u0299\u02b4\3\2\2\2\u029a\u029b\7F\2\2\u029b\u029c\7i\2\2\u029c\u029d"+
		"\5L\'\2\u029d\u029e\7g\2\2\u029e\u029f\5P)\2\u029f\u02a0\7k\2\2\u02a0"+
		"\u02b4\3\2\2\2\u02a1\u02a2\7A\2\2\u02a2\u02a3\7i\2\2\u02a3\u02a4\5P)\2"+
		"\u02a4\u02a5\7k\2\2\u02a5\u02b4\3\2\2\2\u02a6\u02a7\7A\2\2\u02a7\u02a8"+
		"\7e\2\2\u02a8\u02a9\7i\2\2\u02a9\u02aa\5P)\2\u02aa\u02ab\7k\2\2\u02ab"+
		"\u02b4\3\2\2\2\u02ac\u02ad\7B\2\2\u02ad\u02ae\7i\2\2\u02ae\u02af\5P)\2"+
		"\u02af\u02b0\7g\2\2\u02b0\u02b1\5L\'\2\u02b1\u02b2\7k\2\2\u02b2\u02b4"+
		"\3\2\2\2\u02b3\u027b\3\2\2\2\u02b3\u027c\3\2\2\2\u02b3\u0281\3\2\2\2\u02b3"+
		"\u0283\3\2\2\2\u02b3\u028a\3\2\2\2\u02b3\u0293\3\2\2\2\u02b3\u029a\3\2"+
		"\2\2\u02b3\u02a1\3\2\2\2\u02b3\u02a6\3\2\2\2\u02b3\u02ac\3\2\2\2\u02b4"+
		"I\3\2\2\2\u02b5\u02b6\7o\2\2\u02b6K\3\2\2\2\u02b7\u02b8\b\'\1\2\u02b8"+
		"\u02bc\5J&\2\u02b9\u02bc\5\34\17\2\u02ba\u02bc\5H%\2\u02bb\u02b7\3\2\2"+
		"\2\u02bb\u02b9\3\2\2\2\u02bb\u02ba\3\2\2\2\u02bc\u02c2\3\2\2\2\u02bd\u02be"+
		"\f\3\2\2\u02be\u02bf\7W\2\2\u02bf\u02c1\5L\'\4\u02c0\u02bd\3\2\2\2\u02c1"+
		"\u02c4\3\2\2\2\u02c2\u02c0\3\2\2\2\u02c2\u02c3\3\2\2\2\u02c3M\3\2\2\2"+
		"\u02c4\u02c2\3\2\2\2\u02c5\u0335\7-\2\2\u02c6\u0335\7,\2\2\u02c7\u0335"+
		"\7G\2\2\u02c8\u0335\7H\2\2\u02c9\u0335\7I\2\2\u02ca\u02cb\7G\2\2\u02cb"+
		"\u02cc\7i\2\2\u02cc\u02cd\5P)\2\u02cd\u02ce\7k\2\2\u02ce\u0335\3\2\2\2"+
		"\u02cf\u02d0\7/\2\2\u02d0\u02d1\7i\2\2\u02d1\u02d2\5P)\2\u02d2\u02d3\7"+
		"k\2\2\u02d3\u0335\3\2\2\2\u02d4\u02d5\7\60\2\2\u02d5\u02d6\7i\2\2\u02d6"+
		"\u02d7\5P)\2\u02d7\u02d8\7k\2\2\u02d8\u0335\3\2\2\2\u02d9\u02da\7\61\2"+
		"\2\u02da\u02db\7i\2\2\u02db\u02dc\5P)\2\u02dc\u02dd\7k\2\2\u02dd\u0335"+
		"\3\2\2\2\u02de\u02df\7\62\2\2\u02df\u02e0\7i\2\2\u02e0\u02e1\5P)\2\u02e1"+
		"\u02e2\7k\2\2\u02e2\u0335\3\2\2\2\u02e3\u02e4\7\63\2\2\u02e4\u02e5\7i"+
		"\2\2\u02e5\u02e6\5P)\2\u02e6\u02e7\7k\2\2\u02e7\u0335\3\2\2\2\u02e8\u02e9"+
		"\7\64\2\2\u02e9\u02ea\7i\2\2\u02ea\u02eb\5P)\2\u02eb\u02ec\7k\2\2\u02ec"+
		"\u0335\3\2\2\2\u02ed\u02ee\7\65\2\2\u02ee\u02ef\7i\2\2\u02ef\u02f0\5P"+
		")\2\u02f0\u02f1\7k\2\2\u02f1\u0335\3\2\2\2\u02f2\u02f3\7\66\2\2\u02f3"+
		"\u02f4\7i\2\2\u02f4\u02f5\5P)\2\u02f5\u02f6\7k\2\2\u02f6\u0335\3\2\2\2"+
		"\u02f7\u02f8\7\67\2\2\u02f8\u02f9\7i\2\2\u02f9\u02fa\5P)\2\u02fa\u02fb"+
		"\7k\2\2\u02fb\u0335\3\2\2\2\u02fc\u02fd\78\2\2\u02fd\u02fe\7i\2\2\u02fe"+
		"\u02ff\5P)\2\u02ff\u0300\7k\2\2\u0300\u0335\3\2\2\2\u0301\u0302\79\2\2"+
		"\u0302\u0303\7i\2\2\u0303\u0304\5P)\2\u0304\u0305\7k\2\2\u0305\u0335\3"+
		"\2\2\2\u0306\u0307\7:\2\2\u0307\u0308\7i\2\2\u0308\u0309\5P)\2\u0309\u030a"+
		"\7k\2\2\u030a\u0335\3\2\2\2\u030b\u030c\7.\2\2\u030c\u030d\7i\2\2\u030d"+
		"\u030e\5P)\2\u030e\u030f\7k\2\2\u030f\u0335\3\2\2\2\u0310\u0311\7;\2\2"+
		"\u0311\u0312\7i\2\2\u0312\u0313\5P)\2\u0313\u0314\7k\2\2\u0314\u0335\3"+
		"\2\2\2\u0315\u0316\7<\2\2\u0316\u0317\7i\2\2\u0317\u0318\5L\'\2\u0318"+
		"\u0319\7k\2\2\u0319\u0335\3\2\2\2\u031a\u031b\7=\2\2\u031b\u031c\7i\2"+
		"\2\u031c\u031d\5L\'\2\u031d\u031e\7k\2\2\u031e\u0335\3\2\2\2\u031f\u0320"+
		"\7>\2\2\u0320\u0321\7i\2\2\u0321\u0322\5L\'\2\u0322\u0323\7g\2\2\u0323"+
		"\u0324\5L\'\2\u0324\u0325\7k\2\2\u0325\u0335\3\2\2\2\u0326\u0327\7>\2"+
		"\2\u0327\u0328\7i\2\2\u0328\u0329\5L\'\2\u0329\u032a\7g\2\2\u032a\u032b"+
		"\5L\'\2\u032b\u032c\7g\2\2\u032c\u032d\5P)\2\u032d\u032e\7k\2\2\u032e"+
		"\u0335\3\2\2\2\u032f\u0330\7?\2\2\u0330\u0331\7i\2\2\u0331\u0332\5L\'"+
		"\2\u0332\u0333\7k\2\2\u0333\u0335\3\2\2\2\u0334\u02c5\3\2\2\2\u0334\u02c6"+
		"\3\2\2\2\u0334\u02c7\3\2\2\2\u0334\u02c8\3\2\2\2\u0334\u02c9\3\2\2\2\u0334"+
		"\u02ca\3\2\2\2\u0334\u02cf\3\2\2\2\u0334\u02d4\3\2\2\2\u0334\u02d9\3\2"+
		"\2\2\u0334\u02de\3\2\2\2\u0334\u02e3\3\2\2\2\u0334\u02e8\3\2\2\2\u0334"+
		"\u02ed\3\2\2\2\u0334\u02f2\3\2\2\2\u0334\u02f7\3\2\2\2\u0334\u02fc\3\2"+
		"\2\2\u0334\u0301\3\2\2\2\u0334\u0306\3\2\2\2\u0334\u030b\3\2\2\2\u0334"+
		"\u0310\3\2\2\2\u0334\u0315\3\2\2\2\u0334\u031a\3\2\2\2\u0334\u031f\3\2"+
		"\2\2\u0334\u0326\3\2\2\2\u0334\u032f\3\2\2\2\u0335O\3\2\2\2\u0336\u0337"+
		"\b)\1\2\u0337\u0345\5> \2\u0338\u0345\5\32\16\2\u0339\u0345\5N(\2\u033a"+
		"\u033b\7P\2\2\u033b\u0345\5P)\22\u033c\u033d\7i\2\2\u033d\u033e\5P)\2"+
		"\u033e\u033f\7k\2\2\u033f\u0345\3\2\2\2\u0340\u0341\5L\'\2\u0341\u0342"+
		"\5R*\2\u0342\u0343\5L\'\2\u0343\u0345\3\2\2\2\u0344\u0336\3\2\2\2\u0344"+
		"\u0338\3\2\2\2\u0344\u0339\3\2\2\2\u0344\u033a\3\2\2\2\u0344\u033c\3\2"+
		"\2\2\u0344\u0340\3\2\2\2\u0345\u0370\3\2\2\2\u0346\u0347\f\20\2\2\u0347"+
		"\u0348\7V\2\2\u0348\u036f\5P)\20\u0349\u034a\f\17\2\2\u034a\u034b\7Y\2"+
		"\2\u034b\u036f\5P)\20\u034c\u034d\f\16\2\2\u034d\u034e\7Z\2\2\u034e\u036f"+
		"\5P)\17\u034f\u0350\f\r\2\2\u0350\u0351\7U\2\2\u0351\u036f\5P)\16\u0352"+
		"\u0353\f\f\2\2\u0353\u0354\7T\2\2\u0354\u036f\5P)\r\u0355\u0356\f\13\2"+
		"\2\u0356\u0357\7W\2\2\u0357\u036f\5P)\f\u0358\u0359\f\n\2\2\u0359\u035a"+
		"\7X\2\2\u035a\u036f\5P)\13\u035b\u035c\f\t\2\2\u035c\u035d\5R*\2\u035d"+
		"\u035e\5P)\n\u035e\u036f\3\2\2\2\u035f\u0360\f\7\2\2\u0360\u0361\7[\2"+
		"\2\u0361\u036f\5P)\b\u0362\u0363\f\6\2\2\u0363\u0364\7\\\2\2\u0364\u036f"+
		"\5P)\7\u0365\u0366\f\5\2\2\u0366\u0367\7Q\2\2\u0367\u036f\5P)\6\u0368"+
		"\u0369\f\4\2\2\u0369\u036a\7R\2\2\u036a\u036f\5P)\5\u036b\u036c\f\3\2"+
		"\2\u036c\u036d\7S\2\2\u036d\u036f\5P)\4\u036e\u0346\3\2\2\2\u036e\u0349"+
		"\3\2\2\2\u036e\u034c\3\2\2\2\u036e\u034f\3\2\2\2\u036e\u0352\3\2\2\2\u036e"+
		"\u0355\3\2\2\2\u036e\u0358\3\2\2\2\u036e\u035b\3\2\2\2\u036e\u035f\3\2"+
		"\2\2\u036e\u0362\3\2\2\2\u036e\u0365\3\2\2\2\u036e\u0368\3\2\2\2\u036e"+
		"\u036b\3\2\2\2\u036f\u0372\3\2\2\2\u0370\u036e\3\2\2\2\u0370\u0371\3\2"+
		"\2\2\u0371Q\3\2\2\2\u0372\u0370\3\2\2\2\u0373\u037a\7J\2\2\u0374\u037a"+
		"\7K\2\2\u0375\u037a\7L\2\2\u0376\u037a\7M\2\2\u0377\u037a\7N\2\2\u0378"+
		"\u037a\7O\2\2\u0379\u0373\3\2\2\2\u0379\u0374\3\2\2\2\u0379\u0375\3\2"+
		"\2\2\u0379\u0376\3\2\2\2\u0379\u0377\3\2\2\2\u0379\u0378\3\2\2\2\u037a"+
		"S\3\2\2\2VWfkosw|\u0089\u008d\u0099\u00a2\u00a8\u00ac\u00b2\u00b6\u00bf"+
		"\u00c3\u00ca\u00d3\u00da\u00e7\u00ee\u00f3\u00f8\u00fd\u0105\u0109\u010c"+
		"\u010e\u011a\u0128\u0132\u0137\u013c\u0145\u0153\u015c\u0166\u016b\u0173"+
		"\u017d\u0182\u018c\u0192\u019b\u01a1\u01b9\u01bf\u01c5\u01c8\u01d0\u01d6"+
		"\u01e2\u01e7\u01eb\u01fb\u0201\u020d\u0216\u0220\u0224\u0229\u022e\u0236"+
		"\u023e\u0242\u024c\u0251\u0254\u0257\u025c\u0260\u0265\u026b\u026e\u0277"+
		"\u02b3\u02bb\u02c2\u0334\u0344\u036e\u0370\u0379";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}