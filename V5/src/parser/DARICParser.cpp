
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
    setState(201);
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
      | (1ULL << DARICParser::MOUSE)
      | (1ULL << DARICParser::INKEY)
      | (1ULL << DARICParser::INKEYS)
      | (1ULL << DARICParser::GET)
      | (1ULL << DARICParser::GETS))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::BGETH - 64))
      | (1ULL << (DARICParser::BPUTH - 64))
      | (1ULL << (DARICParser::CLOSEH - 64))
      | (1ULL << (DARICParser::PTRH - 64))
      | (1ULL << (DARICParser::CIRCLE - 64))
      | (1ULL << (DARICParser::CLS - 64))
      | (1ULL << (DARICParser::CLIPON - 64))
      | (1ULL << (DARICParser::CLIPOFF - 64))
      | (1ULL << (DARICParser::COLOUR - 64))
      | (1ULL << (DARICParser::COLOURBG - 64))
      | (1ULL << (DARICParser::FLIP - 64))
      | (1ULL << (DARICParser::SHOWFPS - 64))
      | (1ULL << (DARICParser::GRAPHICS - 64))
      | (1ULL << (DARICParser::LINE - 64))
      | (1ULL << (DARICParser::RECTANGLE - 64))
      | (1ULL << (DARICParser::PLOT - 64))
      | (1ULL << (DARICParser::TEXT - 64))
      | (1ULL << (DARICParser::TEXTRIGHT - 64))
      | (1ULL << (DARICParser::TEXTCENTRE - 64))
      | (1ULL << (DARICParser::TEXTCENTER - 64))
      | (1ULL << (DARICParser::TRIANGLE - 64)))) != 0) || ((((_la - 152) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 152)) & ((1ULL << (DARICParser::NEWLINE - 152))
      | (1ULL << (DARICParser::COLON - 152))
      | (1ULL << (DARICParser::COMMENT - 152))
      | (1ULL << (DARICParser::PROC_NAME - 152))
      | (1ULL << (DARICParser::FN_INTEGER - 152))
      | (1ULL << (DARICParser::FN_FLOAT - 152))
      | (1ULL << (DARICParser::FN_STRING - 152))
      | (1ULL << (DARICParser::VARIABLE_FLOAT - 152))
      | (1ULL << (DARICParser::VARIABLE_INTEGER - 152))
      | (1ULL << (DARICParser::VARIABLE_STRING - 152))
      | (1ULL << (DARICParser::VARIABLE_TYPE - 152))
      | (1ULL << (DARICParser::NUMBER - 152)))) != 0)) {
      setState(198);
      line();
      setState(203);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(204);
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

tree::TerminalNode* DARICParser::LineContext::COMMENT() {
  return getToken(DARICParser::COMMENT, 0);
}

tree::TerminalNode* DARICParser::LineContext::REM() {
  return getToken(DARICParser::REM, 0);
}

std::vector<DARICParser::StmtContext *> DARICParser::LineContext::stmt() {
  return getRuleContexts<DARICParser::StmtContext>();
}

DARICParser::StmtContext* DARICParser::LineContext::stmt(size_t i) {
  return getRuleContext<DARICParser::StmtContext>(i);
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
    setState(227);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(206);
      match(DARICParser::NEWLINE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(208);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::NUMBER) {
        setState(207);
        linenumber();
      }
      setState(211);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::REM || _la == DARICParser::COMMENT) {
        setState(210);
        _la = _input->LA(1);
        if (!(_la == DARICParser::REM || _la == DARICParser::COMMENT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(213);
      match(DARICParser::NEWLINE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(215);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::NUMBER) {
        setState(214);
        linenumber();
      }
      setState(218); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(217);
        stmt();
        setState(220); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
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
        | (1ULL << DARICParser::REPEAT)
        | (1ULL << DARICParser::RESTORE)
        | (1ULL << DARICParser::RETURN)
        | (1ULL << DARICParser::SWAP)
        | (1ULL << DARICParser::TRACEON)
        | (1ULL << DARICParser::TRACEOFF)
        | (1ULL << DARICParser::TYPE)
        | (1ULL << DARICParser::WHILE)
        | (1ULL << DARICParser::MOUSE)
        | (1ULL << DARICParser::INKEY)
        | (1ULL << DARICParser::INKEYS)
        | (1ULL << DARICParser::GET)
        | (1ULL << DARICParser::GETS))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::BGETH - 64))
        | (1ULL << (DARICParser::BPUTH - 64))
        | (1ULL << (DARICParser::CLOSEH - 64))
        | (1ULL << (DARICParser::PTRH - 64))
        | (1ULL << (DARICParser::CIRCLE - 64))
        | (1ULL << (DARICParser::CLS - 64))
        | (1ULL << (DARICParser::CLIPON - 64))
        | (1ULL << (DARICParser::CLIPOFF - 64))
        | (1ULL << (DARICParser::COLOUR - 64))
        | (1ULL << (DARICParser::COLOURBG - 64))
        | (1ULL << (DARICParser::FLIP - 64))
        | (1ULL << (DARICParser::SHOWFPS - 64))
        | (1ULL << (DARICParser::GRAPHICS - 64))
        | (1ULL << (DARICParser::LINE - 64))
        | (1ULL << (DARICParser::RECTANGLE - 64))
        | (1ULL << (DARICParser::PLOT - 64))
        | (1ULL << (DARICParser::TEXT - 64))
        | (1ULL << (DARICParser::TEXTRIGHT - 64))
        | (1ULL << (DARICParser::TEXTCENTRE - 64))
        | (1ULL << (DARICParser::TEXTCENTER - 64))
        | (1ULL << (DARICParser::TRIANGLE - 64)))) != 0) || ((((_la - 156) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 156)) & ((1ULL << (DARICParser::COLON - 156))
        | (1ULL << (DARICParser::PROC_NAME - 156))
        | (1ULL << (DARICParser::FN_INTEGER - 156))
        | (1ULL << (DARICParser::FN_FLOAT - 156))
        | (1ULL << (DARICParser::FN_STRING - 156))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 156))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 156))
        | (1ULL << (DARICParser::VARIABLE_STRING - 156))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 156)))) != 0));
      setState(223);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::REM || _la == DARICParser::COMMENT) {
        setState(222);
        _la = _input->LA(1);
        if (!(_la == DARICParser::REM || _la == DARICParser::COMMENT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(225);
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
    setState(232);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(229);
        stmt(); 
      }
      setState(234);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
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

std::vector<DARICParser::StmtContext *> DARICParser::BodyContext::stmt() {
  return getRuleContexts<DARICParser::StmtContext>();
}

DARICParser::StmtContext* DARICParser::BodyContext::stmt(size_t i) {
  return getRuleContext<DARICParser::StmtContext>(i);
}

std::vector<DARICParser::LineContext *> DARICParser::BodyContext::line() {
  return getRuleContexts<DARICParser::LineContext>();
}

DARICParser::LineContext* DARICParser::BodyContext::line(size_t i) {
  return getRuleContext<DARICParser::LineContext>(i);
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
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(247);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(238);
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
        | (1ULL << DARICParser::REPEAT)
        | (1ULL << DARICParser::RESTORE)
        | (1ULL << DARICParser::RETURN)
        | (1ULL << DARICParser::SWAP)
        | (1ULL << DARICParser::TRACEON)
        | (1ULL << DARICParser::TRACEOFF)
        | (1ULL << DARICParser::TYPE)
        | (1ULL << DARICParser::WHILE)
        | (1ULL << DARICParser::MOUSE)
        | (1ULL << DARICParser::INKEY)
        | (1ULL << DARICParser::INKEYS)
        | (1ULL << DARICParser::GET)
        | (1ULL << DARICParser::GETS))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::BGETH - 64))
        | (1ULL << (DARICParser::BPUTH - 64))
        | (1ULL << (DARICParser::CLOSEH - 64))
        | (1ULL << (DARICParser::PTRH - 64))
        | (1ULL << (DARICParser::CIRCLE - 64))
        | (1ULL << (DARICParser::CLS - 64))
        | (1ULL << (DARICParser::CLIPON - 64))
        | (1ULL << (DARICParser::CLIPOFF - 64))
        | (1ULL << (DARICParser::COLOUR - 64))
        | (1ULL << (DARICParser::COLOURBG - 64))
        | (1ULL << (DARICParser::FLIP - 64))
        | (1ULL << (DARICParser::SHOWFPS - 64))
        | (1ULL << (DARICParser::GRAPHICS - 64))
        | (1ULL << (DARICParser::LINE - 64))
        | (1ULL << (DARICParser::RECTANGLE - 64))
        | (1ULL << (DARICParser::PLOT - 64))
        | (1ULL << (DARICParser::TEXT - 64))
        | (1ULL << (DARICParser::TEXTRIGHT - 64))
        | (1ULL << (DARICParser::TEXTCENTRE - 64))
        | (1ULL << (DARICParser::TEXTCENTER - 64))
        | (1ULL << (DARICParser::TRIANGLE - 64)))) != 0) || ((((_la - 156) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 156)) & ((1ULL << (DARICParser::COLON - 156))
        | (1ULL << (DARICParser::PROC_NAME - 156))
        | (1ULL << (DARICParser::FN_INTEGER - 156))
        | (1ULL << (DARICParser::FN_FLOAT - 156))
        | (1ULL << (DARICParser::FN_STRING - 156))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 156))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 156))
        | (1ULL << (DARICParser::VARIABLE_STRING - 156))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 156)))) != 0)) {
        setState(235);
        stmt();
        setState(240);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(244);
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
        | (1ULL << DARICParser::MOUSE)
        | (1ULL << DARICParser::INKEY)
        | (1ULL << DARICParser::INKEYS)
        | (1ULL << DARICParser::GET)
        | (1ULL << DARICParser::GETS))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::BGETH - 64))
        | (1ULL << (DARICParser::BPUTH - 64))
        | (1ULL << (DARICParser::CLOSEH - 64))
        | (1ULL << (DARICParser::PTRH - 64))
        | (1ULL << (DARICParser::CIRCLE - 64))
        | (1ULL << (DARICParser::CLS - 64))
        | (1ULL << (DARICParser::CLIPON - 64))
        | (1ULL << (DARICParser::CLIPOFF - 64))
        | (1ULL << (DARICParser::COLOUR - 64))
        | (1ULL << (DARICParser::COLOURBG - 64))
        | (1ULL << (DARICParser::FLIP - 64))
        | (1ULL << (DARICParser::SHOWFPS - 64))
        | (1ULL << (DARICParser::GRAPHICS - 64))
        | (1ULL << (DARICParser::LINE - 64))
        | (1ULL << (DARICParser::RECTANGLE - 64))
        | (1ULL << (DARICParser::PLOT - 64))
        | (1ULL << (DARICParser::TEXT - 64))
        | (1ULL << (DARICParser::TEXTRIGHT - 64))
        | (1ULL << (DARICParser::TEXTCENTRE - 64))
        | (1ULL << (DARICParser::TEXTCENTER - 64))
        | (1ULL << (DARICParser::TRIANGLE - 64)))) != 0) || ((((_la - 152) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 152)) & ((1ULL << (DARICParser::NEWLINE - 152))
        | (1ULL << (DARICParser::COLON - 152))
        | (1ULL << (DARICParser::COMMENT - 152))
        | (1ULL << (DARICParser::PROC_NAME - 152))
        | (1ULL << (DARICParser::FN_INTEGER - 152))
        | (1ULL << (DARICParser::FN_FLOAT - 152))
        | (1ULL << (DARICParser::FN_STRING - 152))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 152))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 152))
        | (1ULL << (DARICParser::VARIABLE_STRING - 152))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 152))
        | (1ULL << (DARICParser::NUMBER - 152)))) != 0)) {
        setState(241);
        line();
        setState(246);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
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
  enterRule(_localctx, 8, DARICParser::RuleLinenumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(249);
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

tree::TerminalNode* DARICParser::StmtContext::COLON() {
  return getToken(DARICParser::COLON, 0);
}

DARICParser::CoreStmtContext* DARICParser::StmtContext::coreStmt() {
  return getRuleContext<DARICParser::CoreStmtContext>(0);
}

DARICParser::KeyMouseStmtContext* DARICParser::StmtContext::keyMouseStmt() {
  return getRuleContext<DARICParser::KeyMouseStmtContext>(0);
}

DARICParser::StmtOperatorEqualContext* DARICParser::StmtContext::stmtOperatorEqual() {
  return getRuleContext<DARICParser::StmtOperatorEqualContext>(0);
}

DARICParser::IoStmtContext* DARICParser::StmtContext::ioStmt() {
  return getRuleContext<DARICParser::IoStmtContext>(0);
}

DARICParser::GraphicsStmtContext* DARICParser::StmtContext::graphicsStmt() {
  return getRuleContext<DARICParser::GraphicsStmtContext>(0);
}


size_t DARICParser::StmtContext::getRuleIndex() const {
  return DARICParser::RuleStmt;
}


antlrcpp::Any DARICParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtContext* DARICParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 10, DARICParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(257);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(251);
      match(DARICParser::COLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(252);
      coreStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(253);
      keyMouseStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(254);
      stmtOperatorEqual();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(255);
      ioStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(256);
      graphicsStmt();
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

//----------------- CoreStmtContext ------------------------------------------------------------------

DARICParser::CoreStmtContext::CoreStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DARICParser::StmtBREAKPOINTContext* DARICParser::CoreStmtContext::stmtBREAKPOINT() {
  return getRuleContext<DARICParser::StmtBREAKPOINTContext>(0);
}

DARICParser::StmtCASEContext* DARICParser::CoreStmtContext::stmtCASE() {
  return getRuleContext<DARICParser::StmtCASEContext>(0);
}

DARICParser::StmtCHAINContext* DARICParser::CoreStmtContext::stmtCHAIN() {
  return getRuleContext<DARICParser::StmtCHAINContext>(0);
}

DARICParser::StmtDATAContext* DARICParser::CoreStmtContext::stmtDATA() {
  return getRuleContext<DARICParser::StmtDATAContext>(0);
}

DARICParser::StmtDIMContext* DARICParser::CoreStmtContext::stmtDIM() {
  return getRuleContext<DARICParser::StmtDIMContext>(0);
}

DARICParser::StmtENDContext* DARICParser::CoreStmtContext::stmtEND() {
  return getRuleContext<DARICParser::StmtENDContext>(0);
}

DARICParser::StmtRETURNContext* DARICParser::CoreStmtContext::stmtRETURN() {
  return getRuleContext<DARICParser::StmtRETURNContext>(0);
}

DARICParser::StmtDEFFNContext* DARICParser::CoreStmtContext::stmtDEFFN() {
  return getRuleContext<DARICParser::StmtDEFFNContext>(0);
}

DARICParser::StmtDEFPROCContext* DARICParser::CoreStmtContext::stmtDEFPROC() {
  return getRuleContext<DARICParser::StmtDEFPROCContext>(0);
}

DARICParser::StmtFORContext* DARICParser::CoreStmtContext::stmtFOR() {
  return getRuleContext<DARICParser::StmtFORContext>(0);
}

DARICParser::StmtFORINContext* DARICParser::CoreStmtContext::stmtFORIN() {
  return getRuleContext<DARICParser::StmtFORINContext>(0);
}

DARICParser::StmtCallFNContext* DARICParser::CoreStmtContext::stmtCallFN() {
  return getRuleContext<DARICParser::StmtCallFNContext>(0);
}

DARICParser::StmtIFContext* DARICParser::CoreStmtContext::stmtIF() {
  return getRuleContext<DARICParser::StmtIFContext>(0);
}

DARICParser::StmtIFMultilineContext* DARICParser::CoreStmtContext::stmtIFMultiline() {
  return getRuleContext<DARICParser::StmtIFMultilineContext>(0);
}

DARICParser::StmtLETContext* DARICParser::CoreStmtContext::stmtLET() {
  return getRuleContext<DARICParser::StmtLETContext>(0);
}

DARICParser::StmtOSCLIContext* DARICParser::CoreStmtContext::stmtOSCLI() {
  return getRuleContext<DARICParser::StmtOSCLIContext>(0);
}

DARICParser::StmtCallPROCContext* DARICParser::CoreStmtContext::stmtCallPROC() {
  return getRuleContext<DARICParser::StmtCallPROCContext>(0);
}

DARICParser::StmtREADContext* DARICParser::CoreStmtContext::stmtREAD() {
  return getRuleContext<DARICParser::StmtREADContext>(0);
}

DARICParser::StmtRESTOREContext* DARICParser::CoreStmtContext::stmtRESTORE() {
  return getRuleContext<DARICParser::StmtRESTOREContext>(0);
}

DARICParser::StmtSWAPContext* DARICParser::CoreStmtContext::stmtSWAP() {
  return getRuleContext<DARICParser::StmtSWAPContext>(0);
}

DARICParser::StmtTRACEONContext* DARICParser::CoreStmtContext::stmtTRACEON() {
  return getRuleContext<DARICParser::StmtTRACEONContext>(0);
}

DARICParser::StmtTRACEOFFContext* DARICParser::CoreStmtContext::stmtTRACEOFF() {
  return getRuleContext<DARICParser::StmtTRACEOFFContext>(0);
}

DARICParser::StmtTYPEContext* DARICParser::CoreStmtContext::stmtTYPE() {
  return getRuleContext<DARICParser::StmtTYPEContext>(0);
}

DARICParser::StmtREPEATContext* DARICParser::CoreStmtContext::stmtREPEAT() {
  return getRuleContext<DARICParser::StmtREPEATContext>(0);
}

DARICParser::StmtWHILEContext* DARICParser::CoreStmtContext::stmtWHILE() {
  return getRuleContext<DARICParser::StmtWHILEContext>(0);
}


size_t DARICParser::CoreStmtContext::getRuleIndex() const {
  return DARICParser::RuleCoreStmt;
}


antlrcpp::Any DARICParser::CoreStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitCoreStmt(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::CoreStmtContext* DARICParser::coreStmt() {
  CoreStmtContext *_localctx = _tracker.createInstance<CoreStmtContext>(_ctx, getState());
  enterRule(_localctx, 12, DARICParser::RuleCoreStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(284);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(259);
      stmtBREAKPOINT();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(260);
      stmtCASE();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(261);
      stmtCHAIN();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(262);
      stmtDATA();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(263);
      stmtDIM();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(264);
      stmtEND();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(265);
      stmtRETURN();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(266);
      stmtDEFFN();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(267);
      stmtDEFPROC();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(268);
      stmtFOR();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(269);
      stmtFORIN();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(270);
      stmtCallFN();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(271);
      stmtIF();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(272);
      stmtIFMultiline();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(273);
      stmtLET();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(274);
      stmtOSCLI();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(275);
      stmtCallPROC();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(276);
      stmtREAD();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(277);
      stmtRESTORE();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(278);
      stmtSWAP();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(279);
      stmtTRACEON();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(280);
      stmtTRACEOFF();
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(281);
      stmtTYPE();
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(282);
      stmtREPEAT();
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(283);
      stmtWHILE();
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

//----------------- StmtBREAKPOINTContext ------------------------------------------------------------------

DARICParser::StmtBREAKPOINTContext::StmtBREAKPOINTContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtBREAKPOINTContext::BREAKPOINT() {
  return getToken(DARICParser::BREAKPOINT, 0);
}


size_t DARICParser::StmtBREAKPOINTContext::getRuleIndex() const {
  return DARICParser::RuleStmtBREAKPOINT;
}


antlrcpp::Any DARICParser::StmtBREAKPOINTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtBREAKPOINT(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtBREAKPOINTContext* DARICParser::stmtBREAKPOINT() {
  StmtBREAKPOINTContext *_localctx = _tracker.createInstance<StmtBREAKPOINTContext>(_ctx, getState());
  enterRule(_localctx, 14, DARICParser::RuleStmtBREAKPOINT);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(286);
    match(DARICParser::BREAKPOINT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtCASEContext ------------------------------------------------------------------

DARICParser::StmtCASEContext::StmtCASEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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

DARICParser::BodyContext* DARICParser::StmtCASEContext::body() {
  return getRuleContext<DARICParser::BodyContext>(0);
}


size_t DARICParser::StmtCASEContext::getRuleIndex() const {
  return DARICParser::RuleStmtCASE;
}


antlrcpp::Any DARICParser::StmtCASEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCASE(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtCASEContext* DARICParser::stmtCASE() {
  StmtCASEContext *_localctx = _tracker.createInstance<StmtCASEContext>(_ctx, getState());
  enterRule(_localctx, 16, DARICParser::RuleStmtCASE);
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
    setState(288);
    match(DARICParser::CASE);
    setState(289);
    expr();
    setState(290);
    match(DARICParser::OF);
    setState(291);
    match(DARICParser::NEWLINE);
    setState(293); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(292);
      when();
      setState(295); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == DARICParser::WHEN);
    setState(299);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::OTHERWISE) {
      setState(297);
      match(DARICParser::OTHERWISE);
      setState(298);
      body();
    }
    setState(301);
    match(DARICParser::ENDCASE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtCHAINContext ------------------------------------------------------------------

DARICParser::StmtCHAINContext::StmtCHAINContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtCHAINContext::CHAIN() {
  return getToken(DARICParser::CHAIN, 0);
}

DARICParser::StrExprContext* DARICParser::StmtCHAINContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}


size_t DARICParser::StmtCHAINContext::getRuleIndex() const {
  return DARICParser::RuleStmtCHAIN;
}


antlrcpp::Any DARICParser::StmtCHAINContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCHAIN(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtCHAINContext* DARICParser::stmtCHAIN() {
  StmtCHAINContext *_localctx = _tracker.createInstance<StmtCHAINContext>(_ctx, getState());
  enterRule(_localctx, 18, DARICParser::RuleStmtCHAIN);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    match(DARICParser::CHAIN);
    setState(304);
    strExpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtDATAContext ------------------------------------------------------------------

DARICParser::StmtDATAContext::StmtDATAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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


size_t DARICParser::StmtDATAContext::getRuleIndex() const {
  return DARICParser::RuleStmtDATA;
}


antlrcpp::Any DARICParser::StmtDATAContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtDATA(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtDATAContext* DARICParser::stmtDATA() {
  StmtDATAContext *_localctx = _tracker.createInstance<StmtDATAContext>(_ctx, getState());
  enterRule(_localctx, 20, DARICParser::RuleStmtDATA);
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
    setState(306);
    match(DARICParser::DATA);
    setState(307);
    literal();
    setState(312);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(308);
      match(DARICParser::COMMA);
      setState(309);
      literal();
      setState(314);
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

//----------------- StmtDIMContext ------------------------------------------------------------------

DARICParser::StmtDIMContext::StmtDIMContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtDIMContext::DIM() {
  return getToken(DARICParser::DIM, 0);
}

std::vector<DARICParser::VarDeclWithDimensionContext *> DARICParser::StmtDIMContext::varDeclWithDimension() {
  return getRuleContexts<DARICParser::VarDeclWithDimensionContext>();
}

DARICParser::VarDeclWithDimensionContext* DARICParser::StmtDIMContext::varDeclWithDimension(size_t i) {
  return getRuleContext<DARICParser::VarDeclWithDimensionContext>(i);
}

tree::TerminalNode* DARICParser::StmtDIMContext::LOCAL() {
  return getToken(DARICParser::LOCAL, 0);
}

std::vector<tree::TerminalNode *> DARICParser::StmtDIMContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtDIMContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}


size_t DARICParser::StmtDIMContext::getRuleIndex() const {
  return DARICParser::RuleStmtDIM;
}


antlrcpp::Any DARICParser::StmtDIMContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtDIM(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtDIMContext* DARICParser::stmtDIM() {
  StmtDIMContext *_localctx = _tracker.createInstance<StmtDIMContext>(_ctx, getState());
  enterRule(_localctx, 22, DARICParser::RuleStmtDIM);
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
    setState(316);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::LOCAL) {
      setState(315);
      match(DARICParser::LOCAL);
    }
    setState(318);
    match(DARICParser::DIM);
    setState(319);
    varDeclWithDimension();
    setState(324);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(320);
      match(DARICParser::COMMA);
      setState(321);
      varDeclWithDimension();
      setState(326);
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

//----------------- StmtENDContext ------------------------------------------------------------------

DARICParser::StmtENDContext::StmtENDContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtENDContext::END() {
  return getToken(DARICParser::END, 0);
}


size_t DARICParser::StmtENDContext::getRuleIndex() const {
  return DARICParser::RuleStmtEND;
}


antlrcpp::Any DARICParser::StmtENDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtEND(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtENDContext* DARICParser::stmtEND() {
  StmtENDContext *_localctx = _tracker.createInstance<StmtENDContext>(_ctx, getState());
  enterRule(_localctx, 24, DARICParser::RuleStmtEND);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    match(DARICParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtRETURNContext ------------------------------------------------------------------

DARICParser::StmtRETURNContext::StmtRETURNContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtRETURNContext::RETURN() {
  return getToken(DARICParser::RETURN, 0);
}

DARICParser::ExprContext* DARICParser::StmtRETURNContext::expr() {
  return getRuleContext<DARICParser::ExprContext>(0);
}


size_t DARICParser::StmtRETURNContext::getRuleIndex() const {
  return DARICParser::RuleStmtRETURN;
}


antlrcpp::Any DARICParser::StmtRETURNContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtRETURN(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtRETURNContext* DARICParser::stmtRETURN() {
  StmtRETURNContext *_localctx = _tracker.createInstance<StmtRETURNContext>(_ctx, getState());
  enterRule(_localctx, 26, DARICParser::RuleStmtRETURN);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    match(DARICParser::RETURN);
    setState(331);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(330);
      expr();
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

//----------------- StmtDEFFNContext ------------------------------------------------------------------

DARICParser::StmtDEFFNContext::StmtDEFFNContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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

DARICParser::BodyContext* DARICParser::StmtDEFFNContext::body() {
  return getRuleContext<DARICParser::BodyContext>(0);
}

tree::TerminalNode* DARICParser::StmtDEFFNContext::ENDFN() {
  return getToken(DARICParser::ENDFN, 0);
}

DARICParser::FunctionVarListContext* DARICParser::StmtDEFFNContext::functionVarList() {
  return getRuleContext<DARICParser::FunctionVarListContext>(0);
}


size_t DARICParser::StmtDEFFNContext::getRuleIndex() const {
  return DARICParser::RuleStmtDEFFN;
}


antlrcpp::Any DARICParser::StmtDEFFNContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtDEFFN(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtDEFFNContext* DARICParser::stmtDEFFN() {
  StmtDEFFNContext *_localctx = _tracker.createInstance<StmtDEFFNContext>(_ctx, getState());
  enterRule(_localctx, 28, DARICParser::RuleStmtDEFFN);
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
    setState(333);
    match(DARICParser::DEF);
    setState(334);
    fnName();
    setState(335);
    match(DARICParser::LPAREN);
    setState(337);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::RETURN || ((((_la - 170) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 170)) & ((1ULL << (DARICParser::VARIABLE_FLOAT - 170))
      | (1ULL << (DARICParser::VARIABLE_INTEGER - 170))
      | (1ULL << (DARICParser::VARIABLE_STRING - 170)))) != 0)) {
      setState(336);
      functionVarList();
    }
    setState(339);
    match(DARICParser::RPAREN);
    setState(340);
    body();
    setState(341);
    match(DARICParser::ENDFN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtDEFPROCContext ------------------------------------------------------------------

DARICParser::StmtDEFPROCContext::StmtDEFPROCContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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

DARICParser::BodyContext* DARICParser::StmtDEFPROCContext::body() {
  return getRuleContext<DARICParser::BodyContext>(0);
}

tree::TerminalNode* DARICParser::StmtDEFPROCContext::ENDPROC() {
  return getToken(DARICParser::ENDPROC, 0);
}

DARICParser::FunctionVarListContext* DARICParser::StmtDEFPROCContext::functionVarList() {
  return getRuleContext<DARICParser::FunctionVarListContext>(0);
}


size_t DARICParser::StmtDEFPROCContext::getRuleIndex() const {
  return DARICParser::RuleStmtDEFPROC;
}


antlrcpp::Any DARICParser::StmtDEFPROCContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtDEFPROC(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtDEFPROCContext* DARICParser::stmtDEFPROC() {
  StmtDEFPROCContext *_localctx = _tracker.createInstance<StmtDEFPROCContext>(_ctx, getState());
  enterRule(_localctx, 30, DARICParser::RuleStmtDEFPROC);
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
    setState(343);
    match(DARICParser::DEF);
    setState(344);
    match(DARICParser::PROC_NAME);
    setState(345);
    match(DARICParser::LPAREN);
    setState(347);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::RETURN || ((((_la - 170) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 170)) & ((1ULL << (DARICParser::VARIABLE_FLOAT - 170))
      | (1ULL << (DARICParser::VARIABLE_INTEGER - 170))
      | (1ULL << (DARICParser::VARIABLE_STRING - 170)))) != 0)) {
      setState(346);
      functionVarList();
    }
    setState(349);
    match(DARICParser::RPAREN);
    setState(350);
    body();
    setState(351);
    match(DARICParser::ENDPROC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtFORContext ------------------------------------------------------------------

DARICParser::StmtFORContext::StmtFORContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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

DARICParser::BodyContext* DARICParser::StmtFORContext::body() {
  return getRuleContext<DARICParser::BodyContext>(0);
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


size_t DARICParser::StmtFORContext::getRuleIndex() const {
  return DARICParser::RuleStmtFOR;
}


antlrcpp::Any DARICParser::StmtFORContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtFOR(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtFORContext* DARICParser::stmtFOR() {
  StmtFORContext *_localctx = _tracker.createInstance<StmtFORContext>(_ctx, getState());
  enterRule(_localctx, 32, DARICParser::RuleStmtFOR);
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
    setState(353);
    match(DARICParser::FOR);
    setState(355);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::LOCAL) {
      setState(354);
      match(DARICParser::LOCAL);
    }
    setState(357);
    justNumberVar();
    setState(358);
    match(DARICParser::EQ);
    setState(359);
    numExpr(0);
    setState(360);
    match(DARICParser::TO);
    setState(361);
    numExpr(0);
    setState(364);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::STEP) {
      setState(362);
      match(DARICParser::STEP);
      setState(363);
      numExpr(0);
    }
    setState(366);
    body();
    setState(367);
    match(DARICParser::NEXT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtFORINContext ------------------------------------------------------------------

DARICParser::StmtFORINContext::StmtFORINContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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

DARICParser::BodyContext* DARICParser::StmtFORINContext::body() {
  return getRuleContext<DARICParser::BodyContext>(0);
}

tree::TerminalNode* DARICParser::StmtFORINContext::NEXT() {
  return getToken(DARICParser::NEXT, 0);
}

tree::TerminalNode* DARICParser::StmtFORINContext::LOCAL() {
  return getToken(DARICParser::LOCAL, 0);
}


size_t DARICParser::StmtFORINContext::getRuleIndex() const {
  return DARICParser::RuleStmtFORIN;
}


antlrcpp::Any DARICParser::StmtFORINContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtFORIN(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtFORINContext* DARICParser::stmtFORIN() {
  StmtFORINContext *_localctx = _tracker.createInstance<StmtFORINContext>(_ctx, getState());
  enterRule(_localctx, 34, DARICParser::RuleStmtFORIN);
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
    setState(369);
    match(DARICParser::FOR);
    setState(371);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::LOCAL) {
      setState(370);
      match(DARICParser::LOCAL);
    }
    setState(373);
    justVar();
    setState(374);
    match(DARICParser::IN);
    setState(375);
    justVar();
    setState(376);
    match(DARICParser::LPAREN);
    setState(377);
    match(DARICParser::RPAREN);
    setState(378);
    body();
    setState(379);
    match(DARICParser::NEXT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtCallFNContext ------------------------------------------------------------------

DARICParser::StmtCallFNContext::StmtCallFNContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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


size_t DARICParser::StmtCallFNContext::getRuleIndex() const {
  return DARICParser::RuleStmtCallFN;
}


antlrcpp::Any DARICParser::StmtCallFNContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCallFN(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtCallFNContext* DARICParser::stmtCallFN() {
  StmtCallFNContext *_localctx = _tracker.createInstance<StmtCallFNContext>(_ctx, getState());
  enterRule(_localctx, 36, DARICParser::RuleStmtCallFN);
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
    setState(381);
    fnName();
    setState(382);
    match(DARICParser::LPAREN);
    setState(384);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << DARICParser::FALSE)
      | (1ULL << DARICParser::FLOAT_TOKEN)
      | (1ULL << DARICParser::INT)
      | (1ULL << DARICParser::TRUE)
      | (1ULL << DARICParser::INKEY)
      | (1ULL << DARICParser::INKEYS)
      | (1ULL << DARICParser::GET)
      | (1ULL << DARICParser::RED)
      | (1ULL << DARICParser::GREEN)
      | (1ULL << DARICParser::YELLOW)
      | (1ULL << DARICParser::BLUE)
      | (1ULL << DARICParser::MAGENTA)
      | (1ULL << DARICParser::CYAN)
      | (1ULL << DARICParser::WHITE)
      | (1ULL << DARICParser::BLACK))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::BGETH - 64))
      | (1ULL << (DARICParser::EOFH - 64))
      | (1ULL << (DARICParser::OPENIN - 64))
      | (1ULL << (DARICParser::OPENOUT - 64))
      | (1ULL << (DARICParser::OPENUP - 64))
      | (1ULL << (DARICParser::PTRH - 64))
      | (1ULL << (DARICParser::POINT - 64))
      | (1ULL << (DARICParser::TIME - 64))
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
      | (1ULL << (DARICParser::RND1 - 64)))) != 0) || ((((_la - 133) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 133)) & ((1ULL << (DARICParser::NOT - 133))
      | (1ULL << (DARICParser::PLUS - 133))
      | (1ULL << (DARICParser::MINUS - 133))
      | (1ULL << (DARICParser::LPAREN - 133))
      | (1ULL << (DARICParser::STRINGLITERAL - 133))
      | (1ULL << (DARICParser::FN_INTEGER - 133))
      | (1ULL << (DARICParser::FN_FLOAT - 133))
      | (1ULL << (DARICParser::FN_STRING - 133))
      | (1ULL << (DARICParser::VARIABLE_FLOAT - 133))
      | (1ULL << (DARICParser::VARIABLE_INTEGER - 133))
      | (1ULL << (DARICParser::VARIABLE_STRING - 133))
      | (1ULL << (DARICParser::VARIABLE_TYPE - 133))
      | (1ULL << (DARICParser::HEXNUMBER - 133))
      | (1ULL << (DARICParser::BINARYNUMBER - 133))
      | (1ULL << (DARICParser::NUMBER - 133))
      | (1ULL << (DARICParser::FLOAT - 133)))) != 0)) {
      setState(383);
      functionParList();
    }
    setState(386);
    match(DARICParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtIFContext ------------------------------------------------------------------

DARICParser::StmtIFContext::StmtIFContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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

tree::TerminalNode* DARICParser::StmtIFContext::ELSE() {
  return getToken(DARICParser::ELSE, 0);
}


size_t DARICParser::StmtIFContext::getRuleIndex() const {
  return DARICParser::RuleStmtIF;
}


antlrcpp::Any DARICParser::StmtIFContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtIF(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtIFContext* DARICParser::stmtIF() {
  StmtIFContext *_localctx = _tracker.createInstance<StmtIFContext>(_ctx, getState());
  enterRule(_localctx, 38, DARICParser::RuleStmtIF);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(388);
    match(DARICParser::IF);
    setState(389);
    expr();
    setState(390);
    dynamic_cast<StmtIFContext *>(_localctx)->t = content();
    setState(393);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      setState(391);
      match(DARICParser::ELSE);
      setState(392);
      dynamic_cast<StmtIFContext *>(_localctx)->f = content();
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

//----------------- StmtIFMultilineContext ------------------------------------------------------------------

DARICParser::StmtIFMultilineContext::StmtIFMultilineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtIFMultilineContext::IF() {
  return getToken(DARICParser::IF, 0);
}

DARICParser::ExprContext* DARICParser::StmtIFMultilineContext::expr() {
  return getRuleContext<DARICParser::ExprContext>(0);
}

tree::TerminalNode* DARICParser::StmtIFMultilineContext::THEN() {
  return getToken(DARICParser::THEN, 0);
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

tree::TerminalNode* DARICParser::StmtIFMultilineContext::ELSE() {
  return getToken(DARICParser::ELSE, 0);
}

std::vector<DARICParser::LineContext *> DARICParser::StmtIFMultilineContext::line() {
  return getRuleContexts<DARICParser::LineContext>();
}

DARICParser::LineContext* DARICParser::StmtIFMultilineContext::line(size_t i) {
  return getRuleContext<DARICParser::LineContext>(i);
}


size_t DARICParser::StmtIFMultilineContext::getRuleIndex() const {
  return DARICParser::RuleStmtIFMultiline;
}


antlrcpp::Any DARICParser::StmtIFMultilineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtIFMultiline(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtIFMultilineContext* DARICParser::stmtIFMultiline() {
  StmtIFMultilineContext *_localctx = _tracker.createInstance<StmtIFMultilineContext>(_ctx, getState());
  enterRule(_localctx, 40, DARICParser::RuleStmtIFMultiline);
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
    setState(395);
    match(DARICParser::IF);
    setState(396);
    expr();
    setState(397);
    match(DARICParser::THEN);
    setState(398);
    match(DARICParser::NEWLINE);
    setState(400); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(399);
      dynamic_cast<StmtIFMultilineContext *>(_localctx)->t = line();
      setState(402); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
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
      | (1ULL << DARICParser::MOUSE)
      | (1ULL << DARICParser::INKEY)
      | (1ULL << DARICParser::INKEYS)
      | (1ULL << DARICParser::GET)
      | (1ULL << DARICParser::GETS))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::BGETH - 64))
      | (1ULL << (DARICParser::BPUTH - 64))
      | (1ULL << (DARICParser::CLOSEH - 64))
      | (1ULL << (DARICParser::PTRH - 64))
      | (1ULL << (DARICParser::CIRCLE - 64))
      | (1ULL << (DARICParser::CLS - 64))
      | (1ULL << (DARICParser::CLIPON - 64))
      | (1ULL << (DARICParser::CLIPOFF - 64))
      | (1ULL << (DARICParser::COLOUR - 64))
      | (1ULL << (DARICParser::COLOURBG - 64))
      | (1ULL << (DARICParser::FLIP - 64))
      | (1ULL << (DARICParser::SHOWFPS - 64))
      | (1ULL << (DARICParser::GRAPHICS - 64))
      | (1ULL << (DARICParser::LINE - 64))
      | (1ULL << (DARICParser::RECTANGLE - 64))
      | (1ULL << (DARICParser::PLOT - 64))
      | (1ULL << (DARICParser::TEXT - 64))
      | (1ULL << (DARICParser::TEXTRIGHT - 64))
      | (1ULL << (DARICParser::TEXTCENTRE - 64))
      | (1ULL << (DARICParser::TEXTCENTER - 64))
      | (1ULL << (DARICParser::TRIANGLE - 64)))) != 0) || ((((_la - 152) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 152)) & ((1ULL << (DARICParser::NEWLINE - 152))
      | (1ULL << (DARICParser::COLON - 152))
      | (1ULL << (DARICParser::COMMENT - 152))
      | (1ULL << (DARICParser::PROC_NAME - 152))
      | (1ULL << (DARICParser::FN_INTEGER - 152))
      | (1ULL << (DARICParser::FN_FLOAT - 152))
      | (1ULL << (DARICParser::FN_STRING - 152))
      | (1ULL << (DARICParser::VARIABLE_FLOAT - 152))
      | (1ULL << (DARICParser::VARIABLE_INTEGER - 152))
      | (1ULL << (DARICParser::VARIABLE_STRING - 152))
      | (1ULL << (DARICParser::VARIABLE_TYPE - 152))
      | (1ULL << (DARICParser::NUMBER - 152)))) != 0));
    setState(411);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::ELSE) {
      setState(404);
      match(DARICParser::ELSE);
      setState(405);
      match(DARICParser::NEWLINE);
      setState(407); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(406);
        dynamic_cast<StmtIFMultilineContext *>(_localctx)->f = line();
        setState(409); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
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
        | (1ULL << DARICParser::MOUSE)
        | (1ULL << DARICParser::INKEY)
        | (1ULL << DARICParser::INKEYS)
        | (1ULL << DARICParser::GET)
        | (1ULL << DARICParser::GETS))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::BGETH - 64))
        | (1ULL << (DARICParser::BPUTH - 64))
        | (1ULL << (DARICParser::CLOSEH - 64))
        | (1ULL << (DARICParser::PTRH - 64))
        | (1ULL << (DARICParser::CIRCLE - 64))
        | (1ULL << (DARICParser::CLS - 64))
        | (1ULL << (DARICParser::CLIPON - 64))
        | (1ULL << (DARICParser::CLIPOFF - 64))
        | (1ULL << (DARICParser::COLOUR - 64))
        | (1ULL << (DARICParser::COLOURBG - 64))
        | (1ULL << (DARICParser::FLIP - 64))
        | (1ULL << (DARICParser::SHOWFPS - 64))
        | (1ULL << (DARICParser::GRAPHICS - 64))
        | (1ULL << (DARICParser::LINE - 64))
        | (1ULL << (DARICParser::RECTANGLE - 64))
        | (1ULL << (DARICParser::PLOT - 64))
        | (1ULL << (DARICParser::TEXT - 64))
        | (1ULL << (DARICParser::TEXTRIGHT - 64))
        | (1ULL << (DARICParser::TEXTCENTRE - 64))
        | (1ULL << (DARICParser::TEXTCENTER - 64))
        | (1ULL << (DARICParser::TRIANGLE - 64)))) != 0) || ((((_la - 152) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 152)) & ((1ULL << (DARICParser::NEWLINE - 152))
        | (1ULL << (DARICParser::COLON - 152))
        | (1ULL << (DARICParser::COMMENT - 152))
        | (1ULL << (DARICParser::PROC_NAME - 152))
        | (1ULL << (DARICParser::FN_INTEGER - 152))
        | (1ULL << (DARICParser::FN_FLOAT - 152))
        | (1ULL << (DARICParser::FN_STRING - 152))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 152))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 152))
        | (1ULL << (DARICParser::VARIABLE_STRING - 152))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 152))
        | (1ULL << (DARICParser::NUMBER - 152)))) != 0));
    }
    setState(413);
    match(DARICParser::ENDIF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtLETContext ------------------------------------------------------------------

DARICParser::StmtLETContext::StmtLETContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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

tree::TerminalNode* DARICParser::StmtLETContext::LOCAL() {
  return getToken(DARICParser::LOCAL, 0);
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


size_t DARICParser::StmtLETContext::getRuleIndex() const {
  return DARICParser::RuleStmtLET;
}


antlrcpp::Any DARICParser::StmtLETContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtLET(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtLETContext* DARICParser::stmtLET() {
  StmtLETContext *_localctx = _tracker.createInstance<StmtLETContext>(_ctx, getState());
  enterRule(_localctx, 42, DARICParser::RuleStmtLET);
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
    setState(419);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::GLOBAL:
      case DARICParser::LET:
      case DARICParser::VARIABLE_FLOAT:
      case DARICParser::VARIABLE_INTEGER:
      case DARICParser::VARIABLE_STRING:
      case DARICParser::VARIABLE_TYPE: {
        setState(416);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DARICParser::GLOBAL

        || _la == DARICParser::LET) {
          setState(415);
          _la = _input->LA(1);
          if (!(_la == DARICParser::GLOBAL

          || _la == DARICParser::LET)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
        }
        break;
      }

      case DARICParser::LOCAL: {
        setState(418);
        match(DARICParser::LOCAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(421);
    varDecl();
    setState(422);
    match(DARICParser::EQ);
    setState(423);
    expr();
    setState(431);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(424);
      match(DARICParser::COMMA);
      setState(425);
      varDecl();
      setState(426);
      match(DARICParser::EQ);
      setState(427);
      expr();
      setState(433);
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

//----------------- StmtOSCLIContext ------------------------------------------------------------------

DARICParser::StmtOSCLIContext::StmtOSCLIContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtOSCLIContext::OSCLI() {
  return getToken(DARICParser::OSCLI, 0);
}

DARICParser::StrExprContext* DARICParser::StmtOSCLIContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}


size_t DARICParser::StmtOSCLIContext::getRuleIndex() const {
  return DARICParser::RuleStmtOSCLI;
}


antlrcpp::Any DARICParser::StmtOSCLIContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtOSCLI(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtOSCLIContext* DARICParser::stmtOSCLI() {
  StmtOSCLIContext *_localctx = _tracker.createInstance<StmtOSCLIContext>(_ctx, getState());
  enterRule(_localctx, 44, DARICParser::RuleStmtOSCLI);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    match(DARICParser::OSCLI);
    setState(435);
    strExpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtCallPROCContext ------------------------------------------------------------------

DARICParser::StmtCallPROCContext::StmtCallPROCContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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


size_t DARICParser::StmtCallPROCContext::getRuleIndex() const {
  return DARICParser::RuleStmtCallPROC;
}


antlrcpp::Any DARICParser::StmtCallPROCContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCallPROC(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtCallPROCContext* DARICParser::stmtCallPROC() {
  StmtCallPROCContext *_localctx = _tracker.createInstance<StmtCallPROCContext>(_ctx, getState());
  enterRule(_localctx, 46, DARICParser::RuleStmtCallPROC);
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
    setState(437);
    match(DARICParser::PROC_NAME);
    setState(438);
    match(DARICParser::LPAREN);
    setState(440);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << DARICParser::FALSE)
      | (1ULL << DARICParser::FLOAT_TOKEN)
      | (1ULL << DARICParser::INT)
      | (1ULL << DARICParser::TRUE)
      | (1ULL << DARICParser::INKEY)
      | (1ULL << DARICParser::INKEYS)
      | (1ULL << DARICParser::GET)
      | (1ULL << DARICParser::RED)
      | (1ULL << DARICParser::GREEN)
      | (1ULL << DARICParser::YELLOW)
      | (1ULL << DARICParser::BLUE)
      | (1ULL << DARICParser::MAGENTA)
      | (1ULL << DARICParser::CYAN)
      | (1ULL << DARICParser::WHITE)
      | (1ULL << DARICParser::BLACK))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::BGETH - 64))
      | (1ULL << (DARICParser::EOFH - 64))
      | (1ULL << (DARICParser::OPENIN - 64))
      | (1ULL << (DARICParser::OPENOUT - 64))
      | (1ULL << (DARICParser::OPENUP - 64))
      | (1ULL << (DARICParser::PTRH - 64))
      | (1ULL << (DARICParser::POINT - 64))
      | (1ULL << (DARICParser::TIME - 64))
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
      | (1ULL << (DARICParser::RND1 - 64)))) != 0) || ((((_la - 133) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 133)) & ((1ULL << (DARICParser::NOT - 133))
      | (1ULL << (DARICParser::PLUS - 133))
      | (1ULL << (DARICParser::MINUS - 133))
      | (1ULL << (DARICParser::LPAREN - 133))
      | (1ULL << (DARICParser::STRINGLITERAL - 133))
      | (1ULL << (DARICParser::FN_INTEGER - 133))
      | (1ULL << (DARICParser::FN_FLOAT - 133))
      | (1ULL << (DARICParser::FN_STRING - 133))
      | (1ULL << (DARICParser::VARIABLE_FLOAT - 133))
      | (1ULL << (DARICParser::VARIABLE_INTEGER - 133))
      | (1ULL << (DARICParser::VARIABLE_STRING - 133))
      | (1ULL << (DARICParser::VARIABLE_TYPE - 133))
      | (1ULL << (DARICParser::HEXNUMBER - 133))
      | (1ULL << (DARICParser::BINARYNUMBER - 133))
      | (1ULL << (DARICParser::NUMBER - 133))
      | (1ULL << (DARICParser::FLOAT - 133)))) != 0)) {
      setState(439);
      functionParList();
    }
    setState(442);
    match(DARICParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtREADContext ------------------------------------------------------------------

DARICParser::StmtREADContext::StmtREADContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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


size_t DARICParser::StmtREADContext::getRuleIndex() const {
  return DARICParser::RuleStmtREAD;
}


antlrcpp::Any DARICParser::StmtREADContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtREAD(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtREADContext* DARICParser::stmtREAD() {
  StmtREADContext *_localctx = _tracker.createInstance<StmtREADContext>(_ctx, getState());
  enterRule(_localctx, 48, DARICParser::RuleStmtREAD);
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
    setState(444);
    match(DARICParser::READ);
    setState(445);
    varDecl();
    setState(450);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(446);
      match(DARICParser::COMMA);
      setState(447);
      varDecl();
      setState(452);
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

//----------------- StmtRESTOREContext ------------------------------------------------------------------

DARICParser::StmtRESTOREContext::StmtRESTOREContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtRESTOREContext::RESTORE() {
  return getToken(DARICParser::RESTORE, 0);
}


size_t DARICParser::StmtRESTOREContext::getRuleIndex() const {
  return DARICParser::RuleStmtRESTORE;
}


antlrcpp::Any DARICParser::StmtRESTOREContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtRESTORE(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtRESTOREContext* DARICParser::stmtRESTORE() {
  StmtRESTOREContext *_localctx = _tracker.createInstance<StmtRESTOREContext>(_ctx, getState());
  enterRule(_localctx, 50, DARICParser::RuleStmtRESTORE);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(453);
    match(DARICParser::RESTORE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtSWAPContext ------------------------------------------------------------------

DARICParser::StmtSWAPContext::StmtSWAPContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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


size_t DARICParser::StmtSWAPContext::getRuleIndex() const {
  return DARICParser::RuleStmtSWAP;
}


antlrcpp::Any DARICParser::StmtSWAPContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtSWAP(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtSWAPContext* DARICParser::stmtSWAP() {
  StmtSWAPContext *_localctx = _tracker.createInstance<StmtSWAPContext>(_ctx, getState());
  enterRule(_localctx, 52, DARICParser::RuleStmtSWAP);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(455);
    match(DARICParser::SWAP);
    setState(456);
    justVar();
    setState(457);
    match(DARICParser::COMMA);
    setState(458);
    justVar();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtTRACEONContext ------------------------------------------------------------------

DARICParser::StmtTRACEONContext::StmtTRACEONContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtTRACEONContext::TRACEON() {
  return getToken(DARICParser::TRACEON, 0);
}


size_t DARICParser::StmtTRACEONContext::getRuleIndex() const {
  return DARICParser::RuleStmtTRACEON;
}


antlrcpp::Any DARICParser::StmtTRACEONContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtTRACEON(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtTRACEONContext* DARICParser::stmtTRACEON() {
  StmtTRACEONContext *_localctx = _tracker.createInstance<StmtTRACEONContext>(_ctx, getState());
  enterRule(_localctx, 54, DARICParser::RuleStmtTRACEON);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(460);
    match(DARICParser::TRACEON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtTRACEOFFContext ------------------------------------------------------------------

DARICParser::StmtTRACEOFFContext::StmtTRACEOFFContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtTRACEOFFContext::TRACEOFF() {
  return getToken(DARICParser::TRACEOFF, 0);
}


size_t DARICParser::StmtTRACEOFFContext::getRuleIndex() const {
  return DARICParser::RuleStmtTRACEOFF;
}


antlrcpp::Any DARICParser::StmtTRACEOFFContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtTRACEOFF(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtTRACEOFFContext* DARICParser::stmtTRACEOFF() {
  StmtTRACEOFFContext *_localctx = _tracker.createInstance<StmtTRACEOFFContext>(_ctx, getState());
  enterRule(_localctx, 56, DARICParser::RuleStmtTRACEOFF);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(462);
    match(DARICParser::TRACEOFF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtTYPEContext ------------------------------------------------------------------

DARICParser::StmtTYPEContext::StmtTYPEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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


size_t DARICParser::StmtTYPEContext::getRuleIndex() const {
  return DARICParser::RuleStmtTYPE;
}


antlrcpp::Any DARICParser::StmtTYPEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtTYPE(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtTYPEContext* DARICParser::stmtTYPE() {
  StmtTYPEContext *_localctx = _tracker.createInstance<StmtTYPEContext>(_ctx, getState());
  enterRule(_localctx, 58, DARICParser::RuleStmtTYPE);
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
    setState(464);
    match(DARICParser::TYPE);
    setState(465);
    varName();
    setState(466);
    match(DARICParser::LPAREN);
    setState(467);
    justVar();
    setState(472);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(468);
      match(DARICParser::COMMA);
      setState(469);
      justVar();
      setState(474);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(475);
    match(DARICParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtREPEATContext ------------------------------------------------------------------

DARICParser::StmtREPEATContext::StmtREPEATContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtREPEATContext::REPEAT() {
  return getToken(DARICParser::REPEAT, 0);
}

DARICParser::BodyContext* DARICParser::StmtREPEATContext::body() {
  return getRuleContext<DARICParser::BodyContext>(0);
}

tree::TerminalNode* DARICParser::StmtREPEATContext::UNTIL() {
  return getToken(DARICParser::UNTIL, 0);
}

DARICParser::ExprContext* DARICParser::StmtREPEATContext::expr() {
  return getRuleContext<DARICParser::ExprContext>(0);
}


size_t DARICParser::StmtREPEATContext::getRuleIndex() const {
  return DARICParser::RuleStmtREPEAT;
}


antlrcpp::Any DARICParser::StmtREPEATContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtREPEAT(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtREPEATContext* DARICParser::stmtREPEAT() {
  StmtREPEATContext *_localctx = _tracker.createInstance<StmtREPEATContext>(_ctx, getState());
  enterRule(_localctx, 60, DARICParser::RuleStmtREPEAT);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(477);
    match(DARICParser::REPEAT);
    setState(478);
    body();
    setState(479);
    match(DARICParser::UNTIL);
    setState(480);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtWHILEContext ------------------------------------------------------------------

DARICParser::StmtWHILEContext::StmtWHILEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtWHILEContext::WHILE() {
  return getToken(DARICParser::WHILE, 0);
}

DARICParser::ExprContext* DARICParser::StmtWHILEContext::expr() {
  return getRuleContext<DARICParser::ExprContext>(0);
}

DARICParser::BodyContext* DARICParser::StmtWHILEContext::body() {
  return getRuleContext<DARICParser::BodyContext>(0);
}

tree::TerminalNode* DARICParser::StmtWHILEContext::ENDWHILE() {
  return getToken(DARICParser::ENDWHILE, 0);
}


size_t DARICParser::StmtWHILEContext::getRuleIndex() const {
  return DARICParser::RuleStmtWHILE;
}


antlrcpp::Any DARICParser::StmtWHILEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtWHILE(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtWHILEContext* DARICParser::stmtWHILE() {
  StmtWHILEContext *_localctx = _tracker.createInstance<StmtWHILEContext>(_ctx, getState());
  enterRule(_localctx, 62, DARICParser::RuleStmtWHILE);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(482);
    match(DARICParser::WHILE);
    setState(483);
    expr();
    setState(484);
    body();
    setState(485);
    match(DARICParser::ENDWHILE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeyMouseStmtContext ------------------------------------------------------------------

DARICParser::KeyMouseStmtContext::KeyMouseStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DARICParser::StmtINPUTContext* DARICParser::KeyMouseStmtContext::stmtINPUT() {
  return getRuleContext<DARICParser::StmtINPUTContext>(0);
}

DARICParser::StmtPRINTContext* DARICParser::KeyMouseStmtContext::stmtPRINT() {
  return getRuleContext<DARICParser::StmtPRINTContext>(0);
}

DARICParser::StmtMOUSEContext* DARICParser::KeyMouseStmtContext::stmtMOUSE() {
  return getRuleContext<DARICParser::StmtMOUSEContext>(0);
}

DARICParser::StmtINKEYContext* DARICParser::KeyMouseStmtContext::stmtINKEY() {
  return getRuleContext<DARICParser::StmtINKEYContext>(0);
}

DARICParser::StmtINKEYSContext* DARICParser::KeyMouseStmtContext::stmtINKEYS() {
  return getRuleContext<DARICParser::StmtINKEYSContext>(0);
}

DARICParser::StmtGETContext* DARICParser::KeyMouseStmtContext::stmtGET() {
  return getRuleContext<DARICParser::StmtGETContext>(0);
}

DARICParser::StmtGETSContext* DARICParser::KeyMouseStmtContext::stmtGETS() {
  return getRuleContext<DARICParser::StmtGETSContext>(0);
}


size_t DARICParser::KeyMouseStmtContext::getRuleIndex() const {
  return DARICParser::RuleKeyMouseStmt;
}


antlrcpp::Any DARICParser::KeyMouseStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitKeyMouseStmt(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::KeyMouseStmtContext* DARICParser::keyMouseStmt() {
  KeyMouseStmtContext *_localctx = _tracker.createInstance<KeyMouseStmtContext>(_ctx, getState());
  enterRule(_localctx, 64, DARICParser::RuleKeyMouseStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(494);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::INPUT: {
        enterOuterAlt(_localctx, 1);
        setState(487);
        stmtINPUT();
        break;
      }

      case DARICParser::PRINT: {
        enterOuterAlt(_localctx, 2);
        setState(488);
        stmtPRINT();
        break;
      }

      case DARICParser::MOUSE: {
        enterOuterAlt(_localctx, 3);
        setState(489);
        stmtMOUSE();
        break;
      }

      case DARICParser::INKEY: {
        enterOuterAlt(_localctx, 4);
        setState(490);
        stmtINKEY();
        break;
      }

      case DARICParser::INKEYS: {
        enterOuterAlt(_localctx, 5);
        setState(491);
        stmtINKEYS();
        break;
      }

      case DARICParser::GET: {
        enterOuterAlt(_localctx, 6);
        setState(492);
        stmtGET();
        break;
      }

      case DARICParser::GETS: {
        enterOuterAlt(_localctx, 7);
        setState(493);
        stmtGETS();
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

//----------------- StmtINPUTContext ------------------------------------------------------------------

DARICParser::StmtINPUTContext::StmtINPUTContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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


size_t DARICParser::StmtINPUTContext::getRuleIndex() const {
  return DARICParser::RuleStmtINPUT;
}


antlrcpp::Any DARICParser::StmtINPUTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtINPUT(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtINPUTContext* DARICParser::stmtINPUT() {
  StmtINPUTContext *_localctx = _tracker.createInstance<StmtINPUTContext>(_ctx, getState());
  enterRule(_localctx, 66, DARICParser::RuleStmtINPUT);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(496);
    match(DARICParser::INPUT);
    setState(500);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      setState(497);
      strExpr(0);
      setState(498);
      match(DARICParser::COMMA);
      break;
    }

    default:
      break;
    }
    setState(502);
    varList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtPRINTContext ------------------------------------------------------------------

DARICParser::StmtPRINTContext::StmtPRINTContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtPRINTContext::PRINT() {
  return getToken(DARICParser::PRINT, 0);
}

DARICParser::PrintListContext* DARICParser::StmtPRINTContext::printList() {
  return getRuleContext<DARICParser::PrintListContext>(0);
}


size_t DARICParser::StmtPRINTContext::getRuleIndex() const {
  return DARICParser::RuleStmtPRINT;
}


antlrcpp::Any DARICParser::StmtPRINTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtPRINT(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtPRINTContext* DARICParser::stmtPRINT() {
  StmtPRINTContext *_localctx = _tracker.createInstance<StmtPRINTContext>(_ctx, getState());
  enterRule(_localctx, 68, DARICParser::RuleStmtPRINT);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(504);
    match(DARICParser::PRINT);
    setState(506);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      setState(505);
      printList();
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

//----------------- StmtMOUSEContext ------------------------------------------------------------------

DARICParser::StmtMOUSEContext::StmtMOUSEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtMOUSEContext::MOUSE() {
  return getToken(DARICParser::MOUSE, 0);
}

std::vector<DARICParser::VarNameIntegerContext *> DARICParser::StmtMOUSEContext::varNameInteger() {
  return getRuleContexts<DARICParser::VarNameIntegerContext>();
}

DARICParser::VarNameIntegerContext* DARICParser::StmtMOUSEContext::varNameInteger(size_t i) {
  return getRuleContext<DARICParser::VarNameIntegerContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtMOUSEContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtMOUSEContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}


size_t DARICParser::StmtMOUSEContext::getRuleIndex() const {
  return DARICParser::RuleStmtMOUSE;
}


antlrcpp::Any DARICParser::StmtMOUSEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtMOUSE(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtMOUSEContext* DARICParser::stmtMOUSE() {
  StmtMOUSEContext *_localctx = _tracker.createInstance<StmtMOUSEContext>(_ctx, getState());
  enterRule(_localctx, 70, DARICParser::RuleStmtMOUSE);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(508);
    match(DARICParser::MOUSE);
    setState(509);
    varNameInteger();
    setState(510);
    match(DARICParser::COMMA);
    setState(511);
    varNameInteger();
    setState(512);
    match(DARICParser::COMMA);
    setState(513);
    varNameInteger();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtINKEYContext ------------------------------------------------------------------

DARICParser::StmtINKEYContext::StmtINKEYContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtINKEYContext::INKEY() {
  return getToken(DARICParser::INKEY, 0);
}

DARICParser::NumExprContext* DARICParser::StmtINKEYContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}


size_t DARICParser::StmtINKEYContext::getRuleIndex() const {
  return DARICParser::RuleStmtINKEY;
}


antlrcpp::Any DARICParser::StmtINKEYContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtINKEY(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtINKEYContext* DARICParser::stmtINKEY() {
  StmtINKEYContext *_localctx = _tracker.createInstance<StmtINKEYContext>(_ctx, getState());
  enterRule(_localctx, 72, DARICParser::RuleStmtINKEY);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(515);
    match(DARICParser::INKEY);
    setState(516);
    numExpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtINKEYSContext ------------------------------------------------------------------

DARICParser::StmtINKEYSContext::StmtINKEYSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtINKEYSContext::INKEYS() {
  return getToken(DARICParser::INKEYS, 0);
}

DARICParser::NumExprContext* DARICParser::StmtINKEYSContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}


size_t DARICParser::StmtINKEYSContext::getRuleIndex() const {
  return DARICParser::RuleStmtINKEYS;
}


antlrcpp::Any DARICParser::StmtINKEYSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtINKEYS(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtINKEYSContext* DARICParser::stmtINKEYS() {
  StmtINKEYSContext *_localctx = _tracker.createInstance<StmtINKEYSContext>(_ctx, getState());
  enterRule(_localctx, 74, DARICParser::RuleStmtINKEYS);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(518);
    match(DARICParser::INKEYS);
    setState(519);
    numExpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtGETContext ------------------------------------------------------------------

DARICParser::StmtGETContext::StmtGETContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtGETContext::GET() {
  return getToken(DARICParser::GET, 0);
}


size_t DARICParser::StmtGETContext::getRuleIndex() const {
  return DARICParser::RuleStmtGET;
}


antlrcpp::Any DARICParser::StmtGETContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtGET(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtGETContext* DARICParser::stmtGET() {
  StmtGETContext *_localctx = _tracker.createInstance<StmtGETContext>(_ctx, getState());
  enterRule(_localctx, 76, DARICParser::RuleStmtGET);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(521);
    match(DARICParser::GET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtGETSContext ------------------------------------------------------------------

DARICParser::StmtGETSContext::StmtGETSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtGETSContext::GETS() {
  return getToken(DARICParser::GETS, 0);
}


size_t DARICParser::StmtGETSContext::getRuleIndex() const {
  return DARICParser::RuleStmtGETS;
}


antlrcpp::Any DARICParser::StmtGETSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtGETS(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtGETSContext* DARICParser::stmtGETS() {
  StmtGETSContext *_localctx = _tracker.createInstance<StmtGETSContext>(_ctx, getState());
  enterRule(_localctx, 78, DARICParser::RuleStmtGETS);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(523);
    match(DARICParser::GETS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtOperatorEqualContext ------------------------------------------------------------------

DARICParser::StmtOperatorEqualContext::StmtOperatorEqualContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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


size_t DARICParser::StmtOperatorEqualContext::getRuleIndex() const {
  return DARICParser::RuleStmtOperatorEqual;
}


antlrcpp::Any DARICParser::StmtOperatorEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtOperatorEqual(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtOperatorEqualContext* DARICParser::stmtOperatorEqual() {
  StmtOperatorEqualContext *_localctx = _tracker.createInstance<StmtOperatorEqualContext>(_ctx, getState());
  enterRule(_localctx, 80, DARICParser::RuleStmtOperatorEqual);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(549);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(525);
      varDecl();
      setState(526);
      match(DARICParser::MULTIPLY_E);
      setState(527);
      numExpr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(529);
      varDecl();
      setState(530);
      match(DARICParser::DIVIDE_E);
      setState(531);
      numExpr(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(533);
      varDecl();
      setState(534);
      match(DARICParser::PLUS_E);
      setState(535);
      numExpr(0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(537);
      varDecl();
      setState(538);
      match(DARICParser::MINUS_E);
      setState(539);
      numExpr(0);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(541);
      varDecl();
      setState(542);
      match(DARICParser::SHL_E);
      setState(543);
      numExpr(0);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(545);
      varDecl();
      setState(546);
      match(DARICParser::SHR_E);
      setState(547);
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

//----------------- IoStmtContext ------------------------------------------------------------------

DARICParser::IoStmtContext::IoStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DARICParser::StmtBPUTHContext* DARICParser::IoStmtContext::stmtBPUTH() {
  return getRuleContext<DARICParser::StmtBPUTHContext>(0);
}

DARICParser::StmtBGETHContext* DARICParser::IoStmtContext::stmtBGETH() {
  return getRuleContext<DARICParser::StmtBGETHContext>(0);
}

DARICParser::StmtPTRHContext* DARICParser::IoStmtContext::stmtPTRH() {
  return getRuleContext<DARICParser::StmtPTRHContext>(0);
}

DARICParser::StmtCLOSEHContext* DARICParser::IoStmtContext::stmtCLOSEH() {
  return getRuleContext<DARICParser::StmtCLOSEHContext>(0);
}

DARICParser::StmtLISTFILESContext* DARICParser::IoStmtContext::stmtLISTFILES() {
  return getRuleContext<DARICParser::StmtLISTFILESContext>(0);
}


size_t DARICParser::IoStmtContext::getRuleIndex() const {
  return DARICParser::RuleIoStmt;
}


antlrcpp::Any DARICParser::IoStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitIoStmt(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::IoStmtContext* DARICParser::ioStmt() {
  IoStmtContext *_localctx = _tracker.createInstance<IoStmtContext>(_ctx, getState());
  enterRule(_localctx, 82, DARICParser::RuleIoStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(556);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::BPUTH: {
        enterOuterAlt(_localctx, 1);
        setState(551);
        stmtBPUTH();
        break;
      }

      case DARICParser::BGETH: {
        enterOuterAlt(_localctx, 2);
        setState(552);
        stmtBGETH();
        break;
      }

      case DARICParser::PTRH: {
        enterOuterAlt(_localctx, 3);
        setState(553);
        stmtPTRH();
        break;
      }

      case DARICParser::CLOSEH: {
        enterOuterAlt(_localctx, 4);
        setState(554);
        stmtCLOSEH();
        break;
      }

      case DARICParser::LOCAL:
      case DARICParser::VARIABLE_STRING: {
        enterOuterAlt(_localctx, 5);
        setState(555);
        stmtLISTFILES();
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

//----------------- StmtBPUTHContext ------------------------------------------------------------------

DARICParser::StmtBPUTHContext::StmtBPUTHContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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


size_t DARICParser::StmtBPUTHContext::getRuleIndex() const {
  return DARICParser::RuleStmtBPUTH;
}


antlrcpp::Any DARICParser::StmtBPUTHContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtBPUTH(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtBPUTHContext* DARICParser::stmtBPUTH() {
  StmtBPUTHContext *_localctx = _tracker.createInstance<StmtBPUTHContext>(_ctx, getState());
  enterRule(_localctx, 84, DARICParser::RuleStmtBPUTH);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(558);
    match(DARICParser::BPUTH);
    setState(559);
    numExpr(0);
    setState(560);
    match(DARICParser::COMMA);
    setState(561);
    numExpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtBGETHContext ------------------------------------------------------------------

DARICParser::StmtBGETHContext::StmtBGETHContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtBGETHContext::BGETH() {
  return getToken(DARICParser::BGETH, 0);
}

DARICParser::NumExprContext* DARICParser::StmtBGETHContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}


size_t DARICParser::StmtBGETHContext::getRuleIndex() const {
  return DARICParser::RuleStmtBGETH;
}


antlrcpp::Any DARICParser::StmtBGETHContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtBGETH(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtBGETHContext* DARICParser::stmtBGETH() {
  StmtBGETHContext *_localctx = _tracker.createInstance<StmtBGETHContext>(_ctx, getState());
  enterRule(_localctx, 86, DARICParser::RuleStmtBGETH);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(563);
    match(DARICParser::BGETH);
    setState(564);
    numExpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtPTRHContext ------------------------------------------------------------------

DARICParser::StmtPTRHContext::StmtPTRHContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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


size_t DARICParser::StmtPTRHContext::getRuleIndex() const {
  return DARICParser::RuleStmtPTRH;
}


antlrcpp::Any DARICParser::StmtPTRHContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtPTRH(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtPTRHContext* DARICParser::stmtPTRH() {
  StmtPTRHContext *_localctx = _tracker.createInstance<StmtPTRHContext>(_ctx, getState());
  enterRule(_localctx, 88, DARICParser::RuleStmtPTRH);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(566);
    match(DARICParser::PTRH);
    setState(567);
    numExpr(0);
    setState(568);
    match(DARICParser::EQ);
    setState(569);
    numExpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtCLOSEHContext ------------------------------------------------------------------

DARICParser::StmtCLOSEHContext::StmtCLOSEHContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtCLOSEHContext::CLOSEH() {
  return getToken(DARICParser::CLOSEH, 0);
}

DARICParser::NumExprContext* DARICParser::StmtCLOSEHContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}


size_t DARICParser::StmtCLOSEHContext::getRuleIndex() const {
  return DARICParser::RuleStmtCLOSEH;
}


antlrcpp::Any DARICParser::StmtCLOSEHContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCLOSEH(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtCLOSEHContext* DARICParser::stmtCLOSEH() {
  StmtCLOSEHContext *_localctx = _tracker.createInstance<StmtCLOSEHContext>(_ctx, getState());
  enterRule(_localctx, 90, DARICParser::RuleStmtCLOSEH);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(571);
    match(DARICParser::CLOSEH);
    setState(572);
    numExpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtLISTFILESContext ------------------------------------------------------------------

DARICParser::StmtLISTFILESContext::StmtLISTFILESContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

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


size_t DARICParser::StmtLISTFILESContext::getRuleIndex() const {
  return DARICParser::RuleStmtLISTFILES;
}


antlrcpp::Any DARICParser::StmtLISTFILESContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtLISTFILES(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtLISTFILESContext* DARICParser::stmtLISTFILES() {
  StmtLISTFILESContext *_localctx = _tracker.createInstance<StmtLISTFILESContext>(_ctx, getState());
  enterRule(_localctx, 92, DARICParser::RuleStmtLISTFILES);
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
    setState(575);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::LOCAL) {
      setState(574);
      match(DARICParser::LOCAL);
    }
    setState(577);
    varNameString();
    setState(578);
    match(DARICParser::LPAREN);
    setState(579);
    match(DARICParser::RPAREN);
    setState(580);
    match(DARICParser::EQ);
    setState(581);
    match(DARICParser::LISTFILES);
    setState(582);
    match(DARICParser::LPAREN);
    setState(583);
    strExpr(0);
    setState(584);
    match(DARICParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GraphicsStmtContext ------------------------------------------------------------------

DARICParser::GraphicsStmtContext::GraphicsStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DARICParser::StmtCLSContext* DARICParser::GraphicsStmtContext::stmtCLS() {
  return getRuleContext<DARICParser::StmtCLSContext>(0);
}

DARICParser::StmtCOLOURContext* DARICParser::GraphicsStmtContext::stmtCOLOUR() {
  return getRuleContext<DARICParser::StmtCOLOURContext>(0);
}

DARICParser::StmtCOLOURBGContext* DARICParser::GraphicsStmtContext::stmtCOLOURBG() {
  return getRuleContext<DARICParser::StmtCOLOURBGContext>(0);
}

DARICParser::StmtGRAPHICSContext* DARICParser::GraphicsStmtContext::stmtGRAPHICS() {
  return getRuleContext<DARICParser::StmtGRAPHICSContext>(0);
}

DARICParser::StmtFLIPContext* DARICParser::GraphicsStmtContext::stmtFLIP() {
  return getRuleContext<DARICParser::StmtFLIPContext>(0);
}

DARICParser::StmtCIRCLEContext* DARICParser::GraphicsStmtContext::stmtCIRCLE() {
  return getRuleContext<DARICParser::StmtCIRCLEContext>(0);
}

DARICParser::StmtLINEContext* DARICParser::GraphicsStmtContext::stmtLINE() {
  return getRuleContext<DARICParser::StmtLINEContext>(0);
}

DARICParser::StmtRECTANGLEContext* DARICParser::GraphicsStmtContext::stmtRECTANGLE() {
  return getRuleContext<DARICParser::StmtRECTANGLEContext>(0);
}

DARICParser::StmtTRIANGLEContext* DARICParser::GraphicsStmtContext::stmtTRIANGLE() {
  return getRuleContext<DARICParser::StmtTRIANGLEContext>(0);
}

DARICParser::StmtPLOTContext* DARICParser::GraphicsStmtContext::stmtPLOT() {
  return getRuleContext<DARICParser::StmtPLOTContext>(0);
}

DARICParser::StmtCLIPONContext* DARICParser::GraphicsStmtContext::stmtCLIPON() {
  return getRuleContext<DARICParser::StmtCLIPONContext>(0);
}

DARICParser::StmtCLIPOFFContext* DARICParser::GraphicsStmtContext::stmtCLIPOFF() {
  return getRuleContext<DARICParser::StmtCLIPOFFContext>(0);
}

DARICParser::StmtTEXTContext* DARICParser::GraphicsStmtContext::stmtTEXT() {
  return getRuleContext<DARICParser::StmtTEXTContext>(0);
}

DARICParser::StmtTEXTRIGHTContext* DARICParser::GraphicsStmtContext::stmtTEXTRIGHT() {
  return getRuleContext<DARICParser::StmtTEXTRIGHTContext>(0);
}

DARICParser::StmtTEXTCENTREContext* DARICParser::GraphicsStmtContext::stmtTEXTCENTRE() {
  return getRuleContext<DARICParser::StmtTEXTCENTREContext>(0);
}

DARICParser::StmtSHOWFPSContext* DARICParser::GraphicsStmtContext::stmtSHOWFPS() {
  return getRuleContext<DARICParser::StmtSHOWFPSContext>(0);
}


size_t DARICParser::GraphicsStmtContext::getRuleIndex() const {
  return DARICParser::RuleGraphicsStmt;
}


antlrcpp::Any DARICParser::GraphicsStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitGraphicsStmt(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::GraphicsStmtContext* DARICParser::graphicsStmt() {
  GraphicsStmtContext *_localctx = _tracker.createInstance<GraphicsStmtContext>(_ctx, getState());
  enterRule(_localctx, 94, DARICParser::RuleGraphicsStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(602);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::CLS: {
        enterOuterAlt(_localctx, 1);
        setState(586);
        stmtCLS();
        break;
      }

      case DARICParser::COLOUR: {
        enterOuterAlt(_localctx, 2);
        setState(587);
        stmtCOLOUR();
        break;
      }

      case DARICParser::COLOURBG: {
        enterOuterAlt(_localctx, 3);
        setState(588);
        stmtCOLOURBG();
        break;
      }

      case DARICParser::GRAPHICS: {
        enterOuterAlt(_localctx, 4);
        setState(589);
        stmtGRAPHICS();
        break;
      }

      case DARICParser::FLIP: {
        enterOuterAlt(_localctx, 5);
        setState(590);
        stmtFLIP();
        break;
      }

      case DARICParser::CIRCLE: {
        enterOuterAlt(_localctx, 6);
        setState(591);
        stmtCIRCLE();
        break;
      }

      case DARICParser::LINE: {
        enterOuterAlt(_localctx, 7);
        setState(592);
        stmtLINE();
        break;
      }

      case DARICParser::RECTANGLE: {
        enterOuterAlt(_localctx, 8);
        setState(593);
        stmtRECTANGLE();
        break;
      }

      case DARICParser::TRIANGLE: {
        enterOuterAlt(_localctx, 9);
        setState(594);
        stmtTRIANGLE();
        break;
      }

      case DARICParser::PLOT: {
        enterOuterAlt(_localctx, 10);
        setState(595);
        stmtPLOT();
        break;
      }

      case DARICParser::CLIPON: {
        enterOuterAlt(_localctx, 11);
        setState(596);
        stmtCLIPON();
        break;
      }

      case DARICParser::CLIPOFF: {
        enterOuterAlt(_localctx, 12);
        setState(597);
        stmtCLIPOFF();
        break;
      }

      case DARICParser::TEXT: {
        enterOuterAlt(_localctx, 13);
        setState(598);
        stmtTEXT();
        break;
      }

      case DARICParser::TEXTRIGHT: {
        enterOuterAlt(_localctx, 14);
        setState(599);
        stmtTEXTRIGHT();
        break;
      }

      case DARICParser::TEXTCENTRE:
      case DARICParser::TEXTCENTER: {
        enterOuterAlt(_localctx, 15);
        setState(600);
        stmtTEXTCENTRE();
        break;
      }

      case DARICParser::SHOWFPS: {
        enterOuterAlt(_localctx, 16);
        setState(601);
        stmtSHOWFPS();
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

//----------------- StmtCLSContext ------------------------------------------------------------------

DARICParser::StmtCLSContext::StmtCLSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtCLSContext::CLS() {
  return getToken(DARICParser::CLS, 0);
}


size_t DARICParser::StmtCLSContext::getRuleIndex() const {
  return DARICParser::RuleStmtCLS;
}


antlrcpp::Any DARICParser::StmtCLSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCLS(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtCLSContext* DARICParser::stmtCLS() {
  StmtCLSContext *_localctx = _tracker.createInstance<StmtCLSContext>(_ctx, getState());
  enterRule(_localctx, 96, DARICParser::RuleStmtCLS);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(604);
    match(DARICParser::CLS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtCOLOURContext ------------------------------------------------------------------

DARICParser::StmtCOLOURContext::StmtCOLOURContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtCOLOURContext::COLOUR() {
  return getToken(DARICParser::COLOUR, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StmtCOLOURContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StmtCOLOURContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtCOLOURContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtCOLOURContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}


size_t DARICParser::StmtCOLOURContext::getRuleIndex() const {
  return DARICParser::RuleStmtCOLOUR;
}


antlrcpp::Any DARICParser::StmtCOLOURContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCOLOUR(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtCOLOURContext* DARICParser::stmtCOLOUR() {
  StmtCOLOURContext *_localctx = _tracker.createInstance<StmtCOLOURContext>(_ctx, getState());
  enterRule(_localctx, 98, DARICParser::RuleStmtCOLOUR);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(615);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(606);
      match(DARICParser::COLOUR);
      setState(607);
      numExpr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(608);
      match(DARICParser::COLOUR);
      setState(609);
      numExpr(0);
      setState(610);
      match(DARICParser::COMMA);
      setState(611);
      numExpr(0);
      setState(612);
      match(DARICParser::COMMA);
      setState(613);
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

//----------------- StmtCOLOURBGContext ------------------------------------------------------------------

DARICParser::StmtCOLOURBGContext::StmtCOLOURBGContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtCOLOURBGContext::COLOURBG() {
  return getToken(DARICParser::COLOURBG, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StmtCOLOURBGContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StmtCOLOURBGContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtCOLOURBGContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtCOLOURBGContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}


size_t DARICParser::StmtCOLOURBGContext::getRuleIndex() const {
  return DARICParser::RuleStmtCOLOURBG;
}


antlrcpp::Any DARICParser::StmtCOLOURBGContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCOLOURBG(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtCOLOURBGContext* DARICParser::stmtCOLOURBG() {
  StmtCOLOURBGContext *_localctx = _tracker.createInstance<StmtCOLOURBGContext>(_ctx, getState());
  enterRule(_localctx, 100, DARICParser::RuleStmtCOLOURBG);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(626);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(617);
      match(DARICParser::COLOURBG);
      setState(618);
      numExpr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(619);
      match(DARICParser::COLOURBG);
      setState(620);
      numExpr(0);
      setState(621);
      match(DARICParser::COMMA);
      setState(622);
      numExpr(0);
      setState(623);
      match(DARICParser::COMMA);
      setState(624);
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

//----------------- StmtGRAPHICSContext ------------------------------------------------------------------

DARICParser::StmtGRAPHICSContext::StmtGRAPHICSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtGRAPHICSContext::GRAPHICS() {
  return getToken(DARICParser::GRAPHICS, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StmtGRAPHICSContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StmtGRAPHICSContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::StmtGRAPHICSContext::COMMA() {
  return getToken(DARICParser::COMMA, 0);
}

tree::TerminalNode* DARICParser::StmtGRAPHICSContext::BANKED() {
  return getToken(DARICParser::BANKED, 0);
}


size_t DARICParser::StmtGRAPHICSContext::getRuleIndex() const {
  return DARICParser::RuleStmtGRAPHICS;
}


antlrcpp::Any DARICParser::StmtGRAPHICSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtGRAPHICS(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtGRAPHICSContext* DARICParser::stmtGRAPHICS() {
  StmtGRAPHICSContext *_localctx = _tracker.createInstance<StmtGRAPHICSContext>(_ctx, getState());
  enterRule(_localctx, 102, DARICParser::RuleStmtGRAPHICS);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(642);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(628);
      match(DARICParser::GRAPHICS);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(629);
      match(DARICParser::GRAPHICS);
      setState(630);
      numExpr(0);
      setState(631);
      match(DARICParser::COMMA);
      setState(632);
      numExpr(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(634);
      match(DARICParser::GRAPHICS);
      setState(635);
      match(DARICParser::BANKED);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(636);
      match(DARICParser::GRAPHICS);
      setState(637);
      match(DARICParser::BANKED);
      setState(638);
      numExpr(0);
      setState(639);
      match(DARICParser::COMMA);
      setState(640);
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

//----------------- StmtFLIPContext ------------------------------------------------------------------

DARICParser::StmtFLIPContext::StmtFLIPContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtFLIPContext::FLIP() {
  return getToken(DARICParser::FLIP, 0);
}


size_t DARICParser::StmtFLIPContext::getRuleIndex() const {
  return DARICParser::RuleStmtFLIP;
}


antlrcpp::Any DARICParser::StmtFLIPContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtFLIP(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtFLIPContext* DARICParser::stmtFLIP() {
  StmtFLIPContext *_localctx = _tracker.createInstance<StmtFLIPContext>(_ctx, getState());
  enterRule(_localctx, 104, DARICParser::RuleStmtFLIP);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(644);
    match(DARICParser::FLIP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtCIRCLEContext ------------------------------------------------------------------

DARICParser::StmtCIRCLEContext::StmtCIRCLEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtCIRCLEContext::CIRCLE() {
  return getToken(DARICParser::CIRCLE, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StmtCIRCLEContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StmtCIRCLEContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtCIRCLEContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtCIRCLEContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

tree::TerminalNode* DARICParser::StmtCIRCLEContext::FILL() {
  return getToken(DARICParser::FILL, 0);
}


size_t DARICParser::StmtCIRCLEContext::getRuleIndex() const {
  return DARICParser::RuleStmtCIRCLE;
}


antlrcpp::Any DARICParser::StmtCIRCLEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCIRCLE(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtCIRCLEContext* DARICParser::stmtCIRCLE() {
  StmtCIRCLEContext *_localctx = _tracker.createInstance<StmtCIRCLEContext>(_ctx, getState());
  enterRule(_localctx, 106, DARICParser::RuleStmtCIRCLE);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(661);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(646);
      match(DARICParser::CIRCLE);
      setState(647);
      numExpr(0);
      setState(648);
      match(DARICParser::COMMA);
      setState(649);
      numExpr(0);
      setState(650);
      match(DARICParser::COMMA);
      setState(651);
      numExpr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(653);
      match(DARICParser::CIRCLE);
      setState(654);
      match(DARICParser::FILL);
      setState(655);
      numExpr(0);
      setState(656);
      match(DARICParser::COMMA);
      setState(657);
      numExpr(0);
      setState(658);
      match(DARICParser::COMMA);
      setState(659);
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

//----------------- StmtLINEContext ------------------------------------------------------------------

DARICParser::StmtLINEContext::StmtLINEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtLINEContext::LINE() {
  return getToken(DARICParser::LINE, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StmtLINEContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StmtLINEContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtLINEContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtLINEContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}


size_t DARICParser::StmtLINEContext::getRuleIndex() const {
  return DARICParser::RuleStmtLINE;
}


antlrcpp::Any DARICParser::StmtLINEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtLINE(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtLINEContext* DARICParser::stmtLINE() {
  StmtLINEContext *_localctx = _tracker.createInstance<StmtLINEContext>(_ctx, getState());
  enterRule(_localctx, 108, DARICParser::RuleStmtLINE);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(663);
    match(DARICParser::LINE);
    setState(664);
    numExpr(0);
    setState(665);
    match(DARICParser::COMMA);
    setState(666);
    numExpr(0);
    setState(667);
    match(DARICParser::COMMA);
    setState(668);
    numExpr(0);
    setState(669);
    match(DARICParser::COMMA);
    setState(670);
    numExpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtRECTANGLEContext ------------------------------------------------------------------

DARICParser::StmtRECTANGLEContext::StmtRECTANGLEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtRECTANGLEContext::RECTANGLE() {
  return getToken(DARICParser::RECTANGLE, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StmtRECTANGLEContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StmtRECTANGLEContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtRECTANGLEContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtRECTANGLEContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

tree::TerminalNode* DARICParser::StmtRECTANGLEContext::FILL() {
  return getToken(DARICParser::FILL, 0);
}


size_t DARICParser::StmtRECTANGLEContext::getRuleIndex() const {
  return DARICParser::RuleStmtRECTANGLE;
}


antlrcpp::Any DARICParser::StmtRECTANGLEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtRECTANGLE(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtRECTANGLEContext* DARICParser::stmtRECTANGLE() {
  StmtRECTANGLEContext *_localctx = _tracker.createInstance<StmtRECTANGLEContext>(_ctx, getState());
  enterRule(_localctx, 110, DARICParser::RuleStmtRECTANGLE);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(691);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(672);
      match(DARICParser::RECTANGLE);
      setState(673);
      numExpr(0);
      setState(674);
      match(DARICParser::COMMA);
      setState(675);
      numExpr(0);
      setState(676);
      match(DARICParser::COMMA);
      setState(677);
      numExpr(0);
      setState(678);
      match(DARICParser::COMMA);
      setState(679);
      numExpr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(681);
      match(DARICParser::RECTANGLE);
      setState(682);
      match(DARICParser::FILL);
      setState(683);
      numExpr(0);
      setState(684);
      match(DARICParser::COMMA);
      setState(685);
      numExpr(0);
      setState(686);
      match(DARICParser::COMMA);
      setState(687);
      numExpr(0);
      setState(688);
      match(DARICParser::COMMA);
      setState(689);
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

//----------------- StmtTRIANGLEContext ------------------------------------------------------------------

DARICParser::StmtTRIANGLEContext::StmtTRIANGLEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtTRIANGLEContext::TRIANGLE() {
  return getToken(DARICParser::TRIANGLE, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StmtTRIANGLEContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StmtTRIANGLEContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtTRIANGLEContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtTRIANGLEContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

tree::TerminalNode* DARICParser::StmtTRIANGLEContext::FILL() {
  return getToken(DARICParser::FILL, 0);
}

tree::TerminalNode* DARICParser::StmtTRIANGLEContext::SHADED() {
  return getToken(DARICParser::SHADED, 0);
}


size_t DARICParser::StmtTRIANGLEContext::getRuleIndex() const {
  return DARICParser::RuleStmtTRIANGLE;
}


antlrcpp::Any DARICParser::StmtTRIANGLEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtTRIANGLE(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtTRIANGLEContext* DARICParser::stmtTRIANGLE() {
  StmtTRIANGLEContext *_localctx = _tracker.createInstance<StmtTRIANGLEContext>(_ctx, getState());
  enterRule(_localctx, 112, DARICParser::RuleStmtTRIANGLE);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(740);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(693);
      match(DARICParser::TRIANGLE);
      setState(694);
      numExpr(0);
      setState(695);
      match(DARICParser::COMMA);
      setState(696);
      numExpr(0);
      setState(697);
      match(DARICParser::COMMA);
      setState(698);
      numExpr(0);
      setState(699);
      match(DARICParser::COMMA);
      setState(700);
      numExpr(0);
      setState(701);
      match(DARICParser::COMMA);
      setState(702);
      numExpr(0);
      setState(703);
      match(DARICParser::COMMA);
      setState(704);
      numExpr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(706);
      match(DARICParser::TRIANGLE);
      setState(707);
      match(DARICParser::FILL);
      setState(708);
      numExpr(0);
      setState(709);
      match(DARICParser::COMMA);
      setState(710);
      numExpr(0);
      setState(711);
      match(DARICParser::COMMA);
      setState(712);
      numExpr(0);
      setState(713);
      match(DARICParser::COMMA);
      setState(714);
      numExpr(0);
      setState(715);
      match(DARICParser::COMMA);
      setState(716);
      numExpr(0);
      setState(717);
      match(DARICParser::COMMA);
      setState(718);
      numExpr(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(720);
      match(DARICParser::TRIANGLE);
      setState(721);
      match(DARICParser::SHADED);
      setState(722);
      numExpr(0);
      setState(723);
      match(DARICParser::COMMA);
      setState(724);
      numExpr(0);
      setState(725);
      match(DARICParser::COMMA);
      setState(726);
      numExpr(0);
      setState(727);
      match(DARICParser::COMMA);
      setState(728);
      numExpr(0);
      setState(729);
      match(DARICParser::COMMA);
      setState(730);
      numExpr(0);
      setState(731);
      match(DARICParser::COMMA);
      setState(732);
      numExpr(0);
      setState(733);
      match(DARICParser::COMMA);
      setState(734);
      numExpr(0);
      setState(735);
      match(DARICParser::COMMA);
      setState(736);
      numExpr(0);
      setState(737);
      match(DARICParser::COMMA);
      setState(738);
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

//----------------- StmtPLOTContext ------------------------------------------------------------------

DARICParser::StmtPLOTContext::StmtPLOTContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtPLOTContext::PLOT() {
  return getToken(DARICParser::PLOT, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StmtPLOTContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StmtPLOTContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::StmtPLOTContext::COMMA() {
  return getToken(DARICParser::COMMA, 0);
}


size_t DARICParser::StmtPLOTContext::getRuleIndex() const {
  return DARICParser::RuleStmtPLOT;
}


antlrcpp::Any DARICParser::StmtPLOTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtPLOT(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtPLOTContext* DARICParser::stmtPLOT() {
  StmtPLOTContext *_localctx = _tracker.createInstance<StmtPLOTContext>(_ctx, getState());
  enterRule(_localctx, 114, DARICParser::RuleStmtPLOT);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(742);
    match(DARICParser::PLOT);
    setState(743);
    numExpr(0);
    setState(744);
    match(DARICParser::COMMA);
    setState(745);
    numExpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtCLIPONContext ------------------------------------------------------------------

DARICParser::StmtCLIPONContext::StmtCLIPONContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtCLIPONContext::CLIPON() {
  return getToken(DARICParser::CLIPON, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StmtCLIPONContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StmtCLIPONContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtCLIPONContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtCLIPONContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}


size_t DARICParser::StmtCLIPONContext::getRuleIndex() const {
  return DARICParser::RuleStmtCLIPON;
}


antlrcpp::Any DARICParser::StmtCLIPONContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCLIPON(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtCLIPONContext* DARICParser::stmtCLIPON() {
  StmtCLIPONContext *_localctx = _tracker.createInstance<StmtCLIPONContext>(_ctx, getState());
  enterRule(_localctx, 116, DARICParser::RuleStmtCLIPON);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(747);
    match(DARICParser::CLIPON);
    setState(748);
    numExpr(0);
    setState(749);
    match(DARICParser::COMMA);
    setState(750);
    numExpr(0);
    setState(751);
    match(DARICParser::COMMA);
    setState(752);
    numExpr(0);
    setState(753);
    match(DARICParser::COMMA);
    setState(754);
    numExpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtCLIPOFFContext ------------------------------------------------------------------

DARICParser::StmtCLIPOFFContext::StmtCLIPOFFContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtCLIPOFFContext::CLIPOFF() {
  return getToken(DARICParser::CLIPOFF, 0);
}


size_t DARICParser::StmtCLIPOFFContext::getRuleIndex() const {
  return DARICParser::RuleStmtCLIPOFF;
}


antlrcpp::Any DARICParser::StmtCLIPOFFContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCLIPOFF(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtCLIPOFFContext* DARICParser::stmtCLIPOFF() {
  StmtCLIPOFFContext *_localctx = _tracker.createInstance<StmtCLIPOFFContext>(_ctx, getState());
  enterRule(_localctx, 118, DARICParser::RuleStmtCLIPOFF);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(756);
    match(DARICParser::CLIPOFF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtTEXTContext ------------------------------------------------------------------

DARICParser::StmtTEXTContext::StmtTEXTContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtTEXTContext::TEXT() {
  return getToken(DARICParser::TEXT, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StmtTEXTContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StmtTEXTContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtTEXTContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtTEXTContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}


size_t DARICParser::StmtTEXTContext::getRuleIndex() const {
  return DARICParser::RuleStmtTEXT;
}


antlrcpp::Any DARICParser::StmtTEXTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtTEXT(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtTEXTContext* DARICParser::stmtTEXT() {
  StmtTEXTContext *_localctx = _tracker.createInstance<StmtTEXTContext>(_ctx, getState());
  enterRule(_localctx, 120, DARICParser::RuleStmtTEXT);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(758);
    match(DARICParser::TEXT);
    setState(759);
    numExpr(0);
    setState(760);
    match(DARICParser::COMMA);
    setState(761);
    numExpr(0);
    setState(762);
    match(DARICParser::COMMA);
    setState(763);
    numExpr(0);
    setState(764);
    match(DARICParser::COMMA);
    setState(765);
    numExpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtTEXTRIGHTContext ------------------------------------------------------------------

DARICParser::StmtTEXTRIGHTContext::StmtTEXTRIGHTContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtTEXTRIGHTContext::TEXTRIGHT() {
  return getToken(DARICParser::TEXTRIGHT, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StmtTEXTRIGHTContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StmtTEXTRIGHTContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtTEXTRIGHTContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtTEXTRIGHTContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

DARICParser::StrExprContext* DARICParser::StmtTEXTRIGHTContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}


size_t DARICParser::StmtTEXTRIGHTContext::getRuleIndex() const {
  return DARICParser::RuleStmtTEXTRIGHT;
}


antlrcpp::Any DARICParser::StmtTEXTRIGHTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtTEXTRIGHT(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtTEXTRIGHTContext* DARICParser::stmtTEXTRIGHT() {
  StmtTEXTRIGHTContext *_localctx = _tracker.createInstance<StmtTEXTRIGHTContext>(_ctx, getState());
  enterRule(_localctx, 122, DARICParser::RuleStmtTEXTRIGHT);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(767);
    match(DARICParser::TEXTRIGHT);
    setState(768);
    numExpr(0);
    setState(769);
    match(DARICParser::COMMA);
    setState(770);
    numExpr(0);
    setState(771);
    match(DARICParser::COMMA);
    setState(772);
    numExpr(0);
    setState(773);
    match(DARICParser::COMMA);
    setState(774);
    strExpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtTEXTCENTREContext ------------------------------------------------------------------

DARICParser::StmtTEXTCENTREContext::StmtTEXTCENTREContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DARICParser::NumExprContext *> DARICParser::StmtTEXTCENTREContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StmtTEXTCENTREContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtTEXTCENTREContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtTEXTCENTREContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

DARICParser::StrExprContext* DARICParser::StmtTEXTCENTREContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}

tree::TerminalNode* DARICParser::StmtTEXTCENTREContext::TEXTCENTRE() {
  return getToken(DARICParser::TEXTCENTRE, 0);
}

tree::TerminalNode* DARICParser::StmtTEXTCENTREContext::TEXTCENTER() {
  return getToken(DARICParser::TEXTCENTER, 0);
}


size_t DARICParser::StmtTEXTCENTREContext::getRuleIndex() const {
  return DARICParser::RuleStmtTEXTCENTRE;
}


antlrcpp::Any DARICParser::StmtTEXTCENTREContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtTEXTCENTRE(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtTEXTCENTREContext* DARICParser::stmtTEXTCENTRE() {
  StmtTEXTCENTREContext *_localctx = _tracker.createInstance<StmtTEXTCENTREContext>(_ctx, getState());
  enterRule(_localctx, 124, DARICParser::RuleStmtTEXTCENTRE);
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
    setState(776);
    _la = _input->LA(1);
    if (!(_la == DARICParser::TEXTCENTRE

    || _la == DARICParser::TEXTCENTER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(777);
    numExpr(0);
    setState(778);
    match(DARICParser::COMMA);
    setState(779);
    numExpr(0);
    setState(780);
    match(DARICParser::COMMA);
    setState(781);
    numExpr(0);
    setState(782);
    match(DARICParser::COMMA);
    setState(783);
    strExpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtSHOWFPSContext ------------------------------------------------------------------

DARICParser::StmtSHOWFPSContext::StmtSHOWFPSContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtSHOWFPSContext::SHOWFPS() {
  return getToken(DARICParser::SHOWFPS, 0);
}


size_t DARICParser::StmtSHOWFPSContext::getRuleIndex() const {
  return DARICParser::RuleStmtSHOWFPS;
}


antlrcpp::Any DARICParser::StmtSHOWFPSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtSHOWFPS(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtSHOWFPSContext* DARICParser::stmtSHOWFPS() {
  StmtSHOWFPSContext *_localctx = _tracker.createInstance<StmtSHOWFPSContext>(_ctx, getState());
  enterRule(_localctx, 126, DARICParser::RuleStmtSHOWFPS);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(785);
    match(DARICParser::SHOWFPS);
   
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

DARICParser::BodyContext* DARICParser::WhenContext::body() {
  return getRuleContext<DARICParser::BodyContext>(0);
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
  enterRule(_localctx, 128, DARICParser::RuleWhen);
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
    setState(787);
    match(DARICParser::WHEN);
    setState(788);
    expr();
    setState(793);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(789);
      match(DARICParser::COMMA);
      setState(790);
      expr();
      setState(795);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(796);
    match(DARICParser::COLON);
    setState(797);
    body();
   
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
  enterRule(_localctx, 130, DARICParser::RuleFnName);
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
    setState(799);
    _la = _input->LA(1);
    if (!(((((_la - 167) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 167)) & ((1ULL << (DARICParser::FN_INTEGER - 167))
      | (1ULL << (DARICParser::FN_FLOAT - 167))
      | (1ULL << (DARICParser::FN_STRING - 167)))) != 0))) {
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
  enterRule(_localctx, 132, DARICParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(803);
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
        setState(801);
        number();
        break;
      }

      case DARICParser::STRINGLITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(802);
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
  enterRule(_localctx, 134, DARICParser::RuleVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(808);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(805);
      numVar();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(806);
      strVar();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(807);
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
  enterRule(_localctx, 136, DARICParser::RuleTypeVar);

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
    setState(810);
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
  enterRule(_localctx, 138, DARICParser::RuleNumVar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(868);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatArrayContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(812);
      varName();
      setState(813);
      match(DARICParser::LPAREN);
      setState(814);
      numExpr(0);
      setState(817);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::COMMA) {
        setState(815);
        match(DARICParser::COMMA);
        setState(816);
        numExpr(0);
      }
      setState(819);
      match(DARICParser::RPAREN);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerArrayContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(821);
      varNameInteger();
      setState(822);
      match(DARICParser::LPAREN);
      setState(823);
      numExpr(0);
      setState(826);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::COMMA) {
        setState(824);
        match(DARICParser::COMMA);
        setState(825);
        numExpr(0);
      }
      setState(828);
      match(DARICParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerFieldArrayContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(830);
      typeVar();
      setState(831);
      match(DARICParser::LPAREN);
      setState(832);
      numExpr(0);
      setState(833);
      match(DARICParser::RPAREN);
      setState(834);
      varNameInteger();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatFieldArrayContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(836);
      typeVar();
      setState(837);
      match(DARICParser::LPAREN);
      setState(838);
      numExpr(0);
      setState(839);
      match(DARICParser::RPAREN);
      setState(840);
      varName();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatFNContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(842);
      match(DARICParser::FN_FLOAT);
      setState(843);
      match(DARICParser::LPAREN);
      setState(845);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << DARICParser::FALSE)
        | (1ULL << DARICParser::FLOAT_TOKEN)
        | (1ULL << DARICParser::INT)
        | (1ULL << DARICParser::TRUE)
        | (1ULL << DARICParser::INKEY)
        | (1ULL << DARICParser::INKEYS)
        | (1ULL << DARICParser::GET)
        | (1ULL << DARICParser::RED)
        | (1ULL << DARICParser::GREEN)
        | (1ULL << DARICParser::YELLOW)
        | (1ULL << DARICParser::BLUE)
        | (1ULL << DARICParser::MAGENTA)
        | (1ULL << DARICParser::CYAN)
        | (1ULL << DARICParser::WHITE)
        | (1ULL << DARICParser::BLACK))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::BGETH - 64))
        | (1ULL << (DARICParser::EOFH - 64))
        | (1ULL << (DARICParser::OPENIN - 64))
        | (1ULL << (DARICParser::OPENOUT - 64))
        | (1ULL << (DARICParser::OPENUP - 64))
        | (1ULL << (DARICParser::PTRH - 64))
        | (1ULL << (DARICParser::POINT - 64))
        | (1ULL << (DARICParser::TIME - 64))
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
        | (1ULL << (DARICParser::RND1 - 64)))) != 0) || ((((_la - 133) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 133)) & ((1ULL << (DARICParser::NOT - 133))
        | (1ULL << (DARICParser::PLUS - 133))
        | (1ULL << (DARICParser::MINUS - 133))
        | (1ULL << (DARICParser::LPAREN - 133))
        | (1ULL << (DARICParser::STRINGLITERAL - 133))
        | (1ULL << (DARICParser::FN_INTEGER - 133))
        | (1ULL << (DARICParser::FN_FLOAT - 133))
        | (1ULL << (DARICParser::FN_STRING - 133))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 133))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 133))
        | (1ULL << (DARICParser::VARIABLE_STRING - 133))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 133))
        | (1ULL << (DARICParser::HEXNUMBER - 133))
        | (1ULL << (DARICParser::BINARYNUMBER - 133))
        | (1ULL << (DARICParser::NUMBER - 133))
        | (1ULL << (DARICParser::FLOAT - 133)))) != 0)) {
        setState(844);
        functionParList();
      }
      setState(847);
      match(DARICParser::RPAREN);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerFNContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(848);
      match(DARICParser::FN_INTEGER);
      setState(849);
      match(DARICParser::LPAREN);
      setState(851);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << DARICParser::FALSE)
        | (1ULL << DARICParser::FLOAT_TOKEN)
        | (1ULL << DARICParser::INT)
        | (1ULL << DARICParser::TRUE)
        | (1ULL << DARICParser::INKEY)
        | (1ULL << DARICParser::INKEYS)
        | (1ULL << DARICParser::GET)
        | (1ULL << DARICParser::RED)
        | (1ULL << DARICParser::GREEN)
        | (1ULL << DARICParser::YELLOW)
        | (1ULL << DARICParser::BLUE)
        | (1ULL << DARICParser::MAGENTA)
        | (1ULL << DARICParser::CYAN)
        | (1ULL << DARICParser::WHITE)
        | (1ULL << DARICParser::BLACK))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::BGETH - 64))
        | (1ULL << (DARICParser::EOFH - 64))
        | (1ULL << (DARICParser::OPENIN - 64))
        | (1ULL << (DARICParser::OPENOUT - 64))
        | (1ULL << (DARICParser::OPENUP - 64))
        | (1ULL << (DARICParser::PTRH - 64))
        | (1ULL << (DARICParser::POINT - 64))
        | (1ULL << (DARICParser::TIME - 64))
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
        | (1ULL << (DARICParser::RND1 - 64)))) != 0) || ((((_la - 133) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 133)) & ((1ULL << (DARICParser::NOT - 133))
        | (1ULL << (DARICParser::PLUS - 133))
        | (1ULL << (DARICParser::MINUS - 133))
        | (1ULL << (DARICParser::LPAREN - 133))
        | (1ULL << (DARICParser::STRINGLITERAL - 133))
        | (1ULL << (DARICParser::FN_INTEGER - 133))
        | (1ULL << (DARICParser::FN_FLOAT - 133))
        | (1ULL << (DARICParser::FN_STRING - 133))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 133))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 133))
        | (1ULL << (DARICParser::VARIABLE_STRING - 133))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 133))
        | (1ULL << (DARICParser::HEXNUMBER - 133))
        | (1ULL << (DARICParser::BINARYNUMBER - 133))
        | (1ULL << (DARICParser::NUMBER - 133))
        | (1ULL << (DARICParser::FLOAT - 133)))) != 0)) {
        setState(850);
        functionParList();
      }
      setState(853);
      match(DARICParser::RPAREN);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarStringFNContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(854);
      match(DARICParser::FN_STRING);
      setState(855);
      match(DARICParser::LPAREN);
      setState(857);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << DARICParser::FALSE)
        | (1ULL << DARICParser::FLOAT_TOKEN)
        | (1ULL << DARICParser::INT)
        | (1ULL << DARICParser::TRUE)
        | (1ULL << DARICParser::INKEY)
        | (1ULL << DARICParser::INKEYS)
        | (1ULL << DARICParser::GET)
        | (1ULL << DARICParser::RED)
        | (1ULL << DARICParser::GREEN)
        | (1ULL << DARICParser::YELLOW)
        | (1ULL << DARICParser::BLUE)
        | (1ULL << DARICParser::MAGENTA)
        | (1ULL << DARICParser::CYAN)
        | (1ULL << DARICParser::WHITE)
        | (1ULL << DARICParser::BLACK))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::BGETH - 64))
        | (1ULL << (DARICParser::EOFH - 64))
        | (1ULL << (DARICParser::OPENIN - 64))
        | (1ULL << (DARICParser::OPENOUT - 64))
        | (1ULL << (DARICParser::OPENUP - 64))
        | (1ULL << (DARICParser::PTRH - 64))
        | (1ULL << (DARICParser::POINT - 64))
        | (1ULL << (DARICParser::TIME - 64))
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
        | (1ULL << (DARICParser::RND1 - 64)))) != 0) || ((((_la - 133) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 133)) & ((1ULL << (DARICParser::NOT - 133))
        | (1ULL << (DARICParser::PLUS - 133))
        | (1ULL << (DARICParser::MINUS - 133))
        | (1ULL << (DARICParser::LPAREN - 133))
        | (1ULL << (DARICParser::STRINGLITERAL - 133))
        | (1ULL << (DARICParser::FN_INTEGER - 133))
        | (1ULL << (DARICParser::FN_FLOAT - 133))
        | (1ULL << (DARICParser::FN_STRING - 133))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 133))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 133))
        | (1ULL << (DARICParser::VARIABLE_STRING - 133))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 133))
        | (1ULL << (DARICParser::HEXNUMBER - 133))
        | (1ULL << (DARICParser::BINARYNUMBER - 133))
        | (1ULL << (DARICParser::NUMBER - 133))
        | (1ULL << (DARICParser::FLOAT - 133)))) != 0)) {
        setState(856);
        functionParList();
      }
      setState(859);
      match(DARICParser::RPAREN);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(860);
      varName();
      break;
    }

    case 9: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(861);
      varNameInteger();
      break;
    }

    case 10: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatFieldContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(862);
      typeVar();
      setState(863);
      varName();
      break;
    }

    case 11: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerFieldContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(865);
      typeVar();
      setState(866);
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
  enterRule(_localctx, 140, DARICParser::RuleStrVar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(889);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringArrayContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(870);
      varNameString();
      setState(871);
      match(DARICParser::LPAREN);
      setState(872);
      numExpr(0);
      setState(875);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::COMMA) {
        setState(873);
        match(DARICParser::COMMA);
        setState(874);
        numExpr(0);
      }
      setState(877);
      match(DARICParser::RPAREN);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringFieldArrayContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(879);
      typeVar();
      setState(880);
      match(DARICParser::LPAREN);
      setState(881);
      numExpr(0);
      setState(882);
      match(DARICParser::RPAREN);
      setState(883);
      varNameString();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(885);
      varNameString();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringFieldContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(886);
      typeVar();
      setState(887);
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
  enterRule(_localctx, 142, DARICParser::RuleJustVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(894);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::VARIABLE_FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(891);
        varName();
        break;
      }

      case DARICParser::VARIABLE_INTEGER: {
        enterOuterAlt(_localctx, 2);
        setState(892);
        varNameInteger();
        break;
      }

      case DARICParser::VARIABLE_STRING: {
        enterOuterAlt(_localctx, 3);
        setState(893);
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
  enterRule(_localctx, 144, DARICParser::RuleJustNumberVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(898);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::VARIABLE_FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(896);
        varName();
        break;
      }

      case DARICParser::VARIABLE_INTEGER: {
        enterOuterAlt(_localctx, 2);
        setState(897);
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
  enterRule(_localctx, 146, DARICParser::RuleVarName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(900);
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
  enterRule(_localctx, 148, DARICParser::RuleVarNameInteger);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(902);
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
  enterRule(_localctx, 150, DARICParser::RuleVarNameString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(904);
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
  enterRule(_localctx, 152, DARICParser::RuleVarNameType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(906);
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

//----------------- VarDeclTypeVarContext ------------------------------------------------------------------

DARICParser::TypeVarContext* DARICParser::VarDeclTypeVarContext::typeVar() {
  return getRuleContext<DARICParser::TypeVarContext>(0);
}

DARICParser::VarNameContext* DARICParser::VarDeclTypeVarContext::varName() {
  return getRuleContext<DARICParser::VarNameContext>(0);
}

DARICParser::VarNameIntegerContext* DARICParser::VarDeclTypeVarContext::varNameInteger() {
  return getRuleContext<DARICParser::VarNameIntegerContext>(0);
}

DARICParser::VarDeclTypeVarContext::VarDeclTypeVarContext(VarDeclContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::VarDeclTypeVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVarDeclTypeVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarDeclTypeVarArrayedContext ------------------------------------------------------------------

DARICParser::TypeVarContext* DARICParser::VarDeclTypeVarArrayedContext::typeVar() {
  return getRuleContext<DARICParser::TypeVarContext>(0);
}

tree::TerminalNode* DARICParser::VarDeclTypeVarArrayedContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::VarDeclTypeVarArrayedContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::VarDeclTypeVarArrayedContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::VarNameContext* DARICParser::VarDeclTypeVarArrayedContext::varName() {
  return getRuleContext<DARICParser::VarNameContext>(0);
}

DARICParser::VarNameIntegerContext* DARICParser::VarDeclTypeVarArrayedContext::varNameInteger() {
  return getRuleContext<DARICParser::VarNameIntegerContext>(0);
}

DARICParser::VarDeclTypeVarArrayedContext::VarDeclTypeVarArrayedContext(VarDeclContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::VarDeclTypeVarArrayedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVarDeclTypeVarArrayed(this);
  else
    return visitor->visitChildren(this);
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

DARICParser::VarDeclTypeArrayedContext::VarDeclTypeArrayedContext(VarDeclContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::VarDeclTypeArrayedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVarDeclTypeArrayed(this);
  else
    return visitor->visitChildren(this);
}
DARICParser::VarDeclContext* DARICParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 154, DARICParser::RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(947);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclIndContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(908);
      justVar();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclArrayedContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(909);
      justVar();
      setState(920);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::LPAREN) {
        setState(910);
        match(DARICParser::LPAREN);
        setState(911);
        numExpr(0);
        setState(914);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DARICParser::COMMA) {
          setState(912);
          match(DARICParser::COMMA);
          setState(913);
          numExpr(0);
        }
        setState(916);
        match(DARICParser::RPAREN);
        setState(922);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeVarContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(923);
      typeVar();
      setState(924);
      varName();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeVarContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(926);
      typeVar();
      setState(927);
      varNameInteger();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeVarArrayedContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(929);
      typeVar();
      setState(930);
      match(DARICParser::LPAREN);
      setState(931);
      numExpr(0);
      setState(932);
      match(DARICParser::RPAREN);
      setState(933);
      varName();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeVarArrayedContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(935);
      typeVar();
      setState(936);
      match(DARICParser::LPAREN);
      setState(937);
      numExpr(0);
      setState(938);
      match(DARICParser::RPAREN);
      setState(939);
      varNameInteger();
      break;
    }

    case 7: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(941);
      typeVar();
      break;
    }

    case 8: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeArrayedContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(942);
      typeVar();
      setState(943);
      match(DARICParser::LPAREN);
      setState(944);
      numExpr(0);
      setState(945);
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

DARICParser::TypeVarContext* DARICParser::VarDeclWithDimensionContext::typeVar() {
  return getRuleContext<DARICParser::TypeVarContext>(0);
}

DARICParser::VarNameContext* DARICParser::VarDeclWithDimensionContext::varName() {
  return getRuleContext<DARICParser::VarNameContext>(0);
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
  enterRule(_localctx, 156, DARICParser::RuleVarDeclWithDimension);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(968);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::VARIABLE_FLOAT:
      case DARICParser::VARIABLE_INTEGER:
      case DARICParser::VARIABLE_STRING: {
        enterOuterAlt(_localctx, 1);
        setState(949);
        justVar();
        setState(950);
        match(DARICParser::LPAREN);
        setState(951);
        numExpr(0);
        setState(956);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == DARICParser::COMMA) {
          setState(952);
          match(DARICParser::COMMA);
          setState(953);
          numExpr(0);
          setState(958);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(959);
        match(DARICParser::RPAREN);
        break;
      }

      case DARICParser::VARIABLE_TYPE: {
        enterOuterAlt(_localctx, 2);
        setState(961);
        typeVar();
        setState(962);
        match(DARICParser::LPAREN);
        setState(963);
        numExpr(0);
        setState(964);
        match(DARICParser::COMMA);
        setState(965);
        varName();
        setState(966);
        match(DARICParser::RPAREN);
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
  enterRule(_localctx, 158, DARICParser::RuleVarList);
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
    setState(970);
    varDecl();
    setState(975);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(971);
      match(DARICParser::COMMA);
      setState(972);
      varDecl();
      setState(977);
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
  enterRule(_localctx, 160, DARICParser::RuleFunctionVarList);
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
    setState(979);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::RETURN) {
      setState(978);
      match(DARICParser::RETURN);
    }
    setState(981);
    justVar();
    setState(989);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(982);
      match(DARICParser::COMMA);
      setState(984);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::RETURN) {
        setState(983);
        match(DARICParser::RETURN);
      }
      setState(986);
      justVar();
      setState(991);
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
  enterRule(_localctx, 162, DARICParser::RuleFunctionParList);
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
    setState(992);
    expr();
    setState(997);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(993);
      match(DARICParser::COMMA);
      setState(994);
      expr();
      setState(999);
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
  enterRule(_localctx, 164, DARICParser::RuleExprList);
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
    setState(1000);
    expr();
    setState(1005);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(1001);
      match(DARICParser::COMMA);
      setState(1002);
      expr();
      setState(1007);
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
  enterRule(_localctx, 166, DARICParser::RulePrintListItem);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1019);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<PrintListItemContext *>(_tracker.createInstance<DARICParser::PrintListExprContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(1009);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::TILDE) {
        setState(1008);
        match(DARICParser::TILDE);
      }
      setState(1011);
      expr();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<PrintListItemContext *>(_tracker.createInstance<DARICParser::PrintListSPCPContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(1012);
      match(DARICParser::SPC);
      setState(1013);
      match(DARICParser::LPAREN);
      setState(1014);
      numExpr(0);
      setState(1015);
      match(DARICParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<PrintListItemContext *>(_tracker.createInstance<DARICParser::PrintListSPCContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(1017);
      match(DARICParser::SPC);
      setState(1018);
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
  enterRule(_localctx, 168, DARICParser::RulePrintListTick);
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
    setState(1022); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1021);
      match(DARICParser::TICK);
      setState(1024); 
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
  enterRule(_localctx, 170, DARICParser::RulePrintListSeparator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1029);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::COMMA: {
        enterOuterAlt(_localctx, 1);
        setState(1026);
        match(DARICParser::COMMA);
        break;
      }

      case DARICParser::SEMICOLON: {
        enterOuterAlt(_localctx, 2);
        setState(1027);
        match(DARICParser::SEMICOLON);
        break;
      }

      case DARICParser::TICK: {
        enterOuterAlt(_localctx, 3);
        setState(1028);
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
  enterRule(_localctx, 172, DARICParser::RulePrintList);
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
    setState(1032);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::TICK) {
      setState(1031);
      printListTick();
    }
    setState(1035);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::SEMICOLON) {
      setState(1034);
      dynamic_cast<PrintListContext *>(_localctx)->s1 = match(DARICParser::SEMICOLON);
    }
    setState(1037);
    printListItem();
    setState(1043);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1038);
        printListSeparator();
        setState(1039);
        printListItem(); 
      }
      setState(1045);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    }
    setState(1047);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::SEMICOLON) {
      setState(1046);
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
  enterRule(_localctx, 174, DARICParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1051);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1049);
      numExpr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1050);
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
  enterRule(_localctx, 176, DARICParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1058);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1053);
      numberInteger();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1054);
      numberFloat();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1055);
      numberHex();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1056);
      numberBinary();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1057);
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
  enterRule(_localctx, 178, DARICParser::RuleNumberInteger);
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
    setState(1061);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::PLUS

    || _la == DARICParser::MINUS) {
      setState(1060);
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
    setState(1063);
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
  enterRule(_localctx, 180, DARICParser::RuleNumberHex);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1065);
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
  enterRule(_localctx, 182, DARICParser::RuleNumberBinary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1067);
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
  enterRule(_localctx, 184, DARICParser::RuleNumberFloat);
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
    setState(1070);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::PLUS

    || _la == DARICParser::MINUS) {
      setState(1069);
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
    setState(1072);
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

DARICParser::NumExprContext* DARICParser::StrFuncSTRSContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

DARICParser::StrFuncSTRSContext::StrFuncSTRSContext(StrFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StrFuncSTRSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStrFuncSTRS(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StrFuncINKEYSContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StrFuncINKEYSContext::INKEYS() {
  return getToken(DARICParser::INKEYS, 0);
}

DARICParser::NumExprContext* DARICParser::StrFuncINKEYSContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

DARICParser::StrFuncINKEYSContext::StrFuncINKEYSContext(StrFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StrFuncINKEYSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStrFuncINKEYS(this);
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

tree::TerminalNode* DARICParser::StrFuncCHRSContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

tree::TerminalNode* DARICParser::StrFuncCHRSContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
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

DARICParser::NumExprContext* DARICParser::StrFuncSTRSHEXContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
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
  enterRule(_localctx, 186, DARICParser::RuleStrFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1126);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncTIMESContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(1074);
      match(DARICParser::TIMES);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncCHRSContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(1075);
      match(DARICParser::CHRS);
      setState(1076);
      numExpr(0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncCHRSContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(1077);
      match(DARICParser::CHRS);
      setState(1078);
      match(DARICParser::LPAREN);
      setState(1079);
      numExpr(0);
      setState(1080);
      match(DARICParser::RPAREN);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncLEFTSContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(1082);
      match(DARICParser::LEFTS);
      setState(1083);
      match(DARICParser::LPAREN);
      setState(1084);
      strExpr(0);
      setState(1085);
      match(DARICParser::COMMA);
      setState(1086);
      numExpr(0);
      setState(1087);
      match(DARICParser::RPAREN);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncMIDS3Context>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(1089);
      match(DARICParser::MIDS);
      setState(1090);
      match(DARICParser::LPAREN);
      setState(1091);
      strExpr(0);
      setState(1092);
      match(DARICParser::COMMA);
      setState(1093);
      numExpr(0);
      setState(1094);
      match(DARICParser::COMMA);
      setState(1095);
      numExpr(0);
      setState(1096);
      match(DARICParser::RPAREN);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncMIDS2Context>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(1098);
      match(DARICParser::MIDS);
      setState(1099);
      match(DARICParser::LPAREN);
      setState(1100);
      strExpr(0);
      setState(1101);
      match(DARICParser::COMMA);
      setState(1102);
      numExpr(0);
      setState(1103);
      match(DARICParser::RPAREN);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncRIGHTSContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(1105);
      match(DARICParser::RIGHTS);
      setState(1106);
      match(DARICParser::LPAREN);
      setState(1107);
      strExpr(0);
      setState(1108);
      match(DARICParser::COMMA);
      setState(1109);
      numExpr(0);
      setState(1110);
      match(DARICParser::RPAREN);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncSTRSContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(1112);
      match(DARICParser::STRS);
      setState(1113);
      numExpr(0);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncSTRSHEXContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(1114);
      match(DARICParser::STRS);
      setState(1115);
      match(DARICParser::TILDE);
      setState(1116);
      numExpr(0);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncSTRINGSContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(1117);
      match(DARICParser::STRINGS);
      setState(1118);
      match(DARICParser::LPAREN);
      setState(1119);
      numExpr(0);
      setState(1120);
      match(DARICParser::COMMA);
      setState(1121);
      strExpr(0);
      setState(1122);
      match(DARICParser::RPAREN);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncINKEYSContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(1124);
      match(DARICParser::INKEYS);
      setState(1125);
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
  enterRule(_localctx, 188, DARICParser::RuleString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1128);
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

tree::TerminalNode* DARICParser::StrExprContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

std::vector<DARICParser::StrExprContext *> DARICParser::StrExprContext::strExpr() {
  return getRuleContexts<DARICParser::StrExprContext>();
}

DARICParser::StrExprContext* DARICParser::StrExprContext::strExpr(size_t i) {
  return getRuleContext<DARICParser::StrExprContext>(i);
}

tree::TerminalNode* DARICParser::StrExprContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::StrFuncContext* DARICParser::StrExprContext::strFunc() {
  return getRuleContext<DARICParser::StrFuncContext>(0);
}

DARICParser::StrVarContext* DARICParser::StrExprContext::strVar() {
  return getRuleContext<DARICParser::StrVarContext>(0);
}

DARICParser::StringContext* DARICParser::StrExprContext::string() {
  return getRuleContext<DARICParser::StringContext>(0);
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
  size_t startState = 190;
  enterRecursionRule(_localctx, 190, DARICParser::RuleStrExpr, precedence);

    

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
    setState(1138);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::LPAREN: {
        setState(1131);
        match(DARICParser::LPAREN);
        setState(1132);
        strExpr(0);
        setState(1133);
        match(DARICParser::RPAREN);
        break;
      }

      case DARICParser::INKEYS:
      case DARICParser::TIMES:
      case DARICParser::STRS:
      case DARICParser::STRINGS:
      case DARICParser::CHRS:
      case DARICParser::LEFTS:
      case DARICParser::MIDS:
      case DARICParser::RIGHTS: {
        setState(1135);
        strFunc();
        break;
      }

      case DARICParser::VARIABLE_STRING:
      case DARICParser::VARIABLE_TYPE: {
        setState(1136);
        strVar();
        break;
      }

      case DARICParser::STRINGLITERAL: {
        setState(1137);
        string();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(1145);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StrExprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStrExpr);
        setState(1140);

        if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
        setState(1141);
        match(DARICParser::PLUS);
        setState(1142);
        strExpr(4); 
      }
      setState(1147);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx);
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
//----------------- NumFuncGETContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncGETContext::GET() {
  return getToken(DARICParser::GET, 0);
}

DARICParser::NumFuncGETContext::NumFuncGETContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncGETContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncGET(this);
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

DARICParser::StrExprContext* DARICParser::NumFuncLENContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}

DARICParser::NumFuncLENContext::NumFuncLENContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncLENContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncLEN(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncFLOATContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncFLOATContext::FLOAT_TOKEN() {
  return getToken(DARICParser::FLOAT_TOKEN, 0);
}

tree::TerminalNode* DARICParser::NumFuncFLOATContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncFLOATContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncFLOATContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncFLOATContext::NumFuncFLOATContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncFLOATContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncFLOAT(this);
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
//----------------- NumFuncINKEYContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncINKEYContext::INKEY() {
  return getToken(DARICParser::INKEY, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncINKEYContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

DARICParser::NumFuncINKEYContext::NumFuncINKEYContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncINKEYContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncINKEY(this);
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

DARICParser::StrExprContext* DARICParser::NumFuncVALContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
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
//----------------- NumFuncINTContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncINTContext::INT() {
  return getToken(DARICParser::INT, 0);
}

tree::TerminalNode* DARICParser::NumFuncINTContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncINTContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncINTContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncINTContext::NumFuncINTContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncINTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncINT(this);
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

DARICParser::StrExprContext* DARICParser::NumFuncASCContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}

DARICParser::NumFuncASCContext::NumFuncASCContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncASCContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncASC(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncPOINTContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncPOINTContext::POINT() {
  return getToken(DARICParser::POINT, 0);
}

tree::TerminalNode* DARICParser::NumFuncPOINTContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::NumFuncPOINTContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumFuncPOINTContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumFuncPOINTContext::COMMA() {
  return getToken(DARICParser::COMMA, 0);
}

tree::TerminalNode* DARICParser::NumFuncPOINTContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncPOINTContext::NumFuncPOINTContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncPOINTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncPOINT(this);
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
  enterRule(_localctx, 192, DARICParser::RuleNumFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1293);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncPIContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(1148);
      match(DARICParser::PI);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncFALSEContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(1149);
      match(DARICParser::FALSE);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncTRUEContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(1150);
      match(DARICParser::TRUE);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncTIMEContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(1151);
      match(DARICParser::TIME);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRNDContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(1152);
      match(DARICParser::RND);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRND0Context>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(1153);
      match(DARICParser::RND0);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRND1Context>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(1154);
      match(DARICParser::RND1);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRNDRANGEContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(1155);
      match(DARICParser::RND);
      setState(1156);
      match(DARICParser::LPAREN);
      setState(1157);
      numExpr(0);
      setState(1158);
      match(DARICParser::RPAREN);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncLNContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(1160);
      match(DARICParser::LN);
      setState(1161);
      match(DARICParser::LPAREN);
      setState(1162);
      numExpr(0);
      setState(1163);
      match(DARICParser::RPAREN);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncLOGContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(1165);
      match(DARICParser::LOG);
      setState(1166);
      match(DARICParser::LPAREN);
      setState(1167);
      numExpr(0);
      setState(1168);
      match(DARICParser::RPAREN);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncEXPContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(1170);
      match(DARICParser::EXP);
      setState(1171);
      match(DARICParser::LPAREN);
      setState(1172);
      numExpr(0);
      setState(1173);
      match(DARICParser::RPAREN);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncATNContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(1175);
      match(DARICParser::ATN);
      setState(1176);
      match(DARICParser::LPAREN);
      setState(1177);
      numExpr(0);
      setState(1178);
      match(DARICParser::RPAREN);
      break;
    }

    case 13: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncTANContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(1180);
      match(DARICParser::TAN);
      setState(1181);
      match(DARICParser::LPAREN);
      setState(1182);
      numExpr(0);
      setState(1183);
      match(DARICParser::RPAREN);
      break;
    }

    case 14: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncCOSContext>(_localctx));
      enterOuterAlt(_localctx, 14);
      setState(1185);
      match(DARICParser::COS);
      setState(1186);
      match(DARICParser::LPAREN);
      setState(1187);
      numExpr(0);
      setState(1188);
      match(DARICParser::RPAREN);
      break;
    }

    case 15: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSINContext>(_localctx));
      enterOuterAlt(_localctx, 15);
      setState(1190);
      match(DARICParser::SIN);
      setState(1191);
      match(DARICParser::LPAREN);
      setState(1192);
      numExpr(0);
      setState(1193);
      match(DARICParser::RPAREN);
      break;
    }

    case 16: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncABSContext>(_localctx));
      enterOuterAlt(_localctx, 16);
      setState(1195);
      match(DARICParser::ABS);
      setState(1196);
      match(DARICParser::LPAREN);
      setState(1197);
      numExpr(0);
      setState(1198);
      match(DARICParser::RPAREN);
      break;
    }

    case 17: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncACSContext>(_localctx));
      enterOuterAlt(_localctx, 17);
      setState(1200);
      match(DARICParser::ACS);
      setState(1201);
      match(DARICParser::LPAREN);
      setState(1202);
      numExpr(0);
      setState(1203);
      match(DARICParser::RPAREN);
      break;
    }

    case 18: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncASNContext>(_localctx));
      enterOuterAlt(_localctx, 18);
      setState(1205);
      match(DARICParser::ASN);
      setState(1206);
      match(DARICParser::LPAREN);
      setState(1207);
      numExpr(0);
      setState(1208);
      match(DARICParser::RPAREN);
      break;
    }

    case 19: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncDEGContext>(_localctx));
      enterOuterAlt(_localctx, 19);
      setState(1210);
      match(DARICParser::DEG);
      setState(1211);
      match(DARICParser::LPAREN);
      setState(1212);
      numExpr(0);
      setState(1213);
      match(DARICParser::RPAREN);
      break;
    }

    case 20: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRADContext>(_localctx));
      enterOuterAlt(_localctx, 20);
      setState(1215);
      match(DARICParser::RAD);
      setState(1216);
      match(DARICParser::LPAREN);
      setState(1217);
      numExpr(0);
      setState(1218);
      match(DARICParser::RPAREN);
      break;
    }

    case 21: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSQRContext>(_localctx));
      enterOuterAlt(_localctx, 21);
      setState(1220);
      match(DARICParser::SQR);
      setState(1221);
      match(DARICParser::LPAREN);
      setState(1222);
      numExpr(0);
      setState(1223);
      match(DARICParser::RPAREN);
      break;
    }

    case 22: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSGNContext>(_localctx));
      enterOuterAlt(_localctx, 22);
      setState(1225);
      match(DARICParser::SGN);
      setState(1226);
      match(DARICParser::LPAREN);
      setState(1227);
      numExpr(0);
      setState(1228);
      match(DARICParser::RPAREN);
      break;
    }

    case 23: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncGETContext>(_localctx));
      enterOuterAlt(_localctx, 23);
      setState(1230);
      match(DARICParser::GET);
      break;
    }

    case 24: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncINKEYContext>(_localctx));
      enterOuterAlt(_localctx, 24);
      setState(1231);
      match(DARICParser::INKEY);
      setState(1232);
      numExpr(0);
      break;
    }

    case 25: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncINTContext>(_localctx));
      enterOuterAlt(_localctx, 25);
      setState(1233);
      match(DARICParser::INT);
      setState(1234);
      match(DARICParser::LPAREN);
      setState(1235);
      numExpr(0);
      setState(1236);
      match(DARICParser::RPAREN);
      break;
    }

    case 26: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncFLOATContext>(_localctx));
      enterOuterAlt(_localctx, 26);
      setState(1238);
      match(DARICParser::FLOAT_TOKEN);
      setState(1239);
      match(DARICParser::LPAREN);
      setState(1240);
      numExpr(0);
      setState(1241);
      match(DARICParser::RPAREN);
      break;
    }

    case 27: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncPOINTContext>(_localctx));
      enterOuterAlt(_localctx, 27);
      setState(1243);
      match(DARICParser::POINT);
      setState(1244);
      match(DARICParser::LPAREN);
      setState(1245);
      numExpr(0);
      setState(1246);
      match(DARICParser::COMMA);
      setState(1247);
      numExpr(0);
      setState(1248);
      match(DARICParser::RPAREN);
      break;
    }

    case 28: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncBGETHContext>(_localctx));
      enterOuterAlt(_localctx, 28);
      setState(1250);
      match(DARICParser::BGETH);
      setState(1251);
      numExpr(0);
      break;
    }

    case 29: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncEOFHContext>(_localctx));
      enterOuterAlt(_localctx, 29);
      setState(1252);
      match(DARICParser::EOFH);
      setState(1253);
      numExpr(0);
      break;
    }

    case 30: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncOPENINContext>(_localctx));
      enterOuterAlt(_localctx, 30);
      setState(1254);
      match(DARICParser::OPENIN);
      setState(1255);
      match(DARICParser::LPAREN);
      setState(1256);
      strExpr(0);
      setState(1257);
      match(DARICParser::RPAREN);
      break;
    }

    case 31: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncOPENOUTContext>(_localctx));
      enterOuterAlt(_localctx, 31);
      setState(1259);
      match(DARICParser::OPENOUT);
      setState(1260);
      match(DARICParser::LPAREN);
      setState(1261);
      strExpr(0);
      setState(1262);
      match(DARICParser::RPAREN);
      break;
    }

    case 32: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncOPENUPContext>(_localctx));
      enterOuterAlt(_localctx, 32);
      setState(1264);
      match(DARICParser::OPENUP);
      setState(1265);
      match(DARICParser::LPAREN);
      setState(1266);
      strExpr(0);
      setState(1267);
      match(DARICParser::RPAREN);
      break;
    }

    case 33: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncPTRContext>(_localctx));
      enterOuterAlt(_localctx, 33);
      setState(1269);
      match(DARICParser::PTRH);
      setState(1270);
      numExpr(0);
      break;
    }

    case 34: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncASCContext>(_localctx));
      enterOuterAlt(_localctx, 34);
      setState(1271);
      match(DARICParser::ASC);
      setState(1272);
      strExpr(0);
      break;
    }

    case 35: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncLENContext>(_localctx));
      enterOuterAlt(_localctx, 35);
      setState(1273);
      match(DARICParser::LEN);
      setState(1274);
      strExpr(0);
      break;
    }

    case 36: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncINSTR2Context>(_localctx));
      enterOuterAlt(_localctx, 36);
      setState(1275);
      match(DARICParser::INSTR);
      setState(1276);
      match(DARICParser::LPAREN);
      setState(1277);
      strExpr(0);
      setState(1278);
      match(DARICParser::COMMA);
      setState(1279);
      strExpr(0);
      setState(1280);
      match(DARICParser::RPAREN);
      break;
    }

    case 37: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncINSTR3Context>(_localctx));
      enterOuterAlt(_localctx, 37);
      setState(1282);
      match(DARICParser::INSTR);
      setState(1283);
      match(DARICParser::LPAREN);
      setState(1284);
      strExpr(0);
      setState(1285);
      match(DARICParser::COMMA);
      setState(1286);
      strExpr(0);
      setState(1287);
      match(DARICParser::COMMA);
      setState(1288);
      numExpr(0);
      setState(1289);
      match(DARICParser::RPAREN);
      break;
    }

    case 38: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncVALContext>(_localctx));
      enterOuterAlt(_localctx, 38);
      setState(1291);
      match(DARICParser::VAL);
      setState(1292);
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
//----------------- NumExprSHLSHRContext ------------------------------------------------------------------

std::vector<DARICParser::NumExprContext *> DARICParser::NumExprSHLSHRContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumExprSHLSHRContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumExprSHLSHRContext::SHL() {
  return getToken(DARICParser::SHL, 0);
}

tree::TerminalNode* DARICParser::NumExprSHLSHRContext::SHR() {
  return getToken(DARICParser::SHR, 0);
}

DARICParser::NumExprSHLSHRContext::NumExprSHLSHRContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprSHLSHRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprSHLSHR(this);
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

tree::TerminalNode* DARICParser::NumExprNumRelopContext::EQ() {
  return getToken(DARICParser::EQ, 0);
}

tree::TerminalNode* DARICParser::NumExprNumRelopContext::NE() {
  return getToken(DARICParser::NE, 0);
}

tree::TerminalNode* DARICParser::NumExprNumRelopContext::GT() {
  return getToken(DARICParser::GT, 0);
}

tree::TerminalNode* DARICParser::NumExprNumRelopContext::GE() {
  return getToken(DARICParser::GE, 0);
}

tree::TerminalNode* DARICParser::NumExprNumRelopContext::LT() {
  return getToken(DARICParser::LT, 0);
}

tree::TerminalNode* DARICParser::NumExprNumRelopContext::LE() {
  return getToken(DARICParser::LE, 0);
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

tree::TerminalNode* DARICParser::NumExprStrRelopContext::EQ() {
  return getToken(DARICParser::EQ, 0);
}

tree::TerminalNode* DARICParser::NumExprStrRelopContext::NE() {
  return getToken(DARICParser::NE, 0);
}

tree::TerminalNode* DARICParser::NumExprStrRelopContext::GT() {
  return getToken(DARICParser::GT, 0);
}

tree::TerminalNode* DARICParser::NumExprStrRelopContext::GE() {
  return getToken(DARICParser::GE, 0);
}

tree::TerminalNode* DARICParser::NumExprStrRelopContext::LT() {
  return getToken(DARICParser::LT, 0);
}

tree::TerminalNode* DARICParser::NumExprStrRelopContext::LE() {
  return getToken(DARICParser::LE, 0);
}

DARICParser::NumExprStrRelopContext::NumExprStrRelopContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprStrRelopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprStrRelop(this);
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
//----------------- NumExprMultiplyDivideContext ------------------------------------------------------------------

std::vector<DARICParser::NumExprContext *> DARICParser::NumExprMultiplyDivideContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumExprMultiplyDivideContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumExprMultiplyDivideContext::MULTIPLY() {
  return getToken(DARICParser::MULTIPLY, 0);
}

tree::TerminalNode* DARICParser::NumExprMultiplyDivideContext::DIVIDE() {
  return getToken(DARICParser::DIVIDE, 0);
}

DARICParser::NumExprMultiplyDivideContext::NumExprMultiplyDivideContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprMultiplyDivideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprMultiplyDivide(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprDIVMODContext ------------------------------------------------------------------

std::vector<DARICParser::NumExprContext *> DARICParser::NumExprDIVMODContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumExprDIVMODContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumExprDIVMODContext::DIV() {
  return getToken(DARICParser::DIV, 0);
}

tree::TerminalNode* DARICParser::NumExprDIVMODContext::MOD() {
  return getToken(DARICParser::MOD, 0);
}

DARICParser::NumExprDIVMODContext::NumExprDIVMODContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprDIVMODContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprDIVMOD(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprANDOREORContext ------------------------------------------------------------------

std::vector<DARICParser::NumExprContext *> DARICParser::NumExprANDOREORContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumExprANDOREORContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumExprANDOREORContext::AND() {
  return getToken(DARICParser::AND, 0);
}

tree::TerminalNode* DARICParser::NumExprANDOREORContext::OR() {
  return getToken(DARICParser::OR, 0);
}

tree::TerminalNode* DARICParser::NumExprANDOREORContext::EOR() {
  return getToken(DARICParser::EOR, 0);
}

DARICParser::NumExprANDOREORContext::NumExprANDOREORContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprANDOREORContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprANDOREOR(this);
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
//----------------- NumExprAddSubtractContext ------------------------------------------------------------------

std::vector<DARICParser::NumExprContext *> DARICParser::NumExprAddSubtractContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumExprAddSubtractContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumExprAddSubtractContext::PLUS() {
  return getToken(DARICParser::PLUS, 0);
}

tree::TerminalNode* DARICParser::NumExprAddSubtractContext::MINUS() {
  return getToken(DARICParser::MINUS, 0);
}

DARICParser::NumExprAddSubtractContext::NumExprAddSubtractContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprAddSubtractContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprAddSubtract(this);
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
  size_t startState = 194;
  enterRecursionRule(_localctx, 194, DARICParser::RuleNumExpr, precedence);

    size_t _la = 0;

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
    setState(1309);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NumExprVarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(1296);
      numVar();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NumExprNumberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1297);
      number();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NumExprNestedContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1298);
      match(DARICParser::LPAREN);
      setState(1299);
      numExpr(0);
      setState(1300);
      match(DARICParser::RPAREN);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<NumExprNOTContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1302);
      match(DARICParser::NOT);
      setState(1303);
      numExpr(10);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NumExprFuncContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1304);
      numFunc();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<NumExprStrRelopContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1305);
      strExpr(0);
      setState(1306);
      _la = _input->LA(1);
      if (!(((((_la - 127) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 127)) & ((1ULL << (DARICParser::EQ - 127))
        | (1ULL << (DARICParser::NE - 127))
        | (1ULL << (DARICParser::GT - 127))
        | (1ULL << (DARICParser::GE - 127))
        | (1ULL << (DARICParser::LT - 127))
        | (1ULL << (DARICParser::LE - 127)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1307);
      strExpr(0);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(1334);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1332);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<NumExprHatContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1311);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(1312);
          match(DARICParser::HAT);
          setState(1313);
          numExpr(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<NumExprMultiplyDivideContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1314);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(1315);
          _la = _input->LA(1);
          if (!(_la == DARICParser::MULTIPLY

          || _la == DARICParser::DIVIDE)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1316);
          numExpr(8);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<NumExprDIVMODContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1317);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(1318);
          _la = _input->LA(1);
          if (!(_la == DARICParser::MOD

          || _la == DARICParser::DIV)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1319);
          numExpr(7);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<NumExprAddSubtractContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1320);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(1321);
          _la = _input->LA(1);
          if (!(_la == DARICParser::PLUS

          || _la == DARICParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1322);
          numExpr(6);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<NumExprSHLSHRContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1323);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(1324);
          _la = _input->LA(1);
          if (!(_la == DARICParser::SHL

          || _la == DARICParser::SHR)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1325);
          numExpr(5);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<NumExprNumRelopContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1326);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1327);
          _la = _input->LA(1);
          if (!(((((_la - 127) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 127)) & ((1ULL << (DARICParser::EQ - 127))
            | (1ULL << (DARICParser::NE - 127))
            | (1ULL << (DARICParser::GT - 127))
            | (1ULL << (DARICParser::GE - 127))
            | (1ULL << (DARICParser::LT - 127))
            | (1ULL << (DARICParser::LE - 127)))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1328);
          numExpr(4);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<NumExprANDOREORContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1329);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(1330);
          _la = _input->LA(1);
          if (!(((((_la - 134) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 134)) & ((1ULL << (DARICParser::AND - 134))
            | (1ULL << (DARICParser::OR - 134))
            | (1ULL << (DARICParser::EOR - 134)))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1331);
          numExpr(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(1336);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx);
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
  enterRule(_localctx, 196, DARICParser::RuleNumColours);
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
    setState(1337);
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

bool DARICParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 95: return strExprSempred(dynamic_cast<StrExprContext *>(context), predicateIndex);
    case 97: return numExprSempred(dynamic_cast<NumExprContext *>(context), predicateIndex);

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
    case 1: return precpred(_ctx, 8);
    case 2: return precpred(_ctx, 7);
    case 3: return precpred(_ctx, 6);
    case 4: return precpred(_ctx, 5);
    case 5: return precpred(_ctx, 4);
    case 6: return precpred(_ctx, 3);
    case 7: return precpred(_ctx, 1);

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
  "prog", "line", "content", "body", "linenumber", "stmt", "coreStmt", "stmtBREAKPOINT", 
  "stmtCASE", "stmtCHAIN", "stmtDATA", "stmtDIM", "stmtEND", "stmtRETURN", 
  "stmtDEFFN", "stmtDEFPROC", "stmtFOR", "stmtFORIN", "stmtCallFN", "stmtIF", 
  "stmtIFMultiline", "stmtLET", "stmtOSCLI", "stmtCallPROC", "stmtREAD", 
  "stmtRESTORE", "stmtSWAP", "stmtTRACEON", "stmtTRACEOFF", "stmtTYPE", 
  "stmtREPEAT", "stmtWHILE", "keyMouseStmt", "stmtINPUT", "stmtPRINT", "stmtMOUSE", 
  "stmtINKEY", "stmtINKEYS", "stmtGET", "stmtGETS", "stmtOperatorEqual", 
  "ioStmt", "stmtBPUTH", "stmtBGETH", "stmtPTRH", "stmtCLOSEH", "stmtLISTFILES", 
  "graphicsStmt", "stmtCLS", "stmtCOLOUR", "stmtCOLOURBG", "stmtGRAPHICS", 
  "stmtFLIP", "stmtCIRCLE", "stmtLINE", "stmtRECTANGLE", "stmtTRIANGLE", 
  "stmtPLOT", "stmtCLIPON", "stmtCLIPOFF", "stmtTEXT", "stmtTEXTRIGHT", 
  "stmtTEXTCENTRE", "stmtSHOWFPS", "when", "fnName", "literal", "var", "typeVar", 
  "numVar", "strVar", "justVar", "justNumberVar", "varName", "varNameInteger", 
  "varNameString", "varNameType", "varDecl", "varDeclWithDimension", "varList", 
  "functionVarList", "functionParList", "exprList", "printListItem", "printListTick", 
  "printListSeparator", "printList", "expr", "number", "numberInteger", 
  "numberHex", "numberBinary", "numberFloat", "strFunc", "string", "strExpr", 
  "numFunc", "numExpr", "numColours"
};

std::vector<std::string> DARICParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "'='", "'<>'", "'>'", "'>='", "'<'", "'<='", "", "", "", "", "", "", 
  "'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", "'>>'", "'+='", "'-='", "'*='", 
  "'/='", "'<<='", "'>>='", "", "'''", "'~'", "'#'", "':'", "','", "'$'", 
  "'('", "'%'", "')'", "';'", "'_'"
};

std::vector<std::string> DARICParser::_symbolicNames = {
  "", "BREAKPOINT", "CASE", "CHAIN", "DATA", "DEF", "DIM", "ELSE", "END", 
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
  "TIME", "PI", "SQR", "LN", "LOG", "EXP", "ATN", "TAN", "COS", "SIN", "ABS", 
  "ACS", "ASN", "DEG", "RAD", "SGN", "ASC", "LEN", "INSTR", "VAL", "TIMES", 
  "STRS", "STRINGS", "CHRS", "LEFTS", "MIDS", "RIGHTS", "RND", "RND0", "RND1", 
  "EQ", "NE", "GT", "GE", "LT", "LE", "NOT", "AND", "OR", "EOR", "MOD", 
  "DIV", "HAT", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "SHL", "SHR", "PLUS_E", 
  "MINUS_E", "MULTIPLY_E", "DIVIDE_E", "SHL_E", "SHR_E", "NEWLINE", "TICK", 
  "TILDE", "HASH", "COLON", "COMMA", "DOLLAR", "LPAREN", "PERCENT", "RPAREN", 
  "SEMICOLON", "UNDERSCORE", "COMMENT", "STRINGLITERAL", "PROC_NAME", "FN_INTEGER", 
  "FN_FLOAT", "FN_STRING", "VARIABLE_FLOAT", "VARIABLE_INTEGER", "VARIABLE_STRING", 
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
    0x3, 0xb5, 0x53e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x3, 0x2, 0x7, 0x2, 0xca, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0xcd, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x5, 0x3, 0xd3, 0xa, 0x3, 0x3, 0x3, 0x5, 0x3, 0xd6, 0xa, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0xda, 0xa, 0x3, 0x3, 0x3, 0x6, 0x3, 0xdd, 0xa, 
    0x3, 0xd, 0x3, 0xe, 0x3, 0xde, 0x3, 0x3, 0x5, 0x3, 0xe2, 0xa, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0xe6, 0xa, 0x3, 0x3, 0x4, 0x7, 0x4, 0xe9, 0xa, 
    0x4, 0xc, 0x4, 0xe, 0x4, 0xec, 0xb, 0x4, 0x3, 0x5, 0x7, 0x5, 0xef, 0xa, 
    0x5, 0xc, 0x5, 0xe, 0x5, 0xf2, 0xb, 0x5, 0x3, 0x5, 0x7, 0x5, 0xf5, 0xa, 
    0x5, 0xc, 0x5, 0xe, 0x5, 0xf8, 0xb, 0x5, 0x5, 0x5, 0xfa, 0xa, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x104, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0x11f, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x6, 0xa, 0x128, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 
    0x129, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x12e, 0xa, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x7, 0xc, 0x139, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x13c, 0xb, 0xc, 
    0x3, 0xd, 0x5, 0xd, 0x13f, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x7, 0xd, 0x145, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x148, 0xb, 0xd, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x14e, 0xa, 0xf, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x154, 0xa, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x5, 0x11, 0x15e, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x166, 0xa, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x5, 0x12, 0x16f, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x176, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x183, 0xa, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 
    0x15, 0x18c, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x6, 0x16, 0x193, 0xa, 0x16, 0xd, 0x16, 0xe, 0x16, 0x194, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x6, 0x16, 0x19a, 0xa, 0x16, 0xd, 0x16, 
    0xe, 0x16, 0x19b, 0x5, 0x16, 0x19e, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x17, 0x5, 0x17, 0x1a3, 0xa, 0x17, 0x3, 0x17, 0x5, 0x17, 0x1a6, 
    0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x1b0, 0xa, 0x17, 0xc, 0x17, 
    0xe, 0x17, 0x1b3, 0xb, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x1bb, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x1c3, 0xa, 0x1a, 
    0xc, 0x1a, 0xe, 0x1a, 0x1c6, 0xb, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x7, 0x1f, 0x1d9, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x1dc, 
    0xb, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x5, 0x22, 0x1f1, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x5, 0x23, 0x1f7, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 
    0x3, 0x24, 0x5, 0x24, 0x1fd, 0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 
    0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 
    0x228, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x5, 0x2b, 0x22f, 0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 
    0x5, 0x30, 0x242, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x5, 0x31, 0x25d, 0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
    0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x26a, 0xa, 0x33, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 
    0x34, 0x3, 0x34, 0x5, 0x34, 0x275, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
    0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 
    0x285, 0xa, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
    0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 
    0x298, 0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 
    0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
    0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x2b6, 0xa, 0x39, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
    0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
    0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
    0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
    0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x2e7, 0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 
    0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 
    0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
    0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 
    0x42, 0x3, 0x42, 0x7, 0x42, 0x31a, 0xa, 0x42, 0xc, 0x42, 0xe, 0x42, 
    0x31d, 0xb, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 
    0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x326, 0xa, 0x44, 0x3, 0x45, 0x3, 0x45, 
    0x3, 0x45, 0x5, 0x45, 0x32b, 0xa, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x334, 0xa, 0x47, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 
    0x47, 0x5, 0x47, 0x33d, 0xa, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 
    0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
    0x3, 0x47, 0x5, 0x47, 0x350, 0xa, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
    0x3, 0x47, 0x5, 0x47, 0x356, 0xa, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
    0x3, 0x47, 0x5, 0x47, 0x35c, 0xa, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 
    0x47, 0x367, 0xa, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x5, 0x48, 0x36e, 0xa, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 
    0x48, 0x3, 0x48, 0x3, 0x48, 0x5, 0x48, 0x37c, 0xa, 0x48, 0x3, 0x49, 
    0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x381, 0xa, 0x49, 0x3, 0x4a, 0x3, 0x4a, 
    0x5, 0x4a, 0x385, 0xa, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 
    0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
    0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x395, 0xa, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x7, 0x4f, 0x399, 0xa, 0x4f, 0xc, 0x4f, 0xe, 0x4f, 
    0x39c, 0xb, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
    0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 
    0x4f, 0x3b6, 0xa, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
    0x3, 0x50, 0x7, 0x50, 0x3bd, 0xa, 0x50, 0xc, 0x50, 0xe, 0x50, 0x3c0, 
    0xb, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 
    0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x3cb, 0xa, 0x50, 
    0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x7, 0x51, 0x3d0, 0xa, 0x51, 0xc, 0x51, 
    0xe, 0x51, 0x3d3, 0xb, 0x51, 0x3, 0x52, 0x5, 0x52, 0x3d6, 0xa, 0x52, 
    0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x3db, 0xa, 0x52, 0x3, 0x52, 
    0x7, 0x52, 0x3de, 0xa, 0x52, 0xc, 0x52, 0xe, 0x52, 0x3e1, 0xb, 0x52, 
    0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x7, 0x53, 0x3e6, 0xa, 0x53, 0xc, 0x53, 
    0xe, 0x53, 0x3e9, 0xb, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x7, 0x54, 
    0x3ee, 0xa, 0x54, 0xc, 0x54, 0xe, 0x54, 0x3f1, 0xb, 0x54, 0x3, 0x55, 
    0x5, 0x55, 0x3f4, 0xa, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 
    0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x3fe, 0xa, 0x55, 
    0x3, 0x56, 0x6, 0x56, 0x401, 0xa, 0x56, 0xd, 0x56, 0xe, 0x56, 0x402, 
    0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x408, 0xa, 0x57, 0x3, 0x58, 
    0x5, 0x58, 0x40b, 0xa, 0x58, 0x3, 0x58, 0x5, 0x58, 0x40e, 0xa, 0x58, 
    0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x7, 0x58, 0x414, 0xa, 0x58, 
    0xc, 0x58, 0xe, 0x58, 0x417, 0xb, 0x58, 0x3, 0x58, 0x5, 0x58, 0x41a, 
    0xa, 0x58, 0x3, 0x59, 0x3, 0x59, 0x5, 0x59, 0x41e, 0xa, 0x59, 0x3, 0x5a, 
    0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x425, 0xa, 0x5a, 
    0x3, 0x5b, 0x5, 0x5b, 0x428, 0xa, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5c, 
    0x3, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5e, 0x5, 0x5e, 0x431, 0xa, 0x5e, 
    0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 
    0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 
    0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 
    0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 
    0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 
    0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 
    0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 
    0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 
    0x3, 0x5f, 0x3, 0x5f, 0x5, 0x5f, 0x469, 0xa, 0x5f, 0x3, 0x60, 0x3, 0x60, 
    0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 
    0x61, 0x3, 0x61, 0x5, 0x61, 0x475, 0xa, 0x61, 0x3, 0x61, 0x3, 0x61, 
    0x3, 0x61, 0x7, 0x61, 0x47a, 0xa, 0x61, 0xc, 0x61, 0xe, 0x61, 0x47d, 
    0xb, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 
    0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
    0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 
    0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
    0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 
    0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
    0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 
    0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
    0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 
    0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
    0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 
    0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
    0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 
    0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
    0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 
    0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
    0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 
    0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
    0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 
    0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
    0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 
    0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
    0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x5, 0x62, 0x510, 0xa, 0x62, 0x3, 0x63, 
    0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 
    0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 
    0x5, 0x63, 0x520, 0xa, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 
    0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 
    0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 
    0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x7, 0x63, 0x537, 0xa, 0x63, 
    0xc, 0x63, 0xe, 0x63, 0x53a, 0xb, 0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 
    0x2, 0x4, 0xc0, 0xc4, 0x65, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
    0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 
    0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 
    0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 
    0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 
    0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 
    0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 0x2, 0xd, 0x4, 0x2, 0x24, 
    0x24, 0xa6, 0xa6, 0x4, 0x2, 0x18, 0x18, 0x1a, 0x1a, 0x3, 0x2, 0x5e, 
    0x5f, 0x3, 0x2, 0xa9, 0xab, 0x3, 0x2, 0x8e, 0x8f, 0x3, 0x2, 0x81, 0x86, 
    0x3, 0x2, 0x90, 0x91, 0x3, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x92, 0x93, 0x3, 
    0x2, 0x88, 0x8a, 0x3, 0x2, 0x3a, 0x41, 0x2, 0x5be, 0x2, 0xcb, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x6, 0xea, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xa, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xc, 0x103, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x10, 0x120, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x122, 0x3, 0x2, 0x2, 0x2, 0x14, 0x131, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x134, 0x3, 0x2, 0x2, 0x2, 0x18, 0x13e, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x149, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x14b, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x20, 0x159, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x163, 0x3, 0x2, 0x2, 0x2, 0x24, 0x173, 0x3, 0x2, 0x2, 0x2, 0x26, 0x17f, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x186, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x18d, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1b4, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x32, 0x1be, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x36, 0x1c9, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x1d2, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x40, 0x1e4, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x44, 0x1f2, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x48, 0x1fe, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x205, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x208, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x50, 0x20d, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x227, 0x3, 0x2, 0x2, 0x2, 0x54, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x230, 0x3, 0x2, 0x2, 0x2, 0x58, 0x235, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x238, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x241, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x62, 0x25e, 0x3, 0x2, 
    0x2, 0x2, 0x64, 0x269, 0x3, 0x2, 0x2, 0x2, 0x66, 0x274, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0x284, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x286, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x297, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x299, 0x3, 0x2, 0x2, 0x2, 0x70, 
    0x2b5, 0x3, 0x2, 0x2, 0x2, 0x72, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x74, 0x2e8, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x78, 0x2f6, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x301, 0x3, 0x2, 
    0x2, 0x2, 0x7e, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x80, 0x313, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x315, 0x3, 0x2, 0x2, 0x2, 0x84, 0x321, 0x3, 0x2, 0x2, 0x2, 
    0x86, 0x325, 0x3, 0x2, 0x2, 0x2, 0x88, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x8a, 
    0x32c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x366, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x37b, 
    0x3, 0x2, 0x2, 0x2, 0x90, 0x380, 0x3, 0x2, 0x2, 0x2, 0x92, 0x384, 0x3, 
    0x2, 0x2, 0x2, 0x94, 0x386, 0x3, 0x2, 0x2, 0x2, 0x96, 0x388, 0x3, 0x2, 
    0x2, 0x2, 0x98, 0x38a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x38c, 0x3, 0x2, 0x2, 
    0x2, 0x9c, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x3ca, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0xa4, 
    0x3e2, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x3ea, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x3fd, 
    0x3, 0x2, 0x2, 0x2, 0xaa, 0x400, 0x3, 0x2, 0x2, 0x2, 0xac, 0x407, 0x3, 
    0x2, 0x2, 0x2, 0xae, 0x40a, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x41d, 0x3, 0x2, 
    0x2, 0x2, 0xb2, 0x424, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x427, 0x3, 0x2, 0x2, 
    0x2, 0xb6, 0x42b, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x42d, 0x3, 0x2, 0x2, 0x2, 
    0xba, 0x430, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x468, 0x3, 0x2, 0x2, 0x2, 0xbe, 
    0x46a, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x474, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x50f, 
    0x3, 0x2, 0x2, 0x2, 0xc4, 0x51f, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x53b, 0x3, 
    0x2, 0x2, 0x2, 0xc8, 0xca, 0x5, 0x4, 0x3, 0x2, 0xc9, 0xc8, 0x3, 0x2, 
    0x2, 0x2, 0xca, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 
    0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xce, 0x3, 0x2, 0x2, 0x2, 
    0xcd, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x2, 0x2, 0x3, 0xcf, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xe6, 0x7, 0x9a, 0x2, 0x2, 0xd1, 0xd3, 
    0x5, 0xa, 0x6, 0x2, 0xd2, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x3, 
    0x2, 0x2, 0x2, 0xd3, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd6, 0x9, 0x2, 
    0x2, 0x2, 0xd5, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x3, 0x2, 0x2, 
    0x2, 0xd6, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xe6, 0x7, 0x9a, 0x2, 0x2, 
    0xd8, 0xda, 0x5, 0xa, 0x6, 0x2, 0xd9, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd9, 
    0xda, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdd, 
    0x5, 0xc, 0x7, 0x2, 0xdc, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x3, 
    0x2, 0x2, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x3, 0x2, 
    0x2, 0x2, 0xdf, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe2, 0x9, 0x2, 0x2, 
    0x2, 0xe1, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x3, 0x2, 0x2, 0x2, 
    0xe2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x7, 0x9a, 0x2, 0x2, 0xe4, 
    0xe6, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xd2, 
    0x3, 0x2, 0x2, 0x2, 0xe5, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0xe7, 0xe9, 0x5, 0xc, 0x7, 0x2, 0xe8, 0xe7, 0x3, 0x2, 
    0x2, 0x2, 0xe9, 0xec, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 
    0x2, 0xea, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xeb, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0xec, 0xea, 0x3, 0x2, 0x2, 0x2, 0xed, 0xef, 0x5, 0xc, 0x7, 0x2, 0xee, 
    0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xee, 
    0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xfa, 0x3, 
    0x2, 0x2, 0x2, 0xf2, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf5, 0x5, 0x4, 
    0x3, 0x2, 0xf4, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf8, 0x3, 0x2, 0x2, 
    0x2, 0xf6, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x3, 0x2, 0x2, 0x2, 
    0xf7, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf9, 
    0xf0, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xfa, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x7, 0xb3, 0x2, 0x2, 0xfc, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0xfd, 0x104, 0x7, 0x9e, 0x2, 0x2, 0xfe, 0x104, 0x5, 0xe, 
    0x8, 0x2, 0xff, 0x104, 0x5, 0x42, 0x22, 0x2, 0x100, 0x104, 0x5, 0x52, 
    0x2a, 0x2, 0x101, 0x104, 0x5, 0x54, 0x2b, 0x2, 0x102, 0x104, 0x5, 0x60, 
    0x31, 0x2, 0x103, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x103, 0xfe, 0x3, 0x2, 0x2, 
    0x2, 0x103, 0xff, 0x3, 0x2, 0x2, 0x2, 0x103, 0x100, 0x3, 0x2, 0x2, 0x2, 
    0x103, 0x101, 0x3, 0x2, 0x2, 0x2, 0x103, 0x102, 0x3, 0x2, 0x2, 0x2, 
    0x104, 0xd, 0x3, 0x2, 0x2, 0x2, 0x105, 0x11f, 0x5, 0x10, 0x9, 0x2, 0x106, 
    0x11f, 0x5, 0x12, 0xa, 0x2, 0x107, 0x11f, 0x5, 0x14, 0xb, 0x2, 0x108, 
    0x11f, 0x5, 0x16, 0xc, 0x2, 0x109, 0x11f, 0x5, 0x18, 0xd, 0x2, 0x10a, 
    0x11f, 0x5, 0x1a, 0xe, 0x2, 0x10b, 0x11f, 0x5, 0x1c, 0xf, 0x2, 0x10c, 
    0x11f, 0x5, 0x1e, 0x10, 0x2, 0x10d, 0x11f, 0x5, 0x20, 0x11, 0x2, 0x10e, 
    0x11f, 0x5, 0x22, 0x12, 0x2, 0x10f, 0x11f, 0x5, 0x24, 0x13, 0x2, 0x110, 
    0x11f, 0x5, 0x26, 0x14, 0x2, 0x111, 0x11f, 0x5, 0x28, 0x15, 0x2, 0x112, 
    0x11f, 0x5, 0x2a, 0x16, 0x2, 0x113, 0x11f, 0x5, 0x2c, 0x17, 0x2, 0x114, 
    0x11f, 0x5, 0x2e, 0x18, 0x2, 0x115, 0x11f, 0x5, 0x30, 0x19, 0x2, 0x116, 
    0x11f, 0x5, 0x32, 0x1a, 0x2, 0x117, 0x11f, 0x5, 0x34, 0x1b, 0x2, 0x118, 
    0x11f, 0x5, 0x36, 0x1c, 0x2, 0x119, 0x11f, 0x5, 0x38, 0x1d, 0x2, 0x11a, 
    0x11f, 0x5, 0x3a, 0x1e, 0x2, 0x11b, 0x11f, 0x5, 0x3c, 0x1f, 0x2, 0x11c, 
    0x11f, 0x5, 0x3e, 0x20, 0x2, 0x11d, 0x11f, 0x5, 0x40, 0x21, 0x2, 0x11e, 
    0x105, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x106, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x107, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x108, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x109, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x10b, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x10d, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x10f, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x110, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x111, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x112, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x113, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x114, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x115, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x116, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x117, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x119, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x11b, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x11d, 0x3, 0x2, 0x2, 0x2, 0x11f, 0xf, 0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 
    0x7, 0x3, 0x2, 0x2, 0x121, 0x11, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x7, 
    0x4, 0x2, 0x2, 0x123, 0x124, 0x5, 0xb0, 0x59, 0x2, 0x124, 0x125, 0x7, 
    0x1c, 0x2, 0x2, 0x125, 0x127, 0x7, 0x9a, 0x2, 0x2, 0x126, 0x128, 0x5, 
    0x82, 0x42, 0x2, 0x127, 0x126, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 
    0x2, 0x2, 0x2, 0x129, 0x127, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x3, 
    0x2, 0x2, 0x2, 0x12a, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 0x7, 
    0x20, 0x2, 0x2, 0x12c, 0x12e, 0x5, 0x8, 0x5, 0x2, 0x12d, 0x12b, 0x3, 
    0x2, 0x2, 0x2, 0x12d, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x3, 
    0x2, 0x2, 0x2, 0x12f, 0x130, 0x7, 0xb, 0x2, 0x2, 0x130, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x131, 0x132, 0x7, 0x5, 0x2, 0x2, 0x132, 0x133, 0x5, 0xc0, 
    0x61, 0x2, 0x133, 0x15, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 0x7, 0x6, 
    0x2, 0x2, 0x135, 0x13a, 0x5, 0x86, 0x44, 0x2, 0x136, 0x137, 0x7, 0x9f, 
    0x2, 0x2, 0x137, 0x139, 0x5, 0x86, 0x44, 0x2, 0x138, 0x136, 0x3, 0x2, 
    0x2, 0x2, 0x139, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x138, 0x3, 0x2, 
    0x2, 0x2, 0x13a, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x13c, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13f, 0x7, 0x19, 0x2, 
    0x2, 0x13e, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x3, 0x2, 0x2, 
    0x2, 0x13f, 0x140, 0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 0x7, 0x8, 0x2, 
    0x2, 0x141, 0x146, 0x5, 0x9e, 0x50, 0x2, 0x142, 0x143, 0x7, 0x9f, 0x2, 
    0x2, 0x143, 0x145, 0x5, 0x9e, 0x50, 0x2, 0x144, 0x142, 0x3, 0x2, 0x2, 
    0x2, 0x145, 0x148, 0x3, 0x2, 0x2, 0x2, 0x146, 0x144, 0x3, 0x2, 0x2, 
    0x2, 0x146, 0x147, 0x3, 0x2, 0x2, 0x2, 0x147, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0x148, 0x146, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x7, 0xa, 0x2, 0x2, 
    0x14a, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14d, 0x7, 0x27, 0x2, 0x2, 
    0x14c, 0x14e, 0x5, 0xb0, 0x59, 0x2, 0x14d, 0x14c, 0x3, 0x2, 0x2, 0x2, 
    0x14d, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x14f, 
    0x150, 0x7, 0x7, 0x2, 0x2, 0x150, 0x151, 0x5, 0x84, 0x43, 0x2, 0x151, 
    0x153, 0x7, 0xa1, 0x2, 0x2, 0x152, 0x154, 0x5, 0xa2, 0x52, 0x2, 0x153, 
    0x152, 0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 0x3, 0x2, 0x2, 0x2, 0x154, 
    0x155, 0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 0x7, 0xa3, 0x2, 0x2, 0x156, 
    0x157, 0x5, 0x8, 0x5, 0x2, 0x157, 0x158, 0x7, 0xd, 0x2, 0x2, 0x158, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x7, 0x7, 0x2, 0x2, 0x15a, 0x15b, 
    0x7, 0xa8, 0x2, 0x2, 0x15b, 0x15d, 0x7, 0xa1, 0x2, 0x2, 0x15c, 0x15e, 
    0x5, 0xa2, 0x52, 0x2, 0x15d, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 
    0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x160, 
    0x7, 0xa3, 0x2, 0x2, 0x160, 0x161, 0x5, 0x8, 0x5, 0x2, 0x161, 0x162, 
    0x7, 0xe, 0x2, 0x2, 0x162, 0x21, 0x3, 0x2, 0x2, 0x2, 0x163, 0x165, 0x7, 
    0x11, 0x2, 0x2, 0x164, 0x166, 0x7, 0x19, 0x2, 0x2, 0x165, 0x164, 0x3, 
    0x2, 0x2, 0x2, 0x165, 0x166, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x3, 
    0x2, 0x2, 0x2, 0x167, 0x168, 0x5, 0x92, 0x4a, 0x2, 0x168, 0x169, 0x7, 
    0x81, 0x2, 0x2, 0x169, 0x16a, 0x5, 0xc4, 0x63, 0x2, 0x16a, 0x16b, 0x7, 
    0x2c, 0x2, 0x2, 0x16b, 0x16e, 0x5, 0xc4, 0x63, 0x2, 0x16c, 0x16d, 0x7, 
    0x29, 0x2, 0x2, 0x16d, 0x16f, 0x5, 0xc4, 0x63, 0x2, 0x16e, 0x16c, 0x3, 
    0x2, 0x2, 0x2, 0x16e, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 0x3, 
    0x2, 0x2, 0x2, 0x170, 0x171, 0x5, 0x8, 0x5, 0x2, 0x171, 0x172, 0x7, 
    0x1b, 0x2, 0x2, 0x172, 0x23, 0x3, 0x2, 0x2, 0x2, 0x173, 0x175, 0x7, 
    0x11, 0x2, 0x2, 0x174, 0x176, 0x7, 0x19, 0x2, 0x2, 0x175, 0x174, 0x3, 
    0x2, 0x2, 0x2, 0x175, 0x176, 0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 0x3, 
    0x2, 0x2, 0x2, 0x177, 0x178, 0x5, 0x90, 0x49, 0x2, 0x178, 0x179, 0x7, 
    0x15, 0x2, 0x2, 0x179, 0x17a, 0x5, 0x90, 0x49, 0x2, 0x17a, 0x17b, 0x7, 
    0xa1, 0x2, 0x2, 0x17b, 0x17c, 0x7, 0xa3, 0x2, 0x2, 0x17c, 0x17d, 0x5, 
    0x8, 0x5, 0x2, 0x17d, 0x17e, 0x7, 0x1b, 0x2, 0x2, 0x17e, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x17f, 0x180, 0x5, 0x84, 0x43, 0x2, 0x180, 0x182, 0x7, 
    0xa1, 0x2, 0x2, 0x181, 0x183, 0x5, 0xa4, 0x53, 0x2, 0x182, 0x181, 0x3, 
    0x2, 0x2, 0x2, 0x182, 0x183, 0x3, 0x2, 0x2, 0x2, 0x183, 0x184, 0x3, 
    0x2, 0x2, 0x2, 0x184, 0x185, 0x7, 0xa3, 0x2, 0x2, 0x185, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x186, 0x187, 0x7, 0x14, 0x2, 0x2, 0x187, 0x188, 0x5, 
    0xb0, 0x59, 0x2, 0x188, 0x18b, 0x5, 0x6, 0x4, 0x2, 0x189, 0x18a, 0x7, 
    0x9, 0x2, 0x2, 0x18a, 0x18c, 0x5, 0x6, 0x4, 0x2, 0x18b, 0x189, 0x3, 
    0x2, 0x2, 0x2, 0x18b, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0x18d, 0x18e, 0x7, 0x14, 0x2, 0x2, 0x18e, 0x18f, 0x5, 0xb0, 
    0x59, 0x2, 0x18f, 0x190, 0x7, 0x2b, 0x2, 0x2, 0x190, 0x192, 0x7, 0x9a, 
    0x2, 0x2, 0x191, 0x193, 0x5, 0x4, 0x3, 0x2, 0x192, 0x191, 0x3, 0x2, 
    0x2, 0x2, 0x193, 0x194, 0x3, 0x2, 0x2, 0x2, 0x194, 0x192, 0x3, 0x2, 
    0x2, 0x2, 0x194, 0x195, 0x3, 0x2, 0x2, 0x2, 0x195, 0x19d, 0x3, 0x2, 
    0x2, 0x2, 0x196, 0x197, 0x7, 0x9, 0x2, 0x2, 0x197, 0x199, 0x7, 0x9a, 
    0x2, 0x2, 0x198, 0x19a, 0x5, 0x4, 0x3, 0x2, 0x199, 0x198, 0x3, 0x2, 
    0x2, 0x2, 0x19a, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x199, 0x3, 0x2, 
    0x2, 0x2, 0x19b, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19e, 0x3, 0x2, 
    0x2, 0x2, 0x19d, 0x196, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 0x3, 0x2, 
    0x2, 0x2, 0x19e, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a0, 0x7, 0xc, 
    0x2, 0x2, 0x1a0, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a3, 0x9, 0x3, 0x2, 
    0x2, 0x1a2, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x3, 0x2, 0x2, 
    0x2, 0x1a3, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a6, 0x7, 0x19, 0x2, 
    0x2, 0x1a5, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a4, 0x3, 0x2, 0x2, 
    0x2, 0x1a6, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x5, 0x9c, 0x4f, 
    0x2, 0x1a8, 0x1a9, 0x7, 0x81, 0x2, 0x2, 0x1a9, 0x1b1, 0x5, 0xb0, 0x59, 
    0x2, 0x1aa, 0x1ab, 0x7, 0x9f, 0x2, 0x2, 0x1ab, 0x1ac, 0x5, 0x9c, 0x4f, 
    0x2, 0x1ac, 0x1ad, 0x7, 0x81, 0x2, 0x2, 0x1ad, 0x1ae, 0x5, 0xb0, 0x59, 
    0x2, 0x1ae, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1aa, 0x3, 0x2, 0x2, 
    0x2, 0x1b0, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1af, 0x3, 0x2, 0x2, 
    0x2, 0x1b1, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x1b3, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x7, 0x1f, 0x2, 0x2, 
    0x1b5, 0x1b6, 0x5, 0xc0, 0x61, 0x2, 0x1b6, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x1b7, 0x1b8, 0x7, 0xa8, 0x2, 0x2, 0x1b8, 0x1ba, 0x7, 0xa1, 0x2, 0x2, 
    0x1b9, 0x1bb, 0x5, 0xa4, 0x53, 0x2, 0x1ba, 0x1b9, 0x3, 0x2, 0x2, 0x2, 
    0x1ba, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x3, 0x2, 0x2, 0x2, 
    0x1bc, 0x1bd, 0x7, 0xa3, 0x2, 0x2, 0x1bd, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x1be, 0x1bf, 0x7, 0x23, 0x2, 0x2, 0x1bf, 0x1c4, 0x5, 0x9c, 0x4f, 0x2, 
    0x1c0, 0x1c1, 0x7, 0x9f, 0x2, 0x2, 0x1c1, 0x1c3, 0x5, 0x9c, 0x4f, 0x2, 
    0x1c2, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c6, 0x3, 0x2, 0x2, 0x2, 
    0x1c4, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c5, 0x3, 0x2, 0x2, 0x2, 
    0x1c5, 0x33, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c7, 
    0x1c8, 0x7, 0x26, 0x2, 0x2, 0x1c8, 0x35, 0x3, 0x2, 0x2, 0x2, 0x1c9, 
    0x1ca, 0x7, 0x2a, 0x2, 0x2, 0x1ca, 0x1cb, 0x5, 0x90, 0x49, 0x2, 0x1cb, 
    0x1cc, 0x7, 0x9f, 0x2, 0x2, 0x1cc, 0x1cd, 0x5, 0x90, 0x49, 0x2, 0x1cd, 
    0x37, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cf, 0x7, 0x2e, 0x2, 0x2, 0x1cf, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d1, 0x7, 0x2f, 0x2, 0x2, 0x1d1, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d3, 0x7, 0x31, 0x2, 0x2, 0x1d3, 
    0x1d4, 0x5, 0x94, 0x4b, 0x2, 0x1d4, 0x1d5, 0x7, 0xa1, 0x2, 0x2, 0x1d5, 
    0x1da, 0x5, 0x90, 0x49, 0x2, 0x1d6, 0x1d7, 0x7, 0x9f, 0x2, 0x2, 0x1d7, 
    0x1d9, 0x5, 0x90, 0x49, 0x2, 0x1d8, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d9, 
    0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1da, 
    0x1db, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1dc, 
    0x1da, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1de, 0x7, 0xa3, 0x2, 0x2, 0x1de, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 0x7, 0x25, 0x2, 0x2, 0x1e0, 
    0x1e1, 0x5, 0x8, 0x5, 0x2, 0x1e1, 0x1e2, 0x7, 0x32, 0x2, 0x2, 0x1e2, 
    0x1e3, 0x5, 0xb0, 0x59, 0x2, 0x1e3, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1e4, 
    0x1e5, 0x7, 0x34, 0x2, 0x2, 0x1e5, 0x1e6, 0x5, 0xb0, 0x59, 0x2, 0x1e6, 
    0x1e7, 0x5, 0x8, 0x5, 0x2, 0x1e7, 0x1e8, 0x7, 0xf, 0x2, 0x2, 0x1e8, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1f1, 0x5, 0x44, 0x23, 0x2, 0x1ea, 
    0x1f1, 0x5, 0x46, 0x24, 0x2, 0x1eb, 0x1f1, 0x5, 0x48, 0x25, 0x2, 0x1ec, 
    0x1f1, 0x5, 0x4a, 0x26, 0x2, 0x1ed, 0x1f1, 0x5, 0x4c, 0x27, 0x2, 0x1ee, 
    0x1f1, 0x5, 0x4e, 0x28, 0x2, 0x1ef, 0x1f1, 0x5, 0x50, 0x29, 0x2, 0x1f0, 
    0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1f0, 
    0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1f0, 
    0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1f0, 
    0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x43, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f6, 
    0x7, 0x17, 0x2, 0x2, 0x1f3, 0x1f4, 0x5, 0xc0, 0x61, 0x2, 0x1f4, 0x1f5, 
    0x7, 0x9f, 0x2, 0x2, 0x1f5, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f3, 
    0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 
    0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f9, 0x5, 0xa0, 0x51, 0x2, 0x1f9, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fc, 0x7, 0x21, 0x2, 0x2, 0x1fb, 0x1fd, 
    0x5, 0xae, 0x58, 0x2, 0x1fc, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 
    0x3, 0x2, 0x2, 0x2, 0x1fd, 0x47, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1ff, 0x7, 
    0x35, 0x2, 0x2, 0x1ff, 0x200, 0x5, 0x96, 0x4c, 0x2, 0x200, 0x201, 0x7, 
    0x9f, 0x2, 0x2, 0x201, 0x202, 0x5, 0x96, 0x4c, 0x2, 0x202, 0x203, 0x7, 
    0x9f, 0x2, 0x2, 0x203, 0x204, 0x5, 0x96, 0x4c, 0x2, 0x204, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x205, 0x206, 0x7, 0x36, 0x2, 0x2, 0x206, 0x207, 0x5, 
    0xc4, 0x63, 0x2, 0x207, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x208, 0x209, 0x7, 
    0x37, 0x2, 0x2, 0x209, 0x20a, 0x5, 0xc4, 0x63, 0x2, 0x20a, 0x4d, 0x3, 
    0x2, 0x2, 0x2, 0x20b, 0x20c, 0x7, 0x38, 0x2, 0x2, 0x20c, 0x4f, 0x3, 
    0x2, 0x2, 0x2, 0x20d, 0x20e, 0x7, 0x39, 0x2, 0x2, 0x20e, 0x51, 0x3, 
    0x2, 0x2, 0x2, 0x20f, 0x210, 0x5, 0x9c, 0x4f, 0x2, 0x210, 0x211, 0x7, 
    0x96, 0x2, 0x2, 0x211, 0x212, 0x5, 0xc4, 0x63, 0x2, 0x212, 0x228, 0x3, 
    0x2, 0x2, 0x2, 0x213, 0x214, 0x5, 0x9c, 0x4f, 0x2, 0x214, 0x215, 0x7, 
    0x97, 0x2, 0x2, 0x215, 0x216, 0x5, 0xc4, 0x63, 0x2, 0x216, 0x228, 0x3, 
    0x2, 0x2, 0x2, 0x217, 0x218, 0x5, 0x9c, 0x4f, 0x2, 0x218, 0x219, 0x7, 
    0x94, 0x2, 0x2, 0x219, 0x21a, 0x5, 0xc4, 0x63, 0x2, 0x21a, 0x228, 0x3, 
    0x2, 0x2, 0x2, 0x21b, 0x21c, 0x5, 0x9c, 0x4f, 0x2, 0x21c, 0x21d, 0x7, 
    0x95, 0x2, 0x2, 0x21d, 0x21e, 0x5, 0xc4, 0x63, 0x2, 0x21e, 0x228, 0x3, 
    0x2, 0x2, 0x2, 0x21f, 0x220, 0x5, 0x9c, 0x4f, 0x2, 0x220, 0x221, 0x7, 
    0x98, 0x2, 0x2, 0x221, 0x222, 0x5, 0xc4, 0x63, 0x2, 0x222, 0x228, 0x3, 
    0x2, 0x2, 0x2, 0x223, 0x224, 0x5, 0x9c, 0x4f, 0x2, 0x224, 0x225, 0x7, 
    0x99, 0x2, 0x2, 0x225, 0x226, 0x5, 0xc4, 0x63, 0x2, 0x226, 0x228, 0x3, 
    0x2, 0x2, 0x2, 0x227, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x227, 0x213, 0x3, 
    0x2, 0x2, 0x2, 0x227, 0x217, 0x3, 0x2, 0x2, 0x2, 0x227, 0x21b, 0x3, 
    0x2, 0x2, 0x2, 0x227, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x227, 0x223, 0x3, 
    0x2, 0x2, 0x2, 0x228, 0x53, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22f, 0x5, 0x56, 
    0x2c, 0x2, 0x22a, 0x22f, 0x5, 0x58, 0x2d, 0x2, 0x22b, 0x22f, 0x5, 0x5a, 
    0x2e, 0x2, 0x22c, 0x22f, 0x5, 0x5c, 0x2f, 0x2, 0x22d, 0x22f, 0x5, 0x5e, 
    0x30, 0x2, 0x22e, 0x229, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22a, 0x3, 0x2, 
    0x2, 0x2, 0x22e, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22c, 0x3, 0x2, 
    0x2, 0x2, 0x22e, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x230, 0x231, 0x7, 0x43, 0x2, 0x2, 0x231, 0x232, 0x5, 0xc4, 0x63, 
    0x2, 0x232, 0x233, 0x7, 0x9f, 0x2, 0x2, 0x233, 0x234, 0x5, 0xc4, 0x63, 
    0x2, 0x234, 0x57, 0x3, 0x2, 0x2, 0x2, 0x235, 0x236, 0x7, 0x42, 0x2, 
    0x2, 0x236, 0x237, 0x5, 0xc4, 0x63, 0x2, 0x237, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x238, 0x239, 0x7, 0x4b, 0x2, 0x2, 0x239, 0x23a, 0x5, 0xc4, 0x63, 
    0x2, 0x23a, 0x23b, 0x7, 0x81, 0x2, 0x2, 0x23b, 0x23c, 0x5, 0xc4, 0x63, 
    0x2, 0x23c, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23e, 0x7, 0x44, 0x2, 
    0x2, 0x23e, 0x23f, 0x5, 0xc4, 0x63, 0x2, 0x23f, 0x5d, 0x3, 0x2, 0x2, 
    0x2, 0x240, 0x242, 0x7, 0x19, 0x2, 0x2, 0x241, 0x240, 0x3, 0x2, 0x2, 
    0x2, 0x241, 0x242, 0x3, 0x2, 0x2, 0x2, 0x242, 0x243, 0x3, 0x2, 0x2, 
    0x2, 0x243, 0x244, 0x5, 0x98, 0x4d, 0x2, 0x244, 0x245, 0x7, 0xa1, 0x2, 
    0x2, 0x245, 0x246, 0x7, 0xa3, 0x2, 0x2, 0x246, 0x247, 0x7, 0x81, 0x2, 
    0x2, 0x247, 0x248, 0x7, 0x47, 0x2, 0x2, 0x248, 0x249, 0x7, 0xa1, 0x2, 
    0x2, 0x249, 0x24a, 0x5, 0xc0, 0x61, 0x2, 0x24a, 0x24b, 0x7, 0xa3, 0x2, 
    0x2, 0x24b, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x25d, 0x5, 0x62, 0x32, 
    0x2, 0x24d, 0x25d, 0x5, 0x64, 0x33, 0x2, 0x24e, 0x25d, 0x5, 0x66, 0x34, 
    0x2, 0x24f, 0x25d, 0x5, 0x68, 0x35, 0x2, 0x250, 0x25d, 0x5, 0x6a, 0x36, 
    0x2, 0x251, 0x25d, 0x5, 0x6c, 0x37, 0x2, 0x252, 0x25d, 0x5, 0x6e, 0x38, 
    0x2, 0x253, 0x25d, 0x5, 0x70, 0x39, 0x2, 0x254, 0x25d, 0x5, 0x72, 0x3a, 
    0x2, 0x255, 0x25d, 0x5, 0x74, 0x3b, 0x2, 0x256, 0x25d, 0x5, 0x76, 0x3c, 
    0x2, 0x257, 0x25d, 0x5, 0x78, 0x3d, 0x2, 0x258, 0x25d, 0x5, 0x7a, 0x3e, 
    0x2, 0x259, 0x25d, 0x5, 0x7c, 0x3f, 0x2, 0x25a, 0x25d, 0x5, 0x7e, 0x40, 
    0x2, 0x25b, 0x25d, 0x5, 0x80, 0x41, 0x2, 0x25c, 0x24c, 0x3, 0x2, 0x2, 
    0x2, 0x25c, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x24e, 0x3, 0x2, 0x2, 
    0x2, 0x25c, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x250, 0x3, 0x2, 0x2, 
    0x2, 0x25c, 0x251, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x252, 0x3, 0x2, 0x2, 
    0x2, 0x25c, 0x253, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x254, 0x3, 0x2, 0x2, 
    0x2, 0x25c, 0x255, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x256, 0x3, 0x2, 0x2, 
    0x2, 0x25c, 0x257, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x258, 0x3, 0x2, 0x2, 
    0x2, 0x25c, 0x259, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25a, 0x3, 0x2, 0x2, 
    0x2, 0x25c, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x61, 0x3, 0x2, 0x2, 0x2, 
    0x25e, 0x25f, 0x7, 0x4e, 0x2, 0x2, 0x25f, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x260, 0x261, 0x7, 0x51, 0x2, 0x2, 0x261, 0x26a, 0x5, 0xc4, 0x63, 0x2, 
    0x262, 0x263, 0x7, 0x51, 0x2, 0x2, 0x263, 0x264, 0x5, 0xc4, 0x63, 0x2, 
    0x264, 0x265, 0x7, 0x9f, 0x2, 0x2, 0x265, 0x266, 0x5, 0xc4, 0x63, 0x2, 
    0x266, 0x267, 0x7, 0x9f, 0x2, 0x2, 0x267, 0x268, 0x5, 0xc4, 0x63, 0x2, 
    0x268, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x269, 0x260, 0x3, 0x2, 0x2, 0x2, 
    0x269, 0x262, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x65, 0x3, 0x2, 0x2, 0x2, 0x26b, 
    0x26c, 0x7, 0x52, 0x2, 0x2, 0x26c, 0x275, 0x5, 0xc4, 0x63, 0x2, 0x26d, 
    0x26e, 0x7, 0x52, 0x2, 0x2, 0x26e, 0x26f, 0x5, 0xc4, 0x63, 0x2, 0x26f, 
    0x270, 0x7, 0x9f, 0x2, 0x2, 0x270, 0x271, 0x5, 0xc4, 0x63, 0x2, 0x271, 
    0x272, 0x7, 0x9f, 0x2, 0x2, 0x272, 0x273, 0x5, 0xc4, 0x63, 0x2, 0x273, 
    0x275, 0x3, 0x2, 0x2, 0x2, 0x274, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x274, 
    0x26d, 0x3, 0x2, 0x2, 0x2, 0x275, 0x67, 0x3, 0x2, 0x2, 0x2, 0x276, 0x285, 
    0x7, 0x56, 0x2, 0x2, 0x277, 0x278, 0x7, 0x56, 0x2, 0x2, 0x278, 0x279, 
    0x5, 0xc4, 0x63, 0x2, 0x279, 0x27a, 0x7, 0x9f, 0x2, 0x2, 0x27a, 0x27b, 
    0x5, 0xc4, 0x63, 0x2, 0x27b, 0x285, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x27d, 
    0x7, 0x56, 0x2, 0x2, 0x27d, 0x285, 0x7, 0x4c, 0x2, 0x2, 0x27e, 0x27f, 
    0x7, 0x56, 0x2, 0x2, 0x27f, 0x280, 0x7, 0x4c, 0x2, 0x2, 0x280, 0x281, 
    0x5, 0xc4, 0x63, 0x2, 0x281, 0x282, 0x7, 0x9f, 0x2, 0x2, 0x282, 0x283, 
    0x5, 0xc4, 0x63, 0x2, 0x283, 0x285, 0x3, 0x2, 0x2, 0x2, 0x284, 0x276, 
    0x3, 0x2, 0x2, 0x2, 0x284, 0x277, 0x3, 0x2, 0x2, 0x2, 0x284, 0x27c, 
    0x3, 0x2, 0x2, 0x2, 0x284, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x285, 0x69, 0x3, 
    0x2, 0x2, 0x2, 0x286, 0x287, 0x7, 0x54, 0x2, 0x2, 0x287, 0x6b, 0x3, 
    0x2, 0x2, 0x2, 0x288, 0x289, 0x7, 0x4d, 0x2, 0x2, 0x289, 0x28a, 0x5, 
    0xc4, 0x63, 0x2, 0x28a, 0x28b, 0x7, 0x9f, 0x2, 0x2, 0x28b, 0x28c, 0x5, 
    0xc4, 0x63, 0x2, 0x28c, 0x28d, 0x7, 0x9f, 0x2, 0x2, 0x28d, 0x28e, 0x5, 
    0xc4, 0x63, 0x2, 0x28e, 0x298, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x290, 0x7, 
    0x4d, 0x2, 0x2, 0x290, 0x291, 0x7, 0x53, 0x2, 0x2, 0x291, 0x292, 0x5, 
    0xc4, 0x63, 0x2, 0x292, 0x293, 0x7, 0x9f, 0x2, 0x2, 0x293, 0x294, 0x5, 
    0xc4, 0x63, 0x2, 0x294, 0x295, 0x7, 0x9f, 0x2, 0x2, 0x295, 0x296, 0x5, 
    0xc4, 0x63, 0x2, 0x296, 0x298, 0x3, 0x2, 0x2, 0x2, 0x297, 0x288, 0x3, 
    0x2, 0x2, 0x2, 0x297, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x298, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0x299, 0x29a, 0x7, 0x57, 0x2, 0x2, 0x29a, 0x29b, 0x5, 0xc4, 
    0x63, 0x2, 0x29b, 0x29c, 0x7, 0x9f, 0x2, 0x2, 0x29c, 0x29d, 0x5, 0xc4, 
    0x63, 0x2, 0x29d, 0x29e, 0x7, 0x9f, 0x2, 0x2, 0x29e, 0x29f, 0x5, 0xc4, 
    0x63, 0x2, 0x29f, 0x2a0, 0x7, 0x9f, 0x2, 0x2, 0x2a0, 0x2a1, 0x5, 0xc4, 
    0x63, 0x2, 0x2a1, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a3, 0x7, 0x58, 
    0x2, 0x2, 0x2a3, 0x2a4, 0x5, 0xc4, 0x63, 0x2, 0x2a4, 0x2a5, 0x7, 0x9f, 
    0x2, 0x2, 0x2a5, 0x2a6, 0x5, 0xc4, 0x63, 0x2, 0x2a6, 0x2a7, 0x7, 0x9f, 
    0x2, 0x2, 0x2a7, 0x2a8, 0x5, 0xc4, 0x63, 0x2, 0x2a8, 0x2a9, 0x7, 0x9f, 
    0x2, 0x2, 0x2a9, 0x2aa, 0x5, 0xc4, 0x63, 0x2, 0x2aa, 0x2b6, 0x3, 0x2, 
    0x2, 0x2, 0x2ab, 0x2ac, 0x7, 0x58, 0x2, 0x2, 0x2ac, 0x2ad, 0x7, 0x53, 
    0x2, 0x2, 0x2ad, 0x2ae, 0x5, 0xc4, 0x63, 0x2, 0x2ae, 0x2af, 0x7, 0x9f, 
    0x2, 0x2, 0x2af, 0x2b0, 0x5, 0xc4, 0x63, 0x2, 0x2b0, 0x2b1, 0x7, 0x9f, 
    0x2, 0x2, 0x2b1, 0x2b2, 0x5, 0xc4, 0x63, 0x2, 0x2b2, 0x2b3, 0x7, 0x9f, 
    0x2, 0x2, 0x2b3, 0x2b4, 0x5, 0xc4, 0x63, 0x2, 0x2b4, 0x2b6, 0x3, 0x2, 
    0x2, 0x2, 0x2b5, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2ab, 0x3, 0x2, 
    0x2, 0x2, 0x2b6, 0x71, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b8, 0x7, 0x60, 
    0x2, 0x2, 0x2b8, 0x2b9, 0x5, 0xc4, 0x63, 0x2, 0x2b9, 0x2ba, 0x7, 0x9f, 
    0x2, 0x2, 0x2ba, 0x2bb, 0x5, 0xc4, 0x63, 0x2, 0x2bb, 0x2bc, 0x7, 0x9f, 
    0x2, 0x2, 0x2bc, 0x2bd, 0x5, 0xc4, 0x63, 0x2, 0x2bd, 0x2be, 0x7, 0x9f, 
    0x2, 0x2, 0x2be, 0x2bf, 0x5, 0xc4, 0x63, 0x2, 0x2bf, 0x2c0, 0x7, 0x9f, 
    0x2, 0x2, 0x2c0, 0x2c1, 0x5, 0xc4, 0x63, 0x2, 0x2c1, 0x2c2, 0x7, 0x9f, 
    0x2, 0x2, 0x2c2, 0x2c3, 0x5, 0xc4, 0x63, 0x2, 0x2c3, 0x2e7, 0x3, 0x2, 
    0x2, 0x2, 0x2c4, 0x2c5, 0x7, 0x60, 0x2, 0x2, 0x2c5, 0x2c6, 0x7, 0x53, 
    0x2, 0x2, 0x2c6, 0x2c7, 0x5, 0xc4, 0x63, 0x2, 0x2c7, 0x2c8, 0x7, 0x9f, 
    0x2, 0x2, 0x2c8, 0x2c9, 0x5, 0xc4, 0x63, 0x2, 0x2c9, 0x2ca, 0x7, 0x9f, 
    0x2, 0x2, 0x2ca, 0x2cb, 0x5, 0xc4, 0x63, 0x2, 0x2cb, 0x2cc, 0x7, 0x9f, 
    0x2, 0x2, 0x2cc, 0x2cd, 0x5, 0xc4, 0x63, 0x2, 0x2cd, 0x2ce, 0x7, 0x9f, 
    0x2, 0x2, 0x2ce, 0x2cf, 0x5, 0xc4, 0x63, 0x2, 0x2cf, 0x2d0, 0x7, 0x9f, 
    0x2, 0x2, 0x2d0, 0x2d1, 0x5, 0xc4, 0x63, 0x2, 0x2d1, 0x2e7, 0x3, 0x2, 
    0x2, 0x2, 0x2d2, 0x2d3, 0x7, 0x60, 0x2, 0x2, 0x2d3, 0x2d4, 0x7, 0x5b, 
    0x2, 0x2, 0x2d4, 0x2d5, 0x5, 0xc4, 0x63, 0x2, 0x2d5, 0x2d6, 0x7, 0x9f, 
    0x2, 0x2, 0x2d6, 0x2d7, 0x5, 0xc4, 0x63, 0x2, 0x2d7, 0x2d8, 0x7, 0x9f, 
    0x2, 0x2, 0x2d8, 0x2d9, 0x5, 0xc4, 0x63, 0x2, 0x2d9, 0x2da, 0x7, 0x9f, 
    0x2, 0x2, 0x2da, 0x2db, 0x5, 0xc4, 0x63, 0x2, 0x2db, 0x2dc, 0x7, 0x9f, 
    0x2, 0x2, 0x2dc, 0x2dd, 0x5, 0xc4, 0x63, 0x2, 0x2dd, 0x2de, 0x7, 0x9f, 
    0x2, 0x2, 0x2de, 0x2df, 0x5, 0xc4, 0x63, 0x2, 0x2df, 0x2e0, 0x7, 0x9f, 
    0x2, 0x2, 0x2e0, 0x2e1, 0x5, 0xc4, 0x63, 0x2, 0x2e1, 0x2e2, 0x7, 0x9f, 
    0x2, 0x2, 0x2e2, 0x2e3, 0x5, 0xc4, 0x63, 0x2, 0x2e3, 0x2e4, 0x7, 0x9f, 
    0x2, 0x2, 0x2e4, 0x2e5, 0x5, 0xc4, 0x63, 0x2, 0x2e5, 0x2e7, 0x3, 0x2, 
    0x2, 0x2, 0x2e6, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2c4, 0x3, 0x2, 
    0x2, 0x2, 0x2e6, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x73, 0x3, 0x2, 0x2, 
    0x2, 0x2e8, 0x2e9, 0x7, 0x59, 0x2, 0x2, 0x2e9, 0x2ea, 0x5, 0xc4, 0x63, 
    0x2, 0x2ea, 0x2eb, 0x7, 0x9f, 0x2, 0x2, 0x2eb, 0x2ec, 0x5, 0xc4, 0x63, 
    0x2, 0x2ec, 0x75, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2ee, 0x7, 0x4f, 0x2, 
    0x2, 0x2ee, 0x2ef, 0x5, 0xc4, 0x63, 0x2, 0x2ef, 0x2f0, 0x7, 0x9f, 0x2, 
    0x2, 0x2f0, 0x2f1, 0x5, 0xc4, 0x63, 0x2, 0x2f1, 0x2f2, 0x7, 0x9f, 0x2, 
    0x2, 0x2f2, 0x2f3, 0x5, 0xc4, 0x63, 0x2, 0x2f3, 0x2f4, 0x7, 0x9f, 0x2, 
    0x2, 0x2f4, 0x2f5, 0x5, 0xc4, 0x63, 0x2, 0x2f5, 0x77, 0x3, 0x2, 0x2, 
    0x2, 0x2f6, 0x2f7, 0x7, 0x50, 0x2, 0x2, 0x2f7, 0x79, 0x3, 0x2, 0x2, 
    0x2, 0x2f8, 0x2f9, 0x7, 0x5c, 0x2, 0x2, 0x2f9, 0x2fa, 0x5, 0xc4, 0x63, 
    0x2, 0x2fa, 0x2fb, 0x7, 0x9f, 0x2, 0x2, 0x2fb, 0x2fc, 0x5, 0xc4, 0x63, 
    0x2, 0x2fc, 0x2fd, 0x7, 0x9f, 0x2, 0x2, 0x2fd, 0x2fe, 0x5, 0xc4, 0x63, 
    0x2, 0x2fe, 0x2ff, 0x7, 0x9f, 0x2, 0x2, 0x2ff, 0x300, 0x5, 0xc4, 0x63, 
    0x2, 0x300, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x301, 0x302, 0x7, 0x5d, 0x2, 
    0x2, 0x302, 0x303, 0x5, 0xc4, 0x63, 0x2, 0x303, 0x304, 0x7, 0x9f, 0x2, 
    0x2, 0x304, 0x305, 0x5, 0xc4, 0x63, 0x2, 0x305, 0x306, 0x7, 0x9f, 0x2, 
    0x2, 0x306, 0x307, 0x5, 0xc4, 0x63, 0x2, 0x307, 0x308, 0x7, 0x9f, 0x2, 
    0x2, 0x308, 0x309, 0x5, 0xc0, 0x61, 0x2, 0x309, 0x7d, 0x3, 0x2, 0x2, 
    0x2, 0x30a, 0x30b, 0x9, 0x4, 0x2, 0x2, 0x30b, 0x30c, 0x5, 0xc4, 0x63, 
    0x2, 0x30c, 0x30d, 0x7, 0x9f, 0x2, 0x2, 0x30d, 0x30e, 0x5, 0xc4, 0x63, 
    0x2, 0x30e, 0x30f, 0x7, 0x9f, 0x2, 0x2, 0x30f, 0x310, 0x5, 0xc4, 0x63, 
    0x2, 0x310, 0x311, 0x7, 0x9f, 0x2, 0x2, 0x311, 0x312, 0x5, 0xc0, 0x61, 
    0x2, 0x312, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x313, 0x314, 0x7, 0x55, 0x2, 
    0x2, 0x314, 0x81, 0x3, 0x2, 0x2, 0x2, 0x315, 0x316, 0x7, 0x33, 0x2, 
    0x2, 0x316, 0x31b, 0x5, 0xb0, 0x59, 0x2, 0x317, 0x318, 0x7, 0x9f, 0x2, 
    0x2, 0x318, 0x31a, 0x5, 0xb0, 0x59, 0x2, 0x319, 0x317, 0x3, 0x2, 0x2, 
    0x2, 0x31a, 0x31d, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x319, 0x3, 0x2, 0x2, 
    0x2, 0x31b, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x31e, 0x3, 0x2, 0x2, 
    0x2, 0x31d, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x31e, 0x31f, 0x7, 0x9e, 0x2, 
    0x2, 0x31f, 0x320, 0x5, 0x8, 0x5, 0x2, 0x320, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0x321, 0x322, 0x9, 0x5, 0x2, 0x2, 0x322, 0x85, 0x3, 0x2, 0x2, 0x2, 0x323, 
    0x326, 0x5, 0xb2, 0x5a, 0x2, 0x324, 0x326, 0x5, 0xbe, 0x60, 0x2, 0x325, 
    0x323, 0x3, 0x2, 0x2, 0x2, 0x325, 0x324, 0x3, 0x2, 0x2, 0x2, 0x326, 
    0x87, 0x3, 0x2, 0x2, 0x2, 0x327, 0x32b, 0x5, 0x8c, 0x47, 0x2, 0x328, 
    0x32b, 0x5, 0x8e, 0x48, 0x2, 0x329, 0x32b, 0x5, 0x8a, 0x46, 0x2, 0x32a, 
    0x327, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x328, 0x3, 0x2, 0x2, 0x2, 0x32a, 
    0x329, 0x3, 0x2, 0x2, 0x2, 0x32b, 0x89, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x32d, 
    0x5, 0x9a, 0x4e, 0x2, 0x32d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x32f, 
    0x5, 0x94, 0x4b, 0x2, 0x32f, 0x330, 0x7, 0xa1, 0x2, 0x2, 0x330, 0x333, 
    0x5, 0xc4, 0x63, 0x2, 0x331, 0x332, 0x7, 0x9f, 0x2, 0x2, 0x332, 0x334, 
    0x5, 0xc4, 0x63, 0x2, 0x333, 0x331, 0x3, 0x2, 0x2, 0x2, 0x333, 0x334, 
    0x3, 0x2, 0x2, 0x2, 0x334, 0x335, 0x3, 0x2, 0x2, 0x2, 0x335, 0x336, 
    0x7, 0xa3, 0x2, 0x2, 0x336, 0x367, 0x3, 0x2, 0x2, 0x2, 0x337, 0x338, 
    0x5, 0x96, 0x4c, 0x2, 0x338, 0x339, 0x7, 0xa1, 0x2, 0x2, 0x339, 0x33c, 
    0x5, 0xc4, 0x63, 0x2, 0x33a, 0x33b, 0x7, 0x9f, 0x2, 0x2, 0x33b, 0x33d, 
    0x5, 0xc4, 0x63, 0x2, 0x33c, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x33d, 
    0x3, 0x2, 0x2, 0x2, 0x33d, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x33f, 
    0x7, 0xa3, 0x2, 0x2, 0x33f, 0x367, 0x3, 0x2, 0x2, 0x2, 0x340, 0x341, 
    0x5, 0x8a, 0x46, 0x2, 0x341, 0x342, 0x7, 0xa1, 0x2, 0x2, 0x342, 0x343, 
    0x5, 0xc4, 0x63, 0x2, 0x343, 0x344, 0x7, 0xa3, 0x2, 0x2, 0x344, 0x345, 
    0x5, 0x96, 0x4c, 0x2, 0x345, 0x367, 0x3, 0x2, 0x2, 0x2, 0x346, 0x347, 
    0x5, 0x8a, 0x46, 0x2, 0x347, 0x348, 0x7, 0xa1, 0x2, 0x2, 0x348, 0x349, 
    0x5, 0xc4, 0x63, 0x2, 0x349, 0x34a, 0x7, 0xa3, 0x2, 0x2, 0x34a, 0x34b, 
    0x5, 0x94, 0x4b, 0x2, 0x34b, 0x367, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x34d, 
    0x7, 0xaa, 0x2, 0x2, 0x34d, 0x34f, 0x7, 0xa1, 0x2, 0x2, 0x34e, 0x350, 
    0x5, 0xa4, 0x53, 0x2, 0x34f, 0x34e, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x350, 
    0x3, 0x2, 0x2, 0x2, 0x350, 0x351, 0x3, 0x2, 0x2, 0x2, 0x351, 0x367, 
    0x7, 0xa3, 0x2, 0x2, 0x352, 0x353, 0x7, 0xa9, 0x2, 0x2, 0x353, 0x355, 
    0x7, 0xa1, 0x2, 0x2, 0x354, 0x356, 0x5, 0xa4, 0x53, 0x2, 0x355, 0x354, 
    0x3, 0x2, 0x2, 0x2, 0x355, 0x356, 0x3, 0x2, 0x2, 0x2, 0x356, 0x357, 
    0x3, 0x2, 0x2, 0x2, 0x357, 0x367, 0x7, 0xa3, 0x2, 0x2, 0x358, 0x359, 
    0x7, 0xab, 0x2, 0x2, 0x359, 0x35b, 0x7, 0xa1, 0x2, 0x2, 0x35a, 0x35c, 
    0x5, 0xa4, 0x53, 0x2, 0x35b, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x35b, 0x35c, 
    0x3, 0x2, 0x2, 0x2, 0x35c, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x367, 
    0x7, 0xa3, 0x2, 0x2, 0x35e, 0x367, 0x5, 0x94, 0x4b, 0x2, 0x35f, 0x367, 
    0x5, 0x96, 0x4c, 0x2, 0x360, 0x361, 0x5, 0x8a, 0x46, 0x2, 0x361, 0x362, 
    0x5, 0x94, 0x4b, 0x2, 0x362, 0x367, 0x3, 0x2, 0x2, 0x2, 0x363, 0x364, 
    0x5, 0x8a, 0x46, 0x2, 0x364, 0x365, 0x5, 0x96, 0x4c, 0x2, 0x365, 0x367, 
    0x3, 0x2, 0x2, 0x2, 0x366, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x366, 0x337, 
    0x3, 0x2, 0x2, 0x2, 0x366, 0x340, 0x3, 0x2, 0x2, 0x2, 0x366, 0x346, 
    0x3, 0x2, 0x2, 0x2, 0x366, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x366, 0x352, 
    0x3, 0x2, 0x2, 0x2, 0x366, 0x358, 0x3, 0x2, 0x2, 0x2, 0x366, 0x35e, 
    0x3, 0x2, 0x2, 0x2, 0x366, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x366, 0x360, 
    0x3, 0x2, 0x2, 0x2, 0x366, 0x363, 0x3, 0x2, 0x2, 0x2, 0x367, 0x8d, 0x3, 
    0x2, 0x2, 0x2, 0x368, 0x369, 0x5, 0x98, 0x4d, 0x2, 0x369, 0x36a, 0x7, 
    0xa1, 0x2, 0x2, 0x36a, 0x36d, 0x5, 0xc4, 0x63, 0x2, 0x36b, 0x36c, 0x7, 
    0x9f, 0x2, 0x2, 0x36c, 0x36e, 0x5, 0xc4, 0x63, 0x2, 0x36d, 0x36b, 0x3, 
    0x2, 0x2, 0x2, 0x36d, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x36f, 0x3, 
    0x2, 0x2, 0x2, 0x36f, 0x370, 0x7, 0xa3, 0x2, 0x2, 0x370, 0x37c, 0x3, 
    0x2, 0x2, 0x2, 0x371, 0x372, 0x5, 0x8a, 0x46, 0x2, 0x372, 0x373, 0x7, 
    0xa1, 0x2, 0x2, 0x373, 0x374, 0x5, 0xc4, 0x63, 0x2, 0x374, 0x375, 0x7, 
    0xa3, 0x2, 0x2, 0x375, 0x376, 0x5, 0x98, 0x4d, 0x2, 0x376, 0x37c, 0x3, 
    0x2, 0x2, 0x2, 0x377, 0x37c, 0x5, 0x98, 0x4d, 0x2, 0x378, 0x379, 0x5, 
    0x8a, 0x46, 0x2, 0x379, 0x37a, 0x5, 0x98, 0x4d, 0x2, 0x37a, 0x37c, 0x3, 
    0x2, 0x2, 0x2, 0x37b, 0x368, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x371, 0x3, 
    0x2, 0x2, 0x2, 0x37b, 0x377, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x378, 0x3, 
    0x2, 0x2, 0x2, 0x37c, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x381, 0x5, 0x94, 
    0x4b, 0x2, 0x37e, 0x381, 0x5, 0x96, 0x4c, 0x2, 0x37f, 0x381, 0x5, 0x98, 
    0x4d, 0x2, 0x380, 0x37d, 0x3, 0x2, 0x2, 0x2, 0x380, 0x37e, 0x3, 0x2, 
    0x2, 0x2, 0x380, 0x37f, 0x3, 0x2, 0x2, 0x2, 0x381, 0x91, 0x3, 0x2, 0x2, 
    0x2, 0x382, 0x385, 0x5, 0x94, 0x4b, 0x2, 0x383, 0x385, 0x5, 0x96, 0x4c, 
    0x2, 0x384, 0x382, 0x3, 0x2, 0x2, 0x2, 0x384, 0x383, 0x3, 0x2, 0x2, 
    0x2, 0x385, 0x93, 0x3, 0x2, 0x2, 0x2, 0x386, 0x387, 0x7, 0xac, 0x2, 
    0x2, 0x387, 0x95, 0x3, 0x2, 0x2, 0x2, 0x388, 0x389, 0x7, 0xad, 0x2, 
    0x2, 0x389, 0x97, 0x3, 0x2, 0x2, 0x2, 0x38a, 0x38b, 0x7, 0xae, 0x2, 
    0x2, 0x38b, 0x99, 0x3, 0x2, 0x2, 0x2, 0x38c, 0x38d, 0x7, 0xaf, 0x2, 
    0x2, 0x38d, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x38e, 0x3b6, 0x5, 0x90, 0x49, 
    0x2, 0x38f, 0x39a, 0x5, 0x90, 0x49, 0x2, 0x390, 0x391, 0x7, 0xa1, 0x2, 
    0x2, 0x391, 0x394, 0x5, 0xc4, 0x63, 0x2, 0x392, 0x393, 0x7, 0x9f, 0x2, 
    0x2, 0x393, 0x395, 0x5, 0xc4, 0x63, 0x2, 0x394, 0x392, 0x3, 0x2, 0x2, 
    0x2, 0x394, 0x395, 0x3, 0x2, 0x2, 0x2, 0x395, 0x396, 0x3, 0x2, 0x2, 
    0x2, 0x396, 0x397, 0x7, 0xa3, 0x2, 0x2, 0x397, 0x399, 0x3, 0x2, 0x2, 
    0x2, 0x398, 0x390, 0x3, 0x2, 0x2, 0x2, 0x399, 0x39c, 0x3, 0x2, 0x2, 
    0x2, 0x39a, 0x398, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x39b, 0x3, 0x2, 0x2, 
    0x2, 0x39b, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x39c, 0x39a, 0x3, 0x2, 0x2, 
    0x2, 0x39d, 0x39e, 0x5, 0x8a, 0x46, 0x2, 0x39e, 0x39f, 0x5, 0x94, 0x4b, 
    0x2, 0x39f, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x3a1, 0x5, 0x8a, 0x46, 
    0x2, 0x3a1, 0x3a2, 0x5, 0x96, 0x4c, 0x2, 0x3a2, 0x3b6, 0x3, 0x2, 0x2, 
    0x2, 0x3a3, 0x3a4, 0x5, 0x8a, 0x46, 0x2, 0x3a4, 0x3a5, 0x7, 0xa1, 0x2, 
    0x2, 0x3a5, 0x3a6, 0x5, 0xc4, 0x63, 0x2, 0x3a6, 0x3a7, 0x7, 0xa3, 0x2, 
    0x2, 0x3a7, 0x3a8, 0x5, 0x94, 0x4b, 0x2, 0x3a8, 0x3b6, 0x3, 0x2, 0x2, 
    0x2, 0x3a9, 0x3aa, 0x5, 0x8a, 0x46, 0x2, 0x3aa, 0x3ab, 0x7, 0xa1, 0x2, 
    0x2, 0x3ab, 0x3ac, 0x5, 0xc4, 0x63, 0x2, 0x3ac, 0x3ad, 0x7, 0xa3, 0x2, 
    0x2, 0x3ad, 0x3ae, 0x5, 0x96, 0x4c, 0x2, 0x3ae, 0x3b6, 0x3, 0x2, 0x2, 
    0x2, 0x3af, 0x3b6, 0x5, 0x8a, 0x46, 0x2, 0x3b0, 0x3b1, 0x5, 0x8a, 0x46, 
    0x2, 0x3b1, 0x3b2, 0x7, 0xa1, 0x2, 0x2, 0x3b2, 0x3b3, 0x5, 0xc4, 0x63, 
    0x2, 0x3b3, 0x3b4, 0x7, 0xa3, 0x2, 0x2, 0x3b4, 0x3b6, 0x3, 0x2, 0x2, 
    0x2, 0x3b5, 0x38e, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x38f, 0x3, 0x2, 0x2, 
    0x2, 0x3b5, 0x39d, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3a0, 0x3, 0x2, 0x2, 
    0x2, 0x3b5, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3a9, 0x3, 0x2, 0x2, 
    0x2, 0x3b5, 0x3af, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b0, 0x3, 0x2, 0x2, 
    0x2, 0x3b6, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3b8, 0x5, 0x90, 0x49, 
    0x2, 0x3b8, 0x3b9, 0x7, 0xa1, 0x2, 0x2, 0x3b9, 0x3be, 0x5, 0xc4, 0x63, 
    0x2, 0x3ba, 0x3bb, 0x7, 0x9f, 0x2, 0x2, 0x3bb, 0x3bd, 0x5, 0xc4, 0x63, 
    0x2, 0x3bc, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3bd, 0x3c0, 0x3, 0x2, 0x2, 
    0x2, 0x3be, 0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3be, 0x3bf, 0x3, 0x2, 0x2, 
    0x2, 0x3bf, 0x3c1, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3be, 0x3, 0x2, 0x2, 
    0x2, 0x3c1, 0x3c2, 0x7, 0xa3, 0x2, 0x2, 0x3c2, 0x3cb, 0x3, 0x2, 0x2, 
    0x2, 0x3c3, 0x3c4, 0x5, 0x8a, 0x46, 0x2, 0x3c4, 0x3c5, 0x7, 0xa1, 0x2, 
    0x2, 0x3c5, 0x3c6, 0x5, 0xc4, 0x63, 0x2, 0x3c6, 0x3c7, 0x7, 0x9f, 0x2, 
    0x2, 0x3c7, 0x3c8, 0x5, 0x94, 0x4b, 0x2, 0x3c8, 0x3c9, 0x7, 0xa3, 0x2, 
    0x2, 0x3c9, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3b7, 0x3, 0x2, 0x2, 
    0x2, 0x3ca, 0x3c3, 0x3, 0x2, 0x2, 0x2, 0x3cb, 0x9f, 0x3, 0x2, 0x2, 0x2, 
    0x3cc, 0x3d1, 0x5, 0x9c, 0x4f, 0x2, 0x3cd, 0x3ce, 0x7, 0x9f, 0x2, 0x2, 
    0x3ce, 0x3d0, 0x5, 0x9c, 0x4f, 0x2, 0x3cf, 0x3cd, 0x3, 0x2, 0x2, 0x2, 
    0x3d0, 0x3d3, 0x3, 0x2, 0x2, 0x2, 0x3d1, 0x3cf, 0x3, 0x2, 0x2, 0x2, 
    0x3d1, 0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3d2, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x3d3, 
    0x3d1, 0x3, 0x2, 0x2, 0x2, 0x3d4, 0x3d6, 0x7, 0x27, 0x2, 0x2, 0x3d5, 
    0x3d4, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d6, 0x3, 0x2, 0x2, 0x2, 0x3d6, 
    0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3df, 0x5, 0x90, 0x49, 0x2, 0x3d8, 
    0x3da, 0x7, 0x9f, 0x2, 0x2, 0x3d9, 0x3db, 0x7, 0x27, 0x2, 0x2, 0x3da, 
    0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3db, 0x3, 0x2, 0x2, 0x2, 0x3db, 
    0x3dc, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3de, 0x5, 0x90, 0x49, 0x2, 0x3dd, 
    0x3d8, 0x3, 0x2, 0x2, 0x2, 0x3de, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3df, 
    0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3df, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3e0, 
    0xa3, 0x3, 0x2, 0x2, 0x2, 0x3e1, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e7, 
    0x5, 0xb0, 0x59, 0x2, 0x3e3, 0x3e4, 0x7, 0x9f, 0x2, 0x2, 0x3e4, 0x3e6, 
    0x5, 0xb0, 0x59, 0x2, 0x3e5, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e6, 0x3e9, 
    0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3e8, 
    0x3, 0x2, 0x2, 0x2, 0x3e8, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3e7, 0x3, 
    0x2, 0x2, 0x2, 0x3ea, 0x3ef, 0x5, 0xb0, 0x59, 0x2, 0x3eb, 0x3ec, 0x7, 
    0x9f, 0x2, 0x2, 0x3ec, 0x3ee, 0x5, 0xb0, 0x59, 0x2, 0x3ed, 0x3eb, 0x3, 
    0x2, 0x2, 0x2, 0x3ee, 0x3f1, 0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3ed, 0x3, 
    0x2, 0x2, 0x2, 0x3ef, 0x3f0, 0x3, 0x2, 0x2, 0x2, 0x3f0, 0xa7, 0x3, 0x2, 
    0x2, 0x2, 0x3f1, 0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3f2, 0x3f4, 0x7, 0x9c, 
    0x2, 0x2, 0x3f3, 0x3f2, 0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3f4, 0x3, 0x2, 
    0x2, 0x2, 0x3f4, 0x3f5, 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3fe, 0x5, 0xb0, 
    0x59, 0x2, 0x3f6, 0x3f7, 0x7, 0x28, 0x2, 0x2, 0x3f7, 0x3f8, 0x7, 0xa1, 
    0x2, 0x2, 0x3f8, 0x3f9, 0x5, 0xc4, 0x63, 0x2, 0x3f9, 0x3fa, 0x7, 0xa3, 
    0x2, 0x2, 0x3fa, 0x3fe, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fc, 0x7, 0x28, 
    0x2, 0x2, 0x3fc, 0x3fe, 0x5, 0xc4, 0x63, 0x2, 0x3fd, 0x3f3, 0x3, 0x2, 
    0x2, 0x2, 0x3fd, 0x3f6, 0x3, 0x2, 0x2, 0x2, 0x3fd, 0x3fb, 0x3, 0x2, 
    0x2, 0x2, 0x3fe, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0x401, 0x7, 0x9b, 
    0x2, 0x2, 0x400, 0x3ff, 0x3, 0x2, 0x2, 0x2, 0x401, 0x402, 0x3, 0x2, 
    0x2, 0x2, 0x402, 0x400, 0x3, 0x2, 0x2, 0x2, 0x402, 0x403, 0x3, 0x2, 
    0x2, 0x2, 0x403, 0xab, 0x3, 0x2, 0x2, 0x2, 0x404, 0x408, 0x7, 0x9f, 
    0x2, 0x2, 0x405, 0x408, 0x7, 0xa4, 0x2, 0x2, 0x406, 0x408, 0x5, 0xaa, 
    0x56, 0x2, 0x407, 0x404, 0x3, 0x2, 0x2, 0x2, 0x407, 0x405, 0x3, 0x2, 
    0x2, 0x2, 0x407, 0x406, 0x3, 0x2, 0x2, 0x2, 0x408, 0xad, 0x3, 0x2, 0x2, 
    0x2, 0x409, 0x40b, 0x5, 0xaa, 0x56, 0x2, 0x40a, 0x409, 0x3, 0x2, 0x2, 
    0x2, 0x40a, 0x40b, 0x3, 0x2, 0x2, 0x2, 0x40b, 0x40d, 0x3, 0x2, 0x2, 
    0x2, 0x40c, 0x40e, 0x7, 0xa4, 0x2, 0x2, 0x40d, 0x40c, 0x3, 0x2, 0x2, 
    0x2, 0x40d, 0x40e, 0x3, 0x2, 0x2, 0x2, 0x40e, 0x40f, 0x3, 0x2, 0x2, 
    0x2, 0x40f, 0x415, 0x5, 0xa8, 0x55, 0x2, 0x410, 0x411, 0x5, 0xac, 0x57, 
    0x2, 0x411, 0x412, 0x5, 0xa8, 0x55, 0x2, 0x412, 0x414, 0x3, 0x2, 0x2, 
    0x2, 0x413, 0x410, 0x3, 0x2, 0x2, 0x2, 0x414, 0x417, 0x3, 0x2, 0x2, 
    0x2, 0x415, 0x413, 0x3, 0x2, 0x2, 0x2, 0x415, 0x416, 0x3, 0x2, 0x2, 
    0x2, 0x416, 0x419, 0x3, 0x2, 0x2, 0x2, 0x417, 0x415, 0x3, 0x2, 0x2, 
    0x2, 0x418, 0x41a, 0x7, 0xa4, 0x2, 0x2, 0x419, 0x418, 0x3, 0x2, 0x2, 
    0x2, 0x419, 0x41a, 0x3, 0x2, 0x2, 0x2, 0x41a, 0xaf, 0x3, 0x2, 0x2, 0x2, 
    0x41b, 0x41e, 0x5, 0xc4, 0x63, 0x2, 0x41c, 0x41e, 0x5, 0xc0, 0x61, 0x2, 
    0x41d, 0x41b, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x41c, 0x3, 0x2, 0x2, 0x2, 
    0x41e, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x41f, 0x425, 0x5, 0xb4, 0x5b, 0x2, 
    0x420, 0x425, 0x5, 0xba, 0x5e, 0x2, 0x421, 0x425, 0x5, 0xb6, 0x5c, 0x2, 
    0x422, 0x425, 0x5, 0xb8, 0x5d, 0x2, 0x423, 0x425, 0x5, 0xc6, 0x64, 0x2, 
    0x424, 0x41f, 0x3, 0x2, 0x2, 0x2, 0x424, 0x420, 0x3, 0x2, 0x2, 0x2, 
    0x424, 0x421, 0x3, 0x2, 0x2, 0x2, 0x424, 0x422, 0x3, 0x2, 0x2, 0x2, 
    0x424, 0x423, 0x3, 0x2, 0x2, 0x2, 0x425, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x426, 
    0x428, 0x9, 0x6, 0x2, 0x2, 0x427, 0x426, 0x3, 0x2, 0x2, 0x2, 0x427, 
    0x428, 0x3, 0x2, 0x2, 0x2, 0x428, 0x429, 0x3, 0x2, 0x2, 0x2, 0x429, 
    0x42a, 0x7, 0xb3, 0x2, 0x2, 0x42a, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x42b, 
    0x42c, 0x7, 0xb1, 0x2, 0x2, 0x42c, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x42d, 
    0x42e, 0x7, 0xb2, 0x2, 0x2, 0x42e, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x42f, 
    0x431, 0x9, 0x6, 0x2, 0x2, 0x430, 0x42f, 0x3, 0x2, 0x2, 0x2, 0x430, 
    0x431, 0x3, 0x2, 0x2, 0x2, 0x431, 0x432, 0x3, 0x2, 0x2, 0x2, 0x432, 
    0x433, 0x7, 0xb4, 0x2, 0x2, 0x433, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x434, 
    0x469, 0x7, 0x77, 0x2, 0x2, 0x435, 0x436, 0x7, 0x7a, 0x2, 0x2, 0x436, 
    0x469, 0x5, 0xc4, 0x63, 0x2, 0x437, 0x438, 0x7, 0x7a, 0x2, 0x2, 0x438, 
    0x439, 0x7, 0xa1, 0x2, 0x2, 0x439, 0x43a, 0x5, 0xc4, 0x63, 0x2, 0x43a, 
    0x43b, 0x7, 0xa3, 0x2, 0x2, 0x43b, 0x469, 0x3, 0x2, 0x2, 0x2, 0x43c, 
    0x43d, 0x7, 0x7b, 0x2, 0x2, 0x43d, 0x43e, 0x7, 0xa1, 0x2, 0x2, 0x43e, 
    0x43f, 0x5, 0xc0, 0x61, 0x2, 0x43f, 0x440, 0x7, 0x9f, 0x2, 0x2, 0x440, 
    0x441, 0x5, 0xc4, 0x63, 0x2, 0x441, 0x442, 0x7, 0xa3, 0x2, 0x2, 0x442, 
    0x469, 0x3, 0x2, 0x2, 0x2, 0x443, 0x444, 0x7, 0x7c, 0x2, 0x2, 0x444, 
    0x445, 0x7, 0xa1, 0x2, 0x2, 0x445, 0x446, 0x5, 0xc0, 0x61, 0x2, 0x446, 
    0x447, 0x7, 0x9f, 0x2, 0x2, 0x447, 0x448, 0x5, 0xc4, 0x63, 0x2, 0x448, 
    0x449, 0x7, 0x9f, 0x2, 0x2, 0x449, 0x44a, 0x5, 0xc4, 0x63, 0x2, 0x44a, 
    0x44b, 0x7, 0xa3, 0x2, 0x2, 0x44b, 0x469, 0x3, 0x2, 0x2, 0x2, 0x44c, 
    0x44d, 0x7, 0x7c, 0x2, 0x2, 0x44d, 0x44e, 0x7, 0xa1, 0x2, 0x2, 0x44e, 
    0x44f, 0x5, 0xc0, 0x61, 0x2, 0x44f, 0x450, 0x7, 0x9f, 0x2, 0x2, 0x450, 
    0x451, 0x5, 0xc4, 0x63, 0x2, 0x451, 0x452, 0x7, 0xa3, 0x2, 0x2, 0x452, 
    0x469, 0x3, 0x2, 0x2, 0x2, 0x453, 0x454, 0x7, 0x7d, 0x2, 0x2, 0x454, 
    0x455, 0x7, 0xa1, 0x2, 0x2, 0x455, 0x456, 0x5, 0xc0, 0x61, 0x2, 0x456, 
    0x457, 0x7, 0x9f, 0x2, 0x2, 0x457, 0x458, 0x5, 0xc4, 0x63, 0x2, 0x458, 
    0x459, 0x7, 0xa3, 0x2, 0x2, 0x459, 0x469, 0x3, 0x2, 0x2, 0x2, 0x45a, 
    0x45b, 0x7, 0x78, 0x2, 0x2, 0x45b, 0x469, 0x5, 0xc4, 0x63, 0x2, 0x45c, 
    0x45d, 0x7, 0x78, 0x2, 0x2, 0x45d, 0x45e, 0x7, 0x9c, 0x2, 0x2, 0x45e, 
    0x469, 0x5, 0xc4, 0x63, 0x2, 0x45f, 0x460, 0x7, 0x79, 0x2, 0x2, 0x460, 
    0x461, 0x7, 0xa1, 0x2, 0x2, 0x461, 0x462, 0x5, 0xc4, 0x63, 0x2, 0x462, 
    0x463, 0x7, 0x9f, 0x2, 0x2, 0x463, 0x464, 0x5, 0xc0, 0x61, 0x2, 0x464, 
    0x465, 0x7, 0xa3, 0x2, 0x2, 0x465, 0x469, 0x3, 0x2, 0x2, 0x2, 0x466, 
    0x467, 0x7, 0x37, 0x2, 0x2, 0x467, 0x469, 0x5, 0xc4, 0x63, 0x2, 0x468, 
    0x434, 0x3, 0x2, 0x2, 0x2, 0x468, 0x435, 0x3, 0x2, 0x2, 0x2, 0x468, 
    0x437, 0x3, 0x2, 0x2, 0x2, 0x468, 0x43c, 0x3, 0x2, 0x2, 0x2, 0x468, 
    0x443, 0x3, 0x2, 0x2, 0x2, 0x468, 0x44c, 0x3, 0x2, 0x2, 0x2, 0x468, 
    0x453, 0x3, 0x2, 0x2, 0x2, 0x468, 0x45a, 0x3, 0x2, 0x2, 0x2, 0x468, 
    0x45c, 0x3, 0x2, 0x2, 0x2, 0x468, 0x45f, 0x3, 0x2, 0x2, 0x2, 0x468, 
    0x466, 0x3, 0x2, 0x2, 0x2, 0x469, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x46a, 0x46b, 
    0x7, 0xa7, 0x2, 0x2, 0x46b, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x46c, 0x46d, 
    0x8, 0x61, 0x1, 0x2, 0x46d, 0x46e, 0x7, 0xa1, 0x2, 0x2, 0x46e, 0x46f, 
    0x5, 0xc0, 0x61, 0x2, 0x46f, 0x470, 0x7, 0xa3, 0x2, 0x2, 0x470, 0x475, 
    0x3, 0x2, 0x2, 0x2, 0x471, 0x475, 0x5, 0xbc, 0x5f, 0x2, 0x472, 0x475, 
    0x5, 0x8e, 0x48, 0x2, 0x473, 0x475, 0x5, 0xbe, 0x60, 0x2, 0x474, 0x46c, 
    0x3, 0x2, 0x2, 0x2, 0x474, 0x471, 0x3, 0x2, 0x2, 0x2, 0x474, 0x472, 
    0x3, 0x2, 0x2, 0x2, 0x474, 0x473, 0x3, 0x2, 0x2, 0x2, 0x475, 0x47b, 
    0x3, 0x2, 0x2, 0x2, 0x476, 0x477, 0xc, 0x5, 0x2, 0x2, 0x477, 0x478, 
    0x7, 0x8e, 0x2, 0x2, 0x478, 0x47a, 0x5, 0xc0, 0x61, 0x6, 0x479, 0x476, 
    0x3, 0x2, 0x2, 0x2, 0x47a, 0x47d, 0x3, 0x2, 0x2, 0x2, 0x47b, 0x479, 
    0x3, 0x2, 0x2, 0x2, 0x47b, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x47c, 0xc1, 0x3, 
    0x2, 0x2, 0x2, 0x47d, 0x47b, 0x3, 0x2, 0x2, 0x2, 0x47e, 0x510, 0x7, 
    0x64, 0x2, 0x2, 0x47f, 0x510, 0x7, 0x10, 0x2, 0x2, 0x480, 0x510, 0x7, 
    0x30, 0x2, 0x2, 0x481, 0x510, 0x7, 0x63, 0x2, 0x2, 0x482, 0x510, 0x7, 
    0x7e, 0x2, 0x2, 0x483, 0x510, 0x7, 0x7f, 0x2, 0x2, 0x484, 0x510, 0x7, 
    0x80, 0x2, 0x2, 0x485, 0x486, 0x7, 0x7e, 0x2, 0x2, 0x486, 0x487, 0x7, 
    0xa1, 0x2, 0x2, 0x487, 0x488, 0x5, 0xc4, 0x63, 0x2, 0x488, 0x489, 0x7, 
    0xa3, 0x2, 0x2, 0x489, 0x510, 0x3, 0x2, 0x2, 0x2, 0x48a, 0x48b, 0x7, 
    0x66, 0x2, 0x2, 0x48b, 0x48c, 0x7, 0xa1, 0x2, 0x2, 0x48c, 0x48d, 0x5, 
    0xc4, 0x63, 0x2, 0x48d, 0x48e, 0x7, 0xa3, 0x2, 0x2, 0x48e, 0x510, 0x3, 
    0x2, 0x2, 0x2, 0x48f, 0x490, 0x7, 0x67, 0x2, 0x2, 0x490, 0x491, 0x7, 
    0xa1, 0x2, 0x2, 0x491, 0x492, 0x5, 0xc4, 0x63, 0x2, 0x492, 0x493, 0x7, 
    0xa3, 0x2, 0x2, 0x493, 0x510, 0x3, 0x2, 0x2, 0x2, 0x494, 0x495, 0x7, 
    0x68, 0x2, 0x2, 0x495, 0x496, 0x7, 0xa1, 0x2, 0x2, 0x496, 0x497, 0x5, 
    0xc4, 0x63, 0x2, 0x497, 0x498, 0x7, 0xa3, 0x2, 0x2, 0x498, 0x510, 0x3, 
    0x2, 0x2, 0x2, 0x499, 0x49a, 0x7, 0x69, 0x2, 0x2, 0x49a, 0x49b, 0x7, 
    0xa1, 0x2, 0x2, 0x49b, 0x49c, 0x5, 0xc4, 0x63, 0x2, 0x49c, 0x49d, 0x7, 
    0xa3, 0x2, 0x2, 0x49d, 0x510, 0x3, 0x2, 0x2, 0x2, 0x49e, 0x49f, 0x7, 
    0x6a, 0x2, 0x2, 0x49f, 0x4a0, 0x7, 0xa1, 0x2, 0x2, 0x4a0, 0x4a1, 0x5, 
    0xc4, 0x63, 0x2, 0x4a1, 0x4a2, 0x7, 0xa3, 0x2, 0x2, 0x4a2, 0x510, 0x3, 
    0x2, 0x2, 0x2, 0x4a3, 0x4a4, 0x7, 0x6b, 0x2, 0x2, 0x4a4, 0x4a5, 0x7, 
    0xa1, 0x2, 0x2, 0x4a5, 0x4a6, 0x5, 0xc4, 0x63, 0x2, 0x4a6, 0x4a7, 0x7, 
    0xa3, 0x2, 0x2, 0x4a7, 0x510, 0x3, 0x2, 0x2, 0x2, 0x4a8, 0x4a9, 0x7, 
    0x6c, 0x2, 0x2, 0x4a9, 0x4aa, 0x7, 0xa1, 0x2, 0x2, 0x4aa, 0x4ab, 0x5, 
    0xc4, 0x63, 0x2, 0x4ab, 0x4ac, 0x7, 0xa3, 0x2, 0x2, 0x4ac, 0x510, 0x3, 
    0x2, 0x2, 0x2, 0x4ad, 0x4ae, 0x7, 0x6d, 0x2, 0x2, 0x4ae, 0x4af, 0x7, 
    0xa1, 0x2, 0x2, 0x4af, 0x4b0, 0x5, 0xc4, 0x63, 0x2, 0x4b0, 0x4b1, 0x7, 
    0xa3, 0x2, 0x2, 0x4b1, 0x510, 0x3, 0x2, 0x2, 0x2, 0x4b2, 0x4b3, 0x7, 
    0x6e, 0x2, 0x2, 0x4b3, 0x4b4, 0x7, 0xa1, 0x2, 0x2, 0x4b4, 0x4b5, 0x5, 
    0xc4, 0x63, 0x2, 0x4b5, 0x4b6, 0x7, 0xa3, 0x2, 0x2, 0x4b6, 0x510, 0x3, 
    0x2, 0x2, 0x2, 0x4b7, 0x4b8, 0x7, 0x6f, 0x2, 0x2, 0x4b8, 0x4b9, 0x7, 
    0xa1, 0x2, 0x2, 0x4b9, 0x4ba, 0x5, 0xc4, 0x63, 0x2, 0x4ba, 0x4bb, 0x7, 
    0xa3, 0x2, 0x2, 0x4bb, 0x510, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4bd, 0x7, 
    0x70, 0x2, 0x2, 0x4bd, 0x4be, 0x7, 0xa1, 0x2, 0x2, 0x4be, 0x4bf, 0x5, 
    0xc4, 0x63, 0x2, 0x4bf, 0x4c0, 0x7, 0xa3, 0x2, 0x2, 0x4c0, 0x510, 0x3, 
    0x2, 0x2, 0x2, 0x4c1, 0x4c2, 0x7, 0x71, 0x2, 0x2, 0x4c2, 0x4c3, 0x7, 
    0xa1, 0x2, 0x2, 0x4c3, 0x4c4, 0x5, 0xc4, 0x63, 0x2, 0x4c4, 0x4c5, 0x7, 
    0xa3, 0x2, 0x2, 0x4c5, 0x510, 0x3, 0x2, 0x2, 0x2, 0x4c6, 0x4c7, 0x7, 
    0x65, 0x2, 0x2, 0x4c7, 0x4c8, 0x7, 0xa1, 0x2, 0x2, 0x4c8, 0x4c9, 0x5, 
    0xc4, 0x63, 0x2, 0x4c9, 0x4ca, 0x7, 0xa3, 0x2, 0x2, 0x4ca, 0x510, 0x3, 
    0x2, 0x2, 0x2, 0x4cb, 0x4cc, 0x7, 0x72, 0x2, 0x2, 0x4cc, 0x4cd, 0x7, 
    0xa1, 0x2, 0x2, 0x4cd, 0x4ce, 0x5, 0xc4, 0x63, 0x2, 0x4ce, 0x4cf, 0x7, 
    0xa3, 0x2, 0x2, 0x4cf, 0x510, 0x3, 0x2, 0x2, 0x2, 0x4d0, 0x510, 0x7, 
    0x38, 0x2, 0x2, 0x4d1, 0x4d2, 0x7, 0x36, 0x2, 0x2, 0x4d2, 0x510, 0x5, 
    0xc4, 0x63, 0x2, 0x4d3, 0x4d4, 0x7, 0x16, 0x2, 0x2, 0x4d4, 0x4d5, 0x7, 
    0xa1, 0x2, 0x2, 0x4d5, 0x4d6, 0x5, 0xc4, 0x63, 0x2, 0x4d6, 0x4d7, 0x7, 
    0xa3, 0x2, 0x2, 0x4d7, 0x510, 0x3, 0x2, 0x2, 0x2, 0x4d8, 0x4d9, 0x7, 
    0x12, 0x2, 0x2, 0x4d9, 0x4da, 0x7, 0xa1, 0x2, 0x2, 0x4da, 0x4db, 0x5, 
    0xc4, 0x63, 0x2, 0x4db, 0x4dc, 0x7, 0xa3, 0x2, 0x2, 0x4dc, 0x510, 0x3, 
    0x2, 0x2, 0x2, 0x4dd, 0x4de, 0x7, 0x5a, 0x2, 0x2, 0x4de, 0x4df, 0x7, 
    0xa1, 0x2, 0x2, 0x4df, 0x4e0, 0x5, 0xc4, 0x63, 0x2, 0x4e0, 0x4e1, 0x7, 
    0x9f, 0x2, 0x2, 0x4e1, 0x4e2, 0x5, 0xc4, 0x63, 0x2, 0x4e2, 0x4e3, 0x7, 
    0xa3, 0x2, 0x2, 0x4e3, 0x510, 0x3, 0x2, 0x2, 0x2, 0x4e4, 0x4e5, 0x7, 
    0x42, 0x2, 0x2, 0x4e5, 0x510, 0x5, 0xc4, 0x63, 0x2, 0x4e6, 0x4e7, 0x7, 
    0x45, 0x2, 0x2, 0x4e7, 0x510, 0x5, 0xc4, 0x63, 0x2, 0x4e8, 0x4e9, 0x7, 
    0x48, 0x2, 0x2, 0x4e9, 0x4ea, 0x7, 0xa1, 0x2, 0x2, 0x4ea, 0x4eb, 0x5, 
    0xc0, 0x61, 0x2, 0x4eb, 0x4ec, 0x7, 0xa3, 0x2, 0x2, 0x4ec, 0x510, 0x3, 
    0x2, 0x2, 0x2, 0x4ed, 0x4ee, 0x7, 0x49, 0x2, 0x2, 0x4ee, 0x4ef, 0x7, 
    0xa1, 0x2, 0x2, 0x4ef, 0x4f0, 0x5, 0xc0, 0x61, 0x2, 0x4f0, 0x4f1, 0x7, 
    0xa3, 0x2, 0x2, 0x4f1, 0x510, 0x3, 0x2, 0x2, 0x2, 0x4f2, 0x4f3, 0x7, 
    0x4a, 0x2, 0x2, 0x4f3, 0x4f4, 0x7, 0xa1, 0x2, 0x2, 0x4f4, 0x4f5, 0x5, 
    0xc0, 0x61, 0x2, 0x4f5, 0x4f6, 0x7, 0xa3, 0x2, 0x2, 0x4f6, 0x510, 0x3, 
    0x2, 0x2, 0x2, 0x4f7, 0x4f8, 0x7, 0x4b, 0x2, 0x2, 0x4f8, 0x510, 0x5, 
    0xc4, 0x63, 0x2, 0x4f9, 0x4fa, 0x7, 0x73, 0x2, 0x2, 0x4fa, 0x510, 0x5, 
    0xc0, 0x61, 0x2, 0x4fb, 0x4fc, 0x7, 0x74, 0x2, 0x2, 0x4fc, 0x510, 0x5, 
    0xc0, 0x61, 0x2, 0x4fd, 0x4fe, 0x7, 0x75, 0x2, 0x2, 0x4fe, 0x4ff, 0x7, 
    0xa1, 0x2, 0x2, 0x4ff, 0x500, 0x5, 0xc0, 0x61, 0x2, 0x500, 0x501, 0x7, 
    0x9f, 0x2, 0x2, 0x501, 0x502, 0x5, 0xc0, 0x61, 0x2, 0x502, 0x503, 0x7, 
    0xa3, 0x2, 0x2, 0x503, 0x510, 0x3, 0x2, 0x2, 0x2, 0x504, 0x505, 0x7, 
    0x75, 0x2, 0x2, 0x505, 0x506, 0x7, 0xa1, 0x2, 0x2, 0x506, 0x507, 0x5, 
    0xc0, 0x61, 0x2, 0x507, 0x508, 0x7, 0x9f, 0x2, 0x2, 0x508, 0x509, 0x5, 
    0xc0, 0x61, 0x2, 0x509, 0x50a, 0x7, 0x9f, 0x2, 0x2, 0x50a, 0x50b, 0x5, 
    0xc4, 0x63, 0x2, 0x50b, 0x50c, 0x7, 0xa3, 0x2, 0x2, 0x50c, 0x510, 0x3, 
    0x2, 0x2, 0x2, 0x50d, 0x50e, 0x7, 0x76, 0x2, 0x2, 0x50e, 0x510, 0x5, 
    0xc0, 0x61, 0x2, 0x50f, 0x47e, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x47f, 0x3, 
    0x2, 0x2, 0x2, 0x50f, 0x480, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x481, 0x3, 
    0x2, 0x2, 0x2, 0x50f, 0x482, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x483, 0x3, 
    0x2, 0x2, 0x2, 0x50f, 0x484, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x485, 0x3, 
    0x2, 0x2, 0x2, 0x50f, 0x48a, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x48f, 0x3, 
    0x2, 0x2, 0x2, 0x50f, 0x494, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x499, 0x3, 
    0x2, 0x2, 0x2, 0x50f, 0x49e, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x4a3, 0x3, 
    0x2, 0x2, 0x2, 0x50f, 0x4a8, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x4ad, 0x3, 
    0x2, 0x2, 0x2, 0x50f, 0x4b2, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x4b7, 0x3, 
    0x2, 0x2, 0x2, 0x50f, 0x4bc, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x4c1, 0x3, 
    0x2, 0x2, 0x2, 0x50f, 0x4c6, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x4cb, 0x3, 
    0x2, 0x2, 0x2, 0x50f, 0x4d0, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x4d1, 0x3, 
    0x2, 0x2, 0x2, 0x50f, 0x4d3, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x4d8, 0x3, 
    0x2, 0x2, 0x2, 0x50f, 0x4dd, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x4e4, 0x3, 
    0x2, 0x2, 0x2, 0x50f, 0x4e6, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x4e8, 0x3, 
    0x2, 0x2, 0x2, 0x50f, 0x4ed, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x4f2, 0x3, 
    0x2, 0x2, 0x2, 0x50f, 0x4f7, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x4f9, 0x3, 
    0x2, 0x2, 0x2, 0x50f, 0x4fb, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x4fd, 0x3, 
    0x2, 0x2, 0x2, 0x50f, 0x504, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x50d, 0x3, 
    0x2, 0x2, 0x2, 0x510, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x511, 0x512, 0x8, 0x63, 
    0x1, 0x2, 0x512, 0x520, 0x5, 0x8c, 0x47, 0x2, 0x513, 0x520, 0x5, 0xb2, 
    0x5a, 0x2, 0x514, 0x515, 0x7, 0xa1, 0x2, 0x2, 0x515, 0x516, 0x5, 0xc4, 
    0x63, 0x2, 0x516, 0x517, 0x7, 0xa3, 0x2, 0x2, 0x517, 0x520, 0x3, 0x2, 
    0x2, 0x2, 0x518, 0x519, 0x7, 0x87, 0x2, 0x2, 0x519, 0x520, 0x5, 0xc4, 
    0x63, 0xc, 0x51a, 0x520, 0x5, 0xc2, 0x62, 0x2, 0x51b, 0x51c, 0x5, 0xc0, 
    0x61, 0x2, 0x51c, 0x51d, 0x9, 0x7, 0x2, 0x2, 0x51d, 0x51e, 0x5, 0xc0, 
    0x61, 0x2, 0x51e, 0x520, 0x3, 0x2, 0x2, 0x2, 0x51f, 0x511, 0x3, 0x2, 
    0x2, 0x2, 0x51f, 0x513, 0x3, 0x2, 0x2, 0x2, 0x51f, 0x514, 0x3, 0x2, 
    0x2, 0x2, 0x51f, 0x518, 0x3, 0x2, 0x2, 0x2, 0x51f, 0x51a, 0x3, 0x2, 
    0x2, 0x2, 0x51f, 0x51b, 0x3, 0x2, 0x2, 0x2, 0x520, 0x538, 0x3, 0x2, 
    0x2, 0x2, 0x521, 0x522, 0xc, 0xa, 0x2, 0x2, 0x522, 0x523, 0x7, 0x8d, 
    0x2, 0x2, 0x523, 0x537, 0x5, 0xc4, 0x63, 0xa, 0x524, 0x525, 0xc, 0x9, 
    0x2, 0x2, 0x525, 0x526, 0x9, 0x8, 0x2, 0x2, 0x526, 0x537, 0x5, 0xc4, 
    0x63, 0xa, 0x527, 0x528, 0xc, 0x8, 0x2, 0x2, 0x528, 0x529, 0x9, 0x9, 
    0x2, 0x2, 0x529, 0x537, 0x5, 0xc4, 0x63, 0x9, 0x52a, 0x52b, 0xc, 0x7, 
    0x2, 0x2, 0x52b, 0x52c, 0x9, 0x6, 0x2, 0x2, 0x52c, 0x537, 0x5, 0xc4, 
    0x63, 0x8, 0x52d, 0x52e, 0xc, 0x6, 0x2, 0x2, 0x52e, 0x52f, 0x9, 0xa, 
    0x2, 0x2, 0x52f, 0x537, 0x5, 0xc4, 0x63, 0x7, 0x530, 0x531, 0xc, 0x5, 
    0x2, 0x2, 0x531, 0x532, 0x9, 0x7, 0x2, 0x2, 0x532, 0x537, 0x5, 0xc4, 
    0x63, 0x6, 0x533, 0x534, 0xc, 0x3, 0x2, 0x2, 0x534, 0x535, 0x9, 0xb, 
    0x2, 0x2, 0x535, 0x537, 0x5, 0xc4, 0x63, 0x4, 0x536, 0x521, 0x3, 0x2, 
    0x2, 0x2, 0x536, 0x524, 0x3, 0x2, 0x2, 0x2, 0x536, 0x527, 0x3, 0x2, 
    0x2, 0x2, 0x536, 0x52a, 0x3, 0x2, 0x2, 0x2, 0x536, 0x52d, 0x3, 0x2, 
    0x2, 0x2, 0x536, 0x530, 0x3, 0x2, 0x2, 0x2, 0x536, 0x533, 0x3, 0x2, 
    0x2, 0x2, 0x537, 0x53a, 0x3, 0x2, 0x2, 0x2, 0x538, 0x536, 0x3, 0x2, 
    0x2, 0x2, 0x538, 0x539, 0x3, 0x2, 0x2, 0x2, 0x539, 0xc5, 0x3, 0x2, 0x2, 
    0x2, 0x53a, 0x538, 0x3, 0x2, 0x2, 0x2, 0x53b, 0x53c, 0x9, 0xc, 0x2, 
    0x2, 0x53c, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x5d, 0xcb, 0xd2, 0xd5, 0xd9, 
    0xde, 0xe1, 0xe5, 0xea, 0xf0, 0xf6, 0xf9, 0x103, 0x11e, 0x129, 0x12d, 
    0x13a, 0x13e, 0x146, 0x14d, 0x153, 0x15d, 0x165, 0x16e, 0x175, 0x182, 
    0x18b, 0x194, 0x19b, 0x19d, 0x1a2, 0x1a5, 0x1b1, 0x1ba, 0x1c4, 0x1da, 
    0x1f0, 0x1f6, 0x1fc, 0x227, 0x22e, 0x241, 0x25c, 0x269, 0x274, 0x284, 
    0x297, 0x2b5, 0x2e6, 0x31b, 0x325, 0x32a, 0x333, 0x33c, 0x34f, 0x355, 
    0x35b, 0x366, 0x36d, 0x37b, 0x380, 0x384, 0x394, 0x39a, 0x3b5, 0x3be, 
    0x3ca, 0x3d1, 0x3d5, 0x3da, 0x3df, 0x3e7, 0x3ef, 0x3f3, 0x3fd, 0x402, 
    0x407, 0x40a, 0x40d, 0x415, 0x419, 0x41d, 0x424, 0x427, 0x430, 0x468, 
    0x474, 0x47b, 0x50f, 0x51f, 0x536, 0x538, 
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
