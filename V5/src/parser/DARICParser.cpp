
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
    setState(89);
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
      | (1ULL << DARICParser::OSCLI)
      | (1ULL << DARICParser::PRINT)
      | (1ULL << DARICParser::READ)
      | (1ULL << DARICParser::REM)
      | (1ULL << DARICParser::REPEAT)
      | (1ULL << DARICParser::RESTORE)
      | (1ULL << DARICParser::RETURN)
      | (1ULL << DARICParser::SWAP)
      | (1ULL << DARICParser::TRACEON)
      | (1ULL << DARICParser::TRACEOFF)
      | (1ULL << DARICParser::TYPE)
      | (1ULL << DARICParser::WHILE)
      | (1ULL << DARICParser::BGETH)
      | (1ULL << DARICParser::BPUTH)
      | (1ULL << DARICParser::CLOSEH)
      | (1ULL << DARICParser::PTRH))) != 0) || ((((_la - 119) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 119)) & ((1ULL << (DARICParser::NEWLINE - 119))
      | (1ULL << (DARICParser::COLON - 119))
      | (1ULL << (DARICParser::COMMENT - 119))
      | (1ULL << (DARICParser::PROC_NAME - 119))
      | (1ULL << (DARICParser::FN_INTEGER - 119))
      | (1ULL << (DARICParser::FN_FLOAT - 119))
      | (1ULL << (DARICParser::FN_STRING - 119))
      | (1ULL << (DARICParser::VARIABLE_FLOAT - 119))
      | (1ULL << (DARICParser::VARIABLE_INTEGER - 119))
      | (1ULL << (DARICParser::VARIABLE_STRING - 119))
      | (1ULL << (DARICParser::VARIABLE_TYPE - 119))
      | (1ULL << (DARICParser::NUMBER - 119)))) != 0)) {
      setState(86);
      line();
      setState(91);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(92);
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

DARICParser::LinenumberContext* DARICParser::LineContext::linenumber() {
  return getRuleContext<DARICParser::LinenumberContext>(0);
}

tree::TerminalNode* DARICParser::LineContext::COLON() {
  return getToken(DARICParser::COLON, 0);
}

DARICParser::ContentContext* DARICParser::LineContext::content() {
  return getRuleContext<DARICParser::ContentContext>(0);
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
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(107);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(94);
      match(DARICParser::NEWLINE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(95);
      linenumber();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(97);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::NUMBER) {
        setState(96);
        linenumber();
      }
      setState(99);
      match(DARICParser::COLON);
      setState(100);
      match(DARICParser::NEWLINE);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(102);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::NUMBER) {
        setState(101);
        linenumber();
      }
      setState(104);
      content();
      setState(105);
      match(DARICParser::NEWLINE);
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

//----------------- ContentContext ------------------------------------------------------------------

DARICParser::ContentContext::ContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
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
    setState(109);
    stmt();
    setState(116);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(110);
        match(DARICParser::COLON);
        setState(112);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          setState(111);
          stmt();
          break;
        }

        default:
          break;
        } 
      }
      setState(118);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
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
    setState(121);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(119);
      content();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(120);
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

tree::TerminalNode* DARICParser::BodyStarContext::COLON() {
  return getToken(DARICParser::COLON, 0);
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
    setState(124);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(123);
      match(DARICParser::COLON);
      break;
    }

    default:
      break;
    }
    setState(129);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(126);
        body(); 
      }
      setState(131);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
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
    setState(132);
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

//----------------- StmtPTRHContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtPTRHContext::PTRH() {
  return getToken(DARICParser::PTRH, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StmtPTRHContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StmtPTRHContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::StmtPTRHContext::EQ() {
  return getToken(DARICParser::EQ, 0);
}

DARICParser::StmtPTRHContext::StmtPTRHContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtPTRHContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtPTRH(this);
  else
    return visitor->visitChildren(this);
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
//----------------- StmtBGETHContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtBGETHContext::BGETH() {
  return getToken(DARICParser::BGETH, 0);
}

DARICParser::NumExprContext* DARICParser::StmtBGETHContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

DARICParser::StmtBGETHContext::StmtBGETHContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtBGETHContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtBGETH(this);
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
//----------------- StmtSWAPContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtSWAPContext::SWAP() {
  return getToken(DARICParser::SWAP, 0);
}

std::vector<DARICParser::JustVarContext *> DARICParser::StmtSWAPContext::justVar() {
  return getRuleContexts<DARICParser::JustVarContext>();
}

DARICParser::JustVarContext* DARICParser::StmtSWAPContext::justVar(size_t i) {
  return getRuleContext<DARICParser::JustVarContext>(i);
}

tree::TerminalNode* DARICParser::StmtSWAPContext::COMMA() {
  return getToken(DARICParser::COMMA, 0);
}

DARICParser::StmtSWAPContext::StmtSWAPContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtSWAPContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtSWAP(this);
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
//----------------- StmtCLOSEHContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtCLOSEHContext::CLOSEH() {
  return getToken(DARICParser::CLOSEH, 0);
}

DARICParser::NumExprContext* DARICParser::StmtCLOSEHContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

DARICParser::StmtCLOSEHContext::StmtCLOSEHContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtCLOSEHContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCLOSEH(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtREMContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtREMContext::COMMENT() {
  return getToken(DARICParser::COMMENT, 0);
}

tree::TerminalNode* DARICParser::StmtREMContext::REM() {
  return getToken(DARICParser::REM, 0);
}

DARICParser::StmtREMContext::StmtREMContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtREMContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtREM(this);
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
//----------------- StmtOSCLIContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtOSCLIContext::OSCLI() {
  return getToken(DARICParser::OSCLI, 0);
}

DARICParser::StrExprContext* DARICParser::StmtOSCLIContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}

DARICParser::StmtOSCLIContext::StmtOSCLIContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtOSCLIContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtOSCLI(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtRETURNContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtRETURNContext::RETURN() {
  return getToken(DARICParser::RETURN, 0);
}

DARICParser::ExprContext* DARICParser::StmtRETURNContext::expr() {
  return getRuleContext<DARICParser::ExprContext>(0);
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
//----------------- StmtLISTFILESContext ------------------------------------------------------------------

DARICParser::VarNameStringContext* DARICParser::StmtLISTFILESContext::varNameString() {
  return getRuleContext<DARICParser::VarNameStringContext>(0);
}

std::vector<tree::TerminalNode *> DARICParser::StmtLISTFILESContext::LPAREN() {
  return getTokens(DARICParser::LPAREN);
}

tree::TerminalNode* DARICParser::StmtLISTFILESContext::LPAREN(size_t i) {
  return getToken(DARICParser::LPAREN, i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtLISTFILESContext::RPAREN() {
  return getTokens(DARICParser::RPAREN);
}

tree::TerminalNode* DARICParser::StmtLISTFILESContext::RPAREN(size_t i) {
  return getToken(DARICParser::RPAREN, i);
}

tree::TerminalNode* DARICParser::StmtLISTFILESContext::EQ() {
  return getToken(DARICParser::EQ, 0);
}

tree::TerminalNode* DARICParser::StmtLISTFILESContext::LISTFILES() {
  return getToken(DARICParser::LISTFILES, 0);
}

DARICParser::StrExprContext* DARICParser::StmtLISTFILESContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}

tree::TerminalNode* DARICParser::StmtLISTFILESContext::LOCAL() {
  return getToken(DARICParser::LOCAL, 0);
}

DARICParser::StmtLISTFILESContext::StmtLISTFILESContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtLISTFILESContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtLISTFILES(this);
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
//----------------- StmtBPUTHContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtBPUTHContext::BPUTH() {
  return getToken(DARICParser::BPUTH, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StmtBPUTHContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StmtBPUTHContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::StmtBPUTHContext::COMMA() {
  return getToken(DARICParser::COMMA, 0);
}

DARICParser::StmtBPUTHContext::StmtBPUTHContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtBPUTHContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtBPUTH(this);
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
//----------------- StmtOperatorEqualContext ------------------------------------------------------------------

DARICParser::VarDeclContext* DARICParser::StmtOperatorEqualContext::varDecl() {
  return getRuleContext<DARICParser::VarDeclContext>(0);
}

tree::TerminalNode* DARICParser::StmtOperatorEqualContext::MULTIPLY_E() {
  return getToken(DARICParser::MULTIPLY_E, 0);
}

DARICParser::NumExprContext* DARICParser::StmtOperatorEqualContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::StmtOperatorEqualContext::DIVIDE_E() {
  return getToken(DARICParser::DIVIDE_E, 0);
}

tree::TerminalNode* DARICParser::StmtOperatorEqualContext::PLUS_E() {
  return getToken(DARICParser::PLUS_E, 0);
}

tree::TerminalNode* DARICParser::StmtOperatorEqualContext::MINUS_E() {
  return getToken(DARICParser::MINUS_E, 0);
}

tree::TerminalNode* DARICParser::StmtOperatorEqualContext::SHL_E() {
  return getToken(DARICParser::SHL_E, 0);
}

tree::TerminalNode* DARICParser::StmtOperatorEqualContext::SHR_E() {
  return getToken(DARICParser::SHR_E, 0);
}

DARICParser::StmtOperatorEqualContext::StmtOperatorEqualContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtOperatorEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtOperatorEqual(this);
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

std::vector<tree::TerminalNode *> DARICParser::StmtIFMultilineContext::NEWLINE() {
  return getTokens(DARICParser::NEWLINE);
}

tree::TerminalNode* DARICParser::StmtIFMultilineContext::NEWLINE(size_t i) {
  return getToken(DARICParser::NEWLINE, i);
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
    setState(418);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtREMContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(134);
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

    case 2: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtBREAKPOINTContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(135);
      match(DARICParser::BREAKPOINT);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCASEContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(136);
      match(DARICParser::CASE);
      setState(137);
      expr();
      setState(138);
      match(DARICParser::OF);
      setState(139);
      match(DARICParser::NEWLINE);
      setState(141); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(140);
        when();
        setState(143); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == DARICParser::WHEN);
      setState(147);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::OTHERWISE) {
        setState(145);
        match(DARICParser::OTHERWISE);
        setState(146);
        bodyStar();
      }
      setState(149);
      match(DARICParser::ENDCASE);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCHAINContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(151);
      match(DARICParser::CHAIN);
      setState(152);
      strExpr(0);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtDATAContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(153);
      match(DARICParser::DATA);
      setState(154);
      literal();
      setState(159);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::COMMA) {
        setState(155);
        match(DARICParser::COMMA);
        setState(156);
        literal();
        setState(161);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtDIMContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(162);
      match(DARICParser::DIM);
      setState(163);
      varDeclWithDimension();
      setState(168);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::COMMA) {
        setState(164);
        match(DARICParser::COMMA);
        setState(165);
        varDeclWithDimension();
        setState(170);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtENDContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(171);
      match(DARICParser::END);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtRETURNContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(172);
      match(DARICParser::RETURN);
      setState(174);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        setState(173);
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
      setState(176);
      match(DARICParser::DEF);
      setState(177);
      fnName();
      setState(178);
      match(DARICParser::LPAREN);
      setState(180);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::RETURN || ((((_la - 137) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 137)) & ((1ULL << (DARICParser::VARIABLE_FLOAT - 137))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 137))
        | (1ULL << (DARICParser::VARIABLE_STRING - 137)))) != 0)) {
        setState(179);
        functionVarList();
      }
      setState(182);
      match(DARICParser::RPAREN);
      setState(183);
      bodyStar();
      setState(184);
      match(DARICParser::ENDFN);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtDEFPROCContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(186);
      match(DARICParser::DEF);
      setState(187);
      match(DARICParser::PROC_NAME);
      setState(188);
      match(DARICParser::LPAREN);
      setState(190);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::RETURN || ((((_la - 137) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 137)) & ((1ULL << (DARICParser::VARIABLE_FLOAT - 137))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 137))
        | (1ULL << (DARICParser::VARIABLE_STRING - 137)))) != 0)) {
        setState(189);
        functionVarList();
      }
      setState(192);
      match(DARICParser::RPAREN);
      setState(193);
      bodyStar();
      setState(194);
      match(DARICParser::ENDPROC);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtFORContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(196);
      match(DARICParser::FOR);
      setState(198);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::LOCAL) {
        setState(197);
        match(DARICParser::LOCAL);
      }
      setState(200);
      justNumberVar();
      setState(201);
      match(DARICParser::EQ);
      setState(202);
      numExpr(0);
      setState(203);
      match(DARICParser::TO);
      setState(204);
      numExpr(0);
      setState(207);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::STEP) {
        setState(205);
        match(DARICParser::STEP);
        setState(206);
        numExpr(0);
      }
      setState(209);
      bodyStar();
      setState(210);
      match(DARICParser::NEXT);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtFORINContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(212);
      match(DARICParser::FOR);
      setState(214);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::LOCAL) {
        setState(213);
        match(DARICParser::LOCAL);
      }
      setState(216);
      justVar();
      setState(217);
      match(DARICParser::IN);
      setState(218);
      justVar();
      setState(219);
      match(DARICParser::LPAREN);
      setState(220);
      match(DARICParser::RPAREN);
      setState(221);
      bodyStar();
      setState(222);
      match(DARICParser::NEXT);
      break;
    }

    case 13: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCallFNContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(224);
      fnName();
      setState(225);
      match(DARICParser::LPAREN);
      setState(227);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << DARICParser::FALSE)
        | (1ULL << DARICParser::TRUE)
        | (1ULL << DARICParser::RED)
        | (1ULL << DARICParser::GREEN)
        | (1ULL << DARICParser::YELLOW)
        | (1ULL << DARICParser::BLUE)
        | (1ULL << DARICParser::MAGENTA)
        | (1ULL << DARICParser::CYAN)
        | (1ULL << DARICParser::WHITE)
        | (1ULL << DARICParser::BLACK)
        | (1ULL << DARICParser::BGETH)
        | (1ULL << DARICParser::EOFH)
        | (1ULL << DARICParser::OPENIN)
        | (1ULL << DARICParser::OPENOUT)
        | (1ULL << DARICParser::OPENUP)
        | (1ULL << DARICParser::PTRH))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::TIME - 64))
        | (1ULL << (DARICParser::PI - 64))
        | (1ULL << (DARICParser::SQR - 64))
        | (1ULL << (DARICParser::LN - 64))
        | (1ULL << (DARICParser::LOG - 64))
        | (1ULL << (DARICParser::EXP - 64))
        | (1ULL << (DARICParser::ATN - 64))
        | (1ULL << (DARICParser::TAN - 64))
        | (1ULL << (DARICParser::COS - 64))
        | (1ULL << (DARICParser::SIN - 64))
        | (1ULL << (DARICParser::ABS - 64))
        | (1ULL << (DARICParser::ACS - 64))
        | (1ULL << (DARICParser::ASN - 64))
        | (1ULL << (DARICParser::DEG - 64))
        | (1ULL << (DARICParser::RAD - 64))
        | (1ULL << (DARICParser::SGN - 64))
        | (1ULL << (DARICParser::ASC - 64))
        | (1ULL << (DARICParser::LEN - 64))
        | (1ULL << (DARICParser::INSTR - 64))
        | (1ULL << (DARICParser::VAL - 64))
        | (1ULL << (DARICParser::TIMES - 64))
        | (1ULL << (DARICParser::STRS - 64))
        | (1ULL << (DARICParser::STRINGS - 64))
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
        | (1ULL << (DARICParser::LPAREN - 64)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 132)) & ((1ULL << (DARICParser::STRINGLITERAL - 132))
        | (1ULL << (DARICParser::FN_INTEGER - 132))
        | (1ULL << (DARICParser::FN_FLOAT - 132))
        | (1ULL << (DARICParser::FN_STRING - 132))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 132))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 132))
        | (1ULL << (DARICParser::VARIABLE_STRING - 132))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 132))
        | (1ULL << (DARICParser::HEXNUMBER - 132))
        | (1ULL << (DARICParser::BINARYNUMBER - 132))
        | (1ULL << (DARICParser::NUMBER - 132))
        | (1ULL << (DARICParser::FLOAT - 132)))) != 0)) {
        setState(226);
        functionParList();
      }
      setState(229);
      match(DARICParser::RPAREN);
      break;
    }

    case 14: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtIFContext>(_localctx));
      enterOuterAlt(_localctx, 14);
      setState(231);
      match(DARICParser::IF);
      setState(232);
      expr();
      setState(234);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::THEN) {
        setState(233);
        match(DARICParser::THEN);
      }
      setState(236);
      dynamic_cast<StmtIFContext *>(_localctx)->t = content();
      setState(239);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
      case 1: {
        setState(237);
        match(DARICParser::ELSE);
        setState(238);
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
      setState(241);
      match(DARICParser::IF);
      setState(242);
      expr();
      setState(244);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::THEN) {
        setState(243);
        match(DARICParser::THEN);
      }
      setState(246);
      match(DARICParser::NEWLINE);
      setState(247);
      dynamic_cast<StmtIFMultilineContext *>(_localctx)->t = bodyStar();
      setState(250);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::ELSE) {
        setState(248);
        match(DARICParser::ELSE);
        setState(249);
        dynamic_cast<StmtIFMultilineContext *>(_localctx)->f = bodyStar();
      }
      setState(252);
      match(DARICParser::NEWLINE);
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

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
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
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
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
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtOSCLIContext>(_localctx));
      enterOuterAlt(_localctx, 20);
      setState(307);
      match(DARICParser::OSCLI);
      setState(308);
      strExpr(0);
      break;
    }

    case 21: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtPRINTContext>(_localctx));
      enterOuterAlt(_localctx, 21);
      setState(309);
      match(DARICParser::PRINT);
      setState(311);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
      case 1: {
        setState(310);
        printList();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 22: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCallPROCContext>(_localctx));
      enterOuterAlt(_localctx, 22);
      setState(313);
      match(DARICParser::PROC_NAME);
      setState(314);
      match(DARICParser::LPAREN);
      setState(316);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << DARICParser::FALSE)
        | (1ULL << DARICParser::TRUE)
        | (1ULL << DARICParser::RED)
        | (1ULL << DARICParser::GREEN)
        | (1ULL << DARICParser::YELLOW)
        | (1ULL << DARICParser::BLUE)
        | (1ULL << DARICParser::MAGENTA)
        | (1ULL << DARICParser::CYAN)
        | (1ULL << DARICParser::WHITE)
        | (1ULL << DARICParser::BLACK)
        | (1ULL << DARICParser::BGETH)
        | (1ULL << DARICParser::EOFH)
        | (1ULL << DARICParser::OPENIN)
        | (1ULL << DARICParser::OPENOUT)
        | (1ULL << DARICParser::OPENUP)
        | (1ULL << DARICParser::PTRH))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::TIME - 64))
        | (1ULL << (DARICParser::PI - 64))
        | (1ULL << (DARICParser::SQR - 64))
        | (1ULL << (DARICParser::LN - 64))
        | (1ULL << (DARICParser::LOG - 64))
        | (1ULL << (DARICParser::EXP - 64))
        | (1ULL << (DARICParser::ATN - 64))
        | (1ULL << (DARICParser::TAN - 64))
        | (1ULL << (DARICParser::COS - 64))
        | (1ULL << (DARICParser::SIN - 64))
        | (1ULL << (DARICParser::ABS - 64))
        | (1ULL << (DARICParser::ACS - 64))
        | (1ULL << (DARICParser::ASN - 64))
        | (1ULL << (DARICParser::DEG - 64))
        | (1ULL << (DARICParser::RAD - 64))
        | (1ULL << (DARICParser::SGN - 64))
        | (1ULL << (DARICParser::ASC - 64))
        | (1ULL << (DARICParser::LEN - 64))
        | (1ULL << (DARICParser::INSTR - 64))
        | (1ULL << (DARICParser::VAL - 64))
        | (1ULL << (DARICParser::TIMES - 64))
        | (1ULL << (DARICParser::STRS - 64))
        | (1ULL << (DARICParser::STRINGS - 64))
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
        | (1ULL << (DARICParser::LPAREN - 64)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 132)) & ((1ULL << (DARICParser::STRINGLITERAL - 132))
        | (1ULL << (DARICParser::FN_INTEGER - 132))
        | (1ULL << (DARICParser::FN_FLOAT - 132))
        | (1ULL << (DARICParser::FN_STRING - 132))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 132))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 132))
        | (1ULL << (DARICParser::VARIABLE_STRING - 132))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 132))
        | (1ULL << (DARICParser::HEXNUMBER - 132))
        | (1ULL << (DARICParser::BINARYNUMBER - 132))
        | (1ULL << (DARICParser::NUMBER - 132))
        | (1ULL << (DARICParser::FLOAT - 132)))) != 0)) {
        setState(315);
        functionParList();
      }
      setState(318);
      match(DARICParser::RPAREN);
      break;
    }

    case 23: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtREADContext>(_localctx));
      enterOuterAlt(_localctx, 23);
      setState(319);
      match(DARICParser::READ);
      setState(320);
      varDecl();
      setState(325);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::COMMA) {
        setState(321);
        match(DARICParser::COMMA);
        setState(322);
        varDecl();
        setState(327);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 24: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtRESTOREContext>(_localctx));
      enterOuterAlt(_localctx, 24);
      setState(328);
      match(DARICParser::RESTORE);
      break;
    }

    case 25: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtSWAPContext>(_localctx));
      enterOuterAlt(_localctx, 25);
      setState(329);
      match(DARICParser::SWAP);
      setState(330);
      justVar();
      setState(331);
      match(DARICParser::COMMA);
      setState(332);
      justVar();
      break;
    }

    case 26: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtTRACEONContext>(_localctx));
      enterOuterAlt(_localctx, 26);
      setState(334);
      match(DARICParser::TRACEON);
      break;
    }

    case 27: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtTRACEOFFContext>(_localctx));
      enterOuterAlt(_localctx, 27);
      setState(335);
      match(DARICParser::TRACEOFF);
      break;
    }

    case 28: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtTYPEContext>(_localctx));
      enterOuterAlt(_localctx, 28);
      setState(336);
      match(DARICParser::TYPE);
      setState(337);
      varName();
      setState(338);
      match(DARICParser::LPAREN);
      setState(339);
      justVar();
      setState(344);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::COMMA) {
        setState(340);
        match(DARICParser::COMMA);
        setState(341);
        justVar();
        setState(346);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(347);
      match(DARICParser::RPAREN);
      break;
    }

    case 29: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtREPEATContext>(_localctx));
      enterOuterAlt(_localctx, 29);
      setState(349);
      match(DARICParser::REPEAT);
      setState(353);
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
        | (1ULL << DARICParser::OSCLI)
        | (1ULL << DARICParser::PRINT)
        | (1ULL << DARICParser::READ)
        | (1ULL << DARICParser::REM)
        | (1ULL << DARICParser::REPEAT)
        | (1ULL << DARICParser::RESTORE)
        | (1ULL << DARICParser::RETURN)
        | (1ULL << DARICParser::SWAP)
        | (1ULL << DARICParser::TRACEON)
        | (1ULL << DARICParser::TRACEOFF)
        | (1ULL << DARICParser::TYPE)
        | (1ULL << DARICParser::WHILE)
        | (1ULL << DARICParser::BGETH)
        | (1ULL << DARICParser::BPUTH)
        | (1ULL << DARICParser::CLOSEH)
        | (1ULL << DARICParser::PTRH))) != 0) || ((((_la - 119) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 119)) & ((1ULL << (DARICParser::NEWLINE - 119))
        | (1ULL << (DARICParser::COLON - 119))
        | (1ULL << (DARICParser::COMMENT - 119))
        | (1ULL << (DARICParser::PROC_NAME - 119))
        | (1ULL << (DARICParser::FN_INTEGER - 119))
        | (1ULL << (DARICParser::FN_FLOAT - 119))
        | (1ULL << (DARICParser::FN_STRING - 119))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 119))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 119))
        | (1ULL << (DARICParser::VARIABLE_STRING - 119))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 119))
        | (1ULL << (DARICParser::NUMBER - 119)))) != 0)) {
        setState(350);
        body();
        setState(355);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(356);
      match(DARICParser::UNTIL);
      setState(357);
      expr();
      break;
    }

    case 30: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtWHILEContext>(_localctx));
      enterOuterAlt(_localctx, 30);
      setState(358);
      match(DARICParser::WHILE);
      setState(359);
      expr();
      setState(363);
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
        | (1ULL << DARICParser::OSCLI)
        | (1ULL << DARICParser::PRINT)
        | (1ULL << DARICParser::READ)
        | (1ULL << DARICParser::REM)
        | (1ULL << DARICParser::REPEAT)
        | (1ULL << DARICParser::RESTORE)
        | (1ULL << DARICParser::RETURN)
        | (1ULL << DARICParser::SWAP)
        | (1ULL << DARICParser::TRACEON)
        | (1ULL << DARICParser::TRACEOFF)
        | (1ULL << DARICParser::TYPE)
        | (1ULL << DARICParser::WHILE)
        | (1ULL << DARICParser::BGETH)
        | (1ULL << DARICParser::BPUTH)
        | (1ULL << DARICParser::CLOSEH)
        | (1ULL << DARICParser::PTRH))) != 0) || ((((_la - 119) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 119)) & ((1ULL << (DARICParser::NEWLINE - 119))
        | (1ULL << (DARICParser::COLON - 119))
        | (1ULL << (DARICParser::COMMENT - 119))
        | (1ULL << (DARICParser::PROC_NAME - 119))
        | (1ULL << (DARICParser::FN_INTEGER - 119))
        | (1ULL << (DARICParser::FN_FLOAT - 119))
        | (1ULL << (DARICParser::FN_STRING - 119))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 119))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 119))
        | (1ULL << (DARICParser::VARIABLE_STRING - 119))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 119))
        | (1ULL << (DARICParser::NUMBER - 119)))) != 0)) {
        setState(360);
        body();
        setState(365);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(366);
      match(DARICParser::ENDWHILE);
      break;
    }

    case 31: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtOperatorEqualContext>(_localctx));
      enterOuterAlt(_localctx, 31);
      setState(368);
      varDecl();
      setState(369);
      match(DARICParser::MULTIPLY_E);
      setState(370);
      numExpr(0);
      break;
    }

    case 32: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtOperatorEqualContext>(_localctx));
      enterOuterAlt(_localctx, 32);
      setState(372);
      varDecl();
      setState(373);
      match(DARICParser::DIVIDE_E);
      setState(374);
      numExpr(0);
      break;
    }

    case 33: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtOperatorEqualContext>(_localctx));
      enterOuterAlt(_localctx, 33);
      setState(376);
      varDecl();
      setState(377);
      match(DARICParser::PLUS_E);
      setState(378);
      numExpr(0);
      break;
    }

    case 34: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtOperatorEqualContext>(_localctx));
      enterOuterAlt(_localctx, 34);
      setState(380);
      varDecl();
      setState(381);
      match(DARICParser::MINUS_E);
      setState(382);
      numExpr(0);
      break;
    }

    case 35: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtOperatorEqualContext>(_localctx));
      enterOuterAlt(_localctx, 35);
      setState(384);
      varDecl();
      setState(385);
      match(DARICParser::SHL_E);
      setState(386);
      numExpr(0);
      break;
    }

    case 36: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtOperatorEqualContext>(_localctx));
      enterOuterAlt(_localctx, 36);
      setState(388);
      varDecl();
      setState(389);
      match(DARICParser::SHR_E);
      setState(390);
      numExpr(0);
      break;
    }

    case 37: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtBPUTHContext>(_localctx));
      enterOuterAlt(_localctx, 37);
      setState(392);
      match(DARICParser::BPUTH);
      setState(393);
      numExpr(0);
      setState(394);
      match(DARICParser::COMMA);
      setState(395);
      numExpr(0);
      break;
    }

    case 38: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtBGETHContext>(_localctx));
      enterOuterAlt(_localctx, 38);
      setState(397);
      match(DARICParser::BGETH);
      setState(398);
      numExpr(0);
      break;
    }

    case 39: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtPTRHContext>(_localctx));
      enterOuterAlt(_localctx, 39);
      setState(399);
      match(DARICParser::PTRH);
      setState(400);
      numExpr(0);
      setState(401);
      match(DARICParser::EQ);
      setState(402);
      numExpr(0);
      break;
    }

    case 40: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCLOSEHContext>(_localctx));
      enterOuterAlt(_localctx, 40);
      setState(404);
      match(DARICParser::CLOSEH);
      setState(405);
      numExpr(0);
      break;
    }

    case 41: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtLISTFILESContext>(_localctx));
      enterOuterAlt(_localctx, 41);
      setState(407);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::LOCAL) {
        setState(406);
        match(DARICParser::LOCAL);
      }
      setState(409);
      varNameString();
      setState(410);
      match(DARICParser::LPAREN);
      setState(411);
      match(DARICParser::RPAREN);
      setState(412);
      match(DARICParser::EQ);
      setState(413);
      match(DARICParser::LISTFILES);
      setState(414);
      match(DARICParser::LPAREN);
      setState(415);
      strExpr(0);
      setState(416);
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
    setState(420);
    match(DARICParser::WHEN);
    setState(421);
    expr();
    setState(426);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(422);
      match(DARICParser::COMMA);
      setState(423);
      expr();
      setState(428);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(429);
    match(DARICParser::COLON);
    setState(430);
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
    setState(432);
    _la = _input->LA(1);
    if (!(((((_la - 134) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 134)) & ((1ULL << (DARICParser::FN_INTEGER - 134))
      | (1ULL << (DARICParser::FN_FLOAT - 134))
      | (1ULL << (DARICParser::FN_STRING - 134)))) != 0))) {
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
    setState(436);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::RED:
      case DARICParser::GREEN:
      case DARICParser::YELLOW:
      case DARICParser::BLUE:
      case DARICParser::MAGENTA:
      case DARICParser::CYAN:
      case DARICParser::WHITE:
      case DARICParser::BLACK:
      case DARICParser::PLUS:
      case DARICParser::MINUS:
      case DARICParser::HEXNUMBER:
      case DARICParser::BINARYNUMBER:
      case DARICParser::NUMBER:
      case DARICParser::FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(434);
        number();
        break;
      }

      case DARICParser::STRINGLITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(435);
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
    setState(441);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(438);
      numVar();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(439);
      strVar();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(440);
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
    setState(443);
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

tree::TerminalNode* DARICParser::NumVarFloatArrayContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::NumVarFloatArrayContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumVarFloatArrayContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumVarFloatArrayContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

tree::TerminalNode* DARICParser::NumVarFloatArrayContext::COMMA() {
  return getToken(DARICParser::COMMA, 0);
}

DARICParser::NumVarFloatArrayContext::NumVarFloatArrayContext(NumVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumVarFloatArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumVarFloatArray(this);
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
//----------------- NumVarIntegerArrayContext ------------------------------------------------------------------

DARICParser::VarNameIntegerContext* DARICParser::NumVarIntegerArrayContext::varNameInteger() {
  return getRuleContext<DARICParser::VarNameIntegerContext>(0);
}

tree::TerminalNode* DARICParser::NumVarIntegerArrayContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::NumVarIntegerArrayContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumVarIntegerArrayContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumVarIntegerArrayContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

tree::TerminalNode* DARICParser::NumVarIntegerArrayContext::COMMA() {
  return getToken(DARICParser::COMMA, 0);
}

DARICParser::NumVarIntegerArrayContext::NumVarIntegerArrayContext(NumVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumVarIntegerArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumVarIntegerArray(this);
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
    setState(501);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatArrayContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(445);
      varName();
      setState(446);
      match(DARICParser::LPAREN);
      setState(447);
      numExpr(0);
      setState(450);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::COMMA) {
        setState(448);
        match(DARICParser::COMMA);
        setState(449);
        numExpr(0);
      }
      setState(452);
      match(DARICParser::RPAREN);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerArrayContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(454);
      varNameInteger();
      setState(455);
      match(DARICParser::LPAREN);
      setState(456);
      numExpr(0);
      setState(459);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::COMMA) {
        setState(457);
        match(DARICParser::COMMA);
        setState(458);
        numExpr(0);
      }
      setState(461);
      match(DARICParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatFieldArrayContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(463);
      typeVar();
      setState(464);
      match(DARICParser::LPAREN);
      setState(465);
      numExpr(0);
      setState(466);
      match(DARICParser::RPAREN);
      setState(467);
      varName();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatFNContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(469);
      match(DARICParser::FN_FLOAT);
      setState(470);
      match(DARICParser::LPAREN);
      setState(472);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << DARICParser::FALSE)
        | (1ULL << DARICParser::TRUE)
        | (1ULL << DARICParser::RED)
        | (1ULL << DARICParser::GREEN)
        | (1ULL << DARICParser::YELLOW)
        | (1ULL << DARICParser::BLUE)
        | (1ULL << DARICParser::MAGENTA)
        | (1ULL << DARICParser::CYAN)
        | (1ULL << DARICParser::WHITE)
        | (1ULL << DARICParser::BLACK)
        | (1ULL << DARICParser::BGETH)
        | (1ULL << DARICParser::EOFH)
        | (1ULL << DARICParser::OPENIN)
        | (1ULL << DARICParser::OPENOUT)
        | (1ULL << DARICParser::OPENUP)
        | (1ULL << DARICParser::PTRH))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::TIME - 64))
        | (1ULL << (DARICParser::PI - 64))
        | (1ULL << (DARICParser::SQR - 64))
        | (1ULL << (DARICParser::LN - 64))
        | (1ULL << (DARICParser::LOG - 64))
        | (1ULL << (DARICParser::EXP - 64))
        | (1ULL << (DARICParser::ATN - 64))
        | (1ULL << (DARICParser::TAN - 64))
        | (1ULL << (DARICParser::COS - 64))
        | (1ULL << (DARICParser::SIN - 64))
        | (1ULL << (DARICParser::ABS - 64))
        | (1ULL << (DARICParser::ACS - 64))
        | (1ULL << (DARICParser::ASN - 64))
        | (1ULL << (DARICParser::DEG - 64))
        | (1ULL << (DARICParser::RAD - 64))
        | (1ULL << (DARICParser::SGN - 64))
        | (1ULL << (DARICParser::ASC - 64))
        | (1ULL << (DARICParser::LEN - 64))
        | (1ULL << (DARICParser::INSTR - 64))
        | (1ULL << (DARICParser::VAL - 64))
        | (1ULL << (DARICParser::TIMES - 64))
        | (1ULL << (DARICParser::STRS - 64))
        | (1ULL << (DARICParser::STRINGS - 64))
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
        | (1ULL << (DARICParser::LPAREN - 64)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 132)) & ((1ULL << (DARICParser::STRINGLITERAL - 132))
        | (1ULL << (DARICParser::FN_INTEGER - 132))
        | (1ULL << (DARICParser::FN_FLOAT - 132))
        | (1ULL << (DARICParser::FN_STRING - 132))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 132))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 132))
        | (1ULL << (DARICParser::VARIABLE_STRING - 132))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 132))
        | (1ULL << (DARICParser::HEXNUMBER - 132))
        | (1ULL << (DARICParser::BINARYNUMBER - 132))
        | (1ULL << (DARICParser::NUMBER - 132))
        | (1ULL << (DARICParser::FLOAT - 132)))) != 0)) {
        setState(471);
        functionParList();
      }
      setState(474);
      match(DARICParser::RPAREN);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerFNContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(475);
      match(DARICParser::FN_INTEGER);
      setState(476);
      match(DARICParser::LPAREN);
      setState(478);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << DARICParser::FALSE)
        | (1ULL << DARICParser::TRUE)
        | (1ULL << DARICParser::RED)
        | (1ULL << DARICParser::GREEN)
        | (1ULL << DARICParser::YELLOW)
        | (1ULL << DARICParser::BLUE)
        | (1ULL << DARICParser::MAGENTA)
        | (1ULL << DARICParser::CYAN)
        | (1ULL << DARICParser::WHITE)
        | (1ULL << DARICParser::BLACK)
        | (1ULL << DARICParser::BGETH)
        | (1ULL << DARICParser::EOFH)
        | (1ULL << DARICParser::OPENIN)
        | (1ULL << DARICParser::OPENOUT)
        | (1ULL << DARICParser::OPENUP)
        | (1ULL << DARICParser::PTRH))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::TIME - 64))
        | (1ULL << (DARICParser::PI - 64))
        | (1ULL << (DARICParser::SQR - 64))
        | (1ULL << (DARICParser::LN - 64))
        | (1ULL << (DARICParser::LOG - 64))
        | (1ULL << (DARICParser::EXP - 64))
        | (1ULL << (DARICParser::ATN - 64))
        | (1ULL << (DARICParser::TAN - 64))
        | (1ULL << (DARICParser::COS - 64))
        | (1ULL << (DARICParser::SIN - 64))
        | (1ULL << (DARICParser::ABS - 64))
        | (1ULL << (DARICParser::ACS - 64))
        | (1ULL << (DARICParser::ASN - 64))
        | (1ULL << (DARICParser::DEG - 64))
        | (1ULL << (DARICParser::RAD - 64))
        | (1ULL << (DARICParser::SGN - 64))
        | (1ULL << (DARICParser::ASC - 64))
        | (1ULL << (DARICParser::LEN - 64))
        | (1ULL << (DARICParser::INSTR - 64))
        | (1ULL << (DARICParser::VAL - 64))
        | (1ULL << (DARICParser::TIMES - 64))
        | (1ULL << (DARICParser::STRS - 64))
        | (1ULL << (DARICParser::STRINGS - 64))
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
        | (1ULL << (DARICParser::LPAREN - 64)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 132)) & ((1ULL << (DARICParser::STRINGLITERAL - 132))
        | (1ULL << (DARICParser::FN_INTEGER - 132))
        | (1ULL << (DARICParser::FN_FLOAT - 132))
        | (1ULL << (DARICParser::FN_STRING - 132))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 132))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 132))
        | (1ULL << (DARICParser::VARIABLE_STRING - 132))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 132))
        | (1ULL << (DARICParser::HEXNUMBER - 132))
        | (1ULL << (DARICParser::BINARYNUMBER - 132))
        | (1ULL << (DARICParser::NUMBER - 132))
        | (1ULL << (DARICParser::FLOAT - 132)))) != 0)) {
        setState(477);
        functionParList();
      }
      setState(480);
      match(DARICParser::RPAREN);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarStringFNContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(481);
      match(DARICParser::FN_STRING);
      setState(482);
      match(DARICParser::LPAREN);
      setState(484);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << DARICParser::FALSE)
        | (1ULL << DARICParser::TRUE)
        | (1ULL << DARICParser::RED)
        | (1ULL << DARICParser::GREEN)
        | (1ULL << DARICParser::YELLOW)
        | (1ULL << DARICParser::BLUE)
        | (1ULL << DARICParser::MAGENTA)
        | (1ULL << DARICParser::CYAN)
        | (1ULL << DARICParser::WHITE)
        | (1ULL << DARICParser::BLACK)
        | (1ULL << DARICParser::BGETH)
        | (1ULL << DARICParser::EOFH)
        | (1ULL << DARICParser::OPENIN)
        | (1ULL << DARICParser::OPENOUT)
        | (1ULL << DARICParser::OPENUP)
        | (1ULL << DARICParser::PTRH))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::TIME - 64))
        | (1ULL << (DARICParser::PI - 64))
        | (1ULL << (DARICParser::SQR - 64))
        | (1ULL << (DARICParser::LN - 64))
        | (1ULL << (DARICParser::LOG - 64))
        | (1ULL << (DARICParser::EXP - 64))
        | (1ULL << (DARICParser::ATN - 64))
        | (1ULL << (DARICParser::TAN - 64))
        | (1ULL << (DARICParser::COS - 64))
        | (1ULL << (DARICParser::SIN - 64))
        | (1ULL << (DARICParser::ABS - 64))
        | (1ULL << (DARICParser::ACS - 64))
        | (1ULL << (DARICParser::ASN - 64))
        | (1ULL << (DARICParser::DEG - 64))
        | (1ULL << (DARICParser::RAD - 64))
        | (1ULL << (DARICParser::SGN - 64))
        | (1ULL << (DARICParser::ASC - 64))
        | (1ULL << (DARICParser::LEN - 64))
        | (1ULL << (DARICParser::INSTR - 64))
        | (1ULL << (DARICParser::VAL - 64))
        | (1ULL << (DARICParser::TIMES - 64))
        | (1ULL << (DARICParser::STRS - 64))
        | (1ULL << (DARICParser::STRINGS - 64))
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
        | (1ULL << (DARICParser::LPAREN - 64)))) != 0) || ((((_la - 132) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 132)) & ((1ULL << (DARICParser::STRINGLITERAL - 132))
        | (1ULL << (DARICParser::FN_INTEGER - 132))
        | (1ULL << (DARICParser::FN_FLOAT - 132))
        | (1ULL << (DARICParser::FN_STRING - 132))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 132))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 132))
        | (1ULL << (DARICParser::VARIABLE_STRING - 132))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 132))
        | (1ULL << (DARICParser::HEXNUMBER - 132))
        | (1ULL << (DARICParser::BINARYNUMBER - 132))
        | (1ULL << (DARICParser::NUMBER - 132))
        | (1ULL << (DARICParser::FLOAT - 132)))) != 0)) {
        setState(483);
        functionParList();
      }
      setState(486);
      match(DARICParser::RPAREN);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(487);
      varName();
      break;
    }

    case 8: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(488);
      varNameInteger();
      break;
    }

    case 9: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatFieldContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(489);
      typeVar();
      setState(490);
      varName();
      break;
    }

    case 10: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerFieldContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(492);
      typeVar();
      setState(493);
      varNameInteger();
      break;
    }

    case 11: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerFieldArrayContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(495);
      typeVar();
      setState(496);
      match(DARICParser::LPAREN);
      setState(497);
      numExpr(0);
      setState(498);
      match(DARICParser::RPAREN);
      setState(499);
      varNameInteger();
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

tree::TerminalNode* DARICParser::NumVarStringArrayContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::NumVarStringArrayContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumVarStringArrayContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumVarStringArrayContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

tree::TerminalNode* DARICParser::NumVarStringArrayContext::COMMA() {
  return getToken(DARICParser::COMMA, 0);
}

DARICParser::NumVarStringArrayContext::NumVarStringArrayContext(StrVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumVarStringArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumVarStringArray(this);
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
    setState(522);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringArrayContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(503);
      varNameString();
      setState(504);
      match(DARICParser::LPAREN);
      setState(505);
      numExpr(0);
      setState(508);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::COMMA) {
        setState(506);
        match(DARICParser::COMMA);
        setState(507);
        numExpr(0);
      }
      setState(510);
      match(DARICParser::RPAREN);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringFieldArrayContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(512);
      typeVar();
      setState(513);
      match(DARICParser::LPAREN);
      setState(514);
      numExpr(0);
      setState(515);
      match(DARICParser::RPAREN);
      setState(516);
      varNameString();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(518);
      varNameString();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringFieldContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(519);
      typeVar();
      setState(520);
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
    setState(527);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::VARIABLE_FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(524);
        varName();
        break;
      }

      case DARICParser::VARIABLE_INTEGER: {
        enterOuterAlt(_localctx, 2);
        setState(525);
        varNameInteger();
        break;
      }

      case DARICParser::VARIABLE_STRING: {
        enterOuterAlt(_localctx, 3);
        setState(526);
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
    setState(531);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::VARIABLE_FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(529);
        varName();
        break;
      }

      case DARICParser::VARIABLE_INTEGER: {
        enterOuterAlt(_localctx, 2);
        setState(530);
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
    setState(533);
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
    setState(535);
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
    setState(537);
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
    setState(539);
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

DARICParser::JustVarContext* DARICParser::VarDeclIndContext::justVar() {
  return getRuleContext<DARICParser::JustVarContext>(0);
}

DARICParser::VarDeclIndContext::VarDeclIndContext(VarDeclContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::VarDeclIndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVarDeclInd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarDeclArrayedContext ------------------------------------------------------------------

DARICParser::JustVarContext* DARICParser::VarDeclArrayedContext::justVar() {
  return getRuleContext<DARICParser::JustVarContext>(0);
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
    setState(565);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclIndContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(541);
      justVar();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclArrayedContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(542);
      justVar();
      setState(553);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::LPAREN) {
        setState(543);
        match(DARICParser::LPAREN);
        setState(544);
        numExpr(0);
        setState(547);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DARICParser::COMMA) {
          setState(545);
          match(DARICParser::COMMA);
          setState(546);
          numExpr(0);
        }
        setState(549);
        match(DARICParser::RPAREN);
        setState(555);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(556);
      typeVar();
      setState(557);
      varName();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeArrayedContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(559);
      typeVar();
      setState(560);
      match(DARICParser::LPAREN);
      setState(561);
      numExpr(0);
      setState(562);
      match(DARICParser::RPAREN);
      setState(563);
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

DARICParser::JustVarContext* DARICParser::VarDeclWithDimensionContext::justVar() {
  return getRuleContext<DARICParser::JustVarContext>(0);
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
    setState(567);
    justVar();
    setState(568);
    match(DARICParser::LPAREN);
    setState(569);
    numExpr(0);
    setState(574);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(570);
      match(DARICParser::COMMA);
      setState(571);
      numExpr(0);
      setState(576);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(577);
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
    setState(579);
    varDecl();
    setState(584);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(580);
      match(DARICParser::COMMA);
      setState(581);
      varDecl();
      setState(586);
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
    setState(588);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::RETURN) {
      setState(587);
      match(DARICParser::RETURN);
    }
    setState(590);
    justVar();
    setState(598);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(591);
      match(DARICParser::COMMA);
      setState(593);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::RETURN) {
        setState(592);
        match(DARICParser::RETURN);
      }
      setState(595);
      justVar();
      setState(600);
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
    setState(601);
    expr();
    setState(606);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(602);
      match(DARICParser::COMMA);
      setState(603);
      expr();
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
    setState(609);
    expr();
    setState(614);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(610);
      match(DARICParser::COMMA);
      setState(611);
      expr();
      setState(616);
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
    setState(628);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<PrintListItemContext *>(_tracker.createInstance<DARICParser::PrintListExprContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(618);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::TILDE) {
        setState(617);
        match(DARICParser::TILDE);
      }
      setState(620);
      expr();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<PrintListItemContext *>(_tracker.createInstance<DARICParser::PrintListSPCPContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(621);
      match(DARICParser::SPC);
      setState(622);
      match(DARICParser::LPAREN);
      setState(623);
      numExpr(0);
      setState(624);
      match(DARICParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<PrintListItemContext *>(_tracker.createInstance<DARICParser::PrintListSPCContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(626);
      match(DARICParser::SPC);
      setState(627);
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

//----------------- PrintListTickContext ------------------------------------------------------------------

DARICParser::PrintListTickContext::PrintListTickContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> DARICParser::PrintListTickContext::TICK() {
  return getTokens(DARICParser::TICK);
}

tree::TerminalNode* DARICParser::PrintListTickContext::TICK(size_t i) {
  return getToken(DARICParser::TICK, i);
}


size_t DARICParser::PrintListTickContext::getRuleIndex() const {
  return DARICParser::RulePrintListTick;
}


antlrcpp::Any DARICParser::PrintListTickContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitPrintListTick(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::PrintListTickContext* DARICParser::printListTick() {
  PrintListTickContext *_localctx = _tracker.createInstance<PrintListTickContext>(_ctx, getState());
  enterRule(_localctx, 54, DARICParser::RulePrintListTick);
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
    setState(631); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(630);
      match(DARICParser::TICK);
      setState(633); 
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

//----------------- PrintListSeparatorContext ------------------------------------------------------------------

DARICParser::PrintListSeparatorContext::PrintListSeparatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::PrintListSeparatorContext::COMMA() {
  return getToken(DARICParser::COMMA, 0);
}

tree::TerminalNode* DARICParser::PrintListSeparatorContext::SEMICOLON() {
  return getToken(DARICParser::SEMICOLON, 0);
}

DARICParser::PrintListTickContext* DARICParser::PrintListSeparatorContext::printListTick() {
  return getRuleContext<DARICParser::PrintListTickContext>(0);
}


size_t DARICParser::PrintListSeparatorContext::getRuleIndex() const {
  return DARICParser::RulePrintListSeparator;
}


antlrcpp::Any DARICParser::PrintListSeparatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitPrintListSeparator(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::PrintListSeparatorContext* DARICParser::printListSeparator() {
  PrintListSeparatorContext *_localctx = _tracker.createInstance<PrintListSeparatorContext>(_ctx, getState());
  enterRule(_localctx, 56, DARICParser::RulePrintListSeparator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(638);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::COMMA: {
        enterOuterAlt(_localctx, 1);
        setState(635);
        match(DARICParser::COMMA);
        break;
      }

      case DARICParser::SEMICOLON: {
        enterOuterAlt(_localctx, 2);
        setState(636);
        match(DARICParser::SEMICOLON);
        break;
      }

      case DARICParser::TICK: {
        enterOuterAlt(_localctx, 3);
        setState(637);
        printListTick();
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

DARICParser::PrintListTickContext* DARICParser::PrintListContext::printListTick() {
  return getRuleContext<DARICParser::PrintListTickContext>(0);
}

std::vector<DARICParser::PrintListSeparatorContext *> DARICParser::PrintListContext::printListSeparator() {
  return getRuleContexts<DARICParser::PrintListSeparatorContext>();
}

DARICParser::PrintListSeparatorContext* DARICParser::PrintListContext::printListSeparator(size_t i) {
  return getRuleContext<DARICParser::PrintListSeparatorContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::PrintListContext::SEMICOLON() {
  return getTokens(DARICParser::SEMICOLON);
}

tree::TerminalNode* DARICParser::PrintListContext::SEMICOLON(size_t i) {
  return getToken(DARICParser::SEMICOLON, i);
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
  enterRule(_localctx, 58, DARICParser::RulePrintList);
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
    setState(641);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::TICK) {
      setState(640);
      printListTick();
    }
    setState(644);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::SEMICOLON) {
      setState(643);
      dynamic_cast<PrintListContext *>(_localctx)->s1 = match(DARICParser::SEMICOLON);
    }
    setState(646);
    printListItem();
    setState(652);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(647);
        printListSeparator();
        setState(648);
        printListItem(); 
      }
      setState(654);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    }
    setState(656);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::SEMICOLON) {
      setState(655);
      dynamic_cast<PrintListContext *>(_localctx)->s2 = match(DARICParser::SEMICOLON);
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
  enterRule(_localctx, 60, DARICParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(660);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(658);
      numExpr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(659);
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

DARICParser::NumColoursContext* DARICParser::NumberContext::numColours() {
  return getRuleContext<DARICParser::NumColoursContext>(0);
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
  enterRule(_localctx, 62, DARICParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(667);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(662);
      numberInteger();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(663);
      numberFloat();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(664);
      numberHex();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(665);
      numberBinary();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(666);
      numColours();
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
  enterRule(_localctx, 64, DARICParser::RuleNumberInteger);
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
    setState(670);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::PLUS

    || _la == DARICParser::MINUS) {
      setState(669);
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
    setState(672);
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
  enterRule(_localctx, 66, DARICParser::RuleNumberHex);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(674);
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
  enterRule(_localctx, 68, DARICParser::RuleNumberBinary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(676);
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
  enterRule(_localctx, 70, DARICParser::RuleNumberFloat);
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
    setState(679);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::PLUS

    || _la == DARICParser::MINUS) {
      setState(678);
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
    setState(681);
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
  enterRule(_localctx, 72, DARICParser::RuleStrFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(739);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncTIMESContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(683);
      match(DARICParser::TIMES);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncCHRSPContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(684);
      match(DARICParser::CHRS);
      setState(685);
      match(DARICParser::LPAREN);
      setState(686);
      numExpr(0);
      setState(687);
      match(DARICParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncCHRSContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(689);
      match(DARICParser::CHRS);
      setState(690);
      numExpr(0);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncLEFTSContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(691);
      match(DARICParser::LEFTS);
      setState(692);
      match(DARICParser::LPAREN);
      setState(693);
      strExpr(0);
      setState(694);
      match(DARICParser::COMMA);
      setState(695);
      numExpr(0);
      setState(696);
      match(DARICParser::RPAREN);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncMIDS3Context>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(698);
      match(DARICParser::MIDS);
      setState(699);
      match(DARICParser::LPAREN);
      setState(700);
      strExpr(0);
      setState(701);
      match(DARICParser::COMMA);
      setState(702);
      numExpr(0);
      setState(703);
      match(DARICParser::COMMA);
      setState(704);
      numExpr(0);
      setState(705);
      match(DARICParser::RPAREN);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncMIDS2Context>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(707);
      match(DARICParser::MIDS);
      setState(708);
      match(DARICParser::LPAREN);
      setState(709);
      strExpr(0);
      setState(710);
      match(DARICParser::COMMA);
      setState(711);
      numExpr(0);
      setState(712);
      match(DARICParser::RPAREN);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncRIGHTSContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(714);
      match(DARICParser::RIGHTS);
      setState(715);
      match(DARICParser::LPAREN);
      setState(716);
      strExpr(0);
      setState(717);
      match(DARICParser::COMMA);
      setState(718);
      numExpr(0);
      setState(719);
      match(DARICParser::RPAREN);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncSTRSContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(721);
      match(DARICParser::STRS);
      setState(722);
      match(DARICParser::LPAREN);
      setState(723);
      numExpr(0);
      setState(724);
      match(DARICParser::RPAREN);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncSTRSHEXContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(726);
      match(DARICParser::STRS);
      setState(727);
      match(DARICParser::TILDE);
      setState(728);
      match(DARICParser::LPAREN);
      setState(729);
      numExpr(0);
      setState(730);
      match(DARICParser::RPAREN);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncSTRINGSContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(732);
      match(DARICParser::STRINGS);
      setState(733);
      match(DARICParser::LPAREN);
      setState(734);
      numExpr(0);
      setState(735);
      match(DARICParser::COMMA);
      setState(736);
      strExpr(0);
      setState(737);
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
  enterRule(_localctx, 74, DARICParser::RuleString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(741);
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

DARICParser::StrFuncContext* DARICParser::StrExprContext::strFunc() {
  return getRuleContext<DARICParser::StrFuncContext>(0);
}

DARICParser::StringContext* DARICParser::StrExprContext::string() {
  return getRuleContext<DARICParser::StringContext>(0);
}

DARICParser::StrVarContext* DARICParser::StrExprContext::strVar() {
  return getRuleContext<DARICParser::StrVarContext>(0);
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
  size_t startState = 76;
  enterRecursionRule(_localctx, 76, DARICParser::RuleStrExpr, precedence);

    

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
    setState(747);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::TIMES:
      case DARICParser::STRS:
      case DARICParser::STRINGS:
      case DARICParser::CHRS:
      case DARICParser::LEFTS:
      case DARICParser::MIDS:
      case DARICParser::RIGHTS: {
        setState(744);
        strFunc();
        break;
      }

      case DARICParser::STRINGLITERAL: {
        setState(745);
        string();
        break;
      }

      case DARICParser::VARIABLE_STRING:
      case DARICParser::VARIABLE_TYPE: {
        setState(746);
        strVar();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(754);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StrExprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStrExpr);
        setState(749);

        if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
        setState(750);
        match(DARICParser::PLUS);
        setState(751);
        strExpr(4); 
      }
      setState(756);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx);
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
//----------------- NumFuncOPENINContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncOPENINContext::OPENIN() {
  return getToken(DARICParser::OPENIN, 0);
}

tree::TerminalNode* DARICParser::NumFuncOPENINContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::StrExprContext* DARICParser::NumFuncOPENINContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncOPENINContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncOPENINContext::NumFuncOPENINContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncOPENINContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncOPENIN(this);
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
//----------------- NumFuncBGETHContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncBGETHContext::BGETH() {
  return getToken(DARICParser::BGETH, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncBGETHContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

DARICParser::NumFuncBGETHContext::NumFuncBGETHContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncBGETHContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncBGETH(this);
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
//----------------- NumFuncFALSEContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncFALSEContext::FALSE() {
  return getToken(DARICParser::FALSE, 0);
}

DARICParser::NumFuncFALSEContext::NumFuncFALSEContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncFALSEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncFALSE(this);
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
//----------------- NumFuncOPENOUTContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncOPENOUTContext::OPENOUT() {
  return getToken(DARICParser::OPENOUT, 0);
}

tree::TerminalNode* DARICParser::NumFuncOPENOUTContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::StrExprContext* DARICParser::NumFuncOPENOUTContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncOPENOUTContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncOPENOUTContext::NumFuncOPENOUTContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncOPENOUTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncOPENOUT(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncOPENUPContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncOPENUPContext::OPENUP() {
  return getToken(DARICParser::OPENUP, 0);
}

tree::TerminalNode* DARICParser::NumFuncOPENUPContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::StrExprContext* DARICParser::NumFuncOPENUPContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncOPENUPContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncOPENUPContext::NumFuncOPENUPContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncOPENUPContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncOPENUP(this);
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
//----------------- NumFuncEOFHContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncEOFHContext::EOFH() {
  return getToken(DARICParser::EOFH, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncEOFHContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

DARICParser::NumFuncEOFHContext::NumFuncEOFHContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncEOFHContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncEOFH(this);
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
//----------------- NumFuncPTRContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncPTRContext::PTRH() {
  return getToken(DARICParser::PTRH, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncPTRContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

DARICParser::NumFuncPTRContext::NumFuncPTRContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncPTRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncPTR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncTRUEContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncTRUEContext::TRUE() {
  return getToken(DARICParser::TRUE, 0);
}

DARICParser::NumFuncTRUEContext::NumFuncTRUEContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncTRUEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncTRUE(this);
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
  enterRule(_localctx, 78, DARICParser::RuleNumFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(891);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncPIContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(757);
      match(DARICParser::PI);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncFALSEContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(758);
      match(DARICParser::FALSE);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncTRUEContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(759);
      match(DARICParser::TRUE);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncTIMEContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(760);
      match(DARICParser::TIME);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRNDContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(761);
      match(DARICParser::RND);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRND0Context>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(762);
      match(DARICParser::RND0);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRND1Context>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(763);
      match(DARICParser::RND1);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRNDRANGEContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(764);
      match(DARICParser::RND);
      setState(765);
      match(DARICParser::LPAREN);
      setState(766);
      numExpr(0);
      setState(767);
      match(DARICParser::RPAREN);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncLNContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(769);
      match(DARICParser::LN);
      setState(770);
      match(DARICParser::LPAREN);
      setState(771);
      numExpr(0);
      setState(772);
      match(DARICParser::RPAREN);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncLOGContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(774);
      match(DARICParser::LOG);
      setState(775);
      match(DARICParser::LPAREN);
      setState(776);
      numExpr(0);
      setState(777);
      match(DARICParser::RPAREN);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncEXPContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(779);
      match(DARICParser::EXP);
      setState(780);
      match(DARICParser::LPAREN);
      setState(781);
      numExpr(0);
      setState(782);
      match(DARICParser::RPAREN);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncATNContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(784);
      match(DARICParser::ATN);
      setState(785);
      match(DARICParser::LPAREN);
      setState(786);
      numExpr(0);
      setState(787);
      match(DARICParser::RPAREN);
      break;
    }

    case 13: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncTANContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(789);
      match(DARICParser::TAN);
      setState(790);
      match(DARICParser::LPAREN);
      setState(791);
      numExpr(0);
      setState(792);
      match(DARICParser::RPAREN);
      break;
    }

    case 14: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncCOSContext>(_localctx));
      enterOuterAlt(_localctx, 14);
      setState(794);
      match(DARICParser::COS);
      setState(795);
      match(DARICParser::LPAREN);
      setState(796);
      numExpr(0);
      setState(797);
      match(DARICParser::RPAREN);
      break;
    }

    case 15: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSINContext>(_localctx));
      enterOuterAlt(_localctx, 15);
      setState(799);
      match(DARICParser::SIN);
      setState(800);
      match(DARICParser::LPAREN);
      setState(801);
      numExpr(0);
      setState(802);
      match(DARICParser::RPAREN);
      break;
    }

    case 16: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncABSContext>(_localctx));
      enterOuterAlt(_localctx, 16);
      setState(804);
      match(DARICParser::ABS);
      setState(805);
      match(DARICParser::LPAREN);
      setState(806);
      numExpr(0);
      setState(807);
      match(DARICParser::RPAREN);
      break;
    }

    case 17: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncACSContext>(_localctx));
      enterOuterAlt(_localctx, 17);
      setState(809);
      match(DARICParser::ACS);
      setState(810);
      match(DARICParser::LPAREN);
      setState(811);
      numExpr(0);
      setState(812);
      match(DARICParser::RPAREN);
      break;
    }

    case 18: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncASNContext>(_localctx));
      enterOuterAlt(_localctx, 18);
      setState(814);
      match(DARICParser::ASN);
      setState(815);
      match(DARICParser::LPAREN);
      setState(816);
      numExpr(0);
      setState(817);
      match(DARICParser::RPAREN);
      break;
    }

    case 19: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncDEGContext>(_localctx));
      enterOuterAlt(_localctx, 19);
      setState(819);
      match(DARICParser::DEG);
      setState(820);
      match(DARICParser::LPAREN);
      setState(821);
      numExpr(0);
      setState(822);
      match(DARICParser::RPAREN);
      break;
    }

    case 20: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRADContext>(_localctx));
      enterOuterAlt(_localctx, 20);
      setState(824);
      match(DARICParser::RAD);
      setState(825);
      match(DARICParser::LPAREN);
      setState(826);
      numExpr(0);
      setState(827);
      match(DARICParser::RPAREN);
      break;
    }

    case 21: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSQRContext>(_localctx));
      enterOuterAlt(_localctx, 21);
      setState(829);
      match(DARICParser::SQR);
      setState(830);
      match(DARICParser::LPAREN);
      setState(831);
      numExpr(0);
      setState(832);
      match(DARICParser::RPAREN);
      break;
    }

    case 22: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSGNContext>(_localctx));
      enterOuterAlt(_localctx, 22);
      setState(834);
      match(DARICParser::SGN);
      setState(835);
      match(DARICParser::LPAREN);
      setState(836);
      numExpr(0);
      setState(837);
      match(DARICParser::RPAREN);
      break;
    }

    case 23: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncBGETHContext>(_localctx));
      enterOuterAlt(_localctx, 23);
      setState(839);
      match(DARICParser::BGETH);
      setState(840);
      numExpr(0);
      break;
    }

    case 24: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncEOFHContext>(_localctx));
      enterOuterAlt(_localctx, 24);
      setState(841);
      match(DARICParser::EOFH);
      setState(842);
      numExpr(0);
      break;
    }

    case 25: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncOPENINContext>(_localctx));
      enterOuterAlt(_localctx, 25);
      setState(843);
      match(DARICParser::OPENIN);
      setState(844);
      match(DARICParser::LPAREN);
      setState(845);
      strExpr(0);
      setState(846);
      match(DARICParser::RPAREN);
      break;
    }

    case 26: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncOPENOUTContext>(_localctx));
      enterOuterAlt(_localctx, 26);
      setState(848);
      match(DARICParser::OPENOUT);
      setState(849);
      match(DARICParser::LPAREN);
      setState(850);
      strExpr(0);
      setState(851);
      match(DARICParser::RPAREN);
      break;
    }

    case 27: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncOPENUPContext>(_localctx));
      enterOuterAlt(_localctx, 27);
      setState(853);
      match(DARICParser::OPENUP);
      setState(854);
      match(DARICParser::LPAREN);
      setState(855);
      strExpr(0);
      setState(856);
      match(DARICParser::RPAREN);
      break;
    }

    case 28: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncPTRContext>(_localctx));
      enterOuterAlt(_localctx, 28);
      setState(858);
      match(DARICParser::PTRH);
      setState(859);
      numExpr(0);
      break;
    }

    case 29: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncASCContext>(_localctx));
      enterOuterAlt(_localctx, 29);
      setState(860);
      match(DARICParser::ASC);
      setState(861);
      match(DARICParser::LPAREN);
      setState(862);
      strExpr(0);
      setState(863);
      match(DARICParser::RPAREN);
      break;
    }

    case 30: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncLENContext>(_localctx));
      enterOuterAlt(_localctx, 30);
      setState(865);
      match(DARICParser::LEN);
      setState(866);
      match(DARICParser::LPAREN);
      setState(867);
      strExpr(0);
      setState(868);
      match(DARICParser::RPAREN);
      break;
    }

    case 31: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncINSTR2Context>(_localctx));
      enterOuterAlt(_localctx, 31);
      setState(870);
      match(DARICParser::INSTR);
      setState(871);
      match(DARICParser::LPAREN);
      setState(872);
      strExpr(0);
      setState(873);
      match(DARICParser::COMMA);
      setState(874);
      strExpr(0);
      setState(875);
      match(DARICParser::RPAREN);
      break;
    }

    case 32: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncINSTR3Context>(_localctx));
      enterOuterAlt(_localctx, 32);
      setState(877);
      match(DARICParser::INSTR);
      setState(878);
      match(DARICParser::LPAREN);
      setState(879);
      strExpr(0);
      setState(880);
      match(DARICParser::COMMA);
      setState(881);
      strExpr(0);
      setState(882);
      match(DARICParser::COMMA);
      setState(883);
      numExpr(0);
      setState(884);
      match(DARICParser::RPAREN);
      break;
    }

    case 33: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncVALContext>(_localctx));
      enterOuterAlt(_localctx, 33);
      setState(886);
      match(DARICParser::VAL);
      setState(887);
      match(DARICParser::LPAREN);
      setState(888);
      strExpr(0);
      setState(889);
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
  size_t startState = 80;
  enterRecursionRule(_localctx, 80, DARICParser::RuleNumExpr, precedence);

    

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
    setState(907);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NumExprFuncContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(894);
      numFunc();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NumExprNOTContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(895);
      match(DARICParser::NOT);
      setState(896);
      numExpr(18);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NumExprNestedContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(897);
      match(DARICParser::LPAREN);
      setState(898);
      numExpr(0);
      setState(899);
      match(DARICParser::RPAREN);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<NumExprStrRelopContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(901);
      strExpr(0);
      setState(902);
      compare();
      setState(903);
      strExpr(0);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NumExprNumberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(905);
      number();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<NumExprVarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(906);
      numVar();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(951);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(949);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<NumExprHatContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(909);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(910);
          match(DARICParser::HAT);
          setState(911);
          numExpr(16);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<NumExprMultiplyContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(912);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(913);
          match(DARICParser::MULTIPLY);
          setState(914);
          numExpr(16);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<NumExprDivideContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(915);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(916);
          match(DARICParser::DIVIDE);
          setState(917);
          numExpr(15);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<NumExprDIVContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(918);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(919);
          match(DARICParser::DIV);
          setState(920);
          numExpr(14);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<NumExprMODContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(921);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(922);
          match(DARICParser::MOD);
          setState(923);
          numExpr(13);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<NumExprPlusContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(924);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(925);
          match(DARICParser::PLUS);
          setState(926);
          numExpr(12);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<NumExprSubtractContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(927);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(928);
          match(DARICParser::MINUS);
          setState(929);
          numExpr(11);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<NumExprNumRelopContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(930);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(931);
          compare();
          setState(932);
          numExpr(10);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<NumExprSHLContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(934);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(935);
          match(DARICParser::SHL);
          setState(936);
          numExpr(8);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<NumExprSHRContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(937);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(938);
          match(DARICParser::SHR);
          setState(939);
          numExpr(7);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<NumExprANDContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(940);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(941);
          match(DARICParser::AND);
          setState(942);
          numExpr(6);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<NumExprORContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(943);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(944);
          match(DARICParser::OR);
          setState(945);
          numExpr(5);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<NumExprEORContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(946);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(947);
          match(DARICParser::EOR);
          setState(948);
          numExpr(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(953);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NumColoursContext ------------------------------------------------------------------

DARICParser::NumColoursContext::NumColoursContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::NumColoursContext::RED() {
  return getToken(DARICParser::RED, 0);
}

tree::TerminalNode* DARICParser::NumColoursContext::GREEN() {
  return getToken(DARICParser::GREEN, 0);
}

tree::TerminalNode* DARICParser::NumColoursContext::YELLOW() {
  return getToken(DARICParser::YELLOW, 0);
}

tree::TerminalNode* DARICParser::NumColoursContext::BLUE() {
  return getToken(DARICParser::BLUE, 0);
}

tree::TerminalNode* DARICParser::NumColoursContext::MAGENTA() {
  return getToken(DARICParser::MAGENTA, 0);
}

tree::TerminalNode* DARICParser::NumColoursContext::CYAN() {
  return getToken(DARICParser::CYAN, 0);
}

tree::TerminalNode* DARICParser::NumColoursContext::WHITE() {
  return getToken(DARICParser::WHITE, 0);
}

tree::TerminalNode* DARICParser::NumColoursContext::BLACK() {
  return getToken(DARICParser::BLACK, 0);
}


size_t DARICParser::NumColoursContext::getRuleIndex() const {
  return DARICParser::RuleNumColours;
}


antlrcpp::Any DARICParser::NumColoursContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumColours(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::NumColoursContext* DARICParser::numColours() {
  NumColoursContext *_localctx = _tracker.createInstance<NumColoursContext>(_ctx, getState());
  enterRule(_localctx, 82, DARICParser::RuleNumColours);
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
    setState(954);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << DARICParser::RED)
      | (1ULL << DARICParser::GREEN)
      | (1ULL << DARICParser::YELLOW)
      | (1ULL << DARICParser::BLUE)
      | (1ULL << DARICParser::MAGENTA)
      | (1ULL << DARICParser::CYAN)
      | (1ULL << DARICParser::WHITE)
      | (1ULL << DARICParser::BLACK))) != 0))) {
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
  enterRule(_localctx, 84, DARICParser::RuleCompare);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(962);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::EQ: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareEQContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(956);
        match(DARICParser::EQ);
        break;
      }

      case DARICParser::NE: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareNEContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(957);
        match(DARICParser::NE);
        break;
      }

      case DARICParser::GT: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareGTContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(958);
        match(DARICParser::GT);
        break;
      }

      case DARICParser::GE: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareGEContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(959);
        match(DARICParser::GE);
        break;
      }

      case DARICParser::LT: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareLTContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(960);
        match(DARICParser::LT);
        break;
      }

      case DARICParser::LE: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareLEContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(961);
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
    case 38: return strExprSempred(dynamic_cast<StrExprContext *>(context), predicateIndex);
    case 40: return numExprSempred(dynamic_cast<NumExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool DARICParser::strExprSempred(StrExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool DARICParser::numExprSempred(NumExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 16);
    case 2: return precpred(_ctx, 15);
    case 3: return precpred(_ctx, 14);
    case 4: return precpred(_ctx, 13);
    case 5: return precpred(_ctx, 12);
    case 6: return precpred(_ctx, 11);
    case 7: return precpred(_ctx, 10);
    case 8: return precpred(_ctx, 9);
    case 9: return precpred(_ctx, 7);
    case 10: return precpred(_ctx, 6);
    case 11: return precpred(_ctx, 5);
    case 12: return precpred(_ctx, 4);
    case 13: return precpred(_ctx, 3);

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
  "exprList", "printListItem", "printListTick", "printListSeparator", "printList", 
  "expr", "number", "numberInteger", "numberHex", "numberBinary", "numberFloat", 
  "strFunc", "string", "strExpr", "numFunc", "numExpr", "numColours", "compare"
};

std::vector<std::string> DARICParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "'='", "'<>'", "'>'", "'>='", "'<'", "'<='", "", "", "", 
  "", "", "", "'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", "'>>'", "'+='", 
  "'-='", "'*='", "'/='", "'<<='", "'>>='", "", "'''", "'~'", "'#'", "':'", 
  "','", "'$'", "'('", "'%'", "')'", "';'", "'_'"
};

std::vector<std::string> DARICParser::_symbolicNames = {
  "", "BREAKPOINT", "CASE", "CHAIN", "DATA", "DEF", "DIM", "ELSE", "END", 
  "ENDCASE", "ENDIF", "ENDFN", "ENDPROC", "ENDWHILE", "FALSE", "FOR", "FN", 
  "IF", "IN", "INPUT", "GLOBAL", "LOCAL", "LET", "NEXT", "OF", "OSCLI", 
  "OTHERWISE", "PRINT", "PROC", "READ", "REM", "REPEAT", "RESTORE", "RETURN", 
  "SPC", "STEP", "SWAP", "THEN", "TO", "TRACEON", "TRACEOFF", "TRUE", "TYPE", 
  "UNTIL", "WHEN", "WHILE", "RED", "GREEN", "YELLOW", "BLUE", "MAGENTA", 
  "CYAN", "WHITE", "BLACK", "BGETH", "BPUTH", "CLOSEH", "EOFH", "GETSH", 
  "LISTFILES", "OPENIN", "OPENOUT", "OPENUP", "PTRH", "TIME", "PI", "SQR", 
  "LN", "LOG", "EXP", "ATN", "TAN", "COS", "SIN", "ABS", "ACS", "ASN", "DEG", 
  "RAD", "SGN", "ASC", "LEN", "INSTR", "VAL", "TIMES", "STRS", "STRINGS", 
  "CHRS", "LEFTS", "MIDS", "RIGHTS", "RND", "RND0", "RND1", "EQ", "NE", 
  "GT", "GE", "LT", "LE", "NOT", "AND", "OR", "EOR", "MOD", "DIV", "HAT", 
  "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "SHL", "SHR", "PLUS_E", "MINUS_E", 
  "MULTIPLY_E", "DIVIDE_E", "SHL_E", "SHR_E", "NEWLINE", "TICK", "TILDE", 
  "HASH", "COLON", "COMMA", "DOLLAR", "LPAREN", "PERCENT", "RPAREN", "SEMICOLON", 
  "UNDERSCORE", "COMMENT", "STRINGLITERAL", "PROC_NAME", "FN_INTEGER", "FN_FLOAT", 
  "FN_STRING", "VARIABLE_FLOAT", "VARIABLE_INTEGER", "VARIABLE_STRING", 
  "VARIABLE_TYPE", "NAME", "HEXNUMBER", "BINARYNUMBER", "NUMBER", "FLOAT", 
  "WS"
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
    0x3, 0x94, 0x3c7, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x3, 0x2, 0x7, 0x2, 0x5a, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0x5d, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x5, 0x3, 0x64, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x69, 
    0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x6e, 0xa, 0x3, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x73, 0xa, 0x4, 0x7, 0x4, 0x75, 0xa, 
    0x4, 0xc, 0x4, 0xe, 0x4, 0x78, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 
    0x7c, 0xa, 0x5, 0x3, 0x6, 0x5, 0x6, 0x7f, 0xa, 0x6, 0x3, 0x6, 0x7, 0x6, 
    0x82, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x85, 0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x6, 0x8, 0x90, 0xa, 0x8, 0xd, 0x8, 0xe, 0x8, 0x91, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0x96, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0xa0, 0xa, 0x8, 0xc, 0x8, 
    0xe, 0x8, 0xa3, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 
    0x8, 0xa9, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xac, 0xb, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x5, 0x8, 0xb1, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0xb7, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xc1, 0xa, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0xc9, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x5, 0x8, 0xd2, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xd9, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x5, 0x8, 0xe6, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xed, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x5, 0x8, 0xf2, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0xf7, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xfd, 
    0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0x106, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x10a, 
    0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 0x10d, 0xa, 0x8, 0x5, 0x8, 0x10f, 0xa, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x7, 0x8, 0x119, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x11c, 
    0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x127, 0xa, 0x8, 0xc, 0x8, 0xe, 
    0x8, 0x12a, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x7, 0x8, 0x131, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x134, 0xb, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x13a, 0xa, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x13f, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x146, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 
    0x149, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x7, 0x8, 0x159, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x15c, 
    0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x162, 0xa, 
    0x8, 0xc, 0x8, 0xe, 0x8, 0x165, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x16c, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x16f, 
    0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0x19a, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x1a5, 0xa, 0x8, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x1ab, 0xa, 0x9, 0xc, 
    0x9, 0xe, 0x9, 0x1ae, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x1b7, 0xa, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x5, 0xc, 0x1bc, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1c5, 0xa, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 
    0xe, 0x1ce, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 
    0x1db, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1e1, 
    0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1e7, 0xa, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0x1f8, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x1ff, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x20d, 0xa, 0xf, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x5, 0x10, 0x212, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0x216, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x226, 0xa, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0x22a, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 
    0x22d, 0xb, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x238, 0xa, 0x16, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x23f, 
    0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x242, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x249, 0xa, 0x18, 0xc, 0x18, 
    0xe, 0x18, 0x24c, 0xb, 0x18, 0x3, 0x19, 0x5, 0x19, 0x24f, 0xa, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x254, 0xa, 0x19, 0x3, 0x19, 
    0x7, 0x19, 0x257, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x25a, 0xb, 0x19, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x25f, 0xa, 0x1a, 0xc, 0x1a, 
    0xe, 0x1a, 0x262, 0xb, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 
    0x267, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x26a, 0xb, 0x1b, 0x3, 0x1c, 
    0x5, 0x1c, 0x26d, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x277, 0xa, 0x1c, 
    0x3, 0x1d, 0x6, 0x1d, 0x27a, 0xa, 0x1d, 0xd, 0x1d, 0xe, 0x1d, 0x27b, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x281, 0xa, 0x1e, 0x3, 0x1f, 
    0x5, 0x1f, 0x284, 0xa, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x287, 0xa, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x28d, 0xa, 0x1f, 
    0xc, 0x1f, 0xe, 0x1f, 0x290, 0xb, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x293, 
    0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x297, 0xa, 0x20, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x29e, 0xa, 0x21, 
    0x3, 0x22, 0x5, 0x22, 0x2a1, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x5, 0x25, 0x2aa, 0xa, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
    0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
    0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
    0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
    0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 
    0x26, 0x2e6, 0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x2ee, 0xa, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x7, 0x28, 0x2f3, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x2f6, 
    0xb, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x37e, 
    0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x38e, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 
    0x3b8, 0xa, 0x2a, 0xc, 0x2a, 0xe, 0x2a, 0x3bb, 0xb, 0x2a, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
    0x2c, 0x5, 0x2c, 0x3c5, 0xa, 0x2c, 0x3, 0x2c, 0x2, 0x4, 0x4e, 0x52, 
    0x2d, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 
    0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 
    0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x2, 0x6, 0x4, 0x2, 0x20, 
    0x20, 0x85, 0x85, 0x3, 0x2, 0x88, 0x8a, 0x3, 0x2, 0x6d, 0x6e, 0x3, 0x2, 
    0x30, 0x37, 0x2, 0x465, 0x2, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x4, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x8, 0x7b, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x7e, 0x3, 0x2, 0x2, 0x2, 0xc, 0x86, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x1a4, 0x3, 0x2, 0x2, 0x2, 0x10, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x12, 0x1b2, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x16, 0x1bb, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1f7, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x211, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0x215, 0x3, 0x2, 0x2, 0x2, 0x22, 0x217, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x219, 0x3, 0x2, 0x2, 0x2, 0x26, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x21d, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x237, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x239, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x245, 0x3, 0x2, 0x2, 0x2, 0x30, 0x24e, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x34, 0x263, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x276, 0x3, 0x2, 0x2, 0x2, 0x38, 0x279, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x280, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x283, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x296, 0x3, 0x2, 0x2, 0x2, 0x40, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x2a0, 0x3, 0x2, 0x2, 0x2, 0x44, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x46, 0x2a6, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x2e5, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x2e7, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x2ed, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x37d, 0x3, 0x2, 0x2, 0x2, 0x52, 0x38d, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x3bc, 0x3, 0x2, 0x2, 0x2, 0x56, 0x3c4, 0x3, 0x2, 0x2, 0x2, 
    0x58, 0x5a, 0x5, 0x4, 0x3, 0x2, 0x59, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5a, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5b, 0x3, 
    0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x2, 0x2, 0x3, 0x5f, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x60, 0x6e, 0x7, 0x79, 0x2, 0x2, 0x61, 0x6e, 0x5, 0xc, 0x7, 
    0x2, 0x62, 0x64, 0x5, 0xc, 0x7, 0x2, 0x63, 0x62, 0x3, 0x2, 0x2, 0x2, 
    0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 0x65, 
    0x66, 0x7, 0x7d, 0x2, 0x2, 0x66, 0x6e, 0x7, 0x79, 0x2, 0x2, 0x67, 0x69, 
    0x5, 0xc, 0x7, 0x2, 0x68, 0x67, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 
    0x2, 0x2, 0x2, 0x69, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x5, 0x6, 
    0x4, 0x2, 0x6b, 0x6c, 0x7, 0x79, 0x2, 0x2, 0x6c, 0x6e, 0x3, 0x2, 0x2, 
    0x2, 0x6d, 0x60, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x61, 0x3, 0x2, 0x2, 0x2, 
    0x6d, 0x63, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6e, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x76, 0x5, 0xe, 0x8, 0x2, 0x70, 0x72, 
    0x7, 0x7d, 0x2, 0x2, 0x71, 0x73, 0x5, 0xe, 0x8, 0x2, 0x72, 0x71, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x73, 0x3, 0x2, 0x2, 0x2, 0x73, 0x75, 0x3, 0x2, 
    0x2, 0x2, 0x74, 0x70, 0x3, 0x2, 0x2, 0x2, 0x75, 0x78, 0x3, 0x2, 0x2, 
    0x2, 0x76, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 
    0x77, 0x7, 0x3, 0x2, 0x2, 0x2, 0x78, 0x76, 0x3, 0x2, 0x2, 0x2, 0x79, 
    0x7c, 0x5, 0x6, 0x4, 0x2, 0x7a, 0x7c, 0x5, 0x4, 0x3, 0x2, 0x7b, 0x79, 
    0x3, 0x2, 0x2, 0x2, 0x7b, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x7d, 0x7f, 0x7, 0x7d, 0x2, 0x2, 0x7e, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x83, 0x3, 0x2, 0x2, 
    0x2, 0x80, 0x82, 0x5, 0x8, 0x5, 0x2, 0x81, 0x80, 0x3, 0x2, 0x2, 0x2, 
    0x82, 0x85, 0x3, 0x2, 0x2, 0x2, 0x83, 0x81, 0x3, 0x2, 0x2, 0x2, 0x83, 
    0x84, 0x3, 0x2, 0x2, 0x2, 0x84, 0xb, 0x3, 0x2, 0x2, 0x2, 0x85, 0x83, 
    0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x7, 0x92, 0x2, 0x2, 0x87, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x88, 0x1a5, 0x9, 0x2, 0x2, 0x2, 0x89, 0x1a5, 0x7, 0x3, 
    0x2, 0x2, 0x8a, 0x8b, 0x7, 0x4, 0x2, 0x2, 0x8b, 0x8c, 0x5, 0x3e, 0x20, 
    0x2, 0x8c, 0x8d, 0x7, 0x1a, 0x2, 0x2, 0x8d, 0x8f, 0x7, 0x79, 0x2, 0x2, 
    0x8e, 0x90, 0x5, 0x10, 0x9, 0x2, 0x8f, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x90, 
    0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 
    0x3, 0x2, 0x2, 0x2, 0x92, 0x95, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x7, 
    0x1c, 0x2, 0x2, 0x94, 0x96, 0x5, 0xa, 0x6, 0x2, 0x95, 0x93, 0x3, 0x2, 
    0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x3, 0x2, 0x2, 
    0x2, 0x97, 0x98, 0x7, 0xb, 0x2, 0x2, 0x98, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
    0x99, 0x9a, 0x7, 0x5, 0x2, 0x2, 0x9a, 0x1a5, 0x5, 0x4e, 0x28, 0x2, 0x9b, 
    0x9c, 0x7, 0x6, 0x2, 0x2, 0x9c, 0xa1, 0x5, 0x14, 0xb, 0x2, 0x9d, 0x9e, 
    0x7, 0x7e, 0x2, 0x2, 0x9e, 0xa0, 0x5, 0x14, 0xb, 0x2, 0x9f, 0x9d, 0x3, 
    0x2, 0x2, 0x2, 0xa0, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x9f, 0x3, 0x2, 
    0x2, 0x2, 0xa1, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x1a5, 0x3, 0x2, 0x2, 
    0x2, 0xa3, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0x8, 0x2, 0x2, 
    0xa5, 0xaa, 0x5, 0x2c, 0x17, 0x2, 0xa6, 0xa7, 0x7, 0x7e, 0x2, 0x2, 0xa7, 
    0xa9, 0x5, 0x2c, 0x17, 0x2, 0xa8, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xac, 
    0x3, 0x2, 0x2, 0x2, 0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 
    0x2, 0x2, 0x2, 0xab, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 
    0x2, 0x2, 0xad, 0x1a5, 0x7, 0xa, 0x2, 0x2, 0xae, 0xb0, 0x7, 0x23, 0x2, 
    0x2, 0xaf, 0xb1, 0x5, 0x3e, 0x20, 0x2, 0xb0, 0xaf, 0x3, 0x2, 0x2, 0x2, 
    0xb0, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb1, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0xb2, 
    0xb3, 0x7, 0x7, 0x2, 0x2, 0xb3, 0xb4, 0x5, 0x12, 0xa, 0x2, 0xb4, 0xb6, 
    0x7, 0x80, 0x2, 0x2, 0xb5, 0xb7, 0x5, 0x30, 0x19, 0x2, 0xb6, 0xb5, 0x3, 
    0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 
    0x2, 0x2, 0xb8, 0xb9, 0x7, 0x82, 0x2, 0x2, 0xb9, 0xba, 0x5, 0xa, 0x6, 
    0x2, 0xba, 0xbb, 0x7, 0xd, 0x2, 0x2, 0xbb, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
    0xbc, 0xbd, 0x7, 0x7, 0x2, 0x2, 0xbd, 0xbe, 0x7, 0x87, 0x2, 0x2, 0xbe, 
    0xc0, 0x7, 0x80, 0x2, 0x2, 0xbf, 0xc1, 0x5, 0x30, 0x19, 0x2, 0xc0, 0xbf, 
    0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x3, 
    0x2, 0x2, 0x2, 0xc2, 0xc3, 0x7, 0x82, 0x2, 0x2, 0xc3, 0xc4, 0x5, 0xa, 
    0x6, 0x2, 0xc4, 0xc5, 0x7, 0xe, 0x2, 0x2, 0xc5, 0x1a5, 0x3, 0x2, 0x2, 
    0x2, 0xc6, 0xc8, 0x7, 0x11, 0x2, 0x2, 0xc7, 0xc9, 0x7, 0x17, 0x2, 0x2, 
    0xc8, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc9, 
    0xca, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x5, 0x20, 0x11, 0x2, 0xcb, 0xcc, 
    0x7, 0x60, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x52, 0x2a, 0x2, 0xcd, 0xce, 0x7, 
    0x28, 0x2, 0x2, 0xce, 0xd1, 0x5, 0x52, 0x2a, 0x2, 0xcf, 0xd0, 0x7, 0x25, 
    0x2, 0x2, 0xd0, 0xd2, 0x5, 0x52, 0x2a, 0x2, 0xd1, 0xcf, 0x3, 0x2, 0x2, 
    0x2, 0xd1, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 
    0xd3, 0xd4, 0x5, 0xa, 0x6, 0x2, 0xd4, 0xd5, 0x7, 0x19, 0x2, 0x2, 0xd5, 
    0x1a5, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd8, 0x7, 0x11, 0x2, 0x2, 0xd7, 0xd9, 
    0x7, 0x17, 0x2, 0x2, 0xd8, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 
    0x2, 0x2, 0x2, 0xd9, 0xda, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x5, 0x1e, 
    0x10, 0x2, 0xdb, 0xdc, 0x7, 0x14, 0x2, 0x2, 0xdc, 0xdd, 0x5, 0x1e, 0x10, 
    0x2, 0xdd, 0xde, 0x7, 0x80, 0x2, 0x2, 0xde, 0xdf, 0x7, 0x82, 0x2, 0x2, 
    0xdf, 0xe0, 0x5, 0xa, 0x6, 0x2, 0xe0, 0xe1, 0x7, 0x19, 0x2, 0x2, 0xe1, 
    0x1a5, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x5, 0x12, 0xa, 0x2, 0xe3, 0xe5, 
    0x7, 0x80, 0x2, 0x2, 0xe4, 0xe6, 0x5, 0x32, 0x1a, 0x2, 0xe5, 0xe4, 0x3, 
    0x2, 0x2, 0x2, 0xe5, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 
    0x2, 0x2, 0xe7, 0xe8, 0x7, 0x82, 0x2, 0x2, 0xe8, 0x1a5, 0x3, 0x2, 0x2, 
    0x2, 0xe9, 0xea, 0x7, 0x13, 0x2, 0x2, 0xea, 0xec, 0x5, 0x3e, 0x20, 0x2, 
    0xeb, 0xed, 0x7, 0x27, 0x2, 0x2, 0xec, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xec, 
    0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0x3, 0x2, 0x2, 0x2, 0xee, 0xf1, 
    0x5, 0x6, 0x4, 0x2, 0xef, 0xf0, 0x7, 0x9, 0x2, 0x2, 0xf0, 0xf2, 0x5, 
    0x6, 0x4, 0x2, 0xf1, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x3, 0x2, 
    0x2, 0x2, 0xf2, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x7, 0x13, 0x2, 
    0x2, 0xf4, 0xf6, 0x5, 0x3e, 0x20, 0x2, 0xf5, 0xf7, 0x7, 0x27, 0x2, 0x2, 
    0xf6, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf7, 
    0xf8, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x79, 0x2, 0x2, 0xf9, 0xfc, 
    0x5, 0xa, 0x6, 0x2, 0xfa, 0xfb, 0x7, 0x9, 0x2, 0x2, 0xfb, 0xfd, 0x5, 
    0xa, 0x6, 0x2, 0xfc, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 
    0x2, 0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x7, 0x79, 0x2, 
    0x2, 0xff, 0x100, 0x7, 0xc, 0x2, 0x2, 0x100, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
    0x101, 0x105, 0x7, 0x15, 0x2, 0x2, 0x102, 0x103, 0x5, 0x4e, 0x28, 0x2, 
    0x103, 0x104, 0x7, 0x7e, 0x2, 0x2, 0x104, 0x106, 0x3, 0x2, 0x2, 0x2, 
    0x105, 0x102, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 0x2, 
    0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x1a5, 0x5, 0x2e, 0x18, 0x2, 
    0x108, 0x10a, 0x7, 0x18, 0x2, 0x2, 0x109, 0x108, 0x3, 0x2, 0x2, 0x2, 
    0x109, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10f, 0x3, 0x2, 0x2, 0x2, 
    0x10b, 0x10d, 0x7, 0x16, 0x2, 0x2, 0x10c, 0x10b, 0x3, 0x2, 0x2, 0x2, 
    0x10c, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10f, 0x3, 0x2, 0x2, 0x2, 
    0x10e, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10c, 0x3, 0x2, 0x2, 0x2, 
    0x10f, 0x110, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x5, 0x2a, 0x16, 0x2, 
    0x111, 0x112, 0x7, 0x60, 0x2, 0x2, 0x112, 0x11a, 0x5, 0x3e, 0x20, 0x2, 
    0x113, 0x114, 0x7, 0x7e, 0x2, 0x2, 0x114, 0x115, 0x5, 0x2a, 0x16, 0x2, 
    0x115, 0x116, 0x7, 0x60, 0x2, 0x2, 0x116, 0x117, 0x5, 0x3e, 0x20, 0x2, 
    0x117, 0x119, 0x3, 0x2, 0x2, 0x2, 0x118, 0x113, 0x3, 0x2, 0x2, 0x2, 
    0x119, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x118, 0x3, 0x2, 0x2, 0x2, 
    0x11a, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
    0x11c, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x7, 0x17, 0x2, 0x2, 
    0x11e, 0x11f, 0x5, 0x2a, 0x16, 0x2, 0x11f, 0x120, 0x7, 0x60, 0x2, 0x2, 
    0x120, 0x128, 0x5, 0x3e, 0x20, 0x2, 0x121, 0x122, 0x7, 0x7e, 0x2, 0x2, 
    0x122, 0x123, 0x5, 0x2a, 0x16, 0x2, 0x123, 0x124, 0x7, 0x60, 0x2, 0x2, 
    0x124, 0x125, 0x5, 0x3e, 0x20, 0x2, 0x125, 0x127, 0x3, 0x2, 0x2, 0x2, 
    0x126, 0x121, 0x3, 0x2, 0x2, 0x2, 0x127, 0x12a, 0x3, 0x2, 0x2, 0x2, 
    0x128, 0x126, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 0x2, 
    0x129, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x128, 0x3, 0x2, 0x2, 0x2, 
    0x12b, 0x12c, 0x7, 0x17, 0x2, 0x2, 0x12c, 0x12d, 0x7, 0x8, 0x2, 0x2, 
    0x12d, 0x132, 0x5, 0x2c, 0x17, 0x2, 0x12e, 0x12f, 0x7, 0x7e, 0x2, 0x2, 
    0x12f, 0x131, 0x5, 0x2c, 0x17, 0x2, 0x130, 0x12e, 0x3, 0x2, 0x2, 0x2, 
    0x131, 0x134, 0x3, 0x2, 0x2, 0x2, 0x132, 0x130, 0x3, 0x2, 0x2, 0x2, 
    0x132, 0x133, 0x3, 0x2, 0x2, 0x2, 0x133, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
    0x134, 0x132, 0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 0x7, 0x1b, 0x2, 0x2, 
    0x136, 0x1a5, 0x5, 0x4e, 0x28, 0x2, 0x137, 0x139, 0x7, 0x1d, 0x2, 0x2, 
    0x138, 0x13a, 0x5, 0x3c, 0x1f, 0x2, 0x139, 0x138, 0x3, 0x2, 0x2, 0x2, 
    0x139, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
    0x13b, 0x13c, 0x7, 0x87, 0x2, 0x2, 0x13c, 0x13e, 0x7, 0x80, 0x2, 0x2, 
    0x13d, 0x13f, 0x5, 0x32, 0x1a, 0x2, 0x13e, 0x13d, 0x3, 0x2, 0x2, 0x2, 
    0x13e, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 0x3, 0x2, 0x2, 0x2, 
    0x140, 0x1a5, 0x7, 0x82, 0x2, 0x2, 0x141, 0x142, 0x7, 0x1f, 0x2, 0x2, 
    0x142, 0x147, 0x5, 0x2a, 0x16, 0x2, 0x143, 0x144, 0x7, 0x7e, 0x2, 0x2, 
    0x144, 0x146, 0x5, 0x2a, 0x16, 0x2, 0x145, 0x143, 0x3, 0x2, 0x2, 0x2, 
    0x146, 0x149, 0x3, 0x2, 0x2, 0x2, 0x147, 0x145, 0x3, 0x2, 0x2, 0x2, 
    0x147, 0x148, 0x3, 0x2, 0x2, 0x2, 0x148, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
    0x149, 0x147, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x1a5, 0x7, 0x22, 0x2, 0x2, 
    0x14b, 0x14c, 0x7, 0x26, 0x2, 0x2, 0x14c, 0x14d, 0x5, 0x1e, 0x10, 0x2, 
    0x14d, 0x14e, 0x7, 0x7e, 0x2, 0x2, 0x14e, 0x14f, 0x5, 0x1e, 0x10, 0x2, 
    0x14f, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x150, 0x1a5, 0x7, 0x29, 0x2, 0x2, 
    0x151, 0x1a5, 0x7, 0x2a, 0x2, 0x2, 0x152, 0x153, 0x7, 0x2c, 0x2, 0x2, 
    0x153, 0x154, 0x5, 0x22, 0x12, 0x2, 0x154, 0x155, 0x7, 0x80, 0x2, 0x2, 
    0x155, 0x15a, 0x5, 0x1e, 0x10, 0x2, 0x156, 0x157, 0x7, 0x7e, 0x2, 0x2, 
    0x157, 0x159, 0x5, 0x1e, 0x10, 0x2, 0x158, 0x156, 0x3, 0x2, 0x2, 0x2, 
    0x159, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x158, 0x3, 0x2, 0x2, 0x2, 
    0x15a, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15d, 0x3, 0x2, 0x2, 0x2, 
    0x15c, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 0x7, 0x82, 0x2, 0x2, 
    0x15e, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x163, 0x7, 0x21, 0x2, 0x2, 
    0x160, 0x162, 0x5, 0x8, 0x5, 0x2, 0x161, 0x160, 0x3, 0x2, 0x2, 0x2, 
    0x162, 0x165, 0x3, 0x2, 0x2, 0x2, 0x163, 0x161, 0x3, 0x2, 0x2, 0x2, 
    0x163, 0x164, 0x3, 0x2, 0x2, 0x2, 0x164, 0x166, 0x3, 0x2, 0x2, 0x2, 
    0x165, 0x163, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x7, 0x2d, 0x2, 0x2, 
    0x167, 0x1a5, 0x5, 0x3e, 0x20, 0x2, 0x168, 0x169, 0x7, 0x2f, 0x2, 0x2, 
    0x169, 0x16d, 0x5, 0x3e, 0x20, 0x2, 0x16a, 0x16c, 0x5, 0x8, 0x5, 0x2, 
    0x16b, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16f, 0x3, 0x2, 0x2, 0x2, 
    0x16d, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 0x3, 0x2, 0x2, 0x2, 
    0x16e, 0x170, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x16d, 0x3, 0x2, 0x2, 0x2, 
    0x170, 0x171, 0x7, 0xf, 0x2, 0x2, 0x171, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
    0x172, 0x173, 0x5, 0x2a, 0x16, 0x2, 0x173, 0x174, 0x7, 0x75, 0x2, 0x2, 
    0x174, 0x175, 0x5, 0x52, 0x2a, 0x2, 0x175, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
    0x176, 0x177, 0x5, 0x2a, 0x16, 0x2, 0x177, 0x178, 0x7, 0x76, 0x2, 0x2, 
    0x178, 0x179, 0x5, 0x52, 0x2a, 0x2, 0x179, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
    0x17a, 0x17b, 0x5, 0x2a, 0x16, 0x2, 0x17b, 0x17c, 0x7, 0x73, 0x2, 0x2, 
    0x17c, 0x17d, 0x5, 0x52, 0x2a, 0x2, 0x17d, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
    0x17e, 0x17f, 0x5, 0x2a, 0x16, 0x2, 0x17f, 0x180, 0x7, 0x74, 0x2, 0x2, 
    0x180, 0x181, 0x5, 0x52, 0x2a, 0x2, 0x181, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
    0x182, 0x183, 0x5, 0x2a, 0x16, 0x2, 0x183, 0x184, 0x7, 0x77, 0x2, 0x2, 
    0x184, 0x185, 0x5, 0x52, 0x2a, 0x2, 0x185, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
    0x186, 0x187, 0x5, 0x2a, 0x16, 0x2, 0x187, 0x188, 0x7, 0x78, 0x2, 0x2, 
    0x188, 0x189, 0x5, 0x52, 0x2a, 0x2, 0x189, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
    0x18a, 0x18b, 0x7, 0x39, 0x2, 0x2, 0x18b, 0x18c, 0x5, 0x52, 0x2a, 0x2, 
    0x18c, 0x18d, 0x7, 0x7e, 0x2, 0x2, 0x18d, 0x18e, 0x5, 0x52, 0x2a, 0x2, 
    0x18e, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x7, 0x38, 0x2, 0x2, 
    0x190, 0x1a5, 0x5, 0x52, 0x2a, 0x2, 0x191, 0x192, 0x7, 0x41, 0x2, 0x2, 
    0x192, 0x193, 0x5, 0x52, 0x2a, 0x2, 0x193, 0x194, 0x7, 0x60, 0x2, 0x2, 
    0x194, 0x195, 0x5, 0x52, 0x2a, 0x2, 0x195, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
    0x196, 0x197, 0x7, 0x3a, 0x2, 0x2, 0x197, 0x1a5, 0x5, 0x52, 0x2a, 0x2, 
    0x198, 0x19a, 0x7, 0x17, 0x2, 0x2, 0x199, 0x198, 0x3, 0x2, 0x2, 0x2, 
    0x199, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 0x3, 0x2, 0x2, 0x2, 
    0x19b, 0x19c, 0x5, 0x26, 0x14, 0x2, 0x19c, 0x19d, 0x7, 0x80, 0x2, 0x2, 
    0x19d, 0x19e, 0x7, 0x82, 0x2, 0x2, 0x19e, 0x19f, 0x7, 0x60, 0x2, 0x2, 
    0x19f, 0x1a0, 0x7, 0x3d, 0x2, 0x2, 0x1a0, 0x1a1, 0x7, 0x80, 0x2, 0x2, 
    0x1a1, 0x1a2, 0x5, 0x4e, 0x28, 0x2, 0x1a2, 0x1a3, 0x7, 0x82, 0x2, 0x2, 
    0x1a3, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x88, 0x3, 0x2, 0x2, 0x2, 0x1a4, 
    0x89, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x99, 
    0x3, 0x2, 0x2, 0x2, 0x1a4, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0xa4, 0x3, 
    0x2, 0x2, 0x2, 0x1a4, 0xad, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0xae, 0x3, 0x2, 
    0x2, 0x2, 0x1a4, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0xbc, 0x3, 0x2, 0x2, 
    0x2, 0x1a4, 0xc6, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0xd6, 0x3, 0x2, 0x2, 0x2, 
    0x1a4, 0xe2, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x1a4, 
    0xf3, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x101, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x10e, 
    0x3, 0x2, 0x2, 0x2, 0x1a4, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x12b, 
    0x3, 0x2, 0x2, 0x2, 0x1a4, 0x135, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x137, 
    0x3, 0x2, 0x2, 0x2, 0x1a4, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x141, 
    0x3, 0x2, 0x2, 0x2, 0x1a4, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x14b, 
    0x3, 0x2, 0x2, 0x2, 0x1a4, 0x150, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x151, 
    0x3, 0x2, 0x2, 0x2, 0x1a4, 0x152, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x15f, 
    0x3, 0x2, 0x2, 0x2, 0x1a4, 0x168, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x172, 
    0x3, 0x2, 0x2, 0x2, 0x1a4, 0x176, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x17a, 
    0x3, 0x2, 0x2, 0x2, 0x1a4, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x182, 
    0x3, 0x2, 0x2, 0x2, 0x1a4, 0x186, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x18a, 
    0x3, 0x2, 0x2, 0x2, 0x1a4, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x191, 
    0x3, 0x2, 0x2, 0x2, 0x1a4, 0x196, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x199, 
    0x3, 0x2, 0x2, 0x2, 0x1a5, 0xf, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a7, 0x7, 
    0x2e, 0x2, 0x2, 0x1a7, 0x1ac, 0x5, 0x3e, 0x20, 0x2, 0x1a8, 0x1a9, 0x7, 
    0x7e, 0x2, 0x2, 0x1a9, 0x1ab, 0x5, 0x3e, 0x20, 0x2, 0x1aa, 0x1a8, 0x3, 
    0x2, 0x2, 0x2, 0x1ab, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1aa, 0x3, 
    0x2, 0x2, 0x2, 0x1ac, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1af, 0x3, 
    0x2, 0x2, 0x2, 0x1ae, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x7, 
    0x7d, 0x2, 0x2, 0x1b0, 0x1b1, 0x5, 0xa, 0x6, 0x2, 0x1b1, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x9, 0x3, 0x2, 0x2, 0x1b3, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x1b4, 0x1b7, 0x5, 0x40, 0x21, 0x2, 0x1b5, 0x1b7, 0x5, 0x4c, 
    0x27, 0x2, 0x1b6, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b5, 0x3, 0x2, 
    0x2, 0x2, 0x1b7, 0x15, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1bc, 0x5, 0x1a, 
    0xe, 0x2, 0x1b9, 0x1bc, 0x5, 0x1c, 0xf, 0x2, 0x1ba, 0x1bc, 0x5, 0x18, 
    0xd, 0x2, 0x1bb, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1b9, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x1bd, 0x1be, 0x5, 0x28, 0x15, 0x2, 0x1be, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x1bf, 0x1c0, 0x5, 0x22, 0x12, 0x2, 0x1c0, 0x1c1, 0x7, 0x80, 0x2, 
    0x2, 0x1c1, 0x1c4, 0x5, 0x52, 0x2a, 0x2, 0x1c2, 0x1c3, 0x7, 0x7e, 0x2, 
    0x2, 0x1c3, 0x1c5, 0x5, 0x52, 0x2a, 0x2, 0x1c4, 0x1c2, 0x3, 0x2, 0x2, 
    0x2, 0x1c4, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x3, 0x2, 0x2, 
    0x2, 0x1c6, 0x1c7, 0x7, 0x82, 0x2, 0x2, 0x1c7, 0x1f8, 0x3, 0x2, 0x2, 
    0x2, 0x1c8, 0x1c9, 0x5, 0x24, 0x13, 0x2, 0x1c9, 0x1ca, 0x7, 0x80, 0x2, 
    0x2, 0x1ca, 0x1cd, 0x5, 0x52, 0x2a, 0x2, 0x1cb, 0x1cc, 0x7, 0x7e, 0x2, 
    0x2, 0x1cc, 0x1ce, 0x5, 0x52, 0x2a, 0x2, 0x1cd, 0x1cb, 0x3, 0x2, 0x2, 
    0x2, 0x1cd, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cf, 0x3, 0x2, 0x2, 
    0x2, 0x1cf, 0x1d0, 0x7, 0x82, 0x2, 0x2, 0x1d0, 0x1f8, 0x3, 0x2, 0x2, 
    0x2, 0x1d1, 0x1d2, 0x5, 0x18, 0xd, 0x2, 0x1d2, 0x1d3, 0x7, 0x80, 0x2, 
    0x2, 0x1d3, 0x1d4, 0x5, 0x52, 0x2a, 0x2, 0x1d4, 0x1d5, 0x7, 0x82, 0x2, 
    0x2, 0x1d5, 0x1d6, 0x5, 0x22, 0x12, 0x2, 0x1d6, 0x1f8, 0x3, 0x2, 0x2, 
    0x2, 0x1d7, 0x1d8, 0x7, 0x89, 0x2, 0x2, 0x1d8, 0x1da, 0x7, 0x80, 0x2, 
    0x2, 0x1d9, 0x1db, 0x5, 0x32, 0x1a, 0x2, 0x1da, 0x1d9, 0x3, 0x2, 0x2, 
    0x2, 0x1da, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 0x3, 0x2, 0x2, 
    0x2, 0x1dc, 0x1f8, 0x7, 0x82, 0x2, 0x2, 0x1dd, 0x1de, 0x7, 0x88, 0x2, 
    0x2, 0x1de, 0x1e0, 0x7, 0x80, 0x2, 0x2, 0x1df, 0x1e1, 0x5, 0x32, 0x1a, 
    0x2, 0x1e0, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e1, 0x3, 0x2, 0x2, 
    0x2, 0x1e1, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1f8, 0x7, 0x82, 0x2, 
    0x2, 0x1e3, 0x1e4, 0x7, 0x8a, 0x2, 0x2, 0x1e4, 0x1e6, 0x7, 0x80, 0x2, 
    0x2, 0x1e5, 0x1e7, 0x5, 0x32, 0x1a, 0x2, 0x1e6, 0x1e5, 0x3, 0x2, 0x2, 
    0x2, 0x1e6, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 0x3, 0x2, 0x2, 
    0x2, 0x1e8, 0x1f8, 0x7, 0x82, 0x2, 0x2, 0x1e9, 0x1f8, 0x5, 0x22, 0x12, 
    0x2, 0x1ea, 0x1f8, 0x5, 0x24, 0x13, 0x2, 0x1eb, 0x1ec, 0x5, 0x18, 0xd, 
    0x2, 0x1ec, 0x1ed, 0x5, 0x22, 0x12, 0x2, 0x1ed, 0x1f8, 0x3, 0x2, 0x2, 
    0x2, 0x1ee, 0x1ef, 0x5, 0x18, 0xd, 0x2, 0x1ef, 0x1f0, 0x5, 0x24, 0x13, 
    0x2, 0x1f0, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x5, 0x18, 0xd, 
    0x2, 0x1f2, 0x1f3, 0x7, 0x80, 0x2, 0x2, 0x1f3, 0x1f4, 0x5, 0x52, 0x2a, 
    0x2, 0x1f4, 0x1f5, 0x7, 0x82, 0x2, 0x2, 0x1f5, 0x1f6, 0x5, 0x24, 0x13, 
    0x2, 0x1f6, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1bf, 0x3, 0x2, 0x2, 
    0x2, 0x1f7, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1d1, 0x3, 0x2, 0x2, 
    0x2, 0x1f7, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1dd, 0x3, 0x2, 0x2, 
    0x2, 0x1f7, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1e9, 0x3, 0x2, 0x2, 
    0x2, 0x1f7, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1eb, 0x3, 0x2, 0x2, 
    0x2, 0x1f7, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f1, 0x3, 0x2, 0x2, 
    0x2, 0x1f8, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 0x5, 0x26, 0x14, 
    0x2, 0x1fa, 0x1fb, 0x7, 0x80, 0x2, 0x2, 0x1fb, 0x1fe, 0x5, 0x52, 0x2a, 
    0x2, 0x1fc, 0x1fd, 0x7, 0x7e, 0x2, 0x2, 0x1fd, 0x1ff, 0x5, 0x52, 0x2a, 
    0x2, 0x1fe, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1ff, 0x3, 0x2, 0x2, 
    0x2, 0x1ff, 0x200, 0x3, 0x2, 0x2, 0x2, 0x200, 0x201, 0x7, 0x82, 0x2, 
    0x2, 0x201, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x5, 0x18, 0xd, 
    0x2, 0x203, 0x204, 0x7, 0x80, 0x2, 0x2, 0x204, 0x205, 0x5, 0x52, 0x2a, 
    0x2, 0x205, 0x206, 0x7, 0x82, 0x2, 0x2, 0x206, 0x207, 0x5, 0x26, 0x14, 
    0x2, 0x207, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x208, 0x20d, 0x5, 0x26, 0x14, 
    0x2, 0x209, 0x20a, 0x5, 0x18, 0xd, 0x2, 0x20a, 0x20b, 0x5, 0x26, 0x14, 
    0x2, 0x20b, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x1f9, 0x3, 0x2, 0x2, 
    0x2, 0x20c, 0x202, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x208, 0x3, 0x2, 0x2, 
    0x2, 0x20c, 0x209, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x20e, 0x212, 0x5, 0x22, 0x12, 0x2, 0x20f, 0x212, 0x5, 0x24, 0x13, 0x2, 
    0x210, 0x212, 0x5, 0x26, 0x14, 0x2, 0x211, 0x20e, 0x3, 0x2, 0x2, 0x2, 
    0x211, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x211, 0x210, 0x3, 0x2, 0x2, 0x2, 
    0x212, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x213, 0x216, 0x5, 0x22, 0x12, 0x2, 
    0x214, 0x216, 0x5, 0x24, 0x13, 0x2, 0x215, 0x213, 0x3, 0x2, 0x2, 0x2, 
    0x215, 0x214, 0x3, 0x2, 0x2, 0x2, 0x216, 0x21, 0x3, 0x2, 0x2, 0x2, 0x217, 
    0x218, 0x7, 0x8b, 0x2, 0x2, 0x218, 0x23, 0x3, 0x2, 0x2, 0x2, 0x219, 
    0x21a, 0x7, 0x8c, 0x2, 0x2, 0x21a, 0x25, 0x3, 0x2, 0x2, 0x2, 0x21b, 
    0x21c, 0x7, 0x8d, 0x2, 0x2, 0x21c, 0x27, 0x3, 0x2, 0x2, 0x2, 0x21d, 
    0x21e, 0x7, 0x8e, 0x2, 0x2, 0x21e, 0x29, 0x3, 0x2, 0x2, 0x2, 0x21f, 
    0x238, 0x5, 0x1e, 0x10, 0x2, 0x220, 0x22b, 0x5, 0x1e, 0x10, 0x2, 0x221, 
    0x222, 0x7, 0x80, 0x2, 0x2, 0x222, 0x225, 0x5, 0x52, 0x2a, 0x2, 0x223, 
    0x224, 0x7, 0x7e, 0x2, 0x2, 0x224, 0x226, 0x5, 0x52, 0x2a, 0x2, 0x225, 
    0x223, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x3, 0x2, 0x2, 0x2, 0x226, 
    0x227, 0x3, 0x2, 0x2, 0x2, 0x227, 0x228, 0x7, 0x82, 0x2, 0x2, 0x228, 
    0x22a, 0x3, 0x2, 0x2, 0x2, 0x229, 0x221, 0x3, 0x2, 0x2, 0x2, 0x22a, 
    0x22d, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x229, 0x3, 0x2, 0x2, 0x2, 0x22b, 
    0x22c, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x238, 0x3, 0x2, 0x2, 0x2, 0x22d, 
    0x22b, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22f, 0x5, 0x18, 0xd, 0x2, 0x22f, 
    0x230, 0x5, 0x22, 0x12, 0x2, 0x230, 0x238, 0x3, 0x2, 0x2, 0x2, 0x231, 
    0x232, 0x5, 0x18, 0xd, 0x2, 0x232, 0x233, 0x7, 0x80, 0x2, 0x2, 0x233, 
    0x234, 0x5, 0x52, 0x2a, 0x2, 0x234, 0x235, 0x7, 0x82, 0x2, 0x2, 0x235, 
    0x236, 0x5, 0x22, 0x12, 0x2, 0x236, 0x238, 0x3, 0x2, 0x2, 0x2, 0x237, 
    0x21f, 0x3, 0x2, 0x2, 0x2, 0x237, 0x220, 0x3, 0x2, 0x2, 0x2, 0x237, 
    0x22e, 0x3, 0x2, 0x2, 0x2, 0x237, 0x231, 0x3, 0x2, 0x2, 0x2, 0x238, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23a, 0x5, 0x1e, 0x10, 0x2, 0x23a, 
    0x23b, 0x7, 0x80, 0x2, 0x2, 0x23b, 0x240, 0x5, 0x52, 0x2a, 0x2, 0x23c, 
    0x23d, 0x7, 0x7e, 0x2, 0x2, 0x23d, 0x23f, 0x5, 0x52, 0x2a, 0x2, 0x23e, 
    0x23c, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x242, 0x3, 0x2, 0x2, 0x2, 0x240, 
    0x23e, 0x3, 0x2, 0x2, 0x2, 0x240, 0x241, 0x3, 0x2, 0x2, 0x2, 0x241, 
    0x243, 0x3, 0x2, 0x2, 0x2, 0x242, 0x240, 0x3, 0x2, 0x2, 0x2, 0x243, 
    0x244, 0x7, 0x82, 0x2, 0x2, 0x244, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x245, 
    0x24a, 0x5, 0x2a, 0x16, 0x2, 0x246, 0x247, 0x7, 0x7e, 0x2, 0x2, 0x247, 
    0x249, 0x5, 0x2a, 0x16, 0x2, 0x248, 0x246, 0x3, 0x2, 0x2, 0x2, 0x249, 
    0x24c, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x248, 0x3, 0x2, 0x2, 0x2, 0x24a, 
    0x24b, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24a, 
    0x3, 0x2, 0x2, 0x2, 0x24d, 0x24f, 0x7, 0x23, 0x2, 0x2, 0x24e, 0x24d, 
    0x3, 0x2, 0x2, 0x2, 0x24e, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x250, 
    0x3, 0x2, 0x2, 0x2, 0x250, 0x258, 0x5, 0x1e, 0x10, 0x2, 0x251, 0x253, 
    0x7, 0x7e, 0x2, 0x2, 0x252, 0x254, 0x7, 0x23, 0x2, 0x2, 0x253, 0x252, 
    0x3, 0x2, 0x2, 0x2, 0x253, 0x254, 0x3, 0x2, 0x2, 0x2, 0x254, 0x255, 
    0x3, 0x2, 0x2, 0x2, 0x255, 0x257, 0x5, 0x1e, 0x10, 0x2, 0x256, 0x251, 
    0x3, 0x2, 0x2, 0x2, 0x257, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x258, 0x256, 
    0x3, 0x2, 0x2, 0x2, 0x258, 0x259, 0x3, 0x2, 0x2, 0x2, 0x259, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x25a, 0x258, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x260, 0x5, 
    0x3e, 0x20, 0x2, 0x25c, 0x25d, 0x7, 0x7e, 0x2, 0x2, 0x25d, 0x25f, 0x5, 
    0x3e, 0x20, 0x2, 0x25e, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x262, 0x3, 
    0x2, 0x2, 0x2, 0x260, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x260, 0x261, 0x3, 
    0x2, 0x2, 0x2, 0x261, 0x33, 0x3, 0x2, 0x2, 0x2, 0x262, 0x260, 0x3, 0x2, 
    0x2, 0x2, 0x263, 0x268, 0x5, 0x3e, 0x20, 0x2, 0x264, 0x265, 0x7, 0x7e, 
    0x2, 0x2, 0x265, 0x267, 0x5, 0x3e, 0x20, 0x2, 0x266, 0x264, 0x3, 0x2, 
    0x2, 0x2, 0x267, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x268, 0x266, 0x3, 0x2, 
    0x2, 0x2, 0x268, 0x269, 0x3, 0x2, 0x2, 0x2, 0x269, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x26a, 0x268, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26d, 0x7, 0x7b, 0x2, 
    0x2, 0x26c, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26d, 0x3, 0x2, 0x2, 
    0x2, 0x26d, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x277, 0x5, 0x3e, 0x20, 
    0x2, 0x26f, 0x270, 0x7, 0x24, 0x2, 0x2, 0x270, 0x271, 0x7, 0x80, 0x2, 
    0x2, 0x271, 0x272, 0x5, 0x52, 0x2a, 0x2, 0x272, 0x273, 0x7, 0x82, 0x2, 
    0x2, 0x273, 0x277, 0x3, 0x2, 0x2, 0x2, 0x274, 0x275, 0x7, 0x24, 0x2, 
    0x2, 0x275, 0x277, 0x5, 0x52, 0x2a, 0x2, 0x276, 0x26c, 0x3, 0x2, 0x2, 
    0x2, 0x276, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x276, 0x274, 0x3, 0x2, 0x2, 
    0x2, 0x277, 0x37, 0x3, 0x2, 0x2, 0x2, 0x278, 0x27a, 0x7, 0x7a, 0x2, 
    0x2, 0x279, 0x278, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x27b, 0x3, 0x2, 0x2, 
    0x2, 0x27b, 0x279, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x27c, 0x3, 0x2, 0x2, 
    0x2, 0x27c, 0x39, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x281, 0x7, 0x7e, 0x2, 
    0x2, 0x27e, 0x281, 0x7, 0x83, 0x2, 0x2, 0x27f, 0x281, 0x5, 0x38, 0x1d, 
    0x2, 0x280, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x280, 0x27e, 0x3, 0x2, 0x2, 
    0x2, 0x280, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x281, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x282, 0x284, 0x5, 0x38, 0x1d, 0x2, 0x283, 0x282, 0x3, 0x2, 0x2, 0x2, 
    0x283, 0x284, 0x3, 0x2, 0x2, 0x2, 0x284, 0x286, 0x3, 0x2, 0x2, 0x2, 
    0x285, 0x287, 0x7, 0x83, 0x2, 0x2, 0x286, 0x285, 0x3, 0x2, 0x2, 0x2, 
    0x286, 0x287, 0x3, 0x2, 0x2, 0x2, 0x287, 0x288, 0x3, 0x2, 0x2, 0x2, 
    0x288, 0x28e, 0x5, 0x36, 0x1c, 0x2, 0x289, 0x28a, 0x5, 0x3a, 0x1e, 0x2, 
    0x28a, 0x28b, 0x5, 0x36, 0x1c, 0x2, 0x28b, 0x28d, 0x3, 0x2, 0x2, 0x2, 
    0x28c, 0x289, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x290, 0x3, 0x2, 0x2, 0x2, 
    0x28e, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28f, 0x3, 0x2, 0x2, 0x2, 
    0x28f, 0x292, 0x3, 0x2, 0x2, 0x2, 0x290, 0x28e, 0x3, 0x2, 0x2, 0x2, 
    0x291, 0x293, 0x7, 0x83, 0x2, 0x2, 0x292, 0x291, 0x3, 0x2, 0x2, 0x2, 
    0x292, 0x293, 0x3, 0x2, 0x2, 0x2, 0x293, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x294, 
    0x297, 0x5, 0x52, 0x2a, 0x2, 0x295, 0x297, 0x5, 0x4e, 0x28, 0x2, 0x296, 
    0x294, 0x3, 0x2, 0x2, 0x2, 0x296, 0x295, 0x3, 0x2, 0x2, 0x2, 0x297, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x298, 0x29e, 0x5, 0x42, 0x22, 0x2, 0x299, 
    0x29e, 0x5, 0x48, 0x25, 0x2, 0x29a, 0x29e, 0x5, 0x44, 0x23, 0x2, 0x29b, 
    0x29e, 0x5, 0x46, 0x24, 0x2, 0x29c, 0x29e, 0x5, 0x54, 0x2b, 0x2, 0x29d, 
    0x298, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x299, 0x3, 0x2, 0x2, 0x2, 0x29d, 
    0x29a, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x29d, 
    0x29c, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x2a1, 
    0x9, 0x4, 0x2, 0x2, 0x2a0, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2a1, 
    0x3, 0x2, 0x2, 0x2, 0x2a1, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a3, 
    0x7, 0x92, 0x2, 0x2, 0x2a3, 0x43, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a5, 
    0x7, 0x90, 0x2, 0x2, 0x2a5, 0x45, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2a7, 
    0x7, 0x91, 0x2, 0x2, 0x2a7, 0x47, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2aa, 
    0x9, 0x4, 0x2, 0x2, 0x2a9, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2aa, 
    0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2ac, 
    0x7, 0x93, 0x2, 0x2, 0x2ac, 0x49, 0x3, 0x2, 0x2, 0x2, 0x2ad, 0x2e6, 
    0x7, 0x56, 0x2, 0x2, 0x2ae, 0x2af, 0x7, 0x59, 0x2, 0x2, 0x2af, 0x2b0, 
    0x7, 0x80, 0x2, 0x2, 0x2b0, 0x2b1, 0x5, 0x52, 0x2a, 0x2, 0x2b1, 0x2b2, 
    0x7, 0x82, 0x2, 0x2, 0x2b2, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b4, 
    0x7, 0x59, 0x2, 0x2, 0x2b4, 0x2e6, 0x5, 0x52, 0x2a, 0x2, 0x2b5, 0x2b6, 
    0x7, 0x5a, 0x2, 0x2, 0x2b6, 0x2b7, 0x7, 0x80, 0x2, 0x2, 0x2b7, 0x2b8, 
    0x5, 0x4e, 0x28, 0x2, 0x2b8, 0x2b9, 0x7, 0x7e, 0x2, 0x2, 0x2b9, 0x2ba, 
    0x5, 0x52, 0x2a, 0x2, 0x2ba, 0x2bb, 0x7, 0x82, 0x2, 0x2, 0x2bb, 0x2e6, 
    0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2bd, 0x7, 0x5b, 0x2, 0x2, 0x2bd, 0x2be, 
    0x7, 0x80, 0x2, 0x2, 0x2be, 0x2bf, 0x5, 0x4e, 0x28, 0x2, 0x2bf, 0x2c0, 
    0x7, 0x7e, 0x2, 0x2, 0x2c0, 0x2c1, 0x5, 0x52, 0x2a, 0x2, 0x2c1, 0x2c2, 
    0x7, 0x7e, 0x2, 0x2, 0x2c2, 0x2c3, 0x5, 0x52, 0x2a, 0x2, 0x2c3, 0x2c4, 
    0x7, 0x82, 0x2, 0x2, 0x2c4, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c6, 
    0x7, 0x5b, 0x2, 0x2, 0x2c6, 0x2c7, 0x7, 0x80, 0x2, 0x2, 0x2c7, 0x2c8, 
    0x5, 0x4e, 0x28, 0x2, 0x2c8, 0x2c9, 0x7, 0x7e, 0x2, 0x2, 0x2c9, 0x2ca, 
    0x5, 0x52, 0x2a, 0x2, 0x2ca, 0x2cb, 0x7, 0x82, 0x2, 0x2, 0x2cb, 0x2e6, 
    0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2cd, 0x7, 0x5c, 0x2, 0x2, 0x2cd, 0x2ce, 
    0x7, 0x80, 0x2, 0x2, 0x2ce, 0x2cf, 0x5, 0x4e, 0x28, 0x2, 0x2cf, 0x2d0, 
    0x7, 0x7e, 0x2, 0x2, 0x2d0, 0x2d1, 0x5, 0x52, 0x2a, 0x2, 0x2d1, 0x2d2, 
    0x7, 0x82, 0x2, 0x2, 0x2d2, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d4, 
    0x7, 0x57, 0x2, 0x2, 0x2d4, 0x2d5, 0x7, 0x80, 0x2, 0x2, 0x2d5, 0x2d6, 
    0x5, 0x52, 0x2a, 0x2, 0x2d6, 0x2d7, 0x7, 0x82, 0x2, 0x2, 0x2d7, 0x2e6, 
    0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2d9, 0x7, 0x57, 0x2, 0x2, 0x2d9, 0x2da, 
    0x7, 0x7b, 0x2, 0x2, 0x2da, 0x2db, 0x7, 0x80, 0x2, 0x2, 0x2db, 0x2dc, 
    0x5, 0x52, 0x2a, 0x2, 0x2dc, 0x2dd, 0x7, 0x82, 0x2, 0x2, 0x2dd, 0x2e6, 
    0x3, 0x2, 0x2, 0x2, 0x2de, 0x2df, 0x7, 0x58, 0x2, 0x2, 0x2df, 0x2e0, 
    0x7, 0x80, 0x2, 0x2, 0x2e0, 0x2e1, 0x5, 0x52, 0x2a, 0x2, 0x2e1, 0x2e2, 
    0x7, 0x7e, 0x2, 0x2, 0x2e2, 0x2e3, 0x5, 0x4e, 0x28, 0x2, 0x2e3, 0x2e4, 
    0x7, 0x82, 0x2, 0x2, 0x2e4, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2ad, 
    0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2b3, 
    0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2bc, 
    0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2cc, 
    0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2d8, 
    0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x4b, 0x3, 
    0x2, 0x2, 0x2, 0x2e7, 0x2e8, 0x7, 0x86, 0x2, 0x2, 0x2e8, 0x4d, 0x3, 
    0x2, 0x2, 0x2, 0x2e9, 0x2ea, 0x8, 0x28, 0x1, 0x2, 0x2ea, 0x2ee, 0x5, 
    0x4a, 0x26, 0x2, 0x2eb, 0x2ee, 0x5, 0x4c, 0x27, 0x2, 0x2ec, 0x2ee, 0x5, 
    0x1c, 0xf, 0x2, 0x2ed, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2eb, 0x3, 
    0x2, 0x2, 0x2, 0x2ed, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2f4, 0x3, 
    0x2, 0x2, 0x2, 0x2ef, 0x2f0, 0xc, 0x5, 0x2, 0x2, 0x2f0, 0x2f1, 0x7, 
    0x6d, 0x2, 0x2, 0x2f1, 0x2f3, 0x5, 0x4e, 0x28, 0x6, 0x2f2, 0x2ef, 0x3, 
    0x2, 0x2, 0x2, 0x2f3, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f4, 0x2f2, 0x3, 
    0x2, 0x2, 0x2, 0x2f4, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x4f, 0x3, 0x2, 
    0x2, 0x2, 0x2f6, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x37e, 0x7, 0x43, 
    0x2, 0x2, 0x2f8, 0x37e, 0x7, 0x10, 0x2, 0x2, 0x2f9, 0x37e, 0x7, 0x2b, 
    0x2, 0x2, 0x2fa, 0x37e, 0x7, 0x42, 0x2, 0x2, 0x2fb, 0x37e, 0x7, 0x5d, 
    0x2, 0x2, 0x2fc, 0x37e, 0x7, 0x5e, 0x2, 0x2, 0x2fd, 0x37e, 0x7, 0x5f, 
    0x2, 0x2, 0x2fe, 0x2ff, 0x7, 0x5d, 0x2, 0x2, 0x2ff, 0x300, 0x7, 0x80, 
    0x2, 0x2, 0x300, 0x301, 0x5, 0x52, 0x2a, 0x2, 0x301, 0x302, 0x7, 0x82, 
    0x2, 0x2, 0x302, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x303, 0x304, 0x7, 0x45, 
    0x2, 0x2, 0x304, 0x305, 0x7, 0x80, 0x2, 0x2, 0x305, 0x306, 0x5, 0x52, 
    0x2a, 0x2, 0x306, 0x307, 0x7, 0x82, 0x2, 0x2, 0x307, 0x37e, 0x3, 0x2, 
    0x2, 0x2, 0x308, 0x309, 0x7, 0x46, 0x2, 0x2, 0x309, 0x30a, 0x7, 0x80, 
    0x2, 0x2, 0x30a, 0x30b, 0x5, 0x52, 0x2a, 0x2, 0x30b, 0x30c, 0x7, 0x82, 
    0x2, 0x2, 0x30c, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x30e, 0x7, 0x47, 
    0x2, 0x2, 0x30e, 0x30f, 0x7, 0x80, 0x2, 0x2, 0x30f, 0x310, 0x5, 0x52, 
    0x2a, 0x2, 0x310, 0x311, 0x7, 0x82, 0x2, 0x2, 0x311, 0x37e, 0x3, 0x2, 
    0x2, 0x2, 0x312, 0x313, 0x7, 0x48, 0x2, 0x2, 0x313, 0x314, 0x7, 0x80, 
    0x2, 0x2, 0x314, 0x315, 0x5, 0x52, 0x2a, 0x2, 0x315, 0x316, 0x7, 0x82, 
    0x2, 0x2, 0x316, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x317, 0x318, 0x7, 0x49, 
    0x2, 0x2, 0x318, 0x319, 0x7, 0x80, 0x2, 0x2, 0x319, 0x31a, 0x5, 0x52, 
    0x2a, 0x2, 0x31a, 0x31b, 0x7, 0x82, 0x2, 0x2, 0x31b, 0x37e, 0x3, 0x2, 
    0x2, 0x2, 0x31c, 0x31d, 0x7, 0x4a, 0x2, 0x2, 0x31d, 0x31e, 0x7, 0x80, 
    0x2, 0x2, 0x31e, 0x31f, 0x5, 0x52, 0x2a, 0x2, 0x31f, 0x320, 0x7, 0x82, 
    0x2, 0x2, 0x320, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x321, 0x322, 0x7, 0x4b, 
    0x2, 0x2, 0x322, 0x323, 0x7, 0x80, 0x2, 0x2, 0x323, 0x324, 0x5, 0x52, 
    0x2a, 0x2, 0x324, 0x325, 0x7, 0x82, 0x2, 0x2, 0x325, 0x37e, 0x3, 0x2, 
    0x2, 0x2, 0x326, 0x327, 0x7, 0x4c, 0x2, 0x2, 0x327, 0x328, 0x7, 0x80, 
    0x2, 0x2, 0x328, 0x329, 0x5, 0x52, 0x2a, 0x2, 0x329, 0x32a, 0x7, 0x82, 
    0x2, 0x2, 0x32a, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x32b, 0x32c, 0x7, 0x4d, 
    0x2, 0x2, 0x32c, 0x32d, 0x7, 0x80, 0x2, 0x2, 0x32d, 0x32e, 0x5, 0x52, 
    0x2a, 0x2, 0x32e, 0x32f, 0x7, 0x82, 0x2, 0x2, 0x32f, 0x37e, 0x3, 0x2, 
    0x2, 0x2, 0x330, 0x331, 0x7, 0x4e, 0x2, 0x2, 0x331, 0x332, 0x7, 0x80, 
    0x2, 0x2, 0x332, 0x333, 0x5, 0x52, 0x2a, 0x2, 0x333, 0x334, 0x7, 0x82, 
    0x2, 0x2, 0x334, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x335, 0x336, 0x7, 0x4f, 
    0x2, 0x2, 0x336, 0x337, 0x7, 0x80, 0x2, 0x2, 0x337, 0x338, 0x5, 0x52, 
    0x2a, 0x2, 0x338, 0x339, 0x7, 0x82, 0x2, 0x2, 0x339, 0x37e, 0x3, 0x2, 
    0x2, 0x2, 0x33a, 0x33b, 0x7, 0x50, 0x2, 0x2, 0x33b, 0x33c, 0x7, 0x80, 
    0x2, 0x2, 0x33c, 0x33d, 0x5, 0x52, 0x2a, 0x2, 0x33d, 0x33e, 0x7, 0x82, 
    0x2, 0x2, 0x33e, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x340, 0x7, 0x44, 
    0x2, 0x2, 0x340, 0x341, 0x7, 0x80, 0x2, 0x2, 0x341, 0x342, 0x5, 0x52, 
    0x2a, 0x2, 0x342, 0x343, 0x7, 0x82, 0x2, 0x2, 0x343, 0x37e, 0x3, 0x2, 
    0x2, 0x2, 0x344, 0x345, 0x7, 0x51, 0x2, 0x2, 0x345, 0x346, 0x7, 0x80, 
    0x2, 0x2, 0x346, 0x347, 0x5, 0x52, 0x2a, 0x2, 0x347, 0x348, 0x7, 0x82, 
    0x2, 0x2, 0x348, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x349, 0x34a, 0x7, 0x38, 
    0x2, 0x2, 0x34a, 0x37e, 0x5, 0x52, 0x2a, 0x2, 0x34b, 0x34c, 0x7, 0x3b, 
    0x2, 0x2, 0x34c, 0x37e, 0x5, 0x52, 0x2a, 0x2, 0x34d, 0x34e, 0x7, 0x3e, 
    0x2, 0x2, 0x34e, 0x34f, 0x7, 0x80, 0x2, 0x2, 0x34f, 0x350, 0x5, 0x4e, 
    0x28, 0x2, 0x350, 0x351, 0x7, 0x82, 0x2, 0x2, 0x351, 0x37e, 0x3, 0x2, 
    0x2, 0x2, 0x352, 0x353, 0x7, 0x3f, 0x2, 0x2, 0x353, 0x354, 0x7, 0x80, 
    0x2, 0x2, 0x354, 0x355, 0x5, 0x4e, 0x28, 0x2, 0x355, 0x356, 0x7, 0x82, 
    0x2, 0x2, 0x356, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x357, 0x358, 0x7, 0x40, 
    0x2, 0x2, 0x358, 0x359, 0x7, 0x80, 0x2, 0x2, 0x359, 0x35a, 0x5, 0x4e, 
    0x28, 0x2, 0x35a, 0x35b, 0x7, 0x82, 0x2, 0x2, 0x35b, 0x37e, 0x3, 0x2, 
    0x2, 0x2, 0x35c, 0x35d, 0x7, 0x41, 0x2, 0x2, 0x35d, 0x37e, 0x5, 0x52, 
    0x2a, 0x2, 0x35e, 0x35f, 0x7, 0x52, 0x2, 0x2, 0x35f, 0x360, 0x7, 0x80, 
    0x2, 0x2, 0x360, 0x361, 0x5, 0x4e, 0x28, 0x2, 0x361, 0x362, 0x7, 0x82, 
    0x2, 0x2, 0x362, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x363, 0x364, 0x7, 0x53, 
    0x2, 0x2, 0x364, 0x365, 0x7, 0x80, 0x2, 0x2, 0x365, 0x366, 0x5, 0x4e, 
    0x28, 0x2, 0x366, 0x367, 0x7, 0x82, 0x2, 0x2, 0x367, 0x37e, 0x3, 0x2, 
    0x2, 0x2, 0x368, 0x369, 0x7, 0x54, 0x2, 0x2, 0x369, 0x36a, 0x7, 0x80, 
    0x2, 0x2, 0x36a, 0x36b, 0x5, 0x4e, 0x28, 0x2, 0x36b, 0x36c, 0x7, 0x7e, 
    0x2, 0x2, 0x36c, 0x36d, 0x5, 0x4e, 0x28, 0x2, 0x36d, 0x36e, 0x7, 0x82, 
    0x2, 0x2, 0x36e, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x36f, 0x370, 0x7, 0x54, 
    0x2, 0x2, 0x370, 0x371, 0x7, 0x80, 0x2, 0x2, 0x371, 0x372, 0x5, 0x4e, 
    0x28, 0x2, 0x372, 0x373, 0x7, 0x7e, 0x2, 0x2, 0x373, 0x374, 0x5, 0x4e, 
    0x28, 0x2, 0x374, 0x375, 0x7, 0x7e, 0x2, 0x2, 0x375, 0x376, 0x5, 0x52, 
    0x2a, 0x2, 0x376, 0x377, 0x7, 0x82, 0x2, 0x2, 0x377, 0x37e, 0x3, 0x2, 
    0x2, 0x2, 0x378, 0x379, 0x7, 0x55, 0x2, 0x2, 0x379, 0x37a, 0x7, 0x80, 
    0x2, 0x2, 0x37a, 0x37b, 0x5, 0x4e, 0x28, 0x2, 0x37b, 0x37c, 0x7, 0x82, 
    0x2, 0x2, 0x37c, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x2f7, 0x3, 0x2, 
    0x2, 0x2, 0x37d, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x2f9, 0x3, 0x2, 
    0x2, 0x2, 0x37d, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x2fb, 0x3, 0x2, 
    0x2, 0x2, 0x37d, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x2fd, 0x3, 0x2, 
    0x2, 0x2, 0x37d, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x303, 0x3, 0x2, 
    0x2, 0x2, 0x37d, 0x308, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x30d, 0x3, 0x2, 
    0x2, 0x2, 0x37d, 0x312, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x317, 0x3, 0x2, 
    0x2, 0x2, 0x37d, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x321, 0x3, 0x2, 
    0x2, 0x2, 0x37d, 0x326, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x32b, 0x3, 0x2, 
    0x2, 0x2, 0x37d, 0x330, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x335, 0x3, 0x2, 
    0x2, 0x2, 0x37d, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x33f, 0x3, 0x2, 
    0x2, 0x2, 0x37d, 0x344, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x349, 0x3, 0x2, 
    0x2, 0x2, 0x37d, 0x34b, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x34d, 0x3, 0x2, 
    0x2, 0x2, 0x37d, 0x352, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x357, 0x3, 0x2, 
    0x2, 0x2, 0x37d, 0x35c, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x35e, 0x3, 0x2, 
    0x2, 0x2, 0x37d, 0x363, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x368, 0x3, 0x2, 
    0x2, 0x2, 0x37d, 0x36f, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x378, 0x3, 0x2, 
    0x2, 0x2, 0x37e, 0x51, 0x3, 0x2, 0x2, 0x2, 0x37f, 0x380, 0x8, 0x2a, 
    0x1, 0x2, 0x380, 0x38e, 0x5, 0x50, 0x29, 0x2, 0x381, 0x382, 0x7, 0x66, 
    0x2, 0x2, 0x382, 0x38e, 0x5, 0x52, 0x2a, 0x14, 0x383, 0x384, 0x7, 0x80, 
    0x2, 0x2, 0x384, 0x385, 0x5, 0x52, 0x2a, 0x2, 0x385, 0x386, 0x7, 0x82, 
    0x2, 0x2, 0x386, 0x38e, 0x3, 0x2, 0x2, 0x2, 0x387, 0x388, 0x5, 0x4e, 
    0x28, 0x2, 0x388, 0x389, 0x5, 0x56, 0x2c, 0x2, 0x389, 0x38a, 0x5, 0x4e, 
    0x28, 0x2, 0x38a, 0x38e, 0x3, 0x2, 0x2, 0x2, 0x38b, 0x38e, 0x5, 0x40, 
    0x21, 0x2, 0x38c, 0x38e, 0x5, 0x1a, 0xe, 0x2, 0x38d, 0x37f, 0x3, 0x2, 
    0x2, 0x2, 0x38d, 0x381, 0x3, 0x2, 0x2, 0x2, 0x38d, 0x383, 0x3, 0x2, 
    0x2, 0x2, 0x38d, 0x387, 0x3, 0x2, 0x2, 0x2, 0x38d, 0x38b, 0x3, 0x2, 
    0x2, 0x2, 0x38d, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x38e, 0x3b9, 0x3, 0x2, 
    0x2, 0x2, 0x38f, 0x390, 0xc, 0x12, 0x2, 0x2, 0x390, 0x391, 0x7, 0x6c, 
    0x2, 0x2, 0x391, 0x3b8, 0x5, 0x52, 0x2a, 0x12, 0x392, 0x393, 0xc, 0x11, 
    0x2, 0x2, 0x393, 0x394, 0x7, 0x6f, 0x2, 0x2, 0x394, 0x3b8, 0x5, 0x52, 
    0x2a, 0x12, 0x395, 0x396, 0xc, 0x10, 0x2, 0x2, 0x396, 0x397, 0x7, 0x70, 
    0x2, 0x2, 0x397, 0x3b8, 0x5, 0x52, 0x2a, 0x11, 0x398, 0x399, 0xc, 0xf, 
    0x2, 0x2, 0x399, 0x39a, 0x7, 0x6b, 0x2, 0x2, 0x39a, 0x3b8, 0x5, 0x52, 
    0x2a, 0x10, 0x39b, 0x39c, 0xc, 0xe, 0x2, 0x2, 0x39c, 0x39d, 0x7, 0x6a, 
    0x2, 0x2, 0x39d, 0x3b8, 0x5, 0x52, 0x2a, 0xf, 0x39e, 0x39f, 0xc, 0xd, 
    0x2, 0x2, 0x39f, 0x3a0, 0x7, 0x6d, 0x2, 0x2, 0x3a0, 0x3b8, 0x5, 0x52, 
    0x2a, 0xe, 0x3a1, 0x3a2, 0xc, 0xc, 0x2, 0x2, 0x3a2, 0x3a3, 0x7, 0x6e, 
    0x2, 0x2, 0x3a3, 0x3b8, 0x5, 0x52, 0x2a, 0xd, 0x3a4, 0x3a5, 0xc, 0xb, 
    0x2, 0x2, 0x3a5, 0x3a6, 0x5, 0x56, 0x2c, 0x2, 0x3a6, 0x3a7, 0x5, 0x52, 
    0x2a, 0xc, 0x3a7, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3a9, 0xc, 0x9, 
    0x2, 0x2, 0x3a9, 0x3aa, 0x7, 0x71, 0x2, 0x2, 0x3aa, 0x3b8, 0x5, 0x52, 
    0x2a, 0xa, 0x3ab, 0x3ac, 0xc, 0x8, 0x2, 0x2, 0x3ac, 0x3ad, 0x7, 0x72, 
    0x2, 0x2, 0x3ad, 0x3b8, 0x5, 0x52, 0x2a, 0x9, 0x3ae, 0x3af, 0xc, 0x7, 
    0x2, 0x2, 0x3af, 0x3b0, 0x7, 0x67, 0x2, 0x2, 0x3b0, 0x3b8, 0x5, 0x52, 
    0x2a, 0x8, 0x3b1, 0x3b2, 0xc, 0x6, 0x2, 0x2, 0x3b2, 0x3b3, 0x7, 0x68, 
    0x2, 0x2, 0x3b3, 0x3b8, 0x5, 0x52, 0x2a, 0x7, 0x3b4, 0x3b5, 0xc, 0x5, 
    0x2, 0x2, 0x3b5, 0x3b6, 0x7, 0x69, 0x2, 0x2, 0x3b6, 0x3b8, 0x5, 0x52, 
    0x2a, 0x6, 0x3b7, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x392, 0x3, 0x2, 
    0x2, 0x2, 0x3b7, 0x395, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x398, 0x3, 0x2, 
    0x2, 0x2, 0x3b7, 0x39b, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x39e, 0x3, 0x2, 
    0x2, 0x2, 0x3b7, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3a4, 0x3, 0x2, 
    0x2, 0x2, 0x3b7, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3ab, 0x3, 0x2, 
    0x2, 0x2, 0x3b7, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3b1, 0x3, 0x2, 
    0x2, 0x2, 0x3b7, 0x3b4, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3bb, 0x3, 0x2, 
    0x2, 0x2, 0x3b9, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ba, 0x3, 0x2, 
    0x2, 0x2, 0x3ba, 0x53, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0x3b9, 0x3, 0x2, 0x2, 
    0x2, 0x3bc, 0x3bd, 0x9, 0x5, 0x2, 0x2, 0x3bd, 0x55, 0x3, 0x2, 0x2, 0x2, 
    0x3be, 0x3c5, 0x7, 0x60, 0x2, 0x2, 0x3bf, 0x3c5, 0x7, 0x61, 0x2, 0x2, 
    0x3c0, 0x3c5, 0x7, 0x62, 0x2, 0x2, 0x3c1, 0x3c5, 0x7, 0x63, 0x2, 0x2, 
    0x3c2, 0x3c5, 0x7, 0x64, 0x2, 0x2, 0x3c3, 0x3c5, 0x7, 0x65, 0x2, 0x2, 
    0x3c4, 0x3be, 0x3, 0x2, 0x2, 0x2, 0x3c4, 0x3bf, 0x3, 0x2, 0x2, 0x2, 
    0x3c4, 0x3c0, 0x3, 0x2, 0x2, 0x2, 0x3c4, 0x3c1, 0x3, 0x2, 0x2, 0x2, 
    0x3c4, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3c4, 0x3c3, 0x3, 0x2, 0x2, 0x2, 
    0x3c5, 0x57, 0x3, 0x2, 0x2, 0x2, 0x54, 0x5b, 0x63, 0x68, 0x6d, 0x72, 
    0x76, 0x7b, 0x7e, 0x83, 0x91, 0x95, 0xa1, 0xaa, 0xb0, 0xb6, 0xc0, 0xc8, 
    0xd1, 0xd8, 0xe5, 0xec, 0xf1, 0xf6, 0xfc, 0x105, 0x109, 0x10c, 0x10e, 
    0x11a, 0x128, 0x132, 0x139, 0x13e, 0x147, 0x15a, 0x163, 0x16d, 0x199, 
    0x1a4, 0x1ac, 0x1b6, 0x1bb, 0x1c4, 0x1cd, 0x1da, 0x1e0, 0x1e6, 0x1f7, 
    0x1fe, 0x20c, 0x211, 0x215, 0x225, 0x22b, 0x237, 0x240, 0x24a, 0x24e, 
    0x253, 0x258, 0x260, 0x268, 0x26c, 0x276, 0x27b, 0x280, 0x283, 0x286, 
    0x28e, 0x292, 0x296, 0x29d, 0x2a0, 0x2a9, 0x2e5, 0x2ed, 0x2f4, 0x37d, 
    0x38d, 0x3b7, 0x3b9, 0x3c4, 
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
