
// Generated from DARIC.g4 by ANTLR 4.9.1


#include "DARICVisitor.h"

#include "DARICParser.h"


using namespace antlrcpp;
using namespace antlr4;

DARICParser::DARICParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

DARICParser::~DARICParser() {
  delete _interpreter;
}

std::string DARICParser::getGrammarFileName() const {
  return "DARIC.g4";
}

const std::vector<std::string>& DARICParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& DARICParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

DARICParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::ProgContext::EOF() {
  return getToken(DARICParser::EOF, 0);
}

std::vector<DARICParser::LineContext *> DARICParser::ProgContext::line() {
  return getRuleContexts<DARICParser::LineContext>();
}

DARICParser::LineContext* DARICParser::ProgContext::line(size_t i) {
  return getRuleContext<DARICParser::LineContext>(i);
}


size_t DARICParser::ProgContext::getRuleIndex() const {
  return DARICParser::RuleProg;
}


antlrcpp::Any DARICParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::ProgContext* DARICParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, DARICParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << DARICParser::BREAKPOINT)
      | (1ULL << DARICParser::CASE)
      | (1ULL << DARICParser::CHAIN)
      | (1ULL << DARICParser::DATA)
      | (1ULL << DARICParser::DEF)
      | (1ULL << DARICParser::DIM)
      | (1ULL << DARICParser::END)
      | (1ULL << DARICParser::FOR)
      | (1ULL << DARICParser::IF)
      | (1ULL << DARICParser::INPUT)
      | (1ULL << DARICParser::GLOBAL)
      | (1ULL << DARICParser::LOCAL)
      | (1ULL << DARICParser::LET)
      | (1ULL << DARICParser::PRINT)
      | (1ULL << DARICParser::READ)
      | (1ULL << DARICParser::REM)
      | (1ULL << DARICParser::REPEAT)
      | (1ULL << DARICParser::RESTORE)
      | (1ULL << DARICParser::RETURN)
      | (1ULL << DARICParser::TRACEON)
      | (1ULL << DARICParser::TRACEOFF)
      | (1ULL << DARICParser::TYPE)
      | (1ULL << DARICParser::WHILE))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (DARICParser::EQ - 72))
      | (1ULL << (DARICParser::NEWLINE - 72))
      | (1ULL << (DARICParser::COLON - 72))
      | (1ULL << (DARICParser::COMMENT - 72))
      | (1ULL << (DARICParser::PROC_NAME - 72))
      | (1ULL << (DARICParser::FN_INTEGER - 72))
      | (1ULL << (DARICParser::FN_FLOAT - 72))
      | (1ULL << (DARICParser::FN_STRING - 72))
      | (1ULL << (DARICParser::VARIABLE_FLOAT - 72))
      | (1ULL << (DARICParser::VARIABLE_INTEGER - 72))
      | (1ULL << (DARICParser::VARIABLE_STRING - 72))
      | (1ULL << (DARICParser::VARIABLE_TYPE - 72))
      | (1ULL << (DARICParser::NUMBER - 72)))) != 0)) {
      setState(82);
      line();
      setState(87);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(88);
    match(DARICParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LineContext ------------------------------------------------------------------

DARICParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::LineContext::NEWLINE() {
  return getToken(DARICParser::NEWLINE, 0);
}

tree::TerminalNode* DARICParser::LineContext::COLON() {
  return getToken(DARICParser::COLON, 0);
}

DARICParser::ContentContext* DARICParser::LineContext::content() {
  return getRuleContext<DARICParser::ContentContext>(0);
}

DARICParser::LinenumberContext* DARICParser::LineContext::linenumber() {
  return getRuleContext<DARICParser::LinenumberContext>(0);
}


size_t DARICParser::LineContext::getRuleIndex() const {
  return DARICParser::RuleLine;
}


antlrcpp::Any DARICParser::LineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitLine(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::LineContext* DARICParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 2, DARICParser::RuleLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(100);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::NEWLINE: {
        enterOuterAlt(_localctx, 1);
        setState(90);
        match(DARICParser::NEWLINE);
        break;
      }

      case DARICParser::COLON: {
        enterOuterAlt(_localctx, 2);
        setState(91);
        match(DARICParser::COLON);
        setState(92);
        match(DARICParser::NEWLINE);
        break;
      }

      case DARICParser::BREAKPOINT:
      case DARICParser::CASE:
      case DARICParser::CHAIN:
      case DARICParser::DATA:
      case DARICParser::DEF:
      case DARICParser::DIM:
      case DARICParser::END:
      case DARICParser::FOR:
      case DARICParser::IF:
      case DARICParser::INPUT:
      case DARICParser::GLOBAL:
      case DARICParser::LOCAL:
      case DARICParser::LET:
      case DARICParser::PRINT:
      case DARICParser::READ:
      case DARICParser::REM:
      case DARICParser::REPEAT:
      case DARICParser::RESTORE:
      case DARICParser::RETURN:
      case DARICParser::TRACEON:
      case DARICParser::TRACEOFF:
      case DARICParser::TYPE:
      case DARICParser::WHILE:
      case DARICParser::EQ:
      case DARICParser::COMMENT:
      case DARICParser::PROC_NAME:
      case DARICParser::FN_INTEGER:
      case DARICParser::FN_FLOAT:
      case DARICParser::FN_STRING:
      case DARICParser::VARIABLE_FLOAT:
      case DARICParser::VARIABLE_INTEGER:
      case DARICParser::VARIABLE_STRING:
      case DARICParser::VARIABLE_TYPE: {
        enterOuterAlt(_localctx, 3);
        setState(93);
        content();
        setState(94);
        match(DARICParser::NEWLINE);
        break;
      }

      case DARICParser::NUMBER: {
        enterOuterAlt(_localctx, 4);
        setState(96);
        linenumber();
        setState(97);
        content();
        setState(98);
        match(DARICParser::NEWLINE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContentContext ------------------------------------------------------------------

DARICParser::ContentContext::ContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::ContentContext::COMMENT() {
  return getToken(DARICParser::COMMENT, 0);
}

tree::TerminalNode* DARICParser::ContentContext::REM() {
  return getToken(DARICParser::REM, 0);
}

std::vector<DARICParser::StmtContext *> DARICParser::ContentContext::stmt() {
  return getRuleContexts<DARICParser::StmtContext>();
}

DARICParser::StmtContext* DARICParser::ContentContext::stmt(size_t i) {
  return getRuleContext<DARICParser::StmtContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::ContentContext::COLON() {
  return getTokens(DARICParser::COLON);
}

tree::TerminalNode* DARICParser::ContentContext::COLON(size_t i) {
  return getToken(DARICParser::COLON, i);
}


size_t DARICParser::ContentContext::getRuleIndex() const {
  return DARICParser::RuleContent;
}


antlrcpp::Any DARICParser::ContentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitContent(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::ContentContext* DARICParser::content() {
  ContentContext *_localctx = _tracker.createInstance<ContentContext>(_ctx, getState());
  enterRule(_localctx, 4, DARICParser::RuleContent);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(113);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::BREAKPOINT:
      case DARICParser::CASE:
      case DARICParser::CHAIN:
      case DARICParser::DATA:
      case DARICParser::DEF:
      case DARICParser::DIM:
      case DARICParser::END:
      case DARICParser::FOR:
      case DARICParser::IF:
      case DARICParser::INPUT:
      case DARICParser::GLOBAL:
      case DARICParser::LOCAL:
      case DARICParser::LET:
      case DARICParser::PRINT:
      case DARICParser::READ:
      case DARICParser::REPEAT:
      case DARICParser::RESTORE:
      case DARICParser::RETURN:
      case DARICParser::TRACEON:
      case DARICParser::TRACEOFF:
      case DARICParser::TYPE:
      case DARICParser::WHILE:
      case DARICParser::EQ:
      case DARICParser::PROC_NAME:
      case DARICParser::FN_INTEGER:
      case DARICParser::FN_FLOAT:
      case DARICParser::FN_STRING:
      case DARICParser::VARIABLE_FLOAT:
      case DARICParser::VARIABLE_INTEGER:
      case DARICParser::VARIABLE_STRING:
      case DARICParser::VARIABLE_TYPE: {
        setState(102);
        stmt();
        setState(109);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(103);
            match(DARICParser::COLON);
            setState(105);
            _errHandler->sync(this);

            switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
            case 1: {
              setState(104);
              stmt();
              break;
            }

            default:
              break;
            } 
          }
          setState(111);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
        }
        break;
      }

      case DARICParser::REM:
      case DARICParser::COMMENT: {
        setState(112);
        _la = _input->LA(1);
        if (!(_la == DARICParser::REM || _la == DARICParser::COMMENT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BodyContext ------------------------------------------------------------------

DARICParser::BodyContext::BodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DARICParser::ContentContext* DARICParser::BodyContext::content() {
  return getRuleContext<DARICParser::ContentContext>(0);
}

DARICParser::LineContext* DARICParser::BodyContext::line() {
  return getRuleContext<DARICParser::LineContext>(0);
}


size_t DARICParser::BodyContext::getRuleIndex() const {
  return DARICParser::RuleBody;
}


antlrcpp::Any DARICParser::BodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitBody(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::BodyContext* DARICParser::body() {
  BodyContext *_localctx = _tracker.createInstance<BodyContext>(_ctx, getState());
  enterRule(_localctx, 6, DARICParser::RuleBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(117);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(115);
      content();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(116);
      line();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BodyStarContext ------------------------------------------------------------------

DARICParser::BodyStarContext::BodyStarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DARICParser::BodyContext *> DARICParser::BodyStarContext::body() {
  return getRuleContexts<DARICParser::BodyContext>();
}

DARICParser::BodyContext* DARICParser::BodyStarContext::body(size_t i) {
  return getRuleContext<DARICParser::BodyContext>(i);
}


size_t DARICParser::BodyStarContext::getRuleIndex() const {
  return DARICParser::RuleBodyStar;
}


antlrcpp::Any DARICParser::BodyStarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitBodyStar(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::BodyStarContext* DARICParser::bodyStar() {
  BodyStarContext *_localctx = _tracker.createInstance<BodyStarContext>(_ctx, getState());
  enterRule(_localctx, 8, DARICParser::RuleBodyStar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << DARICParser::BREAKPOINT)
      | (1ULL << DARICParser::CASE)
      | (1ULL << DARICParser::CHAIN)
      | (1ULL << DARICParser::DATA)
      | (1ULL << DARICParser::DEF)
      | (1ULL << DARICParser::DIM)
      | (1ULL << DARICParser::END)
      | (1ULL << DARICParser::FOR)
      | (1ULL << DARICParser::IF)
      | (1ULL << DARICParser::INPUT)
      | (1ULL << DARICParser::GLOBAL)
      | (1ULL << DARICParser::LOCAL)
      | (1ULL << DARICParser::LET)
      | (1ULL << DARICParser::PRINT)
      | (1ULL << DARICParser::READ)
      | (1ULL << DARICParser::REM)
      | (1ULL << DARICParser::REPEAT)
      | (1ULL << DARICParser::RESTORE)
      | (1ULL << DARICParser::RETURN)
      | (1ULL << DARICParser::TRACEON)
      | (1ULL << DARICParser::TRACEOFF)
      | (1ULL << DARICParser::TYPE)
      | (1ULL << DARICParser::WHILE))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (DARICParser::EQ - 72))
      | (1ULL << (DARICParser::NEWLINE - 72))
      | (1ULL << (DARICParser::COLON - 72))
      | (1ULL << (DARICParser::COMMENT - 72))
      | (1ULL << (DARICParser::PROC_NAME - 72))
      | (1ULL << (DARICParser::FN_INTEGER - 72))
      | (1ULL << (DARICParser::FN_FLOAT - 72))
      | (1ULL << (DARICParser::FN_STRING - 72))
      | (1ULL << (DARICParser::VARIABLE_FLOAT - 72))
      | (1ULL << (DARICParser::VARIABLE_INTEGER - 72))
      | (1ULL << (DARICParser::VARIABLE_STRING - 72))
      | (1ULL << (DARICParser::VARIABLE_TYPE - 72))
      | (1ULL << (DARICParser::NUMBER - 72)))) != 0)) {
      setState(119);
      body();
      setState(124);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LinenumberContext ------------------------------------------------------------------

DARICParser::LinenumberContext::LinenumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::LinenumberContext::NUMBER() {
  return getToken(DARICParser::NUMBER, 0);
}


size_t DARICParser::LinenumberContext::getRuleIndex() const {
  return DARICParser::RuleLinenumber;
}


antlrcpp::Any DARICParser::LinenumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitLinenumber(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::LinenumberContext* DARICParser::linenumber() {
  LinenumberContext *_localctx = _tracker.createInstance<LinenumberContext>(_ctx, getState());
  enterRule(_localctx, 10, DARICParser::RuleLinenumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(DARICParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

DARICParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DARICParser::StmtContext::getRuleIndex() const {
  return DARICParser::RuleStmt;
}

void DARICParser::StmtContext::copyFrom(StmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StmtTRACEOFFContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtTRACEOFFContext::TRACEOFF() {
  return getToken(DARICParser::TRACEOFF, 0);
}

DARICParser::StmtTRACEOFFContext::StmtTRACEOFFContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtTRACEOFFContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtTRACEOFF(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtRESTOREContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtRESTOREContext::RESTORE() {
  return getToken(DARICParser::RESTORE, 0);
}

DARICParser::StmtRESTOREContext::StmtRESTOREContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtRESTOREContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtRESTORE(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtCASEContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtCASEContext::CASE() {
  return getToken(DARICParser::CASE, 0);
}

DARICParser::ExprContext* DARICParser::StmtCASEContext::expr() {
  return getRuleContext<DARICParser::ExprContext>(0);
}

tree::TerminalNode* DARICParser::StmtCASEContext::OF() {
  return getToken(DARICParser::OF, 0);
}

tree::TerminalNode* DARICParser::StmtCASEContext::NEWLINE() {
  return getToken(DARICParser::NEWLINE, 0);
}

tree::TerminalNode* DARICParser::StmtCASEContext::ENDCASE() {
  return getToken(DARICParser::ENDCASE, 0);
}

std::vector<DARICParser::WhenContext *> DARICParser::StmtCASEContext::when() {
  return getRuleContexts<DARICParser::WhenContext>();
}

DARICParser::WhenContext* DARICParser::StmtCASEContext::when(size_t i) {
  return getRuleContext<DARICParser::WhenContext>(i);
}

tree::TerminalNode* DARICParser::StmtCASEContext::OTHERWISE() {
  return getToken(DARICParser::OTHERWISE, 0);
}

DARICParser::BodyStarContext* DARICParser::StmtCASEContext::bodyStar() {
  return getRuleContext<DARICParser::BodyStarContext>(0);
}

DARICParser::StmtCASEContext::StmtCASEContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtCASEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCASE(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtTYPEContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtTYPEContext::TYPE() {
  return getToken(DARICParser::TYPE, 0);
}

DARICParser::VarNameContext* DARICParser::StmtTYPEContext::varName() {
  return getRuleContext<DARICParser::VarNameContext>(0);
}

tree::TerminalNode* DARICParser::StmtTYPEContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

std::vector<DARICParser::JustVarContext *> DARICParser::StmtTYPEContext::justVar() {
  return getRuleContexts<DARICParser::JustVarContext>();
}

DARICParser::JustVarContext* DARICParser::StmtTYPEContext::justVar(size_t i) {
  return getRuleContext<DARICParser::JustVarContext>(i);
}

tree::TerminalNode* DARICParser::StmtTYPEContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> DARICParser::StmtTYPEContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtTYPEContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

DARICParser::StmtTYPEContext::StmtTYPEContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtTYPEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtTYPE(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtCHAINContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtCHAINContext::CHAIN() {
  return getToken(DARICParser::CHAIN, 0);
}

DARICParser::StrExprContext* DARICParser::StmtCHAINContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}

DARICParser::StmtCHAINContext::StmtCHAINContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtCHAINContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCHAIN(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtPRINTContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtPRINTContext::PRINT() {
  return getToken(DARICParser::PRINT, 0);
}

DARICParser::PrintListContext* DARICParser::StmtPRINTContext::printList() {
  return getRuleContext<DARICParser::PrintListContext>(0);
}

DARICParser::StmtPRINTContext::StmtPRINTContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtPRINTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtPRINT(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtINPUTContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtINPUTContext::INPUT() {
  return getToken(DARICParser::INPUT, 0);
}

DARICParser::VarListContext* DARICParser::StmtINPUTContext::varList() {
  return getRuleContext<DARICParser::VarListContext>(0);
}

DARICParser::StrExprContext* DARICParser::StmtINPUTContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}

tree::TerminalNode* DARICParser::StmtINPUTContext::COMMA() {
  return getToken(DARICParser::COMMA, 0);
}

DARICParser::StmtINPUTContext::StmtINPUTContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtINPUTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtINPUT(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtDATAContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtDATAContext::DATA() {
  return getToken(DARICParser::DATA, 0);
}

std::vector<DARICParser::LiteralContext *> DARICParser::StmtDATAContext::literal() {
  return getRuleContexts<DARICParser::LiteralContext>();
}

DARICParser::LiteralContext* DARICParser::StmtDATAContext::literal(size_t i) {
  return getRuleContext<DARICParser::LiteralContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtDATAContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtDATAContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

DARICParser::StmtDATAContext::StmtDATAContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtDATAContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtDATA(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtLOCALContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtLOCALContext::LOCAL() {
  return getToken(DARICParser::LOCAL, 0);
}

std::vector<DARICParser::VarDeclContext *> DARICParser::StmtLOCALContext::varDecl() {
  return getRuleContexts<DARICParser::VarDeclContext>();
}

DARICParser::VarDeclContext* DARICParser::StmtLOCALContext::varDecl(size_t i) {
  return getRuleContext<DARICParser::VarDeclContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtLOCALContext::EQ() {
  return getTokens(DARICParser::EQ);
}

tree::TerminalNode* DARICParser::StmtLOCALContext::EQ(size_t i) {
  return getToken(DARICParser::EQ, i);
}

std::vector<DARICParser::ExprContext *> DARICParser::StmtLOCALContext::expr() {
  return getRuleContexts<DARICParser::ExprContext>();
}

DARICParser::ExprContext* DARICParser::StmtLOCALContext::expr(size_t i) {
  return getRuleContext<DARICParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtLOCALContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtLOCALContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

DARICParser::StmtLOCALContext::StmtLOCALContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtLOCALContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtLOCAL(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtREADContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtREADContext::READ() {
  return getToken(DARICParser::READ, 0);
}

std::vector<DARICParser::VarDeclContext *> DARICParser::StmtREADContext::varDecl() {
  return getRuleContexts<DARICParser::VarDeclContext>();
}

DARICParser::VarDeclContext* DARICParser::StmtREADContext::varDecl(size_t i) {
  return getRuleContext<DARICParser::VarDeclContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtREADContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtREADContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

DARICParser::StmtREADContext::StmtREADContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtREADContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtREAD(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtCallFNContext ------------------------------------------------------------------

DARICParser::FnNameContext* DARICParser::StmtCallFNContext::fnName() {
  return getRuleContext<DARICParser::FnNameContext>(0);
}

tree::TerminalNode* DARICParser::StmtCallFNContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

tree::TerminalNode* DARICParser::StmtCallFNContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::FunctionParListContext* DARICParser::StmtCallFNContext::functionParList() {
  return getRuleContext<DARICParser::FunctionParListContext>(0);
}

DARICParser::StmtCallFNContext::StmtCallFNContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtCallFNContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCallFN(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtCallPROCContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtCallPROCContext::PROC_NAME() {
  return getToken(DARICParser::PROC_NAME, 0);
}

tree::TerminalNode* DARICParser::StmtCallPROCContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

tree::TerminalNode* DARICParser::StmtCallPROCContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::FunctionParListContext* DARICParser::StmtCallPROCContext::functionParList() {
  return getRuleContext<DARICParser::FunctionParListContext>(0);
}

DARICParser::StmtCallPROCContext::StmtCallPROCContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtCallPROCContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCallPROC(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtLOCALDIMContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtLOCALDIMContext::LOCAL() {
  return getToken(DARICParser::LOCAL, 0);
}

tree::TerminalNode* DARICParser::StmtLOCALDIMContext::DIM() {
  return getToken(DARICParser::DIM, 0);
}

std::vector<DARICParser::VarDeclWithDimensionContext *> DARICParser::StmtLOCALDIMContext::varDeclWithDimension() {
  return getRuleContexts<DARICParser::VarDeclWithDimensionContext>();
}

DARICParser::VarDeclWithDimensionContext* DARICParser::StmtLOCALDIMContext::varDeclWithDimension(size_t i) {
  return getRuleContext<DARICParser::VarDeclWithDimensionContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtLOCALDIMContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtLOCALDIMContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

DARICParser::StmtLOCALDIMContext::StmtLOCALDIMContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtLOCALDIMContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtLOCALDIM(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtWHILEContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtWHILEContext::WHILE() {
  return getToken(DARICParser::WHILE, 0);
}

DARICParser::ExprContext* DARICParser::StmtWHILEContext::expr() {
  return getRuleContext<DARICParser::ExprContext>(0);
}

tree::TerminalNode* DARICParser::StmtWHILEContext::ENDWHILE() {
  return getToken(DARICParser::ENDWHILE, 0);
}

std::vector<DARICParser::BodyContext *> DARICParser::StmtWHILEContext::body() {
  return getRuleContexts<DARICParser::BodyContext>();
}

DARICParser::BodyContext* DARICParser::StmtWHILEContext::body(size_t i) {
  return getRuleContext<DARICParser::BodyContext>(i);
}

DARICParser::StmtWHILEContext::StmtWHILEContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtWHILEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtWHILE(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtDEFPROCContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtDEFPROCContext::DEF() {
  return getToken(DARICParser::DEF, 0);
}

tree::TerminalNode* DARICParser::StmtDEFPROCContext::PROC_NAME() {
  return getToken(DARICParser::PROC_NAME, 0);
}

tree::TerminalNode* DARICParser::StmtDEFPROCContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

tree::TerminalNode* DARICParser::StmtDEFPROCContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::BodyStarContext* DARICParser::StmtDEFPROCContext::bodyStar() {
  return getRuleContext<DARICParser::BodyStarContext>(0);
}

tree::TerminalNode* DARICParser::StmtDEFPROCContext::ENDPROC() {
  return getToken(DARICParser::ENDPROC, 0);
}

DARICParser::FunctionVarListContext* DARICParser::StmtDEFPROCContext::functionVarList() {
  return getRuleContext<DARICParser::FunctionVarListContext>(0);
}

tree::TerminalNode* DARICParser::StmtDEFPROCContext::COLON() {
  return getToken(DARICParser::COLON, 0);
}

DARICParser::StmtDEFPROCContext::StmtDEFPROCContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtDEFPROCContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtDEFPROC(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtENDContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtENDContext::END() {
  return getToken(DARICParser::END, 0);
}

DARICParser::StmtENDContext::StmtENDContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtENDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtEND(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtLETContext ------------------------------------------------------------------

std::vector<DARICParser::VarDeclContext *> DARICParser::StmtLETContext::varDecl() {
  return getRuleContexts<DARICParser::VarDeclContext>();
}

DARICParser::VarDeclContext* DARICParser::StmtLETContext::varDecl(size_t i) {
  return getRuleContext<DARICParser::VarDeclContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtLETContext::EQ() {
  return getTokens(DARICParser::EQ);
}

tree::TerminalNode* DARICParser::StmtLETContext::EQ(size_t i) {
  return getToken(DARICParser::EQ, i);
}

std::vector<DARICParser::ExprContext *> DARICParser::StmtLETContext::expr() {
  return getRuleContexts<DARICParser::ExprContext>();
}

DARICParser::ExprContext* DARICParser::StmtLETContext::expr(size_t i) {
  return getRuleContext<DARICParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtLETContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtLETContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

tree::TerminalNode* DARICParser::StmtLETContext::LET() {
  return getToken(DARICParser::LET, 0);
}

tree::TerminalNode* DARICParser::StmtLETContext::GLOBAL() {
  return getToken(DARICParser::GLOBAL, 0);
}

DARICParser::StmtLETContext::StmtLETContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtLETContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtLET(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtTRACEONContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtTRACEONContext::TRACEON() {
  return getToken(DARICParser::TRACEON, 0);
}

DARICParser::StmtTRACEONContext::StmtTRACEONContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtTRACEONContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtTRACEON(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtRETURNContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtRETURNContext::EQ() {
  return getToken(DARICParser::EQ, 0);
}

DARICParser::ExprContext* DARICParser::StmtRETURNContext::expr() {
  return getRuleContext<DARICParser::ExprContext>(0);
}

tree::TerminalNode* DARICParser::StmtRETURNContext::RETURN() {
  return getToken(DARICParser::RETURN, 0);
}

DARICParser::StmtRETURNContext::StmtRETURNContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtRETURNContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtRETURN(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtREPEATContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtREPEATContext::REPEAT() {
  return getToken(DARICParser::REPEAT, 0);
}

tree::TerminalNode* DARICParser::StmtREPEATContext::UNTIL() {
  return getToken(DARICParser::UNTIL, 0);
}

DARICParser::ExprContext* DARICParser::StmtREPEATContext::expr() {
  return getRuleContext<DARICParser::ExprContext>(0);
}

std::vector<DARICParser::BodyContext *> DARICParser::StmtREPEATContext::body() {
  return getRuleContexts<DARICParser::BodyContext>();
}

DARICParser::BodyContext* DARICParser::StmtREPEATContext::body(size_t i) {
  return getRuleContext<DARICParser::BodyContext>(i);
}

DARICParser::StmtREPEATContext::StmtREPEATContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtREPEATContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtREPEAT(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtBREAKPOINTContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtBREAKPOINTContext::BREAKPOINT() {
  return getToken(DARICParser::BREAKPOINT, 0);
}

DARICParser::StmtBREAKPOINTContext::StmtBREAKPOINTContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtBREAKPOINTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtBREAKPOINT(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtDIMContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtDIMContext::DIM() {
  return getToken(DARICParser::DIM, 0);
}

std::vector<DARICParser::VarDeclWithDimensionContext *> DARICParser::StmtDIMContext::varDeclWithDimension() {
  return getRuleContexts<DARICParser::VarDeclWithDimensionContext>();
}

DARICParser::VarDeclWithDimensionContext* DARICParser::StmtDIMContext::varDeclWithDimension(size_t i) {
  return getRuleContext<DARICParser::VarDeclWithDimensionContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtDIMContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtDIMContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

DARICParser::StmtDIMContext::StmtDIMContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtDIMContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtDIM(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtFORContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtFORContext::FOR() {
  return getToken(DARICParser::FOR, 0);
}

DARICParser::JustNumberVarContext* DARICParser::StmtFORContext::justNumberVar() {
  return getRuleContext<DARICParser::JustNumberVarContext>(0);
}

tree::TerminalNode* DARICParser::StmtFORContext::EQ() {
  return getToken(DARICParser::EQ, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StmtFORContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StmtFORContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::StmtFORContext::TO() {
  return getToken(DARICParser::TO, 0);
}

DARICParser::BodyStarContext* DARICParser::StmtFORContext::bodyStar() {
  return getRuleContext<DARICParser::BodyStarContext>(0);
}

tree::TerminalNode* DARICParser::StmtFORContext::NEXT() {
  return getToken(DARICParser::NEXT, 0);
}

tree::TerminalNode* DARICParser::StmtFORContext::LOCAL() {
  return getToken(DARICParser::LOCAL, 0);
}

tree::TerminalNode* DARICParser::StmtFORContext::STEP() {
  return getToken(DARICParser::STEP, 0);
}

DARICParser::StmtFORContext::StmtFORContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtFORContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtFOR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtIFContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtIFContext::IF() {
  return getToken(DARICParser::IF, 0);
}

DARICParser::ExprContext* DARICParser::StmtIFContext::expr() {
  return getRuleContext<DARICParser::ExprContext>(0);
}

std::vector<DARICParser::ContentContext *> DARICParser::StmtIFContext::content() {
  return getRuleContexts<DARICParser::ContentContext>();
}

DARICParser::ContentContext* DARICParser::StmtIFContext::content(size_t i) {
  return getRuleContext<DARICParser::ContentContext>(i);
}

tree::TerminalNode* DARICParser::StmtIFContext::THEN() {
  return getToken(DARICParser::THEN, 0);
}

tree::TerminalNode* DARICParser::StmtIFContext::ELSE() {
  return getToken(DARICParser::ELSE, 0);
}

DARICParser::StmtIFContext::StmtIFContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtIFContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtIF(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtFORINContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtFORINContext::FOR() {
  return getToken(DARICParser::FOR, 0);
}

std::vector<DARICParser::JustVarContext *> DARICParser::StmtFORINContext::justVar() {
  return getRuleContexts<DARICParser::JustVarContext>();
}

DARICParser::JustVarContext* DARICParser::StmtFORINContext::justVar(size_t i) {
  return getRuleContext<DARICParser::JustVarContext>(i);
}

tree::TerminalNode* DARICParser::StmtFORINContext::IN() {
  return getToken(DARICParser::IN, 0);
}

tree::TerminalNode* DARICParser::StmtFORINContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

tree::TerminalNode* DARICParser::StmtFORINContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::BodyStarContext* DARICParser::StmtFORINContext::bodyStar() {
  return getRuleContext<DARICParser::BodyStarContext>(0);
}

tree::TerminalNode* DARICParser::StmtFORINContext::NEXT() {
  return getToken(DARICParser::NEXT, 0);
}

tree::TerminalNode* DARICParser::StmtFORINContext::LOCAL() {
  return getToken(DARICParser::LOCAL, 0);
}

DARICParser::StmtFORINContext::StmtFORINContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtFORINContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtFORIN(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtIFMultilineContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtIFMultilineContext::IF() {
  return getToken(DARICParser::IF, 0);
}

DARICParser::ExprContext* DARICParser::StmtIFMultilineContext::expr() {
  return getRuleContext<DARICParser::ExprContext>(0);
}

tree::TerminalNode* DARICParser::StmtIFMultilineContext::ENDIF() {
  return getToken(DARICParser::ENDIF, 0);
}

std::vector<DARICParser::BodyStarContext *> DARICParser::StmtIFMultilineContext::bodyStar() {
  return getRuleContexts<DARICParser::BodyStarContext>();
}

DARICParser::BodyStarContext* DARICParser::StmtIFMultilineContext::bodyStar(size_t i) {
  return getRuleContext<DARICParser::BodyStarContext>(i);
}

tree::TerminalNode* DARICParser::StmtIFMultilineContext::THEN() {
  return getToken(DARICParser::THEN, 0);
}

tree::TerminalNode* DARICParser::StmtIFMultilineContext::ELSE() {
  return getToken(DARICParser::ELSE, 0);
}

DARICParser::StmtIFMultilineContext::StmtIFMultilineContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtIFMultilineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtIFMultiline(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtDEFFNContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtDEFFNContext::DEF() {
  return getToken(DARICParser::DEF, 0);
}

DARICParser::FnNameContext* DARICParser::StmtDEFFNContext::fnName() {
  return getRuleContext<DARICParser::FnNameContext>(0);
}

tree::TerminalNode* DARICParser::StmtDEFFNContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

tree::TerminalNode* DARICParser::StmtDEFFNContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::BodyStarContext* DARICParser::StmtDEFFNContext::bodyStar() {
  return getRuleContext<DARICParser::BodyStarContext>(0);
}

tree::TerminalNode* DARICParser::StmtDEFFNContext::ENDFN() {
  return getToken(DARICParser::ENDFN, 0);
}

DARICParser::FunctionVarListContext* DARICParser::StmtDEFFNContext::functionVarList() {
  return getRuleContext<DARICParser::FunctionVarListContext>(0);
}

tree::TerminalNode* DARICParser::StmtDEFFNContext::COLON() {
  return getToken(DARICParser::COLON, 0);
}

DARICParser::StmtDEFFNContext::StmtDEFFNContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtDEFFNContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtDEFFN(this);
  else
    return visitor->visitChildren(this);
}
DARICParser::StmtContext* DARICParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 12, DARICParser::RuleStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(361);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtBREAKPOINTContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(127);
      match(DARICParser::BREAKPOINT);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCASEContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(128);
      match(DARICParser::CASE);
      setState(129);
      expr();
      setState(130);
      match(DARICParser::OF);
      setState(131);
      match(DARICParser::NEWLINE);
      setState(133); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(132);
        when();
        setState(135); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == DARICParser::WHEN);
      setState(139);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::OTHERWISE) {
        setState(137);
        match(DARICParser::OTHERWISE);
        setState(138);
        bodyStar();
      }
      setState(141);
      match(DARICParser::ENDCASE);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCHAINContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(143);
      match(DARICParser::CHAIN);
      setState(144);
      strExpr(0);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtDATAContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(145);
      match(DARICParser::DATA);
      setState(146);
      literal();
      setState(151);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::COMMA) {
        setState(147);
        match(DARICParser::COMMA);
        setState(148);
        literal();
        setState(153);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtDIMContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(154);
      match(DARICParser::DIM);
      setState(155);
      varDeclWithDimension();
      setState(160);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::COMMA) {
        setState(156);
        match(DARICParser::COMMA);
        setState(157);
        varDeclWithDimension();
        setState(162);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtENDContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(163);
      match(DARICParser::END);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtRETURNContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(164);
      match(DARICParser::EQ);
      setState(166);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
      case 1: {
        setState(165);
        expr();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtRETURNContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(168);
      match(DARICParser::RETURN);
      setState(170);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
      case 1: {
        setState(169);
        expr();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 9: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtDEFFNContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(172);
      match(DARICParser::DEF);
      setState(173);
      fnName();
      setState(174);
      match(DARICParser::LPAREN);
      setState(176);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::RETURN || ((((_la - 114) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 114)) & ((1ULL << (DARICParser::VARIABLE_FLOAT - 114))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 114))
        | (1ULL << (DARICParser::VARIABLE_STRING - 114)))) != 0)) {
        setState(175);
        functionVarList();
      }
      setState(178);
      match(DARICParser::RPAREN);
      setState(180);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
      case 1: {
        setState(179);
        match(DARICParser::COLON);
        break;
      }

      default:
        break;
      }
      setState(182);
      bodyStar();
      setState(183);
      match(DARICParser::ENDFN);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtDEFPROCContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(185);
      match(DARICParser::DEF);
      setState(186);
      match(DARICParser::PROC_NAME);
      setState(187);
      match(DARICParser::LPAREN);
      setState(189);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::RETURN || ((((_la - 114) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 114)) & ((1ULL << (DARICParser::VARIABLE_FLOAT - 114))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 114))
        | (1ULL << (DARICParser::VARIABLE_STRING - 114)))) != 0)) {
        setState(188);
        functionVarList();
      }
      setState(191);
      match(DARICParser::RPAREN);
      setState(193);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
      case 1: {
        setState(192);
        match(DARICParser::COLON);
        break;
      }

      default:
        break;
      }
      setState(195);
      bodyStar();
      setState(196);
      match(DARICParser::ENDPROC);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtFORContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(198);
      match(DARICParser::FOR);
      setState(200);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::LOCAL) {
        setState(199);
        match(DARICParser::LOCAL);
      }
      setState(202);
      justNumberVar();
      setState(203);
      match(DARICParser::EQ);
      setState(204);
      numExpr(0);
      setState(205);
      match(DARICParser::TO);
      setState(206);
      numExpr(0);
      setState(209);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::STEP) {
        setState(207);
        match(DARICParser::STEP);
        setState(208);
        numExpr(0);
      }
      setState(211);
      bodyStar();
      setState(212);
      match(DARICParser::NEXT);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtFORINContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(214);
      match(DARICParser::FOR);
      setState(216);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::LOCAL) {
        setState(215);
        match(DARICParser::LOCAL);
      }
      setState(218);
      justVar();
      setState(219);
      match(DARICParser::IN);
      setState(220);
      justVar();
      setState(221);
      match(DARICParser::LPAREN);
      setState(222);
      match(DARICParser::RPAREN);
      setState(223);
      bodyStar();
      setState(224);
      match(DARICParser::NEXT);
      break;
    }

    case 13: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCallFNContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(226);
      fnName();
      setState(227);
      match(DARICParser::LPAREN);
      setState(229);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << DARICParser::TIME)
        | (1ULL << DARICParser::PI)
        | (1ULL << DARICParser::SQR)
        | (1ULL << DARICParser::LN)
        | (1ULL << DARICParser::LOG)
        | (1ULL << DARICParser::EXP)
        | (1ULL << DARICParser::ATN)
        | (1ULL << DARICParser::TAN)
        | (1ULL << DARICParser::COS)
        | (1ULL << DARICParser::SIN)
        | (1ULL << DARICParser::ABS)
        | (1ULL << DARICParser::ACS)
        | (1ULL << DARICParser::ASN)
        | (1ULL << DARICParser::DEG)
        | (1ULL << DARICParser::RAD)
        | (1ULL << DARICParser::SGN)
        | (1ULL << DARICParser::ASC)
        | (1ULL << DARICParser::LEN)
        | (1ULL << DARICParser::INSTR)
        | (1ULL << DARICParser::VAL)
        | (1ULL << DARICParser::TIMES)
        | (1ULL << DARICParser::STRS))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::STRINGS - 64))
        | (1ULL << (DARICParser::CHRS - 64))
        | (1ULL << (DARICParser::LEFTS - 64))
        | (1ULL << (DARICParser::MIDS - 64))
        | (1ULL << (DARICParser::RIGHTS - 64))
        | (1ULL << (DARICParser::RND - 64))
        | (1ULL << (DARICParser::RND0 - 64))
        | (1ULL << (DARICParser::RND1 - 64))
        | (1ULL << (DARICParser::NOT - 64))
        | (1ULL << (DARICParser::PLUS - 64))
        | (1ULL << (DARICParser::MINUS - 64))
        | (1ULL << (DARICParser::LPAREN - 64))
        | (1ULL << (DARICParser::STRINGLITERAL - 64))
        | (1ULL << (DARICParser::FN_INTEGER - 64))
        | (1ULL << (DARICParser::FN_FLOAT - 64))
        | (1ULL << (DARICParser::FN_STRING - 64))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 64))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 64))
        | (1ULL << (DARICParser::VARIABLE_STRING - 64))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 64))
        | (1ULL << (DARICParser::HEXNUMBER - 64))
        | (1ULL << (DARICParser::BINARYNUMBER - 64))
        | (1ULL << (DARICParser::NUMBER - 64))
        | (1ULL << (DARICParser::FLOAT - 64)))) != 0)) {
        setState(228);
        functionParList();
      }
      setState(231);
      match(DARICParser::RPAREN);
      break;
    }

    case 14: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtIFContext>(_localctx));
      enterOuterAlt(_localctx, 14);
      setState(233);
      match(DARICParser::IF);
      setState(234);
      expr();
      setState(236);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::THEN) {
        setState(235);
        match(DARICParser::THEN);
      }
      setState(238);
      dynamic_cast<StmtIFContext *>(_localctx)->t = content();
      setState(241);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
      case 1: {
        setState(239);
        match(DARICParser::ELSE);
        setState(240);
        dynamic_cast<StmtIFContext *>(_localctx)->f = content();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 15: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtIFMultilineContext>(_localctx));
      enterOuterAlt(_localctx, 15);
      setState(243);
      match(DARICParser::IF);
      setState(244);
      expr();
      setState(246);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::THEN) {
        setState(245);
        match(DARICParser::THEN);
      }
      setState(248);
      dynamic_cast<StmtIFMultilineContext *>(_localctx)->t = bodyStar();
      setState(251);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::ELSE) {
        setState(249);
        match(DARICParser::ELSE);
        setState(250);
        dynamic_cast<StmtIFMultilineContext *>(_localctx)->f = bodyStar();
      }
      setState(253);
      match(DARICParser::ENDIF);
      break;
    }

    case 16: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtINPUTContext>(_localctx));
      enterOuterAlt(_localctx, 16);
      setState(255);
      match(DARICParser::INPUT);
      setState(259);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
      case 1: {
        setState(256);
        strExpr(0);
        setState(257);
        match(DARICParser::COMMA);
        break;
      }

      default:
        break;
      }
      setState(261);
      varList();
      break;
    }

    case 17: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtLETContext>(_localctx));
      enterOuterAlt(_localctx, 17);
      setState(268);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
      case 1: {
        setState(263);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DARICParser::LET) {
          setState(262);
          match(DARICParser::LET);
        }
        break;
      }

      case 2: {
        setState(266);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DARICParser::GLOBAL) {
          setState(265);
          match(DARICParser::GLOBAL);
        }
        break;
      }

      default:
        break;
      }
      setState(270);
      varDecl();
      setState(271);
      match(DARICParser::EQ);
      setState(272);
      expr();
      setState(280);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::COMMA) {
        setState(273);
        match(DARICParser::COMMA);
        setState(274);
        varDecl();
        setState(275);
        match(DARICParser::EQ);
        setState(276);
        expr();
        setState(282);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 18: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtLOCALContext>(_localctx));
      enterOuterAlt(_localctx, 18);
      setState(283);
      match(DARICParser::LOCAL);
      setState(284);
      varDecl();
      setState(285);
      match(DARICParser::EQ);
      setState(286);
      expr();
      setState(294);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::COMMA) {
        setState(287);
        match(DARICParser::COMMA);
        setState(288);
        varDecl();
        setState(289);
        match(DARICParser::EQ);
        setState(290);
        expr();
        setState(296);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 19: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtLOCALDIMContext>(_localctx));
      enterOuterAlt(_localctx, 19);
      setState(297);
      match(DARICParser::LOCAL);
      setState(298);
      match(DARICParser::DIM);
      setState(299);
      varDeclWithDimension();
      setState(304);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::COMMA) {
        setState(300);
        match(DARICParser::COMMA);
        setState(301);
        varDeclWithDimension();
        setState(306);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 20: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtPRINTContext>(_localctx));
      enterOuterAlt(_localctx, 20);
      setState(307);
      match(DARICParser::PRINT);
      setState(309);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
      case 1: {
        setState(308);
        printList();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 21: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCallPROCContext>(_localctx));
      enterOuterAlt(_localctx, 21);
      setState(311);
      match(DARICParser::PROC_NAME);
      setState(312);
      match(DARICParser::LPAREN);
      setState(314);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << DARICParser::TIME)
        | (1ULL << DARICParser::PI)
        | (1ULL << DARICParser::SQR)
        | (1ULL << DARICParser::LN)
        | (1ULL << DARICParser::LOG)
        | (1ULL << DARICParser::EXP)
        | (1ULL << DARICParser::ATN)
        | (1ULL << DARICParser::TAN)
        | (1ULL << DARICParser::COS)
        | (1ULL << DARICParser::SIN)
        | (1ULL << DARICParser::ABS)
        | (1ULL << DARICParser::ACS)
        | (1ULL << DARICParser::ASN)
        | (1ULL << DARICParser::DEG)
        | (1ULL << DARICParser::RAD)
        | (1ULL << DARICParser::SGN)
        | (1ULL << DARICParser::ASC)
        | (1ULL << DARICParser::LEN)
        | (1ULL << DARICParser::INSTR)
        | (1ULL << DARICParser::VAL)
        | (1ULL << DARICParser::TIMES)
        | (1ULL << DARICParser::STRS))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::STRINGS - 64))
        | (1ULL << (DARICParser::CHRS - 64))
        | (1ULL << (DARICParser::LEFTS - 64))
        | (1ULL << (DARICParser::MIDS - 64))
        | (1ULL << (DARICParser::RIGHTS - 64))
        | (1ULL << (DARICParser::RND - 64))
        | (1ULL << (DARICParser::RND0 - 64))
        | (1ULL << (DARICParser::RND1 - 64))
        | (1ULL << (DARICParser::NOT - 64))
        | (1ULL << (DARICParser::PLUS - 64))
        | (1ULL << (DARICParser::MINUS - 64))
        | (1ULL << (DARICParser::LPAREN - 64))
        | (1ULL << (DARICParser::STRINGLITERAL - 64))
        | (1ULL << (DARICParser::FN_INTEGER - 64))
        | (1ULL << (DARICParser::FN_FLOAT - 64))
        | (1ULL << (DARICParser::FN_STRING - 64))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 64))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 64))
        | (1ULL << (DARICParser::VARIABLE_STRING - 64))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 64))
        | (1ULL << (DARICParser::HEXNUMBER - 64))
        | (1ULL << (DARICParser::BINARYNUMBER - 64))
        | (1ULL << (DARICParser::NUMBER - 64))
        | (1ULL << (DARICParser::FLOAT - 64)))) != 0)) {
        setState(313);
        functionParList();
      }
      setState(316);
      match(DARICParser::RPAREN);
      break;
    }

    case 22: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtREADContext>(_localctx));
      enterOuterAlt(_localctx, 22);
      setState(317);
      match(DARICParser::READ);
      setState(318);
      varDecl();
      setState(323);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::COMMA) {
        setState(319);
        match(DARICParser::COMMA);
        setState(320);
        varDecl();
        setState(325);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 23: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtRESTOREContext>(_localctx));
      enterOuterAlt(_localctx, 23);
      setState(326);
      match(DARICParser::RESTORE);
      break;
    }

    case 24: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtTRACEONContext>(_localctx));
      enterOuterAlt(_localctx, 24);
      setState(327);
      match(DARICParser::TRACEON);
      break;
    }

    case 25: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtTRACEOFFContext>(_localctx));
      enterOuterAlt(_localctx, 25);
      setState(328);
      match(DARICParser::TRACEOFF);
      break;
    }

    case 26: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtTYPEContext>(_localctx));
      enterOuterAlt(_localctx, 26);
      setState(329);
      match(DARICParser::TYPE);
      setState(330);
      varName();
      setState(331);
      match(DARICParser::LPAREN);
      setState(332);
      justVar();
      setState(337);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::COMMA) {
        setState(333);
        match(DARICParser::COMMA);
        setState(334);
        justVar();
        setState(339);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(340);
      match(DARICParser::RPAREN);
      break;
    }

    case 27: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtREPEATContext>(_localctx));
      enterOuterAlt(_localctx, 27);
      setState(342);
      match(DARICParser::REPEAT);
      setState(346);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << DARICParser::BREAKPOINT)
        | (1ULL << DARICParser::CASE)
        | (1ULL << DARICParser::CHAIN)
        | (1ULL << DARICParser::DATA)
        | (1ULL << DARICParser::DEF)
        | (1ULL << DARICParser::DIM)
        | (1ULL << DARICParser::END)
        | (1ULL << DARICParser::FOR)
        | (1ULL << DARICParser::IF)
        | (1ULL << DARICParser::INPUT)
        | (1ULL << DARICParser::GLOBAL)
        | (1ULL << DARICParser::LOCAL)
        | (1ULL << DARICParser::LET)
        | (1ULL << DARICParser::PRINT)
        | (1ULL << DARICParser::READ)
        | (1ULL << DARICParser::REM)
        | (1ULL << DARICParser::REPEAT)
        | (1ULL << DARICParser::RESTORE)
        | (1ULL << DARICParser::RETURN)
        | (1ULL << DARICParser::TRACEON)
        | (1ULL << DARICParser::TRACEOFF)
        | (1ULL << DARICParser::TYPE)
        | (1ULL << DARICParser::WHILE))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 72)) & ((1ULL << (DARICParser::EQ - 72))
        | (1ULL << (DARICParser::NEWLINE - 72))
        | (1ULL << (DARICParser::COLON - 72))
        | (1ULL << (DARICParser::COMMENT - 72))
        | (1ULL << (DARICParser::PROC_NAME - 72))
        | (1ULL << (DARICParser::FN_INTEGER - 72))
        | (1ULL << (DARICParser::FN_FLOAT - 72))
        | (1ULL << (DARICParser::FN_STRING - 72))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 72))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 72))
        | (1ULL << (DARICParser::VARIABLE_STRING - 72))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 72))
        | (1ULL << (DARICParser::NUMBER - 72)))) != 0)) {
        setState(343);
        body();
        setState(348);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(349);
      match(DARICParser::UNTIL);
      setState(350);
      expr();
      break;
    }

    case 28: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtWHILEContext>(_localctx));
      enterOuterAlt(_localctx, 28);
      setState(351);
      match(DARICParser::WHILE);
      setState(352);
      expr();
      setState(356);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << DARICParser::BREAKPOINT)
        | (1ULL << DARICParser::CASE)
        | (1ULL << DARICParser::CHAIN)
        | (1ULL << DARICParser::DATA)
        | (1ULL << DARICParser::DEF)
        | (1ULL << DARICParser::DIM)
        | (1ULL << DARICParser::END)
        | (1ULL << DARICParser::FOR)
        | (1ULL << DARICParser::IF)
        | (1ULL << DARICParser::INPUT)
        | (1ULL << DARICParser::GLOBAL)
        | (1ULL << DARICParser::LOCAL)
        | (1ULL << DARICParser::LET)
        | (1ULL << DARICParser::PRINT)
        | (1ULL << DARICParser::READ)
        | (1ULL << DARICParser::REM)
        | (1ULL << DARICParser::REPEAT)
        | (1ULL << DARICParser::RESTORE)
        | (1ULL << DARICParser::RETURN)
        | (1ULL << DARICParser::TRACEON)
        | (1ULL << DARICParser::TRACEOFF)
        | (1ULL << DARICParser::TYPE)
        | (1ULL << DARICParser::WHILE))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 72)) & ((1ULL << (DARICParser::EQ - 72))
        | (1ULL << (DARICParser::NEWLINE - 72))
        | (1ULL << (DARICParser::COLON - 72))
        | (1ULL << (DARICParser::COMMENT - 72))
        | (1ULL << (DARICParser::PROC_NAME - 72))
        | (1ULL << (DARICParser::FN_INTEGER - 72))
        | (1ULL << (DARICParser::FN_FLOAT - 72))
        | (1ULL << (DARICParser::FN_STRING - 72))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 72))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 72))
        | (1ULL << (DARICParser::VARIABLE_STRING - 72))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 72))
        | (1ULL << (DARICParser::NUMBER - 72)))) != 0)) {
        setState(353);
        body();
        setState(358);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(359);
      match(DARICParser::ENDWHILE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhenContext ------------------------------------------------------------------

DARICParser::WhenContext::WhenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::WhenContext::WHEN() {
  return getToken(DARICParser::WHEN, 0);
}

std::vector<DARICParser::ExprContext *> DARICParser::WhenContext::expr() {
  return getRuleContexts<DARICParser::ExprContext>();
}

DARICParser::ExprContext* DARICParser::WhenContext::expr(size_t i) {
  return getRuleContext<DARICParser::ExprContext>(i);
}

tree::TerminalNode* DARICParser::WhenContext::COLON() {
  return getToken(DARICParser::COLON, 0);
}

DARICParser::BodyStarContext* DARICParser::WhenContext::bodyStar() {
  return getRuleContext<DARICParser::BodyStarContext>(0);
}

std::vector<tree::TerminalNode *> DARICParser::WhenContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::WhenContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}


size_t DARICParser::WhenContext::getRuleIndex() const {
  return DARICParser::RuleWhen;
}


antlrcpp::Any DARICParser::WhenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitWhen(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::WhenContext* DARICParser::when() {
  WhenContext *_localctx = _tracker.createInstance<WhenContext>(_ctx, getState());
  enterRule(_localctx, 14, DARICParser::RuleWhen);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(363);
    match(DARICParser::WHEN);
    setState(364);
    expr();
    setState(369);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(365);
      match(DARICParser::COMMA);
      setState(366);
      expr();
      setState(371);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(372);
    match(DARICParser::COLON);
    setState(373);
    bodyStar();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FnNameContext ------------------------------------------------------------------

DARICParser::FnNameContext::FnNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::FnNameContext::FN_FLOAT() {
  return getToken(DARICParser::FN_FLOAT, 0);
}

tree::TerminalNode* DARICParser::FnNameContext::FN_INTEGER() {
  return getToken(DARICParser::FN_INTEGER, 0);
}

tree::TerminalNode* DARICParser::FnNameContext::FN_STRING() {
  return getToken(DARICParser::FN_STRING, 0);
}


size_t DARICParser::FnNameContext::getRuleIndex() const {
  return DARICParser::RuleFnName;
}


antlrcpp::Any DARICParser::FnNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitFnName(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::FnNameContext* DARICParser::fnName() {
  FnNameContext *_localctx = _tracker.createInstance<FnNameContext>(_ctx, getState());
  enterRule(_localctx, 16, DARICParser::RuleFnName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(375);
    _la = _input->LA(1);
    if (!(((((_la - 111) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 111)) & ((1ULL << (DARICParser::FN_INTEGER - 111))
      | (1ULL << (DARICParser::FN_FLOAT - 111))
      | (1ULL << (DARICParser::FN_STRING - 111)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

DARICParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DARICParser::NumberContext* DARICParser::LiteralContext::number() {
  return getRuleContext<DARICParser::NumberContext>(0);
}

DARICParser::StringContext* DARICParser::LiteralContext::string() {
  return getRuleContext<DARICParser::StringContext>(0);
}


size_t DARICParser::LiteralContext::getRuleIndex() const {
  return DARICParser::RuleLiteral;
}


antlrcpp::Any DARICParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::LiteralContext* DARICParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 18, DARICParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(379);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::PLUS:
      case DARICParser::MINUS:
      case DARICParser::HEXNUMBER:
      case DARICParser::BINARYNUMBER:
      case DARICParser::NUMBER:
      case DARICParser::FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(377);
        number();
        break;
      }

      case DARICParser::STRINGLITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(378);
        string();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarContext ------------------------------------------------------------------

DARICParser::VarContext::VarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DARICParser::NumVarContext* DARICParser::VarContext::numVar() {
  return getRuleContext<DARICParser::NumVarContext>(0);
}

DARICParser::StrVarContext* DARICParser::VarContext::strVar() {
  return getRuleContext<DARICParser::StrVarContext>(0);
}

DARICParser::TypeVarContext* DARICParser::VarContext::typeVar() {
  return getRuleContext<DARICParser::TypeVarContext>(0);
}


size_t DARICParser::VarContext::getRuleIndex() const {
  return DARICParser::RuleVar;
}


antlrcpp::Any DARICParser::VarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVar(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::VarContext* DARICParser::var() {
  VarContext *_localctx = _tracker.createInstance<VarContext>(_ctx, getState());
  enterRule(_localctx, 20, DARICParser::RuleVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(384);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(381);
      numVar();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(382);
      strVar();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(383);
      typeVar();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeVarContext ------------------------------------------------------------------

DARICParser::TypeVarContext::TypeVarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DARICParser::TypeVarContext::getRuleIndex() const {
  return DARICParser::RuleTypeVar;
}

void DARICParser::TypeVarContext::copyFrom(TypeVarContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TypeVarTypeContext ------------------------------------------------------------------

DARICParser::VarNameTypeContext* DARICParser::TypeVarTypeContext::varNameType() {
  return getRuleContext<DARICParser::VarNameTypeContext>(0);
}

DARICParser::TypeVarTypeContext::TypeVarTypeContext(TypeVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::TypeVarTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitTypeVarType(this);
  else
    return visitor->visitChildren(this);
}
DARICParser::TypeVarContext* DARICParser::typeVar() {
  TypeVarContext *_localctx = _tracker.createInstance<TypeVarContext>(_ctx, getState());
  enterRule(_localctx, 22, DARICParser::RuleTypeVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = dynamic_cast<TypeVarContext *>(_tracker.createInstance<DARICParser::TypeVarTypeContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(386);
    varNameType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumVarContext ------------------------------------------------------------------

DARICParser::NumVarContext::NumVarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DARICParser::NumVarContext::getRuleIndex() const {
  return DARICParser::RuleNumVar;
}

void DARICParser::NumVarContext::copyFrom(NumVarContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NumVarFloatFieldContext ------------------------------------------------------------------

DARICParser::TypeVarContext* DARICParser::NumVarFloatFieldContext::typeVar() {
  return getRuleContext<DARICParser::TypeVarContext>(0);
}

DARICParser::VarNameContext* DARICParser::NumVarFloatFieldContext::varName() {
  return getRuleContext<DARICParser::VarNameContext>(0);
}

DARICParser::NumVarFloatFieldContext::NumVarFloatFieldContext(NumVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumVarFloatFieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumVarFloatField(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumVarIntegerFNContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumVarIntegerFNContext::FN_INTEGER() {
  return getToken(DARICParser::FN_INTEGER, 0);
}

tree::TerminalNode* DARICParser::NumVarIntegerFNContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

tree::TerminalNode* DARICParser::NumVarIntegerFNContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::FunctionParListContext* DARICParser::NumVarIntegerFNContext::functionParList() {
  return getRuleContext<DARICParser::FunctionParListContext>(0);
}

DARICParser::NumVarIntegerFNContext::NumVarIntegerFNContext(NumVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumVarIntegerFNContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumVarIntegerFN(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumVarStringFNContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumVarStringFNContext::FN_STRING() {
  return getToken(DARICParser::FN_STRING, 0);
}

tree::TerminalNode* DARICParser::NumVarStringFNContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

tree::TerminalNode* DARICParser::NumVarStringFNContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::FunctionParListContext* DARICParser::NumVarStringFNContext::functionParList() {
  return getRuleContext<DARICParser::FunctionParListContext>(0);
}

DARICParser::NumVarStringFNContext::NumVarStringFNContext(NumVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumVarStringFNContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumVarStringFN(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumVarIntegerFieldArrayContext ------------------------------------------------------------------

DARICParser::TypeVarContext* DARICParser::NumVarIntegerFieldArrayContext::typeVar() {
  return getRuleContext<DARICParser::TypeVarContext>(0);
}

tree::TerminalNode* DARICParser::NumVarIntegerFieldArrayContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumVarIntegerFieldArrayContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumVarIntegerFieldArrayContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::VarNameIntegerContext* DARICParser::NumVarIntegerFieldArrayContext::varNameInteger() {
  return getRuleContext<DARICParser::VarNameIntegerContext>(0);
}

DARICParser::NumVarIntegerFieldArrayContext::NumVarIntegerFieldArrayContext(NumVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumVarIntegerFieldArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumVarIntegerFieldArray(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumVarFloatArrayContext ------------------------------------------------------------------

DARICParser::VarNameContext* DARICParser::NumVarFloatArrayContext::varName() {
  return getRuleContext<DARICParser::VarNameContext>(0);
}

std::vector<tree::TerminalNode *> DARICParser::NumVarFloatArrayContext::LPAREN() {
  return getTokens(DARICParser::LPAREN);
}

tree::TerminalNode* DARICParser::NumVarFloatArrayContext::LPAREN(size_t i) {
  return getToken(DARICParser::LPAREN, i);
}

std::vector<DARICParser::NumExprContext *> DARICParser::NumVarFloatArrayContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumVarFloatArrayContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::NumVarFloatArrayContext::RPAREN() {
  return getTokens(DARICParser::RPAREN);
}

tree::TerminalNode* DARICParser::NumVarFloatArrayContext::RPAREN(size_t i) {
  return getToken(DARICParser::RPAREN, i);
}

std::vector<tree::TerminalNode *> DARICParser::NumVarFloatArrayContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::NumVarFloatArrayContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

DARICParser::NumVarFloatArrayContext::NumVarFloatArrayContext(NumVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumVarFloatArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumVarFloatArray(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumVarFloatContext ------------------------------------------------------------------

DARICParser::VarNameContext* DARICParser::NumVarFloatContext::varName() {
  return getRuleContext<DARICParser::VarNameContext>(0);
}

DARICParser::NumVarFloatContext::NumVarFloatContext(NumVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumVarFloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumVarFloat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumVarFloatFNContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumVarFloatFNContext::FN_FLOAT() {
  return getToken(DARICParser::FN_FLOAT, 0);
}

tree::TerminalNode* DARICParser::NumVarFloatFNContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

tree::TerminalNode* DARICParser::NumVarFloatFNContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::FunctionParListContext* DARICParser::NumVarFloatFNContext::functionParList() {
  return getRuleContext<DARICParser::FunctionParListContext>(0);
}

DARICParser::NumVarFloatFNContext::NumVarFloatFNContext(NumVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumVarFloatFNContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumVarFloatFN(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumVarIntegerArrayContext ------------------------------------------------------------------

DARICParser::VarNameIntegerContext* DARICParser::NumVarIntegerArrayContext::varNameInteger() {
  return getRuleContext<DARICParser::VarNameIntegerContext>(0);
}

std::vector<tree::TerminalNode *> DARICParser::NumVarIntegerArrayContext::LPAREN() {
  return getTokens(DARICParser::LPAREN);
}

tree::TerminalNode* DARICParser::NumVarIntegerArrayContext::LPAREN(size_t i) {
  return getToken(DARICParser::LPAREN, i);
}

std::vector<DARICParser::NumExprContext *> DARICParser::NumVarIntegerArrayContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumVarIntegerArrayContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::NumVarIntegerArrayContext::RPAREN() {
  return getTokens(DARICParser::RPAREN);
}

tree::TerminalNode* DARICParser::NumVarIntegerArrayContext::RPAREN(size_t i) {
  return getToken(DARICParser::RPAREN, i);
}

std::vector<tree::TerminalNode *> DARICParser::NumVarIntegerArrayContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::NumVarIntegerArrayContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

DARICParser::NumVarIntegerArrayContext::NumVarIntegerArrayContext(NumVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumVarIntegerArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumVarIntegerArray(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumVarIntegerContext ------------------------------------------------------------------

DARICParser::VarNameIntegerContext* DARICParser::NumVarIntegerContext::varNameInteger() {
  return getRuleContext<DARICParser::VarNameIntegerContext>(0);
}

DARICParser::NumVarIntegerContext::NumVarIntegerContext(NumVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumVarIntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumVarInteger(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumVarFloatFieldArrayContext ------------------------------------------------------------------

DARICParser::TypeVarContext* DARICParser::NumVarFloatFieldArrayContext::typeVar() {
  return getRuleContext<DARICParser::TypeVarContext>(0);
}

tree::TerminalNode* DARICParser::NumVarFloatFieldArrayContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumVarFloatFieldArrayContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumVarFloatFieldArrayContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::VarNameContext* DARICParser::NumVarFloatFieldArrayContext::varName() {
  return getRuleContext<DARICParser::VarNameContext>(0);
}

DARICParser::NumVarFloatFieldArrayContext::NumVarFloatFieldArrayContext(NumVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumVarFloatFieldArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumVarFloatFieldArray(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumVarIntegerFieldContext ------------------------------------------------------------------

DARICParser::TypeVarContext* DARICParser::NumVarIntegerFieldContext::typeVar() {
  return getRuleContext<DARICParser::TypeVarContext>(0);
}

DARICParser::VarNameIntegerContext* DARICParser::NumVarIntegerFieldContext::varNameInteger() {
  return getRuleContext<DARICParser::VarNameIntegerContext>(0);
}

DARICParser::NumVarIntegerFieldContext::NumVarIntegerFieldContext(NumVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumVarIntegerFieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumVarIntegerField(this);
  else
    return visitor->visitChildren(this);
}
DARICParser::NumVarContext* DARICParser::numVar() {
  NumVarContext *_localctx = _tracker.createInstance<NumVarContext>(_ctx, getState());
  enterRule(_localctx, 24, DARICParser::RuleNumVar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(454);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(388);
      varName();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatArrayContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(389);
      varName();
      setState(400);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(390);
          match(DARICParser::LPAREN);
          setState(391);
          numExpr(0);
          setState(394);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == DARICParser::COMMA) {
            setState(392);
            match(DARICParser::COMMA);
            setState(393);
            numExpr(0);
          }
          setState(396);
          match(DARICParser::RPAREN); 
        }
        setState(402);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(403);
      varNameInteger();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerArrayContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(404);
      varNameInteger();
      setState(415);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(405);
          match(DARICParser::LPAREN);
          setState(406);
          numExpr(0);
          setState(409);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == DARICParser::COMMA) {
            setState(407);
            match(DARICParser::COMMA);
            setState(408);
            numExpr(0);
          }
          setState(411);
          match(DARICParser::RPAREN); 
        }
        setState(417);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
      }
      break;
    }

    case 5: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatFieldContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(418);
      typeVar();
      setState(419);
      varName();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatFieldArrayContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(421);
      typeVar();
      setState(422);
      match(DARICParser::LPAREN);
      setState(423);
      numExpr(0);
      setState(424);
      match(DARICParser::RPAREN);
      setState(425);
      varName();
      break;
    }

    case 7: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerFieldContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(427);
      typeVar();
      setState(428);
      varNameInteger();
      break;
    }

    case 8: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerFieldArrayContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(430);
      typeVar();
      setState(431);
      match(DARICParser::LPAREN);
      setState(432);
      numExpr(0);
      setState(433);
      match(DARICParser::RPAREN);
      setState(434);
      varNameInteger();
      break;
    }

    case 9: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatFNContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(436);
      match(DARICParser::FN_FLOAT);
      setState(437);
      match(DARICParser::LPAREN);
      setState(439);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << DARICParser::TIME)
        | (1ULL << DARICParser::PI)
        | (1ULL << DARICParser::SQR)
        | (1ULL << DARICParser::LN)
        | (1ULL << DARICParser::LOG)
        | (1ULL << DARICParser::EXP)
        | (1ULL << DARICParser::ATN)
        | (1ULL << DARICParser::TAN)
        | (1ULL << DARICParser::COS)
        | (1ULL << DARICParser::SIN)
        | (1ULL << DARICParser::ABS)
        | (1ULL << DARICParser::ACS)
        | (1ULL << DARICParser::ASN)
        | (1ULL << DARICParser::DEG)
        | (1ULL << DARICParser::RAD)
        | (1ULL << DARICParser::SGN)
        | (1ULL << DARICParser::ASC)
        | (1ULL << DARICParser::LEN)
        | (1ULL << DARICParser::INSTR)
        | (1ULL << DARICParser::VAL)
        | (1ULL << DARICParser::TIMES)
        | (1ULL << DARICParser::STRS))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::STRINGS - 64))
        | (1ULL << (DARICParser::CHRS - 64))
        | (1ULL << (DARICParser::LEFTS - 64))
        | (1ULL << (DARICParser::MIDS - 64))
        | (1ULL << (DARICParser::RIGHTS - 64))
        | (1ULL << (DARICParser::RND - 64))
        | (1ULL << (DARICParser::RND0 - 64))
        | (1ULL << (DARICParser::RND1 - 64))
        | (1ULL << (DARICParser::NOT - 64))
        | (1ULL << (DARICParser::PLUS - 64))
        | (1ULL << (DARICParser::MINUS - 64))
        | (1ULL << (DARICParser::LPAREN - 64))
        | (1ULL << (DARICParser::STRINGLITERAL - 64))
        | (1ULL << (DARICParser::FN_INTEGER - 64))
        | (1ULL << (DARICParser::FN_FLOAT - 64))
        | (1ULL << (DARICParser::FN_STRING - 64))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 64))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 64))
        | (1ULL << (DARICParser::VARIABLE_STRING - 64))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 64))
        | (1ULL << (DARICParser::HEXNUMBER - 64))
        | (1ULL << (DARICParser::BINARYNUMBER - 64))
        | (1ULL << (DARICParser::NUMBER - 64))
        | (1ULL << (DARICParser::FLOAT - 64)))) != 0)) {
        setState(438);
        functionParList();
      }
      setState(441);
      match(DARICParser::RPAREN);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerFNContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(442);
      match(DARICParser::FN_INTEGER);
      setState(443);
      match(DARICParser::LPAREN);
      setState(445);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << DARICParser::TIME)
        | (1ULL << DARICParser::PI)
        | (1ULL << DARICParser::SQR)
        | (1ULL << DARICParser::LN)
        | (1ULL << DARICParser::LOG)
        | (1ULL << DARICParser::EXP)
        | (1ULL << DARICParser::ATN)
        | (1ULL << DARICParser::TAN)
        | (1ULL << DARICParser::COS)
        | (1ULL << DARICParser::SIN)
        | (1ULL << DARICParser::ABS)
        | (1ULL << DARICParser::ACS)
        | (1ULL << DARICParser::ASN)
        | (1ULL << DARICParser::DEG)
        | (1ULL << DARICParser::RAD)
        | (1ULL << DARICParser::SGN)
        | (1ULL << DARICParser::ASC)
        | (1ULL << DARICParser::LEN)
        | (1ULL << DARICParser::INSTR)
        | (1ULL << DARICParser::VAL)
        | (1ULL << DARICParser::TIMES)
        | (1ULL << DARICParser::STRS))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::STRINGS - 64))
        | (1ULL << (DARICParser::CHRS - 64))
        | (1ULL << (DARICParser::LEFTS - 64))
        | (1ULL << (DARICParser::MIDS - 64))
        | (1ULL << (DARICParser::RIGHTS - 64))
        | (1ULL << (DARICParser::RND - 64))
        | (1ULL << (DARICParser::RND0 - 64))
        | (1ULL << (DARICParser::RND1 - 64))
        | (1ULL << (DARICParser::NOT - 64))
        | (1ULL << (DARICParser::PLUS - 64))
        | (1ULL << (DARICParser::MINUS - 64))
        | (1ULL << (DARICParser::LPAREN - 64))
        | (1ULL << (DARICParser::STRINGLITERAL - 64))
        | (1ULL << (DARICParser::FN_INTEGER - 64))
        | (1ULL << (DARICParser::FN_FLOAT - 64))
        | (1ULL << (DARICParser::FN_STRING - 64))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 64))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 64))
        | (1ULL << (DARICParser::VARIABLE_STRING - 64))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 64))
        | (1ULL << (DARICParser::HEXNUMBER - 64))
        | (1ULL << (DARICParser::BINARYNUMBER - 64))
        | (1ULL << (DARICParser::NUMBER - 64))
        | (1ULL << (DARICParser::FLOAT - 64)))) != 0)) {
        setState(444);
        functionParList();
      }
      setState(447);
      match(DARICParser::RPAREN);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarStringFNContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(448);
      match(DARICParser::FN_STRING);
      setState(449);
      match(DARICParser::LPAREN);
      setState(451);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << DARICParser::TIME)
        | (1ULL << DARICParser::PI)
        | (1ULL << DARICParser::SQR)
        | (1ULL << DARICParser::LN)
        | (1ULL << DARICParser::LOG)
        | (1ULL << DARICParser::EXP)
        | (1ULL << DARICParser::ATN)
        | (1ULL << DARICParser::TAN)
        | (1ULL << DARICParser::COS)
        | (1ULL << DARICParser::SIN)
        | (1ULL << DARICParser::ABS)
        | (1ULL << DARICParser::ACS)
        | (1ULL << DARICParser::ASN)
        | (1ULL << DARICParser::DEG)
        | (1ULL << DARICParser::RAD)
        | (1ULL << DARICParser::SGN)
        | (1ULL << DARICParser::ASC)
        | (1ULL << DARICParser::LEN)
        | (1ULL << DARICParser::INSTR)
        | (1ULL << DARICParser::VAL)
        | (1ULL << DARICParser::TIMES)
        | (1ULL << DARICParser::STRS))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::STRINGS - 64))
        | (1ULL << (DARICParser::CHRS - 64))
        | (1ULL << (DARICParser::LEFTS - 64))
        | (1ULL << (DARICParser::MIDS - 64))
        | (1ULL << (DARICParser::RIGHTS - 64))
        | (1ULL << (DARICParser::RND - 64))
        | (1ULL << (DARICParser::RND0 - 64))
        | (1ULL << (DARICParser::RND1 - 64))
        | (1ULL << (DARICParser::NOT - 64))
        | (1ULL << (DARICParser::PLUS - 64))
        | (1ULL << (DARICParser::MINUS - 64))
        | (1ULL << (DARICParser::LPAREN - 64))
        | (1ULL << (DARICParser::STRINGLITERAL - 64))
        | (1ULL << (DARICParser::FN_INTEGER - 64))
        | (1ULL << (DARICParser::FN_FLOAT - 64))
        | (1ULL << (DARICParser::FN_STRING - 64))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 64))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 64))
        | (1ULL << (DARICParser::VARIABLE_STRING - 64))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 64))
        | (1ULL << (DARICParser::HEXNUMBER - 64))
        | (1ULL << (DARICParser::BINARYNUMBER - 64))
        | (1ULL << (DARICParser::NUMBER - 64))
        | (1ULL << (DARICParser::FLOAT - 64)))) != 0)) {
        setState(450);
        functionParList();
      }
      setState(453);
      match(DARICParser::RPAREN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StrVarContext ------------------------------------------------------------------

DARICParser::StrVarContext::StrVarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DARICParser::StrVarContext::getRuleIndex() const {
  return DARICParser::RuleStrVar;
}

void DARICParser::StrVarContext::copyFrom(StrVarContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NumVarStringArrayContext ------------------------------------------------------------------

DARICParser::VarNameStringContext* DARICParser::NumVarStringArrayContext::varNameString() {
  return getRuleContext<DARICParser::VarNameStringContext>(0);
}

std::vector<tree::TerminalNode *> DARICParser::NumVarStringArrayContext::LPAREN() {
  return getTokens(DARICParser::LPAREN);
}

tree::TerminalNode* DARICParser::NumVarStringArrayContext::LPAREN(size_t i) {
  return getToken(DARICParser::LPAREN, i);
}

std::vector<DARICParser::NumExprContext *> DARICParser::NumVarStringArrayContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumVarStringArrayContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::NumVarStringArrayContext::RPAREN() {
  return getTokens(DARICParser::RPAREN);
}

tree::TerminalNode* DARICParser::NumVarStringArrayContext::RPAREN(size_t i) {
  return getToken(DARICParser::RPAREN, i);
}

std::vector<tree::TerminalNode *> DARICParser::NumVarStringArrayContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::NumVarStringArrayContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

DARICParser::NumVarStringArrayContext::NumVarStringArrayContext(StrVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumVarStringArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumVarStringArray(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumVarStringContext ------------------------------------------------------------------

DARICParser::VarNameStringContext* DARICParser::NumVarStringContext::varNameString() {
  return getRuleContext<DARICParser::VarNameStringContext>(0);
}

DARICParser::NumVarStringContext::NumVarStringContext(StrVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumVarStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumVarString(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumVarStringFieldContext ------------------------------------------------------------------

DARICParser::TypeVarContext* DARICParser::NumVarStringFieldContext::typeVar() {
  return getRuleContext<DARICParser::TypeVarContext>(0);
}

DARICParser::VarNameStringContext* DARICParser::NumVarStringFieldContext::varNameString() {
  return getRuleContext<DARICParser::VarNameStringContext>(0);
}

DARICParser::NumVarStringFieldContext::NumVarStringFieldContext(StrVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumVarStringFieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumVarStringField(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumVarStringFieldArrayContext ------------------------------------------------------------------

DARICParser::TypeVarContext* DARICParser::NumVarStringFieldArrayContext::typeVar() {
  return getRuleContext<DARICParser::TypeVarContext>(0);
}

tree::TerminalNode* DARICParser::NumVarStringFieldArrayContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumVarStringFieldArrayContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumVarStringFieldArrayContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::VarNameStringContext* DARICParser::NumVarStringFieldArrayContext::varNameString() {
  return getRuleContext<DARICParser::VarNameStringContext>(0);
}

DARICParser::NumVarStringFieldArrayContext::NumVarStringFieldArrayContext(StrVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumVarStringFieldArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumVarStringFieldArray(this);
  else
    return visitor->visitChildren(this);
}
DARICParser::StrVarContext* DARICParser::strVar() {
  StrVarContext *_localctx = _tracker.createInstance<StrVarContext>(_ctx, getState());
  enterRule(_localctx, 26, DARICParser::RuleStrVar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(480);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(456);
      varNameString();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringArrayContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(457);
      varNameString();
      setState(468);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(458);
          match(DARICParser::LPAREN);
          setState(459);
          numExpr(0);
          setState(462);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == DARICParser::COMMA) {
            setState(460);
            match(DARICParser::COMMA);
            setState(461);
            numExpr(0);
          }
          setState(464);
          match(DARICParser::RPAREN); 
        }
        setState(470);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringFieldContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(471);
      typeVar();
      setState(472);
      varNameString();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringFieldArrayContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(474);
      typeVar();
      setState(475);
      match(DARICParser::LPAREN);
      setState(476);
      numExpr(0);
      setState(477);
      match(DARICParser::RPAREN);
      setState(478);
      varNameString();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JustVarContext ------------------------------------------------------------------

DARICParser::JustVarContext::JustVarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DARICParser::VarNameContext* DARICParser::JustVarContext::varName() {
  return getRuleContext<DARICParser::VarNameContext>(0);
}

DARICParser::VarNameIntegerContext* DARICParser::JustVarContext::varNameInteger() {
  return getRuleContext<DARICParser::VarNameIntegerContext>(0);
}

DARICParser::VarNameStringContext* DARICParser::JustVarContext::varNameString() {
  return getRuleContext<DARICParser::VarNameStringContext>(0);
}


size_t DARICParser::JustVarContext::getRuleIndex() const {
  return DARICParser::RuleJustVar;
}


antlrcpp::Any DARICParser::JustVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitJustVar(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::JustVarContext* DARICParser::justVar() {
  JustVarContext *_localctx = _tracker.createInstance<JustVarContext>(_ctx, getState());
  enterRule(_localctx, 28, DARICParser::RuleJustVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(485);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::VARIABLE_FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(482);
        varName();
        break;
      }

      case DARICParser::VARIABLE_INTEGER: {
        enterOuterAlt(_localctx, 2);
        setState(483);
        varNameInteger();
        break;
      }

      case DARICParser::VARIABLE_STRING: {
        enterOuterAlt(_localctx, 3);
        setState(484);
        varNameString();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JustNumberVarContext ------------------------------------------------------------------

DARICParser::JustNumberVarContext::JustNumberVarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DARICParser::VarNameContext* DARICParser::JustNumberVarContext::varName() {
  return getRuleContext<DARICParser::VarNameContext>(0);
}

DARICParser::VarNameIntegerContext* DARICParser::JustNumberVarContext::varNameInteger() {
  return getRuleContext<DARICParser::VarNameIntegerContext>(0);
}


size_t DARICParser::JustNumberVarContext::getRuleIndex() const {
  return DARICParser::RuleJustNumberVar;
}


antlrcpp::Any DARICParser::JustNumberVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitJustNumberVar(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::JustNumberVarContext* DARICParser::justNumberVar() {
  JustNumberVarContext *_localctx = _tracker.createInstance<JustNumberVarContext>(_ctx, getState());
  enterRule(_localctx, 30, DARICParser::RuleJustNumberVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(489);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::VARIABLE_FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(487);
        varName();
        break;
      }

      case DARICParser::VARIABLE_INTEGER: {
        enterOuterAlt(_localctx, 2);
        setState(488);
        varNameInteger();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarNameContext ------------------------------------------------------------------

DARICParser::VarNameContext::VarNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::VarNameContext::VARIABLE_FLOAT() {
  return getToken(DARICParser::VARIABLE_FLOAT, 0);
}


size_t DARICParser::VarNameContext::getRuleIndex() const {
  return DARICParser::RuleVarName;
}


antlrcpp::Any DARICParser::VarNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVarName(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::VarNameContext* DARICParser::varName() {
  VarNameContext *_localctx = _tracker.createInstance<VarNameContext>(_ctx, getState());
  enterRule(_localctx, 32, DARICParser::RuleVarName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(491);
    match(DARICParser::VARIABLE_FLOAT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarNameIntegerContext ------------------------------------------------------------------

DARICParser::VarNameIntegerContext::VarNameIntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::VarNameIntegerContext::VARIABLE_INTEGER() {
  return getToken(DARICParser::VARIABLE_INTEGER, 0);
}


size_t DARICParser::VarNameIntegerContext::getRuleIndex() const {
  return DARICParser::RuleVarNameInteger;
}


antlrcpp::Any DARICParser::VarNameIntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVarNameInteger(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::VarNameIntegerContext* DARICParser::varNameInteger() {
  VarNameIntegerContext *_localctx = _tracker.createInstance<VarNameIntegerContext>(_ctx, getState());
  enterRule(_localctx, 34, DARICParser::RuleVarNameInteger);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(493);
    match(DARICParser::VARIABLE_INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarNameStringContext ------------------------------------------------------------------

DARICParser::VarNameStringContext::VarNameStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::VarNameStringContext::VARIABLE_STRING() {
  return getToken(DARICParser::VARIABLE_STRING, 0);
}


size_t DARICParser::VarNameStringContext::getRuleIndex() const {
  return DARICParser::RuleVarNameString;
}


antlrcpp::Any DARICParser::VarNameStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVarNameString(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::VarNameStringContext* DARICParser::varNameString() {
  VarNameStringContext *_localctx = _tracker.createInstance<VarNameStringContext>(_ctx, getState());
  enterRule(_localctx, 36, DARICParser::RuleVarNameString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(495);
    match(DARICParser::VARIABLE_STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarNameTypeContext ------------------------------------------------------------------

DARICParser::VarNameTypeContext::VarNameTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::VarNameTypeContext::VARIABLE_TYPE() {
  return getToken(DARICParser::VARIABLE_TYPE, 0);
}


size_t DARICParser::VarNameTypeContext::getRuleIndex() const {
  return DARICParser::RuleVarNameType;
}


antlrcpp::Any DARICParser::VarNameTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVarNameType(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::VarNameTypeContext* DARICParser::varNameType() {
  VarNameTypeContext *_localctx = _tracker.createInstance<VarNameTypeContext>(_ctx, getState());
  enterRule(_localctx, 38, DARICParser::RuleVarNameType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(497);
    match(DARICParser::VARIABLE_TYPE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

DARICParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DARICParser::VarDeclContext::getRuleIndex() const {
  return DARICParser::RuleVarDecl;
}

void DARICParser::VarDeclContext::copyFrom(VarDeclContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VarDeclIndContext ------------------------------------------------------------------

DARICParser::VarContext* DARICParser::VarDeclIndContext::var() {
  return getRuleContext<DARICParser::VarContext>(0);
}

DARICParser::VarDeclIndContext::VarDeclIndContext(VarDeclContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::VarDeclIndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVarDeclInd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarDeclArrayedContext ------------------------------------------------------------------

DARICParser::VarContext* DARICParser::VarDeclArrayedContext::var() {
  return getRuleContext<DARICParser::VarContext>(0);
}

std::vector<tree::TerminalNode *> DARICParser::VarDeclArrayedContext::LPAREN() {
  return getTokens(DARICParser::LPAREN);
}

tree::TerminalNode* DARICParser::VarDeclArrayedContext::LPAREN(size_t i) {
  return getToken(DARICParser::LPAREN, i);
}

std::vector<DARICParser::NumExprContext *> DARICParser::VarDeclArrayedContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::VarDeclArrayedContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::VarDeclArrayedContext::RPAREN() {
  return getTokens(DARICParser::RPAREN);
}

tree::TerminalNode* DARICParser::VarDeclArrayedContext::RPAREN(size_t i) {
  return getToken(DARICParser::RPAREN, i);
}

std::vector<tree::TerminalNode *> DARICParser::VarDeclArrayedContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::VarDeclArrayedContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

DARICParser::VarDeclArrayedContext::VarDeclArrayedContext(VarDeclContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::VarDeclArrayedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVarDeclArrayed(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarDeclTypeContext ------------------------------------------------------------------

DARICParser::TypeVarContext* DARICParser::VarDeclTypeContext::typeVar() {
  return getRuleContext<DARICParser::TypeVarContext>(0);
}

DARICParser::VarNameContext* DARICParser::VarDeclTypeContext::varName() {
  return getRuleContext<DARICParser::VarNameContext>(0);
}

DARICParser::VarDeclTypeContext::VarDeclTypeContext(VarDeclContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::VarDeclTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVarDeclType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarDeclTypeArrayedContext ------------------------------------------------------------------

DARICParser::TypeVarContext* DARICParser::VarDeclTypeArrayedContext::typeVar() {
  return getRuleContext<DARICParser::TypeVarContext>(0);
}

tree::TerminalNode* DARICParser::VarDeclTypeArrayedContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::VarDeclTypeArrayedContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::VarDeclTypeArrayedContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::VarNameContext* DARICParser::VarDeclTypeArrayedContext::varName() {
  return getRuleContext<DARICParser::VarNameContext>(0);
}

DARICParser::VarDeclTypeArrayedContext::VarDeclTypeArrayedContext(VarDeclContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::VarDeclTypeArrayedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVarDeclTypeArrayed(this);
  else
    return visitor->visitChildren(this);
}
DARICParser::VarDeclContext* DARICParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 40, DARICParser::RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(523);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclIndContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(499);
      var();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclArrayedContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(500);
      var();
      setState(511);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::LPAREN) {
        setState(501);
        match(DARICParser::LPAREN);
        setState(502);
        numExpr(0);
        setState(505);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DARICParser::COMMA) {
          setState(503);
          match(DARICParser::COMMA);
          setState(504);
          numExpr(0);
        }
        setState(507);
        match(DARICParser::RPAREN);
        setState(513);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(514);
      typeVar();
      setState(515);
      varName();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeArrayedContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(517);
      typeVar();
      setState(518);
      match(DARICParser::LPAREN);
      setState(519);
      numExpr(0);
      setState(520);
      match(DARICParser::RPAREN);
      setState(521);
      varName();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclWithDimensionContext ------------------------------------------------------------------

DARICParser::VarDeclWithDimensionContext::VarDeclWithDimensionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DARICParser::VarContext* DARICParser::VarDeclWithDimensionContext::var() {
  return getRuleContext<DARICParser::VarContext>(0);
}

tree::TerminalNode* DARICParser::VarDeclWithDimensionContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::VarDeclWithDimensionContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::VarDeclWithDimensionContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::VarDeclWithDimensionContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> DARICParser::VarDeclWithDimensionContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::VarDeclWithDimensionContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}


size_t DARICParser::VarDeclWithDimensionContext::getRuleIndex() const {
  return DARICParser::RuleVarDeclWithDimension;
}


antlrcpp::Any DARICParser::VarDeclWithDimensionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVarDeclWithDimension(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::VarDeclWithDimensionContext* DARICParser::varDeclWithDimension() {
  VarDeclWithDimensionContext *_localctx = _tracker.createInstance<VarDeclWithDimensionContext>(_ctx, getState());
  enterRule(_localctx, 42, DARICParser::RuleVarDeclWithDimension);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(525);
    var();
    setState(526);
    match(DARICParser::LPAREN);
    setState(527);
    numExpr(0);
    setState(532);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(528);
      match(DARICParser::COMMA);
      setState(529);
      numExpr(0);
      setState(534);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(535);
    match(DARICParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarListContext ------------------------------------------------------------------

DARICParser::VarListContext::VarListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DARICParser::VarDeclContext *> DARICParser::VarListContext::varDecl() {
  return getRuleContexts<DARICParser::VarDeclContext>();
}

DARICParser::VarDeclContext* DARICParser::VarListContext::varDecl(size_t i) {
  return getRuleContext<DARICParser::VarDeclContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::VarListContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::VarListContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}


size_t DARICParser::VarListContext::getRuleIndex() const {
  return DARICParser::RuleVarList;
}


antlrcpp::Any DARICParser::VarListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVarList(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::VarListContext* DARICParser::varList() {
  VarListContext *_localctx = _tracker.createInstance<VarListContext>(_ctx, getState());
  enterRule(_localctx, 44, DARICParser::RuleVarList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(537);
    varDecl();
    setState(542);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(538);
      match(DARICParser::COMMA);
      setState(539);
      varDecl();
      setState(544);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionVarListContext ------------------------------------------------------------------

DARICParser::FunctionVarListContext::FunctionVarListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DARICParser::JustVarContext *> DARICParser::FunctionVarListContext::justVar() {
  return getRuleContexts<DARICParser::JustVarContext>();
}

DARICParser::JustVarContext* DARICParser::FunctionVarListContext::justVar(size_t i) {
  return getRuleContext<DARICParser::JustVarContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::FunctionVarListContext::RETURN() {
  return getTokens(DARICParser::RETURN);
}

tree::TerminalNode* DARICParser::FunctionVarListContext::RETURN(size_t i) {
  return getToken(DARICParser::RETURN, i);
}

std::vector<tree::TerminalNode *> DARICParser::FunctionVarListContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::FunctionVarListContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}


size_t DARICParser::FunctionVarListContext::getRuleIndex() const {
  return DARICParser::RuleFunctionVarList;
}


antlrcpp::Any DARICParser::FunctionVarListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitFunctionVarList(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::FunctionVarListContext* DARICParser::functionVarList() {
  FunctionVarListContext *_localctx = _tracker.createInstance<FunctionVarListContext>(_ctx, getState());
  enterRule(_localctx, 46, DARICParser::RuleFunctionVarList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(546);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::RETURN) {
      setState(545);
      match(DARICParser::RETURN);
    }
    setState(548);
    justVar();
    setState(556);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(549);
      match(DARICParser::COMMA);
      setState(551);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::RETURN) {
        setState(550);
        match(DARICParser::RETURN);
      }
      setState(553);
      justVar();
      setState(558);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionParListContext ------------------------------------------------------------------

DARICParser::FunctionParListContext::FunctionParListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DARICParser::ExprContext *> DARICParser::FunctionParListContext::expr() {
  return getRuleContexts<DARICParser::ExprContext>();
}

DARICParser::ExprContext* DARICParser::FunctionParListContext::expr(size_t i) {
  return getRuleContext<DARICParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::FunctionParListContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::FunctionParListContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}


size_t DARICParser::FunctionParListContext::getRuleIndex() const {
  return DARICParser::RuleFunctionParList;
}


antlrcpp::Any DARICParser::FunctionParListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitFunctionParList(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::FunctionParListContext* DARICParser::functionParList() {
  FunctionParListContext *_localctx = _tracker.createInstance<FunctionParListContext>(_ctx, getState());
  enterRule(_localctx, 48, DARICParser::RuleFunctionParList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(559);
    expr();
    setState(564);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(560);
      match(DARICParser::COMMA);
      setState(561);
      expr();
      setState(566);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprListContext ------------------------------------------------------------------

DARICParser::ExprListContext::ExprListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DARICParser::ExprContext *> DARICParser::ExprListContext::expr() {
  return getRuleContexts<DARICParser::ExprContext>();
}

DARICParser::ExprContext* DARICParser::ExprListContext::expr(size_t i) {
  return getRuleContext<DARICParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::ExprListContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::ExprListContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}


size_t DARICParser::ExprListContext::getRuleIndex() const {
  return DARICParser::RuleExprList;
}


antlrcpp::Any DARICParser::ExprListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitExprList(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::ExprListContext* DARICParser::exprList() {
  ExprListContext *_localctx = _tracker.createInstance<ExprListContext>(_ctx, getState());
  enterRule(_localctx, 50, DARICParser::RuleExprList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(567);
    expr();
    setState(572);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(568);
      match(DARICParser::COMMA);
      setState(569);
      expr();
      setState(574);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintListItemContext ------------------------------------------------------------------

DARICParser::PrintListItemContext::PrintListItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DARICParser::PrintListItemContext::getRuleIndex() const {
  return DARICParser::RulePrintListItem;
}

void DARICParser::PrintListItemContext::copyFrom(PrintListItemContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrintListExprContext ------------------------------------------------------------------

DARICParser::ExprContext* DARICParser::PrintListExprContext::expr() {
  return getRuleContext<DARICParser::ExprContext>(0);
}

tree::TerminalNode* DARICParser::PrintListExprContext::TILDE() {
  return getToken(DARICParser::TILDE, 0);
}

DARICParser::PrintListExprContext::PrintListExprContext(PrintListItemContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::PrintListExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitPrintListExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintListSPCContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::PrintListSPCContext::SPC() {
  return getToken(DARICParser::SPC, 0);
}

DARICParser::NumExprContext* DARICParser::PrintListSPCContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

DARICParser::PrintListSPCContext::PrintListSPCContext(PrintListItemContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::PrintListSPCContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitPrintListSPC(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintListSPCPContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::PrintListSPCPContext::SPC() {
  return getToken(DARICParser::SPC, 0);
}

tree::TerminalNode* DARICParser::PrintListSPCPContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::PrintListSPCPContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::PrintListSPCPContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::PrintListSPCPContext::PrintListSPCPContext(PrintListItemContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::PrintListSPCPContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitPrintListSPCP(this);
  else
    return visitor->visitChildren(this);
}
DARICParser::PrintListItemContext* DARICParser::printListItem() {
  PrintListItemContext *_localctx = _tracker.createInstance<PrintListItemContext>(_ctx, getState());
  enterRule(_localctx, 52, DARICParser::RulePrintListItem);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(586);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<PrintListItemContext *>(_tracker.createInstance<DARICParser::PrintListExprContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(576);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::TILDE) {
        setState(575);
        match(DARICParser::TILDE);
      }
      setState(578);
      expr();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<PrintListItemContext *>(_tracker.createInstance<DARICParser::PrintListSPCPContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(579);
      match(DARICParser::SPC);
      setState(580);
      match(DARICParser::LPAREN);
      setState(581);
      numExpr(0);
      setState(582);
      match(DARICParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<PrintListItemContext *>(_tracker.createInstance<DARICParser::PrintListSPCContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(584);
      match(DARICParser::SPC);
      setState(585);
      numExpr(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintStartingTicksContext ------------------------------------------------------------------

DARICParser::PrintStartingTicksContext::PrintStartingTicksContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DARICParser::PrintStartingTicksContext::getRuleIndex() const {
  return DARICParser::RulePrintStartingTicks;
}

void DARICParser::PrintStartingTicksContext::copyFrom(PrintStartingTicksContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrintListTickContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> DARICParser::PrintListTickContext::TICK() {
  return getTokens(DARICParser::TICK);
}

tree::TerminalNode* DARICParser::PrintListTickContext::TICK(size_t i) {
  return getToken(DARICParser::TICK, i);
}

DARICParser::PrintListTickContext::PrintListTickContext(PrintStartingTicksContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::PrintListTickContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitPrintListTick(this);
  else
    return visitor->visitChildren(this);
}
DARICParser::PrintStartingTicksContext* DARICParser::printStartingTicks() {
  PrintStartingTicksContext *_localctx = _tracker.createInstance<PrintStartingTicksContext>(_ctx, getState());
  enterRule(_localctx, 54, DARICParser::RulePrintStartingTicks);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = dynamic_cast<PrintStartingTicksContext *>(_tracker.createInstance<DARICParser::PrintListTickContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(589); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(588);
      match(DARICParser::TICK);
      setState(591); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == DARICParser::TICK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintListContext ------------------------------------------------------------------

DARICParser::PrintListContext::PrintListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DARICParser::PrintListItemContext *> DARICParser::PrintListContext::printListItem() {
  return getRuleContexts<DARICParser::PrintListItemContext>();
}

DARICParser::PrintListItemContext* DARICParser::PrintListContext::printListItem(size_t i) {
  return getRuleContext<DARICParser::PrintListItemContext>(i);
}

DARICParser::PrintStartingTicksContext* DARICParser::PrintListContext::printStartingTicks() {
  return getRuleContext<DARICParser::PrintStartingTicksContext>(0);
}

std::vector<tree::TerminalNode *> DARICParser::PrintListContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::PrintListContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

std::vector<tree::TerminalNode *> DARICParser::PrintListContext::SEMICOLON() {
  return getTokens(DARICParser::SEMICOLON);
}

tree::TerminalNode* DARICParser::PrintListContext::SEMICOLON(size_t i) {
  return getToken(DARICParser::SEMICOLON, i);
}

std::vector<tree::TerminalNode *> DARICParser::PrintListContext::TICK() {
  return getTokens(DARICParser::TICK);
}

tree::TerminalNode* DARICParser::PrintListContext::TICK(size_t i) {
  return getToken(DARICParser::TICK, i);
}


size_t DARICParser::PrintListContext::getRuleIndex() const {
  return DARICParser::RulePrintList;
}


antlrcpp::Any DARICParser::PrintListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitPrintList(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::PrintListContext* DARICParser::printList() {
  PrintListContext *_localctx = _tracker.createInstance<PrintListContext>(_ctx, getState());
  enterRule(_localctx, 56, DARICParser::RulePrintList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(594);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::TICK) {
      setState(593);
      printStartingTicks();
    }
    setState(597);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::COMMA) {
      setState(596);
      match(DARICParser::COMMA);
    }
    setState(599);
    printListItem();
    setState(606);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 98) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 98)) & ((1ULL << (DARICParser::TICK - 98))
      | (1ULL << (DARICParser::COMMA - 98))
      | (1ULL << (DARICParser::SEMICOLON - 98)))) != 0)) {
      setState(600);
      _la = _input->LA(1);
      if (!(((((_la - 98) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 98)) & ((1ULL << (DARICParser::TICK - 98))
        | (1ULL << (DARICParser::COMMA - 98))
        | (1ULL << (DARICParser::SEMICOLON - 98)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(602);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
      case 1: {
        setState(601);
        printListItem();
        break;
      }

      default:
        break;
      }
      setState(608);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

DARICParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DARICParser::NumExprContext* DARICParser::ExprContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

DARICParser::StrExprContext* DARICParser::ExprContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}


size_t DARICParser::ExprContext::getRuleIndex() const {
  return DARICParser::RuleExpr;
}


antlrcpp::Any DARICParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::ExprContext* DARICParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 58, DARICParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(611);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(609);
      numExpr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(610);
      strExpr(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

DARICParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DARICParser::NumberIntegerContext* DARICParser::NumberContext::numberInteger() {
  return getRuleContext<DARICParser::NumberIntegerContext>(0);
}

DARICParser::NumberFloatContext* DARICParser::NumberContext::numberFloat() {
  return getRuleContext<DARICParser::NumberFloatContext>(0);
}

DARICParser::NumberHexContext* DARICParser::NumberContext::numberHex() {
  return getRuleContext<DARICParser::NumberHexContext>(0);
}

DARICParser::NumberBinaryContext* DARICParser::NumberContext::numberBinary() {
  return getRuleContext<DARICParser::NumberBinaryContext>(0);
}


size_t DARICParser::NumberContext::getRuleIndex() const {
  return DARICParser::RuleNumber;
}


antlrcpp::Any DARICParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::NumberContext* DARICParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 60, DARICParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(617);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(613);
      numberInteger();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(614);
      numberFloat();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(615);
      numberHex();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(616);
      numberBinary();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberIntegerContext ------------------------------------------------------------------

DARICParser::NumberIntegerContext::NumberIntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::NumberIntegerContext::NUMBER() {
  return getToken(DARICParser::NUMBER, 0);
}

tree::TerminalNode* DARICParser::NumberIntegerContext::PLUS() {
  return getToken(DARICParser::PLUS, 0);
}

tree::TerminalNode* DARICParser::NumberIntegerContext::MINUS() {
  return getToken(DARICParser::MINUS, 0);
}


size_t DARICParser::NumberIntegerContext::getRuleIndex() const {
  return DARICParser::RuleNumberInteger;
}


antlrcpp::Any DARICParser::NumberIntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumberInteger(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::NumberIntegerContext* DARICParser::numberInteger() {
  NumberIntegerContext *_localctx = _tracker.createInstance<NumberIntegerContext>(_ctx, getState());
  enterRule(_localctx, 62, DARICParser::RuleNumberInteger);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(620);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::PLUS

    || _la == DARICParser::MINUS) {
      setState(619);
      _la = _input->LA(1);
      if (!(_la == DARICParser::PLUS

      || _la == DARICParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(622);
    match(DARICParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberHexContext ------------------------------------------------------------------

DARICParser::NumberHexContext::NumberHexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::NumberHexContext::HEXNUMBER() {
  return getToken(DARICParser::HEXNUMBER, 0);
}


size_t DARICParser::NumberHexContext::getRuleIndex() const {
  return DARICParser::RuleNumberHex;
}


antlrcpp::Any DARICParser::NumberHexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumberHex(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::NumberHexContext* DARICParser::numberHex() {
  NumberHexContext *_localctx = _tracker.createInstance<NumberHexContext>(_ctx, getState());
  enterRule(_localctx, 64, DARICParser::RuleNumberHex);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(624);
    match(DARICParser::HEXNUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberBinaryContext ------------------------------------------------------------------

DARICParser::NumberBinaryContext::NumberBinaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::NumberBinaryContext::BINARYNUMBER() {
  return getToken(DARICParser::BINARYNUMBER, 0);
}


size_t DARICParser::NumberBinaryContext::getRuleIndex() const {
  return DARICParser::RuleNumberBinary;
}


antlrcpp::Any DARICParser::NumberBinaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumberBinary(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::NumberBinaryContext* DARICParser::numberBinary() {
  NumberBinaryContext *_localctx = _tracker.createInstance<NumberBinaryContext>(_ctx, getState());
  enterRule(_localctx, 66, DARICParser::RuleNumberBinary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(626);
    match(DARICParser::BINARYNUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberFloatContext ------------------------------------------------------------------

DARICParser::NumberFloatContext::NumberFloatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::NumberFloatContext::FLOAT() {
  return getToken(DARICParser::FLOAT, 0);
}

tree::TerminalNode* DARICParser::NumberFloatContext::PLUS() {
  return getToken(DARICParser::PLUS, 0);
}

tree::TerminalNode* DARICParser::NumberFloatContext::MINUS() {
  return getToken(DARICParser::MINUS, 0);
}


size_t DARICParser::NumberFloatContext::getRuleIndex() const {
  return DARICParser::RuleNumberFloat;
}


antlrcpp::Any DARICParser::NumberFloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumberFloat(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::NumberFloatContext* DARICParser::numberFloat() {
  NumberFloatContext *_localctx = _tracker.createInstance<NumberFloatContext>(_ctx, getState());
  enterRule(_localctx, 68, DARICParser::RuleNumberFloat);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(629);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::PLUS

    || _la == DARICParser::MINUS) {
      setState(628);
      _la = _input->LA(1);
      if (!(_la == DARICParser::PLUS

      || _la == DARICParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(631);
    match(DARICParser::FLOAT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StrFuncContext ------------------------------------------------------------------

DARICParser::StrFuncContext::StrFuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DARICParser::StrFuncContext::getRuleIndex() const {
  return DARICParser::RuleStrFunc;
}

void DARICParser::StrFuncContext::copyFrom(StrFuncContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StrFuncTIMESContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StrFuncTIMESContext::TIMES() {
  return getToken(DARICParser::TIMES, 0);
}

DARICParser::StrFuncTIMESContext::StrFuncTIMESContext(StrFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StrFuncTIMESContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStrFuncTIMES(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StrFuncSTRSContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StrFuncSTRSContext::STRS() {
  return getToken(DARICParser::STRS, 0);
}

tree::TerminalNode* DARICParser::StrFuncSTRSContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::StrFuncSTRSContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::StrFuncSTRSContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::StrFuncSTRSContext::StrFuncSTRSContext(StrFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StrFuncSTRSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStrFuncSTRS(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StrFuncCHRSPContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StrFuncCHRSPContext::CHRS() {
  return getToken(DARICParser::CHRS, 0);
}

tree::TerminalNode* DARICParser::StrFuncCHRSPContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::StrFuncCHRSPContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::StrFuncCHRSPContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::StrFuncCHRSPContext::StrFuncCHRSPContext(StrFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StrFuncCHRSPContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStrFuncCHRSP(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StrFuncRIGHTSContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StrFuncRIGHTSContext::RIGHTS() {
  return getToken(DARICParser::RIGHTS, 0);
}

tree::TerminalNode* DARICParser::StrFuncRIGHTSContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::StrExprContext* DARICParser::StrFuncRIGHTSContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}

tree::TerminalNode* DARICParser::StrFuncRIGHTSContext::COMMA() {
  return getToken(DARICParser::COMMA, 0);
}

DARICParser::NumExprContext* DARICParser::StrFuncRIGHTSContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::StrFuncRIGHTSContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::StrFuncRIGHTSContext::StrFuncRIGHTSContext(StrFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StrFuncRIGHTSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStrFuncRIGHTS(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StrFuncLEFTSContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StrFuncLEFTSContext::LEFTS() {
  return getToken(DARICParser::LEFTS, 0);
}

tree::TerminalNode* DARICParser::StrFuncLEFTSContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::StrExprContext* DARICParser::StrFuncLEFTSContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}

tree::TerminalNode* DARICParser::StrFuncLEFTSContext::COMMA() {
  return getToken(DARICParser::COMMA, 0);
}

DARICParser::NumExprContext* DARICParser::StrFuncLEFTSContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::StrFuncLEFTSContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::StrFuncLEFTSContext::StrFuncLEFTSContext(StrFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StrFuncLEFTSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStrFuncLEFTS(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StrFuncCHRSContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StrFuncCHRSContext::CHRS() {
  return getToken(DARICParser::CHRS, 0);
}

DARICParser::NumExprContext* DARICParser::StrFuncCHRSContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

DARICParser::StrFuncCHRSContext::StrFuncCHRSContext(StrFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StrFuncCHRSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStrFuncCHRS(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StrFuncMIDS3Context ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StrFuncMIDS3Context::MIDS() {
  return getToken(DARICParser::MIDS, 0);
}

tree::TerminalNode* DARICParser::StrFuncMIDS3Context::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::StrExprContext* DARICParser::StrFuncMIDS3Context::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}

std::vector<tree::TerminalNode *> DARICParser::StrFuncMIDS3Context::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StrFuncMIDS3Context::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StrFuncMIDS3Context::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StrFuncMIDS3Context::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::StrFuncMIDS3Context::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::StrFuncMIDS3Context::StrFuncMIDS3Context(StrFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StrFuncMIDS3Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStrFuncMIDS3(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StrFuncSTRSHEXContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StrFuncSTRSHEXContext::STRS() {
  return getToken(DARICParser::STRS, 0);
}

tree::TerminalNode* DARICParser::StrFuncSTRSHEXContext::TILDE() {
  return getToken(DARICParser::TILDE, 0);
}

tree::TerminalNode* DARICParser::StrFuncSTRSHEXContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::StrFuncSTRSHEXContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::StrFuncSTRSHEXContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::StrFuncSTRSHEXContext::StrFuncSTRSHEXContext(StrFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StrFuncSTRSHEXContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStrFuncSTRSHEX(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StrFuncMIDS2Context ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StrFuncMIDS2Context::MIDS() {
  return getToken(DARICParser::MIDS, 0);
}

tree::TerminalNode* DARICParser::StrFuncMIDS2Context::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::StrExprContext* DARICParser::StrFuncMIDS2Context::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}

tree::TerminalNode* DARICParser::StrFuncMIDS2Context::COMMA() {
  return getToken(DARICParser::COMMA, 0);
}

DARICParser::NumExprContext* DARICParser::StrFuncMIDS2Context::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::StrFuncMIDS2Context::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::StrFuncMIDS2Context::StrFuncMIDS2Context(StrFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StrFuncMIDS2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStrFuncMIDS2(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StrFuncSTRINGSContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StrFuncSTRINGSContext::STRINGS() {
  return getToken(DARICParser::STRINGS, 0);
}

tree::TerminalNode* DARICParser::StrFuncSTRINGSContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::StrFuncSTRINGSContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::StrFuncSTRINGSContext::COMMA() {
  return getToken(DARICParser::COMMA, 0);
}

DARICParser::StrExprContext* DARICParser::StrFuncSTRINGSContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}

tree::TerminalNode* DARICParser::StrFuncSTRINGSContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::StrFuncSTRINGSContext::StrFuncSTRINGSContext(StrFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StrFuncSTRINGSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStrFuncSTRINGS(this);
  else
    return visitor->visitChildren(this);
}
DARICParser::StrFuncContext* DARICParser::strFunc() {
  StrFuncContext *_localctx = _tracker.createInstance<StrFuncContext>(_ctx, getState());
  enterRule(_localctx, 70, DARICParser::RuleStrFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(689);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncTIMESContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(633);
      match(DARICParser::TIMES);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncCHRSPContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(634);
      match(DARICParser::CHRS);
      setState(635);
      match(DARICParser::LPAREN);
      setState(636);
      numExpr(0);
      setState(637);
      match(DARICParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncCHRSContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(639);
      match(DARICParser::CHRS);
      setState(640);
      numExpr(0);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncLEFTSContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(641);
      match(DARICParser::LEFTS);
      setState(642);
      match(DARICParser::LPAREN);
      setState(643);
      strExpr(0);
      setState(644);
      match(DARICParser::COMMA);
      setState(645);
      numExpr(0);
      setState(646);
      match(DARICParser::RPAREN);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncMIDS3Context>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(648);
      match(DARICParser::MIDS);
      setState(649);
      match(DARICParser::LPAREN);
      setState(650);
      strExpr(0);
      setState(651);
      match(DARICParser::COMMA);
      setState(652);
      numExpr(0);
      setState(653);
      match(DARICParser::COMMA);
      setState(654);
      numExpr(0);
      setState(655);
      match(DARICParser::RPAREN);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncMIDS2Context>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(657);
      match(DARICParser::MIDS);
      setState(658);
      match(DARICParser::LPAREN);
      setState(659);
      strExpr(0);
      setState(660);
      match(DARICParser::COMMA);
      setState(661);
      numExpr(0);
      setState(662);
      match(DARICParser::RPAREN);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncRIGHTSContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(664);
      match(DARICParser::RIGHTS);
      setState(665);
      match(DARICParser::LPAREN);
      setState(666);
      strExpr(0);
      setState(667);
      match(DARICParser::COMMA);
      setState(668);
      numExpr(0);
      setState(669);
      match(DARICParser::RPAREN);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncSTRSContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(671);
      match(DARICParser::STRS);
      setState(672);
      match(DARICParser::LPAREN);
      setState(673);
      numExpr(0);
      setState(674);
      match(DARICParser::RPAREN);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncSTRSHEXContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(676);
      match(DARICParser::STRS);
      setState(677);
      match(DARICParser::TILDE);
      setState(678);
      match(DARICParser::LPAREN);
      setState(679);
      numExpr(0);
      setState(680);
      match(DARICParser::RPAREN);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncSTRINGSContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(682);
      match(DARICParser::STRINGS);
      setState(683);
      match(DARICParser::LPAREN);
      setState(684);
      numExpr(0);
      setState(685);
      match(DARICParser::COMMA);
      setState(686);
      strExpr(0);
      setState(687);
      match(DARICParser::RPAREN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

DARICParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StringContext::STRINGLITERAL() {
  return getToken(DARICParser::STRINGLITERAL, 0);
}


size_t DARICParser::StringContext::getRuleIndex() const {
  return DARICParser::RuleString;
}


antlrcpp::Any DARICParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StringContext* DARICParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 72, DARICParser::RuleString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(691);
    match(DARICParser::STRINGLITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StrExprContext ------------------------------------------------------------------

DARICParser::StrExprContext::StrExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DARICParser::StringContext* DARICParser::StrExprContext::string() {
  return getRuleContext<DARICParser::StringContext>(0);
}

DARICParser::StrVarContext* DARICParser::StrExprContext::strVar() {
  return getRuleContext<DARICParser::StrVarContext>(0);
}

DARICParser::StrFuncContext* DARICParser::StrExprContext::strFunc() {
  return getRuleContext<DARICParser::StrFuncContext>(0);
}

std::vector<DARICParser::StrExprContext *> DARICParser::StrExprContext::strExpr() {
  return getRuleContexts<DARICParser::StrExprContext>();
}

DARICParser::StrExprContext* DARICParser::StrExprContext::strExpr(size_t i) {
  return getRuleContext<DARICParser::StrExprContext>(i);
}

tree::TerminalNode* DARICParser::StrExprContext::PLUS() {
  return getToken(DARICParser::PLUS, 0);
}


size_t DARICParser::StrExprContext::getRuleIndex() const {
  return DARICParser::RuleStrExpr;
}


antlrcpp::Any DARICParser::StrExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStrExpr(this);
  else
    return visitor->visitChildren(this);
}


DARICParser::StrExprContext* DARICParser::strExpr() {
   return strExpr(0);
}

DARICParser::StrExprContext* DARICParser::strExpr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DARICParser::StrExprContext *_localctx = _tracker.createInstance<StrExprContext>(_ctx, parentState);
  DARICParser::StrExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 74;
  enterRecursionRule(_localctx, 74, DARICParser::RuleStrExpr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(697);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::STRINGLITERAL: {
        setState(694);
        string();
        break;
      }

      case DARICParser::VARIABLE_STRING:
      case DARICParser::VARIABLE_TYPE: {
        setState(695);
        strVar();
        break;
      }

      case DARICParser::TIMES:
      case DARICParser::STRS:
      case DARICParser::STRINGS:
      case DARICParser::CHRS:
      case DARICParser::LEFTS:
      case DARICParser::MIDS:
      case DARICParser::RIGHTS: {
        setState(696);
        strFunc();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(704);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StrExprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStrExpr);
        setState(699);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(700);
        match(DARICParser::PLUS);
        setState(701);
        strExpr(2); 
      }
      setState(706);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NumFuncContext ------------------------------------------------------------------

DARICParser::NumFuncContext::NumFuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DARICParser::NumFuncContext::getRuleIndex() const {
  return DARICParser::RuleNumFunc;
}

void DARICParser::NumFuncContext::copyFrom(NumFuncContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NumFuncRND0Context ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncRND0Context::RND0() {
  return getToken(DARICParser::RND0, 0);
}

DARICParser::NumFuncRND0Context::NumFuncRND0Context(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncRND0Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncRND0(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncRNDRANGEContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncRNDRANGEContext::RND() {
  return getToken(DARICParser::RND, 0);
}

tree::TerminalNode* DARICParser::NumFuncRNDRANGEContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncRNDRANGEContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncRNDRANGEContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncRNDRANGEContext::NumFuncRNDRANGEContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncRNDRANGEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncRNDRANGE(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncRND1Context ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncRND1Context::RND1() {
  return getToken(DARICParser::RND1, 0);
}

DARICParser::NumFuncRND1Context::NumFuncRND1Context(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncRND1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncRND1(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncLNContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncLNContext::LN() {
  return getToken(DARICParser::LN, 0);
}

tree::TerminalNode* DARICParser::NumFuncLNContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncLNContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncLNContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncLNContext::NumFuncLNContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncLNContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncLN(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncSINContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncSINContext::SIN() {
  return getToken(DARICParser::SIN, 0);
}

tree::TerminalNode* DARICParser::NumFuncSINContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncSINContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncSINContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncSINContext::NumFuncSINContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncSINContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncSIN(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncRADContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncRADContext::RAD() {
  return getToken(DARICParser::RAD, 0);
}

tree::TerminalNode* DARICParser::NumFuncRADContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncRADContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncRADContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncRADContext::NumFuncRADContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncRADContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncRAD(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncSQRContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncSQRContext::SQR() {
  return getToken(DARICParser::SQR, 0);
}

tree::TerminalNode* DARICParser::NumFuncSQRContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncSQRContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncSQRContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncSQRContext::NumFuncSQRContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncSQRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncSQR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncLENContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncLENContext::LEN() {
  return getToken(DARICParser::LEN, 0);
}

tree::TerminalNode* DARICParser::NumFuncLENContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::StrExprContext* DARICParser::NumFuncLENContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncLENContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncLENContext::NumFuncLENContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncLENContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncLEN(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncACSContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncACSContext::ACS() {
  return getToken(DARICParser::ACS, 0);
}

tree::TerminalNode* DARICParser::NumFuncACSContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncACSContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncACSContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncACSContext::NumFuncACSContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncACSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncACS(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncPIContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncPIContext::PI() {
  return getToken(DARICParser::PI, 0);
}

DARICParser::NumFuncPIContext::NumFuncPIContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncPIContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncPI(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncRNDContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncRNDContext::RND() {
  return getToken(DARICParser::RND, 0);
}

DARICParser::NumFuncRNDContext::NumFuncRNDContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncRNDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncRND(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncINSTR3Context ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncINSTR3Context::INSTR() {
  return getToken(DARICParser::INSTR, 0);
}

tree::TerminalNode* DARICParser::NumFuncINSTR3Context::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

std::vector<DARICParser::StrExprContext *> DARICParser::NumFuncINSTR3Context::strExpr() {
  return getRuleContexts<DARICParser::StrExprContext>();
}

DARICParser::StrExprContext* DARICParser::NumFuncINSTR3Context::strExpr(size_t i) {
  return getRuleContext<DARICParser::StrExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::NumFuncINSTR3Context::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::NumFuncINSTR3Context::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

DARICParser::NumExprContext* DARICParser::NumFuncINSTR3Context::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncINSTR3Context::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncINSTR3Context::NumFuncINSTR3Context(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncINSTR3Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncINSTR3(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncINSTR2Context ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncINSTR2Context::INSTR() {
  return getToken(DARICParser::INSTR, 0);
}

tree::TerminalNode* DARICParser::NumFuncINSTR2Context::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

std::vector<DARICParser::StrExprContext *> DARICParser::NumFuncINSTR2Context::strExpr() {
  return getRuleContexts<DARICParser::StrExprContext>();
}

DARICParser::StrExprContext* DARICParser::NumFuncINSTR2Context::strExpr(size_t i) {
  return getRuleContext<DARICParser::StrExprContext>(i);
}

tree::TerminalNode* DARICParser::NumFuncINSTR2Context::COMMA() {
  return getToken(DARICParser::COMMA, 0);
}

tree::TerminalNode* DARICParser::NumFuncINSTR2Context::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncINSTR2Context::NumFuncINSTR2Context(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncINSTR2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncINSTR2(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncTANContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncTANContext::TAN() {
  return getToken(DARICParser::TAN, 0);
}

tree::TerminalNode* DARICParser::NumFuncTANContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncTANContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncTANContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncTANContext::NumFuncTANContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncTANContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncTAN(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncVALContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncVALContext::VAL() {
  return getToken(DARICParser::VAL, 0);
}

tree::TerminalNode* DARICParser::NumFuncVALContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::StrExprContext* DARICParser::NumFuncVALContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncVALContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncVALContext::NumFuncVALContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncVALContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncVAL(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncATNContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncATNContext::ATN() {
  return getToken(DARICParser::ATN, 0);
}

tree::TerminalNode* DARICParser::NumFuncATNContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncATNContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncATNContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncATNContext::NumFuncATNContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncATNContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncATN(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncSGNContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncSGNContext::SGN() {
  return getToken(DARICParser::SGN, 0);
}

tree::TerminalNode* DARICParser::NumFuncSGNContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncSGNContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncSGNContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncSGNContext::NumFuncSGNContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncSGNContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncSGN(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncEXPContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncEXPContext::EXP() {
  return getToken(DARICParser::EXP, 0);
}

tree::TerminalNode* DARICParser::NumFuncEXPContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncEXPContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncEXPContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncEXPContext::NumFuncEXPContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncEXPContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncEXP(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncTIMEContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncTIMEContext::TIME() {
  return getToken(DARICParser::TIME, 0);
}

DARICParser::NumFuncTIMEContext::NumFuncTIMEContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncTIMEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncTIME(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncABSContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncABSContext::ABS() {
  return getToken(DARICParser::ABS, 0);
}

tree::TerminalNode* DARICParser::NumFuncABSContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncABSContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncABSContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncABSContext::NumFuncABSContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncABSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncABS(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncASCContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncASCContext::ASC() {
  return getToken(DARICParser::ASC, 0);
}

tree::TerminalNode* DARICParser::NumFuncASCContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::StrExprContext* DARICParser::NumFuncASCContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncASCContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncASCContext::NumFuncASCContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncASCContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncASC(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncDEGContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncDEGContext::DEG() {
  return getToken(DARICParser::DEG, 0);
}

tree::TerminalNode* DARICParser::NumFuncDEGContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncDEGContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncDEGContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncDEGContext::NumFuncDEGContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncDEGContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncDEG(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncCOSContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncCOSContext::COS() {
  return getToken(DARICParser::COS, 0);
}

tree::TerminalNode* DARICParser::NumFuncCOSContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncCOSContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncCOSContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncCOSContext::NumFuncCOSContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncCOSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncCOS(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncLOGContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncLOGContext::LOG() {
  return getToken(DARICParser::LOG, 0);
}

tree::TerminalNode* DARICParser::NumFuncLOGContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncLOGContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncLOGContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncLOGContext::NumFuncLOGContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncLOGContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncLOG(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncASNContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncASNContext::ASN() {
  return getToken(DARICParser::ASN, 0);
}

tree::TerminalNode* DARICParser::NumFuncASNContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncASNContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncASNContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncASNContext::NumFuncASNContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncASNContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncASN(this);
  else
    return visitor->visitChildren(this);
}
DARICParser::NumFuncContext* DARICParser::numFunc() {
  NumFuncContext *_localctx = _tracker.createInstance<NumFuncContext>(_ctx, getState());
  enterRule(_localctx, 76, DARICParser::RuleNumFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(818);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncPIContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(707);
      match(DARICParser::PI);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncTIMEContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(708);
      match(DARICParser::TIME);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRNDContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(709);
      match(DARICParser::RND);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRND0Context>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(710);
      match(DARICParser::RND0);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRND1Context>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(711);
      match(DARICParser::RND1);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRNDRANGEContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(712);
      match(DARICParser::RND);
      setState(713);
      match(DARICParser::LPAREN);
      setState(714);
      numExpr(0);
      setState(715);
      match(DARICParser::RPAREN);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncLNContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(717);
      match(DARICParser::LN);
      setState(718);
      match(DARICParser::LPAREN);
      setState(719);
      numExpr(0);
      setState(720);
      match(DARICParser::RPAREN);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncLOGContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(722);
      match(DARICParser::LOG);
      setState(723);
      match(DARICParser::LPAREN);
      setState(724);
      numExpr(0);
      setState(725);
      match(DARICParser::RPAREN);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncEXPContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(727);
      match(DARICParser::EXP);
      setState(728);
      match(DARICParser::LPAREN);
      setState(729);
      numExpr(0);
      setState(730);
      match(DARICParser::RPAREN);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncATNContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(732);
      match(DARICParser::ATN);
      setState(733);
      match(DARICParser::LPAREN);
      setState(734);
      numExpr(0);
      setState(735);
      match(DARICParser::RPAREN);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncTANContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(737);
      match(DARICParser::TAN);
      setState(738);
      match(DARICParser::LPAREN);
      setState(739);
      numExpr(0);
      setState(740);
      match(DARICParser::RPAREN);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncCOSContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(742);
      match(DARICParser::COS);
      setState(743);
      match(DARICParser::LPAREN);
      setState(744);
      numExpr(0);
      setState(745);
      match(DARICParser::RPAREN);
      break;
    }

    case 13: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSINContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(747);
      match(DARICParser::SIN);
      setState(748);
      match(DARICParser::LPAREN);
      setState(749);
      numExpr(0);
      setState(750);
      match(DARICParser::RPAREN);
      break;
    }

    case 14: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncABSContext>(_localctx));
      enterOuterAlt(_localctx, 14);
      setState(752);
      match(DARICParser::ABS);
      setState(753);
      match(DARICParser::LPAREN);
      setState(754);
      numExpr(0);
      setState(755);
      match(DARICParser::RPAREN);
      break;
    }

    case 15: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncACSContext>(_localctx));
      enterOuterAlt(_localctx, 15);
      setState(757);
      match(DARICParser::ACS);
      setState(758);
      match(DARICParser::LPAREN);
      setState(759);
      numExpr(0);
      setState(760);
      match(DARICParser::RPAREN);
      break;
    }

    case 16: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncASNContext>(_localctx));
      enterOuterAlt(_localctx, 16);
      setState(762);
      match(DARICParser::ASN);
      setState(763);
      match(DARICParser::LPAREN);
      setState(764);
      numExpr(0);
      setState(765);
      match(DARICParser::RPAREN);
      break;
    }

    case 17: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncDEGContext>(_localctx));
      enterOuterAlt(_localctx, 17);
      setState(767);
      match(DARICParser::DEG);
      setState(768);
      match(DARICParser::LPAREN);
      setState(769);
      numExpr(0);
      setState(770);
      match(DARICParser::RPAREN);
      break;
    }

    case 18: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRADContext>(_localctx));
      enterOuterAlt(_localctx, 18);
      setState(772);
      match(DARICParser::RAD);
      setState(773);
      match(DARICParser::LPAREN);
      setState(774);
      numExpr(0);
      setState(775);
      match(DARICParser::RPAREN);
      break;
    }

    case 19: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSQRContext>(_localctx));
      enterOuterAlt(_localctx, 19);
      setState(777);
      match(DARICParser::SQR);
      setState(778);
      match(DARICParser::LPAREN);
      setState(779);
      numExpr(0);
      setState(780);
      match(DARICParser::RPAREN);
      break;
    }

    case 20: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSGNContext>(_localctx));
      enterOuterAlt(_localctx, 20);
      setState(782);
      match(DARICParser::SGN);
      setState(783);
      match(DARICParser::LPAREN);
      setState(784);
      numExpr(0);
      setState(785);
      match(DARICParser::RPAREN);
      break;
    }

    case 21: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncASCContext>(_localctx));
      enterOuterAlt(_localctx, 21);
      setState(787);
      match(DARICParser::ASC);
      setState(788);
      match(DARICParser::LPAREN);
      setState(789);
      strExpr(0);
      setState(790);
      match(DARICParser::RPAREN);
      break;
    }

    case 22: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncLENContext>(_localctx));
      enterOuterAlt(_localctx, 22);
      setState(792);
      match(DARICParser::LEN);
      setState(793);
      match(DARICParser::LPAREN);
      setState(794);
      strExpr(0);
      setState(795);
      match(DARICParser::RPAREN);
      break;
    }

    case 23: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncINSTR2Context>(_localctx));
      enterOuterAlt(_localctx, 23);
      setState(797);
      match(DARICParser::INSTR);
      setState(798);
      match(DARICParser::LPAREN);
      setState(799);
      strExpr(0);
      setState(800);
      match(DARICParser::COMMA);
      setState(801);
      strExpr(0);
      setState(802);
      match(DARICParser::RPAREN);
      break;
    }

    case 24: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncINSTR3Context>(_localctx));
      enterOuterAlt(_localctx, 24);
      setState(804);
      match(DARICParser::INSTR);
      setState(805);
      match(DARICParser::LPAREN);
      setState(806);
      strExpr(0);
      setState(807);
      match(DARICParser::COMMA);
      setState(808);
      strExpr(0);
      setState(809);
      match(DARICParser::COMMA);
      setState(810);
      numExpr(0);
      setState(811);
      match(DARICParser::RPAREN);
      break;
    }

    case 25: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncVALContext>(_localctx));
      enterOuterAlt(_localctx, 25);
      setState(813);
      match(DARICParser::VAL);
      setState(814);
      match(DARICParser::LPAREN);
      setState(815);
      strExpr(0);
      setState(816);
      match(DARICParser::RPAREN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumExprContext ------------------------------------------------------------------

DARICParser::NumExprContext::NumExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DARICParser::NumExprContext::getRuleIndex() const {
  return DARICParser::RuleNumExpr;
}

void DARICParser::NumExprContext::copyFrom(NumExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NumExprNumberContext ------------------------------------------------------------------

DARICParser::NumberContext* DARICParser::NumExprNumberContext::number() {
  return getRuleContext<DARICParser::NumberContext>(0);
}

DARICParser::NumExprNumberContext::NumExprNumberContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprNumber(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprFuncContext ------------------------------------------------------------------

DARICParser::NumFuncContext* DARICParser::NumExprFuncContext::numFunc() {
  return getRuleContext<DARICParser::NumFuncContext>(0);
}

DARICParser::NumExprFuncContext::NumExprFuncContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprFuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprFunc(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprSubtractContext ------------------------------------------------------------------

std::vector<DARICParser::NumExprContext *> DARICParser::NumExprSubtractContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumExprSubtractContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumExprSubtractContext::MINUS() {
  return getToken(DARICParser::MINUS, 0);
}

DARICParser::NumExprSubtractContext::NumExprSubtractContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprSubtractContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprSubtract(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprVarContext ------------------------------------------------------------------

DARICParser::NumVarContext* DARICParser::NumExprVarContext::numVar() {
  return getRuleContext<DARICParser::NumVarContext>(0);
}

DARICParser::NumExprVarContext::NumExprVarContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprEORContext ------------------------------------------------------------------

std::vector<DARICParser::NumExprContext *> DARICParser::NumExprEORContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumExprEORContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumExprEORContext::EOR() {
  return getToken(DARICParser::EOR, 0);
}

DARICParser::NumExprEORContext::NumExprEORContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprEORContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprEOR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprHatContext ------------------------------------------------------------------

std::vector<DARICParser::NumExprContext *> DARICParser::NumExprHatContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumExprHatContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumExprHatContext::HAT() {
  return getToken(DARICParser::HAT, 0);
}

DARICParser::NumExprHatContext::NumExprHatContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprHatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprHat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprNumRelopContext ------------------------------------------------------------------

std::vector<DARICParser::NumExprContext *> DARICParser::NumExprNumRelopContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumExprNumRelopContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

DARICParser::CompareContext* DARICParser::NumExprNumRelopContext::compare() {
  return getRuleContext<DARICParser::CompareContext>(0);
}

DARICParser::NumExprNumRelopContext::NumExprNumRelopContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprNumRelopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprNumRelop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprStrRelopContext ------------------------------------------------------------------

std::vector<DARICParser::StrExprContext *> DARICParser::NumExprStrRelopContext::strExpr() {
  return getRuleContexts<DARICParser::StrExprContext>();
}

DARICParser::StrExprContext* DARICParser::NumExprStrRelopContext::strExpr(size_t i) {
  return getRuleContext<DARICParser::StrExprContext>(i);
}

DARICParser::CompareContext* DARICParser::NumExprStrRelopContext::compare() {
  return getRuleContext<DARICParser::CompareContext>(0);
}

DARICParser::NumExprStrRelopContext::NumExprStrRelopContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprStrRelopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprStrRelop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprSHRContext ------------------------------------------------------------------

std::vector<DARICParser::NumExprContext *> DARICParser::NumExprSHRContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumExprSHRContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumExprSHRContext::SHR() {
  return getToken(DARICParser::SHR, 0);
}

DARICParser::NumExprSHRContext::NumExprSHRContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprSHRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprSHR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprMultiplyContext ------------------------------------------------------------------

std::vector<DARICParser::NumExprContext *> DARICParser::NumExprMultiplyContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumExprMultiplyContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumExprMultiplyContext::MULTIPLY() {
  return getToken(DARICParser::MULTIPLY, 0);
}

DARICParser::NumExprMultiplyContext::NumExprMultiplyContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprMultiplyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprMultiply(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprMODContext ------------------------------------------------------------------

std::vector<DARICParser::NumExprContext *> DARICParser::NumExprMODContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumExprMODContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumExprMODContext::MOD() {
  return getToken(DARICParser::MOD, 0);
}

DARICParser::NumExprMODContext::NumExprMODContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprMODContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprMOD(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprNOTContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumExprNOTContext::NOT() {
  return getToken(DARICParser::NOT, 0);
}

DARICParser::NumExprContext* DARICParser::NumExprNOTContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

DARICParser::NumExprNOTContext::NumExprNOTContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprNOTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprNOT(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprNestedContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumExprNestedContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumExprNestedContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumExprNestedContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumExprNestedContext::NumExprNestedContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprNestedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprNested(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprSHLContext ------------------------------------------------------------------

std::vector<DARICParser::NumExprContext *> DARICParser::NumExprSHLContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumExprSHLContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumExprSHLContext::SHL() {
  return getToken(DARICParser::SHL, 0);
}

DARICParser::NumExprSHLContext::NumExprSHLContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprSHLContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprSHL(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprANDContext ------------------------------------------------------------------

std::vector<DARICParser::NumExprContext *> DARICParser::NumExprANDContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumExprANDContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumExprANDContext::AND() {
  return getToken(DARICParser::AND, 0);
}

DARICParser::NumExprANDContext::NumExprANDContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprANDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprAND(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprPlusContext ------------------------------------------------------------------

std::vector<DARICParser::NumExprContext *> DARICParser::NumExprPlusContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumExprPlusContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumExprPlusContext::PLUS() {
  return getToken(DARICParser::PLUS, 0);
}

DARICParser::NumExprPlusContext::NumExprPlusContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprPlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprPlus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprORContext ------------------------------------------------------------------

std::vector<DARICParser::NumExprContext *> DARICParser::NumExprORContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumExprORContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumExprORContext::OR() {
  return getToken(DARICParser::OR, 0);
}

DARICParser::NumExprORContext::NumExprORContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprORContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprOR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprDivideContext ------------------------------------------------------------------

std::vector<DARICParser::NumExprContext *> DARICParser::NumExprDivideContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumExprDivideContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumExprDivideContext::DIVIDE() {
  return getToken(DARICParser::DIVIDE, 0);
}

DARICParser::NumExprDivideContext::NumExprDivideContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprDivideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprDivide(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprDIVContext ------------------------------------------------------------------

std::vector<DARICParser::NumExprContext *> DARICParser::NumExprDIVContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumExprDIVContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumExprDIVContext::DIV() {
  return getToken(DARICParser::DIV, 0);
}

DARICParser::NumExprDIVContext::NumExprDIVContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprDIVContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprDIV(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::NumExprContext* DARICParser::numExpr() {
   return numExpr(0);
}

DARICParser::NumExprContext* DARICParser::numExpr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DARICParser::NumExprContext *_localctx = _tracker.createInstance<NumExprContext>(_ctx, parentState);
  DARICParser::NumExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 78;
  enterRecursionRule(_localctx, 78, DARICParser::RuleNumExpr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(834);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NumExprNumberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(821);
      number();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NumExprVarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(822);
      numVar();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NumExprFuncContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(823);
      numFunc();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<NumExprNOTContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(824);
      match(DARICParser::NOT);
      setState(825);
      numExpr(16);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NumExprNestedContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(826);
      match(DARICParser::LPAREN);
      setState(827);
      numExpr(0);
      setState(828);
      match(DARICParser::RPAREN);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<NumExprStrRelopContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(830);
      strExpr(0);
      setState(831);
      compare();
      setState(832);
      strExpr(0);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(878);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(876);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<NumExprHatContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(836);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(837);
          match(DARICParser::HAT);
          setState(838);
          numExpr(14);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<NumExprMultiplyContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(839);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(840);
          match(DARICParser::MULTIPLY);
          setState(841);
          numExpr(14);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<NumExprDivideContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(842);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(843);
          match(DARICParser::DIVIDE);
          setState(844);
          numExpr(13);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<NumExprDIVContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(845);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(846);
          match(DARICParser::DIV);
          setState(847);
          numExpr(12);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<NumExprMODContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(848);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(849);
          match(DARICParser::MOD);
          setState(850);
          numExpr(11);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<NumExprPlusContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(851);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(852);
          match(DARICParser::PLUS);
          setState(853);
          numExpr(10);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<NumExprSubtractContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(854);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(855);
          match(DARICParser::MINUS);
          setState(856);
          numExpr(9);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<NumExprNumRelopContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(857);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(858);
          compare();
          setState(859);
          numExpr(8);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<NumExprSHLContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(861);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(862);
          match(DARICParser::SHL);
          setState(863);
          numExpr(6);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<NumExprSHRContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(864);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(865);
          match(DARICParser::SHR);
          setState(866);
          numExpr(5);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<NumExprANDContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(867);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(868);
          match(DARICParser::AND);
          setState(869);
          numExpr(4);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<NumExprORContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(870);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(871);
          match(DARICParser::OR);
          setState(872);
          numExpr(3);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<NumExprEORContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(873);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(874);
          match(DARICParser::EOR);
          setState(875);
          numExpr(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(880);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CompareContext ------------------------------------------------------------------

DARICParser::CompareContext::CompareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t DARICParser::CompareContext::getRuleIndex() const {
  return DARICParser::RuleCompare;
}

void DARICParser::CompareContext::copyFrom(CompareContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CompareLEContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::CompareLEContext::LE() {
  return getToken(DARICParser::LE, 0);
}

DARICParser::CompareLEContext::CompareLEContext(CompareContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::CompareLEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitCompareLE(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompareLTContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::CompareLTContext::LT() {
  return getToken(DARICParser::LT, 0);
}

DARICParser::CompareLTContext::CompareLTContext(CompareContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::CompareLTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitCompareLT(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompareNEContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::CompareNEContext::NE() {
  return getToken(DARICParser::NE, 0);
}

DARICParser::CompareNEContext::CompareNEContext(CompareContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::CompareNEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitCompareNE(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompareGEContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::CompareGEContext::GE() {
  return getToken(DARICParser::GE, 0);
}

DARICParser::CompareGEContext::CompareGEContext(CompareContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::CompareGEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitCompareGE(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompareGTContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::CompareGTContext::GT() {
  return getToken(DARICParser::GT, 0);
}

DARICParser::CompareGTContext::CompareGTContext(CompareContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::CompareGTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitCompareGT(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompareEQContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::CompareEQContext::EQ() {
  return getToken(DARICParser::EQ, 0);
}

DARICParser::CompareEQContext::CompareEQContext(CompareContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::CompareEQContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitCompareEQ(this);
  else
    return visitor->visitChildren(this);
}
DARICParser::CompareContext* DARICParser::compare() {
  CompareContext *_localctx = _tracker.createInstance<CompareContext>(_ctx, getState());
  enterRule(_localctx, 80, DARICParser::RuleCompare);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(887);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::EQ: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareEQContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(881);
        match(DARICParser::EQ);
        break;
      }

      case DARICParser::NE: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareNEContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(882);
        match(DARICParser::NE);
        break;
      }

      case DARICParser::GT: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareGTContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(883);
        match(DARICParser::GT);
        break;
      }

      case DARICParser::GE: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareGEContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(884);
        match(DARICParser::GE);
        break;
      }

      case DARICParser::LT: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareLTContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(885);
        match(DARICParser::LT);
        break;
      }

      case DARICParser::LE: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareLEContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(886);
        match(DARICParser::LE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool DARICParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 37: return strExprSempred(dynamic_cast<StrExprContext *>(context), predicateIndex);
    case 39: return numExprSempred(dynamic_cast<NumExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool DARICParser::strExprSempred(StrExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool DARICParser::numExprSempred(NumExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 14);
    case 2: return precpred(_ctx, 13);
    case 3: return precpred(_ctx, 12);
    case 4: return precpred(_ctx, 11);
    case 5: return precpred(_ctx, 10);
    case 6: return precpred(_ctx, 9);
    case 7: return precpred(_ctx, 8);
    case 8: return precpred(_ctx, 7);
    case 9: return precpred(_ctx, 5);
    case 10: return precpred(_ctx, 4);
    case 11: return precpred(_ctx, 3);
    case 12: return precpred(_ctx, 2);
    case 13: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> DARICParser::_decisionToDFA;
atn::PredictionContextCache DARICParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN DARICParser::_atn;
std::vector<uint16_t> DARICParser::_serializedATN;

std::vector<std::string> DARICParser::_ruleNames = {
  "prog", "line", "content", "body", "bodyStar", "linenumber", "stmt", "when", 
  "fnName", "literal", "var", "typeVar", "numVar", "strVar", "justVar", 
  "justNumberVar", "varName", "varNameInteger", "varNameString", "varNameType", 
  "varDecl", "varDeclWithDimension", "varList", "functionVarList", "functionParList", 
  "exprList", "printListItem", "printStartingTicks", "printList", "expr", 
  "number", "numberInteger", "numberHex", "numberBinary", "numberFloat", 
  "strFunc", "string", "strExpr", "numFunc", "numExpr", "compare"
};

std::vector<std::string> DARICParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "'='", "'<>'", "'>'", "'>='", "'<'", "'<='", "", "", "", "", "", "", "'^'", 
  "'+'", "'-'", "'*'", "'/'", "'<<'", "'>>'", "'+='", "'-='", "'*='", "'/='", 
  "'<<='", "'>>='", "", "'''", "'~'", "':'", "','", "'$'", "'('", "'%'", 
  "')'", "';'", "'_'"
};

std::vector<std::string> DARICParser::_symbolicNames = {
  "", "BREAKPOINT", "CASE", "CHAIN", "DATA", "DEF", "DIM", "ELSE", "END", 
  "ENDCASE", "ENDIF", "ENDFN", "ENDPROC", "ENDWHILE", "FOR", "FN", "IF", 
  "IN", "INPUT", "GLOBAL", "LOCAL", "LET", "NEXT", "OF", "OTHERWISE", "PRINT", 
  "PROC", "READ", "REM", "REPEAT", "RESTORE", "RETURN", "SPC", "STEP", "THEN", 
  "TO", "TRACEON", "TRACEOFF", "TYPE", "UNTIL", "WHEN", "WHILE", "TIME", 
  "PI", "SQR", "LN", "LOG", "EXP", "ATN", "TAN", "COS", "SIN", "ABS", "ACS", 
  "ASN", "DEG", "RAD", "SGN", "ASC", "LEN", "INSTR", "VAL", "TIMES", "STRS", 
  "STRINGS", "CHRS", "LEFTS", "MIDS", "RIGHTS", "RND", "RND0", "RND1", "EQ", 
  "NE", "GT", "GE", "LT", "LE", "NOT", "AND", "OR", "EOR", "MOD", "DIV", 
  "HAT", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "SHL", "SHR", "PLUS_E", 
  "MINUS_E", "MULTIPLY_E", "DIVIDE_E", "SHL_E", "SHR_E", "NEWLINE", "TICK", 
  "TILDE", "COLON", "COMMA", "DOLLAR", "LPAREN", "PERCENT", "RPAREN", "SEMICOLON", 
  "UNDERSCORE", "COMMENT", "STRINGLITERAL", "PROC_NAME", "FN_INTEGER", "FN_FLOAT", 
  "FN_STRING", "VARIABLE_FLOAT", "VARIABLE_INTEGER", "VARIABLE_STRING", 
  "VARIABLE_TYPE", "NAME", "HEXNUMBER", "BINARYNUMBER", "NUMBER", "FLOAT", 
  "ALPHA", "DIGIT", "WS"
};

dfa::Vocabulary DARICParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> DARICParser::_tokenNames;

DARICParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x7f, 0x37c, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x3, 0x2, 0x7, 0x2, 0x56, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x59, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x67, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x6c, 0xa, 0x4, 0x7, 0x4, 0x6e, 0xa, 0x4, 0xc, 0x4, 
    0xe, 0x4, 0x71, 0xb, 0x4, 0x3, 0x4, 0x5, 0x4, 0x74, 0xa, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x5, 0x5, 0x78, 0xa, 0x5, 0x3, 0x6, 0x7, 0x6, 0x7b, 0xa, 0x6, 
    0xc, 0x6, 0xe, 0x6, 0x7e, 0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x6, 0x8, 0x88, 0xa, 0x8, 
    0xd, 0x8, 0xe, 0x8, 0x89, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x8e, 0xa, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x7, 0x8, 0x98, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x9b, 0xb, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0xa1, 0xa, 0x8, 0xc, 
    0x8, 0xe, 0x8, 0xa4, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0xa9, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xad, 0xa, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xb3, 0xa, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x5, 0x8, 0xb7, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xc0, 0xa, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x5, 0x8, 0xc4, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0xcb, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xd4, 0xa, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xdb, 0xa, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xe8, 0xa, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xef, 0xa, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xf4, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0xf9, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 
    0x8, 0xfe, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0x106, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x10a, 
    0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 0x10d, 0xa, 0x8, 0x5, 0x8, 0x10f, 0xa, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x7, 0x8, 0x119, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x11c, 
    0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x127, 0xa, 0x8, 0xc, 0x8, 0xe, 
    0x8, 0x12a, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x7, 0x8, 0x131, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x134, 0xb, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x5, 0x8, 0x138, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0x13d, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x7, 0x8, 0x144, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x147, 0xb, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x152, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x155, 
    0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x15b, 0xa, 
    0x8, 0xc, 0x8, 0xe, 0x8, 0x15e, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x165, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x168, 
    0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x16c, 0xa, 0x8, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x172, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 
    0x175, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xb, 0x3, 0xb, 0x5, 0xb, 0x17e, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x5, 0xc, 0x183, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x18d, 0xa, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x7, 0xe, 0x191, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x194, 0xb, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 
    0xe, 0x19c, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x1a0, 0xa, 0xe, 
    0xc, 0xe, 0xe, 0xe, 0x1a3, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1ba, 0xa, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1c0, 0xa, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1c6, 0xa, 0xe, 0x3, 0xe, 0x5, 0xe, 
    0x1c9, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x5, 0xf, 0x1d1, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x1d5, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x1d8, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 
    0xf, 0x1e3, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x1e8, 
    0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x1ec, 0xa, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x5, 0x16, 0x1fc, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0x200, 
    0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x203, 0xb, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x5, 0x16, 0x20e, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x215, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 
    0x218, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x7, 0x18, 0x21f, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x222, 0xb, 0x18, 
    0x3, 0x19, 0x5, 0x19, 0x225, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x5, 0x19, 0x22a, 0xa, 0x19, 0x3, 0x19, 0x7, 0x19, 0x22d, 0xa, 0x19, 
    0xc, 0x19, 0xe, 0x19, 0x230, 0xb, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x7, 0x1a, 0x235, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x238, 0xb, 0x1a, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x23d, 0xa, 0x1b, 0xc, 0x1b, 
    0xe, 0x1b, 0x240, 0xb, 0x1b, 0x3, 0x1c, 0x5, 0x1c, 0x243, 0xa, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x24d, 0xa, 0x1c, 0x3, 0x1d, 0x6, 0x1d, 
    0x250, 0xa, 0x1d, 0xd, 0x1d, 0xe, 0x1d, 0x251, 0x3, 0x1e, 0x5, 0x1e, 
    0x255, 0xa, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x258, 0xa, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x25d, 0xa, 0x1e, 0x7, 0x1e, 0x25f, 
    0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x262, 0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 
    0x5, 0x1f, 0x266, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x5, 0x20, 0x26c, 0xa, 0x20, 0x3, 0x21, 0x5, 0x21, 0x26f, 0xa, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 
    0x24, 0x5, 0x24, 0x278, 0xa, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x2b4, 0xa, 0x25, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x2bc, 
    0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x2c1, 0xa, 0x27, 
    0xc, 0x27, 0xe, 0x27, 0x2c4, 0xb, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x335, 0xa, 0x28, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x5, 0x29, 0x345, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x36f, 
    0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 0x372, 0xb, 0x29, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x37a, 0xa, 0x2a, 
    0x3, 0x2a, 0x2, 0x4, 0x4c, 0x50, 0x2b, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 
    0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x2, 
    0x6, 0x4, 0x2, 0x1e, 0x1e, 0x6e, 0x6e, 0x3, 0x2, 0x71, 0x73, 0x5, 0x2, 
    0x64, 0x64, 0x67, 0x67, 0x6c, 0x6c, 0x3, 0x2, 0x57, 0x58, 0x2, 0x407, 
    0x2, 0x57, 0x3, 0x2, 0x2, 0x2, 0x4, 0x66, 0x3, 0x2, 0x2, 0x2, 0x6, 0x73, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x77, 0x3, 0x2, 0x2, 0x2, 0xa, 0x7c, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x7f, 0x3, 0x2, 0x2, 0x2, 0xe, 0x16b, 0x3, 0x2, 0x2, 
    0x2, 0x10, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x12, 0x179, 0x3, 0x2, 0x2, 0x2, 
    0x14, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x16, 0x182, 0x3, 0x2, 0x2, 0x2, 0x18, 
    0x184, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1e2, 
    0x3, 0x2, 0x2, 0x2, 0x1e, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1eb, 0x3, 
    0x2, 0x2, 0x2, 0x22, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1ef, 0x3, 0x2, 
    0x2, 0x2, 0x26, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1f3, 0x3, 0x2, 0x2, 
    0x2, 0x2a, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x20f, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x30, 0x224, 0x3, 0x2, 0x2, 0x2, 0x32, 
    0x231, 0x3, 0x2, 0x2, 0x2, 0x34, 0x239, 0x3, 0x2, 0x2, 0x2, 0x36, 0x24c, 
    0x3, 0x2, 0x2, 0x2, 0x38, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x254, 0x3, 
    0x2, 0x2, 0x2, 0x3c, 0x265, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x26b, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x42, 0x272, 0x3, 0x2, 0x2, 
    0x2, 0x44, 0x274, 0x3, 0x2, 0x2, 0x2, 0x46, 0x277, 0x3, 0x2, 0x2, 0x2, 
    0x48, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x4c, 
    0x2bb, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x334, 0x3, 0x2, 0x2, 0x2, 0x50, 0x344, 
    0x3, 0x2, 0x2, 0x2, 0x52, 0x379, 0x3, 0x2, 0x2, 0x2, 0x54, 0x56, 0x5, 
    0x4, 0x3, 0x2, 0x55, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x57, 0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0x5a, 0x5b, 0x7, 0x2, 0x2, 0x3, 0x5b, 0x3, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x67, 0x7, 0x63, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0x66, 0x2, 0x2, 0x5e, 0x67, 
    0x7, 0x63, 0x2, 0x2, 0x5f, 0x60, 0x5, 0x6, 0x4, 0x2, 0x60, 0x61, 0x7, 
    0x63, 0x2, 0x2, 0x61, 0x67, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x5, 0xc, 
    0x7, 0x2, 0x63, 0x64, 0x5, 0x6, 0x4, 0x2, 0x64, 0x65, 0x7, 0x63, 0x2, 
    0x2, 0x65, 0x67, 0x3, 0x2, 0x2, 0x2, 0x66, 0x5c, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x66, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x66, 
    0x62, 0x3, 0x2, 0x2, 0x2, 0x67, 0x5, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6f, 
    0x5, 0xe, 0x8, 0x2, 0x69, 0x6b, 0x7, 0x66, 0x2, 0x2, 0x6a, 0x6c, 0x5, 
    0xe, 0x8, 0x2, 0x6b, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 
    0x2, 0x2, 0x6c, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x69, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x71, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 
    0x6f, 0x70, 0x3, 0x2, 0x2, 0x2, 0x70, 0x74, 0x3, 0x2, 0x2, 0x2, 0x71, 
    0x6f, 0x3, 0x2, 0x2, 0x2, 0x72, 0x74, 0x9, 0x2, 0x2, 0x2, 0x73, 0x68, 
    0x3, 0x2, 0x2, 0x2, 0x73, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x75, 0x78, 0x5, 0x6, 0x4, 0x2, 0x76, 0x78, 0x5, 0x4, 
    0x3, 0x2, 0x77, 0x75, 0x3, 0x2, 0x2, 0x2, 0x77, 0x76, 0x3, 0x2, 0x2, 
    0x2, 0x78, 0x9, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7b, 0x5, 0x8, 0x5, 0x2, 
    0x7a, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7c, 
    0x7a, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x7, 
    0x7b, 0x2, 0x2, 0x80, 0xd, 0x3, 0x2, 0x2, 0x2, 0x81, 0x16c, 0x7, 0x3, 
    0x2, 0x2, 0x82, 0x83, 0x7, 0x4, 0x2, 0x2, 0x83, 0x84, 0x5, 0x3c, 0x1f, 
    0x2, 0x84, 0x85, 0x7, 0x19, 0x2, 0x2, 0x85, 0x87, 0x7, 0x63, 0x2, 0x2, 
    0x86, 0x88, 0x5, 0x10, 0x9, 0x2, 0x87, 0x86, 0x3, 0x2, 0x2, 0x2, 0x88, 
    0x89, 0x3, 0x2, 0x2, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 
    0x3, 0x2, 0x2, 0x2, 0x8a, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x7, 
    0x1a, 0x2, 0x2, 0x8c, 0x8e, 0x5, 0xa, 0x6, 0x2, 0x8d, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0x8d, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x8f, 0x90, 0x7, 0xb, 0x2, 0x2, 0x90, 0x16c, 0x3, 0x2, 0x2, 0x2, 
    0x91, 0x92, 0x7, 0x5, 0x2, 0x2, 0x92, 0x16c, 0x5, 0x4c, 0x27, 0x2, 0x93, 
    0x94, 0x7, 0x6, 0x2, 0x2, 0x94, 0x99, 0x5, 0x14, 0xb, 0x2, 0x95, 0x96, 
    0x7, 0x67, 0x2, 0x2, 0x96, 0x98, 0x5, 0x14, 0xb, 0x2, 0x97, 0x95, 0x3, 
    0x2, 0x2, 0x2, 0x98, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x99, 0x97, 0x3, 0x2, 
    0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x16c, 0x3, 0x2, 0x2, 
    0x2, 0x9b, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x7, 0x8, 0x2, 0x2, 
    0x9d, 0xa2, 0x5, 0x2c, 0x17, 0x2, 0x9e, 0x9f, 0x7, 0x67, 0x2, 0x2, 0x9f, 
    0xa1, 0x5, 0x2c, 0x17, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa4, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x3, 
    0x2, 0x2, 0x2, 0xa3, 0x16c, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0xa5, 0x16c, 0x7, 0xa, 0x2, 0x2, 0xa6, 0xa8, 0x7, 0x4a, 0x2, 
    0x2, 0xa7, 0xa9, 0x5, 0x3c, 0x1f, 0x2, 0xa8, 0xa7, 0x3, 0x2, 0x2, 0x2, 
    0xa8, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa9, 0x16c, 0x3, 0x2, 0x2, 0x2, 0xaa, 
    0xac, 0x7, 0x21, 0x2, 0x2, 0xab, 0xad, 0x5, 0x3c, 0x1f, 0x2, 0xac, 0xab, 
    0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x3, 0x2, 0x2, 0x2, 0xad, 0x16c, 0x3, 
    0x2, 0x2, 0x2, 0xae, 0xaf, 0x7, 0x7, 0x2, 0x2, 0xaf, 0xb0, 0x5, 0x12, 
    0xa, 0x2, 0xb0, 0xb2, 0x7, 0x69, 0x2, 0x2, 0xb1, 0xb3, 0x5, 0x30, 0x19, 
    0x2, 0xb2, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x3, 0x2, 0x2, 0x2, 
    0xb3, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb6, 0x7, 0x6b, 0x2, 0x2, 0xb5, 
    0xb7, 0x7, 0x66, 0x2, 0x2, 0xb6, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 
    0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x5, 
    0xa, 0x6, 0x2, 0xb9, 0xba, 0x7, 0xd, 0x2, 0x2, 0xba, 0x16c, 0x3, 0x2, 
    0x2, 0x2, 0xbb, 0xbc, 0x7, 0x7, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0x70, 0x2, 
    0x2, 0xbd, 0xbf, 0x7, 0x69, 0x2, 0x2, 0xbe, 0xc0, 0x5, 0x30, 0x19, 0x2, 
    0xbf, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 
    0xc1, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc3, 0x7, 0x6b, 0x2, 0x2, 0xc2, 0xc4, 
    0x7, 0x66, 0x2, 0x2, 0xc3, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x3, 
    0x2, 0x2, 0x2, 0xc4, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x5, 0xa, 
    0x6, 0x2, 0xc6, 0xc7, 0x7, 0xe, 0x2, 0x2, 0xc7, 0x16c, 0x3, 0x2, 0x2, 
    0x2, 0xc8, 0xca, 0x7, 0x10, 0x2, 0x2, 0xc9, 0xcb, 0x7, 0x16, 0x2, 0x2, 
    0xca, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcb, 
    0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x20, 0x11, 0x2, 0xcd, 0xce, 
    0x7, 0x4a, 0x2, 0x2, 0xce, 0xcf, 0x5, 0x50, 0x29, 0x2, 0xcf, 0xd0, 0x7, 
    0x25, 0x2, 0x2, 0xd0, 0xd3, 0x5, 0x50, 0x29, 0x2, 0xd1, 0xd2, 0x7, 0x23, 
    0x2, 0x2, 0xd2, 0xd4, 0x5, 0x50, 0x29, 0x2, 0xd3, 0xd1, 0x3, 0x2, 0x2, 
    0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x3, 0x2, 0x2, 0x2, 
    0xd5, 0xd6, 0x5, 0xa, 0x6, 0x2, 0xd6, 0xd7, 0x7, 0x18, 0x2, 0x2, 0xd7, 
    0x16c, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xda, 0x7, 0x10, 0x2, 0x2, 0xd9, 0xdb, 
    0x7, 0x16, 0x2, 0x2, 0xda, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 
    0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x5, 0x1e, 
    0x10, 0x2, 0xdd, 0xde, 0x7, 0x13, 0x2, 0x2, 0xde, 0xdf, 0x5, 0x1e, 0x10, 
    0x2, 0xdf, 0xe0, 0x7, 0x69, 0x2, 0x2, 0xe0, 0xe1, 0x7, 0x6b, 0x2, 0x2, 
    0xe1, 0xe2, 0x5, 0xa, 0x6, 0x2, 0xe2, 0xe3, 0x7, 0x18, 0x2, 0x2, 0xe3, 
    0x16c, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x5, 0x12, 0xa, 0x2, 0xe5, 0xe7, 
    0x7, 0x69, 0x2, 0x2, 0xe6, 0xe8, 0x5, 0x32, 0x1a, 0x2, 0xe7, 0xe6, 0x3, 
    0x2, 0x2, 0x2, 0xe7, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x3, 0x2, 
    0x2, 0x2, 0xe9, 0xea, 0x7, 0x6b, 0x2, 0x2, 0xea, 0x16c, 0x3, 0x2, 0x2, 
    0x2, 0xeb, 0xec, 0x7, 0x12, 0x2, 0x2, 0xec, 0xee, 0x5, 0x3c, 0x1f, 0x2, 
    0xed, 0xef, 0x7, 0x24, 0x2, 0x2, 0xee, 0xed, 0x3, 0x2, 0x2, 0x2, 0xee, 
    0xef, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf3, 
    0x5, 0x6, 0x4, 0x2, 0xf1, 0xf2, 0x7, 0x9, 0x2, 0x2, 0xf2, 0xf4, 0x5, 
    0x6, 0x4, 0x2, 0xf3, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x3, 0x2, 
    0x2, 0x2, 0xf4, 0x16c, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0x12, 0x2, 
    0x2, 0xf6, 0xf8, 0x5, 0x3c, 0x1f, 0x2, 0xf7, 0xf9, 0x7, 0x24, 0x2, 0x2, 
    0xf8, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf9, 
    0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfd, 0x5, 0xa, 0x6, 0x2, 0xfb, 0xfc, 
    0x7, 0x9, 0x2, 0x2, 0xfc, 0xfe, 0x5, 0xa, 0x6, 0x2, 0xfd, 0xfb, 0x3, 
    0x2, 0x2, 0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x3, 0x2, 
    0x2, 0x2, 0xff, 0x100, 0x7, 0xc, 0x2, 0x2, 0x100, 0x16c, 0x3, 0x2, 0x2, 
    0x2, 0x101, 0x105, 0x7, 0x14, 0x2, 0x2, 0x102, 0x103, 0x5, 0x4c, 0x27, 
    0x2, 0x103, 0x104, 0x7, 0x67, 0x2, 0x2, 0x104, 0x106, 0x3, 0x2, 0x2, 
    0x2, 0x105, 0x102, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 
    0x2, 0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x16c, 0x5, 0x2e, 0x18, 
    0x2, 0x108, 0x10a, 0x7, 0x17, 0x2, 0x2, 0x109, 0x108, 0x3, 0x2, 0x2, 
    0x2, 0x109, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10f, 0x3, 0x2, 0x2, 
    0x2, 0x10b, 0x10d, 0x7, 0x15, 0x2, 0x2, 0x10c, 0x10b, 0x3, 0x2, 0x2, 
    0x2, 0x10c, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10f, 0x3, 0x2, 0x2, 
    0x2, 0x10e, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10c, 0x3, 0x2, 0x2, 
    0x2, 0x10f, 0x110, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x5, 0x2a, 0x16, 
    0x2, 0x111, 0x112, 0x7, 0x4a, 0x2, 0x2, 0x112, 0x11a, 0x5, 0x3c, 0x1f, 
    0x2, 0x113, 0x114, 0x7, 0x67, 0x2, 0x2, 0x114, 0x115, 0x5, 0x2a, 0x16, 
    0x2, 0x115, 0x116, 0x7, 0x4a, 0x2, 0x2, 0x116, 0x117, 0x5, 0x3c, 0x1f, 
    0x2, 0x117, 0x119, 0x3, 0x2, 0x2, 0x2, 0x118, 0x113, 0x3, 0x2, 0x2, 
    0x2, 0x119, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x118, 0x3, 0x2, 0x2, 
    0x2, 0x11a, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x16c, 0x3, 0x2, 0x2, 
    0x2, 0x11c, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x7, 0x16, 0x2, 
    0x2, 0x11e, 0x11f, 0x5, 0x2a, 0x16, 0x2, 0x11f, 0x120, 0x7, 0x4a, 0x2, 
    0x2, 0x120, 0x128, 0x5, 0x3c, 0x1f, 0x2, 0x121, 0x122, 0x7, 0x67, 0x2, 
    0x2, 0x122, 0x123, 0x5, 0x2a, 0x16, 0x2, 0x123, 0x124, 0x7, 0x4a, 0x2, 
    0x2, 0x124, 0x125, 0x5, 0x3c, 0x1f, 0x2, 0x125, 0x127, 0x3, 0x2, 0x2, 
    0x2, 0x126, 0x121, 0x3, 0x2, 0x2, 0x2, 0x127, 0x12a, 0x3, 0x2, 0x2, 
    0x2, 0x128, 0x126, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 
    0x2, 0x129, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x128, 0x3, 0x2, 0x2, 
    0x2, 0x12b, 0x12c, 0x7, 0x16, 0x2, 0x2, 0x12c, 0x12d, 0x7, 0x8, 0x2, 
    0x2, 0x12d, 0x132, 0x5, 0x2c, 0x17, 0x2, 0x12e, 0x12f, 0x7, 0x67, 0x2, 
    0x2, 0x12f, 0x131, 0x5, 0x2c, 0x17, 0x2, 0x130, 0x12e, 0x3, 0x2, 0x2, 
    0x2, 0x131, 0x134, 0x3, 0x2, 0x2, 0x2, 0x132, 0x130, 0x3, 0x2, 0x2, 
    0x2, 0x132, 0x133, 0x3, 0x2, 0x2, 0x2, 0x133, 0x16c, 0x3, 0x2, 0x2, 
    0x2, 0x134, 0x132, 0x3, 0x2, 0x2, 0x2, 0x135, 0x137, 0x7, 0x1b, 0x2, 
    0x2, 0x136, 0x138, 0x5, 0x3a, 0x1e, 0x2, 0x137, 0x136, 0x3, 0x2, 0x2, 
    0x2, 0x137, 0x138, 0x3, 0x2, 0x2, 0x2, 0x138, 0x16c, 0x3, 0x2, 0x2, 
    0x2, 0x139, 0x13a, 0x7, 0x70, 0x2, 0x2, 0x13a, 0x13c, 0x7, 0x69, 0x2, 
    0x2, 0x13b, 0x13d, 0x5, 0x32, 0x1a, 0x2, 0x13c, 0x13b, 0x3, 0x2, 0x2, 
    0x2, 0x13c, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x3, 0x2, 0x2, 
    0x2, 0x13e, 0x16c, 0x7, 0x6b, 0x2, 0x2, 0x13f, 0x140, 0x7, 0x1d, 0x2, 
    0x2, 0x140, 0x145, 0x5, 0x2a, 0x16, 0x2, 0x141, 0x142, 0x7, 0x67, 0x2, 
    0x2, 0x142, 0x144, 0x5, 0x2a, 0x16, 0x2, 0x143, 0x141, 0x3, 0x2, 0x2, 
    0x2, 0x144, 0x147, 0x3, 0x2, 0x2, 0x2, 0x145, 0x143, 0x3, 0x2, 0x2, 
    0x2, 0x145, 0x146, 0x3, 0x2, 0x2, 0x2, 0x146, 0x16c, 0x3, 0x2, 0x2, 
    0x2, 0x147, 0x145, 0x3, 0x2, 0x2, 0x2, 0x148, 0x16c, 0x7, 0x20, 0x2, 
    0x2, 0x149, 0x16c, 0x7, 0x26, 0x2, 0x2, 0x14a, 0x16c, 0x7, 0x27, 0x2, 
    0x2, 0x14b, 0x14c, 0x7, 0x28, 0x2, 0x2, 0x14c, 0x14d, 0x5, 0x22, 0x12, 
    0x2, 0x14d, 0x14e, 0x7, 0x69, 0x2, 0x2, 0x14e, 0x153, 0x5, 0x1e, 0x10, 
    0x2, 0x14f, 0x150, 0x7, 0x67, 0x2, 0x2, 0x150, 0x152, 0x5, 0x1e, 0x10, 
    0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x152, 0x155, 0x3, 0x2, 0x2, 
    0x2, 0x153, 0x151, 0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 0x3, 0x2, 0x2, 
    0x2, 0x154, 0x156, 0x3, 0x2, 0x2, 0x2, 0x155, 0x153, 0x3, 0x2, 0x2, 
    0x2, 0x156, 0x157, 0x7, 0x6b, 0x2, 0x2, 0x157, 0x16c, 0x3, 0x2, 0x2, 
    0x2, 0x158, 0x15c, 0x7, 0x1f, 0x2, 0x2, 0x159, 0x15b, 0x5, 0x8, 0x5, 
    0x2, 0x15a, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15e, 0x3, 0x2, 0x2, 
    0x2, 0x15c, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 0x3, 0x2, 0x2, 
    0x2, 0x15d, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15c, 0x3, 0x2, 0x2, 
    0x2, 0x15f, 0x160, 0x7, 0x29, 0x2, 0x2, 0x160, 0x16c, 0x5, 0x3c, 0x1f, 
    0x2, 0x161, 0x162, 0x7, 0x2b, 0x2, 0x2, 0x162, 0x166, 0x5, 0x3c, 0x1f, 
    0x2, 0x163, 0x165, 0x5, 0x8, 0x5, 0x2, 0x164, 0x163, 0x3, 0x2, 0x2, 
    0x2, 0x165, 0x168, 0x3, 0x2, 0x2, 0x2, 0x166, 0x164, 0x3, 0x2, 0x2, 
    0x2, 0x166, 0x167, 0x3, 0x2, 0x2, 0x2, 0x167, 0x169, 0x3, 0x2, 0x2, 
    0x2, 0x168, 0x166, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16a, 0x7, 0xf, 0x2, 
    0x2, 0x16a, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x81, 0x3, 0x2, 0x2, 0x2, 
    0x16b, 0x82, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x91, 0x3, 0x2, 0x2, 0x2, 0x16b, 
    0x93, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x16b, 0xa5, 
    0x3, 0x2, 0x2, 0x2, 0x16b, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x16b, 0xaa, 0x3, 
    0x2, 0x2, 0x2, 0x16b, 0xae, 0x3, 0x2, 0x2, 0x2, 0x16b, 0xbb, 0x3, 0x2, 
    0x2, 0x2, 0x16b, 0xc8, 0x3, 0x2, 0x2, 0x2, 0x16b, 0xd8, 0x3, 0x2, 0x2, 
    0x2, 0x16b, 0xe4, 0x3, 0x2, 0x2, 0x2, 0x16b, 0xeb, 0x3, 0x2, 0x2, 0x2, 
    0x16b, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x101, 0x3, 0x2, 0x2, 0x2, 0x16b, 
    0x10e, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x16b, 
    0x12b, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x135, 0x3, 0x2, 0x2, 0x2, 0x16b, 
    0x139, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x16b, 
    0x148, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x149, 0x3, 0x2, 0x2, 0x2, 0x16b, 
    0x14a, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x16b, 
    0x158, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x161, 0x3, 0x2, 0x2, 0x2, 0x16c, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 0x7, 0x2a, 0x2, 0x2, 0x16e, 0x173, 
    0x5, 0x3c, 0x1f, 0x2, 0x16f, 0x170, 0x7, 0x67, 0x2, 0x2, 0x170, 0x172, 
    0x5, 0x3c, 0x1f, 0x2, 0x171, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x172, 0x175, 
    0x3, 0x2, 0x2, 0x2, 0x173, 0x171, 0x3, 0x2, 0x2, 0x2, 0x173, 0x174, 
    0x3, 0x2, 0x2, 0x2, 0x174, 0x176, 0x3, 0x2, 0x2, 0x2, 0x175, 0x173, 
    0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 0x7, 0x66, 0x2, 0x2, 0x177, 0x178, 
    0x5, 0xa, 0x6, 0x2, 0x178, 0x11, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 0x9, 
    0x3, 0x2, 0x2, 0x17a, 0x13, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17e, 0x5, 0x3e, 
    0x20, 0x2, 0x17c, 0x17e, 0x5, 0x4a, 0x26, 0x2, 0x17d, 0x17b, 0x3, 0x2, 
    0x2, 0x2, 0x17d, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x17f, 0x183, 0x5, 0x1a, 0xe, 0x2, 0x180, 0x183, 0x5, 0x1c, 0xf, 
    0x2, 0x181, 0x183, 0x5, 0x18, 0xd, 0x2, 0x182, 0x17f, 0x3, 0x2, 0x2, 
    0x2, 0x182, 0x180, 0x3, 0x2, 0x2, 0x2, 0x182, 0x181, 0x3, 0x2, 0x2, 
    0x2, 0x183, 0x17, 0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 0x5, 0x28, 0x15, 
    0x2, 0x185, 0x19, 0x3, 0x2, 0x2, 0x2, 0x186, 0x1c9, 0x5, 0x22, 0x12, 
    0x2, 0x187, 0x192, 0x5, 0x22, 0x12, 0x2, 0x188, 0x189, 0x7, 0x69, 0x2, 
    0x2, 0x189, 0x18c, 0x5, 0x50, 0x29, 0x2, 0x18a, 0x18b, 0x7, 0x67, 0x2, 
    0x2, 0x18b, 0x18d, 0x5, 0x50, 0x29, 0x2, 0x18c, 0x18a, 0x3, 0x2, 0x2, 
    0x2, 0x18c, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 0x3, 0x2, 0x2, 
    0x2, 0x18e, 0x18f, 0x7, 0x6b, 0x2, 0x2, 0x18f, 0x191, 0x3, 0x2, 0x2, 
    0x2, 0x190, 0x188, 0x3, 0x2, 0x2, 0x2, 0x191, 0x194, 0x3, 0x2, 0x2, 
    0x2, 0x192, 0x190, 0x3, 0x2, 0x2, 0x2, 0x192, 0x193, 0x3, 0x2, 0x2, 
    0x2, 0x193, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x194, 0x192, 0x3, 0x2, 0x2, 
    0x2, 0x195, 0x1c9, 0x5, 0x24, 0x13, 0x2, 0x196, 0x1a1, 0x5, 0x24, 0x13, 
    0x2, 0x197, 0x198, 0x7, 0x69, 0x2, 0x2, 0x198, 0x19b, 0x5, 0x50, 0x29, 
    0x2, 0x199, 0x19a, 0x7, 0x67, 0x2, 0x2, 0x19a, 0x19c, 0x5, 0x50, 0x29, 
    0x2, 0x19b, 0x199, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19c, 0x3, 0x2, 0x2, 
    0x2, 0x19c, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 0x7, 0x6b, 0x2, 
    0x2, 0x19e, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x197, 0x3, 0x2, 0x2, 
    0x2, 0x1a0, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x19f, 0x3, 0x2, 0x2, 
    0x2, 0x1a1, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1c9, 0x3, 0x2, 0x2, 
    0x2, 0x1a3, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 0x5, 0x18, 0xd, 
    0x2, 0x1a5, 0x1a6, 0x5, 0x22, 0x12, 0x2, 0x1a6, 0x1c9, 0x3, 0x2, 0x2, 
    0x2, 0x1a7, 0x1a8, 0x5, 0x18, 0xd, 0x2, 0x1a8, 0x1a9, 0x7, 0x69, 0x2, 
    0x2, 0x1a9, 0x1aa, 0x5, 0x50, 0x29, 0x2, 0x1aa, 0x1ab, 0x7, 0x6b, 0x2, 
    0x2, 0x1ab, 0x1ac, 0x5, 0x22, 0x12, 0x2, 0x1ac, 0x1c9, 0x3, 0x2, 0x2, 
    0x2, 0x1ad, 0x1ae, 0x5, 0x18, 0xd, 0x2, 0x1ae, 0x1af, 0x5, 0x24, 0x13, 
    0x2, 0x1af, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b1, 0x5, 0x18, 0xd, 
    0x2, 0x1b1, 0x1b2, 0x7, 0x69, 0x2, 0x2, 0x1b2, 0x1b3, 0x5, 0x50, 0x29, 
    0x2, 0x1b3, 0x1b4, 0x7, 0x6b, 0x2, 0x2, 0x1b4, 0x1b5, 0x5, 0x24, 0x13, 
    0x2, 0x1b5, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x7, 0x72, 0x2, 
    0x2, 0x1b7, 0x1b9, 0x7, 0x69, 0x2, 0x2, 0x1b8, 0x1ba, 0x5, 0x32, 0x1a, 
    0x2, 0x1b9, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x3, 0x2, 0x2, 
    0x2, 0x1ba, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1c9, 0x7, 0x6b, 0x2, 
    0x2, 0x1bc, 0x1bd, 0x7, 0x71, 0x2, 0x2, 0x1bd, 0x1bf, 0x7, 0x69, 0x2, 
    0x2, 0x1be, 0x1c0, 0x5, 0x32, 0x1a, 0x2, 0x1bf, 0x1be, 0x3, 0x2, 0x2, 
    0x2, 0x1bf, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 0x3, 0x2, 0x2, 
    0x2, 0x1c1, 0x1c9, 0x7, 0x6b, 0x2, 0x2, 0x1c2, 0x1c3, 0x7, 0x73, 0x2, 
    0x2, 0x1c3, 0x1c5, 0x7, 0x69, 0x2, 0x2, 0x1c4, 0x1c6, 0x5, 0x32, 0x1a, 
    0x2, 0x1c5, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x3, 0x2, 0x2, 
    0x2, 0x1c6, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c9, 0x7, 0x6b, 0x2, 
    0x2, 0x1c8, 0x186, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x187, 0x3, 0x2, 0x2, 
    0x2, 0x1c8, 0x195, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x196, 0x3, 0x2, 0x2, 
    0x2, 0x1c8, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1a7, 0x3, 0x2, 0x2, 
    0x2, 0x1c8, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1b0, 0x3, 0x2, 0x2, 
    0x2, 0x1c8, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1bc, 0x3, 0x2, 0x2, 
    0x2, 0x1c8, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x1ca, 0x1e3, 0x5, 0x26, 0x14, 0x2, 0x1cb, 0x1d6, 0x5, 0x26, 0x14, 0x2, 
    0x1cc, 0x1cd, 0x7, 0x69, 0x2, 0x2, 0x1cd, 0x1d0, 0x5, 0x50, 0x29, 0x2, 
    0x1ce, 0x1cf, 0x7, 0x67, 0x2, 0x2, 0x1cf, 0x1d1, 0x5, 0x50, 0x29, 0x2, 
    0x1d0, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d1, 0x3, 0x2, 0x2, 0x2, 
    0x1d1, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d3, 0x7, 0x6b, 0x2, 0x2, 
    0x1d3, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1cc, 0x3, 0x2, 0x2, 0x2, 
    0x1d5, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d4, 0x3, 0x2, 0x2, 0x2, 
    0x1d6, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1e3, 0x3, 0x2, 0x2, 0x2, 
    0x1d8, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1da, 0x5, 0x18, 0xd, 0x2, 
    0x1da, 0x1db, 0x5, 0x26, 0x14, 0x2, 0x1db, 0x1e3, 0x3, 0x2, 0x2, 0x2, 
    0x1dc, 0x1dd, 0x5, 0x18, 0xd, 0x2, 0x1dd, 0x1de, 0x7, 0x69, 0x2, 0x2, 
    0x1de, 0x1df, 0x5, 0x50, 0x29, 0x2, 0x1df, 0x1e0, 0x7, 0x6b, 0x2, 0x2, 
    0x1e0, 0x1e1, 0x5, 0x26, 0x14, 0x2, 0x1e1, 0x1e3, 0x3, 0x2, 0x2, 0x2, 
    0x1e2, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1cb, 0x3, 0x2, 0x2, 0x2, 
    0x1e2, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1dc, 0x3, 0x2, 0x2, 0x2, 
    0x1e3, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e8, 0x5, 0x22, 0x12, 0x2, 
    0x1e5, 0x1e8, 0x5, 0x24, 0x13, 0x2, 0x1e6, 0x1e8, 0x5, 0x26, 0x14, 0x2, 
    0x1e7, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e5, 0x3, 0x2, 0x2, 0x2, 
    0x1e7, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1e9, 
    0x1ec, 0x5, 0x22, 0x12, 0x2, 0x1ea, 0x1ec, 0x5, 0x24, 0x13, 0x2, 0x1eb, 
    0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ec, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x7, 0x74, 0x2, 0x2, 0x1ee, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f0, 0x7, 0x75, 0x2, 0x2, 0x1f0, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x7, 0x76, 0x2, 0x2, 0x1f2, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f4, 0x7, 0x77, 0x2, 0x2, 0x1f4, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x20e, 0x5, 0x16, 0xc, 0x2, 0x1f6, 
    0x201, 0x5, 0x16, 0xc, 0x2, 0x1f7, 0x1f8, 0x7, 0x69, 0x2, 0x2, 0x1f8, 
    0x1fb, 0x5, 0x50, 0x29, 0x2, 0x1f9, 0x1fa, 0x7, 0x67, 0x2, 0x2, 0x1fa, 
    0x1fc, 0x5, 0x50, 0x29, 0x2, 0x1fb, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fb, 
    0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1fd, 
    0x1fe, 0x7, 0x6b, 0x2, 0x2, 0x1fe, 0x200, 0x3, 0x2, 0x2, 0x2, 0x1ff, 
    0x1f7, 0x3, 0x2, 0x2, 0x2, 0x200, 0x203, 0x3, 0x2, 0x2, 0x2, 0x201, 
    0x1ff, 0x3, 0x2, 0x2, 0x2, 0x201, 0x202, 0x3, 0x2, 0x2, 0x2, 0x202, 
    0x20e, 0x3, 0x2, 0x2, 0x2, 0x203, 0x201, 0x3, 0x2, 0x2, 0x2, 0x204, 
    0x205, 0x5, 0x18, 0xd, 0x2, 0x205, 0x206, 0x5, 0x22, 0x12, 0x2, 0x206, 
    0x20e, 0x3, 0x2, 0x2, 0x2, 0x207, 0x208, 0x5, 0x18, 0xd, 0x2, 0x208, 
    0x209, 0x7, 0x69, 0x2, 0x2, 0x209, 0x20a, 0x5, 0x50, 0x29, 0x2, 0x20a, 
    0x20b, 0x7, 0x6b, 0x2, 0x2, 0x20b, 0x20c, 0x5, 0x22, 0x12, 0x2, 0x20c, 
    0x20e, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x20d, 
    0x1f6, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x204, 0x3, 0x2, 0x2, 0x2, 0x20d, 
    0x207, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 
    0x5, 0x16, 0xc, 0x2, 0x210, 0x211, 0x7, 0x69, 0x2, 0x2, 0x211, 0x216, 
    0x5, 0x50, 0x29, 0x2, 0x212, 0x213, 0x7, 0x67, 0x2, 0x2, 0x213, 0x215, 
    0x5, 0x50, 0x29, 0x2, 0x214, 0x212, 0x3, 0x2, 0x2, 0x2, 0x215, 0x218, 
    0x3, 0x2, 0x2, 0x2, 0x216, 0x214, 0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 
    0x3, 0x2, 0x2, 0x2, 0x217, 0x219, 0x3, 0x2, 0x2, 0x2, 0x218, 0x216, 
    0x3, 0x2, 0x2, 0x2, 0x219, 0x21a, 0x7, 0x6b, 0x2, 0x2, 0x21a, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x21b, 0x220, 0x5, 0x2a, 0x16, 0x2, 0x21c, 0x21d, 
    0x7, 0x67, 0x2, 0x2, 0x21d, 0x21f, 0x5, 0x2a, 0x16, 0x2, 0x21e, 0x21c, 
    0x3, 0x2, 0x2, 0x2, 0x21f, 0x222, 0x3, 0x2, 0x2, 0x2, 0x220, 0x21e, 
    0x3, 0x2, 0x2, 0x2, 0x220, 0x221, 0x3, 0x2, 0x2, 0x2, 0x221, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x222, 0x220, 0x3, 0x2, 0x2, 0x2, 0x223, 0x225, 0x7, 
    0x21, 0x2, 0x2, 0x224, 0x223, 0x3, 0x2, 0x2, 0x2, 0x224, 0x225, 0x3, 
    0x2, 0x2, 0x2, 0x225, 0x226, 0x3, 0x2, 0x2, 0x2, 0x226, 0x22e, 0x5, 
    0x1e, 0x10, 0x2, 0x227, 0x229, 0x7, 0x67, 0x2, 0x2, 0x228, 0x22a, 0x7, 
    0x21, 0x2, 0x2, 0x229, 0x228, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22a, 0x3, 
    0x2, 0x2, 0x2, 0x22a, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22d, 0x5, 
    0x1e, 0x10, 0x2, 0x22c, 0x227, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x230, 0x3, 
    0x2, 0x2, 0x2, 0x22e, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22f, 0x3, 
    0x2, 0x2, 0x2, 0x22f, 0x31, 0x3, 0x2, 0x2, 0x2, 0x230, 0x22e, 0x3, 0x2, 
    0x2, 0x2, 0x231, 0x236, 0x5, 0x3c, 0x1f, 0x2, 0x232, 0x233, 0x7, 0x67, 
    0x2, 0x2, 0x233, 0x235, 0x5, 0x3c, 0x1f, 0x2, 0x234, 0x232, 0x3, 0x2, 
    0x2, 0x2, 0x235, 0x238, 0x3, 0x2, 0x2, 0x2, 0x236, 0x234, 0x3, 0x2, 
    0x2, 0x2, 0x236, 0x237, 0x3, 0x2, 0x2, 0x2, 0x237, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x238, 0x236, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23e, 0x5, 0x3c, 0x1f, 
    0x2, 0x23a, 0x23b, 0x7, 0x67, 0x2, 0x2, 0x23b, 0x23d, 0x5, 0x3c, 0x1f, 
    0x2, 0x23c, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x240, 0x3, 0x2, 0x2, 
    0x2, 0x23e, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 0x3, 0x2, 0x2, 
    0x2, 0x23f, 0x35, 0x3, 0x2, 0x2, 0x2, 0x240, 0x23e, 0x3, 0x2, 0x2, 0x2, 
    0x241, 0x243, 0x7, 0x65, 0x2, 0x2, 0x242, 0x241, 0x3, 0x2, 0x2, 0x2, 
    0x242, 0x243, 0x3, 0x2, 0x2, 0x2, 0x243, 0x244, 0x3, 0x2, 0x2, 0x2, 
    0x244, 0x24d, 0x5, 0x3c, 0x1f, 0x2, 0x245, 0x246, 0x7, 0x22, 0x2, 0x2, 
    0x246, 0x247, 0x7, 0x69, 0x2, 0x2, 0x247, 0x248, 0x5, 0x50, 0x29, 0x2, 
    0x248, 0x249, 0x7, 0x6b, 0x2, 0x2, 0x249, 0x24d, 0x3, 0x2, 0x2, 0x2, 
    0x24a, 0x24b, 0x7, 0x22, 0x2, 0x2, 0x24b, 0x24d, 0x5, 0x50, 0x29, 0x2, 
    0x24c, 0x242, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x245, 0x3, 0x2, 0x2, 0x2, 
    0x24c, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x37, 0x3, 0x2, 0x2, 0x2, 0x24e, 
    0x250, 0x7, 0x64, 0x2, 0x2, 0x24f, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x250, 
    0x251, 0x3, 0x2, 0x2, 0x2, 0x251, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x251, 
    0x252, 0x3, 0x2, 0x2, 0x2, 0x252, 0x39, 0x3, 0x2, 0x2, 0x2, 0x253, 0x255, 
    0x5, 0x38, 0x1d, 0x2, 0x254, 0x253, 0x3, 0x2, 0x2, 0x2, 0x254, 0x255, 
    0x3, 0x2, 0x2, 0x2, 0x255, 0x257, 0x3, 0x2, 0x2, 0x2, 0x256, 0x258, 
    0x7, 0x67, 0x2, 0x2, 0x257, 0x256, 0x3, 0x2, 0x2, 0x2, 0x257, 0x258, 
    0x3, 0x2, 0x2, 0x2, 0x258, 0x259, 0x3, 0x2, 0x2, 0x2, 0x259, 0x260, 
    0x5, 0x36, 0x1c, 0x2, 0x25a, 0x25c, 0x9, 0x4, 0x2, 0x2, 0x25b, 0x25d, 
    0x5, 0x36, 0x1c, 0x2, 0x25c, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25d, 
    0x3, 0x2, 0x2, 0x2, 0x25d, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25a, 
    0x3, 0x2, 0x2, 0x2, 0x25f, 0x262, 0x3, 0x2, 0x2, 0x2, 0x260, 0x25e, 
    0x3, 0x2, 0x2, 0x2, 0x260, 0x261, 0x3, 0x2, 0x2, 0x2, 0x261, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x262, 0x260, 0x3, 0x2, 0x2, 0x2, 0x263, 0x266, 0x5, 
    0x50, 0x29, 0x2, 0x264, 0x266, 0x5, 0x4c, 0x27, 0x2, 0x265, 0x263, 0x3, 
    0x2, 0x2, 0x2, 0x265, 0x264, 0x3, 0x2, 0x2, 0x2, 0x266, 0x3d, 0x3, 0x2, 
    0x2, 0x2, 0x267, 0x26c, 0x5, 0x40, 0x21, 0x2, 0x268, 0x26c, 0x5, 0x46, 
    0x24, 0x2, 0x269, 0x26c, 0x5, 0x42, 0x22, 0x2, 0x26a, 0x26c, 0x5, 0x44, 
    0x23, 0x2, 0x26b, 0x267, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x268, 0x3, 0x2, 
    0x2, 0x2, 0x26b, 0x269, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26a, 0x3, 0x2, 
    0x2, 0x2, 0x26c, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26f, 0x9, 0x5, 0x2, 
    0x2, 0x26e, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26f, 0x3, 0x2, 0x2, 
    0x2, 0x26f, 0x270, 0x3, 0x2, 0x2, 0x2, 0x270, 0x271, 0x7, 0x7b, 0x2, 
    0x2, 0x271, 0x41, 0x3, 0x2, 0x2, 0x2, 0x272, 0x273, 0x7, 0x79, 0x2, 
    0x2, 0x273, 0x43, 0x3, 0x2, 0x2, 0x2, 0x274, 0x275, 0x7, 0x7a, 0x2, 
    0x2, 0x275, 0x45, 0x3, 0x2, 0x2, 0x2, 0x276, 0x278, 0x9, 0x5, 0x2, 0x2, 
    0x277, 0x276, 0x3, 0x2, 0x2, 0x2, 0x277, 0x278, 0x3, 0x2, 0x2, 0x2, 
    0x278, 0x279, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27a, 0x7, 0x7c, 0x2, 0x2, 
    0x27a, 0x47, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x2b4, 0x7, 0x40, 0x2, 0x2, 
    0x27c, 0x27d, 0x7, 0x43, 0x2, 0x2, 0x27d, 0x27e, 0x7, 0x69, 0x2, 0x2, 
    0x27e, 0x27f, 0x5, 0x50, 0x29, 0x2, 0x27f, 0x280, 0x7, 0x6b, 0x2, 0x2, 
    0x280, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x281, 0x282, 0x7, 0x43, 0x2, 0x2, 
    0x282, 0x2b4, 0x5, 0x50, 0x29, 0x2, 0x283, 0x284, 0x7, 0x44, 0x2, 0x2, 
    0x284, 0x285, 0x7, 0x69, 0x2, 0x2, 0x285, 0x286, 0x5, 0x4c, 0x27, 0x2, 
    0x286, 0x287, 0x7, 0x67, 0x2, 0x2, 0x287, 0x288, 0x5, 0x50, 0x29, 0x2, 
    0x288, 0x289, 0x7, 0x6b, 0x2, 0x2, 0x289, 0x2b4, 0x3, 0x2, 0x2, 0x2, 
    0x28a, 0x28b, 0x7, 0x45, 0x2, 0x2, 0x28b, 0x28c, 0x7, 0x69, 0x2, 0x2, 
    0x28c, 0x28d, 0x5, 0x4c, 0x27, 0x2, 0x28d, 0x28e, 0x7, 0x67, 0x2, 0x2, 
    0x28e, 0x28f, 0x5, 0x50, 0x29, 0x2, 0x28f, 0x290, 0x7, 0x67, 0x2, 0x2, 
    0x290, 0x291, 0x5, 0x50, 0x29, 0x2, 0x291, 0x292, 0x7, 0x6b, 0x2, 0x2, 
    0x292, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 0x7, 0x45, 0x2, 0x2, 
    0x294, 0x295, 0x7, 0x69, 0x2, 0x2, 0x295, 0x296, 0x5, 0x4c, 0x27, 0x2, 
    0x296, 0x297, 0x7, 0x67, 0x2, 0x2, 0x297, 0x298, 0x5, 0x50, 0x29, 0x2, 
    0x298, 0x299, 0x7, 0x6b, 0x2, 0x2, 0x299, 0x2b4, 0x3, 0x2, 0x2, 0x2, 
    0x29a, 0x29b, 0x7, 0x46, 0x2, 0x2, 0x29b, 0x29c, 0x7, 0x69, 0x2, 0x2, 
    0x29c, 0x29d, 0x5, 0x4c, 0x27, 0x2, 0x29d, 0x29e, 0x7, 0x67, 0x2, 0x2, 
    0x29e, 0x29f, 0x5, 0x50, 0x29, 0x2, 0x29f, 0x2a0, 0x7, 0x6b, 0x2, 0x2, 
    0x2a0, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x2a2, 0x7, 0x41, 0x2, 0x2, 
    0x2a2, 0x2a3, 0x7, 0x69, 0x2, 0x2, 0x2a3, 0x2a4, 0x5, 0x50, 0x29, 0x2, 
    0x2a4, 0x2a5, 0x7, 0x6b, 0x2, 0x2, 0x2a5, 0x2b4, 0x3, 0x2, 0x2, 0x2, 
    0x2a6, 0x2a7, 0x7, 0x41, 0x2, 0x2, 0x2a7, 0x2a8, 0x7, 0x65, 0x2, 0x2, 
    0x2a8, 0x2a9, 0x7, 0x69, 0x2, 0x2, 0x2a9, 0x2aa, 0x5, 0x50, 0x29, 0x2, 
    0x2aa, 0x2ab, 0x7, 0x6b, 0x2, 0x2, 0x2ab, 0x2b4, 0x3, 0x2, 0x2, 0x2, 
    0x2ac, 0x2ad, 0x7, 0x42, 0x2, 0x2, 0x2ad, 0x2ae, 0x7, 0x69, 0x2, 0x2, 
    0x2ae, 0x2af, 0x5, 0x50, 0x29, 0x2, 0x2af, 0x2b0, 0x7, 0x67, 0x2, 0x2, 
    0x2b0, 0x2b1, 0x5, 0x4c, 0x27, 0x2, 0x2b1, 0x2b2, 0x7, 0x6b, 0x2, 0x2, 
    0x2b2, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x27b, 0x3, 0x2, 0x2, 0x2, 
    0x2b3, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x281, 0x3, 0x2, 0x2, 0x2, 
    0x2b3, 0x283, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x28a, 0x3, 0x2, 0x2, 0x2, 
    0x2b3, 0x293, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x29a, 0x3, 0x2, 0x2, 0x2, 
    0x2b3, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2a6, 0x3, 0x2, 0x2, 0x2, 
    0x2b3, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x49, 0x3, 0x2, 0x2, 0x2, 0x2b5, 
    0x2b6, 0x7, 0x6f, 0x2, 0x2, 0x2b6, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x2b7, 
    0x2b8, 0x8, 0x27, 0x1, 0x2, 0x2b8, 0x2bc, 0x5, 0x4a, 0x26, 0x2, 0x2b9, 
    0x2bc, 0x5, 0x1c, 0xf, 0x2, 0x2ba, 0x2bc, 0x5, 0x48, 0x25, 0x2, 0x2bb, 
    0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2bb, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2bb, 
    0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2bd, 
    0x2be, 0xc, 0x3, 0x2, 0x2, 0x2be, 0x2bf, 0x7, 0x57, 0x2, 0x2, 0x2bf, 
    0x2c1, 0x5, 0x4c, 0x27, 0x4, 0x2c0, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2c1, 
    0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c2, 
    0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c2, 
    0x3, 0x2, 0x2, 0x2, 0x2c5, 0x335, 0x7, 0x2d, 0x2, 0x2, 0x2c6, 0x335, 
    0x7, 0x2c, 0x2, 0x2, 0x2c7, 0x335, 0x7, 0x47, 0x2, 0x2, 0x2c8, 0x335, 
    0x7, 0x48, 0x2, 0x2, 0x2c9, 0x335, 0x7, 0x49, 0x2, 0x2, 0x2ca, 0x2cb, 
    0x7, 0x47, 0x2, 0x2, 0x2cb, 0x2cc, 0x7, 0x69, 0x2, 0x2, 0x2cc, 0x2cd, 
    0x5, 0x50, 0x29, 0x2, 0x2cd, 0x2ce, 0x7, 0x6b, 0x2, 0x2, 0x2ce, 0x335, 
    0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2d0, 0x7, 0x2f, 0x2, 0x2, 0x2d0, 0x2d1, 
    0x7, 0x69, 0x2, 0x2, 0x2d1, 0x2d2, 0x5, 0x50, 0x29, 0x2, 0x2d2, 0x2d3, 
    0x7, 0x6b, 0x2, 0x2, 0x2d3, 0x335, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d5, 
    0x7, 0x30, 0x2, 0x2, 0x2d5, 0x2d6, 0x7, 0x69, 0x2, 0x2, 0x2d6, 0x2d7, 
    0x5, 0x50, 0x29, 0x2, 0x2d7, 0x2d8, 0x7, 0x6b, 0x2, 0x2, 0x2d8, 0x335, 
    0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2da, 0x7, 0x31, 0x2, 0x2, 0x2da, 0x2db, 
    0x7, 0x69, 0x2, 0x2, 0x2db, 0x2dc, 0x5, 0x50, 0x29, 0x2, 0x2dc, 0x2dd, 
    0x7, 0x6b, 0x2, 0x2, 0x2dd, 0x335, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2df, 
    0x7, 0x32, 0x2, 0x2, 0x2df, 0x2e0, 0x7, 0x69, 0x2, 0x2, 0x2e0, 0x2e1, 
    0x5, 0x50, 0x29, 0x2, 0x2e1, 0x2e2, 0x7, 0x6b, 0x2, 0x2, 0x2e2, 0x335, 
    0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e4, 0x7, 0x33, 0x2, 0x2, 0x2e4, 0x2e5, 
    0x7, 0x69, 0x2, 0x2, 0x2e5, 0x2e6, 0x5, 0x50, 0x29, 0x2, 0x2e6, 0x2e7, 
    0x7, 0x6b, 0x2, 0x2, 0x2e7, 0x335, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2e9, 
    0x7, 0x34, 0x2, 0x2, 0x2e9, 0x2ea, 0x7, 0x69, 0x2, 0x2, 0x2ea, 0x2eb, 
    0x5, 0x50, 0x29, 0x2, 0x2eb, 0x2ec, 0x7, 0x6b, 0x2, 0x2, 0x2ec, 0x335, 
    0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2ee, 0x7, 0x35, 0x2, 0x2, 0x2ee, 0x2ef, 
    0x7, 0x69, 0x2, 0x2, 0x2ef, 0x2f0, 0x5, 0x50, 0x29, 0x2, 0x2f0, 0x2f1, 
    0x7, 0x6b, 0x2, 0x2, 0x2f1, 0x335, 0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2f3, 
    0x7, 0x36, 0x2, 0x2, 0x2f3, 0x2f4, 0x7, 0x69, 0x2, 0x2, 0x2f4, 0x2f5, 
    0x5, 0x50, 0x29, 0x2, 0x2f5, 0x2f6, 0x7, 0x6b, 0x2, 0x2, 0x2f6, 0x335, 
    0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f8, 0x7, 0x37, 0x2, 0x2, 0x2f8, 0x2f9, 
    0x7, 0x69, 0x2, 0x2, 0x2f9, 0x2fa, 0x5, 0x50, 0x29, 0x2, 0x2fa, 0x2fb, 
    0x7, 0x6b, 0x2, 0x2, 0x2fb, 0x335, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fd, 
    0x7, 0x38, 0x2, 0x2, 0x2fd, 0x2fe, 0x7, 0x69, 0x2, 0x2, 0x2fe, 0x2ff, 
    0x5, 0x50, 0x29, 0x2, 0x2ff, 0x300, 0x7, 0x6b, 0x2, 0x2, 0x300, 0x335, 
    0x3, 0x2, 0x2, 0x2, 0x301, 0x302, 0x7, 0x39, 0x2, 0x2, 0x302, 0x303, 
    0x7, 0x69, 0x2, 0x2, 0x303, 0x304, 0x5, 0x50, 0x29, 0x2, 0x304, 0x305, 
    0x7, 0x6b, 0x2, 0x2, 0x305, 0x335, 0x3, 0x2, 0x2, 0x2, 0x306, 0x307, 
    0x7, 0x3a, 0x2, 0x2, 0x307, 0x308, 0x7, 0x69, 0x2, 0x2, 0x308, 0x309, 
    0x5, 0x50, 0x29, 0x2, 0x309, 0x30a, 0x7, 0x6b, 0x2, 0x2, 0x30a, 0x335, 
    0x3, 0x2, 0x2, 0x2, 0x30b, 0x30c, 0x7, 0x2e, 0x2, 0x2, 0x30c, 0x30d, 
    0x7, 0x69, 0x2, 0x2, 0x30d, 0x30e, 0x5, 0x50, 0x29, 0x2, 0x30e, 0x30f, 
    0x7, 0x6b, 0x2, 0x2, 0x30f, 0x335, 0x3, 0x2, 0x2, 0x2, 0x310, 0x311, 
    0x7, 0x3b, 0x2, 0x2, 0x311, 0x312, 0x7, 0x69, 0x2, 0x2, 0x312, 0x313, 
    0x5, 0x50, 0x29, 0x2, 0x313, 0x314, 0x7, 0x6b, 0x2, 0x2, 0x314, 0x335, 
    0x3, 0x2, 0x2, 0x2, 0x315, 0x316, 0x7, 0x3c, 0x2, 0x2, 0x316, 0x317, 
    0x7, 0x69, 0x2, 0x2, 0x317, 0x318, 0x5, 0x4c, 0x27, 0x2, 0x318, 0x319, 
    0x7, 0x6b, 0x2, 0x2, 0x319, 0x335, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x31b, 
    0x7, 0x3d, 0x2, 0x2, 0x31b, 0x31c, 0x7, 0x69, 0x2, 0x2, 0x31c, 0x31d, 
    0x5, 0x4c, 0x27, 0x2, 0x31d, 0x31e, 0x7, 0x6b, 0x2, 0x2, 0x31e, 0x335, 
    0x3, 0x2, 0x2, 0x2, 0x31f, 0x320, 0x7, 0x3e, 0x2, 0x2, 0x320, 0x321, 
    0x7, 0x69, 0x2, 0x2, 0x321, 0x322, 0x5, 0x4c, 0x27, 0x2, 0x322, 0x323, 
    0x7, 0x67, 0x2, 0x2, 0x323, 0x324, 0x5, 0x4c, 0x27, 0x2, 0x324, 0x325, 
    0x7, 0x6b, 0x2, 0x2, 0x325, 0x335, 0x3, 0x2, 0x2, 0x2, 0x326, 0x327, 
    0x7, 0x3e, 0x2, 0x2, 0x327, 0x328, 0x7, 0x69, 0x2, 0x2, 0x328, 0x329, 
    0x5, 0x4c, 0x27, 0x2, 0x329, 0x32a, 0x7, 0x67, 0x2, 0x2, 0x32a, 0x32b, 
    0x5, 0x4c, 0x27, 0x2, 0x32b, 0x32c, 0x7, 0x67, 0x2, 0x2, 0x32c, 0x32d, 
    0x5, 0x50, 0x29, 0x2, 0x32d, 0x32e, 0x7, 0x6b, 0x2, 0x2, 0x32e, 0x335, 
    0x3, 0x2, 0x2, 0x2, 0x32f, 0x330, 0x7, 0x3f, 0x2, 0x2, 0x330, 0x331, 
    0x7, 0x69, 0x2, 0x2, 0x331, 0x332, 0x5, 0x4c, 0x27, 0x2, 0x332, 0x333, 
    0x7, 0x6b, 0x2, 0x2, 0x333, 0x335, 0x3, 0x2, 0x2, 0x2, 0x334, 0x2c5, 
    0x3, 0x2, 0x2, 0x2, 0x334, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x334, 0x2c7, 
    0x3, 0x2, 0x2, 0x2, 0x334, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x334, 0x2c9, 
    0x3, 0x2, 0x2, 0x2, 0x334, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x334, 0x2cf, 
    0x3, 0x2, 0x2, 0x2, 0x334, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x334, 0x2d9, 
    0x3, 0x2, 0x2, 0x2, 0x334, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x334, 0x2e3, 
    0x3, 0x2, 0x2, 0x2, 0x334, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x334, 0x2ed, 
    0x3, 0x2, 0x2, 0x2, 0x334, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x334, 0x2f7, 
    0x3, 0x2, 0x2, 0x2, 0x334, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x334, 0x301, 
    0x3, 0x2, 0x2, 0x2, 0x334, 0x306, 0x3, 0x2, 0x2, 0x2, 0x334, 0x30b, 
    0x3, 0x2, 0x2, 0x2, 0x334, 0x310, 0x3, 0x2, 0x2, 0x2, 0x334, 0x315, 
    0x3, 0x2, 0x2, 0x2, 0x334, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x334, 0x31f, 
    0x3, 0x2, 0x2, 0x2, 0x334, 0x326, 0x3, 0x2, 0x2, 0x2, 0x334, 0x32f, 
    0x3, 0x2, 0x2, 0x2, 0x335, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x336, 0x337, 0x8, 
    0x29, 0x1, 0x2, 0x337, 0x345, 0x5, 0x3e, 0x20, 0x2, 0x338, 0x345, 0x5, 
    0x1a, 0xe, 0x2, 0x339, 0x345, 0x5, 0x4e, 0x28, 0x2, 0x33a, 0x33b, 0x7, 
    0x50, 0x2, 0x2, 0x33b, 0x345, 0x5, 0x50, 0x29, 0x12, 0x33c, 0x33d, 0x7, 
    0x69, 0x2, 0x2, 0x33d, 0x33e, 0x5, 0x50, 0x29, 0x2, 0x33e, 0x33f, 0x7, 
    0x6b, 0x2, 0x2, 0x33f, 0x345, 0x3, 0x2, 0x2, 0x2, 0x340, 0x341, 0x5, 
    0x4c, 0x27, 0x2, 0x341, 0x342, 0x5, 0x52, 0x2a, 0x2, 0x342, 0x343, 0x5, 
    0x4c, 0x27, 0x2, 0x343, 0x345, 0x3, 0x2, 0x2, 0x2, 0x344, 0x336, 0x3, 
    0x2, 0x2, 0x2, 0x344, 0x338, 0x3, 0x2, 0x2, 0x2, 0x344, 0x339, 0x3, 
    0x2, 0x2, 0x2, 0x344, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x344, 0x33c, 0x3, 
    0x2, 0x2, 0x2, 0x344, 0x340, 0x3, 0x2, 0x2, 0x2, 0x345, 0x370, 0x3, 
    0x2, 0x2, 0x2, 0x346, 0x347, 0xc, 0x10, 0x2, 0x2, 0x347, 0x348, 0x7, 
    0x56, 0x2, 0x2, 0x348, 0x36f, 0x5, 0x50, 0x29, 0x10, 0x349, 0x34a, 0xc, 
    0xf, 0x2, 0x2, 0x34a, 0x34b, 0x7, 0x59, 0x2, 0x2, 0x34b, 0x36f, 0x5, 
    0x50, 0x29, 0x10, 0x34c, 0x34d, 0xc, 0xe, 0x2, 0x2, 0x34d, 0x34e, 0x7, 
    0x5a, 0x2, 0x2, 0x34e, 0x36f, 0x5, 0x50, 0x29, 0xf, 0x34f, 0x350, 0xc, 
    0xd, 0x2, 0x2, 0x350, 0x351, 0x7, 0x55, 0x2, 0x2, 0x351, 0x36f, 0x5, 
    0x50, 0x29, 0xe, 0x352, 0x353, 0xc, 0xc, 0x2, 0x2, 0x353, 0x354, 0x7, 
    0x54, 0x2, 0x2, 0x354, 0x36f, 0x5, 0x50, 0x29, 0xd, 0x355, 0x356, 0xc, 
    0xb, 0x2, 0x2, 0x356, 0x357, 0x7, 0x57, 0x2, 0x2, 0x357, 0x36f, 0x5, 
    0x50, 0x29, 0xc, 0x358, 0x359, 0xc, 0xa, 0x2, 0x2, 0x359, 0x35a, 0x7, 
    0x58, 0x2, 0x2, 0x35a, 0x36f, 0x5, 0x50, 0x29, 0xb, 0x35b, 0x35c, 0xc, 
    0x9, 0x2, 0x2, 0x35c, 0x35d, 0x5, 0x52, 0x2a, 0x2, 0x35d, 0x35e, 0x5, 
    0x50, 0x29, 0xa, 0x35e, 0x36f, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x360, 0xc, 
    0x7, 0x2, 0x2, 0x360, 0x361, 0x7, 0x5b, 0x2, 0x2, 0x361, 0x36f, 0x5, 
    0x50, 0x29, 0x8, 0x362, 0x363, 0xc, 0x6, 0x2, 0x2, 0x363, 0x364, 0x7, 
    0x5c, 0x2, 0x2, 0x364, 0x36f, 0x5, 0x50, 0x29, 0x7, 0x365, 0x366, 0xc, 
    0x5, 0x2, 0x2, 0x366, 0x367, 0x7, 0x51, 0x2, 0x2, 0x367, 0x36f, 0x5, 
    0x50, 0x29, 0x6, 0x368, 0x369, 0xc, 0x4, 0x2, 0x2, 0x369, 0x36a, 0x7, 
    0x52, 0x2, 0x2, 0x36a, 0x36f, 0x5, 0x50, 0x29, 0x5, 0x36b, 0x36c, 0xc, 
    0x3, 0x2, 0x2, 0x36c, 0x36d, 0x7, 0x53, 0x2, 0x2, 0x36d, 0x36f, 0x5, 
    0x50, 0x29, 0x4, 0x36e, 0x346, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x349, 0x3, 
    0x2, 0x2, 0x2, 0x36e, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x34f, 0x3, 
    0x2, 0x2, 0x2, 0x36e, 0x352, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x355, 0x3, 
    0x2, 0x2, 0x2, 0x36e, 0x358, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x35b, 0x3, 
    0x2, 0x2, 0x2, 0x36e, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x362, 0x3, 
    0x2, 0x2, 0x2, 0x36e, 0x365, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x368, 0x3, 
    0x2, 0x2, 0x2, 0x36e, 0x36b, 0x3, 0x2, 0x2, 0x2, 0x36f, 0x372, 0x3, 
    0x2, 0x2, 0x2, 0x370, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x370, 0x371, 0x3, 
    0x2, 0x2, 0x2, 0x371, 0x51, 0x3, 0x2, 0x2, 0x2, 0x372, 0x370, 0x3, 0x2, 
    0x2, 0x2, 0x373, 0x37a, 0x7, 0x4a, 0x2, 0x2, 0x374, 0x37a, 0x7, 0x4b, 
    0x2, 0x2, 0x375, 0x37a, 0x7, 0x4c, 0x2, 0x2, 0x376, 0x37a, 0x7, 0x4d, 
    0x2, 0x2, 0x377, 0x37a, 0x7, 0x4e, 0x2, 0x2, 0x378, 0x37a, 0x7, 0x4f, 
    0x2, 0x2, 0x379, 0x373, 0x3, 0x2, 0x2, 0x2, 0x379, 0x374, 0x3, 0x2, 
    0x2, 0x2, 0x379, 0x375, 0x3, 0x2, 0x2, 0x2, 0x379, 0x376, 0x3, 0x2, 
    0x2, 0x2, 0x379, 0x377, 0x3, 0x2, 0x2, 0x2, 0x379, 0x378, 0x3, 0x2, 
    0x2, 0x2, 0x37a, 0x53, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x66, 0x6b, 0x6f, 
    0x73, 0x77, 0x7c, 0x89, 0x8d, 0x99, 0xa2, 0xa8, 0xac, 0xb2, 0xb6, 0xbf, 
    0xc3, 0xca, 0xd3, 0xda, 0xe7, 0xee, 0xf3, 0xf8, 0xfd, 0x105, 0x109, 
    0x10c, 0x10e, 0x11a, 0x128, 0x132, 0x137, 0x13c, 0x145, 0x153, 0x15c, 
    0x166, 0x16b, 0x173, 0x17d, 0x182, 0x18c, 0x192, 0x19b, 0x1a1, 0x1b9, 
    0x1bf, 0x1c5, 0x1c8, 0x1d0, 0x1d6, 0x1e2, 0x1e7, 0x1eb, 0x1fb, 0x201, 
    0x20d, 0x216, 0x220, 0x224, 0x229, 0x22e, 0x236, 0x23e, 0x242, 0x24c, 
    0x251, 0x254, 0x257, 0x25c, 0x260, 0x265, 0x26b, 0x26e, 0x277, 0x2b3, 
    0x2bb, 0x2c2, 0x334, 0x344, 0x36e, 0x370, 0x379, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

DARICParser::Initializer DARICParser::_init;
