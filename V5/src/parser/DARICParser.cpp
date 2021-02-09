
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
    setState(91);
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
      | (1ULL << DARICParser::GETS)
      | (1ULL << DARICParser::BGETH)
      | (1ULL << DARICParser::BPUTH)
      | (1ULL << DARICParser::CLOSEH))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & ((1ULL << (DARICParser::PTRH - 70))
      | (1ULL << (DARICParser::CIRCLE - 70))
      | (1ULL << (DARICParser::CLS - 70))
      | (1ULL << (DARICParser::CLIPON - 70))
      | (1ULL << (DARICParser::CLIPOFF - 70))
      | (1ULL << (DARICParser::COLOUR - 70))
      | (1ULL << (DARICParser::COLOURBG - 70))
      | (1ULL << (DARICParser::FLIP - 70))
      | (1ULL << (DARICParser::SHOWFPS - 70))
      | (1ULL << (DARICParser::GRAPHICS - 70))
      | (1ULL << (DARICParser::LINE - 70))
      | (1ULL << (DARICParser::RECTANGLE - 70))
      | (1ULL << (DARICParser::PLOT - 70))
      | (1ULL << (DARICParser::TEXT - 70))
      | (1ULL << (DARICParser::TEXTRIGHT - 70))
      | (1ULL << (DARICParser::TEXTCENTRE - 70))
      | (1ULL << (DARICParser::TEXTCENTER - 70))
      | (1ULL << (DARICParser::TRIANGLE - 70)))) != 0) || ((((_la - 149) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 149)) & ((1ULL << (DARICParser::NEWLINE - 149))
      | (1ULL << (DARICParser::COLON - 149))
      | (1ULL << (DARICParser::COMMENT - 149))
      | (1ULL << (DARICParser::PROC_NAME - 149))
      | (1ULL << (DARICParser::FN_INTEGER - 149))
      | (1ULL << (DARICParser::FN_FLOAT - 149))
      | (1ULL << (DARICParser::FN_STRING - 149))
      | (1ULL << (DARICParser::VARIABLE_FLOAT - 149))
      | (1ULL << (DARICParser::VARIABLE_INTEGER - 149))
      | (1ULL << (DARICParser::VARIABLE_STRING - 149))
      | (1ULL << (DARICParser::VARIABLE_TYPE - 149))
      | (1ULL << (DARICParser::NUMBER - 149)))) != 0)) {
      setState(88);
      line();
      setState(93);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(94);
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
    setState(117);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(96);
      match(DARICParser::NEWLINE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(98);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::NUMBER) {
        setState(97);
        linenumber();
      }
      setState(101);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::REM || _la == DARICParser::COMMENT) {
        setState(100);
        _la = _input->LA(1);
        if (!(_la == DARICParser::REM || _la == DARICParser::COMMENT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(103);
      match(DARICParser::NEWLINE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(105);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::NUMBER) {
        setState(104);
        linenumber();
      }
      setState(108); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(107);
        stmt();
        setState(110); 
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
        | (1ULL << DARICParser::GETS)
        | (1ULL << DARICParser::BGETH)
        | (1ULL << DARICParser::BPUTH)
        | (1ULL << DARICParser::CLOSEH))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & ((1ULL << (DARICParser::PTRH - 70))
        | (1ULL << (DARICParser::CIRCLE - 70))
        | (1ULL << (DARICParser::CLS - 70))
        | (1ULL << (DARICParser::CLIPON - 70))
        | (1ULL << (DARICParser::CLIPOFF - 70))
        | (1ULL << (DARICParser::COLOUR - 70))
        | (1ULL << (DARICParser::COLOURBG - 70))
        | (1ULL << (DARICParser::FLIP - 70))
        | (1ULL << (DARICParser::SHOWFPS - 70))
        | (1ULL << (DARICParser::GRAPHICS - 70))
        | (1ULL << (DARICParser::LINE - 70))
        | (1ULL << (DARICParser::RECTANGLE - 70))
        | (1ULL << (DARICParser::PLOT - 70))
        | (1ULL << (DARICParser::TEXT - 70))
        | (1ULL << (DARICParser::TEXTRIGHT - 70))
        | (1ULL << (DARICParser::TEXTCENTRE - 70))
        | (1ULL << (DARICParser::TEXTCENTER - 70))
        | (1ULL << (DARICParser::TRIANGLE - 70)))) != 0) || ((((_la - 153) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 153)) & ((1ULL << (DARICParser::COLON - 153))
        | (1ULL << (DARICParser::PROC_NAME - 153))
        | (1ULL << (DARICParser::FN_INTEGER - 153))
        | (1ULL << (DARICParser::FN_FLOAT - 153))
        | (1ULL << (DARICParser::FN_STRING - 153))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 153))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 153))
        | (1ULL << (DARICParser::VARIABLE_STRING - 153))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 153)))) != 0));
      setState(113);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::REM || _la == DARICParser::COMMENT) {
        setState(112);
        _la = _input->LA(1);
        if (!(_la == DARICParser::REM || _la == DARICParser::COMMENT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(115);
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
    setState(122);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(119);
        stmt(); 
      }
      setState(124);
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
    setState(137);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(128);
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
        | (1ULL << DARICParser::GETS)
        | (1ULL << DARICParser::BGETH)
        | (1ULL << DARICParser::BPUTH)
        | (1ULL << DARICParser::CLOSEH))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & ((1ULL << (DARICParser::PTRH - 70))
        | (1ULL << (DARICParser::CIRCLE - 70))
        | (1ULL << (DARICParser::CLS - 70))
        | (1ULL << (DARICParser::CLIPON - 70))
        | (1ULL << (DARICParser::CLIPOFF - 70))
        | (1ULL << (DARICParser::COLOUR - 70))
        | (1ULL << (DARICParser::COLOURBG - 70))
        | (1ULL << (DARICParser::FLIP - 70))
        | (1ULL << (DARICParser::SHOWFPS - 70))
        | (1ULL << (DARICParser::GRAPHICS - 70))
        | (1ULL << (DARICParser::LINE - 70))
        | (1ULL << (DARICParser::RECTANGLE - 70))
        | (1ULL << (DARICParser::PLOT - 70))
        | (1ULL << (DARICParser::TEXT - 70))
        | (1ULL << (DARICParser::TEXTRIGHT - 70))
        | (1ULL << (DARICParser::TEXTCENTRE - 70))
        | (1ULL << (DARICParser::TEXTCENTER - 70))
        | (1ULL << (DARICParser::TRIANGLE - 70)))) != 0) || ((((_la - 153) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 153)) & ((1ULL << (DARICParser::COLON - 153))
        | (1ULL << (DARICParser::PROC_NAME - 153))
        | (1ULL << (DARICParser::FN_INTEGER - 153))
        | (1ULL << (DARICParser::FN_FLOAT - 153))
        | (1ULL << (DARICParser::FN_STRING - 153))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 153))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 153))
        | (1ULL << (DARICParser::VARIABLE_STRING - 153))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 153)))) != 0)) {
        setState(125);
        stmt();
        setState(130);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(134);
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
        | (1ULL << DARICParser::GETS)
        | (1ULL << DARICParser::BGETH)
        | (1ULL << DARICParser::BPUTH)
        | (1ULL << DARICParser::CLOSEH))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & ((1ULL << (DARICParser::PTRH - 70))
        | (1ULL << (DARICParser::CIRCLE - 70))
        | (1ULL << (DARICParser::CLS - 70))
        | (1ULL << (DARICParser::CLIPON - 70))
        | (1ULL << (DARICParser::CLIPOFF - 70))
        | (1ULL << (DARICParser::COLOUR - 70))
        | (1ULL << (DARICParser::COLOURBG - 70))
        | (1ULL << (DARICParser::FLIP - 70))
        | (1ULL << (DARICParser::SHOWFPS - 70))
        | (1ULL << (DARICParser::GRAPHICS - 70))
        | (1ULL << (DARICParser::LINE - 70))
        | (1ULL << (DARICParser::RECTANGLE - 70))
        | (1ULL << (DARICParser::PLOT - 70))
        | (1ULL << (DARICParser::TEXT - 70))
        | (1ULL << (DARICParser::TEXTRIGHT - 70))
        | (1ULL << (DARICParser::TEXTCENTRE - 70))
        | (1ULL << (DARICParser::TEXTCENTER - 70))
        | (1ULL << (DARICParser::TRIANGLE - 70)))) != 0) || ((((_la - 149) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 149)) & ((1ULL << (DARICParser::NEWLINE - 149))
        | (1ULL << (DARICParser::COLON - 149))
        | (1ULL << (DARICParser::COMMENT - 149))
        | (1ULL << (DARICParser::PROC_NAME - 149))
        | (1ULL << (DARICParser::FN_INTEGER - 149))
        | (1ULL << (DARICParser::FN_FLOAT - 149))
        | (1ULL << (DARICParser::FN_STRING - 149))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 149))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 149))
        | (1ULL << (DARICParser::VARIABLE_STRING - 149))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 149))
        | (1ULL << (DARICParser::NUMBER - 149)))) != 0)) {
        setState(131);
        line();
        setState(136);
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
    setState(139);
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

DARICParser::BodyContext* DARICParser::StmtCASEContext::body() {
  return getRuleContext<DARICParser::BodyContext>(0);
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
//----------------- StmtGRAPHICSContext ------------------------------------------------------------------

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

DARICParser::StmtGRAPHICSContext::StmtGRAPHICSContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtGRAPHICSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtGRAPHICS(this);
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
//----------------- StmtCOLOURContext ------------------------------------------------------------------

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

DARICParser::StmtCOLOURContext::StmtCOLOURContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtCOLOURContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCOLOUR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtTEXTCENTREContext ------------------------------------------------------------------

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

DARICParser::StmtTEXTCENTREContext::StmtTEXTCENTREContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtTEXTCENTREContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtTEXTCENTRE(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtMOUSEContext ------------------------------------------------------------------

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

DARICParser::StmtMOUSEContext::StmtMOUSEContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtMOUSEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtMOUSE(this);
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

tree::TerminalNode* DARICParser::StmtLETContext::LET() {
  return getToken(DARICParser::LET, 0);
}

std::vector<tree::TerminalNode *> DARICParser::StmtLETContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtLETContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
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
//----------------- StmtCIRCLEContext ------------------------------------------------------------------

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

DARICParser::StmtCIRCLEContext::StmtCIRCLEContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtCIRCLEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCIRCLE(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtPLOTContext ------------------------------------------------------------------

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

DARICParser::StmtPLOTContext::StmtPLOTContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtPLOTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtPLOT(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtCLIPONContext ------------------------------------------------------------------

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

DARICParser::StmtCLIPONContext::StmtCLIPONContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtCLIPONContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCLIPON(this);
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

DARICParser::BodyContext* DARICParser::StmtDEFFNContext::body() {
  return getRuleContext<DARICParser::BodyContext>(0);
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
//----------------- StmtCOLOURBGContext ------------------------------------------------------------------

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

DARICParser::StmtCOLOURBGContext::StmtCOLOURBGContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtCOLOURBGContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCOLOURBG(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtLINEContext ------------------------------------------------------------------

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

DARICParser::StmtLINEContext::StmtLINEContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtLINEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtLINE(this);
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
//----------------- StmtFLIPContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtFLIPContext::FLIP() {
  return getToken(DARICParser::FLIP, 0);
}

DARICParser::StmtFLIPContext::StmtFLIPContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtFLIPContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtFLIP(this);
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
//----------------- StmtINKEYSContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtINKEYSContext::INKEYS() {
  return getToken(DARICParser::INKEYS, 0);
}

DARICParser::NumExprContext* DARICParser::StmtINKEYSContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

DARICParser::StmtINKEYSContext::StmtINKEYSContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtINKEYSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtINKEYS(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtCLSContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtCLSContext::CLS() {
  return getToken(DARICParser::CLS, 0);
}

DARICParser::StmtCLSContext::StmtCLSContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtCLSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCLS(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtSHOWFPSContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtSHOWFPSContext::SHOWFPS() {
  return getToken(DARICParser::SHOWFPS, 0);
}

DARICParser::StmtSHOWFPSContext::StmtSHOWFPSContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtSHOWFPSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtSHOWFPS(this);
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
//----------------- StmtINKEYContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtINKEYContext::INKEY() {
  return getToken(DARICParser::INKEY, 0);
}

DARICParser::NumExprContext* DARICParser::StmtINKEYContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

DARICParser::StmtINKEYContext::StmtINKEYContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtINKEYContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtINKEY(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtGETSContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtGETSContext::GETS() {
  return getToken(DARICParser::GETS, 0);
}

DARICParser::StmtGETSContext::StmtGETSContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtGETSContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtGETS(this);
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
//----------------- StmtWHILEContext ------------------------------------------------------------------

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

DARICParser::StmtWHILEContext::StmtWHILEContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtWHILEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtWHILE(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtCOLONContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtCOLONContext::COLON() {
  return getToken(DARICParser::COLON, 0);
}

DARICParser::StmtCOLONContext::StmtCOLONContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtCOLONContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCOLON(this);
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

DARICParser::BodyContext* DARICParser::StmtDEFPROCContext::body() {
  return getRuleContext<DARICParser::BodyContext>(0);
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
//----------------- StmtRECTANGLEContext ------------------------------------------------------------------

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

DARICParser::StmtRECTANGLEContext::StmtRECTANGLEContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtRECTANGLEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtRECTANGLE(this);
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
//----------------- StmtTEXTRIGHTContext ------------------------------------------------------------------

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

DARICParser::StmtTEXTRIGHTContext::StmtTEXTRIGHTContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtTEXTRIGHTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtTEXTRIGHT(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtREPEATContext ------------------------------------------------------------------

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

DARICParser::StmtREPEATContext::StmtREPEATContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtREPEATContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtREPEAT(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtTRIANGLEContext ------------------------------------------------------------------

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

DARICParser::StmtTRIANGLEContext::StmtTRIANGLEContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtTRIANGLEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtTRIANGLE(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtTEXTContext ------------------------------------------------------------------

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

DARICParser::StmtTEXTContext::StmtTEXTContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtTEXTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtTEXT(this);
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

DARICParser::StmtFORContext::StmtFORContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtFORContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtFOR(this);
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

DARICParser::BodyContext* DARICParser::StmtFORINContext::body() {
  return getRuleContext<DARICParser::BodyContext>(0);
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

tree::TerminalNode* DARICParser::StmtIFMultilineContext::THEN() {
  return getToken(DARICParser::THEN, 0);
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

DARICParser::StmtIFMultilineContext::StmtIFMultilineContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtIFMultilineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtIFMultiline(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtGETContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtGETContext::GET() {
  return getToken(DARICParser::GET, 0);
}

DARICParser::StmtGETContext::StmtGETContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtGETContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtGET(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtCLIPOFFContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::StmtCLIPOFFContext::CLIPOFF() {
  return getToken(DARICParser::CLIPOFF, 0);
}

DARICParser::StmtCLIPOFFContext::StmtCLIPOFFContext(StmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::StmtCLIPOFFContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCLIPOFF(this);
  else
    return visitor->visitChildren(this);
}
DARICParser::StmtContext* DARICParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 10, DARICParser::RuleStmt);
  size_t _la = 0;

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCOLONContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(141);
      match(DARICParser::COLON);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtBREAKPOINTContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(142);
      match(DARICParser::BREAKPOINT);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCASEContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(143);
      match(DARICParser::CASE);
      setState(144);
      expr();
      setState(145);
      match(DARICParser::OF);
      setState(146);
      match(DARICParser::NEWLINE);
      setState(148); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(147);
        when();
        setState(150); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == DARICParser::WHEN);
      setState(154);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::OTHERWISE) {
        setState(152);
        match(DARICParser::OTHERWISE);
        setState(153);
        body();
      }
      setState(156);
      match(DARICParser::ENDCASE);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCHAINContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(158);
      match(DARICParser::CHAIN);
      setState(159);
      strExpr(0);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtDATAContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(160);
      match(DARICParser::DATA);
      setState(161);
      literal();
      setState(166);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::COMMA) {
        setState(162);
        match(DARICParser::COMMA);
        setState(163);
        literal();
        setState(168);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtDIMContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(169);
      match(DARICParser::DIM);
      setState(170);
      varDeclWithDimension();
      setState(175);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::COMMA) {
        setState(171);
        match(DARICParser::COMMA);
        setState(172);
        varDeclWithDimension();
        setState(177);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtENDContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(178);
      match(DARICParser::END);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtRETURNContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(179);
      match(DARICParser::RETURN);
      setState(181);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
      case 1: {
        setState(180);
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
      setState(183);
      match(DARICParser::DEF);
      setState(184);
      fnName();
      setState(185);
      match(DARICParser::LPAREN);
      setState(187);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::RETURN || ((((_la - 167) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 167)) & ((1ULL << (DARICParser::VARIABLE_FLOAT - 167))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 167))
        | (1ULL << (DARICParser::VARIABLE_STRING - 167)))) != 0)) {
        setState(186);
        functionVarList();
      }
      setState(189);
      match(DARICParser::RPAREN);
      setState(190);
      body();
      setState(191);
      match(DARICParser::ENDFN);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtDEFPROCContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(193);
      match(DARICParser::DEF);
      setState(194);
      match(DARICParser::PROC_NAME);
      setState(195);
      match(DARICParser::LPAREN);
      setState(197);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::RETURN || ((((_la - 167) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 167)) & ((1ULL << (DARICParser::VARIABLE_FLOAT - 167))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 167))
        | (1ULL << (DARICParser::VARIABLE_STRING - 167)))) != 0)) {
        setState(196);
        functionVarList();
      }
      setState(199);
      match(DARICParser::RPAREN);
      setState(200);
      body();
      setState(201);
      match(DARICParser::ENDPROC);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtFORContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(203);
      match(DARICParser::FOR);
      setState(205);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::LOCAL) {
        setState(204);
        match(DARICParser::LOCAL);
      }
      setState(207);
      justNumberVar();
      setState(208);
      match(DARICParser::EQ);
      setState(209);
      numExpr(0);
      setState(210);
      match(DARICParser::TO);
      setState(211);
      numExpr(0);
      setState(214);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::STEP) {
        setState(212);
        match(DARICParser::STEP);
        setState(213);
        numExpr(0);
      }
      setState(216);
      body();
      setState(217);
      match(DARICParser::NEXT);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtFORINContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(219);
      match(DARICParser::FOR);
      setState(221);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::LOCAL) {
        setState(220);
        match(DARICParser::LOCAL);
      }
      setState(223);
      justVar();
      setState(224);
      match(DARICParser::IN);
      setState(225);
      justVar();
      setState(226);
      match(DARICParser::LPAREN);
      setState(227);
      match(DARICParser::RPAREN);
      setState(228);
      body();
      setState(229);
      match(DARICParser::NEXT);
      break;
    }

    case 13: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCallFNContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(231);
      fnName();
      setState(232);
      match(DARICParser::LPAREN);
      setState(234);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << DARICParser::FALSE)
        | (1ULL << DARICParser::FLOAT_TOKEN)
        | (1ULL << DARICParser::INT)
        | (1ULL << DARICParser::TRUE)
        | (1ULL << DARICParser::RED)
        | (1ULL << DARICParser::GREEN)
        | (1ULL << DARICParser::YELLOW)
        | (1ULL << DARICParser::BLUE)
        | (1ULL << DARICParser::MAGENTA)
        | (1ULL << DARICParser::CYAN)
        | (1ULL << DARICParser::WHITE)
        | (1ULL << DARICParser::BLACK)
        | (1ULL << DARICParser::BGETH))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::EOFH - 64))
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
        | (1ULL << (DARICParser::RND1 - 64)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 130)) & ((1ULL << (DARICParser::NOT - 130))
        | (1ULL << (DARICParser::PLUS - 130))
        | (1ULL << (DARICParser::MINUS - 130))
        | (1ULL << (DARICParser::LPAREN - 130))
        | (1ULL << (DARICParser::STRINGLITERAL - 130))
        | (1ULL << (DARICParser::FN_INTEGER - 130))
        | (1ULL << (DARICParser::FN_FLOAT - 130))
        | (1ULL << (DARICParser::FN_STRING - 130))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 130))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 130))
        | (1ULL << (DARICParser::VARIABLE_STRING - 130))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 130))
        | (1ULL << (DARICParser::HEXNUMBER - 130))
        | (1ULL << (DARICParser::BINARYNUMBER - 130))
        | (1ULL << (DARICParser::NUMBER - 130))
        | (1ULL << (DARICParser::FLOAT - 130)))) != 0)) {
        setState(233);
        functionParList();
      }
      setState(236);
      match(DARICParser::RPAREN);
      break;
    }

    case 14: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtIFContext>(_localctx));
      enterOuterAlt(_localctx, 14);
      setState(238);
      match(DARICParser::IF);
      setState(239);
      expr();
      setState(241);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::THEN) {
        setState(240);
        match(DARICParser::THEN);
      }
      setState(243);
      dynamic_cast<StmtIFContext *>(_localctx)->t = content();
      setState(246);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
      case 1: {
        setState(244);
        match(DARICParser::ELSE);
        setState(245);
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
      setState(248);
      match(DARICParser::IF);
      setState(249);
      expr();
      setState(251);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::THEN) {
        setState(250);
        match(DARICParser::THEN);
      }
      setState(253);
      match(DARICParser::NEWLINE);
      setState(255); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(254);
        dynamic_cast<StmtIFMultilineContext *>(_localctx)->t = line();
        setState(257); 
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
        | (1ULL << DARICParser::GETS)
        | (1ULL << DARICParser::BGETH)
        | (1ULL << DARICParser::BPUTH)
        | (1ULL << DARICParser::CLOSEH))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & ((1ULL << (DARICParser::PTRH - 70))
        | (1ULL << (DARICParser::CIRCLE - 70))
        | (1ULL << (DARICParser::CLS - 70))
        | (1ULL << (DARICParser::CLIPON - 70))
        | (1ULL << (DARICParser::CLIPOFF - 70))
        | (1ULL << (DARICParser::COLOUR - 70))
        | (1ULL << (DARICParser::COLOURBG - 70))
        | (1ULL << (DARICParser::FLIP - 70))
        | (1ULL << (DARICParser::SHOWFPS - 70))
        | (1ULL << (DARICParser::GRAPHICS - 70))
        | (1ULL << (DARICParser::LINE - 70))
        | (1ULL << (DARICParser::RECTANGLE - 70))
        | (1ULL << (DARICParser::PLOT - 70))
        | (1ULL << (DARICParser::TEXT - 70))
        | (1ULL << (DARICParser::TEXTRIGHT - 70))
        | (1ULL << (DARICParser::TEXTCENTRE - 70))
        | (1ULL << (DARICParser::TEXTCENTER - 70))
        | (1ULL << (DARICParser::TRIANGLE - 70)))) != 0) || ((((_la - 149) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 149)) & ((1ULL << (DARICParser::NEWLINE - 149))
        | (1ULL << (DARICParser::COLON - 149))
        | (1ULL << (DARICParser::COMMENT - 149))
        | (1ULL << (DARICParser::PROC_NAME - 149))
        | (1ULL << (DARICParser::FN_INTEGER - 149))
        | (1ULL << (DARICParser::FN_FLOAT - 149))
        | (1ULL << (DARICParser::FN_STRING - 149))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 149))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 149))
        | (1ULL << (DARICParser::VARIABLE_STRING - 149))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 149))
        | (1ULL << (DARICParser::NUMBER - 149)))) != 0));
      setState(266);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::ELSE) {
        setState(259);
        match(DARICParser::ELSE);
        setState(260);
        match(DARICParser::NEWLINE);
        setState(262); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(261);
          dynamic_cast<StmtIFMultilineContext *>(_localctx)->f = line();
          setState(264); 
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
          | (1ULL << DARICParser::GETS)
          | (1ULL << DARICParser::BGETH)
          | (1ULL << DARICParser::BPUTH)
          | (1ULL << DARICParser::CLOSEH))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 70)) & ((1ULL << (DARICParser::PTRH - 70))
          | (1ULL << (DARICParser::CIRCLE - 70))
          | (1ULL << (DARICParser::CLS - 70))
          | (1ULL << (DARICParser::CLIPON - 70))
          | (1ULL << (DARICParser::CLIPOFF - 70))
          | (1ULL << (DARICParser::COLOUR - 70))
          | (1ULL << (DARICParser::COLOURBG - 70))
          | (1ULL << (DARICParser::FLIP - 70))
          | (1ULL << (DARICParser::SHOWFPS - 70))
          | (1ULL << (DARICParser::GRAPHICS - 70))
          | (1ULL << (DARICParser::LINE - 70))
          | (1ULL << (DARICParser::RECTANGLE - 70))
          | (1ULL << (DARICParser::PLOT - 70))
          | (1ULL << (DARICParser::TEXT - 70))
          | (1ULL << (DARICParser::TEXTRIGHT - 70))
          | (1ULL << (DARICParser::TEXTCENTRE - 70))
          | (1ULL << (DARICParser::TEXTCENTER - 70))
          | (1ULL << (DARICParser::TRIANGLE - 70)))) != 0) || ((((_la - 149) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 149)) & ((1ULL << (DARICParser::NEWLINE - 149))
          | (1ULL << (DARICParser::COLON - 149))
          | (1ULL << (DARICParser::COMMENT - 149))
          | (1ULL << (DARICParser::PROC_NAME - 149))
          | (1ULL << (DARICParser::FN_INTEGER - 149))
          | (1ULL << (DARICParser::FN_FLOAT - 149))
          | (1ULL << (DARICParser::FN_STRING - 149))
          | (1ULL << (DARICParser::VARIABLE_FLOAT - 149))
          | (1ULL << (DARICParser::VARIABLE_INTEGER - 149))
          | (1ULL << (DARICParser::VARIABLE_STRING - 149))
          | (1ULL << (DARICParser::VARIABLE_TYPE - 149))
          | (1ULL << (DARICParser::NUMBER - 149)))) != 0));
      }
      setState(268);
      match(DARICParser::ENDIF);
      break;
    }

    case 16: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtLETContext>(_localctx));
      enterOuterAlt(_localctx, 16);
      setState(271);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::LET) {
        setState(270);
        match(DARICParser::LET);
      }
      setState(273);
      varDecl();
      setState(274);
      match(DARICParser::EQ);
      setState(275);
      expr();
      setState(283);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::COMMA) {
        setState(276);
        match(DARICParser::COMMA);
        setState(277);
        varDecl();
        setState(278);
        match(DARICParser::EQ);
        setState(279);
        expr();
        setState(285);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 17: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtLETContext>(_localctx));
      enterOuterAlt(_localctx, 17);
      setState(287);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::GLOBAL) {
        setState(286);
        match(DARICParser::GLOBAL);
      }
      setState(289);
      varDecl();
      setState(290);
      match(DARICParser::EQ);
      setState(291);
      expr();
      setState(299);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::COMMA) {
        setState(292);
        match(DARICParser::COMMA);
        setState(293);
        varDecl();
        setState(294);
        match(DARICParser::EQ);
        setState(295);
        expr();
        setState(301);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 18: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtLOCALContext>(_localctx));
      enterOuterAlt(_localctx, 18);
      setState(302);
      match(DARICParser::LOCAL);
      setState(303);
      varDecl();
      setState(304);
      match(DARICParser::EQ);
      setState(305);
      expr();
      setState(313);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::COMMA) {
        setState(306);
        match(DARICParser::COMMA);
        setState(307);
        varDecl();
        setState(308);
        match(DARICParser::EQ);
        setState(309);
        expr();
        setState(315);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 19: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtLOCALDIMContext>(_localctx));
      enterOuterAlt(_localctx, 19);
      setState(316);
      match(DARICParser::LOCAL);
      setState(317);
      match(DARICParser::DIM);
      setState(318);
      varDeclWithDimension();
      setState(323);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::COMMA) {
        setState(319);
        match(DARICParser::COMMA);
        setState(320);
        varDeclWithDimension();
        setState(325);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 20: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtOSCLIContext>(_localctx));
      enterOuterAlt(_localctx, 20);
      setState(326);
      match(DARICParser::OSCLI);
      setState(327);
      strExpr(0);
      break;
    }

    case 21: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCallPROCContext>(_localctx));
      enterOuterAlt(_localctx, 21);
      setState(328);
      match(DARICParser::PROC_NAME);
      setState(329);
      match(DARICParser::LPAREN);
      setState(331);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << DARICParser::FALSE)
        | (1ULL << DARICParser::FLOAT_TOKEN)
        | (1ULL << DARICParser::INT)
        | (1ULL << DARICParser::TRUE)
        | (1ULL << DARICParser::RED)
        | (1ULL << DARICParser::GREEN)
        | (1ULL << DARICParser::YELLOW)
        | (1ULL << DARICParser::BLUE)
        | (1ULL << DARICParser::MAGENTA)
        | (1ULL << DARICParser::CYAN)
        | (1ULL << DARICParser::WHITE)
        | (1ULL << DARICParser::BLACK)
        | (1ULL << DARICParser::BGETH))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::EOFH - 64))
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
        | (1ULL << (DARICParser::RND1 - 64)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 130)) & ((1ULL << (DARICParser::NOT - 130))
        | (1ULL << (DARICParser::PLUS - 130))
        | (1ULL << (DARICParser::MINUS - 130))
        | (1ULL << (DARICParser::LPAREN - 130))
        | (1ULL << (DARICParser::STRINGLITERAL - 130))
        | (1ULL << (DARICParser::FN_INTEGER - 130))
        | (1ULL << (DARICParser::FN_FLOAT - 130))
        | (1ULL << (DARICParser::FN_STRING - 130))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 130))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 130))
        | (1ULL << (DARICParser::VARIABLE_STRING - 130))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 130))
        | (1ULL << (DARICParser::HEXNUMBER - 130))
        | (1ULL << (DARICParser::BINARYNUMBER - 130))
        | (1ULL << (DARICParser::NUMBER - 130))
        | (1ULL << (DARICParser::FLOAT - 130)))) != 0)) {
        setState(330);
        functionParList();
      }
      setState(333);
      match(DARICParser::RPAREN);
      break;
    }

    case 22: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtREADContext>(_localctx));
      enterOuterAlt(_localctx, 22);
      setState(334);
      match(DARICParser::READ);
      setState(335);
      varDecl();
      setState(340);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::COMMA) {
        setState(336);
        match(DARICParser::COMMA);
        setState(337);
        varDecl();
        setState(342);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 23: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtRESTOREContext>(_localctx));
      enterOuterAlt(_localctx, 23);
      setState(343);
      match(DARICParser::RESTORE);
      break;
    }

    case 24: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtSWAPContext>(_localctx));
      enterOuterAlt(_localctx, 24);
      setState(344);
      match(DARICParser::SWAP);
      setState(345);
      justVar();
      setState(346);
      match(DARICParser::COMMA);
      setState(347);
      justVar();
      break;
    }

    case 25: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtTRACEONContext>(_localctx));
      enterOuterAlt(_localctx, 25);
      setState(349);
      match(DARICParser::TRACEON);
      break;
    }

    case 26: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtTRACEOFFContext>(_localctx));
      enterOuterAlt(_localctx, 26);
      setState(350);
      match(DARICParser::TRACEOFF);
      break;
    }

    case 27: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtTYPEContext>(_localctx));
      enterOuterAlt(_localctx, 27);
      setState(351);
      match(DARICParser::TYPE);
      setState(352);
      varName();
      setState(353);
      match(DARICParser::LPAREN);
      setState(354);
      justVar();
      setState(359);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::COMMA) {
        setState(355);
        match(DARICParser::COMMA);
        setState(356);
        justVar();
        setState(361);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(362);
      match(DARICParser::RPAREN);
      break;
    }

    case 28: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtREPEATContext>(_localctx));
      enterOuterAlt(_localctx, 28);
      setState(364);
      match(DARICParser::REPEAT);
      setState(365);
      body();
      setState(366);
      match(DARICParser::UNTIL);
      setState(367);
      expr();
      break;
    }

    case 29: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtWHILEContext>(_localctx));
      enterOuterAlt(_localctx, 29);
      setState(369);
      match(DARICParser::WHILE);
      setState(370);
      expr();
      setState(371);
      body();
      setState(372);
      match(DARICParser::ENDWHILE);
      break;
    }

    case 30: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtINPUTContext>(_localctx));
      enterOuterAlt(_localctx, 30);
      setState(374);
      match(DARICParser::INPUT);
      setState(378);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
      case 1: {
        setState(375);
        strExpr(0);
        setState(376);
        match(DARICParser::COMMA);
        break;
      }

      default:
        break;
      }
      setState(380);
      varList();
      break;
    }

    case 31: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtPRINTContext>(_localctx));
      enterOuterAlt(_localctx, 31);
      setState(381);
      match(DARICParser::PRINT);
      setState(383);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
      case 1: {
        setState(382);
        printList();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 32: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtMOUSEContext>(_localctx));
      enterOuterAlt(_localctx, 32);
      setState(385);
      match(DARICParser::MOUSE);
      setState(386);
      varNameInteger();
      setState(387);
      match(DARICParser::COMMA);
      setState(388);
      varNameInteger();
      setState(389);
      match(DARICParser::COMMA);
      setState(390);
      varNameInteger();
      break;
    }

    case 33: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtINKEYContext>(_localctx));
      enterOuterAlt(_localctx, 33);
      setState(392);
      match(DARICParser::INKEY);
      setState(393);
      numExpr(0);
      break;
    }

    case 34: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtINKEYSContext>(_localctx));
      enterOuterAlt(_localctx, 34);
      setState(394);
      match(DARICParser::INKEYS);
      setState(395);
      numExpr(0);
      break;
    }

    case 35: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtGETContext>(_localctx));
      enterOuterAlt(_localctx, 35);
      setState(396);
      match(DARICParser::GET);
      break;
    }

    case 36: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtGETSContext>(_localctx));
      enterOuterAlt(_localctx, 36);
      setState(397);
      match(DARICParser::GETS);
      break;
    }

    case 37: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtOperatorEqualContext>(_localctx));
      enterOuterAlt(_localctx, 37);
      setState(398);
      varDecl();
      setState(399);
      match(DARICParser::MULTIPLY_E);
      setState(400);
      numExpr(0);
      break;
    }

    case 38: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtOperatorEqualContext>(_localctx));
      enterOuterAlt(_localctx, 38);
      setState(402);
      varDecl();
      setState(403);
      match(DARICParser::DIVIDE_E);
      setState(404);
      numExpr(0);
      break;
    }

    case 39: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtOperatorEqualContext>(_localctx));
      enterOuterAlt(_localctx, 39);
      setState(406);
      varDecl();
      setState(407);
      match(DARICParser::PLUS_E);
      setState(408);
      numExpr(0);
      break;
    }

    case 40: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtOperatorEqualContext>(_localctx));
      enterOuterAlt(_localctx, 40);
      setState(410);
      varDecl();
      setState(411);
      match(DARICParser::MINUS_E);
      setState(412);
      numExpr(0);
      break;
    }

    case 41: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtOperatorEqualContext>(_localctx));
      enterOuterAlt(_localctx, 41);
      setState(414);
      varDecl();
      setState(415);
      match(DARICParser::SHL_E);
      setState(416);
      numExpr(0);
      break;
    }

    case 42: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtOperatorEqualContext>(_localctx));
      enterOuterAlt(_localctx, 42);
      setState(418);
      varDecl();
      setState(419);
      match(DARICParser::SHR_E);
      setState(420);
      numExpr(0);
      break;
    }

    case 43: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtBPUTHContext>(_localctx));
      enterOuterAlt(_localctx, 43);
      setState(422);
      match(DARICParser::BPUTH);
      setState(423);
      numExpr(0);
      setState(424);
      match(DARICParser::COMMA);
      setState(425);
      numExpr(0);
      break;
    }

    case 44: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtBGETHContext>(_localctx));
      enterOuterAlt(_localctx, 44);
      setState(427);
      match(DARICParser::BGETH);
      setState(428);
      numExpr(0);
      break;
    }

    case 45: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtPTRHContext>(_localctx));
      enterOuterAlt(_localctx, 45);
      setState(429);
      match(DARICParser::PTRH);
      setState(430);
      numExpr(0);
      setState(431);
      match(DARICParser::EQ);
      setState(432);
      numExpr(0);
      break;
    }

    case 46: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCLOSEHContext>(_localctx));
      enterOuterAlt(_localctx, 46);
      setState(434);
      match(DARICParser::CLOSEH);
      setState(435);
      numExpr(0);
      break;
    }

    case 47: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtLISTFILESContext>(_localctx));
      enterOuterAlt(_localctx, 47);
      setState(437);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::LOCAL) {
        setState(436);
        match(DARICParser::LOCAL);
      }
      setState(439);
      varNameString();
      setState(440);
      match(DARICParser::LPAREN);
      setState(441);
      match(DARICParser::RPAREN);
      setState(442);
      match(DARICParser::EQ);
      setState(443);
      match(DARICParser::LISTFILES);
      setState(444);
      match(DARICParser::LPAREN);
      setState(445);
      strExpr(0);
      setState(446);
      match(DARICParser::RPAREN);
      break;
    }

    case 48: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCLSContext>(_localctx));
      enterOuterAlt(_localctx, 48);
      setState(448);
      match(DARICParser::CLS);
      break;
    }

    case 49: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCOLOURContext>(_localctx));
      enterOuterAlt(_localctx, 49);
      setState(449);
      match(DARICParser::COLOUR);
      setState(450);
      numExpr(0);
      break;
    }

    case 50: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCOLOURContext>(_localctx));
      enterOuterAlt(_localctx, 50);
      setState(451);
      match(DARICParser::COLOUR);
      setState(452);
      numExpr(0);
      setState(453);
      match(DARICParser::COMMA);
      setState(454);
      numExpr(0);
      setState(455);
      match(DARICParser::COMMA);
      setState(456);
      numExpr(0);
      break;
    }

    case 51: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCOLOURBGContext>(_localctx));
      enterOuterAlt(_localctx, 51);
      setState(458);
      match(DARICParser::COLOURBG);
      setState(459);
      numExpr(0);
      break;
    }

    case 52: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCOLOURBGContext>(_localctx));
      enterOuterAlt(_localctx, 52);
      setState(460);
      match(DARICParser::COLOURBG);
      setState(461);
      numExpr(0);
      setState(462);
      match(DARICParser::COMMA);
      setState(463);
      numExpr(0);
      setState(464);
      match(DARICParser::COMMA);
      setState(465);
      numExpr(0);
      break;
    }

    case 53: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtGRAPHICSContext>(_localctx));
      enterOuterAlt(_localctx, 53);
      setState(467);
      match(DARICParser::GRAPHICS);
      break;
    }

    case 54: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtGRAPHICSContext>(_localctx));
      enterOuterAlt(_localctx, 54);
      setState(468);
      match(DARICParser::GRAPHICS);
      setState(469);
      numExpr(0);
      setState(470);
      match(DARICParser::COMMA);
      setState(471);
      numExpr(0);
      break;
    }

    case 55: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtGRAPHICSContext>(_localctx));
      enterOuterAlt(_localctx, 55);
      setState(473);
      match(DARICParser::GRAPHICS);
      setState(474);
      match(DARICParser::BANKED);
      break;
    }

    case 56: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtGRAPHICSContext>(_localctx));
      enterOuterAlt(_localctx, 56);
      setState(475);
      match(DARICParser::GRAPHICS);
      setState(476);
      match(DARICParser::BANKED);
      setState(477);
      numExpr(0);
      setState(478);
      match(DARICParser::COMMA);
      setState(479);
      numExpr(0);
      break;
    }

    case 57: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtFLIPContext>(_localctx));
      enterOuterAlt(_localctx, 57);
      setState(481);
      match(DARICParser::FLIP);
      break;
    }

    case 58: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCIRCLEContext>(_localctx));
      enterOuterAlt(_localctx, 58);
      setState(482);
      match(DARICParser::CIRCLE);
      setState(483);
      numExpr(0);
      setState(484);
      match(DARICParser::COMMA);
      setState(485);
      numExpr(0);
      setState(486);
      match(DARICParser::COMMA);
      setState(487);
      numExpr(0);
      break;
    }

    case 59: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCIRCLEContext>(_localctx));
      enterOuterAlt(_localctx, 59);
      setState(489);
      match(DARICParser::CIRCLE);
      setState(490);
      match(DARICParser::FILL);
      setState(491);
      numExpr(0);
      setState(492);
      match(DARICParser::COMMA);
      setState(493);
      numExpr(0);
      setState(494);
      match(DARICParser::COMMA);
      setState(495);
      numExpr(0);
      break;
    }

    case 60: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtLINEContext>(_localctx));
      enterOuterAlt(_localctx, 60);
      setState(497);
      match(DARICParser::LINE);
      setState(498);
      numExpr(0);
      setState(499);
      match(DARICParser::COMMA);
      setState(500);
      numExpr(0);
      setState(501);
      match(DARICParser::COMMA);
      setState(502);
      numExpr(0);
      setState(503);
      match(DARICParser::COMMA);
      setState(504);
      numExpr(0);
      break;
    }

    case 61: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtRECTANGLEContext>(_localctx));
      enterOuterAlt(_localctx, 61);
      setState(506);
      match(DARICParser::RECTANGLE);
      setState(507);
      numExpr(0);
      setState(508);
      match(DARICParser::COMMA);
      setState(509);
      numExpr(0);
      setState(510);
      match(DARICParser::COMMA);
      setState(511);
      numExpr(0);
      setState(512);
      match(DARICParser::COMMA);
      setState(513);
      numExpr(0);
      break;
    }

    case 62: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtRECTANGLEContext>(_localctx));
      enterOuterAlt(_localctx, 62);
      setState(515);
      match(DARICParser::RECTANGLE);
      setState(516);
      match(DARICParser::FILL);
      setState(517);
      numExpr(0);
      setState(518);
      match(DARICParser::COMMA);
      setState(519);
      numExpr(0);
      setState(520);
      match(DARICParser::COMMA);
      setState(521);
      numExpr(0);
      setState(522);
      match(DARICParser::COMMA);
      setState(523);
      numExpr(0);
      break;
    }

    case 63: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtTRIANGLEContext>(_localctx));
      enterOuterAlt(_localctx, 63);
      setState(525);
      match(DARICParser::TRIANGLE);
      setState(526);
      numExpr(0);
      setState(527);
      match(DARICParser::COMMA);
      setState(528);
      numExpr(0);
      setState(529);
      match(DARICParser::COMMA);
      setState(530);
      numExpr(0);
      setState(531);
      match(DARICParser::COMMA);
      setState(532);
      numExpr(0);
      setState(533);
      match(DARICParser::COMMA);
      setState(534);
      numExpr(0);
      setState(535);
      match(DARICParser::COMMA);
      setState(536);
      numExpr(0);
      break;
    }

    case 64: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtTRIANGLEContext>(_localctx));
      enterOuterAlt(_localctx, 64);
      setState(538);
      match(DARICParser::TRIANGLE);
      setState(539);
      match(DARICParser::FILL);
      setState(540);
      numExpr(0);
      setState(541);
      match(DARICParser::COMMA);
      setState(542);
      numExpr(0);
      setState(543);
      match(DARICParser::COMMA);
      setState(544);
      numExpr(0);
      setState(545);
      match(DARICParser::COMMA);
      setState(546);
      numExpr(0);
      setState(547);
      match(DARICParser::COMMA);
      setState(548);
      numExpr(0);
      setState(549);
      match(DARICParser::COMMA);
      setState(550);
      numExpr(0);
      break;
    }

    case 65: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtTRIANGLEContext>(_localctx));
      enterOuterAlt(_localctx, 65);
      setState(552);
      match(DARICParser::TRIANGLE);
      setState(553);
      match(DARICParser::SHADED);
      setState(554);
      numExpr(0);
      setState(555);
      match(DARICParser::COMMA);
      setState(556);
      numExpr(0);
      setState(557);
      match(DARICParser::COMMA);
      setState(558);
      numExpr(0);
      setState(559);
      match(DARICParser::COMMA);
      setState(560);
      numExpr(0);
      setState(561);
      match(DARICParser::COMMA);
      setState(562);
      numExpr(0);
      setState(563);
      match(DARICParser::COMMA);
      setState(564);
      numExpr(0);
      setState(565);
      match(DARICParser::COMMA);
      setState(566);
      numExpr(0);
      setState(567);
      match(DARICParser::COMMA);
      setState(568);
      numExpr(0);
      setState(569);
      match(DARICParser::COMMA);
      setState(570);
      numExpr(0);
      break;
    }

    case 66: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtPLOTContext>(_localctx));
      enterOuterAlt(_localctx, 66);
      setState(572);
      match(DARICParser::PLOT);
      setState(573);
      numExpr(0);
      setState(574);
      match(DARICParser::COMMA);
      setState(575);
      numExpr(0);
      break;
    }

    case 67: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCLIPONContext>(_localctx));
      enterOuterAlt(_localctx, 67);
      setState(577);
      match(DARICParser::CLIPON);
      setState(578);
      numExpr(0);
      setState(579);
      match(DARICParser::COMMA);
      setState(580);
      numExpr(0);
      setState(581);
      match(DARICParser::COMMA);
      setState(582);
      numExpr(0);
      setState(583);
      match(DARICParser::COMMA);
      setState(584);
      numExpr(0);
      break;
    }

    case 68: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtCLIPOFFContext>(_localctx));
      enterOuterAlt(_localctx, 68);
      setState(586);
      match(DARICParser::CLIPOFF);
      break;
    }

    case 69: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtTEXTContext>(_localctx));
      enterOuterAlt(_localctx, 69);
      setState(587);
      match(DARICParser::TEXT);
      setState(588);
      numExpr(0);
      setState(589);
      match(DARICParser::COMMA);
      setState(590);
      numExpr(0);
      setState(591);
      match(DARICParser::COMMA);
      setState(592);
      numExpr(0);
      setState(593);
      match(DARICParser::COMMA);
      setState(594);
      numExpr(0);
      break;
    }

    case 70: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtTEXTRIGHTContext>(_localctx));
      enterOuterAlt(_localctx, 70);
      setState(596);
      match(DARICParser::TEXTRIGHT);
      setState(597);
      numExpr(0);
      setState(598);
      match(DARICParser::COMMA);
      setState(599);
      numExpr(0);
      setState(600);
      match(DARICParser::COMMA);
      setState(601);
      numExpr(0);
      setState(602);
      match(DARICParser::COMMA);
      setState(603);
      strExpr(0);
      break;
    }

    case 71: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtTEXTCENTREContext>(_localctx));
      enterOuterAlt(_localctx, 71);
      setState(605);
      _la = _input->LA(1);
      if (!(_la == DARICParser::TEXTCENTRE

      || _la == DARICParser::TEXTCENTER)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(606);
      numExpr(0);
      setState(607);
      match(DARICParser::COMMA);
      setState(608);
      numExpr(0);
      setState(609);
      match(DARICParser::COMMA);
      setState(610);
      numExpr(0);
      setState(611);
      match(DARICParser::COMMA);
      setState(612);
      strExpr(0);
      break;
    }

    case 72: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtSHOWFPSContext>(_localctx));
      enterOuterAlt(_localctx, 72);
      setState(614);
      match(DARICParser::SHOWFPS);
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
  enterRule(_localctx, 12, DARICParser::RuleWhen);
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
    setState(617);
    match(DARICParser::WHEN);
    setState(618);
    expr();
    setState(623);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(619);
      match(DARICParser::COMMA);
      setState(620);
      expr();
      setState(625);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(626);
    match(DARICParser::COLON);
    setState(627);
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
  enterRule(_localctx, 14, DARICParser::RuleFnName);
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
    _la = _input->LA(1);
    if (!(((((_la - 164) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 164)) & ((1ULL << (DARICParser::FN_INTEGER - 164))
      | (1ULL << (DARICParser::FN_FLOAT - 164))
      | (1ULL << (DARICParser::FN_STRING - 164)))) != 0))) {
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
  enterRule(_localctx, 16, DARICParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(633);
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
        setState(631);
        number();
        break;
      }

      case DARICParser::STRINGLITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(632);
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
  enterRule(_localctx, 18, DARICParser::RuleVar);

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(635);
      numVar();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(636);
      strVar();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(637);
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
  enterRule(_localctx, 20, DARICParser::RuleTypeVar);

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
    setState(640);
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
  enterRule(_localctx, 22, DARICParser::RuleNumVar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(698);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatArrayContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(642);
      varName();
      setState(643);
      match(DARICParser::LPAREN);
      setState(644);
      numExpr(0);
      setState(647);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::COMMA) {
        setState(645);
        match(DARICParser::COMMA);
        setState(646);
        numExpr(0);
      }
      setState(649);
      match(DARICParser::RPAREN);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerArrayContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(651);
      varNameInteger();
      setState(652);
      match(DARICParser::LPAREN);
      setState(653);
      numExpr(0);
      setState(656);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::COMMA) {
        setState(654);
        match(DARICParser::COMMA);
        setState(655);
        numExpr(0);
      }
      setState(658);
      match(DARICParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerFieldArrayContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(660);
      typeVar();
      setState(661);
      match(DARICParser::LPAREN);
      setState(662);
      numExpr(0);
      setState(663);
      match(DARICParser::RPAREN);
      setState(664);
      varNameInteger();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatFieldArrayContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(666);
      typeVar();
      setState(667);
      match(DARICParser::LPAREN);
      setState(668);
      numExpr(0);
      setState(669);
      match(DARICParser::RPAREN);
      setState(670);
      varName();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatFNContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(672);
      match(DARICParser::FN_FLOAT);
      setState(673);
      match(DARICParser::LPAREN);
      setState(675);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << DARICParser::FALSE)
        | (1ULL << DARICParser::FLOAT_TOKEN)
        | (1ULL << DARICParser::INT)
        | (1ULL << DARICParser::TRUE)
        | (1ULL << DARICParser::RED)
        | (1ULL << DARICParser::GREEN)
        | (1ULL << DARICParser::YELLOW)
        | (1ULL << DARICParser::BLUE)
        | (1ULL << DARICParser::MAGENTA)
        | (1ULL << DARICParser::CYAN)
        | (1ULL << DARICParser::WHITE)
        | (1ULL << DARICParser::BLACK)
        | (1ULL << DARICParser::BGETH))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::EOFH - 64))
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
        | (1ULL << (DARICParser::RND1 - 64)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 130)) & ((1ULL << (DARICParser::NOT - 130))
        | (1ULL << (DARICParser::PLUS - 130))
        | (1ULL << (DARICParser::MINUS - 130))
        | (1ULL << (DARICParser::LPAREN - 130))
        | (1ULL << (DARICParser::STRINGLITERAL - 130))
        | (1ULL << (DARICParser::FN_INTEGER - 130))
        | (1ULL << (DARICParser::FN_FLOAT - 130))
        | (1ULL << (DARICParser::FN_STRING - 130))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 130))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 130))
        | (1ULL << (DARICParser::VARIABLE_STRING - 130))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 130))
        | (1ULL << (DARICParser::HEXNUMBER - 130))
        | (1ULL << (DARICParser::BINARYNUMBER - 130))
        | (1ULL << (DARICParser::NUMBER - 130))
        | (1ULL << (DARICParser::FLOAT - 130)))) != 0)) {
        setState(674);
        functionParList();
      }
      setState(677);
      match(DARICParser::RPAREN);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerFNContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(678);
      match(DARICParser::FN_INTEGER);
      setState(679);
      match(DARICParser::LPAREN);
      setState(681);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << DARICParser::FALSE)
        | (1ULL << DARICParser::FLOAT_TOKEN)
        | (1ULL << DARICParser::INT)
        | (1ULL << DARICParser::TRUE)
        | (1ULL << DARICParser::RED)
        | (1ULL << DARICParser::GREEN)
        | (1ULL << DARICParser::YELLOW)
        | (1ULL << DARICParser::BLUE)
        | (1ULL << DARICParser::MAGENTA)
        | (1ULL << DARICParser::CYAN)
        | (1ULL << DARICParser::WHITE)
        | (1ULL << DARICParser::BLACK)
        | (1ULL << DARICParser::BGETH))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::EOFH - 64))
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
        | (1ULL << (DARICParser::RND1 - 64)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 130)) & ((1ULL << (DARICParser::NOT - 130))
        | (1ULL << (DARICParser::PLUS - 130))
        | (1ULL << (DARICParser::MINUS - 130))
        | (1ULL << (DARICParser::LPAREN - 130))
        | (1ULL << (DARICParser::STRINGLITERAL - 130))
        | (1ULL << (DARICParser::FN_INTEGER - 130))
        | (1ULL << (DARICParser::FN_FLOAT - 130))
        | (1ULL << (DARICParser::FN_STRING - 130))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 130))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 130))
        | (1ULL << (DARICParser::VARIABLE_STRING - 130))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 130))
        | (1ULL << (DARICParser::HEXNUMBER - 130))
        | (1ULL << (DARICParser::BINARYNUMBER - 130))
        | (1ULL << (DARICParser::NUMBER - 130))
        | (1ULL << (DARICParser::FLOAT - 130)))) != 0)) {
        setState(680);
        functionParList();
      }
      setState(683);
      match(DARICParser::RPAREN);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarStringFNContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(684);
      match(DARICParser::FN_STRING);
      setState(685);
      match(DARICParser::LPAREN);
      setState(687);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << DARICParser::FALSE)
        | (1ULL << DARICParser::FLOAT_TOKEN)
        | (1ULL << DARICParser::INT)
        | (1ULL << DARICParser::TRUE)
        | (1ULL << DARICParser::RED)
        | (1ULL << DARICParser::GREEN)
        | (1ULL << DARICParser::YELLOW)
        | (1ULL << DARICParser::BLUE)
        | (1ULL << DARICParser::MAGENTA)
        | (1ULL << DARICParser::CYAN)
        | (1ULL << DARICParser::WHITE)
        | (1ULL << DARICParser::BLACK)
        | (1ULL << DARICParser::BGETH))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::EOFH - 64))
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
        | (1ULL << (DARICParser::RND1 - 64)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 130)) & ((1ULL << (DARICParser::NOT - 130))
        | (1ULL << (DARICParser::PLUS - 130))
        | (1ULL << (DARICParser::MINUS - 130))
        | (1ULL << (DARICParser::LPAREN - 130))
        | (1ULL << (DARICParser::STRINGLITERAL - 130))
        | (1ULL << (DARICParser::FN_INTEGER - 130))
        | (1ULL << (DARICParser::FN_FLOAT - 130))
        | (1ULL << (DARICParser::FN_STRING - 130))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 130))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 130))
        | (1ULL << (DARICParser::VARIABLE_STRING - 130))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 130))
        | (1ULL << (DARICParser::HEXNUMBER - 130))
        | (1ULL << (DARICParser::BINARYNUMBER - 130))
        | (1ULL << (DARICParser::NUMBER - 130))
        | (1ULL << (DARICParser::FLOAT - 130)))) != 0)) {
        setState(686);
        functionParList();
      }
      setState(689);
      match(DARICParser::RPAREN);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(690);
      varName();
      break;
    }

    case 9: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(691);
      varNameInteger();
      break;
    }

    case 10: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatFieldContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(692);
      typeVar();
      setState(693);
      varName();
      break;
    }

    case 11: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerFieldContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(695);
      typeVar();
      setState(696);
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
  enterRule(_localctx, 24, DARICParser::RuleStrVar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(719);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringArrayContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(700);
      varNameString();
      setState(701);
      match(DARICParser::LPAREN);
      setState(702);
      numExpr(0);
      setState(705);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::COMMA) {
        setState(703);
        match(DARICParser::COMMA);
        setState(704);
        numExpr(0);
      }
      setState(707);
      match(DARICParser::RPAREN);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringFieldArrayContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(709);
      typeVar();
      setState(710);
      match(DARICParser::LPAREN);
      setState(711);
      numExpr(0);
      setState(712);
      match(DARICParser::RPAREN);
      setState(713);
      varNameString();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(715);
      varNameString();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringFieldContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(716);
      typeVar();
      setState(717);
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
  enterRule(_localctx, 26, DARICParser::RuleJustVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(724);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::VARIABLE_FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(721);
        varName();
        break;
      }

      case DARICParser::VARIABLE_INTEGER: {
        enterOuterAlt(_localctx, 2);
        setState(722);
        varNameInteger();
        break;
      }

      case DARICParser::VARIABLE_STRING: {
        enterOuterAlt(_localctx, 3);
        setState(723);
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
  enterRule(_localctx, 28, DARICParser::RuleJustNumberVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(728);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::VARIABLE_FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(726);
        varName();
        break;
      }

      case DARICParser::VARIABLE_INTEGER: {
        enterOuterAlt(_localctx, 2);
        setState(727);
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
  enterRule(_localctx, 30, DARICParser::RuleVarName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(730);
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
  enterRule(_localctx, 32, DARICParser::RuleVarNameInteger);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(732);
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
  enterRule(_localctx, 34, DARICParser::RuleVarNameString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(734);
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
  enterRule(_localctx, 36, DARICParser::RuleVarNameType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(736);
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
  enterRule(_localctx, 38, DARICParser::RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(777);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclIndContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(738);
      justVar();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclArrayedContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(739);
      justVar();
      setState(750);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::LPAREN) {
        setState(740);
        match(DARICParser::LPAREN);
        setState(741);
        numExpr(0);
        setState(744);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DARICParser::COMMA) {
          setState(742);
          match(DARICParser::COMMA);
          setState(743);
          numExpr(0);
        }
        setState(746);
        match(DARICParser::RPAREN);
        setState(752);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeVarContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(753);
      typeVar();
      setState(754);
      varName();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeVarContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(756);
      typeVar();
      setState(757);
      varNameInteger();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeVarArrayedContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(759);
      typeVar();
      setState(760);
      match(DARICParser::LPAREN);
      setState(761);
      numExpr(0);
      setState(762);
      match(DARICParser::RPAREN);
      setState(763);
      varName();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeVarArrayedContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(765);
      typeVar();
      setState(766);
      match(DARICParser::LPAREN);
      setState(767);
      numExpr(0);
      setState(768);
      match(DARICParser::RPAREN);
      setState(769);
      varNameInteger();
      break;
    }

    case 7: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(771);
      typeVar();
      break;
    }

    case 8: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeArrayedContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(772);
      typeVar();
      setState(773);
      match(DARICParser::LPAREN);
      setState(774);
      numExpr(0);
      setState(775);
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
  enterRule(_localctx, 40, DARICParser::RuleVarDeclWithDimension);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(798);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::VARIABLE_FLOAT:
      case DARICParser::VARIABLE_INTEGER:
      case DARICParser::VARIABLE_STRING: {
        enterOuterAlt(_localctx, 1);
        setState(779);
        justVar();
        setState(780);
        match(DARICParser::LPAREN);
        setState(781);
        numExpr(0);
        setState(786);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == DARICParser::COMMA) {
          setState(782);
          match(DARICParser::COMMA);
          setState(783);
          numExpr(0);
          setState(788);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(789);
        match(DARICParser::RPAREN);
        break;
      }

      case DARICParser::VARIABLE_TYPE: {
        enterOuterAlt(_localctx, 2);
        setState(791);
        typeVar();
        setState(792);
        match(DARICParser::LPAREN);
        setState(793);
        numExpr(0);
        setState(794);
        match(DARICParser::COMMA);
        setState(795);
        varName();
        setState(796);
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
  enterRule(_localctx, 42, DARICParser::RuleVarList);
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
    setState(800);
    varDecl();
    setState(805);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(801);
      match(DARICParser::COMMA);
      setState(802);
      varDecl();
      setState(807);
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
  enterRule(_localctx, 44, DARICParser::RuleFunctionVarList);
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
    setState(809);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::RETURN) {
      setState(808);
      match(DARICParser::RETURN);
    }
    setState(811);
    justVar();
    setState(819);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(812);
      match(DARICParser::COMMA);
      setState(814);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::RETURN) {
        setState(813);
        match(DARICParser::RETURN);
      }
      setState(816);
      justVar();
      setState(821);
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
  enterRule(_localctx, 46, DARICParser::RuleFunctionParList);
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
    setState(822);
    expr();
    setState(827);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(823);
      match(DARICParser::COMMA);
      setState(824);
      expr();
      setState(829);
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
  enterRule(_localctx, 48, DARICParser::RuleExprList);
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
    setState(830);
    expr();
    setState(835);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(831);
      match(DARICParser::COMMA);
      setState(832);
      expr();
      setState(837);
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
  enterRule(_localctx, 50, DARICParser::RulePrintListItem);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(849);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<PrintListItemContext *>(_tracker.createInstance<DARICParser::PrintListExprContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(839);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::TILDE) {
        setState(838);
        match(DARICParser::TILDE);
      }
      setState(841);
      expr();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<PrintListItemContext *>(_tracker.createInstance<DARICParser::PrintListSPCPContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(842);
      match(DARICParser::SPC);
      setState(843);
      match(DARICParser::LPAREN);
      setState(844);
      numExpr(0);
      setState(845);
      match(DARICParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<PrintListItemContext *>(_tracker.createInstance<DARICParser::PrintListSPCContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(847);
      match(DARICParser::SPC);
      setState(848);
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
  enterRule(_localctx, 52, DARICParser::RulePrintListTick);
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
    setState(852); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(851);
      match(DARICParser::TICK);
      setState(854); 
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
  enterRule(_localctx, 54, DARICParser::RulePrintListSeparator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(859);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::COMMA: {
        enterOuterAlt(_localctx, 1);
        setState(856);
        match(DARICParser::COMMA);
        break;
      }

      case DARICParser::SEMICOLON: {
        enterOuterAlt(_localctx, 2);
        setState(857);
        match(DARICParser::SEMICOLON);
        break;
      }

      case DARICParser::TICK: {
        enterOuterAlt(_localctx, 3);
        setState(858);
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
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(862);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::TICK) {
      setState(861);
      printListTick();
    }
    setState(865);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::SEMICOLON) {
      setState(864);
      dynamic_cast<PrintListContext *>(_localctx)->s1 = match(DARICParser::SEMICOLON);
    }
    setState(867);
    printListItem();
    setState(873);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(868);
        printListSeparator();
        setState(869);
        printListItem(); 
      }
      setState(875);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx);
    }
    setState(877);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::SEMICOLON) {
      setState(876);
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
  enterRule(_localctx, 58, DARICParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(881);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(879);
      numExpr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(880);
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
  enterRule(_localctx, 60, DARICParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(888);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(883);
        numberInteger();
        break;
      }

      case DARICParser::PLUS:
      case DARICParser::MINUS:
      case DARICParser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(884);
        numberFloat();
        break;
      }

      case DARICParser::HEXNUMBER: {
        enterOuterAlt(_localctx, 3);
        setState(885);
        numberHex();
        break;
      }

      case DARICParser::BINARYNUMBER: {
        enterOuterAlt(_localctx, 4);
        setState(886);
        numberBinary();
        break;
      }

      case DARICParser::RED:
      case DARICParser::GREEN:
      case DARICParser::YELLOW:
      case DARICParser::BLUE:
      case DARICParser::MAGENTA:
      case DARICParser::CYAN:
      case DARICParser::WHITE:
      case DARICParser::BLACK: {
        enterOuterAlt(_localctx, 5);
        setState(887);
        numColours();
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

//----------------- NumberIntegerContext ------------------------------------------------------------------

DARICParser::NumberIntegerContext::NumberIntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::NumberIntegerContext::NUMBER() {
  return getToken(DARICParser::NUMBER, 0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(890);
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
    setState(892);
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
    setState(894);
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
    setState(897);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::PLUS

    || _la == DARICParser::MINUS) {
      setState(896);
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
    setState(899);
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
  enterRule(_localctx, 70, DARICParser::RuleStrFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(946);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncTIMESContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(901);
      match(DARICParser::TIMES);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncCHRSContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(902);
      match(DARICParser::CHRS);
      setState(903);
      numExpr(0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncLEFTSContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(904);
      match(DARICParser::LEFTS);
      setState(905);
      match(DARICParser::LPAREN);
      setState(906);
      strExpr(0);
      setState(907);
      match(DARICParser::COMMA);
      setState(908);
      numExpr(0);
      setState(909);
      match(DARICParser::RPAREN);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncMIDS3Context>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(911);
      match(DARICParser::MIDS);
      setState(912);
      match(DARICParser::LPAREN);
      setState(913);
      strExpr(0);
      setState(914);
      match(DARICParser::COMMA);
      setState(915);
      numExpr(0);
      setState(916);
      match(DARICParser::COMMA);
      setState(917);
      numExpr(0);
      setState(918);
      match(DARICParser::RPAREN);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncMIDS2Context>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(920);
      match(DARICParser::MIDS);
      setState(921);
      match(DARICParser::LPAREN);
      setState(922);
      strExpr(0);
      setState(923);
      match(DARICParser::COMMA);
      setState(924);
      numExpr(0);
      setState(925);
      match(DARICParser::RPAREN);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncRIGHTSContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(927);
      match(DARICParser::RIGHTS);
      setState(928);
      match(DARICParser::LPAREN);
      setState(929);
      strExpr(0);
      setState(930);
      match(DARICParser::COMMA);
      setState(931);
      numExpr(0);
      setState(932);
      match(DARICParser::RPAREN);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncSTRSContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(934);
      match(DARICParser::STRS);
      setState(935);
      numExpr(0);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncSTRSHEXContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(936);
      match(DARICParser::STRS);
      setState(937);
      match(DARICParser::TILDE);
      setState(938);
      numExpr(0);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncSTRINGSContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(939);
      match(DARICParser::STRINGS);
      setState(940);
      match(DARICParser::LPAREN);
      setState(941);
      numExpr(0);
      setState(942);
      match(DARICParser::COMMA);
      setState(943);
      strExpr(0);
      setState(944);
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
    setState(948);
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
    setState(958);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::LPAREN: {
        setState(951);
        match(DARICParser::LPAREN);
        setState(952);
        strExpr(0);
        setState(953);
        match(DARICParser::RPAREN);
        break;
      }

      case DARICParser::TIMES:
      case DARICParser::STRS:
      case DARICParser::STRINGS:
      case DARICParser::CHRS:
      case DARICParser::LEFTS:
      case DARICParser::MIDS:
      case DARICParser::RIGHTS: {
        setState(955);
        strFunc();
        break;
      }

      case DARICParser::VARIABLE_STRING:
      case DARICParser::VARIABLE_TYPE: {
        setState(956);
        strVar();
        break;
      }

      case DARICParser::STRINGLITERAL: {
        setState(957);
        string();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(965);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StrExprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStrExpr);
        setState(960);

        if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
        setState(961);
        match(DARICParser::PLUS);
        setState(962);
        strExpr(4); 
      }
      setState(967);
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

DARICParser::NumExprContext* DARICParser::NumFuncLNContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
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

DARICParser::NumExprContext* DARICParser::NumFuncSINContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
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

DARICParser::NumExprContext* DARICParser::NumFuncRADContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
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

DARICParser::NumExprContext* DARICParser::NumFuncSQRContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
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

DARICParser::NumExprContext* DARICParser::NumFuncFLOATContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
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

DARICParser::NumExprContext* DARICParser::NumFuncACSContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
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

DARICParser::NumExprContext* DARICParser::NumFuncTANContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
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

DARICParser::NumExprContext* DARICParser::NumFuncATNContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
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

DARICParser::NumExprContext* DARICParser::NumFuncSGNContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
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

DARICParser::NumExprContext* DARICParser::NumFuncEXPContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
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

DARICParser::NumExprContext* DARICParser::NumFuncABSContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
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

DARICParser::NumExprContext* DARICParser::NumFuncINTContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
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

DARICParser::NumExprContext* DARICParser::NumFuncDEGContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
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

DARICParser::NumExprContext* DARICParser::NumFuncCOSContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
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

DARICParser::NumExprContext* DARICParser::NumFuncLOGContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
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

DARICParser::NumExprContext* DARICParser::NumFuncASNContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
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
    setState(1062);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncPIContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(968);
      match(DARICParser::PI);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncFALSEContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(969);
      match(DARICParser::FALSE);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncTRUEContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(970);
      match(DARICParser::TRUE);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncTIMEContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(971);
      match(DARICParser::TIME);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRNDContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(972);
      match(DARICParser::RND);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRND0Context>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(973);
      match(DARICParser::RND0);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRND1Context>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(974);
      match(DARICParser::RND1);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRNDRANGEContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(975);
      match(DARICParser::RND);
      setState(976);
      match(DARICParser::LPAREN);
      setState(977);
      numExpr(0);
      setState(978);
      match(DARICParser::RPAREN);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncLNContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(980);
      match(DARICParser::LN);
      setState(981);
      numExpr(0);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncLOGContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(982);
      match(DARICParser::LOG);
      setState(983);
      numExpr(0);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncEXPContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(984);
      match(DARICParser::EXP);
      setState(985);
      numExpr(0);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncATNContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(986);
      match(DARICParser::ATN);
      setState(987);
      numExpr(0);
      break;
    }

    case 13: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncTANContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(988);
      match(DARICParser::TAN);
      setState(989);
      numExpr(0);
      break;
    }

    case 14: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncCOSContext>(_localctx));
      enterOuterAlt(_localctx, 14);
      setState(990);
      match(DARICParser::COS);
      setState(991);
      numExpr(0);
      break;
    }

    case 15: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSINContext>(_localctx));
      enterOuterAlt(_localctx, 15);
      setState(992);
      match(DARICParser::SIN);
      setState(993);
      numExpr(0);
      break;
    }

    case 16: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncABSContext>(_localctx));
      enterOuterAlt(_localctx, 16);
      setState(994);
      match(DARICParser::ABS);
      setState(995);
      numExpr(0);
      break;
    }

    case 17: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncACSContext>(_localctx));
      enterOuterAlt(_localctx, 17);
      setState(996);
      match(DARICParser::ACS);
      setState(997);
      numExpr(0);
      break;
    }

    case 18: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncASNContext>(_localctx));
      enterOuterAlt(_localctx, 18);
      setState(998);
      match(DARICParser::ASN);
      setState(999);
      numExpr(0);
      break;
    }

    case 19: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncDEGContext>(_localctx));
      enterOuterAlt(_localctx, 19);
      setState(1000);
      match(DARICParser::DEG);
      setState(1001);
      numExpr(0);
      break;
    }

    case 20: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRADContext>(_localctx));
      enterOuterAlt(_localctx, 20);
      setState(1002);
      match(DARICParser::RAD);
      setState(1003);
      numExpr(0);
      break;
    }

    case 21: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSQRContext>(_localctx));
      enterOuterAlt(_localctx, 21);
      setState(1004);
      match(DARICParser::SQR);
      setState(1005);
      numExpr(0);
      break;
    }

    case 22: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSGNContext>(_localctx));
      enterOuterAlt(_localctx, 22);
      setState(1006);
      match(DARICParser::SGN);
      setState(1007);
      numExpr(0);
      break;
    }

    case 23: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncINTContext>(_localctx));
      enterOuterAlt(_localctx, 23);
      setState(1008);
      match(DARICParser::INT);
      setState(1009);
      numExpr(0);
      break;
    }

    case 24: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncFLOATContext>(_localctx));
      enterOuterAlt(_localctx, 24);
      setState(1010);
      match(DARICParser::FLOAT_TOKEN);
      setState(1011);
      numExpr(0);
      break;
    }

    case 25: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncPOINTContext>(_localctx));
      enterOuterAlt(_localctx, 25);
      setState(1012);
      match(DARICParser::POINT);
      setState(1013);
      match(DARICParser::LPAREN);
      setState(1014);
      numExpr(0);
      setState(1015);
      match(DARICParser::COMMA);
      setState(1016);
      numExpr(0);
      setState(1017);
      match(DARICParser::RPAREN);
      break;
    }

    case 26: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncBGETHContext>(_localctx));
      enterOuterAlt(_localctx, 26);
      setState(1019);
      match(DARICParser::BGETH);
      setState(1020);
      numExpr(0);
      break;
    }

    case 27: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncEOFHContext>(_localctx));
      enterOuterAlt(_localctx, 27);
      setState(1021);
      match(DARICParser::EOFH);
      setState(1022);
      numExpr(0);
      break;
    }

    case 28: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncOPENINContext>(_localctx));
      enterOuterAlt(_localctx, 28);
      setState(1023);
      match(DARICParser::OPENIN);
      setState(1024);
      match(DARICParser::LPAREN);
      setState(1025);
      strExpr(0);
      setState(1026);
      match(DARICParser::RPAREN);
      break;
    }

    case 29: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncOPENOUTContext>(_localctx));
      enterOuterAlt(_localctx, 29);
      setState(1028);
      match(DARICParser::OPENOUT);
      setState(1029);
      match(DARICParser::LPAREN);
      setState(1030);
      strExpr(0);
      setState(1031);
      match(DARICParser::RPAREN);
      break;
    }

    case 30: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncOPENUPContext>(_localctx));
      enterOuterAlt(_localctx, 30);
      setState(1033);
      match(DARICParser::OPENUP);
      setState(1034);
      match(DARICParser::LPAREN);
      setState(1035);
      strExpr(0);
      setState(1036);
      match(DARICParser::RPAREN);
      break;
    }

    case 31: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncPTRContext>(_localctx));
      enterOuterAlt(_localctx, 31);
      setState(1038);
      match(DARICParser::PTRH);
      setState(1039);
      numExpr(0);
      break;
    }

    case 32: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncASCContext>(_localctx));
      enterOuterAlt(_localctx, 32);
      setState(1040);
      match(DARICParser::ASC);
      setState(1041);
      strExpr(0);
      break;
    }

    case 33: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncLENContext>(_localctx));
      enterOuterAlt(_localctx, 33);
      setState(1042);
      match(DARICParser::LEN);
      setState(1043);
      strExpr(0);
      break;
    }

    case 34: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncINSTR2Context>(_localctx));
      enterOuterAlt(_localctx, 34);
      setState(1044);
      match(DARICParser::INSTR);
      setState(1045);
      match(DARICParser::LPAREN);
      setState(1046);
      strExpr(0);
      setState(1047);
      match(DARICParser::COMMA);
      setState(1048);
      strExpr(0);
      setState(1049);
      match(DARICParser::RPAREN);
      break;
    }

    case 35: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncINSTR3Context>(_localctx));
      enterOuterAlt(_localctx, 35);
      setState(1051);
      match(DARICParser::INSTR);
      setState(1052);
      match(DARICParser::LPAREN);
      setState(1053);
      strExpr(0);
      setState(1054);
      match(DARICParser::COMMA);
      setState(1055);
      strExpr(0);
      setState(1056);
      match(DARICParser::COMMA);
      setState(1057);
      numExpr(0);
      setState(1058);
      match(DARICParser::RPAREN);
      break;
    }

    case 36: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncVALContext>(_localctx));
      enterOuterAlt(_localctx, 36);
      setState(1060);
      match(DARICParser::VAL);
      setState(1061);
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

DARICParser::NotExprContext* DARICParser::NumExprNOTContext::notExpr() {
  return getRuleContext<DARICParser::NotExprContext>(0);
}

DARICParser::NumExprNOTContext::NumExprNOTContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprNOTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprNOT(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprNestedContext ------------------------------------------------------------------

DARICParser::NestedExprContext* DARICParser::NumExprNestedContext::nestedExpr() {
  return getRuleContext<DARICParser::NestedExprContext>(0);
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
//----------------- NumExprUnaryContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumExprUnaryContext::MINUS() {
  return getToken(DARICParser::MINUS, 0);
}

DARICParser::NumExprContext* DARICParser::NumExprUnaryContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

DARICParser::NumExprUnaryContext::NumExprUnaryContext(NumExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumExprUnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExprUnary(this);
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
    setState(1076);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NumExprUnaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(1065);
      match(DARICParser::MINUS);
      setState(1066);
      numExpr(20);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NumExprNOTContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1067);
      notExpr();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NumExprFuncContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1068);
      numFunc();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<NumExprNestedContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1069);
      nestedExpr();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NumExprStrRelopContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1070);
      strExpr(0);
      setState(1071);
      compare();
      setState(1072);
      strExpr(0);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<NumExprVarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1074);
      numVar();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<NumExprNumberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1075);
      number();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(1120);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1118);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<NumExprHatContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1078);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(1079);
          match(DARICParser::HAT);
          setState(1080);
          numExpr(16);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<NumExprMultiplyContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1081);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(1082);
          match(DARICParser::MULTIPLY);
          setState(1083);
          numExpr(16);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<NumExprDivideContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1084);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(1085);
          match(DARICParser::DIVIDE);
          setState(1086);
          numExpr(15);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<NumExprDIVContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1087);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(1088);
          match(DARICParser::DIV);
          setState(1089);
          numExpr(14);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<NumExprMODContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1090);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(1091);
          match(DARICParser::MOD);
          setState(1092);
          numExpr(13);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<NumExprPlusContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1093);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(1094);
          match(DARICParser::PLUS);
          setState(1095);
          numExpr(12);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<NumExprSubtractContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1096);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(1097);
          match(DARICParser::MINUS);
          setState(1098);
          numExpr(11);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<NumExprNumRelopContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1099);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(1100);
          compare();
          setState(1101);
          numExpr(10);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<NumExprSHLContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1103);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(1104);
          match(DARICParser::SHL);
          setState(1105);
          numExpr(8);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<NumExprSHRContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1106);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(1107);
          match(DARICParser::SHR);
          setState(1108);
          numExpr(7);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<NumExprANDContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1109);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(1110);
          match(DARICParser::AND);
          setState(1111);
          numExpr(6);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<NumExprORContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1112);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(1113);
          match(DARICParser::OR);
          setState(1114);
          numExpr(5);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<NumExprEORContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1115);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1116);
          match(DARICParser::EOR);
          setState(1117);
          numExpr(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(1122);
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

//----------------- NestedExprContext ------------------------------------------------------------------

DARICParser::NestedExprContext::NestedExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::NestedExprContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NestedExprContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NestedExprContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}


size_t DARICParser::NestedExprContext::getRuleIndex() const {
  return DARICParser::RuleNestedExpr;
}


antlrcpp::Any DARICParser::NestedExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNestedExpr(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::NestedExprContext* DARICParser::nestedExpr() {
  NestedExprContext *_localctx = _tracker.createInstance<NestedExprContext>(_ctx, getState());
  enterRule(_localctx, 80, DARICParser::RuleNestedExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1123);
    match(DARICParser::LPAREN);
    setState(1124);
    numExpr(0);
    setState(1125);
    match(DARICParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NotExprContext ------------------------------------------------------------------

DARICParser::NotExprContext::NotExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::NotExprContext::NOT() {
  return getToken(DARICParser::NOT, 0);
}

DARICParser::NumExprContext* DARICParser::NotExprContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}


size_t DARICParser::NotExprContext::getRuleIndex() const {
  return DARICParser::RuleNotExpr;
}


antlrcpp::Any DARICParser::NotExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNotExpr(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::NotExprContext* DARICParser::notExpr() {
  NotExprContext *_localctx = _tracker.createInstance<NotExprContext>(_ctx, getState());
  enterRule(_localctx, 82, DARICParser::RuleNotExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1127);
    match(DARICParser::NOT);
    setState(1128);
    numExpr(0);
   
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
  enterRule(_localctx, 84, DARICParser::RuleNumColours);
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
    setState(1130);
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
  enterRule(_localctx, 86, DARICParser::RuleCompare);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1138);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::EQ: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareEQContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(1132);
        match(DARICParser::EQ);
        break;
      }

      case DARICParser::NE: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareNEContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(1133);
        match(DARICParser::NE);
        break;
      }

      case DARICParser::GT: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareGTContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(1134);
        match(DARICParser::GT);
        break;
      }

      case DARICParser::GE: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareGEContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(1135);
        match(DARICParser::GE);
        break;
      }

      case DARICParser::LT: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareLTContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(1136);
        match(DARICParser::LT);
        break;
      }

      case DARICParser::LE: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareLEContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(1137);
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
  "prog", "line", "content", "body", "linenumber", "stmt", "when", "fnName", 
  "literal", "var", "typeVar", "numVar", "strVar", "justVar", "justNumberVar", 
  "varName", "varNameInteger", "varNameString", "varNameType", "varDecl", 
  "varDeclWithDimension", "varList", "functionVarList", "functionParList", 
  "exprList", "printListItem", "printListTick", "printListSeparator", "printList", 
  "expr", "number", "numberInteger", "numberHex", "numberBinary", "numberFloat", 
  "strFunc", "string", "strExpr", "numFunc", "numExpr", "nestedExpr", "notExpr", 
  "numColours", "compare"
};

std::vector<std::string> DARICParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'='", 
  "'<>'", "'>'", "'>='", "'<'", "'<='", "", "", "", "", "", "", "'^'", "'+'", 
  "'-'", "'*'", "'/'", "'<<'", "'>>'", "'+='", "'-='", "'*='", "'/='", "'<<='", 
  "'>>='", "", "'''", "'~'", "'#'", "':'", "','", "'$'", "'('", "'%'", "')'", 
  "';'", "'_'"
};

std::vector<std::string> DARICParser::_symbolicNames = {
  "", "BREAKPOINT", "CASE", "CHAIN", "DATA", "DEF", "DIM", "ELSE", "END", 
  "ENDCASE", "ENDIF", "ENDFN", "ENDPROC", "ENDWHILE", "FALSE", "FOR", "FLOAT_TOKEN", 
  "FN", "IF", "IN", "INT", "INPUT", "GLOBAL", "LOCAL", "LET", "NEXT", "OF", 
  "OSCLI", "OTHERWISE", "PRINT", "PROC", "READ", "REM", "REPEAT", "RESTORE", 
  "RETURN", "SPC", "STEP", "SWAP", "THEN", "TO", "TRACEON", "TRACEOFF", 
  "TRUE", "TYPE", "UNTIL", "WHEN", "WHILE", "MOUSE", "INKEY", "INKEYS", 
  "GET", "GETS", "RED", "GREEN", "YELLOW", "BLUE", "MAGENTA", "CYAN", "WHITE", 
  "BLACK", "BGETH", "BPUTH", "CLOSEH", "EOFH", "GETSH", "LISTFILES", "OPENIN", 
  "OPENOUT", "OPENUP", "PTRH", "BANKED", "CIRCLE", "CLS", "CLIPON", "CLIPOFF", 
  "COLOUR", "COLOURBG", "FILL", "FLIP", "SHOWFPS", "GRAPHICS", "LINE", "RECTANGLE", 
  "PLOT", "POINT", "SHADED", "TEXT", "TEXTRIGHT", "TEXTCENTRE", "TEXTCENTER", 
  "TRIANGLE", "LOADTYPEFACE", "CREATEFONT", "TIME", "PI", "SQR", "LN", "LOG", 
  "EXP", "ATN", "TAN", "COS", "SIN", "ABS", "ACS", "ASN", "DEG", "RAD", 
  "SGN", "ASC", "LEN", "INSTR", "VAL", "TIMES", "STRS", "STRINGS", "CHRS", 
  "LEFTS", "MIDS", "RIGHTS", "RND", "RND0", "RND1", "EQ", "NE", "GT", "GE", 
  "LT", "LE", "NOT", "AND", "OR", "EOR", "MOD", "DIV", "HAT", "PLUS", "MINUS", 
  "MULTIPLY", "DIVIDE", "SHL", "SHR", "PLUS_E", "MINUS_E", "MULTIPLY_E", 
  "DIVIDE_E", "SHL_E", "SHR_E", "NEWLINE", "TICK", "TILDE", "HASH", "COLON", 
  "COMMA", "DOLLAR", "LPAREN", "PERCENT", "RPAREN", "SEMICOLON", "UNDERSCORE", 
  "COMMENT", "STRINGLITERAL", "PROC_NAME", "FN_INTEGER", "FN_FLOAT", "FN_STRING", 
  "VARIABLE_FLOAT", "VARIABLE_INTEGER", "VARIABLE_STRING", "VARIABLE_TYPE", 
  "NAME", "HEXNUMBER", "BINARYNUMBER", "NUMBER", "FLOAT", "WS"
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
    0x3, 0xb2, 0x477, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x3, 0x2, 0x7, 0x2, 0x5c, 0xa, 
    0x2, 0xc, 0x2, 0xe, 0x2, 0x5f, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 
    0x3, 0x3, 0x5, 0x3, 0x65, 0xa, 0x3, 0x3, 0x3, 0x5, 0x3, 0x68, 0xa, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x6c, 0xa, 0x3, 0x3, 0x3, 0x6, 0x3, 0x6f, 
    0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x70, 0x3, 0x3, 0x5, 0x3, 0x74, 0xa, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x78, 0xa, 0x3, 0x3, 0x4, 0x7, 0x4, 0x7b, 
    0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x7e, 0xb, 0x4, 0x3, 0x5, 0x7, 0x5, 0x81, 
    0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x84, 0xb, 0x5, 0x3, 0x5, 0x7, 0x5, 0x87, 
    0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x8a, 0xb, 0x5, 0x5, 0x5, 0x8c, 0xa, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x6, 0x7, 0x97, 0xa, 0x7, 0xd, 0x7, 0xe, 0x7, 0x98, 
    0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x9d, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0xa7, 
    0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0xaa, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x7, 0x7, 0xb0, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0xb3, 0xb, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xb8, 0xa, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xbe, 0xa, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 
    0x7, 0xc8, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x5, 0x7, 0xd0, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xd9, 0xa, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xe0, 0xa, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xed, 0xa, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xf4, 0xa, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xf9, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x5, 0x7, 0xfe, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x6, 0x7, 0x102, 
    0xa, 0x7, 0xd, 0x7, 0xe, 0x7, 0x103, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x6, 
    0x7, 0x109, 0xa, 0x7, 0xd, 0x7, 0xe, 0x7, 0x10a, 0x5, 0x7, 0x10d, 0xa, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x112, 0xa, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x7, 0x7, 0x11c, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x11f, 0xb, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x122, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x12c, 0xa, 0x7, 0xc, 
    0x7, 0xe, 0x7, 0x12f, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x13a, 0xa, 
    0x7, 0xc, 0x7, 0xe, 0x7, 0x13d, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x144, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x147, 
    0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0x14e, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 
    0x7, 0x155, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x158, 0xb, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 
    0x168, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x16b, 0xb, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x17d, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0x182, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x1b8, 0xa, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x5, 0x7, 0x26a, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x7, 0x8, 0x270, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x273, 0xb, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 
    0x5, 0xa, 0x27c, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x281, 
    0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x5, 0xd, 0x28a, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x293, 0xa, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x2a6, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x5, 0xd, 0x2ac, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x5, 0xd, 0x2b2, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x2bd, 
    0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 
    0x2c4, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 
    0xe, 0x2d2, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x2d7, 
    0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x2db, 0xa, 0x10, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x5, 0x15, 0x2eb, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x2ef, 
    0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x2f2, 0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x30c, 0xa, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0x313, 0xa, 0x16, 
    0xc, 0x16, 0xe, 0x16, 0x316, 0xb, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 
    0x16, 0x321, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 
    0x326, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x329, 0xb, 0x17, 0x3, 0x18, 
    0x5, 0x18, 0x32c, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 
    0x331, 0xa, 0x18, 0x3, 0x18, 0x7, 0x18, 0x334, 0xa, 0x18, 0xc, 0x18, 
    0xe, 0x18, 0x337, 0xb, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 
    0x33c, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x33f, 0xb, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x344, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 
    0x347, 0xb, 0x1a, 0x3, 0x1b, 0x5, 0x1b, 0x34a, 0xa, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1b, 0x5, 0x1b, 0x354, 0xa, 0x1b, 0x3, 0x1c, 0x6, 0x1c, 0x357, 0xa, 
    0x1c, 0xd, 0x1c, 0xe, 0x1c, 0x358, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x5, 0x1d, 0x35e, 0xa, 0x1d, 0x3, 0x1e, 0x5, 0x1e, 0x361, 0xa, 0x1e, 
    0x3, 0x1e, 0x5, 0x1e, 0x364, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x7, 0x1e, 0x36a, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x36d, 
    0xb, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x370, 0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 
    0x5, 0x1f, 0x374, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x5, 0x20, 0x37b, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x5, 0x24, 0x384, 0xa, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x25, 0x3, 0x25, 0x5, 0x25, 0x3b5, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x27, 0x3, 0x27, 0x5, 0x27, 0x3c1, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x27, 0x7, 0x27, 0x3c6, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0x3c9, 
    0xb, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
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
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x429, 0xa, 0x28, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 
    0x437, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x461, 0xa, 0x29, 0xc, 0x29, 
    0xe, 0x29, 0x464, 0xb, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 
    0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x475, 
    0xa, 0x2d, 0x3, 0x2d, 0x2, 0x4, 0x4c, 0x50, 0x2e, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 
    0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 
    0x52, 0x54, 0x56, 0x58, 0x2, 0x7, 0x4, 0x2, 0x22, 0x22, 0xa3, 0xa3, 
    0x3, 0x2, 0x5b, 0x5c, 0x3, 0x2, 0xa6, 0xa8, 0x3, 0x2, 0x8b, 0x8c, 0x3, 
    0x2, 0x37, 0x3e, 0x2, 0x53c, 0x2, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x4, 0x77, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x8d, 0x3, 0x2, 0x2, 0x2, 0xc, 0x269, 0x3, 0x2, 0x2, 
    0x2, 0xe, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x10, 0x277, 0x3, 0x2, 0x2, 0x2, 
    0x12, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x14, 0x280, 0x3, 0x2, 0x2, 0x2, 0x16, 
    0x282, 0x3, 0x2, 0x2, 0x2, 0x18, 0x2bc, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x2d1, 
    0x3, 0x2, 0x2, 0x2, 0x1c, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x2da, 0x3, 
    0x2, 0x2, 0x2, 0x20, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x22, 0x2de, 0x3, 0x2, 
    0x2, 0x2, 0x24, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x26, 0x2e2, 0x3, 0x2, 0x2, 
    0x2, 0x28, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x320, 0x3, 0x2, 0x2, 0x2, 
    0x2c, 0x322, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x30, 
    0x338, 0x3, 0x2, 0x2, 0x2, 0x32, 0x340, 0x3, 0x2, 0x2, 0x2, 0x34, 0x353, 
    0x3, 0x2, 0x2, 0x2, 0x36, 0x356, 0x3, 0x2, 0x2, 0x2, 0x38, 0x35d, 0x3, 
    0x2, 0x2, 0x2, 0x3a, 0x360, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x373, 0x3, 0x2, 
    0x2, 0x2, 0x3e, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x40, 0x37c, 0x3, 0x2, 0x2, 
    0x2, 0x42, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x44, 0x380, 0x3, 0x2, 0x2, 0x2, 
    0x46, 0x383, 0x3, 0x2, 0x2, 0x2, 0x48, 0x3b4, 0x3, 0x2, 0x2, 0x2, 0x4a, 
    0x3b6, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x3c0, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x428, 
    0x3, 0x2, 0x2, 0x2, 0x50, 0x436, 0x3, 0x2, 0x2, 0x2, 0x52, 0x465, 0x3, 
    0x2, 0x2, 0x2, 0x54, 0x469, 0x3, 0x2, 0x2, 0x2, 0x56, 0x46c, 0x3, 0x2, 
    0x2, 0x2, 0x58, 0x474, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5c, 0x5, 0x4, 0x3, 
    0x2, 0x5b, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x60, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 
    0x7, 0x2, 0x2, 0x3, 0x61, 0x3, 0x3, 0x2, 0x2, 0x2, 0x62, 0x78, 0x7, 
    0x97, 0x2, 0x2, 0x63, 0x65, 0x5, 0xa, 0x6, 0x2, 0x64, 0x63, 0x3, 0x2, 
    0x2, 0x2, 0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 0x65, 0x67, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x68, 0x9, 0x2, 0x2, 0x2, 0x67, 0x66, 0x3, 0x2, 0x2, 0x2, 
    0x67, 0x68, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 
    0x78, 0x7, 0x97, 0x2, 0x2, 0x6a, 0x6c, 0x5, 0xa, 0x6, 0x2, 0x6b, 0x6a, 
    0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6e, 0x3, 
    0x2, 0x2, 0x2, 0x6d, 0x6f, 0x5, 0xc, 0x7, 0x2, 0x6e, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0x71, 0x3, 0x2, 0x2, 0x2, 0x71, 0x73, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x74, 0x9, 0x2, 0x2, 0x2, 0x73, 0x72, 0x3, 0x2, 0x2, 0x2, 0x73, 
    0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 
    0x7, 0x97, 0x2, 0x2, 0x76, 0x78, 0x3, 0x2, 0x2, 0x2, 0x77, 0x62, 0x3, 
    0x2, 0x2, 0x2, 0x77, 0x64, 0x3, 0x2, 0x2, 0x2, 0x77, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x78, 0x5, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7b, 0x5, 0xc, 0x7, 
    0x2, 0x7a, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7e, 0x3, 0x2, 0x2, 0x2, 
    0x7c, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x81, 
    0x5, 0xc, 0x7, 0x2, 0x80, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x81, 0x84, 0x3, 
    0x2, 0x2, 0x2, 0x82, 0x80, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x3, 0x2, 
    0x2, 0x2, 0x83, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 
    0x2, 0x85, 0x87, 0x5, 0x4, 0x3, 0x2, 0x86, 0x85, 0x3, 0x2, 0x2, 0x2, 
    0x87, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x88, 
    0x89, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 
    0x3, 0x2, 0x2, 0x2, 0x8b, 0x82, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x88, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x9, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0xb0, 
    0x2, 0x2, 0x8e, 0xb, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x26a, 0x7, 0x9b, 0x2, 
    0x2, 0x90, 0x26a, 0x7, 0x3, 0x2, 0x2, 0x91, 0x92, 0x7, 0x4, 0x2, 0x2, 
    0x92, 0x93, 0x5, 0x3c, 0x1f, 0x2, 0x93, 0x94, 0x7, 0x1c, 0x2, 0x2, 0x94, 
    0x96, 0x7, 0x97, 0x2, 0x2, 0x95, 0x97, 0x5, 0xe, 0x8, 0x2, 0x96, 0x95, 
    0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 0x98, 0x96, 0x3, 
    0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9c, 0x3, 0x2, 
    0x2, 0x2, 0x9a, 0x9b, 0x7, 0x1e, 0x2, 0x2, 0x9b, 0x9d, 0x5, 0x8, 0x5, 
    0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 
    0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0xb, 0x2, 0x2, 0x9f, 
    0x26a, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x7, 0x5, 0x2, 0x2, 0xa1, 0x26a, 
    0x5, 0x4c, 0x27, 0x2, 0xa2, 0xa3, 0x7, 0x6, 0x2, 0x2, 0xa3, 0xa8, 0x5, 
    0x12, 0xa, 0x2, 0xa4, 0xa5, 0x7, 0x9c, 0x2, 0x2, 0xa5, 0xa7, 0x5, 0x12, 
    0xa, 0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xaa, 0x3, 0x2, 0x2, 
    0x2, 0xa8, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x3, 0x2, 0x2, 0x2, 
    0xa9, 0x26a, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xab, 
    0xac, 0x7, 0x8, 0x2, 0x2, 0xac, 0xb1, 0x5, 0x2a, 0x16, 0x2, 0xad, 0xae, 
    0x7, 0x9c, 0x2, 0x2, 0xae, 0xb0, 0x5, 0x2a, 0x16, 0x2, 0xaf, 0xad, 0x3, 
    0x2, 0x2, 0x2, 0xb0, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xaf, 0x3, 0x2, 
    0x2, 0x2, 0xb1, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x26a, 0x3, 0x2, 0x2, 
    0x2, 0xb3, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x26a, 0x7, 0xa, 0x2, 0x2, 
    0xb5, 0xb7, 0x7, 0x25, 0x2, 0x2, 0xb6, 0xb8, 0x5, 0x3c, 0x1f, 0x2, 0xb7, 
    0xb6, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x26a, 
    0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x7, 0x7, 0x2, 0x2, 0xba, 0xbb, 0x5, 
    0x10, 0x9, 0x2, 0xbb, 0xbd, 0x7, 0x9e, 0x2, 0x2, 0xbc, 0xbe, 0x5, 0x2e, 
    0x18, 0x2, 0xbd, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 0x2, 0x2, 
    0x2, 0xbe, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x7, 0xa0, 0x2, 0x2, 
    0xc0, 0xc1, 0x5, 0x8, 0x5, 0x2, 0xc1, 0xc2, 0x7, 0xd, 0x2, 0x2, 0xc2, 
    0x26a, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x7, 0x2, 0x2, 0xc4, 0xc5, 
    0x7, 0xa5, 0x2, 0x2, 0xc5, 0xc7, 0x7, 0x9e, 0x2, 0x2, 0xc6, 0xc8, 0x5, 
    0x2e, 0x18, 0x2, 0xc7, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 
    0x2, 0x2, 0xc8, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x7, 0xa0, 0x2, 
    0x2, 0xca, 0xcb, 0x5, 0x8, 0x5, 0x2, 0xcb, 0xcc, 0x7, 0xe, 0x2, 0x2, 
    0xcc, 0x26a, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcf, 0x7, 0x11, 0x2, 0x2, 0xce, 
    0xd0, 0x7, 0x19, 0x2, 0x2, 0xcf, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 
    0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x5, 
    0x1e, 0x10, 0x2, 0xd2, 0xd3, 0x7, 0x7e, 0x2, 0x2, 0xd3, 0xd4, 0x5, 0x50, 
    0x29, 0x2, 0xd4, 0xd5, 0x7, 0x2a, 0x2, 0x2, 0xd5, 0xd8, 0x5, 0x50, 0x29, 
    0x2, 0xd6, 0xd7, 0x7, 0x27, 0x2, 0x2, 0xd7, 0xd9, 0x5, 0x50, 0x29, 0x2, 
    0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 
    0xda, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x5, 0x8, 0x5, 0x2, 0xdb, 0xdc, 
    0x7, 0x1b, 0x2, 0x2, 0xdc, 0x26a, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdf, 0x7, 
    0x11, 0x2, 0x2, 0xde, 0xe0, 0x7, 0x19, 0x2, 0x2, 0xdf, 0xde, 0x3, 0x2, 
    0x2, 0x2, 0xdf, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x3, 0x2, 0x2, 
    0x2, 0xe1, 0xe2, 0x5, 0x1c, 0xf, 0x2, 0xe2, 0xe3, 0x7, 0x15, 0x2, 0x2, 
    0xe3, 0xe4, 0x5, 0x1c, 0xf, 0x2, 0xe4, 0xe5, 0x7, 0x9e, 0x2, 0x2, 0xe5, 
    0xe6, 0x7, 0xa0, 0x2, 0x2, 0xe6, 0xe7, 0x5, 0x8, 0x5, 0x2, 0xe7, 0xe8, 
    0x7, 0x1b, 0x2, 0x2, 0xe8, 0x26a, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x5, 
    0x10, 0x9, 0x2, 0xea, 0xec, 0x7, 0x9e, 0x2, 0x2, 0xeb, 0xed, 0x5, 0x30, 
    0x19, 0x2, 0xec, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x3, 0x2, 0x2, 
    0x2, 0xed, 0xee, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x7, 0xa0, 0x2, 0x2, 
    0xef, 0x26a, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0x14, 0x2, 0x2, 0xf1, 
    0xf3, 0x5, 0x3c, 0x1f, 0x2, 0xf2, 0xf4, 0x7, 0x29, 0x2, 0x2, 0xf3, 0xf2, 
    0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x3, 
    0x2, 0x2, 0x2, 0xf5, 0xf8, 0x5, 0x6, 0x4, 0x2, 0xf6, 0xf7, 0x7, 0x9, 
    0x2, 0x2, 0xf7, 0xf9, 0x5, 0x6, 0x4, 0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 
    0x2, 0xf8, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf9, 0x26a, 0x3, 0x2, 0x2, 0x2, 
    0xfa, 0xfb, 0x7, 0x14, 0x2, 0x2, 0xfb, 0xfd, 0x5, 0x3c, 0x1f, 0x2, 0xfc, 
    0xfe, 0x7, 0x29, 0x2, 0x2, 0xfd, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 
    0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 0x2, 0xff, 0x101, 0x7, 
    0x97, 0x2, 0x2, 0x100, 0x102, 0x5, 0x4, 0x3, 0x2, 0x101, 0x100, 0x3, 
    0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 0x2, 0x2, 0x2, 0x103, 0x101, 0x3, 
    0x2, 0x2, 0x2, 0x103, 0x104, 0x3, 0x2, 0x2, 0x2, 0x104, 0x10c, 0x3, 
    0x2, 0x2, 0x2, 0x105, 0x106, 0x7, 0x9, 0x2, 0x2, 0x106, 0x108, 0x7, 
    0x97, 0x2, 0x2, 0x107, 0x109, 0x5, 0x4, 0x3, 0x2, 0x108, 0x107, 0x3, 
    0x2, 0x2, 0x2, 0x109, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x108, 0x3, 
    0x2, 0x2, 0x2, 0x10a, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10d, 0x3, 
    0x2, 0x2, 0x2, 0x10c, 0x105, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x3, 
    0x2, 0x2, 0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x7, 
    0xc, 0x2, 0x2, 0x10f, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x110, 0x112, 0x7, 
    0x1a, 0x2, 0x2, 0x111, 0x110, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x3, 
    0x2, 0x2, 0x2, 0x112, 0x113, 0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 0x5, 
    0x28, 0x15, 0x2, 0x114, 0x115, 0x7, 0x7e, 0x2, 0x2, 0x115, 0x11d, 0x5, 
    0x3c, 0x1f, 0x2, 0x116, 0x117, 0x7, 0x9c, 0x2, 0x2, 0x117, 0x118, 0x5, 
    0x28, 0x15, 0x2, 0x118, 0x119, 0x7, 0x7e, 0x2, 0x2, 0x119, 0x11a, 0x5, 
    0x3c, 0x1f, 0x2, 0x11a, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x116, 0x3, 
    0x2, 0x2, 0x2, 0x11c, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11b, 0x3, 
    0x2, 0x2, 0x2, 0x11d, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x120, 0x122, 0x7, 
    0x18, 0x2, 0x2, 0x121, 0x120, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x3, 
    0x2, 0x2, 0x2, 0x122, 0x123, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x5, 
    0x28, 0x15, 0x2, 0x124, 0x125, 0x7, 0x7e, 0x2, 0x2, 0x125, 0x12d, 0x5, 
    0x3c, 0x1f, 0x2, 0x126, 0x127, 0x7, 0x9c, 0x2, 0x2, 0x127, 0x128, 0x5, 
    0x28, 0x15, 0x2, 0x128, 0x129, 0x7, 0x7e, 0x2, 0x2, 0x129, 0x12a, 0x5, 
    0x3c, 0x1f, 0x2, 0x12a, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x126, 0x3, 
    0x2, 0x2, 0x2, 0x12c, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12b, 0x3, 
    0x2, 0x2, 0x2, 0x12d, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x12f, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x7, 
    0x19, 0x2, 0x2, 0x131, 0x132, 0x5, 0x28, 0x15, 0x2, 0x132, 0x133, 0x7, 
    0x7e, 0x2, 0x2, 0x133, 0x13b, 0x5, 0x3c, 0x1f, 0x2, 0x134, 0x135, 0x7, 
    0x9c, 0x2, 0x2, 0x135, 0x136, 0x5, 0x28, 0x15, 0x2, 0x136, 0x137, 0x7, 
    0x7e, 0x2, 0x2, 0x137, 0x138, 0x5, 0x3c, 0x1f, 0x2, 0x138, 0x13a, 0x3, 
    0x2, 0x2, 0x2, 0x139, 0x134, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13d, 0x3, 
    0x2, 0x2, 0x2, 0x13b, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x3, 
    0x2, 0x2, 0x2, 0x13c, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13b, 0x3, 
    0x2, 0x2, 0x2, 0x13e, 0x13f, 0x7, 0x19, 0x2, 0x2, 0x13f, 0x140, 0x7, 
    0x8, 0x2, 0x2, 0x140, 0x145, 0x5, 0x2a, 0x16, 0x2, 0x141, 0x142, 0x7, 
    0x9c, 0x2, 0x2, 0x142, 0x144, 0x5, 0x2a, 0x16, 0x2, 0x143, 0x141, 0x3, 
    0x2, 0x2, 0x2, 0x144, 0x147, 0x3, 0x2, 0x2, 0x2, 0x145, 0x143, 0x3, 
    0x2, 0x2, 0x2, 0x145, 0x146, 0x3, 0x2, 0x2, 0x2, 0x146, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x147, 0x145, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0x7, 
    0x1d, 0x2, 0x2, 0x149, 0x26a, 0x5, 0x4c, 0x27, 0x2, 0x14a, 0x14b, 0x7, 
    0xa5, 0x2, 0x2, 0x14b, 0x14d, 0x7, 0x9e, 0x2, 0x2, 0x14c, 0x14e, 0x5, 
    0x30, 0x19, 0x2, 0x14d, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 0x3, 
    0x2, 0x2, 0x2, 0x14e, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x26a, 0x7, 
    0xa0, 0x2, 0x2, 0x150, 0x151, 0x7, 0x21, 0x2, 0x2, 0x151, 0x156, 0x5, 
    0x28, 0x15, 0x2, 0x152, 0x153, 0x7, 0x9c, 0x2, 0x2, 0x153, 0x155, 0x5, 
    0x28, 0x15, 0x2, 0x154, 0x152, 0x3, 0x2, 0x2, 0x2, 0x155, 0x158, 0x3, 
    0x2, 0x2, 0x2, 0x156, 0x154, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 0x3, 
    0x2, 0x2, 0x2, 0x157, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x158, 0x156, 0x3, 
    0x2, 0x2, 0x2, 0x159, 0x26a, 0x7, 0x24, 0x2, 0x2, 0x15a, 0x15b, 0x7, 
    0x28, 0x2, 0x2, 0x15b, 0x15c, 0x5, 0x1c, 0xf, 0x2, 0x15c, 0x15d, 0x7, 
    0x9c, 0x2, 0x2, 0x15d, 0x15e, 0x5, 0x1c, 0xf, 0x2, 0x15e, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x15f, 0x26a, 0x7, 0x2b, 0x2, 0x2, 0x160, 0x26a, 0x7, 
    0x2c, 0x2, 0x2, 0x161, 0x162, 0x7, 0x2e, 0x2, 0x2, 0x162, 0x163, 0x5, 
    0x20, 0x11, 0x2, 0x163, 0x164, 0x7, 0x9e, 0x2, 0x2, 0x164, 0x169, 0x5, 
    0x1c, 0xf, 0x2, 0x165, 0x166, 0x7, 0x9c, 0x2, 0x2, 0x166, 0x168, 0x5, 
    0x1c, 0xf, 0x2, 0x167, 0x165, 0x3, 0x2, 0x2, 0x2, 0x168, 0x16b, 0x3, 
    0x2, 0x2, 0x2, 0x169, 0x167, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16a, 0x3, 
    0x2, 0x2, 0x2, 0x16a, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x169, 0x3, 
    0x2, 0x2, 0x2, 0x16c, 0x16d, 0x7, 0xa0, 0x2, 0x2, 0x16d, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x16e, 0x16f, 0x7, 0x23, 0x2, 0x2, 0x16f, 0x170, 0x5, 
    0x8, 0x5, 0x2, 0x170, 0x171, 0x7, 0x2f, 0x2, 0x2, 0x171, 0x172, 0x5, 
    0x3c, 0x1f, 0x2, 0x172, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x173, 0x174, 0x7, 
    0x31, 0x2, 0x2, 0x174, 0x175, 0x5, 0x3c, 0x1f, 0x2, 0x175, 0x176, 0x5, 
    0x8, 0x5, 0x2, 0x176, 0x177, 0x7, 0xf, 0x2, 0x2, 0x177, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x178, 0x17c, 0x7, 0x17, 0x2, 0x2, 0x179, 0x17a, 0x5, 
    0x4c, 0x27, 0x2, 0x17a, 0x17b, 0x7, 0x9c, 0x2, 0x2, 0x17b, 0x17d, 0x3, 
    0x2, 0x2, 0x2, 0x17c, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 0x3, 
    0x2, 0x2, 0x2, 0x17d, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x26a, 0x5, 
    0x2c, 0x17, 0x2, 0x17f, 0x181, 0x7, 0x1f, 0x2, 0x2, 0x180, 0x182, 0x5, 
    0x3a, 0x1e, 0x2, 0x181, 0x180, 0x3, 0x2, 0x2, 0x2, 0x181, 0x182, 0x3, 
    0x2, 0x2, 0x2, 0x182, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x183, 0x184, 0x7, 
    0x32, 0x2, 0x2, 0x184, 0x185, 0x5, 0x22, 0x12, 0x2, 0x185, 0x186, 0x7, 
    0x9c, 0x2, 0x2, 0x186, 0x187, 0x5, 0x22, 0x12, 0x2, 0x187, 0x188, 0x7, 
    0x9c, 0x2, 0x2, 0x188, 0x189, 0x5, 0x22, 0x12, 0x2, 0x189, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x18a, 0x18b, 0x7, 0x33, 0x2, 0x2, 0x18b, 0x26a, 0x5, 
    0x50, 0x29, 0x2, 0x18c, 0x18d, 0x7, 0x34, 0x2, 0x2, 0x18d, 0x26a, 0x5, 
    0x50, 0x29, 0x2, 0x18e, 0x26a, 0x7, 0x35, 0x2, 0x2, 0x18f, 0x26a, 0x7, 
    0x36, 0x2, 0x2, 0x190, 0x191, 0x5, 0x28, 0x15, 0x2, 0x191, 0x192, 0x7, 
    0x93, 0x2, 0x2, 0x192, 0x193, 0x5, 0x50, 0x29, 0x2, 0x193, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x194, 0x195, 0x5, 0x28, 0x15, 0x2, 0x195, 0x196, 0x7, 
    0x94, 0x2, 0x2, 0x196, 0x197, 0x5, 0x50, 0x29, 0x2, 0x197, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x198, 0x199, 0x5, 0x28, 0x15, 0x2, 0x199, 0x19a, 0x7, 
    0x91, 0x2, 0x2, 0x19a, 0x19b, 0x5, 0x50, 0x29, 0x2, 0x19b, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x19c, 0x19d, 0x5, 0x28, 0x15, 0x2, 0x19d, 0x19e, 0x7, 
    0x92, 0x2, 0x2, 0x19e, 0x19f, 0x5, 0x50, 0x29, 0x2, 0x19f, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x1a0, 0x1a1, 0x5, 0x28, 0x15, 0x2, 0x1a1, 0x1a2, 0x7, 
    0x95, 0x2, 0x2, 0x1a2, 0x1a3, 0x5, 0x50, 0x29, 0x2, 0x1a3, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x1a4, 0x1a5, 0x5, 0x28, 0x15, 0x2, 0x1a5, 0x1a6, 0x7, 
    0x96, 0x2, 0x2, 0x1a6, 0x1a7, 0x5, 0x50, 0x29, 0x2, 0x1a7, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x1a8, 0x1a9, 0x7, 0x40, 0x2, 0x2, 0x1a9, 0x1aa, 0x5, 
    0x50, 0x29, 0x2, 0x1aa, 0x1ab, 0x7, 0x9c, 0x2, 0x2, 0x1ab, 0x1ac, 0x5, 
    0x50, 0x29, 0x2, 0x1ac, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ae, 0x7, 
    0x3f, 0x2, 0x2, 0x1ae, 0x26a, 0x5, 0x50, 0x29, 0x2, 0x1af, 0x1b0, 0x7, 
    0x48, 0x2, 0x2, 0x1b0, 0x1b1, 0x5, 0x50, 0x29, 0x2, 0x1b1, 0x1b2, 0x7, 
    0x7e, 0x2, 0x2, 0x1b2, 0x1b3, 0x5, 0x50, 0x29, 0x2, 0x1b3, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x7, 0x41, 0x2, 0x2, 0x1b5, 0x26a, 0x5, 
    0x50, 0x29, 0x2, 0x1b6, 0x1b8, 0x7, 0x19, 0x2, 0x2, 0x1b7, 0x1b6, 0x3, 
    0x2, 0x2, 0x2, 0x1b7, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x3, 
    0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x5, 0x24, 0x13, 0x2, 0x1ba, 0x1bb, 0x7, 
    0x9e, 0x2, 0x2, 0x1bb, 0x1bc, 0x7, 0xa0, 0x2, 0x2, 0x1bc, 0x1bd, 0x7, 
    0x7e, 0x2, 0x2, 0x1bd, 0x1be, 0x7, 0x44, 0x2, 0x2, 0x1be, 0x1bf, 0x7, 
    0x9e, 0x2, 0x2, 0x1bf, 0x1c0, 0x5, 0x4c, 0x27, 0x2, 0x1c0, 0x1c1, 0x7, 
    0xa0, 0x2, 0x2, 0x1c1, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x26a, 0x7, 
    0x4b, 0x2, 0x2, 0x1c3, 0x1c4, 0x7, 0x4e, 0x2, 0x2, 0x1c4, 0x26a, 0x5, 
    0x50, 0x29, 0x2, 0x1c5, 0x1c6, 0x7, 0x4e, 0x2, 0x2, 0x1c6, 0x1c7, 0x5, 
    0x50, 0x29, 0x2, 0x1c7, 0x1c8, 0x7, 0x9c, 0x2, 0x2, 0x1c8, 0x1c9, 0x5, 
    0x50, 0x29, 0x2, 0x1c9, 0x1ca, 0x7, 0x9c, 0x2, 0x2, 0x1ca, 0x1cb, 0x5, 
    0x50, 0x29, 0x2, 0x1cb, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1cd, 0x7, 
    0x4f, 0x2, 0x2, 0x1cd, 0x26a, 0x5, 0x50, 0x29, 0x2, 0x1ce, 0x1cf, 0x7, 
    0x4f, 0x2, 0x2, 0x1cf, 0x1d0, 0x5, 0x50, 0x29, 0x2, 0x1d0, 0x1d1, 0x7, 
    0x9c, 0x2, 0x2, 0x1d1, 0x1d2, 0x5, 0x50, 0x29, 0x2, 0x1d2, 0x1d3, 0x7, 
    0x9c, 0x2, 0x2, 0x1d3, 0x1d4, 0x5, 0x50, 0x29, 0x2, 0x1d4, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x1d5, 0x26a, 0x7, 0x53, 0x2, 0x2, 0x1d6, 0x1d7, 0x7, 
    0x53, 0x2, 0x2, 0x1d7, 0x1d8, 0x5, 0x50, 0x29, 0x2, 0x1d8, 0x1d9, 0x7, 
    0x9c, 0x2, 0x2, 0x1d9, 0x1da, 0x5, 0x50, 0x29, 0x2, 0x1da, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x1db, 0x1dc, 0x7, 0x53, 0x2, 0x2, 0x1dc, 0x26a, 0x7, 
    0x49, 0x2, 0x2, 0x1dd, 0x1de, 0x7, 0x53, 0x2, 0x2, 0x1de, 0x1df, 0x7, 
    0x49, 0x2, 0x2, 0x1df, 0x1e0, 0x5, 0x50, 0x29, 0x2, 0x1e0, 0x1e1, 0x7, 
    0x9c, 0x2, 0x2, 0x1e1, 0x1e2, 0x5, 0x50, 0x29, 0x2, 0x1e2, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x1e3, 0x26a, 0x7, 0x51, 0x2, 0x2, 0x1e4, 0x1e5, 0x7, 
    0x4a, 0x2, 0x2, 0x1e5, 0x1e6, 0x5, 0x50, 0x29, 0x2, 0x1e6, 0x1e7, 0x7, 
    0x9c, 0x2, 0x2, 0x1e7, 0x1e8, 0x5, 0x50, 0x29, 0x2, 0x1e8, 0x1e9, 0x7, 
    0x9c, 0x2, 0x2, 0x1e9, 0x1ea, 0x5, 0x50, 0x29, 0x2, 0x1ea, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x1eb, 0x1ec, 0x7, 0x4a, 0x2, 0x2, 0x1ec, 0x1ed, 0x7, 
    0x50, 0x2, 0x2, 0x1ed, 0x1ee, 0x5, 0x50, 0x29, 0x2, 0x1ee, 0x1ef, 0x7, 
    0x9c, 0x2, 0x2, 0x1ef, 0x1f0, 0x5, 0x50, 0x29, 0x2, 0x1f0, 0x1f1, 0x7, 
    0x9c, 0x2, 0x2, 0x1f1, 0x1f2, 0x5, 0x50, 0x29, 0x2, 0x1f2, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x1f3, 0x1f4, 0x7, 0x54, 0x2, 0x2, 0x1f4, 0x1f5, 0x5, 
    0x50, 0x29, 0x2, 0x1f5, 0x1f6, 0x7, 0x9c, 0x2, 0x2, 0x1f6, 0x1f7, 0x5, 
    0x50, 0x29, 0x2, 0x1f7, 0x1f8, 0x7, 0x9c, 0x2, 0x2, 0x1f8, 0x1f9, 0x5, 
    0x50, 0x29, 0x2, 0x1f9, 0x1fa, 0x7, 0x9c, 0x2, 0x2, 0x1fa, 0x1fb, 0x5, 
    0x50, 0x29, 0x2, 0x1fb, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 0x7, 
    0x55, 0x2, 0x2, 0x1fd, 0x1fe, 0x5, 0x50, 0x29, 0x2, 0x1fe, 0x1ff, 0x7, 
    0x9c, 0x2, 0x2, 0x1ff, 0x200, 0x5, 0x50, 0x29, 0x2, 0x200, 0x201, 0x7, 
    0x9c, 0x2, 0x2, 0x201, 0x202, 0x5, 0x50, 0x29, 0x2, 0x202, 0x203, 0x7, 
    0x9c, 0x2, 0x2, 0x203, 0x204, 0x5, 0x50, 0x29, 0x2, 0x204, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x205, 0x206, 0x7, 0x55, 0x2, 0x2, 0x206, 0x207, 0x7, 
    0x50, 0x2, 0x2, 0x207, 0x208, 0x5, 0x50, 0x29, 0x2, 0x208, 0x209, 0x7, 
    0x9c, 0x2, 0x2, 0x209, 0x20a, 0x5, 0x50, 0x29, 0x2, 0x20a, 0x20b, 0x7, 
    0x9c, 0x2, 0x2, 0x20b, 0x20c, 0x5, 0x50, 0x29, 0x2, 0x20c, 0x20d, 0x7, 
    0x9c, 0x2, 0x2, 0x20d, 0x20e, 0x5, 0x50, 0x29, 0x2, 0x20e, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x20f, 0x210, 0x7, 0x5d, 0x2, 0x2, 0x210, 0x211, 0x5, 
    0x50, 0x29, 0x2, 0x211, 0x212, 0x7, 0x9c, 0x2, 0x2, 0x212, 0x213, 0x5, 
    0x50, 0x29, 0x2, 0x213, 0x214, 0x7, 0x9c, 0x2, 0x2, 0x214, 0x215, 0x5, 
    0x50, 0x29, 0x2, 0x215, 0x216, 0x7, 0x9c, 0x2, 0x2, 0x216, 0x217, 0x5, 
    0x50, 0x29, 0x2, 0x217, 0x218, 0x7, 0x9c, 0x2, 0x2, 0x218, 0x219, 0x5, 
    0x50, 0x29, 0x2, 0x219, 0x21a, 0x7, 0x9c, 0x2, 0x2, 0x21a, 0x21b, 0x5, 
    0x50, 0x29, 0x2, 0x21b, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21d, 0x7, 
    0x5d, 0x2, 0x2, 0x21d, 0x21e, 0x7, 0x50, 0x2, 0x2, 0x21e, 0x21f, 0x5, 
    0x50, 0x29, 0x2, 0x21f, 0x220, 0x7, 0x9c, 0x2, 0x2, 0x220, 0x221, 0x5, 
    0x50, 0x29, 0x2, 0x221, 0x222, 0x7, 0x9c, 0x2, 0x2, 0x222, 0x223, 0x5, 
    0x50, 0x29, 0x2, 0x223, 0x224, 0x7, 0x9c, 0x2, 0x2, 0x224, 0x225, 0x5, 
    0x50, 0x29, 0x2, 0x225, 0x226, 0x7, 0x9c, 0x2, 0x2, 0x226, 0x227, 0x5, 
    0x50, 0x29, 0x2, 0x227, 0x228, 0x7, 0x9c, 0x2, 0x2, 0x228, 0x229, 0x5, 
    0x50, 0x29, 0x2, 0x229, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22b, 0x7, 
    0x5d, 0x2, 0x2, 0x22b, 0x22c, 0x7, 0x58, 0x2, 0x2, 0x22c, 0x22d, 0x5, 
    0x50, 0x29, 0x2, 0x22d, 0x22e, 0x7, 0x9c, 0x2, 0x2, 0x22e, 0x22f, 0x5, 
    0x50, 0x29, 0x2, 0x22f, 0x230, 0x7, 0x9c, 0x2, 0x2, 0x230, 0x231, 0x5, 
    0x50, 0x29, 0x2, 0x231, 0x232, 0x7, 0x9c, 0x2, 0x2, 0x232, 0x233, 0x5, 
    0x50, 0x29, 0x2, 0x233, 0x234, 0x7, 0x9c, 0x2, 0x2, 0x234, 0x235, 0x5, 
    0x50, 0x29, 0x2, 0x235, 0x236, 0x7, 0x9c, 0x2, 0x2, 0x236, 0x237, 0x5, 
    0x50, 0x29, 0x2, 0x237, 0x238, 0x7, 0x9c, 0x2, 0x2, 0x238, 0x239, 0x5, 
    0x50, 0x29, 0x2, 0x239, 0x23a, 0x7, 0x9c, 0x2, 0x2, 0x23a, 0x23b, 0x5, 
    0x50, 0x29, 0x2, 0x23b, 0x23c, 0x7, 0x9c, 0x2, 0x2, 0x23c, 0x23d, 0x5, 
    0x50, 0x29, 0x2, 0x23d, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 0x7, 
    0x56, 0x2, 0x2, 0x23f, 0x240, 0x5, 0x50, 0x29, 0x2, 0x240, 0x241, 0x7, 
    0x9c, 0x2, 0x2, 0x241, 0x242, 0x5, 0x50, 0x29, 0x2, 0x242, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x243, 0x244, 0x7, 0x4c, 0x2, 0x2, 0x244, 0x245, 0x5, 
    0x50, 0x29, 0x2, 0x245, 0x246, 0x7, 0x9c, 0x2, 0x2, 0x246, 0x247, 0x5, 
    0x50, 0x29, 0x2, 0x247, 0x248, 0x7, 0x9c, 0x2, 0x2, 0x248, 0x249, 0x5, 
    0x50, 0x29, 0x2, 0x249, 0x24a, 0x7, 0x9c, 0x2, 0x2, 0x24a, 0x24b, 0x5, 
    0x50, 0x29, 0x2, 0x24b, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x26a, 0x7, 
    0x4d, 0x2, 0x2, 0x24d, 0x24e, 0x7, 0x59, 0x2, 0x2, 0x24e, 0x24f, 0x5, 
    0x50, 0x29, 0x2, 0x24f, 0x250, 0x7, 0x9c, 0x2, 0x2, 0x250, 0x251, 0x5, 
    0x50, 0x29, 0x2, 0x251, 0x252, 0x7, 0x9c, 0x2, 0x2, 0x252, 0x253, 0x5, 
    0x50, 0x29, 0x2, 0x253, 0x254, 0x7, 0x9c, 0x2, 0x2, 0x254, 0x255, 0x5, 
    0x50, 0x29, 0x2, 0x255, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x7, 
    0x5a, 0x2, 0x2, 0x257, 0x258, 0x5, 0x50, 0x29, 0x2, 0x258, 0x259, 0x7, 
    0x9c, 0x2, 0x2, 0x259, 0x25a, 0x5, 0x50, 0x29, 0x2, 0x25a, 0x25b, 0x7, 
    0x9c, 0x2, 0x2, 0x25b, 0x25c, 0x5, 0x50, 0x29, 0x2, 0x25c, 0x25d, 0x7, 
    0x9c, 0x2, 0x2, 0x25d, 0x25e, 0x5, 0x4c, 0x27, 0x2, 0x25e, 0x26a, 0x3, 
    0x2, 0x2, 0x2, 0x25f, 0x260, 0x9, 0x3, 0x2, 0x2, 0x260, 0x261, 0x5, 
    0x50, 0x29, 0x2, 0x261, 0x262, 0x7, 0x9c, 0x2, 0x2, 0x262, 0x263, 0x5, 
    0x50, 0x29, 0x2, 0x263, 0x264, 0x7, 0x9c, 0x2, 0x2, 0x264, 0x265, 0x5, 
    0x50, 0x29, 0x2, 0x265, 0x266, 0x7, 0x9c, 0x2, 0x2, 0x266, 0x267, 0x5, 
    0x4c, 0x27, 0x2, 0x267, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x268, 0x26a, 0x7, 
    0x52, 0x2, 0x2, 0x269, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x269, 0x90, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x91, 0x3, 0x2, 0x2, 0x2, 0x269, 0xa0, 0x3, 0x2, 0x2, 
    0x2, 0x269, 0xa2, 0x3, 0x2, 0x2, 0x2, 0x269, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0x269, 0xb4, 0x3, 0x2, 0x2, 0x2, 0x269, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x269, 
    0xb9, 0x3, 0x2, 0x2, 0x2, 0x269, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x269, 0xcd, 
    0x3, 0x2, 0x2, 0x2, 0x269, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x269, 0xe9, 0x3, 
    0x2, 0x2, 0x2, 0x269, 0xf0, 0x3, 0x2, 0x2, 0x2, 0x269, 0xfa, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x111, 0x3, 0x2, 0x2, 0x2, 0x269, 0x121, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x130, 0x3, 0x2, 0x2, 0x2, 0x269, 0x13e, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x148, 0x3, 0x2, 0x2, 0x2, 0x269, 0x14a, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x150, 0x3, 0x2, 0x2, 0x2, 0x269, 0x159, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x269, 0x15f, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x160, 0x3, 0x2, 0x2, 0x2, 0x269, 0x161, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x269, 0x173, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x178, 0x3, 0x2, 0x2, 0x2, 0x269, 0x17f, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x183, 0x3, 0x2, 0x2, 0x2, 0x269, 0x18a, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x269, 0x18e, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x269, 0x190, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x194, 0x3, 0x2, 0x2, 0x2, 0x269, 0x198, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x269, 0x1a0, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x269, 0x1a8, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x269, 0x1af, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x269, 0x1b7, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x269, 0x1c3, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x269, 0x1cc, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x269, 0x1d5, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x269, 0x1db, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x269, 0x1e3, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x269, 0x1eb, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x269, 0x1fc, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x205, 0x3, 0x2, 0x2, 0x2, 0x269, 0x20f, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x269, 0x22a, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x269, 0x243, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x269, 0x24d, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x256, 0x3, 0x2, 0x2, 0x2, 0x269, 0x25f, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x268, 0x3, 0x2, 0x2, 0x2, 0x26a, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x26b, 0x26c, 0x7, 0x30, 0x2, 0x2, 0x26c, 0x271, 0x5, 0x3c, 0x1f, 
    0x2, 0x26d, 0x26e, 0x7, 0x9c, 0x2, 0x2, 0x26e, 0x270, 0x5, 0x3c, 0x1f, 
    0x2, 0x26f, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x270, 0x273, 0x3, 0x2, 0x2, 
    0x2, 0x271, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x271, 0x272, 0x3, 0x2, 0x2, 
    0x2, 0x272, 0x274, 0x3, 0x2, 0x2, 0x2, 0x273, 0x271, 0x3, 0x2, 0x2, 
    0x2, 0x274, 0x275, 0x7, 0x9b, 0x2, 0x2, 0x275, 0x276, 0x5, 0x8, 0x5, 
    0x2, 0x276, 0xf, 0x3, 0x2, 0x2, 0x2, 0x277, 0x278, 0x9, 0x4, 0x2, 0x2, 
    0x278, 0x11, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27c, 0x5, 0x3e, 0x20, 0x2, 
    0x27a, 0x27c, 0x5, 0x4a, 0x26, 0x2, 0x27b, 0x279, 0x3, 0x2, 0x2, 0x2, 
    0x27b, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x13, 0x3, 0x2, 0x2, 0x2, 0x27d, 
    0x281, 0x5, 0x18, 0xd, 0x2, 0x27e, 0x281, 0x5, 0x1a, 0xe, 0x2, 0x27f, 
    0x281, 0x5, 0x16, 0xc, 0x2, 0x280, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x280, 
    0x27e, 0x3, 0x2, 0x2, 0x2, 0x280, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x281, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 0x5, 0x26, 0x14, 0x2, 0x283, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0x284, 0x285, 0x5, 0x20, 0x11, 0x2, 0x285, 
    0x286, 0x7, 0x9e, 0x2, 0x2, 0x286, 0x289, 0x5, 0x50, 0x29, 0x2, 0x287, 
    0x288, 0x7, 0x9c, 0x2, 0x2, 0x288, 0x28a, 0x5, 0x50, 0x29, 0x2, 0x289, 
    0x287, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x28a, 
    0x28b, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28c, 0x7, 0xa0, 0x2, 0x2, 0x28c, 
    0x2bd, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x28e, 0x5, 0x22, 0x12, 0x2, 0x28e, 
    0x28f, 0x7, 0x9e, 0x2, 0x2, 0x28f, 0x292, 0x5, 0x50, 0x29, 0x2, 0x290, 
    0x291, 0x7, 0x9c, 0x2, 0x2, 0x291, 0x293, 0x5, 0x50, 0x29, 0x2, 0x292, 
    0x290, 0x3, 0x2, 0x2, 0x2, 0x292, 0x293, 0x3, 0x2, 0x2, 0x2, 0x293, 
    0x294, 0x3, 0x2, 0x2, 0x2, 0x294, 0x295, 0x7, 0xa0, 0x2, 0x2, 0x295, 
    0x2bd, 0x3, 0x2, 0x2, 0x2, 0x296, 0x297, 0x5, 0x16, 0xc, 0x2, 0x297, 
    0x298, 0x7, 0x9e, 0x2, 0x2, 0x298, 0x299, 0x5, 0x50, 0x29, 0x2, 0x299, 
    0x29a, 0x7, 0xa0, 0x2, 0x2, 0x29a, 0x29b, 0x5, 0x22, 0x12, 0x2, 0x29b, 
    0x2bd, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x29d, 0x5, 0x16, 0xc, 0x2, 0x29d, 
    0x29e, 0x7, 0x9e, 0x2, 0x2, 0x29e, 0x29f, 0x5, 0x50, 0x29, 0x2, 0x29f, 
    0x2a0, 0x7, 0xa0, 0x2, 0x2, 0x2a0, 0x2a1, 0x5, 0x20, 0x11, 0x2, 0x2a1, 
    0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a3, 0x7, 0xa7, 0x2, 0x2, 0x2a3, 
    0x2a5, 0x7, 0x9e, 0x2, 0x2, 0x2a4, 0x2a6, 0x5, 0x30, 0x19, 0x2, 0x2a5, 
    0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a6, 
    0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2bd, 0x7, 0xa0, 0x2, 0x2, 0x2a8, 
    0x2a9, 0x7, 0xa6, 0x2, 0x2, 0x2a9, 0x2ab, 0x7, 0x9e, 0x2, 0x2, 0x2aa, 
    0x2ac, 0x5, 0x30, 0x19, 0x2, 0x2ab, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2ab, 
    0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2ad, 
    0x2bd, 0x7, 0xa0, 0x2, 0x2, 0x2ae, 0x2af, 0x7, 0xa8, 0x2, 0x2, 0x2af, 
    0x2b1, 0x7, 0x9e, 0x2, 0x2, 0x2b0, 0x2b2, 0x5, 0x30, 0x19, 0x2, 0x2b1, 
    0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b2, 
    0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2bd, 0x7, 0xa0, 0x2, 0x2, 0x2b4, 
    0x2bd, 0x5, 0x20, 0x11, 0x2, 0x2b5, 0x2bd, 0x5, 0x22, 0x12, 0x2, 0x2b6, 
    0x2b7, 0x5, 0x16, 0xc, 0x2, 0x2b7, 0x2b8, 0x5, 0x20, 0x11, 0x2, 0x2b8, 
    0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2ba, 0x5, 0x16, 0xc, 0x2, 0x2ba, 
    0x2bb, 0x5, 0x22, 0x12, 0x2, 0x2bb, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2bc, 
    0x284, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x2bc, 
    0x296, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x29c, 0x3, 0x2, 0x2, 0x2, 0x2bc, 
    0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2bc, 
    0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2bc, 
    0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x2bc, 
    0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x19, 0x3, 0x2, 0x2, 0x2, 0x2be, 0x2bf, 
    0x5, 0x24, 0x13, 0x2, 0x2bf, 0x2c0, 0x7, 0x9e, 0x2, 0x2, 0x2c0, 0x2c3, 
    0x5, 0x50, 0x29, 0x2, 0x2c1, 0x2c2, 0x7, 0x9c, 0x2, 0x2, 0x2c2, 0x2c4, 
    0x5, 0x50, 0x29, 0x2, 0x2c3, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c4, 
    0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c6, 
    0x7, 0xa0, 0x2, 0x2, 0x2c6, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c8, 
    0x5, 0x16, 0xc, 0x2, 0x2c8, 0x2c9, 0x7, 0x9e, 0x2, 0x2, 0x2c9, 0x2ca, 
    0x5, 0x50, 0x29, 0x2, 0x2ca, 0x2cb, 0x7, 0xa0, 0x2, 0x2, 0x2cb, 0x2cc, 
    0x5, 0x24, 0x13, 0x2, 0x2cc, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2d2, 
    0x5, 0x24, 0x13, 0x2, 0x2ce, 0x2cf, 0x5, 0x16, 0xc, 0x2, 0x2cf, 0x2d0, 
    0x5, 0x24, 0x13, 0x2, 0x2d0, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2be, 
    0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2cd, 
    0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x2d3, 0x2d7, 0x5, 0x20, 0x11, 0x2, 0x2d4, 0x2d7, 0x5, 
    0x22, 0x12, 0x2, 0x2d5, 0x2d7, 0x5, 0x24, 0x13, 0x2, 0x2d6, 0x2d3, 0x3, 
    0x2, 0x2, 0x2, 0x2d6, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d5, 0x3, 
    0x2, 0x2, 0x2, 0x2d7, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2db, 0x5, 0x20, 
    0x11, 0x2, 0x2d9, 0x2db, 0x5, 0x22, 0x12, 0x2, 0x2da, 0x2d8, 0x3, 0x2, 
    0x2, 0x2, 0x2da, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0x2dc, 0x2dd, 0x7, 0xa9, 0x2, 0x2, 0x2dd, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0x2de, 0x2df, 0x7, 0xaa, 0x2, 0x2, 0x2df, 0x23, 0x3, 0x2, 0x2, 
    0x2, 0x2e0, 0x2e1, 0x7, 0xab, 0x2, 0x2, 0x2e1, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x2e2, 0x2e3, 0x7, 0xac, 0x2, 0x2, 0x2e3, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0x2e4, 0x30c, 0x5, 0x1c, 0xf, 0x2, 0x2e5, 0x2f0, 0x5, 0x1c, 0xf, 
    0x2, 0x2e6, 0x2e7, 0x7, 0x9e, 0x2, 0x2, 0x2e7, 0x2ea, 0x5, 0x50, 0x29, 
    0x2, 0x2e8, 0x2e9, 0x7, 0x9c, 0x2, 0x2, 0x2e9, 0x2eb, 0x5, 0x50, 0x29, 
    0x2, 0x2ea, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2eb, 0x3, 0x2, 0x2, 
    0x2, 0x2eb, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ed, 0x7, 0xa0, 0x2, 
    0x2, 0x2ed, 0x2ef, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2e6, 0x3, 0x2, 0x2, 
    0x2, 0x2ef, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2ee, 0x3, 0x2, 0x2, 
    0x2, 0x2f0, 0x2f1, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x30c, 0x3, 0x2, 0x2, 
    0x2, 0x2f2, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f4, 0x5, 0x16, 0xc, 
    0x2, 0x2f4, 0x2f5, 0x5, 0x20, 0x11, 0x2, 0x2f5, 0x30c, 0x3, 0x2, 0x2, 
    0x2, 0x2f6, 0x2f7, 0x5, 0x16, 0xc, 0x2, 0x2f7, 0x2f8, 0x5, 0x22, 0x12, 
    0x2, 0x2f8, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fa, 0x5, 0x16, 0xc, 
    0x2, 0x2fa, 0x2fb, 0x7, 0x9e, 0x2, 0x2, 0x2fb, 0x2fc, 0x5, 0x50, 0x29, 
    0x2, 0x2fc, 0x2fd, 0x7, 0xa0, 0x2, 0x2, 0x2fd, 0x2fe, 0x5, 0x20, 0x11, 
    0x2, 0x2fe, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x300, 0x5, 0x16, 0xc, 
    0x2, 0x300, 0x301, 0x7, 0x9e, 0x2, 0x2, 0x301, 0x302, 0x5, 0x50, 0x29, 
    0x2, 0x302, 0x303, 0x7, 0xa0, 0x2, 0x2, 0x303, 0x304, 0x5, 0x22, 0x12, 
    0x2, 0x304, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x305, 0x30c, 0x5, 0x16, 0xc, 
    0x2, 0x306, 0x307, 0x5, 0x16, 0xc, 0x2, 0x307, 0x308, 0x7, 0x9e, 0x2, 
    0x2, 0x308, 0x309, 0x5, 0x50, 0x29, 0x2, 0x309, 0x30a, 0x7, 0xa0, 0x2, 
    0x2, 0x30a, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x2e4, 0x3, 0x2, 0x2, 
    0x2, 0x30b, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x2f3, 0x3, 0x2, 0x2, 
    0x2, 0x30b, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x2f9, 0x3, 0x2, 0x2, 
    0x2, 0x30b, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x305, 0x3, 0x2, 0x2, 
    0x2, 0x30b, 0x306, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x30d, 0x30e, 0x5, 0x1c, 0xf, 0x2, 0x30e, 0x30f, 0x7, 0x9e, 0x2, 0x2, 
    0x30f, 0x314, 0x5, 0x50, 0x29, 0x2, 0x310, 0x311, 0x7, 0x9c, 0x2, 0x2, 
    0x311, 0x313, 0x5, 0x50, 0x29, 0x2, 0x312, 0x310, 0x3, 0x2, 0x2, 0x2, 
    0x313, 0x316, 0x3, 0x2, 0x2, 0x2, 0x314, 0x312, 0x3, 0x2, 0x2, 0x2, 
    0x314, 0x315, 0x3, 0x2, 0x2, 0x2, 0x315, 0x317, 0x3, 0x2, 0x2, 0x2, 
    0x316, 0x314, 0x3, 0x2, 0x2, 0x2, 0x317, 0x318, 0x7, 0xa0, 0x2, 0x2, 
    0x318, 0x321, 0x3, 0x2, 0x2, 0x2, 0x319, 0x31a, 0x5, 0x16, 0xc, 0x2, 
    0x31a, 0x31b, 0x7, 0x9e, 0x2, 0x2, 0x31b, 0x31c, 0x5, 0x50, 0x29, 0x2, 
    0x31c, 0x31d, 0x7, 0x9c, 0x2, 0x2, 0x31d, 0x31e, 0x5, 0x20, 0x11, 0x2, 
    0x31e, 0x31f, 0x7, 0xa0, 0x2, 0x2, 0x31f, 0x321, 0x3, 0x2, 0x2, 0x2, 
    0x320, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x320, 0x319, 0x3, 0x2, 0x2, 0x2, 
    0x321, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x322, 0x327, 0x5, 0x28, 0x15, 0x2, 
    0x323, 0x324, 0x7, 0x9c, 0x2, 0x2, 0x324, 0x326, 0x5, 0x28, 0x15, 0x2, 
    0x325, 0x323, 0x3, 0x2, 0x2, 0x2, 0x326, 0x329, 0x3, 0x2, 0x2, 0x2, 
    0x327, 0x325, 0x3, 0x2, 0x2, 0x2, 0x327, 0x328, 0x3, 0x2, 0x2, 0x2, 
    0x328, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x329, 0x327, 0x3, 0x2, 0x2, 0x2, 0x32a, 
    0x32c, 0x7, 0x25, 0x2, 0x2, 0x32b, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x32b, 
    0x32c, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x32d, 
    0x335, 0x5, 0x1c, 0xf, 0x2, 0x32e, 0x330, 0x7, 0x9c, 0x2, 0x2, 0x32f, 
    0x331, 0x7, 0x25, 0x2, 0x2, 0x330, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x330, 
    0x331, 0x3, 0x2, 0x2, 0x2, 0x331, 0x332, 0x3, 0x2, 0x2, 0x2, 0x332, 
    0x334, 0x5, 0x1c, 0xf, 0x2, 0x333, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x334, 
    0x337, 0x3, 0x2, 0x2, 0x2, 0x335, 0x333, 0x3, 0x2, 0x2, 0x2, 0x335, 
    0x336, 0x3, 0x2, 0x2, 0x2, 0x336, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x337, 0x335, 
    0x3, 0x2, 0x2, 0x2, 0x338, 0x33d, 0x5, 0x3c, 0x1f, 0x2, 0x339, 0x33a, 
    0x7, 0x9c, 0x2, 0x2, 0x33a, 0x33c, 0x5, 0x3c, 0x1f, 0x2, 0x33b, 0x339, 
    0x3, 0x2, 0x2, 0x2, 0x33c, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x33b, 
    0x3, 0x2, 0x2, 0x2, 0x33d, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x33f, 0x33d, 0x3, 0x2, 0x2, 0x2, 0x340, 0x345, 0x5, 
    0x3c, 0x1f, 0x2, 0x341, 0x342, 0x7, 0x9c, 0x2, 0x2, 0x342, 0x344, 0x5, 
    0x3c, 0x1f, 0x2, 0x343, 0x341, 0x3, 0x2, 0x2, 0x2, 0x344, 0x347, 0x3, 
    0x2, 0x2, 0x2, 0x345, 0x343, 0x3, 0x2, 0x2, 0x2, 0x345, 0x346, 0x3, 
    0x2, 0x2, 0x2, 0x346, 0x33, 0x3, 0x2, 0x2, 0x2, 0x347, 0x345, 0x3, 0x2, 
    0x2, 0x2, 0x348, 0x34a, 0x7, 0x99, 0x2, 0x2, 0x349, 0x348, 0x3, 0x2, 
    0x2, 0x2, 0x349, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x34b, 0x3, 0x2, 
    0x2, 0x2, 0x34b, 0x354, 0x5, 0x3c, 0x1f, 0x2, 0x34c, 0x34d, 0x7, 0x26, 
    0x2, 0x2, 0x34d, 0x34e, 0x7, 0x9e, 0x2, 0x2, 0x34e, 0x34f, 0x5, 0x50, 
    0x29, 0x2, 0x34f, 0x350, 0x7, 0xa0, 0x2, 0x2, 0x350, 0x354, 0x3, 0x2, 
    0x2, 0x2, 0x351, 0x352, 0x7, 0x26, 0x2, 0x2, 0x352, 0x354, 0x5, 0x50, 
    0x29, 0x2, 0x353, 0x349, 0x3, 0x2, 0x2, 0x2, 0x353, 0x34c, 0x3, 0x2, 
    0x2, 0x2, 0x353, 0x351, 0x3, 0x2, 0x2, 0x2, 0x354, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x355, 0x357, 0x7, 0x98, 0x2, 0x2, 0x356, 0x355, 0x3, 0x2, 0x2, 
    0x2, 0x357, 0x358, 0x3, 0x2, 0x2, 0x2, 0x358, 0x356, 0x3, 0x2, 0x2, 
    0x2, 0x358, 0x359, 0x3, 0x2, 0x2, 0x2, 0x359, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0x35a, 0x35e, 0x7, 0x9c, 0x2, 0x2, 0x35b, 0x35e, 0x7, 0xa1, 0x2, 0x2, 
    0x35c, 0x35e, 0x5, 0x36, 0x1c, 0x2, 0x35d, 0x35a, 0x3, 0x2, 0x2, 0x2, 
    0x35d, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x35c, 0x3, 0x2, 0x2, 0x2, 
    0x35e, 0x39, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x361, 0x5, 0x36, 0x1c, 0x2, 
    0x360, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x360, 0x361, 0x3, 0x2, 0x2, 0x2, 
    0x361, 0x363, 0x3, 0x2, 0x2, 0x2, 0x362, 0x364, 0x7, 0xa1, 0x2, 0x2, 
    0x363, 0x362, 0x3, 0x2, 0x2, 0x2, 0x363, 0x364, 0x3, 0x2, 0x2, 0x2, 
    0x364, 0x365, 0x3, 0x2, 0x2, 0x2, 0x365, 0x36b, 0x5, 0x34, 0x1b, 0x2, 
    0x366, 0x367, 0x5, 0x38, 0x1d, 0x2, 0x367, 0x368, 0x5, 0x34, 0x1b, 0x2, 
    0x368, 0x36a, 0x3, 0x2, 0x2, 0x2, 0x369, 0x366, 0x3, 0x2, 0x2, 0x2, 
    0x36a, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x369, 0x3, 0x2, 0x2, 0x2, 
    0x36b, 0x36c, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x36f, 0x3, 0x2, 0x2, 0x2, 
    0x36d, 0x36b, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x370, 0x7, 0xa1, 0x2, 0x2, 
    0x36f, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x36f, 0x370, 0x3, 0x2, 0x2, 0x2, 
    0x370, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x371, 0x374, 0x5, 0x50, 0x29, 0x2, 
    0x372, 0x374, 0x5, 0x4c, 0x27, 0x2, 0x373, 0x371, 0x3, 0x2, 0x2, 0x2, 
    0x373, 0x372, 0x3, 0x2, 0x2, 0x2, 0x374, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x375, 
    0x37b, 0x5, 0x40, 0x21, 0x2, 0x376, 0x37b, 0x5, 0x46, 0x24, 0x2, 0x377, 
    0x37b, 0x5, 0x42, 0x22, 0x2, 0x378, 0x37b, 0x5, 0x44, 0x23, 0x2, 0x379, 
    0x37b, 0x5, 0x56, 0x2c, 0x2, 0x37a, 0x375, 0x3, 0x2, 0x2, 0x2, 0x37a, 
    0x376, 0x3, 0x2, 0x2, 0x2, 0x37a, 0x377, 0x3, 0x2, 0x2, 0x2, 0x37a, 
    0x378, 0x3, 0x2, 0x2, 0x2, 0x37a, 0x379, 0x3, 0x2, 0x2, 0x2, 0x37b, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x37d, 0x7, 0xb0, 0x2, 0x2, 0x37d, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x37e, 0x37f, 0x7, 0xae, 0x2, 0x2, 0x37f, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x380, 0x381, 0x7, 0xaf, 0x2, 0x2, 0x381, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x382, 0x384, 0x9, 0x5, 0x2, 0x2, 0x383, 0x382, 
    0x3, 0x2, 0x2, 0x2, 0x383, 0x384, 0x3, 0x2, 0x2, 0x2, 0x384, 0x385, 
    0x3, 0x2, 0x2, 0x2, 0x385, 0x386, 0x7, 0xb1, 0x2, 0x2, 0x386, 0x47, 
    0x3, 0x2, 0x2, 0x2, 0x387, 0x3b5, 0x7, 0x74, 0x2, 0x2, 0x388, 0x389, 
    0x7, 0x77, 0x2, 0x2, 0x389, 0x3b5, 0x5, 0x50, 0x29, 0x2, 0x38a, 0x38b, 
    0x7, 0x78, 0x2, 0x2, 0x38b, 0x38c, 0x7, 0x9e, 0x2, 0x2, 0x38c, 0x38d, 
    0x5, 0x4c, 0x27, 0x2, 0x38d, 0x38e, 0x7, 0x9c, 0x2, 0x2, 0x38e, 0x38f, 
    0x5, 0x50, 0x29, 0x2, 0x38f, 0x390, 0x7, 0xa0, 0x2, 0x2, 0x390, 0x3b5, 
    0x3, 0x2, 0x2, 0x2, 0x391, 0x392, 0x7, 0x79, 0x2, 0x2, 0x392, 0x393, 
    0x7, 0x9e, 0x2, 0x2, 0x393, 0x394, 0x5, 0x4c, 0x27, 0x2, 0x394, 0x395, 
    0x7, 0x9c, 0x2, 0x2, 0x395, 0x396, 0x5, 0x50, 0x29, 0x2, 0x396, 0x397, 
    0x7, 0x9c, 0x2, 0x2, 0x397, 0x398, 0x5, 0x50, 0x29, 0x2, 0x398, 0x399, 
    0x7, 0xa0, 0x2, 0x2, 0x399, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x39b, 
    0x7, 0x79, 0x2, 0x2, 0x39b, 0x39c, 0x7, 0x9e, 0x2, 0x2, 0x39c, 0x39d, 
    0x5, 0x4c, 0x27, 0x2, 0x39d, 0x39e, 0x7, 0x9c, 0x2, 0x2, 0x39e, 0x39f, 
    0x5, 0x50, 0x29, 0x2, 0x39f, 0x3a0, 0x7, 0xa0, 0x2, 0x2, 0x3a0, 0x3b5, 
    0x3, 0x2, 0x2, 0x2, 0x3a1, 0x3a2, 0x7, 0x7a, 0x2, 0x2, 0x3a2, 0x3a3, 
    0x7, 0x9e, 0x2, 0x2, 0x3a3, 0x3a4, 0x5, 0x4c, 0x27, 0x2, 0x3a4, 0x3a5, 
    0x7, 0x9c, 0x2, 0x2, 0x3a5, 0x3a6, 0x5, 0x50, 0x29, 0x2, 0x3a6, 0x3a7, 
    0x7, 0xa0, 0x2, 0x2, 0x3a7, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3a9, 
    0x7, 0x75, 0x2, 0x2, 0x3a9, 0x3b5, 0x5, 0x50, 0x29, 0x2, 0x3aa, 0x3ab, 
    0x7, 0x75, 0x2, 0x2, 0x3ab, 0x3ac, 0x7, 0x99, 0x2, 0x2, 0x3ac, 0x3b5, 
    0x5, 0x50, 0x29, 0x2, 0x3ad, 0x3ae, 0x7, 0x76, 0x2, 0x2, 0x3ae, 0x3af, 
    0x7, 0x9e, 0x2, 0x2, 0x3af, 0x3b0, 0x5, 0x50, 0x29, 0x2, 0x3b0, 0x3b1, 
    0x7, 0x9c, 0x2, 0x2, 0x3b1, 0x3b2, 0x5, 0x4c, 0x27, 0x2, 0x3b2, 0x3b3, 
    0x7, 0xa0, 0x2, 0x2, 0x3b3, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0x3b4, 0x387, 
    0x3, 0x2, 0x2, 0x2, 0x3b4, 0x388, 0x3, 0x2, 0x2, 0x2, 0x3b4, 0x38a, 
    0x3, 0x2, 0x2, 0x2, 0x3b4, 0x391, 0x3, 0x2, 0x2, 0x2, 0x3b4, 0x39a, 
    0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3a8, 
    0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3ad, 
    0x3, 0x2, 0x2, 0x2, 0x3b5, 0x49, 0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3b7, 0x7, 
    0xa4, 0x2, 0x2, 0x3b7, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3b9, 0x8, 
    0x27, 0x1, 0x2, 0x3b9, 0x3ba, 0x7, 0x9e, 0x2, 0x2, 0x3ba, 0x3bb, 0x5, 
    0x4c, 0x27, 0x2, 0x3bb, 0x3bc, 0x7, 0xa0, 0x2, 0x2, 0x3bc, 0x3c1, 0x3, 
    0x2, 0x2, 0x2, 0x3bd, 0x3c1, 0x5, 0x48, 0x25, 0x2, 0x3be, 0x3c1, 0x5, 
    0x1a, 0xe, 0x2, 0x3bf, 0x3c1, 0x5, 0x4a, 0x26, 0x2, 0x3c0, 0x3b8, 0x3, 
    0x2, 0x2, 0x2, 0x3c0, 0x3bd, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3be, 0x3, 
    0x2, 0x2, 0x2, 0x3c0, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3c1, 0x3c7, 0x3, 
    0x2, 0x2, 0x2, 0x3c2, 0x3c3, 0xc, 0x5, 0x2, 0x2, 0x3c3, 0x3c4, 0x7, 
    0x8b, 0x2, 0x2, 0x3c4, 0x3c6, 0x5, 0x4c, 0x27, 0x6, 0x3c5, 0x3c2, 0x3, 
    0x2, 0x2, 0x2, 0x3c6, 0x3c9, 0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3c5, 0x3, 
    0x2, 0x2, 0x2, 0x3c7, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x3c9, 0x3c7, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x429, 0x7, 0x61, 
    0x2, 0x2, 0x3cb, 0x429, 0x7, 0x10, 0x2, 0x2, 0x3cc, 0x429, 0x7, 0x2d, 
    0x2, 0x2, 0x3cd, 0x429, 0x7, 0x60, 0x2, 0x2, 0x3ce, 0x429, 0x7, 0x7b, 
    0x2, 0x2, 0x3cf, 0x429, 0x7, 0x7c, 0x2, 0x2, 0x3d0, 0x429, 0x7, 0x7d, 
    0x2, 0x2, 0x3d1, 0x3d2, 0x7, 0x7b, 0x2, 0x2, 0x3d2, 0x3d3, 0x7, 0x9e, 
    0x2, 0x2, 0x3d3, 0x3d4, 0x5, 0x50, 0x29, 0x2, 0x3d4, 0x3d5, 0x7, 0xa0, 
    0x2, 0x2, 0x3d5, 0x429, 0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3d7, 0x7, 0x63, 
    0x2, 0x2, 0x3d7, 0x429, 0x5, 0x50, 0x29, 0x2, 0x3d8, 0x3d9, 0x7, 0x64, 
    0x2, 0x2, 0x3d9, 0x429, 0x5, 0x50, 0x29, 0x2, 0x3da, 0x3db, 0x7, 0x65, 
    0x2, 0x2, 0x3db, 0x429, 0x5, 0x50, 0x29, 0x2, 0x3dc, 0x3dd, 0x7, 0x66, 
    0x2, 0x2, 0x3dd, 0x429, 0x5, 0x50, 0x29, 0x2, 0x3de, 0x3df, 0x7, 0x67, 
    0x2, 0x2, 0x3df, 0x429, 0x5, 0x50, 0x29, 0x2, 0x3e0, 0x3e1, 0x7, 0x68, 
    0x2, 0x2, 0x3e1, 0x429, 0x5, 0x50, 0x29, 0x2, 0x3e2, 0x3e3, 0x7, 0x69, 
    0x2, 0x2, 0x3e3, 0x429, 0x5, 0x50, 0x29, 0x2, 0x3e4, 0x3e5, 0x7, 0x6a, 
    0x2, 0x2, 0x3e5, 0x429, 0x5, 0x50, 0x29, 0x2, 0x3e6, 0x3e7, 0x7, 0x6b, 
    0x2, 0x2, 0x3e7, 0x429, 0x5, 0x50, 0x29, 0x2, 0x3e8, 0x3e9, 0x7, 0x6c, 
    0x2, 0x2, 0x3e9, 0x429, 0x5, 0x50, 0x29, 0x2, 0x3ea, 0x3eb, 0x7, 0x6d, 
    0x2, 0x2, 0x3eb, 0x429, 0x5, 0x50, 0x29, 0x2, 0x3ec, 0x3ed, 0x7, 0x6e, 
    0x2, 0x2, 0x3ed, 0x429, 0x5, 0x50, 0x29, 0x2, 0x3ee, 0x3ef, 0x7, 0x62, 
    0x2, 0x2, 0x3ef, 0x429, 0x5, 0x50, 0x29, 0x2, 0x3f0, 0x3f1, 0x7, 0x6f, 
    0x2, 0x2, 0x3f1, 0x429, 0x5, 0x50, 0x29, 0x2, 0x3f2, 0x3f3, 0x7, 0x16, 
    0x2, 0x2, 0x3f3, 0x429, 0x5, 0x50, 0x29, 0x2, 0x3f4, 0x3f5, 0x7, 0x12, 
    0x2, 0x2, 0x3f5, 0x429, 0x5, 0x50, 0x29, 0x2, 0x3f6, 0x3f7, 0x7, 0x57, 
    0x2, 0x2, 0x3f7, 0x3f8, 0x7, 0x9e, 0x2, 0x2, 0x3f8, 0x3f9, 0x5, 0x50, 
    0x29, 0x2, 0x3f9, 0x3fa, 0x7, 0x9c, 0x2, 0x2, 0x3fa, 0x3fb, 0x5, 0x50, 
    0x29, 0x2, 0x3fb, 0x3fc, 0x7, 0xa0, 0x2, 0x2, 0x3fc, 0x429, 0x3, 0x2, 
    0x2, 0x2, 0x3fd, 0x3fe, 0x7, 0x3f, 0x2, 0x2, 0x3fe, 0x429, 0x5, 0x50, 
    0x29, 0x2, 0x3ff, 0x400, 0x7, 0x42, 0x2, 0x2, 0x400, 0x429, 0x5, 0x50, 
    0x29, 0x2, 0x401, 0x402, 0x7, 0x45, 0x2, 0x2, 0x402, 0x403, 0x7, 0x9e, 
    0x2, 0x2, 0x403, 0x404, 0x5, 0x4c, 0x27, 0x2, 0x404, 0x405, 0x7, 0xa0, 
    0x2, 0x2, 0x405, 0x429, 0x3, 0x2, 0x2, 0x2, 0x406, 0x407, 0x7, 0x46, 
    0x2, 0x2, 0x407, 0x408, 0x7, 0x9e, 0x2, 0x2, 0x408, 0x409, 0x5, 0x4c, 
    0x27, 0x2, 0x409, 0x40a, 0x7, 0xa0, 0x2, 0x2, 0x40a, 0x429, 0x3, 0x2, 
    0x2, 0x2, 0x40b, 0x40c, 0x7, 0x47, 0x2, 0x2, 0x40c, 0x40d, 0x7, 0x9e, 
    0x2, 0x2, 0x40d, 0x40e, 0x5, 0x4c, 0x27, 0x2, 0x40e, 0x40f, 0x7, 0xa0, 
    0x2, 0x2, 0x40f, 0x429, 0x3, 0x2, 0x2, 0x2, 0x410, 0x411, 0x7, 0x48, 
    0x2, 0x2, 0x411, 0x429, 0x5, 0x50, 0x29, 0x2, 0x412, 0x413, 0x7, 0x70, 
    0x2, 0x2, 0x413, 0x429, 0x5, 0x4c, 0x27, 0x2, 0x414, 0x415, 0x7, 0x71, 
    0x2, 0x2, 0x415, 0x429, 0x5, 0x4c, 0x27, 0x2, 0x416, 0x417, 0x7, 0x72, 
    0x2, 0x2, 0x417, 0x418, 0x7, 0x9e, 0x2, 0x2, 0x418, 0x419, 0x5, 0x4c, 
    0x27, 0x2, 0x419, 0x41a, 0x7, 0x9c, 0x2, 0x2, 0x41a, 0x41b, 0x5, 0x4c, 
    0x27, 0x2, 0x41b, 0x41c, 0x7, 0xa0, 0x2, 0x2, 0x41c, 0x429, 0x3, 0x2, 
    0x2, 0x2, 0x41d, 0x41e, 0x7, 0x72, 0x2, 0x2, 0x41e, 0x41f, 0x7, 0x9e, 
    0x2, 0x2, 0x41f, 0x420, 0x5, 0x4c, 0x27, 0x2, 0x420, 0x421, 0x7, 0x9c, 
    0x2, 0x2, 0x421, 0x422, 0x5, 0x4c, 0x27, 0x2, 0x422, 0x423, 0x7, 0x9c, 
    0x2, 0x2, 0x423, 0x424, 0x5, 0x50, 0x29, 0x2, 0x424, 0x425, 0x7, 0xa0, 
    0x2, 0x2, 0x425, 0x429, 0x3, 0x2, 0x2, 0x2, 0x426, 0x427, 0x7, 0x73, 
    0x2, 0x2, 0x427, 0x429, 0x5, 0x4c, 0x27, 0x2, 0x428, 0x3ca, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x428, 0x3cc, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x428, 0x3ce, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x3cf, 0x3, 0x2, 0x2, 0x2, 0x428, 0x3d0, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x3d1, 0x3, 0x2, 0x2, 0x2, 0x428, 0x3d6, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x3d8, 0x3, 0x2, 0x2, 0x2, 0x428, 0x3da, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x3dc, 0x3, 0x2, 0x2, 0x2, 0x428, 0x3de, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0x428, 0x3e2, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x428, 0x3e6, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x3e8, 0x3, 0x2, 0x2, 0x2, 0x428, 0x3ea, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0x428, 0x3ee, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x3f0, 0x3, 0x2, 0x2, 0x2, 0x428, 0x3f2, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x428, 0x3f6, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x3fd, 0x3, 0x2, 0x2, 0x2, 0x428, 0x3ff, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x401, 0x3, 0x2, 0x2, 0x2, 0x428, 0x406, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x40b, 0x3, 0x2, 0x2, 0x2, 0x428, 0x410, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x412, 0x3, 0x2, 0x2, 0x2, 0x428, 0x414, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x416, 0x3, 0x2, 0x2, 0x2, 0x428, 0x41d, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x426, 0x3, 0x2, 0x2, 0x2, 0x429, 0x4f, 0x3, 0x2, 0x2, 
    0x2, 0x42a, 0x42b, 0x8, 0x29, 0x1, 0x2, 0x42b, 0x42c, 0x7, 0x8c, 0x2, 
    0x2, 0x42c, 0x437, 0x5, 0x50, 0x29, 0x16, 0x42d, 0x437, 0x5, 0x54, 0x2b, 
    0x2, 0x42e, 0x437, 0x5, 0x4e, 0x28, 0x2, 0x42f, 0x437, 0x5, 0x52, 0x2a, 
    0x2, 0x430, 0x431, 0x5, 0x4c, 0x27, 0x2, 0x431, 0x432, 0x5, 0x58, 0x2d, 
    0x2, 0x432, 0x433, 0x5, 0x4c, 0x27, 0x2, 0x433, 0x437, 0x3, 0x2, 0x2, 
    0x2, 0x434, 0x437, 0x5, 0x18, 0xd, 0x2, 0x435, 0x437, 0x5, 0x3e, 0x20, 
    0x2, 0x436, 0x42a, 0x3, 0x2, 0x2, 0x2, 0x436, 0x42d, 0x3, 0x2, 0x2, 
    0x2, 0x436, 0x42e, 0x3, 0x2, 0x2, 0x2, 0x436, 0x42f, 0x3, 0x2, 0x2, 
    0x2, 0x436, 0x430, 0x3, 0x2, 0x2, 0x2, 0x436, 0x434, 0x3, 0x2, 0x2, 
    0x2, 0x436, 0x435, 0x3, 0x2, 0x2, 0x2, 0x437, 0x462, 0x3, 0x2, 0x2, 
    0x2, 0x438, 0x439, 0xc, 0x12, 0x2, 0x2, 0x439, 0x43a, 0x7, 0x8a, 0x2, 
    0x2, 0x43a, 0x461, 0x5, 0x50, 0x29, 0x12, 0x43b, 0x43c, 0xc, 0x11, 0x2, 
    0x2, 0x43c, 0x43d, 0x7, 0x8d, 0x2, 0x2, 0x43d, 0x461, 0x5, 0x50, 0x29, 
    0x12, 0x43e, 0x43f, 0xc, 0x10, 0x2, 0x2, 0x43f, 0x440, 0x7, 0x8e, 0x2, 
    0x2, 0x440, 0x461, 0x5, 0x50, 0x29, 0x11, 0x441, 0x442, 0xc, 0xf, 0x2, 
    0x2, 0x442, 0x443, 0x7, 0x89, 0x2, 0x2, 0x443, 0x461, 0x5, 0x50, 0x29, 
    0x10, 0x444, 0x445, 0xc, 0xe, 0x2, 0x2, 0x445, 0x446, 0x7, 0x88, 0x2, 
    0x2, 0x446, 0x461, 0x5, 0x50, 0x29, 0xf, 0x447, 0x448, 0xc, 0xd, 0x2, 
    0x2, 0x448, 0x449, 0x7, 0x8b, 0x2, 0x2, 0x449, 0x461, 0x5, 0x50, 0x29, 
    0xe, 0x44a, 0x44b, 0xc, 0xc, 0x2, 0x2, 0x44b, 0x44c, 0x7, 0x8c, 0x2, 
    0x2, 0x44c, 0x461, 0x5, 0x50, 0x29, 0xd, 0x44d, 0x44e, 0xc, 0xb, 0x2, 
    0x2, 0x44e, 0x44f, 0x5, 0x58, 0x2d, 0x2, 0x44f, 0x450, 0x5, 0x50, 0x29, 
    0xc, 0x450, 0x461, 0x3, 0x2, 0x2, 0x2, 0x451, 0x452, 0xc, 0x9, 0x2, 
    0x2, 0x452, 0x453, 0x7, 0x8f, 0x2, 0x2, 0x453, 0x461, 0x5, 0x50, 0x29, 
    0xa, 0x454, 0x455, 0xc, 0x8, 0x2, 0x2, 0x455, 0x456, 0x7, 0x90, 0x2, 
    0x2, 0x456, 0x461, 0x5, 0x50, 0x29, 0x9, 0x457, 0x458, 0xc, 0x7, 0x2, 
    0x2, 0x458, 0x459, 0x7, 0x85, 0x2, 0x2, 0x459, 0x461, 0x5, 0x50, 0x29, 
    0x8, 0x45a, 0x45b, 0xc, 0x6, 0x2, 0x2, 0x45b, 0x45c, 0x7, 0x86, 0x2, 
    0x2, 0x45c, 0x461, 0x5, 0x50, 0x29, 0x7, 0x45d, 0x45e, 0xc, 0x5, 0x2, 
    0x2, 0x45e, 0x45f, 0x7, 0x87, 0x2, 0x2, 0x45f, 0x461, 0x5, 0x50, 0x29, 
    0x6, 0x460, 0x438, 0x3, 0x2, 0x2, 0x2, 0x460, 0x43b, 0x3, 0x2, 0x2, 
    0x2, 0x460, 0x43e, 0x3, 0x2, 0x2, 0x2, 0x460, 0x441, 0x3, 0x2, 0x2, 
    0x2, 0x460, 0x444, 0x3, 0x2, 0x2, 0x2, 0x460, 0x447, 0x3, 0x2, 0x2, 
    0x2, 0x460, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x460, 0x44d, 0x3, 0x2, 0x2, 
    0x2, 0x460, 0x451, 0x3, 0x2, 0x2, 0x2, 0x460, 0x454, 0x3, 0x2, 0x2, 
    0x2, 0x460, 0x457, 0x3, 0x2, 0x2, 0x2, 0x460, 0x45a, 0x3, 0x2, 0x2, 
    0x2, 0x460, 0x45d, 0x3, 0x2, 0x2, 0x2, 0x461, 0x464, 0x3, 0x2, 0x2, 
    0x2, 0x462, 0x460, 0x3, 0x2, 0x2, 0x2, 0x462, 0x463, 0x3, 0x2, 0x2, 
    0x2, 0x463, 0x51, 0x3, 0x2, 0x2, 0x2, 0x464, 0x462, 0x3, 0x2, 0x2, 0x2, 
    0x465, 0x466, 0x7, 0x9e, 0x2, 0x2, 0x466, 0x467, 0x5, 0x50, 0x29, 0x2, 
    0x467, 0x468, 0x7, 0xa0, 0x2, 0x2, 0x468, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x469, 0x46a, 0x7, 0x84, 0x2, 0x2, 0x46a, 0x46b, 0x5, 0x50, 0x29, 0x2, 
    0x46b, 0x55, 0x3, 0x2, 0x2, 0x2, 0x46c, 0x46d, 0x9, 0x6, 0x2, 0x2, 0x46d, 
    0x57, 0x3, 0x2, 0x2, 0x2, 0x46e, 0x475, 0x7, 0x7e, 0x2, 0x2, 0x46f, 
    0x475, 0x7, 0x7f, 0x2, 0x2, 0x470, 0x475, 0x7, 0x80, 0x2, 0x2, 0x471, 
    0x475, 0x7, 0x81, 0x2, 0x2, 0x472, 0x475, 0x7, 0x82, 0x2, 0x2, 0x473, 
    0x475, 0x7, 0x83, 0x2, 0x2, 0x474, 0x46e, 0x3, 0x2, 0x2, 0x2, 0x474, 
    0x46f, 0x3, 0x2, 0x2, 0x2, 0x474, 0x470, 0x3, 0x2, 0x2, 0x2, 0x474, 
    0x471, 0x3, 0x2, 0x2, 0x2, 0x474, 0x472, 0x3, 0x2, 0x2, 0x2, 0x474, 
    0x473, 0x3, 0x2, 0x2, 0x2, 0x475, 0x59, 0x3, 0x2, 0x2, 0x2, 0x56, 0x5d, 
    0x64, 0x67, 0x6b, 0x70, 0x73, 0x77, 0x7c, 0x82, 0x88, 0x8b, 0x98, 0x9c, 
    0xa8, 0xb1, 0xb7, 0xbd, 0xc7, 0xcf, 0xd8, 0xdf, 0xec, 0xf3, 0xf8, 0xfd, 
    0x103, 0x10a, 0x10c, 0x111, 0x11d, 0x121, 0x12d, 0x13b, 0x145, 0x14d, 
    0x156, 0x169, 0x17c, 0x181, 0x1b7, 0x269, 0x271, 0x27b, 0x280, 0x289, 
    0x292, 0x2a5, 0x2ab, 0x2b1, 0x2bc, 0x2c3, 0x2d1, 0x2d6, 0x2da, 0x2ea, 
    0x2f0, 0x30b, 0x314, 0x320, 0x327, 0x32b, 0x330, 0x335, 0x33d, 0x345, 
    0x349, 0x353, 0x358, 0x35d, 0x360, 0x363, 0x36b, 0x36f, 0x373, 0x37a, 
    0x383, 0x3b4, 0x3c0, 0x3c7, 0x428, 0x436, 0x460, 0x462, 0x474, 
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
