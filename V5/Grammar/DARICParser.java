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
		BREAKPOINT=1, CHAIN=2, DATA=3, DEF=4, DIM=5, ELSE=6, END=7, ENDIF=8, ENDFN=9, 
		ENDPROC=10, ENDWHILE=11, FN=12, IF=13, INPUT=14, GLOBAL=15, LOCAL=16, 
		LET=17, THEN=18, PRINT=19, PROC=20, READ=21, REM=22, REPEAT=23, RESTORE=24, 
		RETURN=25, SPC=26, TRACEON=27, TRACEOFF=28, TYPE=29, UNTIL=30, WHILE=31, 
		TIME=32, PI=33, SQR=34, LN=35, LOG=36, EXP=37, ATN=38, TAN=39, COS=40, 
		SIN=41, ABS=42, ACS=43, ASN=44, DEG=45, RAD=46, SGN=47, ASC=48, LEN=49, 
		INSTR=50, VAL=51, TIMES=52, STRS=53, STRINGS=54, CHRS=55, LEFTS=56, MIDS=57, 
		RIGHTS=58, RND=59, RND0=60, RND1=61, EQ=62, NE=63, GT=64, GE=65, LT=66, 
		LE=67, NOT=68, AND=69, OR=70, EOR=71, MOD=72, DIV=73, HAT=74, PLUS=75, 
		MINUS=76, MULTIPLY=77, DIVIDE=78, SHL=79, SHR=80, PLUS_E=81, MINUS_E=82, 
		MULTIPLY_E=83, DIVIDE_E=84, SHL_E=85, SHR_E=86, NEWLINE=87, TICK=88, TILDE=89, 
		COLON=90, COMMA=91, DOLLAR=92, LPAREN=93, PERCENT=94, RPAREN=95, SEMICOLON=96, 
		UNDERSCORE=97, COMMENT=98, STRINGLITERAL=99, PROC_NAME=100, FN_INTEGER=101, 
		FN_FLOAT=102, FN_STRING=103, VARIABLE_FLOAT=104, VARIABLE_INTEGER=105, 
		VARIABLE_STRING=106, VARIABLE_TYPE=107, NAME=108, HEXNUMBER=109, BINARYNUMBER=110, 
		NUMBER=111, FLOAT=112, ALPHA=113, DIGIT=114, WS=115;
	public static final int
		RULE_prog = 0, RULE_line = 1, RULE_content = 2, RULE_body = 3, RULE_bodyStar = 4, 
		RULE_linenumber = 5, RULE_stmt = 6, RULE_fnName = 7, RULE_literal = 8, 
		RULE_var = 9, RULE_typeVar = 10, RULE_numVar = 11, RULE_strVar = 12, RULE_justVar = 13, 
		RULE_varName = 14, RULE_varNameInteger = 15, RULE_varNameString = 16, 
		RULE_varNameType = 17, RULE_varDecl = 18, RULE_varDeclWithDimension = 19, 
		RULE_varList = 20, RULE_functionVarList = 21, RULE_functionParList = 22, 
		RULE_exprList = 23, RULE_printListItem = 24, RULE_printStartingTicks = 25, 
		RULE_printList = 26, RULE_expr = 27, RULE_number = 28, RULE_numberInteger = 29, 
		RULE_numberHex = 30, RULE_numberBinary = 31, RULE_numberFloat = 32, RULE_strFunc = 33, 
		RULE_string = 34, RULE_strExpr = 35, RULE_numFunc = 36, RULE_numExpr = 37, 
		RULE_compare = 38;
	private static String[] makeRuleNames() {
		return new String[] {
			"prog", "line", "content", "body", "bodyStar", "linenumber", "stmt", 
			"fnName", "literal", "var", "typeVar", "numVar", "strVar", "justVar", 
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
			null, null, "'='", "'<>'", "'>'", "'>='", "'<'", "'<='", null, null, 
			null, null, null, null, "'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", "'>>'", 
			"'+='", "'-='", "'*='", "'/='", "'<<='", "'>>='", null, "'''", "'~'", 
			"':'", "','", "'$'", "'('", "'%'", "')'", "';'", "'_'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "BREAKPOINT", "CHAIN", "DATA", "DEF", "DIM", "ELSE", "END", "ENDIF", 
			"ENDFN", "ENDPROC", "ENDWHILE", "FN", "IF", "INPUT", "GLOBAL", "LOCAL", 
			"LET", "THEN", "PRINT", "PROC", "READ", "REM", "REPEAT", "RESTORE", "RETURN", 
			"SPC", "TRACEON", "TRACEOFF", "TYPE", "UNTIL", "WHILE", "TIME", "PI", 
			"SQR", "LN", "LOG", "EXP", "ATN", "TAN", "COS", "SIN", "ABS", "ACS", 
			"ASN", "DEG", "RAD", "SGN", "ASC", "LEN", "INSTR", "VAL", "TIMES", "STRS", 
			"STRINGS", "CHRS", "LEFTS", "MIDS", "RIGHTS", "RND", "RND0", "RND1", 
			"EQ", "NE", "GT", "GE", "LT", "LE", "NOT", "AND", "OR", "EOR", "MOD", 
			"DIV", "HAT", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "SHL", "SHR", "PLUS_E", 
			"MINUS_E", "MULTIPLY_E", "DIVIDE_E", "SHL_E", "SHR_E", "NEWLINE", "TICK", 
			"TILDE", "COLON", "COMMA", "DOLLAR", "LPAREN", "PERCENT", "RPAREN", "SEMICOLON", 
			"UNDERSCORE", "COMMENT", "STRINGLITERAL", "PROC_NAME", "FN_INTEGER", 
			"FN_FLOAT", "FN_STRING", "VARIABLE_FLOAT", "VARIABLE_INTEGER", "VARIABLE_STRING", 
			"VARIABLE_TYPE", "NAME", "HEXNUMBER", "BINARYNUMBER", "NUMBER", "FLOAT", 
			"ALPHA", "DIGIT", "WS"
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
			setState(81);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << EQ))) != 0) || ((((_la - 87)) & ~0x3f) == 0 && ((1L << (_la - 87)) & ((1L << (NEWLINE - 87)) | (1L << (COLON - 87)) | (1L << (COMMENT - 87)) | (1L << (PROC_NAME - 87)) | (1L << (FN_INTEGER - 87)) | (1L << (FN_FLOAT - 87)) | (1L << (FN_STRING - 87)) | (1L << (VARIABLE_FLOAT - 87)) | (1L << (VARIABLE_INTEGER - 87)) | (1L << (VARIABLE_STRING - 87)) | (1L << (VARIABLE_TYPE - 87)) | (1L << (NUMBER - 87)))) != 0)) {
				{
				{
				setState(78);
				line();
				}
				}
				setState(83);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(84);
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
			setState(96);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NEWLINE:
				enterOuterAlt(_localctx, 1);
				{
				setState(86);
				match(NEWLINE);
				}
				break;
			case COLON:
				enterOuterAlt(_localctx, 2);
				{
				setState(87);
				match(COLON);
				setState(88);
				match(NEWLINE);
				}
				break;
			case BREAKPOINT:
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
				setState(89);
				content();
				setState(90);
				match(NEWLINE);
				}
				break;
			case NUMBER:
				enterOuterAlt(_localctx, 4);
				{
				setState(92);
				linenumber();
				setState(93);
				content();
				setState(94);
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
			setState(109);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BREAKPOINT:
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
				setState(98);
				stmt();
				setState(105);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(99);
						match(COLON);
						setState(101);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
						case 1:
							{
							setState(100);
							stmt();
							}
							break;
						}
						}
						} 
					}
					setState(107);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
				}
				}
				}
				break;
			case REM:
			case COMMENT:
				{
				setState(108);
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
			setState(113);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(111);
				content();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(112);
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
			setState(118);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << EQ))) != 0) || ((((_la - 87)) & ~0x3f) == 0 && ((1L << (_la - 87)) & ((1L << (NEWLINE - 87)) | (1L << (COLON - 87)) | (1L << (COMMENT - 87)) | (1L << (PROC_NAME - 87)) | (1L << (FN_INTEGER - 87)) | (1L << (FN_FLOAT - 87)) | (1L << (FN_STRING - 87)) | (1L << (VARIABLE_FLOAT - 87)) | (1L << (VARIABLE_INTEGER - 87)) | (1L << (VARIABLE_STRING - 87)) | (1L << (VARIABLE_TYPE - 87)) | (1L << (NUMBER - 87)))) != 0)) {
				{
				{
				setState(115);
				body();
				}
				}
				setState(120);
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
			setState(121);
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

	public final StmtContext stmt() throws RecognitionException {
		StmtContext _localctx = new StmtContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_stmt);
		int _la;
		try {
			setState(314);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,33,_ctx) ) {
			case 1:
				_localctx = new StmtBREAKPOINTContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(123);
				match(BREAKPOINT);
				}
				break;
			case 2:
				_localctx = new StmtCHAINContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(124);
				match(CHAIN);
				setState(125);
				strExpr(0);
				}
				break;
			case 3:
				_localctx = new StmtDATAContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(126);
				match(DATA);
				setState(127);
				literal();
				setState(132);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(128);
					match(COMMA);
					setState(129);
					literal();
					}
					}
					setState(134);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 4:
				_localctx = new StmtDIMContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(135);
				match(DIM);
				setState(136);
				varDeclWithDimension();
				setState(141);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(137);
					match(COMMA);
					setState(138);
					varDeclWithDimension();
					}
					}
					setState(143);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 5:
				_localctx = new StmtENDContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(144);
				match(END);
				}
				break;
			case 6:
				_localctx = new StmtRETURNContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(145);
				match(EQ);
				setState(147);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
				case 1:
					{
					setState(146);
					expr();
					}
					break;
				}
				}
				break;
			case 7:
				_localctx = new StmtRETURNContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(149);
				match(RETURN);
				setState(151);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
				case 1:
					{
					setState(150);
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
				setState(153);
				match(DEF);
				setState(154);
				fnName();
				setState(155);
				match(LPAREN);
				setState(157);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN || ((((_la - 104)) & ~0x3f) == 0 && ((1L << (_la - 104)) & ((1L << (VARIABLE_FLOAT - 104)) | (1L << (VARIABLE_INTEGER - 104)) | (1L << (VARIABLE_STRING - 104)))) != 0)) {
					{
					setState(156);
					functionVarList();
					}
				}

				setState(159);
				match(RPAREN);
				setState(161);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
				case 1:
					{
					setState(160);
					match(COLON);
					}
					break;
				}
				setState(163);
				bodyStar();
				setState(164);
				match(ENDFN);
				}
				break;
			case 9:
				_localctx = new StmtDEFPROCContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(166);
				match(DEF);
				setState(167);
				match(PROC_NAME);
				setState(168);
				match(LPAREN);
				setState(170);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN || ((((_la - 104)) & ~0x3f) == 0 && ((1L << (_la - 104)) & ((1L << (VARIABLE_FLOAT - 104)) | (1L << (VARIABLE_INTEGER - 104)) | (1L << (VARIABLE_STRING - 104)))) != 0)) {
					{
					setState(169);
					functionVarList();
					}
				}

				setState(172);
				match(RPAREN);
				setState(174);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
				case 1:
					{
					setState(173);
					match(COLON);
					}
					break;
				}
				setState(176);
				bodyStar();
				setState(177);
				match(ENDPROC);
				}
				break;
			case 10:
				_localctx = new StmtCallFNContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(179);
				fnName();
				setState(180);
				match(LPAREN);
				setState(182);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL) | (1L << TIMES) | (1L << STRS) | (1L << STRINGS) | (1L << CHRS) | (1L << LEFTS) | (1L << MIDS) | (1L << RIGHTS) | (1L << RND) | (1L << RND0) | (1L << RND1))) != 0) || ((((_la - 68)) & ~0x3f) == 0 && ((1L << (_la - 68)) & ((1L << (NOT - 68)) | (1L << (PLUS - 68)) | (1L << (MINUS - 68)) | (1L << (LPAREN - 68)) | (1L << (STRINGLITERAL - 68)) | (1L << (FN_INTEGER - 68)) | (1L << (FN_FLOAT - 68)) | (1L << (FN_STRING - 68)) | (1L << (VARIABLE_FLOAT - 68)) | (1L << (VARIABLE_INTEGER - 68)) | (1L << (VARIABLE_STRING - 68)) | (1L << (VARIABLE_TYPE - 68)) | (1L << (HEXNUMBER - 68)) | (1L << (BINARYNUMBER - 68)) | (1L << (NUMBER - 68)) | (1L << (FLOAT - 68)))) != 0)) {
					{
					setState(181);
					functionParList();
					}
				}

				setState(184);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new StmtIFContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(186);
				match(IF);
				setState(187);
				expr();
				setState(189);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==THEN) {
					{
					setState(188);
					match(THEN);
					}
				}

				setState(191);
				((StmtIFContext)_localctx).t = content();
				setState(194);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
				case 1:
					{
					setState(192);
					match(ELSE);
					setState(193);
					((StmtIFContext)_localctx).f = content();
					}
					break;
				}
				}
				break;
			case 12:
				_localctx = new StmtIFMultilineContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(196);
				match(IF);
				setState(197);
				expr();
				setState(199);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==THEN) {
					{
					setState(198);
					match(THEN);
					}
				}

				setState(201);
				((StmtIFMultilineContext)_localctx).t = bodyStar();
				setState(204);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ELSE) {
					{
					setState(202);
					match(ELSE);
					setState(203);
					((StmtIFMultilineContext)_localctx).f = bodyStar();
					}
				}

				setState(206);
				match(ENDIF);
				}
				break;
			case 13:
				_localctx = new StmtINPUTContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(208);
				match(INPUT);
				setState(212);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,20,_ctx) ) {
				case 1:
					{
					setState(209);
					strExpr(0);
					setState(210);
					match(COMMA);
					}
					break;
				}
				setState(214);
				varList();
				}
				break;
			case 14:
				_localctx = new StmtLETContext(_localctx);
				enterOuterAlt(_localctx, 14);
				{
				setState(221);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,23,_ctx) ) {
				case 1:
					{
					setState(216);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==LET) {
						{
						setState(215);
						match(LET);
						}
					}

					}
					break;
				case 2:
					{
					setState(219);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==GLOBAL) {
						{
						setState(218);
						match(GLOBAL);
						}
					}

					}
					break;
				}
				setState(223);
				varDecl();
				setState(224);
				match(EQ);
				setState(225);
				expr();
				setState(233);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(226);
					match(COMMA);
					setState(227);
					varDecl();
					setState(228);
					match(EQ);
					setState(229);
					expr();
					}
					}
					setState(235);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 15:
				_localctx = new StmtLOCALContext(_localctx);
				enterOuterAlt(_localctx, 15);
				{
				setState(236);
				match(LOCAL);
				setState(237);
				varDecl();
				setState(238);
				match(EQ);
				setState(239);
				expr();
				setState(247);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(240);
					match(COMMA);
					setState(241);
					varDecl();
					setState(242);
					match(EQ);
					setState(243);
					expr();
					}
					}
					setState(249);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 16:
				_localctx = new StmtLOCALDIMContext(_localctx);
				enterOuterAlt(_localctx, 16);
				{
				setState(250);
				match(LOCAL);
				setState(251);
				match(DIM);
				setState(252);
				varDeclWithDimension();
				setState(257);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(253);
					match(COMMA);
					setState(254);
					varDeclWithDimension();
					}
					}
					setState(259);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 17:
				_localctx = new StmtPRINTContext(_localctx);
				enterOuterAlt(_localctx, 17);
				{
				setState(260);
				match(PRINT);
				setState(262);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,27,_ctx) ) {
				case 1:
					{
					setState(261);
					printList();
					}
					break;
				}
				}
				break;
			case 18:
				_localctx = new StmtCallPROCContext(_localctx);
				enterOuterAlt(_localctx, 18);
				{
				setState(264);
				match(PROC_NAME);
				setState(265);
				match(LPAREN);
				setState(267);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL) | (1L << TIMES) | (1L << STRS) | (1L << STRINGS) | (1L << CHRS) | (1L << LEFTS) | (1L << MIDS) | (1L << RIGHTS) | (1L << RND) | (1L << RND0) | (1L << RND1))) != 0) || ((((_la - 68)) & ~0x3f) == 0 && ((1L << (_la - 68)) & ((1L << (NOT - 68)) | (1L << (PLUS - 68)) | (1L << (MINUS - 68)) | (1L << (LPAREN - 68)) | (1L << (STRINGLITERAL - 68)) | (1L << (FN_INTEGER - 68)) | (1L << (FN_FLOAT - 68)) | (1L << (FN_STRING - 68)) | (1L << (VARIABLE_FLOAT - 68)) | (1L << (VARIABLE_INTEGER - 68)) | (1L << (VARIABLE_STRING - 68)) | (1L << (VARIABLE_TYPE - 68)) | (1L << (HEXNUMBER - 68)) | (1L << (BINARYNUMBER - 68)) | (1L << (NUMBER - 68)) | (1L << (FLOAT - 68)))) != 0)) {
					{
					setState(266);
					functionParList();
					}
				}

				setState(269);
				match(RPAREN);
				}
				break;
			case 19:
				_localctx = new StmtREADContext(_localctx);
				enterOuterAlt(_localctx, 19);
				{
				setState(270);
				match(READ);
				setState(271);
				varDecl();
				setState(276);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(272);
					match(COMMA);
					setState(273);
					varDecl();
					}
					}
					setState(278);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 20:
				_localctx = new StmtRESTOREContext(_localctx);
				enterOuterAlt(_localctx, 20);
				{
				setState(279);
				match(RESTORE);
				}
				break;
			case 21:
				_localctx = new StmtTRACEONContext(_localctx);
				enterOuterAlt(_localctx, 21);
				{
				setState(280);
				match(TRACEON);
				}
				break;
			case 22:
				_localctx = new StmtTRACEOFFContext(_localctx);
				enterOuterAlt(_localctx, 22);
				{
				setState(281);
				match(TRACEOFF);
				}
				break;
			case 23:
				_localctx = new StmtTYPEContext(_localctx);
				enterOuterAlt(_localctx, 23);
				{
				setState(282);
				match(TYPE);
				setState(283);
				varName();
				setState(284);
				match(LPAREN);
				setState(285);
				justVar();
				setState(290);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(286);
					match(COMMA);
					setState(287);
					justVar();
					}
					}
					setState(292);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(293);
				match(RPAREN);
				}
				break;
			case 24:
				_localctx = new StmtREPEATContext(_localctx);
				enterOuterAlt(_localctx, 24);
				{
				setState(295);
				match(REPEAT);
				setState(299);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << EQ))) != 0) || ((((_la - 87)) & ~0x3f) == 0 && ((1L << (_la - 87)) & ((1L << (NEWLINE - 87)) | (1L << (COLON - 87)) | (1L << (COMMENT - 87)) | (1L << (PROC_NAME - 87)) | (1L << (FN_INTEGER - 87)) | (1L << (FN_FLOAT - 87)) | (1L << (FN_STRING - 87)) | (1L << (VARIABLE_FLOAT - 87)) | (1L << (VARIABLE_INTEGER - 87)) | (1L << (VARIABLE_STRING - 87)) | (1L << (VARIABLE_TYPE - 87)) | (1L << (NUMBER - 87)))) != 0)) {
					{
					{
					setState(296);
					body();
					}
					}
					setState(301);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(302);
				match(UNTIL);
				setState(303);
				expr();
				}
				break;
			case 25:
				_localctx = new StmtWHILEContext(_localctx);
				enterOuterAlt(_localctx, 25);
				{
				setState(304);
				match(WHILE);
				setState(305);
				expr();
				setState(309);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BREAKPOINT) | (1L << CHAIN) | (1L << DATA) | (1L << DEF) | (1L << DIM) | (1L << END) | (1L << IF) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << PRINT) | (1L << READ) | (1L << REM) | (1L << REPEAT) | (1L << RESTORE) | (1L << RETURN) | (1L << TRACEON) | (1L << TRACEOFF) | (1L << TYPE) | (1L << WHILE) | (1L << EQ))) != 0) || ((((_la - 87)) & ~0x3f) == 0 && ((1L << (_la - 87)) & ((1L << (NEWLINE - 87)) | (1L << (COLON - 87)) | (1L << (COMMENT - 87)) | (1L << (PROC_NAME - 87)) | (1L << (FN_INTEGER - 87)) | (1L << (FN_FLOAT - 87)) | (1L << (FN_STRING - 87)) | (1L << (VARIABLE_FLOAT - 87)) | (1L << (VARIABLE_INTEGER - 87)) | (1L << (VARIABLE_STRING - 87)) | (1L << (VARIABLE_TYPE - 87)) | (1L << (NUMBER - 87)))) != 0)) {
					{
					{
					setState(306);
					body();
					}
					}
					setState(311);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(312);
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
		enterRule(_localctx, 14, RULE_fnName);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(316);
			_la = _input.LA(1);
			if ( !(((((_la - 101)) & ~0x3f) == 0 && ((1L << (_la - 101)) & ((1L << (FN_INTEGER - 101)) | (1L << (FN_FLOAT - 101)) | (1L << (FN_STRING - 101)))) != 0)) ) {
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
		enterRule(_localctx, 16, RULE_literal);
		try {
			setState(320);
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
				setState(318);
				number();
				}
				break;
			case STRINGLITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(319);
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
		enterRule(_localctx, 18, RULE_var);
		try {
			setState(325);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,35,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(322);
				numVar();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(323);
				strVar();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(324);
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
		enterRule(_localctx, 20, RULE_typeVar);
		try {
			_localctx = new TypeVarTypeContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(327);
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
		enterRule(_localctx, 22, RULE_numVar);
		int _la;
		try {
			int _alt;
			setState(395);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
			case 1:
				_localctx = new NumVarFloatContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(329);
				varName();
				}
				break;
			case 2:
				_localctx = new NumVarFloatArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(330);
				varName();
				setState(341);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,37,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(331);
						match(LPAREN);
						setState(332);
						numExpr(0);
						setState(335);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(333);
							match(COMMA);
							setState(334);
							numExpr(0);
							}
						}

						setState(337);
						match(RPAREN);
						}
						} 
					}
					setState(343);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,37,_ctx);
				}
				}
				break;
			case 3:
				_localctx = new NumVarIntegerContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(344);
				varNameInteger();
				}
				break;
			case 4:
				_localctx = new NumVarIntegerArrayContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(345);
				varNameInteger();
				setState(356);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,39,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(346);
						match(LPAREN);
						setState(347);
						numExpr(0);
						setState(350);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(348);
							match(COMMA);
							setState(349);
							numExpr(0);
							}
						}

						setState(352);
						match(RPAREN);
						}
						} 
					}
					setState(358);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,39,_ctx);
				}
				}
				break;
			case 5:
				_localctx = new NumVarFloatFieldContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(359);
				typeVar();
				setState(360);
				varName();
				}
				break;
			case 6:
				_localctx = new NumVarFloatFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(362);
				typeVar();
				setState(363);
				match(LPAREN);
				setState(364);
				numExpr(0);
				setState(365);
				match(RPAREN);
				setState(366);
				varName();
				}
				break;
			case 7:
				_localctx = new NumVarIntegerFieldContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(368);
				typeVar();
				setState(369);
				varNameInteger();
				}
				break;
			case 8:
				_localctx = new NumVarIntegerFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(371);
				typeVar();
				setState(372);
				match(LPAREN);
				setState(373);
				numExpr(0);
				setState(374);
				match(RPAREN);
				setState(375);
				varNameInteger();
				}
				break;
			case 9:
				_localctx = new NumVarFloatFNContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(377);
				match(FN_FLOAT);
				setState(378);
				match(LPAREN);
				setState(380);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL) | (1L << TIMES) | (1L << STRS) | (1L << STRINGS) | (1L << CHRS) | (1L << LEFTS) | (1L << MIDS) | (1L << RIGHTS) | (1L << RND) | (1L << RND0) | (1L << RND1))) != 0) || ((((_la - 68)) & ~0x3f) == 0 && ((1L << (_la - 68)) & ((1L << (NOT - 68)) | (1L << (PLUS - 68)) | (1L << (MINUS - 68)) | (1L << (LPAREN - 68)) | (1L << (STRINGLITERAL - 68)) | (1L << (FN_INTEGER - 68)) | (1L << (FN_FLOAT - 68)) | (1L << (FN_STRING - 68)) | (1L << (VARIABLE_FLOAT - 68)) | (1L << (VARIABLE_INTEGER - 68)) | (1L << (VARIABLE_STRING - 68)) | (1L << (VARIABLE_TYPE - 68)) | (1L << (HEXNUMBER - 68)) | (1L << (BINARYNUMBER - 68)) | (1L << (NUMBER - 68)) | (1L << (FLOAT - 68)))) != 0)) {
					{
					setState(379);
					functionParList();
					}
				}

				setState(382);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new NumVarIntegerFNContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(383);
				match(FN_INTEGER);
				setState(384);
				match(LPAREN);
				setState(386);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL) | (1L << TIMES) | (1L << STRS) | (1L << STRINGS) | (1L << CHRS) | (1L << LEFTS) | (1L << MIDS) | (1L << RIGHTS) | (1L << RND) | (1L << RND0) | (1L << RND1))) != 0) || ((((_la - 68)) & ~0x3f) == 0 && ((1L << (_la - 68)) & ((1L << (NOT - 68)) | (1L << (PLUS - 68)) | (1L << (MINUS - 68)) | (1L << (LPAREN - 68)) | (1L << (STRINGLITERAL - 68)) | (1L << (FN_INTEGER - 68)) | (1L << (FN_FLOAT - 68)) | (1L << (FN_STRING - 68)) | (1L << (VARIABLE_FLOAT - 68)) | (1L << (VARIABLE_INTEGER - 68)) | (1L << (VARIABLE_STRING - 68)) | (1L << (VARIABLE_TYPE - 68)) | (1L << (HEXNUMBER - 68)) | (1L << (BINARYNUMBER - 68)) | (1L << (NUMBER - 68)) | (1L << (FLOAT - 68)))) != 0)) {
					{
					setState(385);
					functionParList();
					}
				}

				setState(388);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new NumVarStringFNContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(389);
				match(FN_STRING);
				setState(390);
				match(LPAREN);
				setState(392);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL) | (1L << TIMES) | (1L << STRS) | (1L << STRINGS) | (1L << CHRS) | (1L << LEFTS) | (1L << MIDS) | (1L << RIGHTS) | (1L << RND) | (1L << RND0) | (1L << RND1))) != 0) || ((((_la - 68)) & ~0x3f) == 0 && ((1L << (_la - 68)) & ((1L << (NOT - 68)) | (1L << (PLUS - 68)) | (1L << (MINUS - 68)) | (1L << (LPAREN - 68)) | (1L << (STRINGLITERAL - 68)) | (1L << (FN_INTEGER - 68)) | (1L << (FN_FLOAT - 68)) | (1L << (FN_STRING - 68)) | (1L << (VARIABLE_FLOAT - 68)) | (1L << (VARIABLE_INTEGER - 68)) | (1L << (VARIABLE_STRING - 68)) | (1L << (VARIABLE_TYPE - 68)) | (1L << (HEXNUMBER - 68)) | (1L << (BINARYNUMBER - 68)) | (1L << (NUMBER - 68)) | (1L << (FLOAT - 68)))) != 0)) {
					{
					setState(391);
					functionParList();
					}
				}

				setState(394);
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
		enterRule(_localctx, 24, RULE_strVar);
		int _la;
		try {
			int _alt;
			setState(421);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,46,_ctx) ) {
			case 1:
				_localctx = new NumVarStringContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(397);
				varNameString();
				}
				break;
			case 2:
				_localctx = new NumVarStringArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(398);
				varNameString();
				setState(409);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,45,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(399);
						match(LPAREN);
						setState(400);
						numExpr(0);
						setState(403);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(401);
							match(COMMA);
							setState(402);
							numExpr(0);
							}
						}

						setState(405);
						match(RPAREN);
						}
						} 
					}
					setState(411);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,45,_ctx);
				}
				}
				break;
			case 3:
				_localctx = new NumVarStringFieldContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(412);
				typeVar();
				setState(413);
				varNameString();
				}
				break;
			case 4:
				_localctx = new NumVarStringFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(415);
				typeVar();
				setState(416);
				match(LPAREN);
				setState(417);
				numExpr(0);
				setState(418);
				match(RPAREN);
				setState(419);
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
		enterRule(_localctx, 26, RULE_justVar);
		try {
			setState(426);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(423);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(424);
				varNameInteger();
				}
				break;
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(425);
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
		enterRule(_localctx, 28, RULE_varName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(428);
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
		enterRule(_localctx, 30, RULE_varNameInteger);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(430);
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
		enterRule(_localctx, 32, RULE_varNameString);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(432);
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
		enterRule(_localctx, 34, RULE_varNameType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(434);
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
		enterRule(_localctx, 36, RULE_varDecl);
		int _la;
		try {
			setState(460);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,50,_ctx) ) {
			case 1:
				_localctx = new VarDeclIndContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(436);
				var();
				}
				break;
			case 2:
				_localctx = new VarDeclArrayedContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(437);
				var();
				setState(448);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==LPAREN) {
					{
					{
					setState(438);
					match(LPAREN);
					setState(439);
					numExpr(0);
					setState(442);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==COMMA) {
						{
						setState(440);
						match(COMMA);
						setState(441);
						numExpr(0);
						}
					}

					setState(444);
					match(RPAREN);
					}
					}
					setState(450);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 3:
				_localctx = new VarDeclTypeContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(451);
				typeVar();
				setState(452);
				varName();
				}
				break;
			case 4:
				_localctx = new VarDeclTypeArrayedContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(454);
				typeVar();
				setState(455);
				match(LPAREN);
				setState(456);
				numExpr(0);
				setState(457);
				match(RPAREN);
				setState(458);
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
		enterRule(_localctx, 38, RULE_varDeclWithDimension);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(462);
			var();
			setState(463);
			match(LPAREN);
			setState(464);
			numExpr(0);
			setState(469);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(465);
				match(COMMA);
				setState(466);
				numExpr(0);
				}
				}
				setState(471);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(472);
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
		enterRule(_localctx, 40, RULE_varList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(474);
			varDecl();
			setState(479);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(475);
				match(COMMA);
				setState(476);
				varDecl();
				}
				}
				setState(481);
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
		enterRule(_localctx, 42, RULE_functionVarList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(483);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN) {
				{
				setState(482);
				match(RETURN);
				}
			}

			setState(485);
			justVar();
			setState(493);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(486);
				match(COMMA);
				setState(488);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN) {
					{
					setState(487);
					match(RETURN);
					}
				}

				setState(490);
				justVar();
				}
				}
				setState(495);
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
		enterRule(_localctx, 44, RULE_functionParList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(496);
			expr();
			setState(501);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(497);
				match(COMMA);
				setState(498);
				expr();
				}
				}
				setState(503);
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
		enterRule(_localctx, 46, RULE_exprList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(504);
			expr();
			setState(509);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(505);
				match(COMMA);
				setState(506);
				expr();
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
		enterRule(_localctx, 48, RULE_printListItem);
		int _la;
		try {
			setState(523);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,59,_ctx) ) {
			case 1:
				_localctx = new PrintListExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(513);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TILDE) {
					{
					setState(512);
					match(TILDE);
					}
				}

				setState(515);
				expr();
				}
				break;
			case 2:
				_localctx = new PrintListSPCPContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(516);
				match(SPC);
				setState(517);
				match(LPAREN);
				setState(518);
				numExpr(0);
				setState(519);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new PrintListSPCContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(521);
				match(SPC);
				setState(522);
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
		enterRule(_localctx, 50, RULE_printStartingTicks);
		int _la;
		try {
			_localctx = new PrintListTickContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(526); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(525);
				match(TICK);
				}
				}
				setState(528); 
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
		enterRule(_localctx, 52, RULE_printList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(531);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TICK) {
				{
				setState(530);
				printStartingTicks();
				}
			}

			setState(534);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(533);
				match(COMMA);
				}
			}

			setState(536);
			printListItem();
			setState(543);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 88)) & ~0x3f) == 0 && ((1L << (_la - 88)) & ((1L << (TICK - 88)) | (1L << (COMMA - 88)) | (1L << (SEMICOLON - 88)))) != 0)) {
				{
				{
				setState(537);
				_la = _input.LA(1);
				if ( !(((((_la - 88)) & ~0x3f) == 0 && ((1L << (_la - 88)) & ((1L << (TICK - 88)) | (1L << (COMMA - 88)) | (1L << (SEMICOLON - 88)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(539);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,63,_ctx) ) {
				case 1:
					{
					setState(538);
					printListItem();
					}
					break;
				}
				}
				}
				setState(545);
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
		enterRule(_localctx, 54, RULE_expr);
		try {
			setState(548);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,65,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(546);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(547);
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
		enterRule(_localctx, 56, RULE_number);
		try {
			setState(554);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,66,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(550);
				numberInteger();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(551);
				numberFloat();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(552);
				numberHex();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(553);
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
		enterRule(_localctx, 58, RULE_numberInteger);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(557);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(556);
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

			setState(559);
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
		enterRule(_localctx, 60, RULE_numberHex);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(561);
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
		enterRule(_localctx, 62, RULE_numberBinary);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(563);
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
		enterRule(_localctx, 64, RULE_numberFloat);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(566);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(565);
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

			setState(568);
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
		enterRule(_localctx, 66, RULE_strFunc);
		try {
			setState(626);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,69,_ctx) ) {
			case 1:
				_localctx = new StrFuncTIMESContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(570);
				match(TIMES);
				}
				break;
			case 2:
				_localctx = new StrFuncCHRSPContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(571);
				match(CHRS);
				setState(572);
				match(LPAREN);
				setState(573);
				numExpr(0);
				setState(574);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new StrFuncCHRSContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(576);
				match(CHRS);
				setState(577);
				numExpr(0);
				}
				break;
			case 4:
				_localctx = new StrFuncLEFTSContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(578);
				match(LEFTS);
				setState(579);
				match(LPAREN);
				setState(580);
				strExpr(0);
				setState(581);
				match(COMMA);
				setState(582);
				numExpr(0);
				setState(583);
				match(RPAREN);
				}
				break;
			case 5:
				_localctx = new StrFuncMIDS3Context(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(585);
				match(MIDS);
				setState(586);
				match(LPAREN);
				setState(587);
				strExpr(0);
				setState(588);
				match(COMMA);
				setState(589);
				numExpr(0);
				setState(590);
				match(COMMA);
				setState(591);
				numExpr(0);
				setState(592);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new StrFuncMIDS2Context(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(594);
				match(MIDS);
				setState(595);
				match(LPAREN);
				setState(596);
				strExpr(0);
				setState(597);
				match(COMMA);
				setState(598);
				numExpr(0);
				setState(599);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new StrFuncRIGHTSContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(601);
				match(RIGHTS);
				setState(602);
				match(LPAREN);
				setState(603);
				strExpr(0);
				setState(604);
				match(COMMA);
				setState(605);
				numExpr(0);
				setState(606);
				match(RPAREN);
				}
				break;
			case 8:
				_localctx = new StrFuncSTRSContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(608);
				match(STRS);
				setState(609);
				match(LPAREN);
				setState(610);
				numExpr(0);
				setState(611);
				match(RPAREN);
				}
				break;
			case 9:
				_localctx = new StrFuncSTRSHEXContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(613);
				match(STRS);
				setState(614);
				match(TILDE);
				setState(615);
				match(LPAREN);
				setState(616);
				numExpr(0);
				setState(617);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new StrFuncSTRINGSContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(619);
				match(STRINGS);
				setState(620);
				match(LPAREN);
				setState(621);
				numExpr(0);
				setState(622);
				match(COMMA);
				setState(623);
				strExpr(0);
				setState(624);
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
		enterRule(_localctx, 68, RULE_string);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(628);
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
		int _startState = 70;
		enterRecursionRule(_localctx, 70, RULE_strExpr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(634);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STRINGLITERAL:
				{
				setState(631);
				string();
				}
				break;
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(632);
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
				setState(633);
				strFunc();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(641);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,71,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StrExprContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_strExpr);
					setState(636);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(637);
					match(PLUS);
					setState(638);
					strExpr(2);
					}
					} 
				}
				setState(643);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,71,_ctx);
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
		enterRule(_localctx, 72, RULE_numFunc);
		try {
			setState(755);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,72,_ctx) ) {
			case 1:
				_localctx = new NumFuncPIContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(644);
				match(PI);
				}
				break;
			case 2:
				_localctx = new NumFuncTIMEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(645);
				match(TIME);
				}
				break;
			case 3:
				_localctx = new NumFuncRNDContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(646);
				match(RND);
				}
				break;
			case 4:
				_localctx = new NumFuncRND0Context(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(647);
				match(RND0);
				}
				break;
			case 5:
				_localctx = new NumFuncRND1Context(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(648);
				match(RND1);
				}
				break;
			case 6:
				_localctx = new NumFuncRNDRANGEContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(649);
				match(RND);
				setState(650);
				match(LPAREN);
				setState(651);
				numExpr(0);
				setState(652);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new NumFuncLNContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(654);
				match(LN);
				setState(655);
				match(LPAREN);
				setState(656);
				numExpr(0);
				setState(657);
				match(RPAREN);
				}
				break;
			case 8:
				_localctx = new NumFuncLOGContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(659);
				match(LOG);
				setState(660);
				match(LPAREN);
				setState(661);
				numExpr(0);
				setState(662);
				match(RPAREN);
				}
				break;
			case 9:
				_localctx = new NumFuncEXPContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(664);
				match(EXP);
				setState(665);
				match(LPAREN);
				setState(666);
				numExpr(0);
				setState(667);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new NumFuncATNContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(669);
				match(ATN);
				setState(670);
				match(LPAREN);
				setState(671);
				numExpr(0);
				setState(672);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new NumFuncTANContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(674);
				match(TAN);
				setState(675);
				match(LPAREN);
				setState(676);
				numExpr(0);
				setState(677);
				match(RPAREN);
				}
				break;
			case 12:
				_localctx = new NumFuncCOSContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(679);
				match(COS);
				setState(680);
				match(LPAREN);
				setState(681);
				numExpr(0);
				setState(682);
				match(RPAREN);
				}
				break;
			case 13:
				_localctx = new NumFuncSINContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(684);
				match(SIN);
				setState(685);
				match(LPAREN);
				setState(686);
				numExpr(0);
				setState(687);
				match(RPAREN);
				}
				break;
			case 14:
				_localctx = new NumFuncABSContext(_localctx);
				enterOuterAlt(_localctx, 14);
				{
				setState(689);
				match(ABS);
				setState(690);
				match(LPAREN);
				setState(691);
				numExpr(0);
				setState(692);
				match(RPAREN);
				}
				break;
			case 15:
				_localctx = new NumFuncACSContext(_localctx);
				enterOuterAlt(_localctx, 15);
				{
				setState(694);
				match(ACS);
				setState(695);
				match(LPAREN);
				setState(696);
				numExpr(0);
				setState(697);
				match(RPAREN);
				}
				break;
			case 16:
				_localctx = new NumFuncASNContext(_localctx);
				enterOuterAlt(_localctx, 16);
				{
				setState(699);
				match(ASN);
				setState(700);
				match(LPAREN);
				setState(701);
				numExpr(0);
				setState(702);
				match(RPAREN);
				}
				break;
			case 17:
				_localctx = new NumFuncDEGContext(_localctx);
				enterOuterAlt(_localctx, 17);
				{
				setState(704);
				match(DEG);
				setState(705);
				match(LPAREN);
				setState(706);
				numExpr(0);
				setState(707);
				match(RPAREN);
				}
				break;
			case 18:
				_localctx = new NumFuncRADContext(_localctx);
				enterOuterAlt(_localctx, 18);
				{
				setState(709);
				match(RAD);
				setState(710);
				match(LPAREN);
				setState(711);
				numExpr(0);
				setState(712);
				match(RPAREN);
				}
				break;
			case 19:
				_localctx = new NumFuncSQRContext(_localctx);
				enterOuterAlt(_localctx, 19);
				{
				setState(714);
				match(SQR);
				setState(715);
				match(LPAREN);
				setState(716);
				numExpr(0);
				setState(717);
				match(RPAREN);
				}
				break;
			case 20:
				_localctx = new NumFuncSGNContext(_localctx);
				enterOuterAlt(_localctx, 20);
				{
				setState(719);
				match(SGN);
				setState(720);
				match(LPAREN);
				setState(721);
				numExpr(0);
				setState(722);
				match(RPAREN);
				}
				break;
			case 21:
				_localctx = new NumFuncASCContext(_localctx);
				enterOuterAlt(_localctx, 21);
				{
				setState(724);
				match(ASC);
				setState(725);
				match(LPAREN);
				setState(726);
				strExpr(0);
				setState(727);
				match(RPAREN);
				}
				break;
			case 22:
				_localctx = new NumFuncLENContext(_localctx);
				enterOuterAlt(_localctx, 22);
				{
				setState(729);
				match(LEN);
				setState(730);
				match(LPAREN);
				setState(731);
				strExpr(0);
				setState(732);
				match(RPAREN);
				}
				break;
			case 23:
				_localctx = new NumFuncINSTR2Context(_localctx);
				enterOuterAlt(_localctx, 23);
				{
				setState(734);
				match(INSTR);
				setState(735);
				match(LPAREN);
				setState(736);
				strExpr(0);
				setState(737);
				match(COMMA);
				setState(738);
				strExpr(0);
				setState(739);
				match(RPAREN);
				}
				break;
			case 24:
				_localctx = new NumFuncINSTR3Context(_localctx);
				enterOuterAlt(_localctx, 24);
				{
				setState(741);
				match(INSTR);
				setState(742);
				match(LPAREN);
				setState(743);
				strExpr(0);
				setState(744);
				match(COMMA);
				setState(745);
				strExpr(0);
				setState(746);
				match(COMMA);
				setState(747);
				numExpr(0);
				setState(748);
				match(RPAREN);
				}
				break;
			case 25:
				_localctx = new NumFuncVALContext(_localctx);
				enterOuterAlt(_localctx, 25);
				{
				setState(750);
				match(VAL);
				setState(751);
				match(LPAREN);
				setState(752);
				strExpr(0);
				setState(753);
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
		int _startState = 74;
		enterRecursionRule(_localctx, 74, RULE_numExpr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(771);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,73,_ctx) ) {
			case 1:
				{
				_localctx = new NumExprNumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(758);
				number();
				}
				break;
			case 2:
				{
				_localctx = new NumExprVarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(759);
				numVar();
				}
				break;
			case 3:
				{
				_localctx = new NumExprFuncContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(760);
				numFunc();
				}
				break;
			case 4:
				{
				_localctx = new NumExprNOTContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(761);
				match(NOT);
				setState(762);
				numExpr(16);
				}
				break;
			case 5:
				{
				_localctx = new NumExprNestedContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(763);
				match(LPAREN);
				setState(764);
				numExpr(0);
				setState(765);
				match(RPAREN);
				}
				break;
			case 6:
				{
				_localctx = new NumExprStrRelopContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(767);
				strExpr(0);
				setState(768);
				compare();
				setState(769);
				strExpr(0);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(815);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,75,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(813);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,74,_ctx) ) {
					case 1:
						{
						_localctx = new NumExprHatContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(773);
						if (!(precpred(_ctx, 14))) throw new FailedPredicateException(this, "precpred(_ctx, 14)");
						setState(774);
						match(HAT);
						setState(775);
						numExpr(14);
						}
						break;
					case 2:
						{
						_localctx = new NumExprMultiplyContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(776);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(777);
						match(MULTIPLY);
						setState(778);
						numExpr(14);
						}
						break;
					case 3:
						{
						_localctx = new NumExprDivideContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(779);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(780);
						match(DIVIDE);
						setState(781);
						numExpr(13);
						}
						break;
					case 4:
						{
						_localctx = new NumExprDIVContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(782);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(783);
						match(DIV);
						setState(784);
						numExpr(12);
						}
						break;
					case 5:
						{
						_localctx = new NumExprMODContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(785);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(786);
						match(MOD);
						setState(787);
						numExpr(11);
						}
						break;
					case 6:
						{
						_localctx = new NumExprPlusContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(788);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(789);
						match(PLUS);
						setState(790);
						numExpr(10);
						}
						break;
					case 7:
						{
						_localctx = new NumExprSubtractContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(791);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(792);
						match(MINUS);
						setState(793);
						numExpr(9);
						}
						break;
					case 8:
						{
						_localctx = new NumExprNumRelopContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(794);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(795);
						compare();
						setState(796);
						numExpr(8);
						}
						break;
					case 9:
						{
						_localctx = new NumExprSHLContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(798);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(799);
						match(SHL);
						setState(800);
						numExpr(6);
						}
						break;
					case 10:
						{
						_localctx = new NumExprSHRContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(801);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(802);
						match(SHR);
						setState(803);
						numExpr(5);
						}
						break;
					case 11:
						{
						_localctx = new NumExprANDContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(804);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(805);
						match(AND);
						setState(806);
						numExpr(4);
						}
						break;
					case 12:
						{
						_localctx = new NumExprORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(807);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(808);
						match(OR);
						setState(809);
						numExpr(3);
						}
						break;
					case 13:
						{
						_localctx = new NumExprEORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(810);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(811);
						match(EOR);
						setState(812);
						numExpr(2);
						}
						break;
					}
					} 
				}
				setState(817);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,75,_ctx);
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
		enterRule(_localctx, 76, RULE_compare);
		try {
			setState(824);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case EQ:
				_localctx = new CompareEQContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(818);
				match(EQ);
				}
				break;
			case NE:
				_localctx = new CompareNEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(819);
				match(NE);
				}
				break;
			case GT:
				_localctx = new CompareGTContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(820);
				match(GT);
				}
				break;
			case GE:
				_localctx = new CompareGEContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(821);
				match(GE);
				}
				break;
			case LT:
				_localctx = new CompareLTContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(822);
				match(LT);
				}
				break;
			case LE:
				_localctx = new CompareLEContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(823);
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
		case 35:
			return strExpr_sempred((StrExprContext)_localctx, predIndex);
		case 37:
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3u\u033d\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\3\2\7\2R\n\2\f\2\16"+
		"\2U\13\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3c\n\3\3\4"+
		"\3\4\3\4\5\4h\n\4\7\4j\n\4\f\4\16\4m\13\4\3\4\5\4p\n\4\3\5\3\5\5\5t\n"+
		"\5\3\6\7\6w\n\6\f\6\16\6z\13\6\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\7\b"+
		"\u0085\n\b\f\b\16\b\u0088\13\b\3\b\3\b\3\b\3\b\7\b\u008e\n\b\f\b\16\b"+
		"\u0091\13\b\3\b\3\b\3\b\5\b\u0096\n\b\3\b\3\b\5\b\u009a\n\b\3\b\3\b\3"+
		"\b\3\b\5\b\u00a0\n\b\3\b\3\b\5\b\u00a4\n\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b"+
		"\5\b\u00ad\n\b\3\b\3\b\5\b\u00b1\n\b\3\b\3\b\3\b\3\b\3\b\3\b\5\b\u00b9"+
		"\n\b\3\b\3\b\3\b\3\b\3\b\5\b\u00c0\n\b\3\b\3\b\3\b\5\b\u00c5\n\b\3\b\3"+
		"\b\3\b\5\b\u00ca\n\b\3\b\3\b\3\b\5\b\u00cf\n\b\3\b\3\b\3\b\3\b\3\b\3\b"+
		"\5\b\u00d7\n\b\3\b\3\b\5\b\u00db\n\b\3\b\5\b\u00de\n\b\5\b\u00e0\n\b\3"+
		"\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\7\b\u00ea\n\b\f\b\16\b\u00ed\13\b\3\b\3"+
		"\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\7\b\u00f8\n\b\f\b\16\b\u00fb\13\b\3\b\3"+
		"\b\3\b\3\b\3\b\7\b\u0102\n\b\f\b\16\b\u0105\13\b\3\b\3\b\5\b\u0109\n\b"+
		"\3\b\3\b\3\b\5\b\u010e\n\b\3\b\3\b\3\b\3\b\3\b\7\b\u0115\n\b\f\b\16\b"+
		"\u0118\13\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\7\b\u0123\n\b\f\b\16\b"+
		"\u0126\13\b\3\b\3\b\3\b\3\b\7\b\u012c\n\b\f\b\16\b\u012f\13\b\3\b\3\b"+
		"\3\b\3\b\3\b\7\b\u0136\n\b\f\b\16\b\u0139\13\b\3\b\3\b\5\b\u013d\n\b\3"+
		"\t\3\t\3\n\3\n\5\n\u0143\n\n\3\13\3\13\3\13\5\13\u0148\n\13\3\f\3\f\3"+
		"\r\3\r\3\r\3\r\3\r\3\r\5\r\u0152\n\r\3\r\3\r\7\r\u0156\n\r\f\r\16\r\u0159"+
		"\13\r\3\r\3\r\3\r\3\r\3\r\3\r\5\r\u0161\n\r\3\r\3\r\7\r\u0165\n\r\f\r"+
		"\16\r\u0168\13\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3"+
		"\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\5\r\u017f\n\r\3\r\3\r\3\r\3\r\5\r\u0185"+
		"\n\r\3\r\3\r\3\r\3\r\5\r\u018b\n\r\3\r\5\r\u018e\n\r\3\16\3\16\3\16\3"+
		"\16\3\16\3\16\5\16\u0196\n\16\3\16\3\16\7\16\u019a\n\16\f\16\16\16\u019d"+
		"\13\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\5\16\u01a8\n\16\3"+
		"\17\3\17\3\17\5\17\u01ad\n\17\3\20\3\20\3\21\3\21\3\22\3\22\3\23\3\23"+
		"\3\24\3\24\3\24\3\24\3\24\3\24\5\24\u01bd\n\24\3\24\3\24\7\24\u01c1\n"+
		"\24\f\24\16\24\u01c4\13\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24"+
		"\5\24\u01cf\n\24\3\25\3\25\3\25\3\25\3\25\7\25\u01d6\n\25\f\25\16\25\u01d9"+
		"\13\25\3\25\3\25\3\26\3\26\3\26\7\26\u01e0\n\26\f\26\16\26\u01e3\13\26"+
		"\3\27\5\27\u01e6\n\27\3\27\3\27\3\27\5\27\u01eb\n\27\3\27\7\27\u01ee\n"+
		"\27\f\27\16\27\u01f1\13\27\3\30\3\30\3\30\7\30\u01f6\n\30\f\30\16\30\u01f9"+
		"\13\30\3\31\3\31\3\31\7\31\u01fe\n\31\f\31\16\31\u0201\13\31\3\32\5\32"+
		"\u0204\n\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\5\32\u020e\n\32\3"+
		"\33\6\33\u0211\n\33\r\33\16\33\u0212\3\34\5\34\u0216\n\34\3\34\5\34\u0219"+
		"\n\34\3\34\3\34\3\34\5\34\u021e\n\34\7\34\u0220\n\34\f\34\16\34\u0223"+
		"\13\34\3\35\3\35\5\35\u0227\n\35\3\36\3\36\3\36\3\36\5\36\u022d\n\36\3"+
		"\37\5\37\u0230\n\37\3\37\3\37\3 \3 \3!\3!\3\"\5\"\u0239\n\"\3\"\3\"\3"+
		"#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3"+
		"#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3"+
		"#\3#\3#\3#\3#\3#\3#\3#\3#\3#\5#\u0275\n#\3$\3$\3%\3%\3%\3%\5%\u027d\n"+
		"%\3%\3%\3%\7%\u0282\n%\f%\16%\u0285\13%\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&"+
		"\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&"+
		"\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&"+
		"\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&"+
		"\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&\3&"+
		"\3&\3&\3&\3&\3&\3&\3&\3&\3&\5&\u02f6\n&\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3"+
		"\'\3\'\3\'\3\'\3\'\3\'\3\'\5\'\u0306\n\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3"+
		"\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'"+
		"\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\7\'\u0330"+
		"\n\'\f\'\16\'\u0333\13\'\3(\3(\3(\3(\3(\3(\5(\u033b\n(\3(\2\4HL)\2\4\6"+
		"\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLN\2\6"+
		"\4\2\30\30dd\3\2gi\5\2ZZ]]bb\3\2MN\2\u03c0\2S\3\2\2\2\4b\3\2\2\2\6o\3"+
		"\2\2\2\bs\3\2\2\2\nx\3\2\2\2\f{\3\2\2\2\16\u013c\3\2\2\2\20\u013e\3\2"+
		"\2\2\22\u0142\3\2\2\2\24\u0147\3\2\2\2\26\u0149\3\2\2\2\30\u018d\3\2\2"+
		"\2\32\u01a7\3\2\2\2\34\u01ac\3\2\2\2\36\u01ae\3\2\2\2 \u01b0\3\2\2\2\""+
		"\u01b2\3\2\2\2$\u01b4\3\2\2\2&\u01ce\3\2\2\2(\u01d0\3\2\2\2*\u01dc\3\2"+
		"\2\2,\u01e5\3\2\2\2.\u01f2\3\2\2\2\60\u01fa\3\2\2\2\62\u020d\3\2\2\2\64"+
		"\u0210\3\2\2\2\66\u0215\3\2\2\28\u0226\3\2\2\2:\u022c\3\2\2\2<\u022f\3"+
		"\2\2\2>\u0233\3\2\2\2@\u0235\3\2\2\2B\u0238\3\2\2\2D\u0274\3\2\2\2F\u0276"+
		"\3\2\2\2H\u027c\3\2\2\2J\u02f5\3\2\2\2L\u0305\3\2\2\2N\u033a\3\2\2\2P"+
		"R\5\4\3\2QP\3\2\2\2RU\3\2\2\2SQ\3\2\2\2ST\3\2\2\2TV\3\2\2\2US\3\2\2\2"+
		"VW\7\2\2\3W\3\3\2\2\2Xc\7Y\2\2YZ\7\\\2\2Zc\7Y\2\2[\\\5\6\4\2\\]\7Y\2\2"+
		"]c\3\2\2\2^_\5\f\7\2_`\5\6\4\2`a\7Y\2\2ac\3\2\2\2bX\3\2\2\2bY\3\2\2\2"+
		"b[\3\2\2\2b^\3\2\2\2c\5\3\2\2\2dk\5\16\b\2eg\7\\\2\2fh\5\16\b\2gf\3\2"+
		"\2\2gh\3\2\2\2hj\3\2\2\2ie\3\2\2\2jm\3\2\2\2ki\3\2\2\2kl\3\2\2\2lp\3\2"+
		"\2\2mk\3\2\2\2np\t\2\2\2od\3\2\2\2on\3\2\2\2p\7\3\2\2\2qt\5\6\4\2rt\5"+
		"\4\3\2sq\3\2\2\2sr\3\2\2\2t\t\3\2\2\2uw\5\b\5\2vu\3\2\2\2wz\3\2\2\2xv"+
		"\3\2\2\2xy\3\2\2\2y\13\3\2\2\2zx\3\2\2\2{|\7q\2\2|\r\3\2\2\2}\u013d\7"+
		"\3\2\2~\177\7\4\2\2\177\u013d\5H%\2\u0080\u0081\7\5\2\2\u0081\u0086\5"+
		"\22\n\2\u0082\u0083\7]\2\2\u0083\u0085\5\22\n\2\u0084\u0082\3\2\2\2\u0085"+
		"\u0088\3\2\2\2\u0086\u0084\3\2\2\2\u0086\u0087\3\2\2\2\u0087\u013d\3\2"+
		"\2\2\u0088\u0086\3\2\2\2\u0089\u008a\7\7\2\2\u008a\u008f\5(\25\2\u008b"+
		"\u008c\7]\2\2\u008c\u008e\5(\25\2\u008d\u008b\3\2\2\2\u008e\u0091\3\2"+
		"\2\2\u008f\u008d\3\2\2\2\u008f\u0090\3\2\2\2\u0090\u013d\3\2\2\2\u0091"+
		"\u008f\3\2\2\2\u0092\u013d\7\t\2\2\u0093\u0095\7@\2\2\u0094\u0096\58\35"+
		"\2\u0095\u0094\3\2\2\2\u0095\u0096\3\2\2\2\u0096\u013d\3\2\2\2\u0097\u0099"+
		"\7\33\2\2\u0098\u009a\58\35\2\u0099\u0098\3\2\2\2\u0099\u009a\3\2\2\2"+
		"\u009a\u013d\3\2\2\2\u009b\u009c\7\6\2\2\u009c\u009d\5\20\t\2\u009d\u009f"+
		"\7_\2\2\u009e\u00a0\5,\27\2\u009f\u009e\3\2\2\2\u009f\u00a0\3\2\2\2\u00a0"+
		"\u00a1\3\2\2\2\u00a1\u00a3\7a\2\2\u00a2\u00a4\7\\\2\2\u00a3\u00a2\3\2"+
		"\2\2\u00a3\u00a4\3\2\2\2\u00a4\u00a5\3\2\2\2\u00a5\u00a6\5\n\6\2\u00a6"+
		"\u00a7\7\13\2\2\u00a7\u013d\3\2\2\2\u00a8\u00a9\7\6\2\2\u00a9\u00aa\7"+
		"f\2\2\u00aa\u00ac\7_\2\2\u00ab\u00ad\5,\27\2\u00ac\u00ab\3\2\2\2\u00ac"+
		"\u00ad\3\2\2\2\u00ad\u00ae\3\2\2\2\u00ae\u00b0\7a\2\2\u00af\u00b1\7\\"+
		"\2\2\u00b0\u00af\3\2\2\2\u00b0\u00b1\3\2\2\2\u00b1\u00b2\3\2\2\2\u00b2"+
		"\u00b3\5\n\6\2\u00b3\u00b4\7\f\2\2\u00b4\u013d\3\2\2\2\u00b5\u00b6\5\20"+
		"\t\2\u00b6\u00b8\7_\2\2\u00b7\u00b9\5.\30\2\u00b8\u00b7\3\2\2\2\u00b8"+
		"\u00b9\3\2\2\2\u00b9\u00ba\3\2\2\2\u00ba\u00bb\7a\2\2\u00bb\u013d\3\2"+
		"\2\2\u00bc\u00bd\7\17\2\2\u00bd\u00bf\58\35\2\u00be\u00c0\7\24\2\2\u00bf"+
		"\u00be\3\2\2\2\u00bf\u00c0\3\2\2\2\u00c0\u00c1\3\2\2\2\u00c1\u00c4\5\6"+
		"\4\2\u00c2\u00c3\7\b\2\2\u00c3\u00c5\5\6\4\2\u00c4\u00c2\3\2\2\2\u00c4"+
		"\u00c5\3\2\2\2\u00c5\u013d\3\2\2\2\u00c6\u00c7\7\17\2\2\u00c7\u00c9\5"+
		"8\35\2\u00c8\u00ca\7\24\2\2\u00c9\u00c8\3\2\2\2\u00c9\u00ca\3\2\2\2\u00ca"+
		"\u00cb\3\2\2\2\u00cb\u00ce\5\n\6\2\u00cc\u00cd\7\b\2\2\u00cd\u00cf\5\n"+
		"\6\2\u00ce\u00cc\3\2\2\2\u00ce\u00cf\3\2\2\2\u00cf\u00d0\3\2\2\2\u00d0"+
		"\u00d1\7\n\2\2\u00d1\u013d\3\2\2\2\u00d2\u00d6\7\20\2\2\u00d3\u00d4\5"+
		"H%\2\u00d4\u00d5\7]\2\2\u00d5\u00d7\3\2\2\2\u00d6\u00d3\3\2\2\2\u00d6"+
		"\u00d7\3\2\2\2\u00d7\u00d8\3\2\2\2\u00d8\u013d\5*\26\2\u00d9\u00db\7\23"+
		"\2\2\u00da\u00d9\3\2\2\2\u00da\u00db\3\2\2\2\u00db\u00e0\3\2\2\2\u00dc"+
		"\u00de\7\21\2\2\u00dd\u00dc\3\2\2\2\u00dd\u00de\3\2\2\2\u00de\u00e0\3"+
		"\2\2\2\u00df\u00da\3\2\2\2\u00df\u00dd\3\2\2\2\u00e0\u00e1\3\2\2\2\u00e1"+
		"\u00e2\5&\24\2\u00e2\u00e3\7@\2\2\u00e3\u00eb\58\35\2\u00e4\u00e5\7]\2"+
		"\2\u00e5\u00e6\5&\24\2\u00e6\u00e7\7@\2\2\u00e7\u00e8\58\35\2\u00e8\u00ea"+
		"\3\2\2\2\u00e9\u00e4\3\2\2\2\u00ea\u00ed\3\2\2\2\u00eb\u00e9\3\2\2\2\u00eb"+
		"\u00ec\3\2\2\2\u00ec\u013d\3\2\2\2\u00ed\u00eb\3\2\2\2\u00ee\u00ef\7\22"+
		"\2\2\u00ef\u00f0\5&\24\2\u00f0\u00f1\7@\2\2\u00f1\u00f9\58\35\2\u00f2"+
		"\u00f3\7]\2\2\u00f3\u00f4\5&\24\2\u00f4\u00f5\7@\2\2\u00f5\u00f6\58\35"+
		"\2\u00f6\u00f8\3\2\2\2\u00f7\u00f2\3\2\2\2\u00f8\u00fb\3\2\2\2\u00f9\u00f7"+
		"\3\2\2\2\u00f9\u00fa\3\2\2\2\u00fa\u013d\3\2\2\2\u00fb\u00f9\3\2\2\2\u00fc"+
		"\u00fd\7\22\2\2\u00fd\u00fe\7\7\2\2\u00fe\u0103\5(\25\2\u00ff\u0100\7"+
		"]\2\2\u0100\u0102\5(\25\2\u0101\u00ff\3\2\2\2\u0102\u0105\3\2\2\2\u0103"+
		"\u0101\3\2\2\2\u0103\u0104\3\2\2\2\u0104\u013d\3\2\2\2\u0105\u0103\3\2"+
		"\2\2\u0106\u0108\7\25\2\2\u0107\u0109\5\66\34\2\u0108\u0107\3\2\2\2\u0108"+
		"\u0109\3\2\2\2\u0109\u013d\3\2\2\2\u010a\u010b\7f\2\2\u010b\u010d\7_\2"+
		"\2\u010c\u010e\5.\30\2\u010d\u010c\3\2\2\2\u010d\u010e\3\2\2\2\u010e\u010f"+
		"\3\2\2\2\u010f\u013d\7a\2\2\u0110\u0111\7\27\2\2\u0111\u0116\5&\24\2\u0112"+
		"\u0113\7]\2\2\u0113\u0115\5&\24\2\u0114\u0112\3\2\2\2\u0115\u0118\3\2"+
		"\2\2\u0116\u0114\3\2\2\2\u0116\u0117\3\2\2\2\u0117\u013d\3\2\2\2\u0118"+
		"\u0116\3\2\2\2\u0119\u013d\7\32\2\2\u011a\u013d\7\35\2\2\u011b\u013d\7"+
		"\36\2\2\u011c\u011d\7\37\2\2\u011d\u011e\5\36\20\2\u011e\u011f\7_\2\2"+
		"\u011f\u0124\5\34\17\2\u0120\u0121\7]\2\2\u0121\u0123\5\34\17\2\u0122"+
		"\u0120\3\2\2\2\u0123\u0126\3\2\2\2\u0124\u0122\3\2\2\2\u0124\u0125\3\2"+
		"\2\2\u0125\u0127\3\2\2\2\u0126\u0124\3\2\2\2\u0127\u0128\7a\2\2\u0128"+
		"\u013d\3\2\2\2\u0129\u012d\7\31\2\2\u012a\u012c\5\b\5\2\u012b\u012a\3"+
		"\2\2\2\u012c\u012f\3\2\2\2\u012d\u012b\3\2\2\2\u012d\u012e\3\2\2\2\u012e"+
		"\u0130\3\2\2\2\u012f\u012d\3\2\2\2\u0130\u0131\7 \2\2\u0131\u013d\58\35"+
		"\2\u0132\u0133\7!\2\2\u0133\u0137\58\35\2\u0134\u0136\5\b\5\2\u0135\u0134"+
		"\3\2\2\2\u0136\u0139\3\2\2\2\u0137\u0135\3\2\2\2\u0137\u0138\3\2\2\2\u0138"+
		"\u013a\3\2\2\2\u0139\u0137\3\2\2\2\u013a\u013b\7\r\2\2\u013b\u013d\3\2"+
		"\2\2\u013c}\3\2\2\2\u013c~\3\2\2\2\u013c\u0080\3\2\2\2\u013c\u0089\3\2"+
		"\2\2\u013c\u0092\3\2\2\2\u013c\u0093\3\2\2\2\u013c\u0097\3\2\2\2\u013c"+
		"\u009b\3\2\2\2\u013c\u00a8\3\2\2\2\u013c\u00b5\3\2\2\2\u013c\u00bc\3\2"+
		"\2\2\u013c\u00c6\3\2\2\2\u013c\u00d2\3\2\2\2\u013c\u00df\3\2\2\2\u013c"+
		"\u00ee\3\2\2\2\u013c\u00fc\3\2\2\2\u013c\u0106\3\2\2\2\u013c\u010a\3\2"+
		"\2\2\u013c\u0110\3\2\2\2\u013c\u0119\3\2\2\2\u013c\u011a\3\2\2\2\u013c"+
		"\u011b\3\2\2\2\u013c\u011c\3\2\2\2\u013c\u0129\3\2\2\2\u013c\u0132\3\2"+
		"\2\2\u013d\17\3\2\2\2\u013e\u013f\t\3\2\2\u013f\21\3\2\2\2\u0140\u0143"+
		"\5:\36\2\u0141\u0143\5F$\2\u0142\u0140\3\2\2\2\u0142\u0141\3\2\2\2\u0143"+
		"\23\3\2\2\2\u0144\u0148\5\30\r\2\u0145\u0148\5\32\16\2\u0146\u0148\5\26"+
		"\f\2\u0147\u0144\3\2\2\2\u0147\u0145\3\2\2\2\u0147\u0146\3\2\2\2\u0148"+
		"\25\3\2\2\2\u0149\u014a\5$\23\2\u014a\27\3\2\2\2\u014b\u018e\5\36\20\2"+
		"\u014c\u0157\5\36\20\2\u014d\u014e\7_\2\2\u014e\u0151\5L\'\2\u014f\u0150"+
		"\7]\2\2\u0150\u0152\5L\'\2\u0151\u014f\3\2\2\2\u0151\u0152\3\2\2\2\u0152"+
		"\u0153\3\2\2\2\u0153\u0154\7a\2\2\u0154\u0156\3\2\2\2\u0155\u014d\3\2"+
		"\2\2\u0156\u0159\3\2\2\2\u0157\u0155\3\2\2\2\u0157\u0158\3\2\2\2\u0158"+
		"\u018e\3\2\2\2\u0159\u0157\3\2\2\2\u015a\u018e\5 \21\2\u015b\u0166\5 "+
		"\21\2\u015c\u015d\7_\2\2\u015d\u0160\5L\'\2\u015e\u015f\7]\2\2\u015f\u0161"+
		"\5L\'\2\u0160\u015e\3\2\2\2\u0160\u0161\3\2\2\2\u0161\u0162\3\2\2\2\u0162"+
		"\u0163\7a\2\2\u0163\u0165\3\2\2\2\u0164\u015c\3\2\2\2\u0165\u0168\3\2"+
		"\2\2\u0166\u0164\3\2\2\2\u0166\u0167\3\2\2\2\u0167\u018e\3\2\2\2\u0168"+
		"\u0166\3\2\2\2\u0169\u016a\5\26\f\2\u016a\u016b\5\36\20\2\u016b\u018e"+
		"\3\2\2\2\u016c\u016d\5\26\f\2\u016d\u016e\7_\2\2\u016e\u016f\5L\'\2\u016f"+
		"\u0170\7a\2\2\u0170\u0171\5\36\20\2\u0171\u018e\3\2\2\2\u0172\u0173\5"+
		"\26\f\2\u0173\u0174\5 \21\2\u0174\u018e\3\2\2\2\u0175\u0176\5\26\f\2\u0176"+
		"\u0177\7_\2\2\u0177\u0178\5L\'\2\u0178\u0179\7a\2\2\u0179\u017a\5 \21"+
		"\2\u017a\u018e\3\2\2\2\u017b\u017c\7h\2\2\u017c\u017e\7_\2\2\u017d\u017f"+
		"\5.\30\2\u017e\u017d\3\2\2\2\u017e\u017f\3\2\2\2\u017f\u0180\3\2\2\2\u0180"+
		"\u018e\7a\2\2\u0181\u0182\7g\2\2\u0182\u0184\7_\2\2\u0183\u0185\5.\30"+
		"\2\u0184\u0183\3\2\2\2\u0184\u0185\3\2\2\2\u0185\u0186\3\2\2\2\u0186\u018e"+
		"\7a\2\2\u0187\u0188\7i\2\2\u0188\u018a\7_\2\2\u0189\u018b\5.\30\2\u018a"+
		"\u0189\3\2\2\2\u018a\u018b\3\2\2\2\u018b\u018c\3\2\2\2\u018c\u018e\7a"+
		"\2\2\u018d\u014b\3\2\2\2\u018d\u014c\3\2\2\2\u018d\u015a\3\2\2\2\u018d"+
		"\u015b\3\2\2\2\u018d\u0169\3\2\2\2\u018d\u016c\3\2\2\2\u018d\u0172\3\2"+
		"\2\2\u018d\u0175\3\2\2\2\u018d\u017b\3\2\2\2\u018d\u0181\3\2\2\2\u018d"+
		"\u0187\3\2\2\2\u018e\31\3\2\2\2\u018f\u01a8\5\"\22\2\u0190\u019b\5\"\22"+
		"\2\u0191\u0192\7_\2\2\u0192\u0195\5L\'\2\u0193\u0194\7]\2\2\u0194\u0196"+
		"\5L\'\2\u0195\u0193\3\2\2\2\u0195\u0196\3\2\2\2\u0196\u0197\3\2\2\2\u0197"+
		"\u0198\7a\2\2\u0198\u019a\3\2\2\2\u0199\u0191\3\2\2\2\u019a\u019d\3\2"+
		"\2\2\u019b\u0199\3\2\2\2\u019b\u019c\3\2\2\2\u019c\u01a8\3\2\2\2\u019d"+
		"\u019b\3\2\2\2\u019e\u019f\5\26\f\2\u019f\u01a0\5\"\22\2\u01a0\u01a8\3"+
		"\2\2\2\u01a1\u01a2\5\26\f\2\u01a2\u01a3\7_\2\2\u01a3\u01a4\5L\'\2\u01a4"+
		"\u01a5\7a\2\2\u01a5\u01a6\5\"\22\2\u01a6\u01a8\3\2\2\2\u01a7\u018f\3\2"+
		"\2\2\u01a7\u0190\3\2\2\2\u01a7\u019e\3\2\2\2\u01a7\u01a1\3\2\2\2\u01a8"+
		"\33\3\2\2\2\u01a9\u01ad\5\36\20\2\u01aa\u01ad\5 \21\2\u01ab\u01ad\5\""+
		"\22\2\u01ac\u01a9\3\2\2\2\u01ac\u01aa\3\2\2\2\u01ac\u01ab\3\2\2\2\u01ad"+
		"\35\3\2\2\2\u01ae\u01af\7j\2\2\u01af\37\3\2\2\2\u01b0\u01b1\7k\2\2\u01b1"+
		"!\3\2\2\2\u01b2\u01b3\7l\2\2\u01b3#\3\2\2\2\u01b4\u01b5\7m\2\2\u01b5%"+
		"\3\2\2\2\u01b6\u01cf\5\24\13\2\u01b7\u01c2\5\24\13\2\u01b8\u01b9\7_\2"+
		"\2\u01b9\u01bc\5L\'\2\u01ba\u01bb\7]\2\2\u01bb\u01bd\5L\'\2\u01bc\u01ba"+
		"\3\2\2\2\u01bc\u01bd\3\2\2\2\u01bd\u01be\3\2\2\2\u01be\u01bf\7a\2\2\u01bf"+
		"\u01c1\3\2\2\2\u01c0\u01b8\3\2\2\2\u01c1\u01c4\3\2\2\2\u01c2\u01c0\3\2"+
		"\2\2\u01c2\u01c3\3\2\2\2\u01c3\u01cf\3\2\2\2\u01c4\u01c2\3\2\2\2\u01c5"+
		"\u01c6\5\26\f\2\u01c6\u01c7\5\36\20\2\u01c7\u01cf\3\2\2\2\u01c8\u01c9"+
		"\5\26\f\2\u01c9\u01ca\7_\2\2\u01ca\u01cb\5L\'\2\u01cb\u01cc\7a\2\2\u01cc"+
		"\u01cd\5\36\20\2\u01cd\u01cf\3\2\2\2\u01ce\u01b6\3\2\2\2\u01ce\u01b7\3"+
		"\2\2\2\u01ce\u01c5\3\2\2\2\u01ce\u01c8\3\2\2\2\u01cf\'\3\2\2\2\u01d0\u01d1"+
		"\5\24\13\2\u01d1\u01d2\7_\2\2\u01d2\u01d7\5L\'\2\u01d3\u01d4\7]\2\2\u01d4"+
		"\u01d6\5L\'\2\u01d5\u01d3\3\2\2\2\u01d6\u01d9\3\2\2\2\u01d7\u01d5\3\2"+
		"\2\2\u01d7\u01d8\3\2\2\2\u01d8\u01da\3\2\2\2\u01d9\u01d7\3\2\2\2\u01da"+
		"\u01db\7a\2\2\u01db)\3\2\2\2\u01dc\u01e1\5&\24\2\u01dd\u01de\7]\2\2\u01de"+
		"\u01e0\5&\24\2\u01df\u01dd\3\2\2\2\u01e0\u01e3\3\2\2\2\u01e1\u01df\3\2"+
		"\2\2\u01e1\u01e2\3\2\2\2\u01e2+\3\2\2\2\u01e3\u01e1\3\2\2\2\u01e4\u01e6"+
		"\7\33\2\2\u01e5\u01e4\3\2\2\2\u01e5\u01e6\3\2\2\2\u01e6\u01e7\3\2\2\2"+
		"\u01e7\u01ef\5\34\17\2\u01e8\u01ea\7]\2\2\u01e9\u01eb\7\33\2\2\u01ea\u01e9"+
		"\3\2\2\2\u01ea\u01eb\3\2\2\2\u01eb\u01ec\3\2\2\2\u01ec\u01ee\5\34\17\2"+
		"\u01ed\u01e8\3\2\2\2\u01ee\u01f1\3\2\2\2\u01ef\u01ed\3\2\2\2\u01ef\u01f0"+
		"\3\2\2\2\u01f0-\3\2\2\2\u01f1\u01ef\3\2\2\2\u01f2\u01f7\58\35\2\u01f3"+
		"\u01f4\7]\2\2\u01f4\u01f6\58\35\2\u01f5\u01f3\3\2\2\2\u01f6\u01f9\3\2"+
		"\2\2\u01f7\u01f5\3\2\2\2\u01f7\u01f8\3\2\2\2\u01f8/\3\2\2\2\u01f9\u01f7"+
		"\3\2\2\2\u01fa\u01ff\58\35\2\u01fb\u01fc\7]\2\2\u01fc\u01fe\58\35\2\u01fd"+
		"\u01fb\3\2\2\2\u01fe\u0201\3\2\2\2\u01ff\u01fd\3\2\2\2\u01ff\u0200\3\2"+
		"\2\2\u0200\61\3\2\2\2\u0201\u01ff\3\2\2\2\u0202\u0204\7[\2\2\u0203\u0202"+
		"\3\2\2\2\u0203\u0204\3\2\2\2\u0204\u0205\3\2\2\2\u0205\u020e\58\35\2\u0206"+
		"\u0207\7\34\2\2\u0207\u0208\7_\2\2\u0208\u0209\5L\'\2\u0209\u020a\7a\2"+
		"\2\u020a\u020e\3\2\2\2\u020b\u020c\7\34\2\2\u020c\u020e\5L\'\2\u020d\u0203"+
		"\3\2\2\2\u020d\u0206\3\2\2\2\u020d\u020b\3\2\2\2\u020e\63\3\2\2\2\u020f"+
		"\u0211\7Z\2\2\u0210\u020f\3\2\2\2\u0211\u0212\3\2\2\2\u0212\u0210\3\2"+
		"\2\2\u0212\u0213\3\2\2\2\u0213\65\3\2\2\2\u0214\u0216\5\64\33\2\u0215"+
		"\u0214\3\2\2\2\u0215\u0216\3\2\2\2\u0216\u0218\3\2\2\2\u0217\u0219\7]"+
		"\2\2\u0218\u0217\3\2\2\2\u0218\u0219\3\2\2\2\u0219\u021a\3\2\2\2\u021a"+
		"\u0221\5\62\32\2\u021b\u021d\t\4\2\2\u021c\u021e\5\62\32\2\u021d\u021c"+
		"\3\2\2\2\u021d\u021e\3\2\2\2\u021e\u0220\3\2\2\2\u021f\u021b\3\2\2\2\u0220"+
		"\u0223\3\2\2\2\u0221\u021f\3\2\2\2\u0221\u0222\3\2\2\2\u0222\67\3\2\2"+
		"\2\u0223\u0221\3\2\2\2\u0224\u0227\5L\'\2\u0225\u0227\5H%\2\u0226\u0224"+
		"\3\2\2\2\u0226\u0225\3\2\2\2\u02279\3\2\2\2\u0228\u022d\5<\37\2\u0229"+
		"\u022d\5B\"\2\u022a\u022d\5> \2\u022b\u022d\5@!\2\u022c\u0228\3\2\2\2"+
		"\u022c\u0229\3\2\2\2\u022c\u022a\3\2\2\2\u022c\u022b\3\2\2\2\u022d;\3"+
		"\2\2\2\u022e\u0230\t\5\2\2\u022f\u022e\3\2\2\2\u022f\u0230\3\2\2\2\u0230"+
		"\u0231\3\2\2\2\u0231\u0232\7q\2\2\u0232=\3\2\2\2\u0233\u0234\7o\2\2\u0234"+
		"?\3\2\2\2\u0235\u0236\7p\2\2\u0236A\3\2\2\2\u0237\u0239\t\5\2\2\u0238"+
		"\u0237\3\2\2\2\u0238\u0239\3\2\2\2\u0239\u023a\3\2\2\2\u023a\u023b\7r"+
		"\2\2\u023bC\3\2\2\2\u023c\u0275\7\66\2\2\u023d\u023e\79\2\2\u023e\u023f"+
		"\7_\2\2\u023f\u0240\5L\'\2\u0240\u0241\7a\2\2\u0241\u0275\3\2\2\2\u0242"+
		"\u0243\79\2\2\u0243\u0275\5L\'\2\u0244\u0245\7:\2\2\u0245\u0246\7_\2\2"+
		"\u0246\u0247\5H%\2\u0247\u0248\7]\2\2\u0248\u0249\5L\'\2\u0249\u024a\7"+
		"a\2\2\u024a\u0275\3\2\2\2\u024b\u024c\7;\2\2\u024c\u024d\7_\2\2\u024d"+
		"\u024e\5H%\2\u024e\u024f\7]\2\2\u024f\u0250\5L\'\2\u0250\u0251\7]\2\2"+
		"\u0251\u0252\5L\'\2\u0252\u0253\7a\2\2\u0253\u0275\3\2\2\2\u0254\u0255"+
		"\7;\2\2\u0255\u0256\7_\2\2\u0256\u0257\5H%\2\u0257\u0258\7]\2\2\u0258"+
		"\u0259\5L\'\2\u0259\u025a\7a\2\2\u025a\u0275\3\2\2\2\u025b\u025c\7<\2"+
		"\2\u025c\u025d\7_\2\2\u025d\u025e\5H%\2\u025e\u025f\7]\2\2\u025f\u0260"+
		"\5L\'\2\u0260\u0261\7a\2\2\u0261\u0275\3\2\2\2\u0262\u0263\7\67\2\2\u0263"+
		"\u0264\7_\2\2\u0264\u0265\5L\'\2\u0265\u0266\7a\2\2\u0266\u0275\3\2\2"+
		"\2\u0267\u0268\7\67\2\2\u0268\u0269\7[\2\2\u0269\u026a\7_\2\2\u026a\u026b"+
		"\5L\'\2\u026b\u026c\7a\2\2\u026c\u0275\3\2\2\2\u026d\u026e\78\2\2\u026e"+
		"\u026f\7_\2\2\u026f\u0270\5L\'\2\u0270\u0271\7]\2\2\u0271\u0272\5H%\2"+
		"\u0272\u0273\7a\2\2\u0273\u0275\3\2\2\2\u0274\u023c\3\2\2\2\u0274\u023d"+
		"\3\2\2\2\u0274\u0242\3\2\2\2\u0274\u0244\3\2\2\2\u0274\u024b\3\2\2\2\u0274"+
		"\u0254\3\2\2\2\u0274\u025b\3\2\2\2\u0274\u0262\3\2\2\2\u0274\u0267\3\2"+
		"\2\2\u0274\u026d\3\2\2\2\u0275E\3\2\2\2\u0276\u0277\7e\2\2\u0277G\3\2"+
		"\2\2\u0278\u0279\b%\1\2\u0279\u027d\5F$\2\u027a\u027d\5\32\16\2\u027b"+
		"\u027d\5D#\2\u027c\u0278\3\2\2\2\u027c\u027a\3\2\2\2\u027c\u027b\3\2\2"+
		"\2\u027d\u0283\3\2\2\2\u027e\u027f\f\3\2\2\u027f\u0280\7M\2\2\u0280\u0282"+
		"\5H%\4\u0281\u027e\3\2\2\2\u0282\u0285\3\2\2\2\u0283\u0281\3\2\2\2\u0283"+
		"\u0284\3\2\2\2\u0284I\3\2\2\2\u0285\u0283\3\2\2\2\u0286\u02f6\7#\2\2\u0287"+
		"\u02f6\7\"\2\2\u0288\u02f6\7=\2\2\u0289\u02f6\7>\2\2\u028a\u02f6\7?\2"+
		"\2\u028b\u028c\7=\2\2\u028c\u028d\7_\2\2\u028d\u028e\5L\'\2\u028e\u028f"+
		"\7a\2\2\u028f\u02f6\3\2\2\2\u0290\u0291\7%\2\2\u0291\u0292\7_\2\2\u0292"+
		"\u0293\5L\'\2\u0293\u0294\7a\2\2\u0294\u02f6\3\2\2\2\u0295\u0296\7&\2"+
		"\2\u0296\u0297\7_\2\2\u0297\u0298\5L\'\2\u0298\u0299\7a\2\2\u0299\u02f6"+
		"\3\2\2\2\u029a\u029b\7\'\2\2\u029b\u029c\7_\2\2\u029c\u029d\5L\'\2\u029d"+
		"\u029e\7a\2\2\u029e\u02f6\3\2\2\2\u029f\u02a0\7(\2\2\u02a0\u02a1\7_\2"+
		"\2\u02a1\u02a2\5L\'\2\u02a2\u02a3\7a\2\2\u02a3\u02f6\3\2\2\2\u02a4\u02a5"+
		"\7)\2\2\u02a5\u02a6\7_\2\2\u02a6\u02a7\5L\'\2\u02a7\u02a8\7a\2\2\u02a8"+
		"\u02f6\3\2\2\2\u02a9\u02aa\7*\2\2\u02aa\u02ab\7_\2\2\u02ab\u02ac\5L\'"+
		"\2\u02ac\u02ad\7a\2\2\u02ad\u02f6\3\2\2\2\u02ae\u02af\7+\2\2\u02af\u02b0"+
		"\7_\2\2\u02b0\u02b1\5L\'\2\u02b1\u02b2\7a\2\2\u02b2\u02f6\3\2\2\2\u02b3"+
		"\u02b4\7,\2\2\u02b4\u02b5\7_\2\2\u02b5\u02b6\5L\'\2\u02b6\u02b7\7a\2\2"+
		"\u02b7\u02f6\3\2\2\2\u02b8\u02b9\7-\2\2\u02b9\u02ba\7_\2\2\u02ba\u02bb"+
		"\5L\'\2\u02bb\u02bc\7a\2\2\u02bc\u02f6\3\2\2\2\u02bd\u02be\7.\2\2\u02be"+
		"\u02bf\7_\2\2\u02bf\u02c0\5L\'\2\u02c0\u02c1\7a\2\2\u02c1\u02f6\3\2\2"+
		"\2\u02c2\u02c3\7/\2\2\u02c3\u02c4\7_\2\2\u02c4\u02c5\5L\'\2\u02c5\u02c6"+
		"\7a\2\2\u02c6\u02f6\3\2\2\2\u02c7\u02c8\7\60\2\2\u02c8\u02c9\7_\2\2\u02c9"+
		"\u02ca\5L\'\2\u02ca\u02cb\7a\2\2\u02cb\u02f6\3\2\2\2\u02cc\u02cd\7$\2"+
		"\2\u02cd\u02ce\7_\2\2\u02ce\u02cf\5L\'\2\u02cf\u02d0\7a\2\2\u02d0\u02f6"+
		"\3\2\2\2\u02d1\u02d2\7\61\2\2\u02d2\u02d3\7_\2\2\u02d3\u02d4\5L\'\2\u02d4"+
		"\u02d5\7a\2\2\u02d5\u02f6\3\2\2\2\u02d6\u02d7\7\62\2\2\u02d7\u02d8\7_"+
		"\2\2\u02d8\u02d9\5H%\2\u02d9\u02da\7a\2\2\u02da\u02f6\3\2\2\2\u02db\u02dc"+
		"\7\63\2\2\u02dc\u02dd\7_\2\2\u02dd\u02de\5H%\2\u02de\u02df\7a\2\2\u02df"+
		"\u02f6\3\2\2\2\u02e0\u02e1\7\64\2\2\u02e1\u02e2\7_\2\2\u02e2\u02e3\5H"+
		"%\2\u02e3\u02e4\7]\2\2\u02e4\u02e5\5H%\2\u02e5\u02e6\7a\2\2\u02e6\u02f6"+
		"\3\2\2\2\u02e7\u02e8\7\64\2\2\u02e8\u02e9\7_\2\2\u02e9\u02ea\5H%\2\u02ea"+
		"\u02eb\7]\2\2\u02eb\u02ec\5H%\2\u02ec\u02ed\7]\2\2\u02ed\u02ee\5L\'\2"+
		"\u02ee\u02ef\7a\2\2\u02ef\u02f6\3\2\2\2\u02f0\u02f1\7\65\2\2\u02f1\u02f2"+
		"\7_\2\2\u02f2\u02f3\5H%\2\u02f3\u02f4\7a\2\2\u02f4\u02f6\3\2\2\2\u02f5"+
		"\u0286\3\2\2\2\u02f5\u0287\3\2\2\2\u02f5\u0288\3\2\2\2\u02f5\u0289\3\2"+
		"\2\2\u02f5\u028a\3\2\2\2\u02f5\u028b\3\2\2\2\u02f5\u0290\3\2\2\2\u02f5"+
		"\u0295\3\2\2\2\u02f5\u029a\3\2\2\2\u02f5\u029f\3\2\2\2\u02f5\u02a4\3\2"+
		"\2\2\u02f5\u02a9\3\2\2\2\u02f5\u02ae\3\2\2\2\u02f5\u02b3\3\2\2\2\u02f5"+
		"\u02b8\3\2\2\2\u02f5\u02bd\3\2\2\2\u02f5\u02c2\3\2\2\2\u02f5\u02c7\3\2"+
		"\2\2\u02f5\u02cc\3\2\2\2\u02f5\u02d1\3\2\2\2\u02f5\u02d6\3\2\2\2\u02f5"+
		"\u02db\3\2\2\2\u02f5\u02e0\3\2\2\2\u02f5\u02e7\3\2\2\2\u02f5\u02f0\3\2"+
		"\2\2\u02f6K\3\2\2\2\u02f7\u02f8\b\'\1\2\u02f8\u0306\5:\36\2\u02f9\u0306"+
		"\5\30\r\2\u02fa\u0306\5J&\2\u02fb\u02fc\7F\2\2\u02fc\u0306\5L\'\22\u02fd"+
		"\u02fe\7_\2\2\u02fe\u02ff\5L\'\2\u02ff\u0300\7a\2\2\u0300\u0306\3\2\2"+
		"\2\u0301\u0302\5H%\2\u0302\u0303\5N(\2\u0303\u0304\5H%\2\u0304\u0306\3"+
		"\2\2\2\u0305\u02f7\3\2\2\2\u0305\u02f9\3\2\2\2\u0305\u02fa\3\2\2\2\u0305"+
		"\u02fb\3\2\2\2\u0305\u02fd\3\2\2\2\u0305\u0301\3\2\2\2\u0306\u0331\3\2"+
		"\2\2\u0307\u0308\f\20\2\2\u0308\u0309\7L\2\2\u0309\u0330\5L\'\20\u030a"+
		"\u030b\f\17\2\2\u030b\u030c\7O\2\2\u030c\u0330\5L\'\20\u030d\u030e\f\16"+
		"\2\2\u030e\u030f\7P\2\2\u030f\u0330\5L\'\17\u0310\u0311\f\r\2\2\u0311"+
		"\u0312\7K\2\2\u0312\u0330\5L\'\16\u0313\u0314\f\f\2\2\u0314\u0315\7J\2"+
		"\2\u0315\u0330\5L\'\r\u0316\u0317\f\13\2\2\u0317\u0318\7M\2\2\u0318\u0330"+
		"\5L\'\f\u0319\u031a\f\n\2\2\u031a\u031b\7N\2\2\u031b\u0330\5L\'\13\u031c"+
		"\u031d\f\t\2\2\u031d\u031e\5N(\2\u031e\u031f\5L\'\n\u031f\u0330\3\2\2"+
		"\2\u0320\u0321\f\7\2\2\u0321\u0322\7Q\2\2\u0322\u0330\5L\'\b\u0323\u0324"+
		"\f\6\2\2\u0324\u0325\7R\2\2\u0325\u0330\5L\'\7\u0326\u0327\f\5\2\2\u0327"+
		"\u0328\7G\2\2\u0328\u0330\5L\'\6\u0329\u032a\f\4\2\2\u032a\u032b\7H\2"+
		"\2\u032b\u0330\5L\'\5\u032c\u032d\f\3\2\2\u032d\u032e\7I\2\2\u032e\u0330"+
		"\5L\'\4\u032f\u0307\3\2\2\2\u032f\u030a\3\2\2\2\u032f\u030d\3\2\2\2\u032f"+
		"\u0310\3\2\2\2\u032f\u0313\3\2\2\2\u032f\u0316\3\2\2\2\u032f\u0319\3\2"+
		"\2\2\u032f\u031c\3\2\2\2\u032f\u0320\3\2\2\2\u032f\u0323\3\2\2\2\u032f"+
		"\u0326\3\2\2\2\u032f\u0329\3\2\2\2\u032f\u032c\3\2\2\2\u0330\u0333\3\2"+
		"\2\2\u0331\u032f\3\2\2\2\u0331\u0332\3\2\2\2\u0332M\3\2\2\2\u0333\u0331"+
		"\3\2\2\2\u0334\u033b\7@\2\2\u0335\u033b\7A\2\2\u0336\u033b\7B\2\2\u0337"+
		"\u033b\7C\2\2\u0338\u033b\7D\2\2\u0339\u033b\7E\2\2\u033a\u0334\3\2\2"+
		"\2\u033a\u0335\3\2\2\2\u033a\u0336\3\2\2\2\u033a\u0337\3\2\2\2\u033a\u0338"+
		"\3\2\2\2\u033a\u0339\3\2\2\2\u033bO\3\2\2\2OSbgkosx\u0086\u008f\u0095"+
		"\u0099\u009f\u00a3\u00ac\u00b0\u00b8\u00bf\u00c4\u00c9\u00ce\u00d6\u00da"+
		"\u00dd\u00df\u00eb\u00f9\u0103\u0108\u010d\u0116\u0124\u012d\u0137\u013c"+
		"\u0142\u0147\u0151\u0157\u0160\u0166\u017e\u0184\u018a\u018d\u0195\u019b"+
		"\u01a7\u01ac\u01bc\u01c2\u01ce\u01d7\u01e1\u01e5\u01ea\u01ef\u01f7\u01ff"+
		"\u0203\u020d\u0212\u0215\u0218\u021d\u0221\u0226\u022c\u022f\u0238\u0274"+
		"\u027c\u0283\u02f5\u0305\u032f\u0331\u033a";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}