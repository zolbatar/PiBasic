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
		DEF=1, DIM=2, END=3, ENDFN=4, ENDPROC=5, FN=6, INPUT=7, GLOBAL=8, LOCAL=9, 
		LET=10, PRINT=11, PROC=12, REM=13, RETURN=14, SPC=15, TYPE=16, TIME=17, 
		PI=18, SQR=19, LN=20, LOG=21, EXP=22, ATN=23, TAN=24, COS=25, SIN=26, 
		ABS=27, ACS=28, ASN=29, DEG=30, RAD=31, SGN=32, ASC=33, LEN=34, INSTR=35, 
		VAL=36, TIMES=37, STRS=38, STRINGS=39, CHRS=40, LEFTS=41, MIDS=42, RIGHTS=43, 
		RND=44, RND0=45, RND1=46, EQ=47, NE=48, GT=49, GE=50, LT=51, LE=52, NOT=53, 
		AND=54, OR=55, EOR=56, MOD=57, DIV=58, HAT=59, PLUS=60, MINUS=61, MULTIPLY=62, 
		DIVIDE=63, SHL=64, SHR=65, PLUS_E=66, MINUS_E=67, MULTIPLY_E=68, DIVIDE_E=69, 
		SHL_E=70, SHR_E=71, NEWLINE=72, TICK=73, TILDE=74, COLON=75, COMMA=76, 
		DOLLAR=77, LPAREN=78, PERCENT=79, RPAREN=80, SEMICOLON=81, UNDERSCORE=82, 
		COMMENT=83, STRINGLITERAL=84, PROC_NAME=85, FN_INTEGER=86, FN_FLOAT=87, 
		FN_STRING=88, VARIABLE_FLOAT=89, VARIABLE_INTEGER=90, VARIABLE_STRING=91, 
		VARIABLE_TYPE=92, NAME=93, ALPHA=94, DIGIT=95, HEXNUMBER=96, BINARYNUMBER=97, 
		NUMBER=98, FLOAT=99, WS=100;
	public static final int
		RULE_prog = 0, RULE_line = 1, RULE_content = 2, RULE_body = 3, RULE_linenumber = 4, 
		RULE_stmt = 5, RULE_fnName = 6, RULE_var = 7, RULE_typeVar = 8, RULE_numVar = 9, 
		RULE_strVar = 10, RULE_justVar = 11, RULE_varName = 12, RULE_varNameInteger = 13, 
		RULE_varNameString = 14, RULE_varNameType = 15, RULE_varDecl = 16, RULE_varDeclWithDimension = 17, 
		RULE_varList = 18, RULE_functionVarList = 19, RULE_functionParList = 20, 
		RULE_exprList = 21, RULE_printListItem = 22, RULE_printStartingTicks = 23, 
		RULE_printList = 24, RULE_expr = 25, RULE_number = 26, RULE_numberInteger = 27, 
		RULE_numberHex = 28, RULE_numberBinary = 29, RULE_numberFloat = 30, RULE_strFunc = 31, 
		RULE_string = 32, RULE_strExpr = 33, RULE_numFunc = 34, RULE_numExpr = 35, 
		RULE_compare = 36;
	private static String[] makeRuleNames() {
		return new String[] {
			"prog", "line", "content", "body", "linenumber", "stmt", "fnName", "var", 
			"typeVar", "numVar", "strVar", "justVar", "varName", "varNameInteger", 
			"varNameString", "varNameType", "varDecl", "varDeclWithDimension", "varList", 
			"functionVarList", "functionParList", "exprList", "printListItem", "printStartingTicks", 
			"printList", "expr", "number", "numberInteger", "numberHex", "numberBinary", 
			"numberFloat", "strFunc", "string", "strExpr", "numFunc", "numExpr", 
			"compare"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, "'='", 
			"'<>'", "'>'", "'>='", "'<'", "'<='", null, null, null, null, null, null, 
			"'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", "'>>'", "'+='", "'-='", "'*='", 
			"'/='", "'<<='", "'>>='", null, "'''", "'~'", "':'", "','", "'$'", "'('", 
			"'%'", "')'", "';'", "'_'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "DEF", "DIM", "END", "ENDFN", "ENDPROC", "FN", "INPUT", "GLOBAL", 
			"LOCAL", "LET", "PRINT", "PROC", "REM", "RETURN", "SPC", "TYPE", "TIME", 
			"PI", "SQR", "LN", "LOG", "EXP", "ATN", "TAN", "COS", "SIN", "ABS", "ACS", 
			"ASN", "DEG", "RAD", "SGN", "ASC", "LEN", "INSTR", "VAL", "TIMES", "STRS", 
			"STRINGS", "CHRS", "LEFTS", "MIDS", "RIGHTS", "RND", "RND0", "RND1", 
			"EQ", "NE", "GT", "GE", "LT", "LE", "NOT", "AND", "OR", "EOR", "MOD", 
			"DIV", "HAT", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "SHL", "SHR", "PLUS_E", 
			"MINUS_E", "MULTIPLY_E", "DIVIDE_E", "SHL_E", "SHR_E", "NEWLINE", "TICK", 
			"TILDE", "COLON", "COMMA", "DOLLAR", "LPAREN", "PERCENT", "RPAREN", "SEMICOLON", 
			"UNDERSCORE", "COMMENT", "STRINGLITERAL", "PROC_NAME", "FN_INTEGER", 
			"FN_FLOAT", "FN_STRING", "VARIABLE_FLOAT", "VARIABLE_INTEGER", "VARIABLE_STRING", 
			"VARIABLE_TYPE", "NAME", "ALPHA", "DIGIT", "HEXNUMBER", "BINARYNUMBER", 
			"NUMBER", "FLOAT", "WS"
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
			setState(77);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << DEF) | (1L << DIM) | (1L << END) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << PRINT) | (1L << REM) | (1L << RETURN) | (1L << TYPE) | (1L << EQ))) != 0) || ((((_la - 72)) & ~0x3f) == 0 && ((1L << (_la - 72)) & ((1L << (NEWLINE - 72)) | (1L << (COLON - 72)) | (1L << (COMMENT - 72)) | (1L << (PROC_NAME - 72)) | (1L << (FN_INTEGER - 72)) | (1L << (FN_FLOAT - 72)) | (1L << (FN_STRING - 72)) | (1L << (VARIABLE_FLOAT - 72)) | (1L << (VARIABLE_INTEGER - 72)) | (1L << (VARIABLE_STRING - 72)) | (1L << (VARIABLE_TYPE - 72)) | (1L << (NUMBER - 72)))) != 0)) {
				{
				{
				setState(74);
				line();
				}
				}
				setState(79);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(80);
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
			setState(92);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NEWLINE:
				enterOuterAlt(_localctx, 1);
				{
				setState(82);
				match(NEWLINE);
				}
				break;
			case COLON:
				enterOuterAlt(_localctx, 2);
				{
				setState(83);
				match(COLON);
				setState(84);
				match(NEWLINE);
				}
				break;
			case DEF:
			case DIM:
			case END:
			case INPUT:
			case GLOBAL:
			case LOCAL:
			case LET:
			case PRINT:
			case REM:
			case RETURN:
			case TYPE:
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
				setState(85);
				content();
				setState(86);
				match(NEWLINE);
				}
				break;
			case NUMBER:
				enterOuterAlt(_localctx, 4);
				{
				setState(88);
				linenumber();
				setState(89);
				content();
				setState(90);
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
			setState(105);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEF:
			case DIM:
			case END:
			case INPUT:
			case GLOBAL:
			case LOCAL:
			case LET:
			case PRINT:
			case RETURN:
			case TYPE:
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
				setState(94);
				stmt();
				setState(101);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(95);
						match(COLON);
						setState(97);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
						case 1:
							{
							setState(96);
							stmt();
							}
							break;
						}
						}
						} 
					}
					setState(103);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
				}
				}
				}
				break;
			case REM:
			case COMMENT:
				{
				setState(104);
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
			setState(109);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(107);
				content();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(108);
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
		enterRule(_localctx, 8, RULE_linenumber);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(111);
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
	public static class StmtDEFPROCContext extends StmtContext {
		public TerminalNode DEF() { return getToken(DARICParser.DEF, 0); }
		public TerminalNode PROC_NAME() { return getToken(DARICParser.PROC_NAME, 0); }
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public TerminalNode ENDPROC() { return getToken(DARICParser.ENDPROC, 0); }
		public FunctionVarListContext functionVarList() {
			return getRuleContext(FunctionVarListContext.class,0);
		}
		public TerminalNode COLON() { return getToken(DARICParser.COLON, 0); }
		public List<BodyContext> body() {
			return getRuleContexts(BodyContext.class);
		}
		public BodyContext body(int i) {
			return getRuleContext(BodyContext.class,i);
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
	public static class StmtDEFFNContext extends StmtContext {
		public TerminalNode DEF() { return getToken(DARICParser.DEF, 0); }
		public FnNameContext fnName() {
			return getRuleContext(FnNameContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(DARICParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(DARICParser.RPAREN, 0); }
		public TerminalNode ENDFN() { return getToken(DARICParser.ENDFN, 0); }
		public FunctionVarListContext functionVarList() {
			return getRuleContext(FunctionVarListContext.class,0);
		}
		public TerminalNode COLON() { return getToken(DARICParser.COLON, 0); }
		public List<BodyContext> body() {
			return getRuleContexts(BodyContext.class);
		}
		public BodyContext body(int i) {
			return getRuleContext(BodyContext.class,i);
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
		enterRule(_localctx, 10, RULE_stmt);
		int _la;
		try {
			setState(238);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
			case 1:
				_localctx = new StmtDIMContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(113);
				match(DIM);
				setState(114);
				varDeclWithDimension();
				setState(119);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(115);
					match(COMMA);
					setState(116);
					varDeclWithDimension();
					}
					}
					setState(121);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 2:
				_localctx = new StmtENDContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(122);
				match(END);
				}
				break;
			case 3:
				_localctx = new StmtRETURNContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(123);
				match(EQ);
				setState(125);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
				case 1:
					{
					setState(124);
					expr();
					}
					break;
				}
				}
				break;
			case 4:
				_localctx = new StmtRETURNContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(127);
				match(RETURN);
				setState(129);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
				case 1:
					{
					setState(128);
					expr();
					}
					break;
				}
				}
				break;
			case 5:
				_localctx = new StmtDEFFNContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(131);
				match(DEF);
				setState(132);
				fnName();
				setState(133);
				match(LPAREN);
				setState(135);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN || ((((_la - 89)) & ~0x3f) == 0 && ((1L << (_la - 89)) & ((1L << (VARIABLE_FLOAT - 89)) | (1L << (VARIABLE_INTEGER - 89)) | (1L << (VARIABLE_STRING - 89)))) != 0)) {
					{
					setState(134);
					functionVarList();
					}
				}

				setState(137);
				match(RPAREN);
				setState(139);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
				case 1:
					{
					setState(138);
					match(COLON);
					}
					break;
				}
				setState(144);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << DEF) | (1L << DIM) | (1L << END) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << PRINT) | (1L << REM) | (1L << RETURN) | (1L << TYPE) | (1L << EQ))) != 0) || ((((_la - 72)) & ~0x3f) == 0 && ((1L << (_la - 72)) & ((1L << (NEWLINE - 72)) | (1L << (COLON - 72)) | (1L << (COMMENT - 72)) | (1L << (PROC_NAME - 72)) | (1L << (FN_INTEGER - 72)) | (1L << (FN_FLOAT - 72)) | (1L << (FN_STRING - 72)) | (1L << (VARIABLE_FLOAT - 72)) | (1L << (VARIABLE_INTEGER - 72)) | (1L << (VARIABLE_STRING - 72)) | (1L << (VARIABLE_TYPE - 72)) | (1L << (NUMBER - 72)))) != 0)) {
					{
					{
					setState(141);
					body();
					}
					}
					setState(146);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(147);
				match(ENDFN);
				}
				break;
			case 6:
				_localctx = new StmtDEFPROCContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(149);
				match(DEF);
				setState(150);
				match(PROC_NAME);
				setState(151);
				match(LPAREN);
				setState(153);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN || ((((_la - 89)) & ~0x3f) == 0 && ((1L << (_la - 89)) & ((1L << (VARIABLE_FLOAT - 89)) | (1L << (VARIABLE_INTEGER - 89)) | (1L << (VARIABLE_STRING - 89)))) != 0)) {
					{
					setState(152);
					functionVarList();
					}
				}

				setState(155);
				match(RPAREN);
				setState(157);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
				case 1:
					{
					setState(156);
					match(COLON);
					}
					break;
				}
				setState(162);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << DEF) | (1L << DIM) | (1L << END) | (1L << INPUT) | (1L << GLOBAL) | (1L << LOCAL) | (1L << LET) | (1L << PRINT) | (1L << REM) | (1L << RETURN) | (1L << TYPE) | (1L << EQ))) != 0) || ((((_la - 72)) & ~0x3f) == 0 && ((1L << (_la - 72)) & ((1L << (NEWLINE - 72)) | (1L << (COLON - 72)) | (1L << (COMMENT - 72)) | (1L << (PROC_NAME - 72)) | (1L << (FN_INTEGER - 72)) | (1L << (FN_FLOAT - 72)) | (1L << (FN_STRING - 72)) | (1L << (VARIABLE_FLOAT - 72)) | (1L << (VARIABLE_INTEGER - 72)) | (1L << (VARIABLE_STRING - 72)) | (1L << (VARIABLE_TYPE - 72)) | (1L << (NUMBER - 72)))) != 0)) {
					{
					{
					setState(159);
					body();
					}
					}
					setState(164);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(165);
				match(ENDPROC);
				}
				break;
			case 7:
				_localctx = new StmtCallFNContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(166);
				fnName();
				setState(167);
				match(LPAREN);
				setState(169);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL) | (1L << TIMES) | (1L << STRS) | (1L << STRINGS) | (1L << CHRS) | (1L << LEFTS) | (1L << MIDS) | (1L << RIGHTS) | (1L << RND) | (1L << RND0) | (1L << RND1) | (1L << NOT) | (1L << PLUS) | (1L << MINUS))) != 0) || ((((_la - 78)) & ~0x3f) == 0 && ((1L << (_la - 78)) & ((1L << (LPAREN - 78)) | (1L << (STRINGLITERAL - 78)) | (1L << (VARIABLE_FLOAT - 78)) | (1L << (VARIABLE_INTEGER - 78)) | (1L << (VARIABLE_STRING - 78)) | (1L << (VARIABLE_TYPE - 78)) | (1L << (HEXNUMBER - 78)) | (1L << (BINARYNUMBER - 78)) | (1L << (NUMBER - 78)) | (1L << (FLOAT - 78)))) != 0)) {
					{
					setState(168);
					functionParList();
					}
				}

				setState(171);
				match(RPAREN);
				}
				break;
			case 8:
				_localctx = new StmtINPUTContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(173);
				match(INPUT);
				setState(177);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
				case 1:
					{
					setState(174);
					strExpr(0);
					setState(175);
					match(COMMA);
					}
					break;
				}
				setState(179);
				varList();
				}
				break;
			case 9:
				_localctx = new StmtLETContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(186);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
				case 1:
					{
					setState(181);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==LET) {
						{
						setState(180);
						match(LET);
						}
					}

					}
					break;
				case 2:
					{
					setState(184);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==GLOBAL) {
						{
						setState(183);
						match(GLOBAL);
						}
					}

					}
					break;
				}
				setState(188);
				varDecl();
				setState(189);
				match(EQ);
				setState(190);
				expr();
				setState(198);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(191);
					match(COMMA);
					setState(192);
					varDecl();
					setState(193);
					match(EQ);
					setState(194);
					expr();
					}
					}
					setState(200);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 10:
				_localctx = new StmtLOCALContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(201);
				match(LOCAL);
				setState(202);
				varDecl();
				setState(203);
				match(EQ);
				setState(204);
				expr();
				setState(212);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(205);
					match(COMMA);
					setState(206);
					varDecl();
					setState(207);
					match(EQ);
					setState(208);
					expr();
					}
					}
					setState(214);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 11:
				_localctx = new StmtPRINTContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(215);
				match(PRINT);
				setState(217);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
				case 1:
					{
					setState(216);
					printList();
					}
					break;
				}
				}
				break;
			case 12:
				_localctx = new StmtCallPROCContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(219);
				match(PROC_NAME);
				setState(220);
				match(LPAREN);
				setState(222);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TIME) | (1L << PI) | (1L << SQR) | (1L << LN) | (1L << LOG) | (1L << EXP) | (1L << ATN) | (1L << TAN) | (1L << COS) | (1L << SIN) | (1L << ABS) | (1L << ACS) | (1L << ASN) | (1L << DEG) | (1L << RAD) | (1L << SGN) | (1L << ASC) | (1L << LEN) | (1L << INSTR) | (1L << VAL) | (1L << TIMES) | (1L << STRS) | (1L << STRINGS) | (1L << CHRS) | (1L << LEFTS) | (1L << MIDS) | (1L << RIGHTS) | (1L << RND) | (1L << RND0) | (1L << RND1) | (1L << NOT) | (1L << PLUS) | (1L << MINUS))) != 0) || ((((_la - 78)) & ~0x3f) == 0 && ((1L << (_la - 78)) & ((1L << (LPAREN - 78)) | (1L << (STRINGLITERAL - 78)) | (1L << (VARIABLE_FLOAT - 78)) | (1L << (VARIABLE_INTEGER - 78)) | (1L << (VARIABLE_STRING - 78)) | (1L << (VARIABLE_TYPE - 78)) | (1L << (HEXNUMBER - 78)) | (1L << (BINARYNUMBER - 78)) | (1L << (NUMBER - 78)) | (1L << (FLOAT - 78)))) != 0)) {
					{
					setState(221);
					functionParList();
					}
				}

				setState(224);
				match(RPAREN);
				}
				break;
			case 13:
				_localctx = new StmtTYPEContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(225);
				match(TYPE);
				setState(226);
				varName();
				setState(227);
				match(LPAREN);
				setState(228);
				justVar();
				setState(233);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(229);
					match(COMMA);
					setState(230);
					justVar();
					}
					}
					setState(235);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(236);
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
		enterRule(_localctx, 12, RULE_fnName);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(240);
			_la = _input.LA(1);
			if ( !(((((_la - 86)) & ~0x3f) == 0 && ((1L << (_la - 86)) & ((1L << (FN_INTEGER - 86)) | (1L << (FN_FLOAT - 86)) | (1L << (FN_STRING - 86)))) != 0)) ) {
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
		enterRule(_localctx, 14, RULE_var);
		try {
			setState(245);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,26,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(242);
				numVar();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(243);
				strVar();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(244);
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
		enterRule(_localctx, 16, RULE_typeVar);
		try {
			_localctx = new TypeVarTypeContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(247);
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
		enterRule(_localctx, 18, RULE_numVar);
		int _la;
		try {
			int _alt;
			setState(297);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,31,_ctx) ) {
			case 1:
				_localctx = new NumVarFloatContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(249);
				varName();
				}
				break;
			case 2:
				_localctx = new NumVarFloatArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(250);
				varName();
				setState(261);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,28,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(251);
						match(LPAREN);
						setState(252);
						numExpr(0);
						setState(255);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(253);
							match(COMMA);
							setState(254);
							numExpr(0);
							}
						}

						setState(257);
						match(RPAREN);
						}
						} 
					}
					setState(263);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,28,_ctx);
				}
				}
				break;
			case 3:
				_localctx = new NumVarIntegerContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(264);
				varNameInteger();
				}
				break;
			case 4:
				_localctx = new NumVarIntegerArrayContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(265);
				varNameInteger();
				setState(276);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,30,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(266);
						match(LPAREN);
						setState(267);
						numExpr(0);
						setState(270);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(268);
							match(COMMA);
							setState(269);
							numExpr(0);
							}
						}

						setState(272);
						match(RPAREN);
						}
						} 
					}
					setState(278);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,30,_ctx);
				}
				}
				break;
			case 5:
				_localctx = new NumVarFloatFieldContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(279);
				typeVar();
				setState(280);
				varName();
				}
				break;
			case 6:
				_localctx = new NumVarFloatFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(282);
				typeVar();
				setState(283);
				match(LPAREN);
				setState(284);
				numExpr(0);
				setState(285);
				match(RPAREN);
				setState(286);
				varName();
				}
				break;
			case 7:
				_localctx = new NumVarIntegerFieldContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(288);
				typeVar();
				setState(289);
				varNameInteger();
				}
				break;
			case 8:
				_localctx = new NumVarIntegerFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(291);
				typeVar();
				setState(292);
				match(LPAREN);
				setState(293);
				numExpr(0);
				setState(294);
				match(RPAREN);
				setState(295);
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
		enterRule(_localctx, 20, RULE_strVar);
		int _la;
		try {
			int _alt;
			setState(323);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
			case 1:
				_localctx = new NumVarStringContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(299);
				varNameString();
				}
				break;
			case 2:
				_localctx = new NumVarStringArrayContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(300);
				varNameString();
				setState(311);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,33,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(301);
						match(LPAREN);
						setState(302);
						numExpr(0);
						setState(305);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(303);
							match(COMMA);
							setState(304);
							numExpr(0);
							}
						}

						setState(307);
						match(RPAREN);
						}
						} 
					}
					setState(313);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,33,_ctx);
				}
				}
				break;
			case 3:
				_localctx = new NumVarStringFieldContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(314);
				typeVar();
				setState(315);
				varNameString();
				}
				break;
			case 4:
				_localctx = new NumVarStringFieldArrayContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(317);
				typeVar();
				setState(318);
				match(LPAREN);
				setState(319);
				numExpr(0);
				setState(320);
				match(RPAREN);
				setState(321);
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
		enterRule(_localctx, 22, RULE_justVar);
		try {
			setState(328);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE_FLOAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(325);
				varName();
				}
				break;
			case VARIABLE_INTEGER:
				enterOuterAlt(_localctx, 2);
				{
				setState(326);
				varNameInteger();
				}
				break;
			case VARIABLE_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(327);
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
		enterRule(_localctx, 24, RULE_varName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(330);
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
		enterRule(_localctx, 26, RULE_varNameInteger);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(332);
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
		enterRule(_localctx, 28, RULE_varNameString);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(334);
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
		enterRule(_localctx, 30, RULE_varNameType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(336);
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
		enterRule(_localctx, 32, RULE_varDecl);
		int _la;
		try {
			setState(362);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
			case 1:
				_localctx = new VarDeclIndContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(338);
				var();
				}
				break;
			case 2:
				_localctx = new VarDeclArrayedContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(339);
				var();
				setState(350);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==LPAREN) {
					{
					{
					setState(340);
					match(LPAREN);
					setState(341);
					numExpr(0);
					setState(344);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==COMMA) {
						{
						setState(342);
						match(COMMA);
						setState(343);
						numExpr(0);
						}
					}

					setState(346);
					match(RPAREN);
					}
					}
					setState(352);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 3:
				_localctx = new VarDeclTypeContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(353);
				typeVar();
				setState(354);
				varName();
				}
				break;
			case 4:
				_localctx = new VarDeclTypeArrayedContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(356);
				typeVar();
				setState(357);
				match(LPAREN);
				setState(358);
				numExpr(0);
				setState(359);
				match(RPAREN);
				setState(360);
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
		enterRule(_localctx, 34, RULE_varDeclWithDimension);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(364);
			var();
			setState(365);
			match(LPAREN);
			setState(366);
			numExpr(0);
			setState(371);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(367);
				match(COMMA);
				setState(368);
				numExpr(0);
				}
				}
				setState(373);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(374);
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
		enterRule(_localctx, 36, RULE_varList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(376);
			varDecl();
			setState(381);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(377);
				match(COMMA);
				setState(378);
				varDecl();
				}
				}
				setState(383);
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
		enterRule(_localctx, 38, RULE_functionVarList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(385);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==RETURN) {
				{
				setState(384);
				match(RETURN);
				}
			}

			setState(387);
			justVar();
			setState(395);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(388);
				match(COMMA);
				setState(390);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==RETURN) {
					{
					setState(389);
					match(RETURN);
					}
				}

				setState(392);
				justVar();
				}
				}
				setState(397);
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
		enterRule(_localctx, 40, RULE_functionParList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(398);
			expr();
			setState(403);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(399);
				match(COMMA);
				setState(400);
				expr();
				}
				}
				setState(405);
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
		enterRule(_localctx, 42, RULE_exprList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(406);
			expr();
			setState(411);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(407);
				match(COMMA);
				setState(408);
				expr();
				}
				}
				setState(413);
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
		enterRule(_localctx, 44, RULE_printListItem);
		int _la;
		try {
			setState(425);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,47,_ctx) ) {
			case 1:
				_localctx = new PrintListExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(415);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TILDE) {
					{
					setState(414);
					match(TILDE);
					}
				}

				setState(417);
				expr();
				}
				break;
			case 2:
				_localctx = new PrintListSPCPContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(418);
				match(SPC);
				setState(419);
				match(LPAREN);
				setState(420);
				numExpr(0);
				setState(421);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new PrintListSPCContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(423);
				match(SPC);
				setState(424);
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
		enterRule(_localctx, 46, RULE_printStartingTicks);
		int _la;
		try {
			_localctx = new PrintListTickContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(428); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(427);
				match(TICK);
				}
				}
				setState(430); 
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
		enterRule(_localctx, 48, RULE_printList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(433);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TICK) {
				{
				setState(432);
				printStartingTicks();
				}
			}

			setState(436);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(435);
				match(COMMA);
				}
			}

			setState(438);
			printListItem();
			setState(445);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 73)) & ~0x3f) == 0 && ((1L << (_la - 73)) & ((1L << (TICK - 73)) | (1L << (COMMA - 73)) | (1L << (SEMICOLON - 73)))) != 0)) {
				{
				{
				setState(439);
				_la = _input.LA(1);
				if ( !(((((_la - 73)) & ~0x3f) == 0 && ((1L << (_la - 73)) & ((1L << (TICK - 73)) | (1L << (COMMA - 73)) | (1L << (SEMICOLON - 73)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(441);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,51,_ctx) ) {
				case 1:
					{
					setState(440);
					printListItem();
					}
					break;
				}
				}
				}
				setState(447);
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
		enterRule(_localctx, 50, RULE_expr);
		try {
			setState(450);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,53,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(448);
				numExpr(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(449);
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
		enterRule(_localctx, 52, RULE_number);
		try {
			setState(456);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,54,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(452);
				numberInteger();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(453);
				numberFloat();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(454);
				numberHex();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(455);
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
		enterRule(_localctx, 54, RULE_numberInteger);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(459);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(458);
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

			setState(461);
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
		enterRule(_localctx, 56, RULE_numberHex);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(463);
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
		enterRule(_localctx, 58, RULE_numberBinary);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(465);
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
		enterRule(_localctx, 60, RULE_numberFloat);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(468);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PLUS || _la==MINUS) {
				{
				setState(467);
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

			setState(470);
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
		enterRule(_localctx, 62, RULE_strFunc);
		try {
			setState(528);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,57,_ctx) ) {
			case 1:
				_localctx = new StrFuncTIMESContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(472);
				match(TIMES);
				}
				break;
			case 2:
				_localctx = new StrFuncCHRSPContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(473);
				match(CHRS);
				setState(474);
				match(LPAREN);
				setState(475);
				numExpr(0);
				setState(476);
				match(RPAREN);
				}
				break;
			case 3:
				_localctx = new StrFuncCHRSContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(478);
				match(CHRS);
				setState(479);
				numExpr(0);
				}
				break;
			case 4:
				_localctx = new StrFuncLEFTSContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(480);
				match(LEFTS);
				setState(481);
				match(LPAREN);
				setState(482);
				strExpr(0);
				setState(483);
				match(COMMA);
				setState(484);
				numExpr(0);
				setState(485);
				match(RPAREN);
				}
				break;
			case 5:
				_localctx = new StrFuncMIDS3Context(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(487);
				match(MIDS);
				setState(488);
				match(LPAREN);
				setState(489);
				strExpr(0);
				setState(490);
				match(COMMA);
				setState(491);
				numExpr(0);
				setState(492);
				match(COMMA);
				setState(493);
				numExpr(0);
				setState(494);
				match(RPAREN);
				}
				break;
			case 6:
				_localctx = new StrFuncMIDS2Context(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(496);
				match(MIDS);
				setState(497);
				match(LPAREN);
				setState(498);
				strExpr(0);
				setState(499);
				match(COMMA);
				setState(500);
				numExpr(0);
				setState(501);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new StrFuncRIGHTSContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(503);
				match(RIGHTS);
				setState(504);
				match(LPAREN);
				setState(505);
				strExpr(0);
				setState(506);
				match(COMMA);
				setState(507);
				numExpr(0);
				setState(508);
				match(RPAREN);
				}
				break;
			case 8:
				_localctx = new StrFuncSTRSContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(510);
				match(STRS);
				setState(511);
				match(LPAREN);
				setState(512);
				numExpr(0);
				setState(513);
				match(RPAREN);
				}
				break;
			case 9:
				_localctx = new StrFuncSTRSHEXContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(515);
				match(STRS);
				setState(516);
				match(TILDE);
				setState(517);
				match(LPAREN);
				setState(518);
				numExpr(0);
				setState(519);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new StrFuncSTRINGSContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(521);
				match(STRINGS);
				setState(522);
				match(LPAREN);
				setState(523);
				numExpr(0);
				setState(524);
				match(COMMA);
				setState(525);
				strExpr(0);
				setState(526);
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
		enterRule(_localctx, 64, RULE_string);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(530);
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
		int _startState = 66;
		enterRecursionRule(_localctx, 66, RULE_strExpr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(536);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STRINGLITERAL:
				{
				setState(533);
				string();
				}
				break;
			case VARIABLE_STRING:
			case VARIABLE_TYPE:
				{
				setState(534);
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
				setState(535);
				strFunc();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(543);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,59,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StrExprContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_strExpr);
					setState(538);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(539);
					match(PLUS);
					setState(540);
					strExpr(2);
					}
					} 
				}
				setState(545);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,59,_ctx);
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
		enterRule(_localctx, 68, RULE_numFunc);
		try {
			setState(657);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,60,_ctx) ) {
			case 1:
				_localctx = new NumFuncPIContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(546);
				match(PI);
				}
				break;
			case 2:
				_localctx = new NumFuncTIMEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(547);
				match(TIME);
				}
				break;
			case 3:
				_localctx = new NumFuncRNDContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(548);
				match(RND);
				}
				break;
			case 4:
				_localctx = new NumFuncRND0Context(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(549);
				match(RND0);
				}
				break;
			case 5:
				_localctx = new NumFuncRND1Context(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(550);
				match(RND1);
				}
				break;
			case 6:
				_localctx = new NumFuncRNDRANGEContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(551);
				match(RND);
				setState(552);
				match(LPAREN);
				setState(553);
				numExpr(0);
				setState(554);
				match(RPAREN);
				}
				break;
			case 7:
				_localctx = new NumFuncLNContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(556);
				match(LN);
				setState(557);
				match(LPAREN);
				setState(558);
				numExpr(0);
				setState(559);
				match(RPAREN);
				}
				break;
			case 8:
				_localctx = new NumFuncLOGContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(561);
				match(LOG);
				setState(562);
				match(LPAREN);
				setState(563);
				numExpr(0);
				setState(564);
				match(RPAREN);
				}
				break;
			case 9:
				_localctx = new NumFuncEXPContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(566);
				match(EXP);
				setState(567);
				match(LPAREN);
				setState(568);
				numExpr(0);
				setState(569);
				match(RPAREN);
				}
				break;
			case 10:
				_localctx = new NumFuncATNContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(571);
				match(ATN);
				setState(572);
				match(LPAREN);
				setState(573);
				numExpr(0);
				setState(574);
				match(RPAREN);
				}
				break;
			case 11:
				_localctx = new NumFuncTANContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(576);
				match(TAN);
				setState(577);
				match(LPAREN);
				setState(578);
				numExpr(0);
				setState(579);
				match(RPAREN);
				}
				break;
			case 12:
				_localctx = new NumFuncCOSContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(581);
				match(COS);
				setState(582);
				match(LPAREN);
				setState(583);
				numExpr(0);
				setState(584);
				match(RPAREN);
				}
				break;
			case 13:
				_localctx = new NumFuncSINContext(_localctx);
				enterOuterAlt(_localctx, 13);
				{
				setState(586);
				match(SIN);
				setState(587);
				match(LPAREN);
				setState(588);
				numExpr(0);
				setState(589);
				match(RPAREN);
				}
				break;
			case 14:
				_localctx = new NumFuncABSContext(_localctx);
				enterOuterAlt(_localctx, 14);
				{
				setState(591);
				match(ABS);
				setState(592);
				match(LPAREN);
				setState(593);
				numExpr(0);
				setState(594);
				match(RPAREN);
				}
				break;
			case 15:
				_localctx = new NumFuncACSContext(_localctx);
				enterOuterAlt(_localctx, 15);
				{
				setState(596);
				match(ACS);
				setState(597);
				match(LPAREN);
				setState(598);
				numExpr(0);
				setState(599);
				match(RPAREN);
				}
				break;
			case 16:
				_localctx = new NumFuncASNContext(_localctx);
				enterOuterAlt(_localctx, 16);
				{
				setState(601);
				match(ASN);
				setState(602);
				match(LPAREN);
				setState(603);
				numExpr(0);
				setState(604);
				match(RPAREN);
				}
				break;
			case 17:
				_localctx = new NumFuncDEGContext(_localctx);
				enterOuterAlt(_localctx, 17);
				{
				setState(606);
				match(DEG);
				setState(607);
				match(LPAREN);
				setState(608);
				numExpr(0);
				setState(609);
				match(RPAREN);
				}
				break;
			case 18:
				_localctx = new NumFuncRADContext(_localctx);
				enterOuterAlt(_localctx, 18);
				{
				setState(611);
				match(RAD);
				setState(612);
				match(LPAREN);
				setState(613);
				numExpr(0);
				setState(614);
				match(RPAREN);
				}
				break;
			case 19:
				_localctx = new NumFuncSQRContext(_localctx);
				enterOuterAlt(_localctx, 19);
				{
				setState(616);
				match(SQR);
				setState(617);
				match(LPAREN);
				setState(618);
				numExpr(0);
				setState(619);
				match(RPAREN);
				}
				break;
			case 20:
				_localctx = new NumFuncSGNContext(_localctx);
				enterOuterAlt(_localctx, 20);
				{
				setState(621);
				match(SGN);
				setState(622);
				match(LPAREN);
				setState(623);
				numExpr(0);
				setState(624);
				match(RPAREN);
				}
				break;
			case 21:
				_localctx = new NumFuncASCContext(_localctx);
				enterOuterAlt(_localctx, 21);
				{
				setState(626);
				match(ASC);
				setState(627);
				match(LPAREN);
				setState(628);
				strExpr(0);
				setState(629);
				match(RPAREN);
				}
				break;
			case 22:
				_localctx = new NumFuncLENContext(_localctx);
				enterOuterAlt(_localctx, 22);
				{
				setState(631);
				match(LEN);
				setState(632);
				match(LPAREN);
				setState(633);
				strExpr(0);
				setState(634);
				match(RPAREN);
				}
				break;
			case 23:
				_localctx = new NumFuncINSTR2Context(_localctx);
				enterOuterAlt(_localctx, 23);
				{
				setState(636);
				match(INSTR);
				setState(637);
				match(LPAREN);
				setState(638);
				strExpr(0);
				setState(639);
				match(COMMA);
				setState(640);
				strExpr(0);
				setState(641);
				match(RPAREN);
				}
				break;
			case 24:
				_localctx = new NumFuncINSTR3Context(_localctx);
				enterOuterAlt(_localctx, 24);
				{
				setState(643);
				match(INSTR);
				setState(644);
				match(LPAREN);
				setState(645);
				strExpr(0);
				setState(646);
				match(COMMA);
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
			case 25:
				_localctx = new NumFuncVALContext(_localctx);
				enterOuterAlt(_localctx, 25);
				{
				setState(652);
				match(VAL);
				setState(653);
				match(LPAREN);
				setState(654);
				strExpr(0);
				setState(655);
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
		int _startState = 70;
		enterRecursionRule(_localctx, 70, RULE_numExpr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(673);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,61,_ctx) ) {
			case 1:
				{
				_localctx = new NumExprNumberContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(660);
				number();
				}
				break;
			case 2:
				{
				_localctx = new NumExprVarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(661);
				numVar();
				}
				break;
			case 3:
				{
				_localctx = new NumExprFuncContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(662);
				numFunc();
				}
				break;
			case 4:
				{
				_localctx = new NumExprNOTContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(663);
				match(NOT);
				setState(664);
				numExpr(16);
				}
				break;
			case 5:
				{
				_localctx = new NumExprNestedContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(665);
				match(LPAREN);
				setState(666);
				numExpr(0);
				setState(667);
				match(RPAREN);
				}
				break;
			case 6:
				{
				_localctx = new NumExprStrRelopContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(669);
				strExpr(0);
				setState(670);
				compare();
				setState(671);
				strExpr(0);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(717);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,63,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(715);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,62,_ctx) ) {
					case 1:
						{
						_localctx = new NumExprHatContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(675);
						if (!(precpred(_ctx, 14))) throw new FailedPredicateException(this, "precpred(_ctx, 14)");
						setState(676);
						match(HAT);
						setState(677);
						numExpr(14);
						}
						break;
					case 2:
						{
						_localctx = new NumExprMultiplyContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(678);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(679);
						match(MULTIPLY);
						setState(680);
						numExpr(14);
						}
						break;
					case 3:
						{
						_localctx = new NumExprDivideContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(681);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(682);
						match(DIVIDE);
						setState(683);
						numExpr(13);
						}
						break;
					case 4:
						{
						_localctx = new NumExprDIVContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(684);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(685);
						match(DIV);
						setState(686);
						numExpr(12);
						}
						break;
					case 5:
						{
						_localctx = new NumExprMODContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(687);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(688);
						match(MOD);
						setState(689);
						numExpr(11);
						}
						break;
					case 6:
						{
						_localctx = new NumExprPlusContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(690);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(691);
						match(PLUS);
						setState(692);
						numExpr(10);
						}
						break;
					case 7:
						{
						_localctx = new NumExprSubtractContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(693);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(694);
						match(MINUS);
						setState(695);
						numExpr(9);
						}
						break;
					case 8:
						{
						_localctx = new NumExprNumRelopContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(696);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(697);
						compare();
						setState(698);
						numExpr(8);
						}
						break;
					case 9:
						{
						_localctx = new NumExprSHLContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(700);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(701);
						match(SHL);
						setState(702);
						numExpr(6);
						}
						break;
					case 10:
						{
						_localctx = new NumExprSHRContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(703);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(704);
						match(SHR);
						setState(705);
						numExpr(5);
						}
						break;
					case 11:
						{
						_localctx = new NumExprANDContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(706);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(707);
						match(AND);
						setState(708);
						numExpr(4);
						}
						break;
					case 12:
						{
						_localctx = new NumExprORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(709);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(710);
						match(OR);
						setState(711);
						numExpr(3);
						}
						break;
					case 13:
						{
						_localctx = new NumExprEORContext(new NumExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_numExpr);
						setState(712);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(713);
						match(EOR);
						setState(714);
						numExpr(2);
						}
						break;
					}
					} 
				}
				setState(719);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,63,_ctx);
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
		enterRule(_localctx, 72, RULE_compare);
		try {
			setState(726);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case EQ:
				_localctx = new CompareEQContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(720);
				match(EQ);
				}
				break;
			case NE:
				_localctx = new CompareNEContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(721);
				match(NE);
				}
				break;
			case GT:
				_localctx = new CompareGTContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(722);
				match(GT);
				}
				break;
			case GE:
				_localctx = new CompareGEContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(723);
				match(GE);
				}
				break;
			case LT:
				_localctx = new CompareLTContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(724);
				match(LT);
				}
				break;
			case LE:
				_localctx = new CompareLEContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(725);
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
		case 33:
			return strExpr_sempred((StrExprContext)_localctx, predIndex);
		case 35:
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3f\u02db\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\3\2\7\2N\n\2\f\2\16\2Q\13\2\3\2\3"+
		"\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3_\n\3\3\4\3\4\3\4\5\4d\n"+
		"\4\7\4f\n\4\f\4\16\4i\13\4\3\4\5\4l\n\4\3\5\3\5\5\5p\n\5\3\6\3\6\3\7\3"+
		"\7\3\7\3\7\7\7x\n\7\f\7\16\7{\13\7\3\7\3\7\3\7\5\7\u0080\n\7\3\7\3\7\5"+
		"\7\u0084\n\7\3\7\3\7\3\7\3\7\5\7\u008a\n\7\3\7\3\7\5\7\u008e\n\7\3\7\7"+
		"\7\u0091\n\7\f\7\16\7\u0094\13\7\3\7\3\7\3\7\3\7\3\7\3\7\5\7\u009c\n\7"+
		"\3\7\3\7\5\7\u00a0\n\7\3\7\7\7\u00a3\n\7\f\7\16\7\u00a6\13\7\3\7\3\7\3"+
		"\7\3\7\5\7\u00ac\n\7\3\7\3\7\3\7\3\7\3\7\3\7\5\7\u00b4\n\7\3\7\3\7\5\7"+
		"\u00b8\n\7\3\7\5\7\u00bb\n\7\5\7\u00bd\n\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7"+
		"\3\7\7\7\u00c7\n\7\f\7\16\7\u00ca\13\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7"+
		"\3\7\7\7\u00d5\n\7\f\7\16\7\u00d8\13\7\3\7\3\7\5\7\u00dc\n\7\3\7\3\7\3"+
		"\7\5\7\u00e1\n\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\7\7\u00ea\n\7\f\7\16\7\u00ed"+
		"\13\7\3\7\3\7\5\7\u00f1\n\7\3\b\3\b\3\t\3\t\3\t\5\t\u00f8\n\t\3\n\3\n"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\5\13\u0102\n\13\3\13\3\13\7\13\u0106\n"+
		"\13\f\13\16\13\u0109\13\13\3\13\3\13\3\13\3\13\3\13\3\13\5\13\u0111\n"+
		"\13\3\13\3\13\7\13\u0115\n\13\f\13\16\13\u0118\13\13\3\13\3\13\3\13\3"+
		"\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3"+
		"\13\5\13\u012c\n\13\3\f\3\f\3\f\3\f\3\f\3\f\5\f\u0134\n\f\3\f\3\f\7\f"+
		"\u0138\n\f\f\f\16\f\u013b\13\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\f\5\f"+
		"\u0146\n\f\3\r\3\r\3\r\5\r\u014b\n\r\3\16\3\16\3\17\3\17\3\20\3\20\3\21"+
		"\3\21\3\22\3\22\3\22\3\22\3\22\3\22\5\22\u015b\n\22\3\22\3\22\7\22\u015f"+
		"\n\22\f\22\16\22\u0162\13\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3"+
		"\22\5\22\u016d\n\22\3\23\3\23\3\23\3\23\3\23\7\23\u0174\n\23\f\23\16\23"+
		"\u0177\13\23\3\23\3\23\3\24\3\24\3\24\7\24\u017e\n\24\f\24\16\24\u0181"+
		"\13\24\3\25\5\25\u0184\n\25\3\25\3\25\3\25\5\25\u0189\n\25\3\25\7\25\u018c"+
		"\n\25\f\25\16\25\u018f\13\25\3\26\3\26\3\26\7\26\u0194\n\26\f\26\16\26"+
		"\u0197\13\26\3\27\3\27\3\27\7\27\u019c\n\27\f\27\16\27\u019f\13\27\3\30"+
		"\5\30\u01a2\n\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\5\30\u01ac\n"+
		"\30\3\31\6\31\u01af\n\31\r\31\16\31\u01b0\3\32\5\32\u01b4\n\32\3\32\5"+
		"\32\u01b7\n\32\3\32\3\32\3\32\5\32\u01bc\n\32\7\32\u01be\n\32\f\32\16"+
		"\32\u01c1\13\32\3\33\3\33\5\33\u01c5\n\33\3\34\3\34\3\34\3\34\5\34\u01cb"+
		"\n\34\3\35\5\35\u01ce\n\35\3\35\3\35\3\36\3\36\3\37\3\37\3 \5 \u01d7\n"+
		" \3 \3 \3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3"+
		"!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3"+
		"!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\5!\u0213\n!\3\"\3\"\3#\3#\3#\3#"+
		"\5#\u021b\n#\3#\3#\3#\7#\u0220\n#\f#\16#\u0223\13#\3$\3$\3$\3$\3$\3$\3"+
		"$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3"+
		"$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3"+
		"$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3"+
		"$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3"+
		"$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\3$\5$\u0294\n$\3%\3%\3%\3%\3%\3%\3"+
		"%\3%\3%\3%\3%\3%\3%\3%\5%\u02a4\n%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3"+
		"%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3%\3"+
		"%\3%\3%\3%\3%\3%\7%\u02ce\n%\f%\16%\u02d1\13%\3&\3&\3&\3&\3&\3&\5&\u02d9"+
		"\n&\3&\2\4DH\'\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64"+
		"\668:<>@BDFHJ\2\6\4\2\17\17UU\3\2XZ\5\2KKNNSS\3\2>?\2\u0345\2O\3\2\2\2"+
		"\4^\3\2\2\2\6k\3\2\2\2\bo\3\2\2\2\nq\3\2\2\2\f\u00f0\3\2\2\2\16\u00f2"+
		"\3\2\2\2\20\u00f7\3\2\2\2\22\u00f9\3\2\2\2\24\u012b\3\2\2\2\26\u0145\3"+
		"\2\2\2\30\u014a\3\2\2\2\32\u014c\3\2\2\2\34\u014e\3\2\2\2\36\u0150\3\2"+
		"\2\2 \u0152\3\2\2\2\"\u016c\3\2\2\2$\u016e\3\2\2\2&\u017a\3\2\2\2(\u0183"+
		"\3\2\2\2*\u0190\3\2\2\2,\u0198\3\2\2\2.\u01ab\3\2\2\2\60\u01ae\3\2\2\2"+
		"\62\u01b3\3\2\2\2\64\u01c4\3\2\2\2\66\u01ca\3\2\2\28\u01cd\3\2\2\2:\u01d1"+
		"\3\2\2\2<\u01d3\3\2\2\2>\u01d6\3\2\2\2@\u0212\3\2\2\2B\u0214\3\2\2\2D"+
		"\u021a\3\2\2\2F\u0293\3\2\2\2H\u02a3\3\2\2\2J\u02d8\3\2\2\2LN\5\4\3\2"+
		"ML\3\2\2\2NQ\3\2\2\2OM\3\2\2\2OP\3\2\2\2PR\3\2\2\2QO\3\2\2\2RS\7\2\2\3"+
		"S\3\3\2\2\2T_\7J\2\2UV\7M\2\2V_\7J\2\2WX\5\6\4\2XY\7J\2\2Y_\3\2\2\2Z["+
		"\5\n\6\2[\\\5\6\4\2\\]\7J\2\2]_\3\2\2\2^T\3\2\2\2^U\3\2\2\2^W\3\2\2\2"+
		"^Z\3\2\2\2_\5\3\2\2\2`g\5\f\7\2ac\7M\2\2bd\5\f\7\2cb\3\2\2\2cd\3\2\2\2"+
		"df\3\2\2\2ea\3\2\2\2fi\3\2\2\2ge\3\2\2\2gh\3\2\2\2hl\3\2\2\2ig\3\2\2\2"+
		"jl\t\2\2\2k`\3\2\2\2kj\3\2\2\2l\7\3\2\2\2mp\5\6\4\2np\5\4\3\2om\3\2\2"+
		"\2on\3\2\2\2p\t\3\2\2\2qr\7d\2\2r\13\3\2\2\2st\7\4\2\2ty\5$\23\2uv\7N"+
		"\2\2vx\5$\23\2wu\3\2\2\2x{\3\2\2\2yw\3\2\2\2yz\3\2\2\2z\u00f1\3\2\2\2"+
		"{y\3\2\2\2|\u00f1\7\5\2\2}\177\7\61\2\2~\u0080\5\64\33\2\177~\3\2\2\2"+
		"\177\u0080\3\2\2\2\u0080\u00f1\3\2\2\2\u0081\u0083\7\20\2\2\u0082\u0084"+
		"\5\64\33\2\u0083\u0082\3\2\2\2\u0083\u0084\3\2\2\2\u0084\u00f1\3\2\2\2"+
		"\u0085\u0086\7\3\2\2\u0086\u0087\5\16\b\2\u0087\u0089\7P\2\2\u0088\u008a"+
		"\5(\25\2\u0089\u0088\3\2\2\2\u0089\u008a\3\2\2\2\u008a\u008b\3\2\2\2\u008b"+
		"\u008d\7R\2\2\u008c\u008e\7M\2\2\u008d\u008c\3\2\2\2\u008d\u008e\3\2\2"+
		"\2\u008e\u0092\3\2\2\2\u008f\u0091\5\b\5\2\u0090\u008f\3\2\2\2\u0091\u0094"+
		"\3\2\2\2\u0092\u0090\3\2\2\2\u0092\u0093\3\2\2\2\u0093\u0095\3\2\2\2\u0094"+
		"\u0092\3\2\2\2\u0095\u0096\7\6\2\2\u0096\u00f1\3\2\2\2\u0097\u0098\7\3"+
		"\2\2\u0098\u0099\7W\2\2\u0099\u009b\7P\2\2\u009a\u009c\5(\25\2\u009b\u009a"+
		"\3\2\2\2\u009b\u009c\3\2\2\2\u009c\u009d\3\2\2\2\u009d\u009f\7R\2\2\u009e"+
		"\u00a0\7M\2\2\u009f\u009e\3\2\2\2\u009f\u00a0\3\2\2\2\u00a0\u00a4\3\2"+
		"\2\2\u00a1\u00a3\5\b\5\2\u00a2\u00a1\3\2\2\2\u00a3\u00a6\3\2\2\2\u00a4"+
		"\u00a2\3\2\2\2\u00a4\u00a5\3\2\2\2\u00a5\u00a7\3\2\2\2\u00a6\u00a4\3\2"+
		"\2\2\u00a7\u00f1\7\7\2\2\u00a8\u00a9\5\16\b\2\u00a9\u00ab\7P\2\2\u00aa"+
		"\u00ac\5*\26\2\u00ab\u00aa\3\2\2\2\u00ab\u00ac\3\2\2\2\u00ac\u00ad\3\2"+
		"\2\2\u00ad\u00ae\7R\2\2\u00ae\u00f1\3\2\2\2\u00af\u00b3\7\t\2\2\u00b0"+
		"\u00b1\5D#\2\u00b1\u00b2\7N\2\2\u00b2\u00b4\3\2\2\2\u00b3\u00b0\3\2\2"+
		"\2\u00b3\u00b4\3\2\2\2\u00b4\u00b5\3\2\2\2\u00b5\u00f1\5&\24\2\u00b6\u00b8"+
		"\7\f\2\2\u00b7\u00b6\3\2\2\2\u00b7\u00b8\3\2\2\2\u00b8\u00bd\3\2\2\2\u00b9"+
		"\u00bb\7\n\2\2\u00ba\u00b9\3\2\2\2\u00ba\u00bb\3\2\2\2\u00bb\u00bd\3\2"+
		"\2\2\u00bc\u00b7\3\2\2\2\u00bc\u00ba\3\2\2\2\u00bd\u00be\3\2\2\2\u00be"+
		"\u00bf\5\"\22\2\u00bf\u00c0\7\61\2\2\u00c0\u00c8\5\64\33\2\u00c1\u00c2"+
		"\7N\2\2\u00c2\u00c3\5\"\22\2\u00c3\u00c4\7\61\2\2\u00c4\u00c5\5\64\33"+
		"\2\u00c5\u00c7\3\2\2\2\u00c6\u00c1\3\2\2\2\u00c7\u00ca\3\2\2\2\u00c8\u00c6"+
		"\3\2\2\2\u00c8\u00c9\3\2\2\2\u00c9\u00f1\3\2\2\2\u00ca\u00c8\3\2\2\2\u00cb"+
		"\u00cc\7\13\2\2\u00cc\u00cd\5\"\22\2\u00cd\u00ce\7\61\2\2\u00ce\u00d6"+
		"\5\64\33\2\u00cf\u00d0\7N\2\2\u00d0\u00d1\5\"\22\2\u00d1\u00d2\7\61\2"+
		"\2\u00d2\u00d3\5\64\33\2\u00d3\u00d5\3\2\2\2\u00d4\u00cf\3\2\2\2\u00d5"+
		"\u00d8\3\2\2\2\u00d6\u00d4\3\2\2\2\u00d6\u00d7\3\2\2\2\u00d7\u00f1\3\2"+
		"\2\2\u00d8\u00d6\3\2\2\2\u00d9\u00db\7\r\2\2\u00da\u00dc\5\62\32\2\u00db"+
		"\u00da\3\2\2\2\u00db\u00dc\3\2\2\2\u00dc\u00f1\3\2\2\2\u00dd\u00de\7W"+
		"\2\2\u00de\u00e0\7P\2\2\u00df\u00e1\5*\26\2\u00e0\u00df\3\2\2\2\u00e0"+
		"\u00e1\3\2\2\2\u00e1\u00e2\3\2\2\2\u00e2\u00f1\7R\2\2\u00e3\u00e4\7\22"+
		"\2\2\u00e4\u00e5\5\32\16\2\u00e5\u00e6\7P\2\2\u00e6\u00eb\5\30\r\2\u00e7"+
		"\u00e8\7N\2\2\u00e8\u00ea\5\30\r\2\u00e9\u00e7\3\2\2\2\u00ea\u00ed\3\2"+
		"\2\2\u00eb\u00e9\3\2\2\2\u00eb\u00ec\3\2\2\2\u00ec\u00ee\3\2\2\2\u00ed"+
		"\u00eb\3\2\2\2\u00ee\u00ef\7R\2\2\u00ef\u00f1\3\2\2\2\u00f0s\3\2\2\2\u00f0"+
		"|\3\2\2\2\u00f0}\3\2\2\2\u00f0\u0081\3\2\2\2\u00f0\u0085\3\2\2\2\u00f0"+
		"\u0097\3\2\2\2\u00f0\u00a8\3\2\2\2\u00f0\u00af\3\2\2\2\u00f0\u00bc\3\2"+
		"\2\2\u00f0\u00cb\3\2\2\2\u00f0\u00d9\3\2\2\2\u00f0\u00dd\3\2\2\2\u00f0"+
		"\u00e3\3\2\2\2\u00f1\r\3\2\2\2\u00f2\u00f3\t\3\2\2\u00f3\17\3\2\2\2\u00f4"+
		"\u00f8\5\24\13\2\u00f5\u00f8\5\26\f\2\u00f6\u00f8\5\22\n\2\u00f7\u00f4"+
		"\3\2\2\2\u00f7\u00f5\3\2\2\2\u00f7\u00f6\3\2\2\2\u00f8\21\3\2\2\2\u00f9"+
		"\u00fa\5 \21\2\u00fa\23\3\2\2\2\u00fb\u012c\5\32\16\2\u00fc\u0107\5\32"+
		"\16\2\u00fd\u00fe\7P\2\2\u00fe\u0101\5H%\2\u00ff\u0100\7N\2\2\u0100\u0102"+
		"\5H%\2\u0101\u00ff\3\2\2\2\u0101\u0102\3\2\2\2\u0102\u0103\3\2\2\2\u0103"+
		"\u0104\7R\2\2\u0104\u0106\3\2\2\2\u0105\u00fd\3\2\2\2\u0106\u0109\3\2"+
		"\2\2\u0107\u0105\3\2\2\2\u0107\u0108\3\2\2\2\u0108\u012c\3\2\2\2\u0109"+
		"\u0107\3\2\2\2\u010a\u012c\5\34\17\2\u010b\u0116\5\34\17\2\u010c\u010d"+
		"\7P\2\2\u010d\u0110\5H%\2\u010e\u010f\7N\2\2\u010f\u0111\5H%\2\u0110\u010e"+
		"\3\2\2\2\u0110\u0111\3\2\2\2\u0111\u0112\3\2\2\2\u0112\u0113\7R\2\2\u0113"+
		"\u0115\3\2\2\2\u0114\u010c\3\2\2\2\u0115\u0118\3\2\2\2\u0116\u0114\3\2"+
		"\2\2\u0116\u0117\3\2\2\2\u0117\u012c\3\2\2\2\u0118\u0116\3\2\2\2\u0119"+
		"\u011a\5\22\n\2\u011a\u011b\5\32\16\2\u011b\u012c\3\2\2\2\u011c\u011d"+
		"\5\22\n\2\u011d\u011e\7P\2\2\u011e\u011f\5H%\2\u011f\u0120\7R\2\2\u0120"+
		"\u0121\5\32\16\2\u0121\u012c\3\2\2\2\u0122\u0123\5\22\n\2\u0123\u0124"+
		"\5\34\17\2\u0124\u012c\3\2\2\2\u0125\u0126\5\22\n\2\u0126\u0127\7P\2\2"+
		"\u0127\u0128\5H%\2\u0128\u0129\7R\2\2\u0129\u012a\5\34\17\2\u012a\u012c"+
		"\3\2\2\2\u012b\u00fb\3\2\2\2\u012b\u00fc\3\2\2\2\u012b\u010a\3\2\2\2\u012b"+
		"\u010b\3\2\2\2\u012b\u0119\3\2\2\2\u012b\u011c\3\2\2\2\u012b\u0122\3\2"+
		"\2\2\u012b\u0125\3\2\2\2\u012c\25\3\2\2\2\u012d\u0146\5\36\20\2\u012e"+
		"\u0139\5\36\20\2\u012f\u0130\7P\2\2\u0130\u0133\5H%\2\u0131\u0132\7N\2"+
		"\2\u0132\u0134\5H%\2\u0133\u0131\3\2\2\2\u0133\u0134\3\2\2\2\u0134\u0135"+
		"\3\2\2\2\u0135\u0136\7R\2\2\u0136\u0138\3\2\2\2\u0137\u012f\3\2\2\2\u0138"+
		"\u013b\3\2\2\2\u0139\u0137\3\2\2\2\u0139\u013a\3\2\2\2\u013a\u0146\3\2"+
		"\2\2\u013b\u0139\3\2\2\2\u013c\u013d\5\22\n\2\u013d\u013e\5\36\20\2\u013e"+
		"\u0146\3\2\2\2\u013f\u0140\5\22\n\2\u0140\u0141\7P\2\2\u0141\u0142\5H"+
		"%\2\u0142\u0143\7R\2\2\u0143\u0144\5\36\20\2\u0144\u0146\3\2\2\2\u0145"+
		"\u012d\3\2\2\2\u0145\u012e\3\2\2\2\u0145\u013c\3\2\2\2\u0145\u013f\3\2"+
		"\2\2\u0146\27\3\2\2\2\u0147\u014b\5\32\16\2\u0148\u014b\5\34\17\2\u0149"+
		"\u014b\5\36\20\2\u014a\u0147\3\2\2\2\u014a\u0148\3\2\2\2\u014a\u0149\3"+
		"\2\2\2\u014b\31\3\2\2\2\u014c\u014d\7[\2\2\u014d\33\3\2\2\2\u014e\u014f"+
		"\7\\\2\2\u014f\35\3\2\2\2\u0150\u0151\7]\2\2\u0151\37\3\2\2\2\u0152\u0153"+
		"\7^\2\2\u0153!\3\2\2\2\u0154\u016d\5\20\t\2\u0155\u0160\5\20\t\2\u0156"+
		"\u0157\7P\2\2\u0157\u015a\5H%\2\u0158\u0159\7N\2\2\u0159\u015b\5H%\2\u015a"+
		"\u0158\3\2\2\2\u015a\u015b\3\2\2\2\u015b\u015c\3\2\2\2\u015c\u015d\7R"+
		"\2\2\u015d\u015f\3\2\2\2\u015e\u0156\3\2\2\2\u015f\u0162\3\2\2\2\u0160"+
		"\u015e\3\2\2\2\u0160\u0161\3\2\2\2\u0161\u016d\3\2\2\2\u0162\u0160\3\2"+
		"\2\2\u0163\u0164\5\22\n\2\u0164\u0165\5\32\16\2\u0165\u016d\3\2\2\2\u0166"+
		"\u0167\5\22\n\2\u0167\u0168\7P\2\2\u0168\u0169\5H%\2\u0169\u016a\7R\2"+
		"\2\u016a\u016b\5\32\16\2\u016b\u016d\3\2\2\2\u016c\u0154\3\2\2\2\u016c"+
		"\u0155\3\2\2\2\u016c\u0163\3\2\2\2\u016c\u0166\3\2\2\2\u016d#\3\2\2\2"+
		"\u016e\u016f\5\20\t\2\u016f\u0170\7P\2\2\u0170\u0175\5H%\2\u0171\u0172"+
		"\7N\2\2\u0172\u0174\5H%\2\u0173\u0171\3\2\2\2\u0174\u0177\3\2\2\2\u0175"+
		"\u0173\3\2\2\2\u0175\u0176\3\2\2\2\u0176\u0178\3\2\2\2\u0177\u0175\3\2"+
		"\2\2\u0178\u0179\7R\2\2\u0179%\3\2\2\2\u017a\u017f\5\"\22\2\u017b\u017c"+
		"\7N\2\2\u017c\u017e\5\"\22\2\u017d\u017b\3\2\2\2\u017e\u0181\3\2\2\2\u017f"+
		"\u017d\3\2\2\2\u017f\u0180\3\2\2\2\u0180\'\3\2\2\2\u0181\u017f\3\2\2\2"+
		"\u0182\u0184\7\20\2\2\u0183\u0182\3\2\2\2\u0183\u0184\3\2\2\2\u0184\u0185"+
		"\3\2\2\2\u0185\u018d\5\30\r\2\u0186\u0188\7N\2\2\u0187\u0189\7\20\2\2"+
		"\u0188\u0187\3\2\2\2\u0188\u0189\3\2\2\2\u0189\u018a\3\2\2\2\u018a\u018c"+
		"\5\30\r\2\u018b\u0186\3\2\2\2\u018c\u018f\3\2\2\2\u018d\u018b\3\2\2\2"+
		"\u018d\u018e\3\2\2\2\u018e)\3\2\2\2\u018f\u018d\3\2\2\2\u0190\u0195\5"+
		"\64\33\2\u0191\u0192\7N\2\2\u0192\u0194\5\64\33\2\u0193\u0191\3\2\2\2"+
		"\u0194\u0197\3\2\2\2\u0195\u0193\3\2\2\2\u0195\u0196\3\2\2\2\u0196+\3"+
		"\2\2\2\u0197\u0195\3\2\2\2\u0198\u019d\5\64\33\2\u0199\u019a\7N\2\2\u019a"+
		"\u019c\5\64\33\2\u019b\u0199\3\2\2\2\u019c\u019f\3\2\2\2\u019d\u019b\3"+
		"\2\2\2\u019d\u019e\3\2\2\2\u019e-\3\2\2\2\u019f\u019d\3\2\2\2\u01a0\u01a2"+
		"\7L\2\2\u01a1\u01a0\3\2\2\2\u01a1\u01a2\3\2\2\2\u01a2\u01a3\3\2\2\2\u01a3"+
		"\u01ac\5\64\33\2\u01a4\u01a5\7\21\2\2\u01a5\u01a6\7P\2\2\u01a6\u01a7\5"+
		"H%\2\u01a7\u01a8\7R\2\2\u01a8\u01ac\3\2\2\2\u01a9\u01aa\7\21\2\2\u01aa"+
		"\u01ac\5H%\2\u01ab\u01a1\3\2\2\2\u01ab\u01a4\3\2\2\2\u01ab\u01a9\3\2\2"+
		"\2\u01ac/\3\2\2\2\u01ad\u01af\7K\2\2\u01ae\u01ad\3\2\2\2\u01af\u01b0\3"+
		"\2\2\2\u01b0\u01ae\3\2\2\2\u01b0\u01b1\3\2\2\2\u01b1\61\3\2\2\2\u01b2"+
		"\u01b4\5\60\31\2\u01b3\u01b2\3\2\2\2\u01b3\u01b4\3\2\2\2\u01b4\u01b6\3"+
		"\2\2\2\u01b5\u01b7\7N\2\2\u01b6\u01b5\3\2\2\2\u01b6\u01b7\3\2\2\2\u01b7"+
		"\u01b8\3\2\2\2\u01b8\u01bf\5.\30\2\u01b9\u01bb\t\4\2\2\u01ba\u01bc\5."+
		"\30\2\u01bb\u01ba\3\2\2\2\u01bb\u01bc\3\2\2\2\u01bc\u01be\3\2\2\2\u01bd"+
		"\u01b9\3\2\2\2\u01be\u01c1\3\2\2\2\u01bf\u01bd\3\2\2\2\u01bf\u01c0\3\2"+
		"\2\2\u01c0\63\3\2\2\2\u01c1\u01bf\3\2\2\2\u01c2\u01c5\5H%\2\u01c3\u01c5"+
		"\5D#\2\u01c4\u01c2\3\2\2\2\u01c4\u01c3\3\2\2\2\u01c5\65\3\2\2\2\u01c6"+
		"\u01cb\58\35\2\u01c7\u01cb\5> \2\u01c8\u01cb\5:\36\2\u01c9\u01cb\5<\37"+
		"\2\u01ca\u01c6\3\2\2\2\u01ca\u01c7\3\2\2\2\u01ca\u01c8\3\2\2\2\u01ca\u01c9"+
		"\3\2\2\2\u01cb\67\3\2\2\2\u01cc\u01ce\t\5\2\2\u01cd\u01cc\3\2\2\2\u01cd"+
		"\u01ce\3\2\2\2\u01ce\u01cf\3\2\2\2\u01cf\u01d0\7d\2\2\u01d09\3\2\2\2\u01d1"+
		"\u01d2\7b\2\2\u01d2;\3\2\2\2\u01d3\u01d4\7c\2\2\u01d4=\3\2\2\2\u01d5\u01d7"+
		"\t\5\2\2\u01d6\u01d5\3\2\2\2\u01d6\u01d7\3\2\2\2\u01d7\u01d8\3\2\2\2\u01d8"+
		"\u01d9\7e\2\2\u01d9?\3\2\2\2\u01da\u0213\7\'\2\2\u01db\u01dc\7*\2\2\u01dc"+
		"\u01dd\7P\2\2\u01dd\u01de\5H%\2\u01de\u01df\7R\2\2\u01df\u0213\3\2\2\2"+
		"\u01e0\u01e1\7*\2\2\u01e1\u0213\5H%\2\u01e2\u01e3\7+\2\2\u01e3\u01e4\7"+
		"P\2\2\u01e4\u01e5\5D#\2\u01e5\u01e6\7N\2\2\u01e6\u01e7\5H%\2\u01e7\u01e8"+
		"\7R\2\2\u01e8\u0213\3\2\2\2\u01e9\u01ea\7,\2\2\u01ea\u01eb\7P\2\2\u01eb"+
		"\u01ec\5D#\2\u01ec\u01ed\7N\2\2\u01ed\u01ee\5H%\2\u01ee\u01ef\7N\2\2\u01ef"+
		"\u01f0\5H%\2\u01f0\u01f1\7R\2\2\u01f1\u0213\3\2\2\2\u01f2\u01f3\7,\2\2"+
		"\u01f3\u01f4\7P\2\2\u01f4\u01f5\5D#\2\u01f5\u01f6\7N\2\2\u01f6\u01f7\5"+
		"H%\2\u01f7\u01f8\7R\2\2\u01f8\u0213\3\2\2\2\u01f9\u01fa\7-\2\2\u01fa\u01fb"+
		"\7P\2\2\u01fb\u01fc\5D#\2\u01fc\u01fd\7N\2\2\u01fd\u01fe\5H%\2\u01fe\u01ff"+
		"\7R\2\2\u01ff\u0213\3\2\2\2\u0200\u0201\7(\2\2\u0201\u0202\7P\2\2\u0202"+
		"\u0203\5H%\2\u0203\u0204\7R\2\2\u0204\u0213\3\2\2\2\u0205\u0206\7(\2\2"+
		"\u0206\u0207\7L\2\2\u0207\u0208\7P\2\2\u0208\u0209\5H%\2\u0209\u020a\7"+
		"R\2\2\u020a\u0213\3\2\2\2\u020b\u020c\7)\2\2\u020c\u020d\7P\2\2\u020d"+
		"\u020e\5H%\2\u020e\u020f\7N\2\2\u020f\u0210\5D#\2\u0210\u0211\7R\2\2\u0211"+
		"\u0213\3\2\2\2\u0212\u01da\3\2\2\2\u0212\u01db\3\2\2\2\u0212\u01e0\3\2"+
		"\2\2\u0212\u01e2\3\2\2\2\u0212\u01e9\3\2\2\2\u0212\u01f2\3\2\2\2\u0212"+
		"\u01f9\3\2\2\2\u0212\u0200\3\2\2\2\u0212\u0205\3\2\2\2\u0212\u020b\3\2"+
		"\2\2\u0213A\3\2\2\2\u0214\u0215\7V\2\2\u0215C\3\2\2\2\u0216\u0217\b#\1"+
		"\2\u0217\u021b\5B\"\2\u0218\u021b\5\26\f\2\u0219\u021b\5@!\2\u021a\u0216"+
		"\3\2\2\2\u021a\u0218\3\2\2\2\u021a\u0219\3\2\2\2\u021b\u0221\3\2\2\2\u021c"+
		"\u021d\f\3\2\2\u021d\u021e\7>\2\2\u021e\u0220\5D#\4\u021f\u021c\3\2\2"+
		"\2\u0220\u0223\3\2\2\2\u0221\u021f\3\2\2\2\u0221\u0222\3\2\2\2\u0222E"+
		"\3\2\2\2\u0223\u0221\3\2\2\2\u0224\u0294\7\24\2\2\u0225\u0294\7\23\2\2"+
		"\u0226\u0294\7.\2\2\u0227\u0294\7/\2\2\u0228\u0294\7\60\2\2\u0229\u022a"+
		"\7.\2\2\u022a\u022b\7P\2\2\u022b\u022c\5H%\2\u022c\u022d\7R\2\2\u022d"+
		"\u0294\3\2\2\2\u022e\u022f\7\26\2\2\u022f\u0230\7P\2\2\u0230\u0231\5H"+
		"%\2\u0231\u0232\7R\2\2\u0232\u0294\3\2\2\2\u0233\u0234\7\27\2\2\u0234"+
		"\u0235\7P\2\2\u0235\u0236\5H%\2\u0236\u0237\7R\2\2\u0237\u0294\3\2\2\2"+
		"\u0238\u0239\7\30\2\2\u0239\u023a\7P\2\2\u023a\u023b\5H%\2\u023b\u023c"+
		"\7R\2\2\u023c\u0294\3\2\2\2\u023d\u023e\7\31\2\2\u023e\u023f\7P\2\2\u023f"+
		"\u0240\5H%\2\u0240\u0241\7R\2\2\u0241\u0294\3\2\2\2\u0242\u0243\7\32\2"+
		"\2\u0243\u0244\7P\2\2\u0244\u0245\5H%\2\u0245\u0246\7R\2\2\u0246\u0294"+
		"\3\2\2\2\u0247\u0248\7\33\2\2\u0248\u0249\7P\2\2\u0249\u024a\5H%\2\u024a"+
		"\u024b\7R\2\2\u024b\u0294\3\2\2\2\u024c\u024d\7\34\2\2\u024d\u024e\7P"+
		"\2\2\u024e\u024f\5H%\2\u024f\u0250\7R\2\2\u0250\u0294\3\2\2\2\u0251\u0252"+
		"\7\35\2\2\u0252\u0253\7P\2\2\u0253\u0254\5H%\2\u0254\u0255\7R\2\2\u0255"+
		"\u0294\3\2\2\2\u0256\u0257\7\36\2\2\u0257\u0258\7P\2\2\u0258\u0259\5H"+
		"%\2\u0259\u025a\7R\2\2\u025a\u0294\3\2\2\2\u025b\u025c\7\37\2\2\u025c"+
		"\u025d\7P\2\2\u025d\u025e\5H%\2\u025e\u025f\7R\2\2\u025f\u0294\3\2\2\2"+
		"\u0260\u0261\7 \2\2\u0261\u0262\7P\2\2\u0262\u0263\5H%\2\u0263\u0264\7"+
		"R\2\2\u0264\u0294\3\2\2\2\u0265\u0266\7!\2\2\u0266\u0267\7P\2\2\u0267"+
		"\u0268\5H%\2\u0268\u0269\7R\2\2\u0269\u0294\3\2\2\2\u026a\u026b\7\25\2"+
		"\2\u026b\u026c\7P\2\2\u026c\u026d\5H%\2\u026d\u026e\7R\2\2\u026e\u0294"+
		"\3\2\2\2\u026f\u0270\7\"\2\2\u0270\u0271\7P\2\2\u0271\u0272\5H%\2\u0272"+
		"\u0273\7R\2\2\u0273\u0294\3\2\2\2\u0274\u0275\7#\2\2\u0275\u0276\7P\2"+
		"\2\u0276\u0277\5D#\2\u0277\u0278\7R\2\2\u0278\u0294\3\2\2\2\u0279\u027a"+
		"\7$\2\2\u027a\u027b\7P\2\2\u027b\u027c\5D#\2\u027c\u027d\7R\2\2\u027d"+
		"\u0294\3\2\2\2\u027e\u027f\7%\2\2\u027f\u0280\7P\2\2\u0280\u0281\5D#\2"+
		"\u0281\u0282\7N\2\2\u0282\u0283\5D#\2\u0283\u0284\7R\2\2\u0284\u0294\3"+
		"\2\2\2\u0285\u0286\7%\2\2\u0286\u0287\7P\2\2\u0287\u0288\5D#\2\u0288\u0289"+
		"\7N\2\2\u0289\u028a\5D#\2\u028a\u028b\7N\2\2\u028b\u028c\5H%\2\u028c\u028d"+
		"\7R\2\2\u028d\u0294\3\2\2\2\u028e\u028f\7&\2\2\u028f\u0290\7P\2\2\u0290"+
		"\u0291\5D#\2\u0291\u0292\7R\2\2\u0292\u0294\3\2\2\2\u0293\u0224\3\2\2"+
		"\2\u0293\u0225\3\2\2\2\u0293\u0226\3\2\2\2\u0293\u0227\3\2\2\2\u0293\u0228"+
		"\3\2\2\2\u0293\u0229\3\2\2\2\u0293\u022e\3\2\2\2\u0293\u0233\3\2\2\2\u0293"+
		"\u0238\3\2\2\2\u0293\u023d\3\2\2\2\u0293\u0242\3\2\2\2\u0293\u0247\3\2"+
		"\2\2\u0293\u024c\3\2\2\2\u0293\u0251\3\2\2\2\u0293\u0256\3\2\2\2\u0293"+
		"\u025b\3\2\2\2\u0293\u0260\3\2\2\2\u0293\u0265\3\2\2\2\u0293\u026a\3\2"+
		"\2\2\u0293\u026f\3\2\2\2\u0293\u0274\3\2\2\2\u0293\u0279\3\2\2\2\u0293"+
		"\u027e\3\2\2\2\u0293\u0285\3\2\2\2\u0293\u028e\3\2\2\2\u0294G\3\2\2\2"+
		"\u0295\u0296\b%\1\2\u0296\u02a4\5\66\34\2\u0297\u02a4\5\24\13\2\u0298"+
		"\u02a4\5F$\2\u0299\u029a\7\67\2\2\u029a\u02a4\5H%\22\u029b\u029c\7P\2"+
		"\2\u029c\u029d\5H%\2\u029d\u029e\7R\2\2\u029e\u02a4\3\2\2\2\u029f\u02a0"+
		"\5D#\2\u02a0\u02a1\5J&\2\u02a1\u02a2\5D#\2\u02a2\u02a4\3\2\2\2\u02a3\u0295"+
		"\3\2\2\2\u02a3\u0297\3\2\2\2\u02a3\u0298\3\2\2\2\u02a3\u0299\3\2\2\2\u02a3"+
		"\u029b\3\2\2\2\u02a3\u029f\3\2\2\2\u02a4\u02cf\3\2\2\2\u02a5\u02a6\f\20"+
		"\2\2\u02a6\u02a7\7=\2\2\u02a7\u02ce\5H%\20\u02a8\u02a9\f\17\2\2\u02a9"+
		"\u02aa\7@\2\2\u02aa\u02ce\5H%\20\u02ab\u02ac\f\16\2\2\u02ac\u02ad\7A\2"+
		"\2\u02ad\u02ce\5H%\17\u02ae\u02af\f\r\2\2\u02af\u02b0\7<\2\2\u02b0\u02ce"+
		"\5H%\16\u02b1\u02b2\f\f\2\2\u02b2\u02b3\7;\2\2\u02b3\u02ce\5H%\r\u02b4"+
		"\u02b5\f\13\2\2\u02b5\u02b6\7>\2\2\u02b6\u02ce\5H%\f\u02b7\u02b8\f\n\2"+
		"\2\u02b8\u02b9\7?\2\2\u02b9\u02ce\5H%\13\u02ba\u02bb\f\t\2\2\u02bb\u02bc"+
		"\5J&\2\u02bc\u02bd\5H%\n\u02bd\u02ce\3\2\2\2\u02be\u02bf\f\7\2\2\u02bf"+
		"\u02c0\7B\2\2\u02c0\u02ce\5H%\b\u02c1\u02c2\f\6\2\2\u02c2\u02c3\7C\2\2"+
		"\u02c3\u02ce\5H%\7\u02c4\u02c5\f\5\2\2\u02c5\u02c6\78\2\2\u02c6\u02ce"+
		"\5H%\6\u02c7\u02c8\f\4\2\2\u02c8\u02c9\79\2\2\u02c9\u02ce\5H%\5\u02ca"+
		"\u02cb\f\3\2\2\u02cb\u02cc\7:\2\2\u02cc\u02ce\5H%\4\u02cd\u02a5\3\2\2"+
		"\2\u02cd\u02a8\3\2\2\2\u02cd\u02ab\3\2\2\2\u02cd\u02ae\3\2\2\2\u02cd\u02b1"+
		"\3\2\2\2\u02cd\u02b4\3\2\2\2\u02cd\u02b7\3\2\2\2\u02cd\u02ba\3\2\2\2\u02cd"+
		"\u02be\3\2\2\2\u02cd\u02c1\3\2\2\2\u02cd\u02c4\3\2\2\2\u02cd\u02c7\3\2"+
		"\2\2\u02cd\u02ca\3\2\2\2\u02ce\u02d1\3\2\2\2\u02cf\u02cd\3\2\2\2\u02cf"+
		"\u02d0\3\2\2\2\u02d0I\3\2\2\2\u02d1\u02cf\3\2\2\2\u02d2\u02d9\7\61\2\2"+
		"\u02d3\u02d9\7\62\2\2\u02d4\u02d9\7\63\2\2\u02d5\u02d9\7\64\2\2\u02d6"+
		"\u02d9\7\65\2\2\u02d7\u02d9\7\66\2\2\u02d8\u02d2\3\2\2\2\u02d8\u02d3\3"+
		"\2\2\2\u02d8\u02d4\3\2\2\2\u02d8\u02d5\3\2\2\2\u02d8\u02d6\3\2\2\2\u02d8"+
		"\u02d7\3\2\2\2\u02d9K\3\2\2\2CO^cgkoy\177\u0083\u0089\u008d\u0092\u009b"+
		"\u009f\u00a4\u00ab\u00b3\u00b7\u00ba\u00bc\u00c8\u00d6\u00db\u00e0\u00eb"+
		"\u00f0\u00f7\u0101\u0107\u0110\u0116\u012b\u0133\u0139\u0145\u014a\u015a"+
		"\u0160\u016c\u0175\u017f\u0183\u0188\u018d\u0195\u019d\u01a1\u01ab\u01b0"+
		"\u01b3\u01b6\u01bb\u01bf\u01c4\u01ca\u01cd\u01d6\u0212\u021a\u0221\u0293"+
		"\u02a3\u02cd\u02cf\u02d8";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}