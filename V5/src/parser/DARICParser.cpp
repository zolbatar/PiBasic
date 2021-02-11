
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
    setState(219);
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
      | (1ULL << DARICParser::INSTALL)
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
      | (1ULL << DARICParser::GETS))) != 0) || ((((_la - 92) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 92)) & ((1ULL << (DARICParser::RENDERFRAME - 92))
      | (1ULL << (DARICParser::CREATEVERTEX - 92))
      | (1ULL << (DARICParser::CREATETRIANGLE - 92))
      | (1ULL << (DARICParser::TRANSLATE - 92))
      | (1ULL << (DARICParser::ROTATE - 92))
      | (1ULL << (DARICParser::SCALE - 92))
      | (1ULL << (DARICParser::DELETEOBJECT - 92))
      | (1ULL << (DARICParser::BGETH - 92))
      | (1ULL << (DARICParser::BPUTH - 92))
      | (1ULL << (DARICParser::CLOSEH - 92))
      | (1ULL << (DARICParser::PTRH - 92))
      | (1ULL << (DARICParser::CIRCLE - 92))
      | (1ULL << (DARICParser::CLS - 92))
      | (1ULL << (DARICParser::CLIPON - 92))
      | (1ULL << (DARICParser::CLIPOFF - 92))
      | (1ULL << (DARICParser::COLOUR - 92))
      | (1ULL << (DARICParser::COLOURBG - 92))
      | (1ULL << (DARICParser::FLIP - 92))
      | (1ULL << (DARICParser::SHOWFPS - 92))
      | (1ULL << (DARICParser::GRAPHICS - 92))
      | (1ULL << (DARICParser::LINE - 92))
      | (1ULL << (DARICParser::RECTANGLE - 92))
      | (1ULL << (DARICParser::PLOT - 92))
      | (1ULL << (DARICParser::TEXT - 92))
      | (1ULL << (DARICParser::TEXTRIGHT - 92))
      | (1ULL << (DARICParser::TEXTCENTRE - 92))
      | (1ULL << (DARICParser::TEXTCENTER - 92))
      | (1ULL << (DARICParser::TRIANGLE - 92)))) != 0) || ((((_la - 194) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 194)) & ((1ULL << (DARICParser::NEWLINE - 194))
      | (1ULL << (DARICParser::COLON - 194))
      | (1ULL << (DARICParser::COMMENT - 194))
      | (1ULL << (DARICParser::PROC_NAME - 194))
      | (1ULL << (DARICParser::FN_INTEGER - 194))
      | (1ULL << (DARICParser::FN_FLOAT - 194))
      | (1ULL << (DARICParser::FN_STRING - 194))
      | (1ULL << (DARICParser::VARIABLE_FLOAT - 194))
      | (1ULL << (DARICParser::VARIABLE_INTEGER - 194))
      | (1ULL << (DARICParser::VARIABLE_STRING - 194))
      | (1ULL << (DARICParser::VARIABLE_TYPE - 194))
      | (1ULL << (DARICParser::NUMBER - 194)))) != 0)) {
      setState(216);
      line();
      setState(221);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(222);
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
    setState(245);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(224);
      match(DARICParser::NEWLINE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(226);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::NUMBER) {
        setState(225);
        linenumber();
      }
      setState(229);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::REM || _la == DARICParser::COMMENT) {
        setState(228);
        _la = _input->LA(1);
        if (!(_la == DARICParser::REM || _la == DARICParser::COMMENT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(231);
      match(DARICParser::NEWLINE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(233);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::NUMBER) {
        setState(232);
        linenumber();
      }
      setState(236); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(235);
        stmt();
        setState(238); 
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
        | (1ULL << DARICParser::INSTALL)
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
        | (1ULL << DARICParser::GETS))) != 0) || ((((_la - 92) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 92)) & ((1ULL << (DARICParser::RENDERFRAME - 92))
        | (1ULL << (DARICParser::CREATEVERTEX - 92))
        | (1ULL << (DARICParser::CREATETRIANGLE - 92))
        | (1ULL << (DARICParser::TRANSLATE - 92))
        | (1ULL << (DARICParser::ROTATE - 92))
        | (1ULL << (DARICParser::SCALE - 92))
        | (1ULL << (DARICParser::DELETEOBJECT - 92))
        | (1ULL << (DARICParser::BGETH - 92))
        | (1ULL << (DARICParser::BPUTH - 92))
        | (1ULL << (DARICParser::CLOSEH - 92))
        | (1ULL << (DARICParser::PTRH - 92))
        | (1ULL << (DARICParser::CIRCLE - 92))
        | (1ULL << (DARICParser::CLS - 92))
        | (1ULL << (DARICParser::CLIPON - 92))
        | (1ULL << (DARICParser::CLIPOFF - 92))
        | (1ULL << (DARICParser::COLOUR - 92))
        | (1ULL << (DARICParser::COLOURBG - 92))
        | (1ULL << (DARICParser::FLIP - 92))
        | (1ULL << (DARICParser::SHOWFPS - 92))
        | (1ULL << (DARICParser::GRAPHICS - 92))
        | (1ULL << (DARICParser::LINE - 92))
        | (1ULL << (DARICParser::RECTANGLE - 92))
        | (1ULL << (DARICParser::PLOT - 92))
        | (1ULL << (DARICParser::TEXT - 92))
        | (1ULL << (DARICParser::TEXTRIGHT - 92))
        | (1ULL << (DARICParser::TEXTCENTRE - 92))
        | (1ULL << (DARICParser::TEXTCENTER - 92))
        | (1ULL << (DARICParser::TRIANGLE - 92)))) != 0) || ((((_la - 198) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 198)) & ((1ULL << (DARICParser::COLON - 198))
        | (1ULL << (DARICParser::PROC_NAME - 198))
        | (1ULL << (DARICParser::FN_INTEGER - 198))
        | (1ULL << (DARICParser::FN_FLOAT - 198))
        | (1ULL << (DARICParser::FN_STRING - 198))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 198))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 198))
        | (1ULL << (DARICParser::VARIABLE_STRING - 198))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 198)))) != 0));
      setState(241);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::REM || _la == DARICParser::COMMENT) {
        setState(240);
        _la = _input->LA(1);
        if (!(_la == DARICParser::REM || _la == DARICParser::COMMENT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(243);
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
    setState(250);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(247);
        stmt(); 
      }
      setState(252);
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
    size_t alt;
    setState(265);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(256);
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
        | (1ULL << DARICParser::INSTALL)
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
        | (1ULL << DARICParser::GETS))) != 0) || ((((_la - 92) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 92)) & ((1ULL << (DARICParser::RENDERFRAME - 92))
        | (1ULL << (DARICParser::CREATEVERTEX - 92))
        | (1ULL << (DARICParser::CREATETRIANGLE - 92))
        | (1ULL << (DARICParser::TRANSLATE - 92))
        | (1ULL << (DARICParser::ROTATE - 92))
        | (1ULL << (DARICParser::SCALE - 92))
        | (1ULL << (DARICParser::DELETEOBJECT - 92))
        | (1ULL << (DARICParser::BGETH - 92))
        | (1ULL << (DARICParser::BPUTH - 92))
        | (1ULL << (DARICParser::CLOSEH - 92))
        | (1ULL << (DARICParser::PTRH - 92))
        | (1ULL << (DARICParser::CIRCLE - 92))
        | (1ULL << (DARICParser::CLS - 92))
        | (1ULL << (DARICParser::CLIPON - 92))
        | (1ULL << (DARICParser::CLIPOFF - 92))
        | (1ULL << (DARICParser::COLOUR - 92))
        | (1ULL << (DARICParser::COLOURBG - 92))
        | (1ULL << (DARICParser::FLIP - 92))
        | (1ULL << (DARICParser::SHOWFPS - 92))
        | (1ULL << (DARICParser::GRAPHICS - 92))
        | (1ULL << (DARICParser::LINE - 92))
        | (1ULL << (DARICParser::RECTANGLE - 92))
        | (1ULL << (DARICParser::PLOT - 92))
        | (1ULL << (DARICParser::TEXT - 92))
        | (1ULL << (DARICParser::TEXTRIGHT - 92))
        | (1ULL << (DARICParser::TEXTCENTRE - 92))
        | (1ULL << (DARICParser::TEXTCENTER - 92))
        | (1ULL << (DARICParser::TRIANGLE - 92)))) != 0) || ((((_la - 198) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 198)) & ((1ULL << (DARICParser::COLON - 198))
        | (1ULL << (DARICParser::PROC_NAME - 198))
        | (1ULL << (DARICParser::FN_INTEGER - 198))
        | (1ULL << (DARICParser::FN_FLOAT - 198))
        | (1ULL << (DARICParser::FN_STRING - 198))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 198))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 198))
        | (1ULL << (DARICParser::VARIABLE_STRING - 198))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 198)))) != 0)) {
        setState(253);
        stmt();
        setState(258);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(262);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(259);
          line(); 
        }
        setState(264);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
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
    setState(267);
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
    setState(275);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(269);
      match(DARICParser::COLON);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(270);
      coreStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(271);
      keyMouseStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(272);
      stmtOperatorEqual();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(273);
      ioStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(274);
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

DARICParser::StmtINSTALLContext* DARICParser::CoreStmtContext::stmtINSTALL() {
  return getRuleContext<DARICParser::StmtINSTALLContext>(0);
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
    setState(303);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(277);
      stmtBREAKPOINT();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(278);
      stmtCASE();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(279);
      stmtCHAIN();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(280);
      stmtDATA();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(281);
      stmtDIM();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(282);
      stmtEND();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(283);
      stmtRETURN();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(284);
      stmtDEFFN();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(285);
      stmtDEFPROC();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(286);
      stmtFOR();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(287);
      stmtFORIN();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(288);
      stmtCallFN();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(289);
      stmtIF();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(290);
      stmtIFMultiline();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(291);
      stmtINSTALL();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(292);
      stmtLET();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(293);
      stmtOSCLI();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(294);
      stmtCallPROC();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(295);
      stmtREAD();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(296);
      stmtRESTORE();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(297);
      stmtSWAP();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(298);
      stmtTRACEON();
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(299);
      stmtTRACEOFF();
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(300);
      stmtTYPE();
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(301);
      stmtREPEAT();
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(302);
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
    setState(305);
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
    setState(307);
    match(DARICParser::CASE);
    setState(308);
    expr();
    setState(309);
    match(DARICParser::OF);
    setState(310);
    match(DARICParser::NEWLINE);
    setState(312); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(311);
      when();
      setState(314); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == DARICParser::WHEN);
    setState(318);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::OTHERWISE) {
      setState(316);
      match(DARICParser::OTHERWISE);
      setState(317);
      body();
    }
    setState(320);
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
    setState(322);
    match(DARICParser::CHAIN);
    setState(323);
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
    setState(325);
    match(DARICParser::DATA);
    setState(326);
    literal();
    setState(331);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(327);
      match(DARICParser::COMMA);
      setState(328);
      literal();
      setState(333);
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
    setState(335);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::LOCAL) {
      setState(334);
      match(DARICParser::LOCAL);
    }
    setState(337);
    match(DARICParser::DIM);
    setState(338);
    varDeclWithDimension();
    setState(343);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(339);
      match(DARICParser::COMMA);
      setState(340);
      varDeclWithDimension();
      setState(345);
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
    setState(346);
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
    setState(348);
    match(DARICParser::RETURN);
    setState(350);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(349);
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

DARICParser::LinenumberContext* DARICParser::StmtDEFFNContext::linenumber() {
  return getRuleContext<DARICParser::LinenumberContext>(0);
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
    setState(352);
    match(DARICParser::DEF);
    setState(353);
    fnName();
    setState(354);
    match(DARICParser::LPAREN);
    setState(356);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::RETURN || ((((_la - 212) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 212)) & ((1ULL << (DARICParser::VARIABLE_FLOAT - 212))
      | (1ULL << (DARICParser::VARIABLE_INTEGER - 212))
      | (1ULL << (DARICParser::VARIABLE_STRING - 212)))) != 0)) {
      setState(355);
      functionVarList();
    }
    setState(358);
    match(DARICParser::RPAREN);
    setState(359);
    body();
    setState(361);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::NUMBER) {
      setState(360);
      linenumber();
    }
    setState(363);
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

DARICParser::LinenumberContext* DARICParser::StmtDEFPROCContext::linenumber() {
  return getRuleContext<DARICParser::LinenumberContext>(0);
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
    setState(365);
    match(DARICParser::DEF);
    setState(366);
    match(DARICParser::PROC_NAME);
    setState(367);
    match(DARICParser::LPAREN);
    setState(369);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::RETURN || ((((_la - 212) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 212)) & ((1ULL << (DARICParser::VARIABLE_FLOAT - 212))
      | (1ULL << (DARICParser::VARIABLE_INTEGER - 212))
      | (1ULL << (DARICParser::VARIABLE_STRING - 212)))) != 0)) {
      setState(368);
      functionVarList();
    }
    setState(371);
    match(DARICParser::RPAREN);
    setState(372);
    body();
    setState(374);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::NUMBER) {
      setState(373);
      linenumber();
    }
    setState(376);
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

DARICParser::LinenumberContext* DARICParser::StmtFORContext::linenumber() {
  return getRuleContext<DARICParser::LinenumberContext>(0);
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
    setState(378);
    match(DARICParser::FOR);
    setState(380);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::LOCAL) {
      setState(379);
      match(DARICParser::LOCAL);
    }
    setState(382);
    justNumberVar();
    setState(383);
    match(DARICParser::EQ);
    setState(384);
    numExpr(0);
    setState(385);
    match(DARICParser::TO);
    setState(386);
    numExpr(0);
    setState(389);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::STEP) {
      setState(387);
      match(DARICParser::STEP);
      setState(388);
      numExpr(0);
    }
    setState(391);
    body();
    setState(393);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::NUMBER) {
      setState(392);
      linenumber();
    }
    setState(395);
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

DARICParser::LinenumberContext* DARICParser::StmtFORINContext::linenumber() {
  return getRuleContext<DARICParser::LinenumberContext>(0);
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
    setState(397);
    match(DARICParser::FOR);
    setState(399);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::LOCAL) {
      setState(398);
      match(DARICParser::LOCAL);
    }
    setState(401);
    justVar();
    setState(402);
    match(DARICParser::IN);
    setState(403);
    justVar();
    setState(404);
    match(DARICParser::LPAREN);
    setState(405);
    match(DARICParser::RPAREN);
    setState(406);
    body();
    setState(408);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::NUMBER) {
      setState(407);
      linenumber();
    }
    setState(410);
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
    setState(412);
    fnName();
    setState(413);
    match(DARICParser::LPAREN);
    setState(415);
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
      | (1ULL << DARICParser::WHITE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::BLACK - 64))
      | (1ULL << (DARICParser::MONO15 - 64))
      | (1ULL << (DARICParser::MONO20 - 64))
      | (1ULL << (DARICParser::MONO25 - 64))
      | (1ULL << (DARICParser::MONO30 - 64))
      | (1ULL << (DARICParser::MONO35 - 64))
      | (1ULL << (DARICParser::MONO40 - 64))
      | (1ULL << (DARICParser::MONO50 - 64))
      | (1ULL << (DARICParser::MONO75 - 64))
      | (1ULL << (DARICParser::MONO100 - 64))
      | (1ULL << (DARICParser::PROP15 - 64))
      | (1ULL << (DARICParser::PROP20 - 64))
      | (1ULL << (DARICParser::PROP25 - 64))
      | (1ULL << (DARICParser::PROP30 - 64))
      | (1ULL << (DARICParser::PROP35 - 64))
      | (1ULL << (DARICParser::PROP40 - 64))
      | (1ULL << (DARICParser::PROP50 - 64))
      | (1ULL << (DARICParser::PROP75 - 64))
      | (1ULL << (DARICParser::PROP100 - 64))
      | (1ULL << (DARICParser::SERIF15 - 64))
      | (1ULL << (DARICParser::SERIF20 - 64))
      | (1ULL << (DARICParser::SERIF25 - 64))
      | (1ULL << (DARICParser::SERIF30 - 64))
      | (1ULL << (DARICParser::SERIF35 - 64))
      | (1ULL << (DARICParser::SERIF40 - 64))
      | (1ULL << (DARICParser::SERIF50 - 64))
      | (1ULL << (DARICParser::SERIF75 - 64))
      | (1ULL << (DARICParser::SERIF100 - 64))
      | (1ULL << (DARICParser::CREATESHAPE - 64))
      | (1ULL << (DARICParser::CREATEOBJECT - 64))
      | (1ULL << (DARICParser::BGETH - 64))
      | (1ULL << (DARICParser::EOFH - 64))
      | (1ULL << (DARICParser::OPENIN - 64))
      | (1ULL << (DARICParser::OPENOUT - 64))
      | (1ULL << (DARICParser::OPENUP - 64))
      | (1ULL << (DARICParser::PTRH - 64))
      | (1ULL << (DARICParser::COLOUR - 64))
      | (1ULL << (DARICParser::CREATEFONT - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (DARICParser::LOADTYPEFACE - 128))
      | (1ULL << (DARICParser::POINT - 128))
      | (1ULL << (DARICParser::SCREENWIDTH - 128))
      | (1ULL << (DARICParser::SCREENHEIGHT - 128))
      | (1ULL << (DARICParser::TIME - 128))
      | (1ULL << (DARICParser::PI - 128))
      | (1ULL << (DARICParser::SQR - 128))
      | (1ULL << (DARICParser::LN - 128))
      | (1ULL << (DARICParser::LOG - 128))
      | (1ULL << (DARICParser::EXP - 128))
      | (1ULL << (DARICParser::ATN - 128))
      | (1ULL << (DARICParser::TAN - 128))
      | (1ULL << (DARICParser::COS - 128))
      | (1ULL << (DARICParser::SIN - 128))
      | (1ULL << (DARICParser::ABS - 128))
      | (1ULL << (DARICParser::ACS - 128))
      | (1ULL << (DARICParser::ASN - 128))
      | (1ULL << (DARICParser::DEG - 128))
      | (1ULL << (DARICParser::RAD - 128))
      | (1ULL << (DARICParser::SGN - 128))
      | (1ULL << (DARICParser::ASC - 128))
      | (1ULL << (DARICParser::LEN - 128))
      | (1ULL << (DARICParser::INSTR - 128))
      | (1ULL << (DARICParser::VAL - 128))
      | (1ULL << (DARICParser::TIMES - 128))
      | (1ULL << (DARICParser::STRS - 128))
      | (1ULL << (DARICParser::STRINGS - 128))
      | (1ULL << (DARICParser::CHRS - 128))
      | (1ULL << (DARICParser::LEFTS - 128))
      | (1ULL << (DARICParser::MIDS - 128))
      | (1ULL << (DARICParser::RIGHTS - 128))
      | (1ULL << (DARICParser::RND - 128))
      | (1ULL << (DARICParser::RND0 - 128))
      | (1ULL << (DARICParser::RND1 - 128))
      | (1ULL << (DARICParser::NOT - 128))
      | (1ULL << (DARICParser::PLUS - 128))
      | (1ULL << (DARICParser::MINUS - 128)))) != 0) || ((((_la - 201) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 201)) & ((1ULL << (DARICParser::LPAREN - 201))
      | (1ULL << (DARICParser::STRINGLITERAL - 201))
      | (1ULL << (DARICParser::FN_INTEGER - 201))
      | (1ULL << (DARICParser::FN_FLOAT - 201))
      | (1ULL << (DARICParser::FN_STRING - 201))
      | (1ULL << (DARICParser::VARIABLE_FLOAT - 201))
      | (1ULL << (DARICParser::VARIABLE_INTEGER - 201))
      | (1ULL << (DARICParser::VARIABLE_STRING - 201))
      | (1ULL << (DARICParser::VARIABLE_TYPE - 201))
      | (1ULL << (DARICParser::HEXNUMBER - 201))
      | (1ULL << (DARICParser::BINARYNUMBER - 201))
      | (1ULL << (DARICParser::NUMBER - 201))
      | (1ULL << (DARICParser::FLOAT - 201)))) != 0)) {
      setState(414);
      functionParList();
    }
    setState(417);
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
    setState(419);
    match(DARICParser::IF);
    setState(420);
    expr();
    setState(421);
    dynamic_cast<StmtIFContext *>(_localctx)->t = content();
    setState(424);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      setState(422);
      match(DARICParser::ELSE);
      setState(423);
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

DARICParser::LinenumberContext* DARICParser::StmtIFMultilineContext::linenumber() {
  return getRuleContext<DARICParser::LinenumberContext>(0);
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
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(426);
    match(DARICParser::IF);
    setState(427);
    expr();
    setState(428);
    match(DARICParser::THEN);
    setState(429);
    match(DARICParser::NEWLINE);
    setState(431); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(430);
              dynamic_cast<StmtIFMultilineContext *>(_localctx)->t = line();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(433); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(442);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::ELSE) {
      setState(435);
      match(DARICParser::ELSE);
      setState(436);
      match(DARICParser::NEWLINE);
      setState(438); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(437);
                dynamic_cast<StmtIFMultilineContext *>(_localctx)->f = line();
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(440); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    }
    setState(445);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::NUMBER) {
      setState(444);
      linenumber();
    }
    setState(447);
    match(DARICParser::ENDIF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtINSTALLContext ------------------------------------------------------------------

DARICParser::StmtINSTALLContext::StmtINSTALLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtINSTALLContext::INSTALL() {
  return getToken(DARICParser::INSTALL, 0);
}

DARICParser::StrExprContext* DARICParser::StmtINSTALLContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}


size_t DARICParser::StmtINSTALLContext::getRuleIndex() const {
  return DARICParser::RuleStmtINSTALL;
}


antlrcpp::Any DARICParser::StmtINSTALLContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtINSTALL(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtINSTALLContext* DARICParser::stmtINSTALL() {
  StmtINSTALLContext *_localctx = _tracker.createInstance<StmtINSTALLContext>(_ctx, getState());
  enterRule(_localctx, 42, DARICParser::RuleStmtINSTALL);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(449);
    match(DARICParser::INSTALL);
    setState(450);
    strExpr(0);
   
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
  enterRule(_localctx, 44, DARICParser::RuleStmtLET);
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
    setState(456);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::GLOBAL:
      case DARICParser::LET:
      case DARICParser::VARIABLE_FLOAT:
      case DARICParser::VARIABLE_INTEGER:
      case DARICParser::VARIABLE_STRING:
      case DARICParser::VARIABLE_TYPE: {
        setState(453);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DARICParser::GLOBAL

        || _la == DARICParser::LET) {
          setState(452);
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
        setState(455);
        match(DARICParser::LOCAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(458);
    varDecl();
    setState(459);
    match(DARICParser::EQ);
    setState(460);
    expr();
    setState(468);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(461);
      match(DARICParser::COMMA);
      setState(462);
      varDecl();
      setState(463);
      match(DARICParser::EQ);
      setState(464);
      expr();
      setState(470);
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
  enterRule(_localctx, 46, DARICParser::RuleStmtOSCLI);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(471);
    match(DARICParser::OSCLI);
    setState(472);
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
  enterRule(_localctx, 48, DARICParser::RuleStmtCallPROC);
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
    setState(474);
    match(DARICParser::PROC_NAME);
    setState(475);
    match(DARICParser::LPAREN);
    setState(477);
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
      | (1ULL << DARICParser::WHITE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::BLACK - 64))
      | (1ULL << (DARICParser::MONO15 - 64))
      | (1ULL << (DARICParser::MONO20 - 64))
      | (1ULL << (DARICParser::MONO25 - 64))
      | (1ULL << (DARICParser::MONO30 - 64))
      | (1ULL << (DARICParser::MONO35 - 64))
      | (1ULL << (DARICParser::MONO40 - 64))
      | (1ULL << (DARICParser::MONO50 - 64))
      | (1ULL << (DARICParser::MONO75 - 64))
      | (1ULL << (DARICParser::MONO100 - 64))
      | (1ULL << (DARICParser::PROP15 - 64))
      | (1ULL << (DARICParser::PROP20 - 64))
      | (1ULL << (DARICParser::PROP25 - 64))
      | (1ULL << (DARICParser::PROP30 - 64))
      | (1ULL << (DARICParser::PROP35 - 64))
      | (1ULL << (DARICParser::PROP40 - 64))
      | (1ULL << (DARICParser::PROP50 - 64))
      | (1ULL << (DARICParser::PROP75 - 64))
      | (1ULL << (DARICParser::PROP100 - 64))
      | (1ULL << (DARICParser::SERIF15 - 64))
      | (1ULL << (DARICParser::SERIF20 - 64))
      | (1ULL << (DARICParser::SERIF25 - 64))
      | (1ULL << (DARICParser::SERIF30 - 64))
      | (1ULL << (DARICParser::SERIF35 - 64))
      | (1ULL << (DARICParser::SERIF40 - 64))
      | (1ULL << (DARICParser::SERIF50 - 64))
      | (1ULL << (DARICParser::SERIF75 - 64))
      | (1ULL << (DARICParser::SERIF100 - 64))
      | (1ULL << (DARICParser::CREATESHAPE - 64))
      | (1ULL << (DARICParser::CREATEOBJECT - 64))
      | (1ULL << (DARICParser::BGETH - 64))
      | (1ULL << (DARICParser::EOFH - 64))
      | (1ULL << (DARICParser::OPENIN - 64))
      | (1ULL << (DARICParser::OPENOUT - 64))
      | (1ULL << (DARICParser::OPENUP - 64))
      | (1ULL << (DARICParser::PTRH - 64))
      | (1ULL << (DARICParser::COLOUR - 64))
      | (1ULL << (DARICParser::CREATEFONT - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (DARICParser::LOADTYPEFACE - 128))
      | (1ULL << (DARICParser::POINT - 128))
      | (1ULL << (DARICParser::SCREENWIDTH - 128))
      | (1ULL << (DARICParser::SCREENHEIGHT - 128))
      | (1ULL << (DARICParser::TIME - 128))
      | (1ULL << (DARICParser::PI - 128))
      | (1ULL << (DARICParser::SQR - 128))
      | (1ULL << (DARICParser::LN - 128))
      | (1ULL << (DARICParser::LOG - 128))
      | (1ULL << (DARICParser::EXP - 128))
      | (1ULL << (DARICParser::ATN - 128))
      | (1ULL << (DARICParser::TAN - 128))
      | (1ULL << (DARICParser::COS - 128))
      | (1ULL << (DARICParser::SIN - 128))
      | (1ULL << (DARICParser::ABS - 128))
      | (1ULL << (DARICParser::ACS - 128))
      | (1ULL << (DARICParser::ASN - 128))
      | (1ULL << (DARICParser::DEG - 128))
      | (1ULL << (DARICParser::RAD - 128))
      | (1ULL << (DARICParser::SGN - 128))
      | (1ULL << (DARICParser::ASC - 128))
      | (1ULL << (DARICParser::LEN - 128))
      | (1ULL << (DARICParser::INSTR - 128))
      | (1ULL << (DARICParser::VAL - 128))
      | (1ULL << (DARICParser::TIMES - 128))
      | (1ULL << (DARICParser::STRS - 128))
      | (1ULL << (DARICParser::STRINGS - 128))
      | (1ULL << (DARICParser::CHRS - 128))
      | (1ULL << (DARICParser::LEFTS - 128))
      | (1ULL << (DARICParser::MIDS - 128))
      | (1ULL << (DARICParser::RIGHTS - 128))
      | (1ULL << (DARICParser::RND - 128))
      | (1ULL << (DARICParser::RND0 - 128))
      | (1ULL << (DARICParser::RND1 - 128))
      | (1ULL << (DARICParser::NOT - 128))
      | (1ULL << (DARICParser::PLUS - 128))
      | (1ULL << (DARICParser::MINUS - 128)))) != 0) || ((((_la - 201) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 201)) & ((1ULL << (DARICParser::LPAREN - 201))
      | (1ULL << (DARICParser::STRINGLITERAL - 201))
      | (1ULL << (DARICParser::FN_INTEGER - 201))
      | (1ULL << (DARICParser::FN_FLOAT - 201))
      | (1ULL << (DARICParser::FN_STRING - 201))
      | (1ULL << (DARICParser::VARIABLE_FLOAT - 201))
      | (1ULL << (DARICParser::VARIABLE_INTEGER - 201))
      | (1ULL << (DARICParser::VARIABLE_STRING - 201))
      | (1ULL << (DARICParser::VARIABLE_TYPE - 201))
      | (1ULL << (DARICParser::HEXNUMBER - 201))
      | (1ULL << (DARICParser::BINARYNUMBER - 201))
      | (1ULL << (DARICParser::NUMBER - 201))
      | (1ULL << (DARICParser::FLOAT - 201)))) != 0)) {
      setState(476);
      functionParList();
    }
    setState(479);
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
  enterRule(_localctx, 50, DARICParser::RuleStmtREAD);
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
    setState(481);
    match(DARICParser::READ);
    setState(482);
    varDecl();
    setState(487);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(483);
      match(DARICParser::COMMA);
      setState(484);
      varDecl();
      setState(489);
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
  enterRule(_localctx, 52, DARICParser::RuleStmtRESTORE);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(490);
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
  enterRule(_localctx, 54, DARICParser::RuleStmtSWAP);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(492);
    match(DARICParser::SWAP);
    setState(493);
    justVar();
    setState(494);
    match(DARICParser::COMMA);
    setState(495);
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
  enterRule(_localctx, 56, DARICParser::RuleStmtTRACEON);

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
  enterRule(_localctx, 58, DARICParser::RuleStmtTRACEOFF);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(499);
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
  enterRule(_localctx, 60, DARICParser::RuleStmtTYPE);
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
    setState(501);
    match(DARICParser::TYPE);
    setState(502);
    varName();
    setState(503);
    match(DARICParser::LPAREN);
    setState(504);
    justVar();
    setState(509);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(505);
      match(DARICParser::COMMA);
      setState(506);
      justVar();
      setState(511);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(512);
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
  enterRule(_localctx, 62, DARICParser::RuleStmtREPEAT);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(514);
    match(DARICParser::REPEAT);
    setState(515);
    body();
    setState(516);
    match(DARICParser::UNTIL);
    setState(517);
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
  enterRule(_localctx, 64, DARICParser::RuleStmtWHILE);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(519);
    match(DARICParser::WHILE);
    setState(520);
    expr();
    setState(521);
    body();
    setState(522);
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
  enterRule(_localctx, 66, DARICParser::RuleKeyMouseStmt);

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
      case DARICParser::INPUT: {
        enterOuterAlt(_localctx, 1);
        setState(524);
        stmtINPUT();
        break;
      }

      case DARICParser::PRINT: {
        enterOuterAlt(_localctx, 2);
        setState(525);
        stmtPRINT();
        break;
      }

      case DARICParser::MOUSE: {
        enterOuterAlt(_localctx, 3);
        setState(526);
        stmtMOUSE();
        break;
      }

      case DARICParser::INKEY: {
        enterOuterAlt(_localctx, 4);
        setState(527);
        stmtINKEY();
        break;
      }

      case DARICParser::INKEYS: {
        enterOuterAlt(_localctx, 5);
        setState(528);
        stmtINKEYS();
        break;
      }

      case DARICParser::GET: {
        enterOuterAlt(_localctx, 6);
        setState(529);
        stmtGET();
        break;
      }

      case DARICParser::GETS: {
        enterOuterAlt(_localctx, 7);
        setState(530);
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
  enterRule(_localctx, 68, DARICParser::RuleStmtINPUT);

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
    match(DARICParser::INPUT);
    setState(537);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(534);
      strExpr(0);
      setState(535);
      match(DARICParser::COMMA);
      break;
    }

    default:
      break;
    }
    setState(539);
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
  enterRule(_localctx, 70, DARICParser::RuleStmtPRINT);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(541);
    match(DARICParser::PRINT);
    setState(543);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      setState(542);
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
  enterRule(_localctx, 72, DARICParser::RuleStmtMOUSE);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(545);
    match(DARICParser::MOUSE);
    setState(546);
    varNameInteger();
    setState(547);
    match(DARICParser::COMMA);
    setState(548);
    varNameInteger();
    setState(549);
    match(DARICParser::COMMA);
    setState(550);
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

tree::TerminalNode* DARICParser::StmtINKEYContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::StmtINKEYContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::StmtINKEYContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
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
  enterRule(_localctx, 74, DARICParser::RuleStmtINKEY);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(552);
    match(DARICParser::INKEY);
    setState(553);
    match(DARICParser::LPAREN);
    setState(554);
    numExpr(0);
    setState(555);
    match(DARICParser::RPAREN);
   
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

tree::TerminalNode* DARICParser::StmtINKEYSContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::StmtINKEYSContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::StmtINKEYSContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
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
  enterRule(_localctx, 76, DARICParser::RuleStmtINKEYS);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(557);
    match(DARICParser::INKEYS);
    setState(558);
    match(DARICParser::LPAREN);
    setState(559);
    numExpr(0);
    setState(560);
    match(DARICParser::RPAREN);
   
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
  enterRule(_localctx, 78, DARICParser::RuleStmtGET);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(562);
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
  enterRule(_localctx, 80, DARICParser::RuleStmtGETS);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(564);
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
  enterRule(_localctx, 82, DARICParser::RuleStmtOperatorEqual);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(590);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(566);
      varDecl();
      setState(567);
      match(DARICParser::MULTIPLY_E);
      setState(568);
      numExpr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(570);
      varDecl();
      setState(571);
      match(DARICParser::DIVIDE_E);
      setState(572);
      numExpr(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(574);
      varDecl();
      setState(575);
      match(DARICParser::PLUS_E);
      setState(576);
      numExpr(0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(578);
      varDecl();
      setState(579);
      match(DARICParser::MINUS_E);
      setState(580);
      numExpr(0);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(582);
      varDecl();
      setState(583);
      match(DARICParser::SHL_E);
      setState(584);
      numExpr(0);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(586);
      varDecl();
      setState(587);
      match(DARICParser::SHR_E);
      setState(588);
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
  enterRule(_localctx, 84, DARICParser::RuleIoStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(597);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::BPUTH: {
        enterOuterAlt(_localctx, 1);
        setState(592);
        stmtBPUTH();
        break;
      }

      case DARICParser::BGETH: {
        enterOuterAlt(_localctx, 2);
        setState(593);
        stmtBGETH();
        break;
      }

      case DARICParser::PTRH: {
        enterOuterAlt(_localctx, 3);
        setState(594);
        stmtPTRH();
        break;
      }

      case DARICParser::CLOSEH: {
        enterOuterAlt(_localctx, 4);
        setState(595);
        stmtCLOSEH();
        break;
      }

      case DARICParser::LOCAL:
      case DARICParser::VARIABLE_STRING: {
        enterOuterAlt(_localctx, 5);
        setState(596);
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
  enterRule(_localctx, 86, DARICParser::RuleStmtBPUTH);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(599);
    match(DARICParser::BPUTH);
    setState(600);
    numExpr(0);
    setState(601);
    match(DARICParser::COMMA);
    setState(602);
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
  enterRule(_localctx, 88, DARICParser::RuleStmtBGETH);

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
    match(DARICParser::BGETH);
    setState(605);
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
  enterRule(_localctx, 90, DARICParser::RuleStmtPTRH);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(607);
    match(DARICParser::PTRH);
    setState(608);
    numExpr(0);
    setState(609);
    match(DARICParser::EQ);
    setState(610);
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
  enterRule(_localctx, 92, DARICParser::RuleStmtCLOSEH);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(612);
    match(DARICParser::CLOSEH);
    setState(613);
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
  enterRule(_localctx, 94, DARICParser::RuleStmtLISTFILES);
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
    setState(616);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::LOCAL) {
      setState(615);
      match(DARICParser::LOCAL);
    }
    setState(618);
    varNameString();
    setState(619);
    match(DARICParser::LPAREN);
    setState(620);
    match(DARICParser::RPAREN);
    setState(621);
    match(DARICParser::EQ);
    setState(622);
    match(DARICParser::LISTFILES);
    setState(623);
    match(DARICParser::LPAREN);
    setState(624);
    strExpr(0);
    setState(625);
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

DARICParser::StmtRENDERFRAMEContext* DARICParser::GraphicsStmtContext::stmtRENDERFRAME() {
  return getRuleContext<DARICParser::StmtRENDERFRAMEContext>(0);
}

DARICParser::StmtCREATEVERTEXContext* DARICParser::GraphicsStmtContext::stmtCREATEVERTEX() {
  return getRuleContext<DARICParser::StmtCREATEVERTEXContext>(0);
}

DARICParser::StmtCREATETRIANGLEContext* DARICParser::GraphicsStmtContext::stmtCREATETRIANGLE() {
  return getRuleContext<DARICParser::StmtCREATETRIANGLEContext>(0);
}

DARICParser::StmtTRANSLATEContext* DARICParser::GraphicsStmtContext::stmtTRANSLATE() {
  return getRuleContext<DARICParser::StmtTRANSLATEContext>(0);
}

DARICParser::StmtROTATEContext* DARICParser::GraphicsStmtContext::stmtROTATE() {
  return getRuleContext<DARICParser::StmtROTATEContext>(0);
}

DARICParser::StmtSCALEContext* DARICParser::GraphicsStmtContext::stmtSCALE() {
  return getRuleContext<DARICParser::StmtSCALEContext>(0);
}

DARICParser::StmtDELETEOBJECTContext* DARICParser::GraphicsStmtContext::stmtDELETEOBJECT() {
  return getRuleContext<DARICParser::StmtDELETEOBJECTContext>(0);
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
  enterRule(_localctx, 96, DARICParser::RuleGraphicsStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(650);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::CLS: {
        enterOuterAlt(_localctx, 1);
        setState(627);
        stmtCLS();
        break;
      }

      case DARICParser::COLOUR: {
        enterOuterAlt(_localctx, 2);
        setState(628);
        stmtCOLOUR();
        break;
      }

      case DARICParser::COLOURBG: {
        enterOuterAlt(_localctx, 3);
        setState(629);
        stmtCOLOURBG();
        break;
      }

      case DARICParser::GRAPHICS: {
        enterOuterAlt(_localctx, 4);
        setState(630);
        stmtGRAPHICS();
        break;
      }

      case DARICParser::FLIP: {
        enterOuterAlt(_localctx, 5);
        setState(631);
        stmtFLIP();
        break;
      }

      case DARICParser::CIRCLE: {
        enterOuterAlt(_localctx, 6);
        setState(632);
        stmtCIRCLE();
        break;
      }

      case DARICParser::LINE: {
        enterOuterAlt(_localctx, 7);
        setState(633);
        stmtLINE();
        break;
      }

      case DARICParser::RECTANGLE: {
        enterOuterAlt(_localctx, 8);
        setState(634);
        stmtRECTANGLE();
        break;
      }

      case DARICParser::TRIANGLE: {
        enterOuterAlt(_localctx, 9);
        setState(635);
        stmtTRIANGLE();
        break;
      }

      case DARICParser::PLOT: {
        enterOuterAlt(_localctx, 10);
        setState(636);
        stmtPLOT();
        break;
      }

      case DARICParser::CLIPON: {
        enterOuterAlt(_localctx, 11);
        setState(637);
        stmtCLIPON();
        break;
      }

      case DARICParser::CLIPOFF: {
        enterOuterAlt(_localctx, 12);
        setState(638);
        stmtCLIPOFF();
        break;
      }

      case DARICParser::TEXT: {
        enterOuterAlt(_localctx, 13);
        setState(639);
        stmtTEXT();
        break;
      }

      case DARICParser::TEXTRIGHT: {
        enterOuterAlt(_localctx, 14);
        setState(640);
        stmtTEXTRIGHT();
        break;
      }

      case DARICParser::TEXTCENTRE:
      case DARICParser::TEXTCENTER: {
        enterOuterAlt(_localctx, 15);
        setState(641);
        stmtTEXTCENTRE();
        break;
      }

      case DARICParser::SHOWFPS: {
        enterOuterAlt(_localctx, 16);
        setState(642);
        stmtSHOWFPS();
        break;
      }

      case DARICParser::RENDERFRAME: {
        enterOuterAlt(_localctx, 17);
        setState(643);
        stmtRENDERFRAME();
        break;
      }

      case DARICParser::CREATEVERTEX: {
        enterOuterAlt(_localctx, 18);
        setState(644);
        stmtCREATEVERTEX();
        break;
      }

      case DARICParser::CREATETRIANGLE: {
        enterOuterAlt(_localctx, 19);
        setState(645);
        stmtCREATETRIANGLE();
        break;
      }

      case DARICParser::TRANSLATE: {
        enterOuterAlt(_localctx, 20);
        setState(646);
        stmtTRANSLATE();
        break;
      }

      case DARICParser::ROTATE: {
        enterOuterAlt(_localctx, 21);
        setState(647);
        stmtROTATE();
        break;
      }

      case DARICParser::SCALE: {
        enterOuterAlt(_localctx, 22);
        setState(648);
        stmtSCALE();
        break;
      }

      case DARICParser::DELETEOBJECT: {
        enterOuterAlt(_localctx, 23);
        setState(649);
        stmtDELETEOBJECT();
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
  enterRule(_localctx, 98, DARICParser::RuleStmtCLS);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(652);
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
  enterRule(_localctx, 100, DARICParser::RuleStmtCOLOUR);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(663);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(654);
      match(DARICParser::COLOUR);
      setState(655);
      numExpr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(656);
      match(DARICParser::COLOUR);
      setState(657);
      numExpr(0);
      setState(658);
      match(DARICParser::COMMA);
      setState(659);
      numExpr(0);
      setState(660);
      match(DARICParser::COMMA);
      setState(661);
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
  enterRule(_localctx, 102, DARICParser::RuleStmtCOLOURBG);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(674);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(665);
      match(DARICParser::COLOURBG);
      setState(666);
      numExpr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(667);
      match(DARICParser::COLOURBG);
      setState(668);
      numExpr(0);
      setState(669);
      match(DARICParser::COMMA);
      setState(670);
      numExpr(0);
      setState(671);
      match(DARICParser::COMMA);
      setState(672);
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
  enterRule(_localctx, 104, DARICParser::RuleStmtGRAPHICS);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(690);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(676);
      match(DARICParser::GRAPHICS);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(677);
      match(DARICParser::GRAPHICS);
      setState(678);
      numExpr(0);
      setState(679);
      match(DARICParser::COMMA);
      setState(680);
      numExpr(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(682);
      match(DARICParser::GRAPHICS);
      setState(683);
      match(DARICParser::BANKED);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(684);
      match(DARICParser::GRAPHICS);
      setState(685);
      match(DARICParser::BANKED);
      setState(686);
      numExpr(0);
      setState(687);
      match(DARICParser::COMMA);
      setState(688);
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
  enterRule(_localctx, 106, DARICParser::RuleStmtFLIP);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(692);
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
  enterRule(_localctx, 108, DARICParser::RuleStmtCIRCLE);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(709);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(694);
      match(DARICParser::CIRCLE);
      setState(695);
      numExpr(0);
      setState(696);
      match(DARICParser::COMMA);
      setState(697);
      numExpr(0);
      setState(698);
      match(DARICParser::COMMA);
      setState(699);
      numExpr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(701);
      match(DARICParser::CIRCLE);
      setState(702);
      match(DARICParser::FILL);
      setState(703);
      numExpr(0);
      setState(704);
      match(DARICParser::COMMA);
      setState(705);
      numExpr(0);
      setState(706);
      match(DARICParser::COMMA);
      setState(707);
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
  enterRule(_localctx, 110, DARICParser::RuleStmtLINE);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(711);
    match(DARICParser::LINE);
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
  enterRule(_localctx, 112, DARICParser::RuleStmtRECTANGLE);

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(720);
      match(DARICParser::RECTANGLE);
      setState(721);
      numExpr(0);
      setState(722);
      match(DARICParser::COMMA);
      setState(723);
      numExpr(0);
      setState(724);
      match(DARICParser::COMMA);
      setState(725);
      numExpr(0);
      setState(726);
      match(DARICParser::COMMA);
      setState(727);
      numExpr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(729);
      match(DARICParser::RECTANGLE);
      setState(730);
      match(DARICParser::FILL);
      setState(731);
      numExpr(0);
      setState(732);
      match(DARICParser::COMMA);
      setState(733);
      numExpr(0);
      setState(734);
      match(DARICParser::COMMA);
      setState(735);
      numExpr(0);
      setState(736);
      match(DARICParser::COMMA);
      setState(737);
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
  enterRule(_localctx, 114, DARICParser::RuleStmtTRIANGLE);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(788);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(741);
      match(DARICParser::TRIANGLE);
      setState(742);
      numExpr(0);
      setState(743);
      match(DARICParser::COMMA);
      setState(744);
      numExpr(0);
      setState(745);
      match(DARICParser::COMMA);
      setState(746);
      numExpr(0);
      setState(747);
      match(DARICParser::COMMA);
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
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(754);
      match(DARICParser::TRIANGLE);
      setState(755);
      match(DARICParser::FILL);
      setState(756);
      numExpr(0);
      setState(757);
      match(DARICParser::COMMA);
      setState(758);
      numExpr(0);
      setState(759);
      match(DARICParser::COMMA);
      setState(760);
      numExpr(0);
      setState(761);
      match(DARICParser::COMMA);
      setState(762);
      numExpr(0);
      setState(763);
      match(DARICParser::COMMA);
      setState(764);
      numExpr(0);
      setState(765);
      match(DARICParser::COMMA);
      setState(766);
      numExpr(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(768);
      match(DARICParser::TRIANGLE);
      setState(769);
      match(DARICParser::SHADED);
      setState(770);
      numExpr(0);
      setState(771);
      match(DARICParser::COMMA);
      setState(772);
      numExpr(0);
      setState(773);
      match(DARICParser::COMMA);
      setState(774);
      numExpr(0);
      setState(775);
      match(DARICParser::COMMA);
      setState(776);
      numExpr(0);
      setState(777);
      match(DARICParser::COMMA);
      setState(778);
      numExpr(0);
      setState(779);
      match(DARICParser::COMMA);
      setState(780);
      numExpr(0);
      setState(781);
      match(DARICParser::COMMA);
      setState(782);
      numExpr(0);
      setState(783);
      match(DARICParser::COMMA);
      setState(784);
      numExpr(0);
      setState(785);
      match(DARICParser::COMMA);
      setState(786);
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
  enterRule(_localctx, 116, DARICParser::RuleStmtPLOT);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(790);
    match(DARICParser::PLOT);
    setState(791);
    numExpr(0);
    setState(792);
    match(DARICParser::COMMA);
    setState(793);
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
  enterRule(_localctx, 118, DARICParser::RuleStmtCLIPON);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(795);
    match(DARICParser::CLIPON);
    setState(796);
    numExpr(0);
    setState(797);
    match(DARICParser::COMMA);
    setState(798);
    numExpr(0);
    setState(799);
    match(DARICParser::COMMA);
    setState(800);
    numExpr(0);
    setState(801);
    match(DARICParser::COMMA);
    setState(802);
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
  enterRule(_localctx, 120, DARICParser::RuleStmtCLIPOFF);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(804);
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

DARICParser::StrExprContext* DARICParser::StmtTEXTContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
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
  enterRule(_localctx, 122, DARICParser::RuleStmtTEXT);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(806);
    match(DARICParser::TEXT);
    setState(807);
    numExpr(0);
    setState(808);
    match(DARICParser::COMMA);
    setState(809);
    numExpr(0);
    setState(810);
    match(DARICParser::COMMA);
    setState(811);
    numExpr(0);
    setState(812);
    match(DARICParser::COMMA);
    setState(813);
    strExpr(0);
   
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
  enterRule(_localctx, 124, DARICParser::RuleStmtTEXTRIGHT);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(815);
    match(DARICParser::TEXTRIGHT);
    setState(816);
    numExpr(0);
    setState(817);
    match(DARICParser::COMMA);
    setState(818);
    numExpr(0);
    setState(819);
    match(DARICParser::COMMA);
    setState(820);
    numExpr(0);
    setState(821);
    match(DARICParser::COMMA);
    setState(822);
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
  enterRule(_localctx, 126, DARICParser::RuleStmtTEXTCENTRE);
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
    setState(824);
    _la = _input->LA(1);
    if (!(_la == DARICParser::TEXTCENTRE

    || _la == DARICParser::TEXTCENTER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(825);
    numExpr(0);
    setState(826);
    match(DARICParser::COMMA);
    setState(827);
    numExpr(0);
    setState(828);
    match(DARICParser::COMMA);
    setState(829);
    numExpr(0);
    setState(830);
    match(DARICParser::COMMA);
    setState(831);
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
  enterRule(_localctx, 128, DARICParser::RuleStmtSHOWFPS);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(833);
    match(DARICParser::SHOWFPS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtRENDERFRAMEContext ------------------------------------------------------------------

DARICParser::StmtRENDERFRAMEContext::StmtRENDERFRAMEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtRENDERFRAMEContext::RENDERFRAME() {
  return getToken(DARICParser::RENDERFRAME, 0);
}


size_t DARICParser::StmtRENDERFRAMEContext::getRuleIndex() const {
  return DARICParser::RuleStmtRENDERFRAME;
}


antlrcpp::Any DARICParser::StmtRENDERFRAMEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtRENDERFRAME(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtRENDERFRAMEContext* DARICParser::stmtRENDERFRAME() {
  StmtRENDERFRAMEContext *_localctx = _tracker.createInstance<StmtRENDERFRAMEContext>(_ctx, getState());
  enterRule(_localctx, 130, DARICParser::RuleStmtRENDERFRAME);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(835);
    match(DARICParser::RENDERFRAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtCREATEVERTEXContext ------------------------------------------------------------------

DARICParser::StmtCREATEVERTEXContext::StmtCREATEVERTEXContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtCREATEVERTEXContext::CREATEVERTEX() {
  return getToken(DARICParser::CREATEVERTEX, 0);
}

DARICParser::VarNameTypeContext* DARICParser::StmtCREATEVERTEXContext::varNameType() {
  return getRuleContext<DARICParser::VarNameTypeContext>(0);
}

tree::TerminalNode* DARICParser::StmtCREATEVERTEXContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StmtCREATEVERTEXContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StmtCREATEVERTEXContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::StmtCREATEVERTEXContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> DARICParser::StmtCREATEVERTEXContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtCREATEVERTEXContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}


size_t DARICParser::StmtCREATEVERTEXContext::getRuleIndex() const {
  return DARICParser::RuleStmtCREATEVERTEX;
}


antlrcpp::Any DARICParser::StmtCREATEVERTEXContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCREATEVERTEX(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtCREATEVERTEXContext* DARICParser::stmtCREATEVERTEX() {
  StmtCREATEVERTEXContext *_localctx = _tracker.createInstance<StmtCREATEVERTEXContext>(_ctx, getState());
  enterRule(_localctx, 132, DARICParser::RuleStmtCREATEVERTEX);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(837);
    match(DARICParser::CREATEVERTEX);
    setState(838);
    varNameType();
    setState(839);
    match(DARICParser::LPAREN);
    setState(840);
    numExpr(0);
    setState(841);
    match(DARICParser::RPAREN);
    setState(842);
    match(DARICParser::COMMA);
    setState(843);
    numExpr(0);
    setState(844);
    match(DARICParser::COMMA);
    setState(845);
    numExpr(0);
    setState(846);
    match(DARICParser::COMMA);
    setState(847);
    numExpr(0);
    setState(848);
    match(DARICParser::COMMA);
    setState(849);
    numExpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtCREATETRIANGLEContext ------------------------------------------------------------------

DARICParser::StmtCREATETRIANGLEContext::StmtCREATETRIANGLEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtCREATETRIANGLEContext::CREATETRIANGLE() {
  return getToken(DARICParser::CREATETRIANGLE, 0);
}

DARICParser::VarNameTypeContext* DARICParser::StmtCREATETRIANGLEContext::varNameType() {
  return getRuleContext<DARICParser::VarNameTypeContext>(0);
}

tree::TerminalNode* DARICParser::StmtCREATETRIANGLEContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StmtCREATETRIANGLEContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StmtCREATETRIANGLEContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::StmtCREATETRIANGLEContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> DARICParser::StmtCREATETRIANGLEContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtCREATETRIANGLEContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}


size_t DARICParser::StmtCREATETRIANGLEContext::getRuleIndex() const {
  return DARICParser::RuleStmtCREATETRIANGLE;
}


antlrcpp::Any DARICParser::StmtCREATETRIANGLEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtCREATETRIANGLE(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtCREATETRIANGLEContext* DARICParser::stmtCREATETRIANGLE() {
  StmtCREATETRIANGLEContext *_localctx = _tracker.createInstance<StmtCREATETRIANGLEContext>(_ctx, getState());
  enterRule(_localctx, 134, DARICParser::RuleStmtCREATETRIANGLE);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(851);
    match(DARICParser::CREATETRIANGLE);
    setState(852);
    varNameType();
    setState(853);
    match(DARICParser::LPAREN);
    setState(854);
    numExpr(0);
    setState(855);
    match(DARICParser::RPAREN);
    setState(856);
    match(DARICParser::COMMA);
    setState(857);
    numExpr(0);
    setState(858);
    match(DARICParser::COMMA);
    setState(859);
    numExpr(0);
    setState(860);
    match(DARICParser::COMMA);
    setState(861);
    numExpr(0);
    setState(862);
    match(DARICParser::COMMA);
    setState(863);
    numExpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtTRANSLATEContext ------------------------------------------------------------------

DARICParser::StmtTRANSLATEContext::StmtTRANSLATEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtTRANSLATEContext::TRANSLATE() {
  return getToken(DARICParser::TRANSLATE, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StmtTRANSLATEContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StmtTRANSLATEContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtTRANSLATEContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtTRANSLATEContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}


size_t DARICParser::StmtTRANSLATEContext::getRuleIndex() const {
  return DARICParser::RuleStmtTRANSLATE;
}


antlrcpp::Any DARICParser::StmtTRANSLATEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtTRANSLATE(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtTRANSLATEContext* DARICParser::stmtTRANSLATE() {
  StmtTRANSLATEContext *_localctx = _tracker.createInstance<StmtTRANSLATEContext>(_ctx, getState());
  enterRule(_localctx, 136, DARICParser::RuleStmtTRANSLATE);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(865);
    match(DARICParser::TRANSLATE);
    setState(866);
    numExpr(0);
    setState(867);
    match(DARICParser::COMMA);
    setState(868);
    numExpr(0);
    setState(869);
    match(DARICParser::COMMA);
    setState(870);
    numExpr(0);
    setState(871);
    match(DARICParser::COMMA);
    setState(872);
    numExpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtROTATEContext ------------------------------------------------------------------

DARICParser::StmtROTATEContext::StmtROTATEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtROTATEContext::ROTATE() {
  return getToken(DARICParser::ROTATE, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StmtROTATEContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StmtROTATEContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::StmtROTATEContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StmtROTATEContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}


size_t DARICParser::StmtROTATEContext::getRuleIndex() const {
  return DARICParser::RuleStmtROTATE;
}


antlrcpp::Any DARICParser::StmtROTATEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtROTATE(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtROTATEContext* DARICParser::stmtROTATE() {
  StmtROTATEContext *_localctx = _tracker.createInstance<StmtROTATEContext>(_ctx, getState());
  enterRule(_localctx, 138, DARICParser::RuleStmtROTATE);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(874);
    match(DARICParser::ROTATE);
    setState(875);
    numExpr(0);
    setState(876);
    match(DARICParser::COMMA);
    setState(877);
    numExpr(0);
    setState(878);
    match(DARICParser::COMMA);
    setState(879);
    numExpr(0);
    setState(880);
    match(DARICParser::COMMA);
    setState(881);
    numExpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtSCALEContext ------------------------------------------------------------------

DARICParser::StmtSCALEContext::StmtSCALEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtSCALEContext::SCALE() {
  return getToken(DARICParser::SCALE, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StmtSCALEContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StmtSCALEContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::StmtSCALEContext::COMMA() {
  return getToken(DARICParser::COMMA, 0);
}


size_t DARICParser::StmtSCALEContext::getRuleIndex() const {
  return DARICParser::RuleStmtSCALE;
}


antlrcpp::Any DARICParser::StmtSCALEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtSCALE(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtSCALEContext* DARICParser::stmtSCALE() {
  StmtSCALEContext *_localctx = _tracker.createInstance<StmtSCALEContext>(_ctx, getState());
  enterRule(_localctx, 140, DARICParser::RuleStmtSCALE);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(883);
    match(DARICParser::SCALE);
    setState(884);
    numExpr(0);
    setState(885);
    match(DARICParser::COMMA);
    setState(886);
    numExpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtDELETEOBJECTContext ------------------------------------------------------------------

DARICParser::StmtDELETEOBJECTContext::StmtDELETEOBJECTContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::StmtDELETEOBJECTContext::DELETEOBJECT() {
  return getToken(DARICParser::DELETEOBJECT, 0);
}

DARICParser::NumExprContext* DARICParser::StmtDELETEOBJECTContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}


size_t DARICParser::StmtDELETEOBJECTContext::getRuleIndex() const {
  return DARICParser::RuleStmtDELETEOBJECT;
}


antlrcpp::Any DARICParser::StmtDELETEOBJECTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStmtDELETEOBJECT(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StmtDELETEOBJECTContext* DARICParser::stmtDELETEOBJECT() {
  StmtDELETEOBJECTContext *_localctx = _tracker.createInstance<StmtDELETEOBJECTContext>(_ctx, getState());
  enterRule(_localctx, 142, DARICParser::RuleStmtDELETEOBJECT);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(888);
    match(DARICParser::DELETEOBJECT);
    setState(889);
    numExpr(0);
   
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
  enterRule(_localctx, 144, DARICParser::RuleWhen);
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
    setState(891);
    match(DARICParser::WHEN);
    setState(892);
    expr();
    setState(897);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(893);
      match(DARICParser::COMMA);
      setState(894);
      expr();
      setState(899);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(900);
    match(DARICParser::COLON);
    setState(901);
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
  enterRule(_localctx, 146, DARICParser::RuleFnName);
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
    setState(903);
    _la = _input->LA(1);
    if (!(((((_la - 209) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 209)) & ((1ULL << (DARICParser::FN_INTEGER - 209))
      | (1ULL << (DARICParser::FN_FLOAT - 209))
      | (1ULL << (DARICParser::FN_STRING - 209)))) != 0))) {
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
  enterRule(_localctx, 148, DARICParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(907);
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
      case DARICParser::MONO15:
      case DARICParser::MONO20:
      case DARICParser::MONO25:
      case DARICParser::MONO30:
      case DARICParser::MONO35:
      case DARICParser::MONO40:
      case DARICParser::MONO50:
      case DARICParser::MONO75:
      case DARICParser::MONO100:
      case DARICParser::PROP15:
      case DARICParser::PROP20:
      case DARICParser::PROP25:
      case DARICParser::PROP30:
      case DARICParser::PROP35:
      case DARICParser::PROP40:
      case DARICParser::PROP50:
      case DARICParser::PROP75:
      case DARICParser::PROP100:
      case DARICParser::SERIF15:
      case DARICParser::SERIF20:
      case DARICParser::SERIF25:
      case DARICParser::SERIF30:
      case DARICParser::SERIF35:
      case DARICParser::SERIF40:
      case DARICParser::SERIF50:
      case DARICParser::SERIF75:
      case DARICParser::SERIF100:
      case DARICParser::PLUS:
      case DARICParser::MINUS:
      case DARICParser::HEXNUMBER:
      case DARICParser::BINARYNUMBER:
      case DARICParser::NUMBER:
      case DARICParser::FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(905);
        number();
        break;
      }

      case DARICParser::STRINGLITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(906);
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
  enterRule(_localctx, 150, DARICParser::RuleVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(912);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(909);
      numVar();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(910);
      strVar();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(911);
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
  enterRule(_localctx, 152, DARICParser::RuleTypeVar);

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
    setState(914);
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
  enterRule(_localctx, 154, DARICParser::RuleNumVar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(966);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatArrayContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(916);
      varName();
      setState(917);
      match(DARICParser::LPAREN);
      setState(918);
      numExpr(0);
      setState(921);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::COMMA) {
        setState(919);
        match(DARICParser::COMMA);
        setState(920);
        numExpr(0);
      }
      setState(923);
      match(DARICParser::RPAREN);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerArrayContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(925);
      varNameInteger();
      setState(926);
      match(DARICParser::LPAREN);
      setState(927);
      numExpr(0);
      setState(930);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::COMMA) {
        setState(928);
        match(DARICParser::COMMA);
        setState(929);
        numExpr(0);
      }
      setState(932);
      match(DARICParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerFieldArrayContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(934);
      typeVar();
      setState(935);
      match(DARICParser::LPAREN);
      setState(936);
      numExpr(0);
      setState(937);
      match(DARICParser::RPAREN);
      setState(938);
      varNameInteger();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatFieldArrayContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(940);
      typeVar();
      setState(941);
      match(DARICParser::LPAREN);
      setState(942);
      numExpr(0);
      setState(943);
      match(DARICParser::RPAREN);
      setState(944);
      varName();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatFNContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(946);
      match(DARICParser::FN_FLOAT);
      setState(947);
      match(DARICParser::LPAREN);
      setState(949);
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
        | (1ULL << DARICParser::WHITE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::BLACK - 64))
        | (1ULL << (DARICParser::MONO15 - 64))
        | (1ULL << (DARICParser::MONO20 - 64))
        | (1ULL << (DARICParser::MONO25 - 64))
        | (1ULL << (DARICParser::MONO30 - 64))
        | (1ULL << (DARICParser::MONO35 - 64))
        | (1ULL << (DARICParser::MONO40 - 64))
        | (1ULL << (DARICParser::MONO50 - 64))
        | (1ULL << (DARICParser::MONO75 - 64))
        | (1ULL << (DARICParser::MONO100 - 64))
        | (1ULL << (DARICParser::PROP15 - 64))
        | (1ULL << (DARICParser::PROP20 - 64))
        | (1ULL << (DARICParser::PROP25 - 64))
        | (1ULL << (DARICParser::PROP30 - 64))
        | (1ULL << (DARICParser::PROP35 - 64))
        | (1ULL << (DARICParser::PROP40 - 64))
        | (1ULL << (DARICParser::PROP50 - 64))
        | (1ULL << (DARICParser::PROP75 - 64))
        | (1ULL << (DARICParser::PROP100 - 64))
        | (1ULL << (DARICParser::SERIF15 - 64))
        | (1ULL << (DARICParser::SERIF20 - 64))
        | (1ULL << (DARICParser::SERIF25 - 64))
        | (1ULL << (DARICParser::SERIF30 - 64))
        | (1ULL << (DARICParser::SERIF35 - 64))
        | (1ULL << (DARICParser::SERIF40 - 64))
        | (1ULL << (DARICParser::SERIF50 - 64))
        | (1ULL << (DARICParser::SERIF75 - 64))
        | (1ULL << (DARICParser::SERIF100 - 64))
        | (1ULL << (DARICParser::CREATESHAPE - 64))
        | (1ULL << (DARICParser::CREATEOBJECT - 64))
        | (1ULL << (DARICParser::BGETH - 64))
        | (1ULL << (DARICParser::EOFH - 64))
        | (1ULL << (DARICParser::OPENIN - 64))
        | (1ULL << (DARICParser::OPENOUT - 64))
        | (1ULL << (DARICParser::OPENUP - 64))
        | (1ULL << (DARICParser::PTRH - 64))
        | (1ULL << (DARICParser::COLOUR - 64))
        | (1ULL << (DARICParser::CREATEFONT - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (DARICParser::LOADTYPEFACE - 128))
        | (1ULL << (DARICParser::POINT - 128))
        | (1ULL << (DARICParser::SCREENWIDTH - 128))
        | (1ULL << (DARICParser::SCREENHEIGHT - 128))
        | (1ULL << (DARICParser::TIME - 128))
        | (1ULL << (DARICParser::PI - 128))
        | (1ULL << (DARICParser::SQR - 128))
        | (1ULL << (DARICParser::LN - 128))
        | (1ULL << (DARICParser::LOG - 128))
        | (1ULL << (DARICParser::EXP - 128))
        | (1ULL << (DARICParser::ATN - 128))
        | (1ULL << (DARICParser::TAN - 128))
        | (1ULL << (DARICParser::COS - 128))
        | (1ULL << (DARICParser::SIN - 128))
        | (1ULL << (DARICParser::ABS - 128))
        | (1ULL << (DARICParser::ACS - 128))
        | (1ULL << (DARICParser::ASN - 128))
        | (1ULL << (DARICParser::DEG - 128))
        | (1ULL << (DARICParser::RAD - 128))
        | (1ULL << (DARICParser::SGN - 128))
        | (1ULL << (DARICParser::ASC - 128))
        | (1ULL << (DARICParser::LEN - 128))
        | (1ULL << (DARICParser::INSTR - 128))
        | (1ULL << (DARICParser::VAL - 128))
        | (1ULL << (DARICParser::TIMES - 128))
        | (1ULL << (DARICParser::STRS - 128))
        | (1ULL << (DARICParser::STRINGS - 128))
        | (1ULL << (DARICParser::CHRS - 128))
        | (1ULL << (DARICParser::LEFTS - 128))
        | (1ULL << (DARICParser::MIDS - 128))
        | (1ULL << (DARICParser::RIGHTS - 128))
        | (1ULL << (DARICParser::RND - 128))
        | (1ULL << (DARICParser::RND0 - 128))
        | (1ULL << (DARICParser::RND1 - 128))
        | (1ULL << (DARICParser::NOT - 128))
        | (1ULL << (DARICParser::PLUS - 128))
        | (1ULL << (DARICParser::MINUS - 128)))) != 0) || ((((_la - 201) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 201)) & ((1ULL << (DARICParser::LPAREN - 201))
        | (1ULL << (DARICParser::STRINGLITERAL - 201))
        | (1ULL << (DARICParser::FN_INTEGER - 201))
        | (1ULL << (DARICParser::FN_FLOAT - 201))
        | (1ULL << (DARICParser::FN_STRING - 201))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 201))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 201))
        | (1ULL << (DARICParser::VARIABLE_STRING - 201))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 201))
        | (1ULL << (DARICParser::HEXNUMBER - 201))
        | (1ULL << (DARICParser::BINARYNUMBER - 201))
        | (1ULL << (DARICParser::NUMBER - 201))
        | (1ULL << (DARICParser::FLOAT - 201)))) != 0)) {
        setState(948);
        functionParList();
      }
      setState(951);
      match(DARICParser::RPAREN);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerFNContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(952);
      match(DARICParser::FN_INTEGER);
      setState(953);
      match(DARICParser::LPAREN);
      setState(955);
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
        | (1ULL << DARICParser::WHITE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::BLACK - 64))
        | (1ULL << (DARICParser::MONO15 - 64))
        | (1ULL << (DARICParser::MONO20 - 64))
        | (1ULL << (DARICParser::MONO25 - 64))
        | (1ULL << (DARICParser::MONO30 - 64))
        | (1ULL << (DARICParser::MONO35 - 64))
        | (1ULL << (DARICParser::MONO40 - 64))
        | (1ULL << (DARICParser::MONO50 - 64))
        | (1ULL << (DARICParser::MONO75 - 64))
        | (1ULL << (DARICParser::MONO100 - 64))
        | (1ULL << (DARICParser::PROP15 - 64))
        | (1ULL << (DARICParser::PROP20 - 64))
        | (1ULL << (DARICParser::PROP25 - 64))
        | (1ULL << (DARICParser::PROP30 - 64))
        | (1ULL << (DARICParser::PROP35 - 64))
        | (1ULL << (DARICParser::PROP40 - 64))
        | (1ULL << (DARICParser::PROP50 - 64))
        | (1ULL << (DARICParser::PROP75 - 64))
        | (1ULL << (DARICParser::PROP100 - 64))
        | (1ULL << (DARICParser::SERIF15 - 64))
        | (1ULL << (DARICParser::SERIF20 - 64))
        | (1ULL << (DARICParser::SERIF25 - 64))
        | (1ULL << (DARICParser::SERIF30 - 64))
        | (1ULL << (DARICParser::SERIF35 - 64))
        | (1ULL << (DARICParser::SERIF40 - 64))
        | (1ULL << (DARICParser::SERIF50 - 64))
        | (1ULL << (DARICParser::SERIF75 - 64))
        | (1ULL << (DARICParser::SERIF100 - 64))
        | (1ULL << (DARICParser::CREATESHAPE - 64))
        | (1ULL << (DARICParser::CREATEOBJECT - 64))
        | (1ULL << (DARICParser::BGETH - 64))
        | (1ULL << (DARICParser::EOFH - 64))
        | (1ULL << (DARICParser::OPENIN - 64))
        | (1ULL << (DARICParser::OPENOUT - 64))
        | (1ULL << (DARICParser::OPENUP - 64))
        | (1ULL << (DARICParser::PTRH - 64))
        | (1ULL << (DARICParser::COLOUR - 64))
        | (1ULL << (DARICParser::CREATEFONT - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (DARICParser::LOADTYPEFACE - 128))
        | (1ULL << (DARICParser::POINT - 128))
        | (1ULL << (DARICParser::SCREENWIDTH - 128))
        | (1ULL << (DARICParser::SCREENHEIGHT - 128))
        | (1ULL << (DARICParser::TIME - 128))
        | (1ULL << (DARICParser::PI - 128))
        | (1ULL << (DARICParser::SQR - 128))
        | (1ULL << (DARICParser::LN - 128))
        | (1ULL << (DARICParser::LOG - 128))
        | (1ULL << (DARICParser::EXP - 128))
        | (1ULL << (DARICParser::ATN - 128))
        | (1ULL << (DARICParser::TAN - 128))
        | (1ULL << (DARICParser::COS - 128))
        | (1ULL << (DARICParser::SIN - 128))
        | (1ULL << (DARICParser::ABS - 128))
        | (1ULL << (DARICParser::ACS - 128))
        | (1ULL << (DARICParser::ASN - 128))
        | (1ULL << (DARICParser::DEG - 128))
        | (1ULL << (DARICParser::RAD - 128))
        | (1ULL << (DARICParser::SGN - 128))
        | (1ULL << (DARICParser::ASC - 128))
        | (1ULL << (DARICParser::LEN - 128))
        | (1ULL << (DARICParser::INSTR - 128))
        | (1ULL << (DARICParser::VAL - 128))
        | (1ULL << (DARICParser::TIMES - 128))
        | (1ULL << (DARICParser::STRS - 128))
        | (1ULL << (DARICParser::STRINGS - 128))
        | (1ULL << (DARICParser::CHRS - 128))
        | (1ULL << (DARICParser::LEFTS - 128))
        | (1ULL << (DARICParser::MIDS - 128))
        | (1ULL << (DARICParser::RIGHTS - 128))
        | (1ULL << (DARICParser::RND - 128))
        | (1ULL << (DARICParser::RND0 - 128))
        | (1ULL << (DARICParser::RND1 - 128))
        | (1ULL << (DARICParser::NOT - 128))
        | (1ULL << (DARICParser::PLUS - 128))
        | (1ULL << (DARICParser::MINUS - 128)))) != 0) || ((((_la - 201) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 201)) & ((1ULL << (DARICParser::LPAREN - 201))
        | (1ULL << (DARICParser::STRINGLITERAL - 201))
        | (1ULL << (DARICParser::FN_INTEGER - 201))
        | (1ULL << (DARICParser::FN_FLOAT - 201))
        | (1ULL << (DARICParser::FN_STRING - 201))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 201))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 201))
        | (1ULL << (DARICParser::VARIABLE_STRING - 201))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 201))
        | (1ULL << (DARICParser::HEXNUMBER - 201))
        | (1ULL << (DARICParser::BINARYNUMBER - 201))
        | (1ULL << (DARICParser::NUMBER - 201))
        | (1ULL << (DARICParser::FLOAT - 201)))) != 0)) {
        setState(954);
        functionParList();
      }
      setState(957);
      match(DARICParser::RPAREN);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(958);
      varName();
      break;
    }

    case 8: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(959);
      varNameInteger();
      break;
    }

    case 9: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatFieldContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(960);
      typeVar();
      setState(961);
      varName();
      break;
    }

    case 10: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerFieldContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(963);
      typeVar();
      setState(964);
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

DARICParser::NumVarStringFNContext::NumVarStringFNContext(StrVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumVarStringFNContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumVarStringFN(this);
  else
    return visitor->visitChildren(this);
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
  enterRule(_localctx, 156, DARICParser::RuleStrVar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(993);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringArrayContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(968);
      varNameString();
      setState(969);
      match(DARICParser::LPAREN);
      setState(970);
      numExpr(0);
      setState(973);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::COMMA) {
        setState(971);
        match(DARICParser::COMMA);
        setState(972);
        numExpr(0);
      }
      setState(975);
      match(DARICParser::RPAREN);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringFieldArrayContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(977);
      typeVar();
      setState(978);
      match(DARICParser::LPAREN);
      setState(979);
      numExpr(0);
      setState(980);
      match(DARICParser::RPAREN);
      setState(981);
      varNameString();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(983);
      varNameString();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringFieldContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(984);
      typeVar();
      setState(985);
      varNameString();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringFNContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(987);
      match(DARICParser::FN_STRING);
      setState(988);
      match(DARICParser::LPAREN);
      setState(990);
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
        | (1ULL << DARICParser::WHITE))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (DARICParser::BLACK - 64))
        | (1ULL << (DARICParser::MONO15 - 64))
        | (1ULL << (DARICParser::MONO20 - 64))
        | (1ULL << (DARICParser::MONO25 - 64))
        | (1ULL << (DARICParser::MONO30 - 64))
        | (1ULL << (DARICParser::MONO35 - 64))
        | (1ULL << (DARICParser::MONO40 - 64))
        | (1ULL << (DARICParser::MONO50 - 64))
        | (1ULL << (DARICParser::MONO75 - 64))
        | (1ULL << (DARICParser::MONO100 - 64))
        | (1ULL << (DARICParser::PROP15 - 64))
        | (1ULL << (DARICParser::PROP20 - 64))
        | (1ULL << (DARICParser::PROP25 - 64))
        | (1ULL << (DARICParser::PROP30 - 64))
        | (1ULL << (DARICParser::PROP35 - 64))
        | (1ULL << (DARICParser::PROP40 - 64))
        | (1ULL << (DARICParser::PROP50 - 64))
        | (1ULL << (DARICParser::PROP75 - 64))
        | (1ULL << (DARICParser::PROP100 - 64))
        | (1ULL << (DARICParser::SERIF15 - 64))
        | (1ULL << (DARICParser::SERIF20 - 64))
        | (1ULL << (DARICParser::SERIF25 - 64))
        | (1ULL << (DARICParser::SERIF30 - 64))
        | (1ULL << (DARICParser::SERIF35 - 64))
        | (1ULL << (DARICParser::SERIF40 - 64))
        | (1ULL << (DARICParser::SERIF50 - 64))
        | (1ULL << (DARICParser::SERIF75 - 64))
        | (1ULL << (DARICParser::SERIF100 - 64))
        | (1ULL << (DARICParser::CREATESHAPE - 64))
        | (1ULL << (DARICParser::CREATEOBJECT - 64))
        | (1ULL << (DARICParser::BGETH - 64))
        | (1ULL << (DARICParser::EOFH - 64))
        | (1ULL << (DARICParser::OPENIN - 64))
        | (1ULL << (DARICParser::OPENOUT - 64))
        | (1ULL << (DARICParser::OPENUP - 64))
        | (1ULL << (DARICParser::PTRH - 64))
        | (1ULL << (DARICParser::COLOUR - 64))
        | (1ULL << (DARICParser::CREATEFONT - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 128)) & ((1ULL << (DARICParser::LOADTYPEFACE - 128))
        | (1ULL << (DARICParser::POINT - 128))
        | (1ULL << (DARICParser::SCREENWIDTH - 128))
        | (1ULL << (DARICParser::SCREENHEIGHT - 128))
        | (1ULL << (DARICParser::TIME - 128))
        | (1ULL << (DARICParser::PI - 128))
        | (1ULL << (DARICParser::SQR - 128))
        | (1ULL << (DARICParser::LN - 128))
        | (1ULL << (DARICParser::LOG - 128))
        | (1ULL << (DARICParser::EXP - 128))
        | (1ULL << (DARICParser::ATN - 128))
        | (1ULL << (DARICParser::TAN - 128))
        | (1ULL << (DARICParser::COS - 128))
        | (1ULL << (DARICParser::SIN - 128))
        | (1ULL << (DARICParser::ABS - 128))
        | (1ULL << (DARICParser::ACS - 128))
        | (1ULL << (DARICParser::ASN - 128))
        | (1ULL << (DARICParser::DEG - 128))
        | (1ULL << (DARICParser::RAD - 128))
        | (1ULL << (DARICParser::SGN - 128))
        | (1ULL << (DARICParser::ASC - 128))
        | (1ULL << (DARICParser::LEN - 128))
        | (1ULL << (DARICParser::INSTR - 128))
        | (1ULL << (DARICParser::VAL - 128))
        | (1ULL << (DARICParser::TIMES - 128))
        | (1ULL << (DARICParser::STRS - 128))
        | (1ULL << (DARICParser::STRINGS - 128))
        | (1ULL << (DARICParser::CHRS - 128))
        | (1ULL << (DARICParser::LEFTS - 128))
        | (1ULL << (DARICParser::MIDS - 128))
        | (1ULL << (DARICParser::RIGHTS - 128))
        | (1ULL << (DARICParser::RND - 128))
        | (1ULL << (DARICParser::RND0 - 128))
        | (1ULL << (DARICParser::RND1 - 128))
        | (1ULL << (DARICParser::NOT - 128))
        | (1ULL << (DARICParser::PLUS - 128))
        | (1ULL << (DARICParser::MINUS - 128)))) != 0) || ((((_la - 201) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 201)) & ((1ULL << (DARICParser::LPAREN - 201))
        | (1ULL << (DARICParser::STRINGLITERAL - 201))
        | (1ULL << (DARICParser::FN_INTEGER - 201))
        | (1ULL << (DARICParser::FN_FLOAT - 201))
        | (1ULL << (DARICParser::FN_STRING - 201))
        | (1ULL << (DARICParser::VARIABLE_FLOAT - 201))
        | (1ULL << (DARICParser::VARIABLE_INTEGER - 201))
        | (1ULL << (DARICParser::VARIABLE_STRING - 201))
        | (1ULL << (DARICParser::VARIABLE_TYPE - 201))
        | (1ULL << (DARICParser::HEXNUMBER - 201))
        | (1ULL << (DARICParser::BINARYNUMBER - 201))
        | (1ULL << (DARICParser::NUMBER - 201))
        | (1ULL << (DARICParser::FLOAT - 201)))) != 0)) {
        setState(989);
        functionParList();
      }
      setState(992);
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
  enterRule(_localctx, 158, DARICParser::RuleJustVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(998);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::VARIABLE_FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(995);
        varName();
        break;
      }

      case DARICParser::VARIABLE_INTEGER: {
        enterOuterAlt(_localctx, 2);
        setState(996);
        varNameInteger();
        break;
      }

      case DARICParser::VARIABLE_STRING: {
        enterOuterAlt(_localctx, 3);
        setState(997);
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
  enterRule(_localctx, 160, DARICParser::RuleJustNumberVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1002);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::VARIABLE_FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(1000);
        varName();
        break;
      }

      case DARICParser::VARIABLE_INTEGER: {
        enterOuterAlt(_localctx, 2);
        setState(1001);
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
  enterRule(_localctx, 162, DARICParser::RuleVarName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1004);
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
  enterRule(_localctx, 164, DARICParser::RuleVarNameInteger);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1006);
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
  enterRule(_localctx, 166, DARICParser::RuleVarNameString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1008);
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
  enterRule(_localctx, 168, DARICParser::RuleVarNameType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1010);
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
  enterRule(_localctx, 170, DARICParser::RuleVarDecl);
  size_t _la = 0;

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclIndContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(1012);
      justVar();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclArrayedContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(1013);
      justVar();
      setState(1024);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::LPAREN) {
        setState(1014);
        match(DARICParser::LPAREN);
        setState(1015);
        numExpr(0);
        setState(1018);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DARICParser::COMMA) {
          setState(1016);
          match(DARICParser::COMMA);
          setState(1017);
          numExpr(0);
        }
        setState(1020);
        match(DARICParser::RPAREN);
        setState(1026);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeVarContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(1027);
      typeVar();
      setState(1028);
      varName();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeVarContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(1030);
      typeVar();
      setState(1031);
      varNameInteger();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeVarArrayedContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(1033);
      typeVar();
      setState(1034);
      match(DARICParser::LPAREN);
      setState(1035);
      numExpr(0);
      setState(1036);
      match(DARICParser::RPAREN);
      setState(1037);
      varName();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeVarArrayedContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(1039);
      typeVar();
      setState(1040);
      match(DARICParser::LPAREN);
      setState(1041);
      numExpr(0);
      setState(1042);
      match(DARICParser::RPAREN);
      setState(1043);
      varNameInteger();
      break;
    }

    case 7: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(1045);
      typeVar();
      break;
    }

    case 8: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeArrayedContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(1046);
      typeVar();
      setState(1047);
      match(DARICParser::LPAREN);
      setState(1048);
      numExpr(0);
      setState(1049);
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
  enterRule(_localctx, 172, DARICParser::RuleVarDeclWithDimension);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1072);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::VARIABLE_FLOAT:
      case DARICParser::VARIABLE_INTEGER:
      case DARICParser::VARIABLE_STRING: {
        enterOuterAlt(_localctx, 1);
        setState(1053);
        justVar();
        setState(1054);
        match(DARICParser::LPAREN);
        setState(1055);
        numExpr(0);
        setState(1060);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == DARICParser::COMMA) {
          setState(1056);
          match(DARICParser::COMMA);
          setState(1057);
          numExpr(0);
          setState(1062);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1063);
        match(DARICParser::RPAREN);
        break;
      }

      case DARICParser::VARIABLE_TYPE: {
        enterOuterAlt(_localctx, 2);
        setState(1065);
        typeVar();
        setState(1066);
        match(DARICParser::LPAREN);
        setState(1067);
        numExpr(0);
        setState(1068);
        match(DARICParser::COMMA);
        setState(1069);
        varName();
        setState(1070);
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
  enterRule(_localctx, 174, DARICParser::RuleVarList);
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
    setState(1074);
    varDecl();
    setState(1079);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(1075);
      match(DARICParser::COMMA);
      setState(1076);
      varDecl();
      setState(1081);
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
  enterRule(_localctx, 176, DARICParser::RuleFunctionVarList);
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
    setState(1083);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::RETURN) {
      setState(1082);
      match(DARICParser::RETURN);
    }
    setState(1085);
    justVar();
    setState(1093);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(1086);
      match(DARICParser::COMMA);
      setState(1088);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::RETURN) {
        setState(1087);
        match(DARICParser::RETURN);
      }
      setState(1090);
      justVar();
      setState(1095);
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
  enterRule(_localctx, 178, DARICParser::RuleFunctionParList);
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
    setState(1096);
    expr();
    setState(1101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(1097);
      match(DARICParser::COMMA);
      setState(1098);
      expr();
      setState(1103);
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
  enterRule(_localctx, 180, DARICParser::RuleExprList);
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
    setState(1104);
    expr();
    setState(1109);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(1105);
      match(DARICParser::COMMA);
      setState(1106);
      expr();
      setState(1111);
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
  enterRule(_localctx, 182, DARICParser::RulePrintListItem);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1123);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<PrintListItemContext *>(_tracker.createInstance<DARICParser::PrintListExprContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(1113);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::TILDE) {
        setState(1112);
        match(DARICParser::TILDE);
      }
      setState(1115);
      expr();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<PrintListItemContext *>(_tracker.createInstance<DARICParser::PrintListSPCPContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(1116);
      match(DARICParser::SPC);
      setState(1117);
      match(DARICParser::LPAREN);
      setState(1118);
      numExpr(0);
      setState(1119);
      match(DARICParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<PrintListItemContext *>(_tracker.createInstance<DARICParser::PrintListSPCContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(1121);
      match(DARICParser::SPC);
      setState(1122);
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
  enterRule(_localctx, 184, DARICParser::RulePrintListTick);
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
    setState(1126); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1125);
      match(DARICParser::TICK);
      setState(1128); 
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
  enterRule(_localctx, 186, DARICParser::RulePrintListSeparator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1133);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::COMMA: {
        enterOuterAlt(_localctx, 1);
        setState(1130);
        match(DARICParser::COMMA);
        break;
      }

      case DARICParser::SEMICOLON: {
        enterOuterAlt(_localctx, 2);
        setState(1131);
        match(DARICParser::SEMICOLON);
        break;
      }

      case DARICParser::TICK: {
        enterOuterAlt(_localctx, 3);
        setState(1132);
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
  enterRule(_localctx, 188, DARICParser::RulePrintList);
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
    setState(1136);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::TICK) {
      setState(1135);
      printListTick();
    }
    setState(1139);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::SEMICOLON) {
      setState(1138);
      dynamic_cast<PrintListContext *>(_localctx)->s1 = match(DARICParser::SEMICOLON);
    }
    setState(1141);
    printListItem();
    setState(1147);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1142);
        printListSeparator();
        setState(1143);
        printListItem(); 
      }
      setState(1149);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx);
    }
    setState(1151);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::SEMICOLON) {
      setState(1150);
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
  enterRule(_localctx, 190, DARICParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1155);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1153);
      numExpr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1154);
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

DARICParser::DefaultFontsContext* DARICParser::NumberContext::defaultFonts() {
  return getRuleContext<DARICParser::DefaultFontsContext>(0);
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
  enterRule(_localctx, 192, DARICParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1163);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1157);
      numberInteger();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1158);
      numberFloat();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1159);
      numberHex();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1160);
      numberBinary();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1161);
      numColours();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1162);
      defaultFonts();
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
  enterRule(_localctx, 194, DARICParser::RuleNumberInteger);
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
    setState(1166);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::PLUS

    || _la == DARICParser::MINUS) {
      setState(1165);
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
    setState(1168);
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
  enterRule(_localctx, 196, DARICParser::RuleNumberHex);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1170);
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
  enterRule(_localctx, 198, DARICParser::RuleNumberBinary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1172);
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
  enterRule(_localctx, 200, DARICParser::RuleNumberFloat);
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
    setState(1175);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::PLUS

    || _la == DARICParser::MINUS) {
      setState(1174);
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
    setState(1177);
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

tree::TerminalNode* DARICParser::StrFuncCHRSContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::StrFuncCHRSContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
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
  enterRule(_localctx, 202, DARICParser::RuleStrFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1229);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncTIMESContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(1179);
      match(DARICParser::TIMES);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncCHRSContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(1180);
      match(DARICParser::CHRS);
      setState(1181);
      match(DARICParser::LPAREN);
      setState(1182);
      numExpr(0);
      setState(1183);
      match(DARICParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncLEFTSContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(1185);
      match(DARICParser::LEFTS);
      setState(1186);
      match(DARICParser::LPAREN);
      setState(1187);
      strExpr(0);
      setState(1188);
      match(DARICParser::COMMA);
      setState(1189);
      numExpr(0);
      setState(1190);
      match(DARICParser::RPAREN);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncMIDS3Context>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(1192);
      match(DARICParser::MIDS);
      setState(1193);
      match(DARICParser::LPAREN);
      setState(1194);
      strExpr(0);
      setState(1195);
      match(DARICParser::COMMA);
      setState(1196);
      numExpr(0);
      setState(1197);
      match(DARICParser::COMMA);
      setState(1198);
      numExpr(0);
      setState(1199);
      match(DARICParser::RPAREN);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncMIDS2Context>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(1201);
      match(DARICParser::MIDS);
      setState(1202);
      match(DARICParser::LPAREN);
      setState(1203);
      strExpr(0);
      setState(1204);
      match(DARICParser::COMMA);
      setState(1205);
      numExpr(0);
      setState(1206);
      match(DARICParser::RPAREN);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncRIGHTSContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(1208);
      match(DARICParser::RIGHTS);
      setState(1209);
      match(DARICParser::LPAREN);
      setState(1210);
      strExpr(0);
      setState(1211);
      match(DARICParser::COMMA);
      setState(1212);
      numExpr(0);
      setState(1213);
      match(DARICParser::RPAREN);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncSTRSContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(1215);
      match(DARICParser::STRS);
      setState(1216);
      numExpr(0);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncSTRSHEXContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(1217);
      match(DARICParser::STRS);
      setState(1218);
      match(DARICParser::TILDE);
      setState(1219);
      numExpr(0);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncSTRINGSContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(1220);
      match(DARICParser::STRINGS);
      setState(1221);
      match(DARICParser::LPAREN);
      setState(1222);
      numExpr(0);
      setState(1223);
      match(DARICParser::COMMA);
      setState(1224);
      strExpr(0);
      setState(1225);
      match(DARICParser::RPAREN);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncINKEYSContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(1227);
      match(DARICParser::INKEYS);
      setState(1228);
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
  enterRule(_localctx, 204, DARICParser::RuleString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1231);
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
  size_t startState = 206;
  enterRecursionRule(_localctx, 206, DARICParser::RuleStrExpr, precedence);

    

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
    setState(1241);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::LPAREN: {
        setState(1234);
        match(DARICParser::LPAREN);
        setState(1235);
        strExpr(0);
        setState(1236);
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
        setState(1238);
        strFunc();
        break;
      }

      case DARICParser::FN_STRING:
      case DARICParser::VARIABLE_STRING:
      case DARICParser::VARIABLE_TYPE: {
        setState(1239);
        strVar();
        break;
      }

      case DARICParser::STRINGLITERAL: {
        setState(1240);
        string();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(1248);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StrExprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStrExpr);
        setState(1243);

        if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
        setState(1244);
        match(DARICParser::PLUS);
        setState(1245);
        strExpr(4); 
      }
      setState(1250);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx);
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
//----------------- NumFuncCREATEFONTContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncCREATEFONTContext::CREATEFONT() {
  return getToken(DARICParser::CREATEFONT, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::NumFuncCREATEFONTContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumFuncCREATEFONTContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumFuncCREATEFONTContext::COMMA() {
  return getToken(DARICParser::COMMA, 0);
}

DARICParser::NumFuncCREATEFONTContext::NumFuncCREATEFONTContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncCREATEFONTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncCREATEFONT(this);
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
//----------------- NumFuncSHAPEContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncSHAPEContext::CREATESHAPE() {
  return getToken(DARICParser::CREATESHAPE, 0);
}

std::vector<DARICParser::VarNameTypeContext *> DARICParser::NumFuncSHAPEContext::varNameType() {
  return getRuleContexts<DARICParser::VarNameTypeContext>();
}

DARICParser::VarNameTypeContext* DARICParser::NumFuncSHAPEContext::varNameType(size_t i) {
  return getRuleContext<DARICParser::VarNameTypeContext>(i);
}

tree::TerminalNode* DARICParser::NumFuncSHAPEContext::COMMA() {
  return getToken(DARICParser::COMMA, 0);
}

DARICParser::NumFuncSHAPEContext::NumFuncSHAPEContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncSHAPEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncSHAPE(this);
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
//----------------- NumFuncSCREENWIDTHContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncSCREENWIDTHContext::SCREENWIDTH() {
  return getToken(DARICParser::SCREENWIDTH, 0);
}

DARICParser::NumFuncSCREENWIDTHContext::NumFuncSCREENWIDTHContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncSCREENWIDTHContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncSCREENWIDTH(this);
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

tree::TerminalNode* DARICParser::NumFuncINKEYContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncINKEYContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncINKEYContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
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
//----------------- NumFuncSCREENHEIGHTContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncSCREENHEIGHTContext::SCREENHEIGHT() {
  return getToken(DARICParser::SCREENHEIGHT, 0);
}

DARICParser::NumFuncSCREENHEIGHTContext::NumFuncSCREENHEIGHTContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncSCREENHEIGHTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncSCREENHEIGHT(this);
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
//----------------- NumFuncCOLOURContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncCOLOURContext::COLOUR() {
  return getToken(DARICParser::COLOUR, 0);
}

tree::TerminalNode* DARICParser::NumFuncCOLOURContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::NumFuncCOLOURContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumFuncCOLOURContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::NumFuncCOLOURContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::NumFuncCOLOURContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

tree::TerminalNode* DARICParser::NumFuncCOLOURContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

DARICParser::NumFuncCOLOURContext::NumFuncCOLOURContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncCOLOURContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncCOLOUR(this);
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
//----------------- NumFuncLOADTYPEFACEContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncLOADTYPEFACEContext::LOADTYPEFACE() {
  return getToken(DARICParser::LOADTYPEFACE, 0);
}

DARICParser::StrExprContext* DARICParser::NumFuncLOADTYPEFACEContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}

DARICParser::NumFuncLOADTYPEFACEContext::NumFuncLOADTYPEFACEContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncLOADTYPEFACEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncLOADTYPEFACE(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumFuncOBJECTContext ------------------------------------------------------------------

tree::TerminalNode* DARICParser::NumFuncOBJECTContext::CREATEOBJECT() {
  return getToken(DARICParser::CREATEOBJECT, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::NumFuncOBJECTContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumFuncOBJECTContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::NumFuncOBJECTContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::NumFuncOBJECTContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

tree::TerminalNode* DARICParser::NumFuncOBJECTContext::SOLID() {
  return getToken(DARICParser::SOLID, 0);
}

tree::TerminalNode* DARICParser::NumFuncOBJECTContext::WIREFRAME() {
  return getToken(DARICParser::WIREFRAME, 0);
}

tree::TerminalNode* DARICParser::NumFuncOBJECTContext::SHADED() {
  return getToken(DARICParser::SHADED, 0);
}

tree::TerminalNode* DARICParser::NumFuncOBJECTContext::FILLEDWIREFRAME() {
  return getToken(DARICParser::FILLEDWIREFRAME, 0);
}

DARICParser::NumFuncOBJECTContext::NumFuncOBJECTContext(NumFuncContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::NumFuncOBJECTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFuncOBJECT(this);
  else
    return visitor->visitChildren(this);
}
DARICParser::NumFuncContext* DARICParser::numFunc() {
  NumFuncContext *_localctx = _tracker.createInstance<NumFuncContext>(_ctx, getState());
  enterRule(_localctx, 208, DARICParser::RuleNumFunc);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1441);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncPIContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(1251);
      match(DARICParser::PI);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncFALSEContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(1252);
      match(DARICParser::FALSE);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncTRUEContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(1253);
      match(DARICParser::TRUE);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncTIMEContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(1254);
      match(DARICParser::TIME);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRNDRANGEContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(1255);
      match(DARICParser::RND);
      setState(1256);
      match(DARICParser::LPAREN);
      setState(1257);
      numExpr(0);
      setState(1258);
      match(DARICParser::RPAREN);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRNDContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(1260);
      match(DARICParser::RND);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRND0Context>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(1261);
      match(DARICParser::RND0);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRND1Context>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(1262);
      match(DARICParser::RND1);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncLNContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(1263);
      match(DARICParser::LN);
      setState(1264);
      match(DARICParser::LPAREN);
      setState(1265);
      numExpr(0);
      setState(1266);
      match(DARICParser::RPAREN);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncLOGContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(1268);
      match(DARICParser::LOG);
      setState(1269);
      match(DARICParser::LPAREN);
      setState(1270);
      numExpr(0);
      setState(1271);
      match(DARICParser::RPAREN);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncEXPContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(1273);
      match(DARICParser::EXP);
      setState(1274);
      match(DARICParser::LPAREN);
      setState(1275);
      numExpr(0);
      setState(1276);
      match(DARICParser::RPAREN);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncATNContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(1278);
      match(DARICParser::ATN);
      setState(1279);
      match(DARICParser::LPAREN);
      setState(1280);
      numExpr(0);
      setState(1281);
      match(DARICParser::RPAREN);
      break;
    }

    case 13: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncTANContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(1283);
      match(DARICParser::TAN);
      setState(1284);
      match(DARICParser::LPAREN);
      setState(1285);
      numExpr(0);
      setState(1286);
      match(DARICParser::RPAREN);
      break;
    }

    case 14: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncCOSContext>(_localctx));
      enterOuterAlt(_localctx, 14);
      setState(1288);
      match(DARICParser::COS);
      setState(1289);
      match(DARICParser::LPAREN);
      setState(1290);
      numExpr(0);
      setState(1291);
      match(DARICParser::RPAREN);
      break;
    }

    case 15: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSINContext>(_localctx));
      enterOuterAlt(_localctx, 15);
      setState(1293);
      match(DARICParser::SIN);
      setState(1294);
      match(DARICParser::LPAREN);
      setState(1295);
      numExpr(0);
      setState(1296);
      match(DARICParser::RPAREN);
      break;
    }

    case 16: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncABSContext>(_localctx));
      enterOuterAlt(_localctx, 16);
      setState(1298);
      match(DARICParser::ABS);
      setState(1299);
      match(DARICParser::LPAREN);
      setState(1300);
      numExpr(0);
      setState(1301);
      match(DARICParser::RPAREN);
      break;
    }

    case 17: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncACSContext>(_localctx));
      enterOuterAlt(_localctx, 17);
      setState(1303);
      match(DARICParser::ACS);
      setState(1304);
      match(DARICParser::LPAREN);
      setState(1305);
      numExpr(0);
      setState(1306);
      match(DARICParser::RPAREN);
      break;
    }

    case 18: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncASNContext>(_localctx));
      enterOuterAlt(_localctx, 18);
      setState(1308);
      match(DARICParser::ASN);
      setState(1309);
      match(DARICParser::LPAREN);
      setState(1310);
      numExpr(0);
      setState(1311);
      match(DARICParser::RPAREN);
      break;
    }

    case 19: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncDEGContext>(_localctx));
      enterOuterAlt(_localctx, 19);
      setState(1313);
      match(DARICParser::DEG);
      setState(1314);
      match(DARICParser::LPAREN);
      setState(1315);
      numExpr(0);
      setState(1316);
      match(DARICParser::RPAREN);
      break;
    }

    case 20: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRADContext>(_localctx));
      enterOuterAlt(_localctx, 20);
      setState(1318);
      match(DARICParser::RAD);
      setState(1319);
      match(DARICParser::LPAREN);
      setState(1320);
      numExpr(0);
      setState(1321);
      match(DARICParser::RPAREN);
      break;
    }

    case 21: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSQRContext>(_localctx));
      enterOuterAlt(_localctx, 21);
      setState(1323);
      match(DARICParser::SQR);
      setState(1324);
      match(DARICParser::LPAREN);
      setState(1325);
      numExpr(0);
      setState(1326);
      match(DARICParser::RPAREN);
      break;
    }

    case 22: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSGNContext>(_localctx));
      enterOuterAlt(_localctx, 22);
      setState(1328);
      match(DARICParser::SGN);
      setState(1329);
      match(DARICParser::LPAREN);
      setState(1330);
      numExpr(0);
      setState(1331);
      match(DARICParser::RPAREN);
      break;
    }

    case 23: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncGETContext>(_localctx));
      enterOuterAlt(_localctx, 23);
      setState(1333);
      match(DARICParser::GET);
      break;
    }

    case 24: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncINKEYContext>(_localctx));
      enterOuterAlt(_localctx, 24);
      setState(1334);
      match(DARICParser::INKEY);
      setState(1335);
      match(DARICParser::LPAREN);
      setState(1336);
      numExpr(0);
      setState(1337);
      match(DARICParser::RPAREN);
      break;
    }

    case 25: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncINTContext>(_localctx));
      enterOuterAlt(_localctx, 25);
      setState(1339);
      match(DARICParser::INT);
      setState(1340);
      match(DARICParser::LPAREN);
      setState(1341);
      numExpr(0);
      setState(1342);
      match(DARICParser::RPAREN);
      break;
    }

    case 26: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncFLOATContext>(_localctx));
      enterOuterAlt(_localctx, 26);
      setState(1344);
      match(DARICParser::FLOAT_TOKEN);
      setState(1345);
      match(DARICParser::LPAREN);
      setState(1346);
      numExpr(0);
      setState(1347);
      match(DARICParser::RPAREN);
      break;
    }

    case 27: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSCREENWIDTHContext>(_localctx));
      enterOuterAlt(_localctx, 27);
      setState(1349);
      match(DARICParser::SCREENWIDTH);
      break;
    }

    case 28: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSCREENHEIGHTContext>(_localctx));
      enterOuterAlt(_localctx, 28);
      setState(1350);
      match(DARICParser::SCREENHEIGHT);
      break;
    }

    case 29: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncPOINTContext>(_localctx));
      enterOuterAlt(_localctx, 29);
      setState(1351);
      match(DARICParser::POINT);
      setState(1352);
      match(DARICParser::LPAREN);
      setState(1353);
      numExpr(0);
      setState(1354);
      match(DARICParser::COMMA);
      setState(1355);
      numExpr(0);
      setState(1356);
      match(DARICParser::RPAREN);
      break;
    }

    case 30: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncCOLOURContext>(_localctx));
      enterOuterAlt(_localctx, 30);
      setState(1358);
      match(DARICParser::COLOUR);
      setState(1359);
      match(DARICParser::LPAREN);
      setState(1360);
      numExpr(0);
      setState(1361);
      match(DARICParser::COMMA);
      setState(1362);
      numExpr(0);
      setState(1363);
      match(DARICParser::COMMA);
      setState(1364);
      numExpr(0);
      setState(1365);
      match(DARICParser::RPAREN);
      break;
    }

    case 31: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncLOADTYPEFACEContext>(_localctx));
      enterOuterAlt(_localctx, 31);
      setState(1367);
      match(DARICParser::LOADTYPEFACE);
      setState(1368);
      strExpr(0);
      break;
    }

    case 32: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncCREATEFONTContext>(_localctx));
      enterOuterAlt(_localctx, 32);
      setState(1369);
      match(DARICParser::CREATEFONT);
      setState(1370);
      numExpr(0);
      setState(1371);
      match(DARICParser::COMMA);
      setState(1372);
      numExpr(0);
      break;
    }

    case 33: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSHAPEContext>(_localctx));
      enterOuterAlt(_localctx, 33);
      setState(1374);
      match(DARICParser::CREATESHAPE);
      setState(1375);
      varNameType();
      setState(1376);
      match(DARICParser::COMMA);
      setState(1377);
      varNameType();
      break;
    }

    case 34: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncOBJECTContext>(_localctx));
      enterOuterAlt(_localctx, 34);
      setState(1379);
      match(DARICParser::CREATEOBJECT);
      setState(1380);
      numExpr(0);
      setState(1381);
      match(DARICParser::COMMA);
      setState(1382);
      numExpr(0);
      setState(1383);
      match(DARICParser::COMMA);
      setState(1384);
      numExpr(0);
      setState(1385);
      match(DARICParser::COMMA);
      setState(1386);
      numExpr(0);
      setState(1387);
      match(DARICParser::COMMA);
      setState(1388);
      numExpr(0);
      setState(1389);
      match(DARICParser::COMMA);
      setState(1390);
      numExpr(0);
      setState(1391);
      match(DARICParser::COMMA);
      setState(1392);
      numExpr(0);
      setState(1393);
      match(DARICParser::COMMA);
      setState(1394);
      numExpr(0);
      setState(1395);
      match(DARICParser::COMMA);
      setState(1396);
      _la = _input->LA(1);
      if (!(((((_la - 101) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 101)) & ((1ULL << (DARICParser::SOLID - 101))
        | (1ULL << (DARICParser::WIREFRAME - 101))
        | (1ULL << (DARICParser::SHADED - 101))
        | (1ULL << (DARICParser::FILLEDWIREFRAME - 101)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 35: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncBGETHContext>(_localctx));
      enterOuterAlt(_localctx, 35);
      setState(1398);
      match(DARICParser::BGETH);
      setState(1399);
      numExpr(0);
      break;
    }

    case 36: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncEOFHContext>(_localctx));
      enterOuterAlt(_localctx, 36);
      setState(1400);
      match(DARICParser::EOFH);
      setState(1401);
      numExpr(0);
      break;
    }

    case 37: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncOPENINContext>(_localctx));
      enterOuterAlt(_localctx, 37);
      setState(1402);
      match(DARICParser::OPENIN);
      setState(1403);
      match(DARICParser::LPAREN);
      setState(1404);
      strExpr(0);
      setState(1405);
      match(DARICParser::RPAREN);
      break;
    }

    case 38: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncOPENOUTContext>(_localctx));
      enterOuterAlt(_localctx, 38);
      setState(1407);
      match(DARICParser::OPENOUT);
      setState(1408);
      match(DARICParser::LPAREN);
      setState(1409);
      strExpr(0);
      setState(1410);
      match(DARICParser::RPAREN);
      break;
    }

    case 39: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncOPENUPContext>(_localctx));
      enterOuterAlt(_localctx, 39);
      setState(1412);
      match(DARICParser::OPENUP);
      setState(1413);
      match(DARICParser::LPAREN);
      setState(1414);
      strExpr(0);
      setState(1415);
      match(DARICParser::RPAREN);
      break;
    }

    case 40: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncPTRContext>(_localctx));
      enterOuterAlt(_localctx, 40);
      setState(1417);
      match(DARICParser::PTRH);
      setState(1418);
      numExpr(0);
      break;
    }

    case 41: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncASCContext>(_localctx));
      enterOuterAlt(_localctx, 41);
      setState(1419);
      match(DARICParser::ASC);
      setState(1420);
      strExpr(0);
      break;
    }

    case 42: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncLENContext>(_localctx));
      enterOuterAlt(_localctx, 42);
      setState(1421);
      match(DARICParser::LEN);
      setState(1422);
      strExpr(0);
      break;
    }

    case 43: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncINSTR2Context>(_localctx));
      enterOuterAlt(_localctx, 43);
      setState(1423);
      match(DARICParser::INSTR);
      setState(1424);
      match(DARICParser::LPAREN);
      setState(1425);
      strExpr(0);
      setState(1426);
      match(DARICParser::COMMA);
      setState(1427);
      strExpr(0);
      setState(1428);
      match(DARICParser::RPAREN);
      break;
    }

    case 44: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncINSTR3Context>(_localctx));
      enterOuterAlt(_localctx, 44);
      setState(1430);
      match(DARICParser::INSTR);
      setState(1431);
      match(DARICParser::LPAREN);
      setState(1432);
      strExpr(0);
      setState(1433);
      match(DARICParser::COMMA);
      setState(1434);
      strExpr(0);
      setState(1435);
      match(DARICParser::COMMA);
      setState(1436);
      numExpr(0);
      setState(1437);
      match(DARICParser::RPAREN);
      break;
    }

    case 45: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncVALContext>(_localctx));
      enterOuterAlt(_localctx, 45);
      setState(1439);
      match(DARICParser::VAL);
      setState(1440);
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
  size_t startState = 210;
  enterRecursionRule(_localctx, 210, DARICParser::RuleNumExpr, precedence);

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
    setState(1459);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NumExprVarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(1444);
      numVar();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NumExprNumberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1445);
      number();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NumExprNestedContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1446);
      match(DARICParser::LPAREN);
      setState(1447);
      numExpr(0);
      setState(1448);
      match(DARICParser::RPAREN);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<NumExprUnaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1450);
      match(DARICParser::MINUS);
      setState(1451);
      numExpr(11);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NumExprNOTContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1452);
      match(DARICParser::NOT);
      setState(1453);
      numExpr(10);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<NumExprFuncContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1454);
      numFunc();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<NumExprStrRelopContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(1455);
      strExpr(0);
      setState(1456);
      _la = _input->LA(1);
      if (!(((((_la - 169) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 169)) & ((1ULL << (DARICParser::EQ - 169))
        | (1ULL << (DARICParser::NE - 169))
        | (1ULL << (DARICParser::GT - 169))
        | (1ULL << (DARICParser::GE - 169))
        | (1ULL << (DARICParser::LT - 169))
        | (1ULL << (DARICParser::LE - 169)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1457);
      strExpr(0);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(1484);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1482);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 94, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<NumExprHatContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1461);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(1462);
          match(DARICParser::HAT);
          setState(1463);
          numExpr(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<NumExprMultiplyDivideContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1464);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(1465);
          _la = _input->LA(1);
          if (!(_la == DARICParser::MULTIPLY

          || _la == DARICParser::DIVIDE)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1466);
          numExpr(8);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<NumExprDIVMODContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1467);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(1468);
          _la = _input->LA(1);
          if (!(_la == DARICParser::MOD

          || _la == DARICParser::DIV)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1469);
          numExpr(7);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<NumExprAddSubtractContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1470);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(1471);
          _la = _input->LA(1);
          if (!(_la == DARICParser::PLUS

          || _la == DARICParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1472);
          numExpr(6);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<NumExprSHLSHRContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1473);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(1474);
          _la = _input->LA(1);
          if (!(_la == DARICParser::SHL

          || _la == DARICParser::SHR)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1475);
          numExpr(5);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<NumExprNumRelopContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1476);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1477);
          _la = _input->LA(1);
          if (!(((((_la - 169) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 169)) & ((1ULL << (DARICParser::EQ - 169))
            | (1ULL << (DARICParser::NE - 169))
            | (1ULL << (DARICParser::GT - 169))
            | (1ULL << (DARICParser::GE - 169))
            | (1ULL << (DARICParser::LT - 169))
            | (1ULL << (DARICParser::LE - 169)))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1478);
          numExpr(4);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<NumExprANDOREORContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(1479);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(1480);
          _la = _input->LA(1);
          if (!(((((_la - 176) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 176)) & ((1ULL << (DARICParser::AND - 176))
            | (1ULL << (DARICParser::OR - 176))
            | (1ULL << (DARICParser::EOR - 176)))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(1481);
          numExpr(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(1486);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx);
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
  enterRule(_localctx, 212, DARICParser::RuleNumColours);
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
    setState(1487);
    _la = _input->LA(1);
    if (!(((((_la - 57) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 57)) & ((1ULL << (DARICParser::RED - 57))
      | (1ULL << (DARICParser::GREEN - 57))
      | (1ULL << (DARICParser::YELLOW - 57))
      | (1ULL << (DARICParser::BLUE - 57))
      | (1ULL << (DARICParser::MAGENTA - 57))
      | (1ULL << (DARICParser::CYAN - 57))
      | (1ULL << (DARICParser::WHITE - 57))
      | (1ULL << (DARICParser::BLACK - 57)))) != 0))) {
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

//----------------- DefaultFontsContext ------------------------------------------------------------------

DARICParser::DefaultFontsContext::DefaultFontsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::DefaultFontsContext::MONO15() {
  return getToken(DARICParser::MONO15, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::MONO20() {
  return getToken(DARICParser::MONO20, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::MONO25() {
  return getToken(DARICParser::MONO25, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::MONO30() {
  return getToken(DARICParser::MONO30, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::MONO35() {
  return getToken(DARICParser::MONO35, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::MONO40() {
  return getToken(DARICParser::MONO40, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::MONO50() {
  return getToken(DARICParser::MONO50, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::MONO75() {
  return getToken(DARICParser::MONO75, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::MONO100() {
  return getToken(DARICParser::MONO100, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::PROP15() {
  return getToken(DARICParser::PROP15, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::PROP20() {
  return getToken(DARICParser::PROP20, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::PROP25() {
  return getToken(DARICParser::PROP25, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::PROP30() {
  return getToken(DARICParser::PROP30, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::PROP35() {
  return getToken(DARICParser::PROP35, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::PROP40() {
  return getToken(DARICParser::PROP40, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::PROP50() {
  return getToken(DARICParser::PROP50, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::PROP75() {
  return getToken(DARICParser::PROP75, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::PROP100() {
  return getToken(DARICParser::PROP100, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::SERIF15() {
  return getToken(DARICParser::SERIF15, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::SERIF20() {
  return getToken(DARICParser::SERIF20, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::SERIF25() {
  return getToken(DARICParser::SERIF25, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::SERIF30() {
  return getToken(DARICParser::SERIF30, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::SERIF35() {
  return getToken(DARICParser::SERIF35, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::SERIF40() {
  return getToken(DARICParser::SERIF40, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::SERIF50() {
  return getToken(DARICParser::SERIF50, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::SERIF75() {
  return getToken(DARICParser::SERIF75, 0);
}

tree::TerminalNode* DARICParser::DefaultFontsContext::SERIF100() {
  return getToken(DARICParser::SERIF100, 0);
}


size_t DARICParser::DefaultFontsContext::getRuleIndex() const {
  return DARICParser::RuleDefaultFonts;
}


antlrcpp::Any DARICParser::DefaultFontsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitDefaultFonts(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::DefaultFontsContext* DARICParser::defaultFonts() {
  DefaultFontsContext *_localctx = _tracker.createInstance<DefaultFontsContext>(_ctx, getState());
  enterRule(_localctx, 214, DARICParser::RuleDefaultFonts);
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
    setState(1489);
    _la = _input->LA(1);
    if (!(((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (DARICParser::MONO15 - 65))
      | (1ULL << (DARICParser::MONO20 - 65))
      | (1ULL << (DARICParser::MONO25 - 65))
      | (1ULL << (DARICParser::MONO30 - 65))
      | (1ULL << (DARICParser::MONO35 - 65))
      | (1ULL << (DARICParser::MONO40 - 65))
      | (1ULL << (DARICParser::MONO50 - 65))
      | (1ULL << (DARICParser::MONO75 - 65))
      | (1ULL << (DARICParser::MONO100 - 65))
      | (1ULL << (DARICParser::PROP15 - 65))
      | (1ULL << (DARICParser::PROP20 - 65))
      | (1ULL << (DARICParser::PROP25 - 65))
      | (1ULL << (DARICParser::PROP30 - 65))
      | (1ULL << (DARICParser::PROP35 - 65))
      | (1ULL << (DARICParser::PROP40 - 65))
      | (1ULL << (DARICParser::PROP50 - 65))
      | (1ULL << (DARICParser::PROP75 - 65))
      | (1ULL << (DARICParser::PROP100 - 65))
      | (1ULL << (DARICParser::SERIF15 - 65))
      | (1ULL << (DARICParser::SERIF20 - 65))
      | (1ULL << (DARICParser::SERIF25 - 65))
      | (1ULL << (DARICParser::SERIF30 - 65))
      | (1ULL << (DARICParser::SERIF35 - 65))
      | (1ULL << (DARICParser::SERIF40 - 65))
      | (1ULL << (DARICParser::SERIF50 - 65))
      | (1ULL << (DARICParser::SERIF75 - 65))
      | (1ULL << (DARICParser::SERIF100 - 65)))) != 0))) {
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
    case 103: return strExprSempred(dynamic_cast<StrExprContext *>(context), predicateIndex);
    case 105: return numExprSempred(dynamic_cast<NumExprContext *>(context), predicateIndex);

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
  "stmtIFMultiline", "stmtINSTALL", "stmtLET", "stmtOSCLI", "stmtCallPROC", 
  "stmtREAD", "stmtRESTORE", "stmtSWAP", "stmtTRACEON", "stmtTRACEOFF", 
  "stmtTYPE", "stmtREPEAT", "stmtWHILE", "keyMouseStmt", "stmtINPUT", "stmtPRINT", 
  "stmtMOUSE", "stmtINKEY", "stmtINKEYS", "stmtGET", "stmtGETS", "stmtOperatorEqual", 
  "ioStmt", "stmtBPUTH", "stmtBGETH", "stmtPTRH", "stmtCLOSEH", "stmtLISTFILES", 
  "graphicsStmt", "stmtCLS", "stmtCOLOUR", "stmtCOLOURBG", "stmtGRAPHICS", 
  "stmtFLIP", "stmtCIRCLE", "stmtLINE", "stmtRECTANGLE", "stmtTRIANGLE", 
  "stmtPLOT", "stmtCLIPON", "stmtCLIPOFF", "stmtTEXT", "stmtTEXTRIGHT", 
  "stmtTEXTCENTRE", "stmtSHOWFPS", "stmtRENDERFRAME", "stmtCREATEVERTEX", 
  "stmtCREATETRIANGLE", "stmtTRANSLATE", "stmtROTATE", "stmtSCALE", "stmtDELETEOBJECT", 
  "when", "fnName", "literal", "var", "typeVar", "numVar", "strVar", "justVar", 
  "justNumberVar", "varName", "varNameInteger", "varNameString", "varNameType", 
  "varDecl", "varDeclWithDimension", "varList", "functionVarList", "functionParList", 
  "exprList", "printListItem", "printListTick", "printListSeparator", "printList", 
  "expr", "number", "numberInteger", "numberHex", "numberBinary", "numberFloat", 
  "strFunc", "string", "strExpr", "numFunc", "numExpr", "numColours", "defaultFonts"
};

std::vector<std::string> DARICParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "'='", "'<>'", "'>'", "'>='", "'<'", "'<='", 
  "", "", "", "", "", "", "'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", "'>>'", 
  "'+='", "'-='", "'*='", "'/='", "'<<='", "'>>='", "", "'''", "'~'", "'#'", 
  "':'", "','", "'$'", "'('", "'%'", "')'", "';'", "'_'"
};

std::vector<std::string> DARICParser::_symbolicNames = {
  "", "BREAKPOINT", "CASE", "CHAIN", "DATA", "DEF", "DIM", "ELSE", "END", 
  "ENDCASE", "ENDIF", "ENDFN", "ENDPROC", "ENDWHILE", "FALSE", "FOR", "FLOAT_TOKEN", 
  "FN", "IF", "IN", "INSTALL", "INT", "INPUT", "GLOBAL", "LOCAL", "LET", 
  "NEXT", "OF", "OFF", "ON", "OSCLI", "OTHERWISE", "PRINT", "PROC", "READ", 
  "REM", "REPEAT", "RESTORE", "RETURN", "SPC", "STEP", "SWAP", "THEN", "TO", 
  "TRACE", "TRACEON", "TRACEOFF", "TRUE", "TYPE", "UNTIL", "WHEN", "WHILE", 
  "MOUSE", "INKEY", "INKEYS", "GET", "GETS", "RED", "GREEN", "YELLOW", "BLUE", 
  "MAGENTA", "CYAN", "WHITE", "BLACK", "MONO15", "MONO20", "MONO25", "MONO30", 
  "MONO35", "MONO40", "MONO50", "MONO75", "MONO100", "PROP15", "PROP20", 
  "PROP25", "PROP30", "PROP35", "PROP40", "PROP50", "PROP75", "PROP100", 
  "SERIF15", "SERIF20", "SERIF25", "SERIF30", "SERIF35", "SERIF40", "SERIF50", 
  "SERIF75", "SERIF100", "RENDERFRAME", "CREATEVERTEX", "CREATETRIANGLE", 
  "TRANSLATE", "ROTATE", "SCALE", "DELETEOBJECT", "CREATESHAPE", "CREATEOBJECT", 
  "SOLID", "WIREFRAME", "SHADED", "FILLEDWIREFRAME", "BGETH", "BPUTH", "CLOSEH", 
  "EOFH", "GETSH", "LISTFILES", "OPENIN", "OPENOUT", "OPENUP", "PTRH", "BANKED", 
  "CIRCLE", "CLS", "CLIPON", "CLIPOFF", "COLOUR", "COLOURBG", "CREATEFONT", 
  "FILL", "FLIP", "SHOWFPS", "GRAPHICS", "LINE", "LOADTYPEFACE", "RECTANGLE", 
  "PLOT", "POINT", "SCREENWIDTH", "SCREENHEIGHT", "TEXT", "TEXTRIGHT", "TEXTCENTRE", 
  "TEXTCENTER", "TRIANGLE", "TIME", "PI", "SQR", "LN", "LOG", "EXP", "ATN", 
  "TAN", "COS", "SIN", "ABS", "ACS", "ASN", "DEG", "RAD", "SGN", "ASC", 
  "LEN", "INSTR", "VAL", "TIMES", "STRS", "STRINGS", "CHRS", "LEFTS", "MIDS", 
  "RIGHTS", "RND", "RND0", "RND1", "EQ", "NE", "GT", "GE", "LT", "LE", "NOT", 
  "AND", "OR", "EOR", "MOD", "DIV", "HAT", "PLUS", "MINUS", "MULTIPLY", 
  "DIVIDE", "SHL", "SHR", "PLUS_E", "MINUS_E", "MULTIPLY_E", "DIVIDE_E", 
  "SHL_E", "SHR_E", "NEWLINE", "TICK", "TILDE", "HASH", "COLON", "COMMA", 
  "DOLLAR", "LPAREN", "PERCENT", "RPAREN", "SEMICOLON", "UNDERSCORE", "COMMENT", 
  "STRINGLITERAL", "PROC_NAME", "FN_INTEGER", "FN_FLOAT", "FN_STRING", "VARIABLE_FLOAT", 
  "VARIABLE_INTEGER", "VARIABLE_STRING", "VARIABLE_TYPE", "HEXNUMBER", "BINARYNUMBER", 
  "NUMBER", "FLOAT", "WS"
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
    0x3, 0xde, 0x5d6, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 
    0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 
    0x6d, 0x9, 0x6d, 0x3, 0x2, 0x7, 0x2, 0xdc, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0xdf, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0xe5, 0xa, 0x3, 0x3, 0x3, 0x5, 0x3, 0xe8, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x5, 0x3, 0xec, 0xa, 0x3, 0x3, 0x3, 0x6, 0x3, 0xef, 0xa, 0x3, 0xd, 0x3, 
    0xe, 0x3, 0xf0, 0x3, 0x3, 0x5, 0x3, 0xf4, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x5, 0x3, 0xf8, 0xa, 0x3, 0x3, 0x4, 0x7, 0x4, 0xfb, 0xa, 0x4, 0xc, 0x4, 
    0xe, 0x4, 0xfe, 0xb, 0x4, 0x3, 0x5, 0x7, 0x5, 0x101, 0xa, 0x5, 0xc, 
    0x5, 0xe, 0x5, 0x104, 0xb, 0x5, 0x3, 0x5, 0x7, 0x5, 0x107, 0xa, 0x5, 
    0xc, 0x5, 0xe, 0x5, 0x10a, 0xb, 0x5, 0x5, 0x5, 0x10c, 0xa, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x116, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0x132, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x6, 0xa, 0x13b, 0xa, 0xa, 0xd, 0xa, 
    0xe, 0xa, 0x13c, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x141, 0xa, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x7, 0xc, 0x14c, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x14f, 
    0xb, 0xc, 0x3, 0xd, 0x5, 0xd, 0x152, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x7, 0xd, 0x158, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x15b, 
    0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x161, 0xa, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x167, 0xa, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x16c, 0xa, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0x174, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 
    0x179, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 
    0x17f, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x188, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x5, 0x12, 0x18c, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x5, 0x13, 0x192, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x19b, 0xa, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x1a2, 0xa, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x5, 0x15, 0x1ab, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x6, 0x16, 0x1b2, 0xa, 0x16, 0xd, 0x16, 0xe, 0x16, 
    0x1b3, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x6, 0x16, 0x1b9, 0xa, 0x16, 
    0xd, 0x16, 0xe, 0x16, 0x1ba, 0x5, 0x16, 0x1bd, 0xa, 0x16, 0x3, 0x16, 
    0x5, 0x16, 0x1c0, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x18, 0x5, 0x18, 0x1c8, 0xa, 0x18, 0x3, 0x18, 0x5, 0x18, 
    0x1cb, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x1d5, 0xa, 0x18, 0xc, 0x18, 
    0xe, 0x18, 0x1d8, 0xb, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x1e0, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x1e8, 0xa, 0x1b, 
    0xc, 0x1b, 0xe, 0x1b, 0x1eb, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x7, 0x20, 0x1fe, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x201, 
    0xb, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
    0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
    0x23, 0x5, 0x23, 0x216, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x5, 0x24, 0x21c, 0xa, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 
    0x3, 0x25, 0x5, 0x25, 0x222, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 
    0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 
    0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x251, 0xa, 0x2b, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x258, 0xa, 0x2c, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 
    0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x5, 0x31, 0x26b, 0xa, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 
    0x32, 0x28d, 0xa, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 
    0x34, 0x5, 0x34, 0x29a, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 
    0x35, 0x2a5, 0xa, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 
    0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x2b5, 0xa, 0x36, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 
    0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x2c8, 0xa, 0x38, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
    0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
    0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x2e6, 0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 
    0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 
    0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 
    0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 
    0x3b, 0x317, 0xa, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
    0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 
    0x3f, 0x3, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
    0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 
    0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 
    0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 
    0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 
    0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 
    0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x7, 0x4a, 0x382, 0xa, 0x4a, 
    0xc, 0x4a, 0xe, 0x4a, 0x385, 0xb, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 
    0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x38e, 0xa, 0x4c, 
    0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x393, 0xa, 0x4d, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 
    0x4f, 0x39c, 0xa, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x3a5, 0xa, 0x4f, 0x3, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
    0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x3b8, 0xa, 0x4f, 0x3, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x3be, 0xa, 0x4f, 0x3, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
    0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x3c9, 0xa, 0x4f, 0x3, 0x50, 0x3, 0x50, 
    0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x3d0, 0xa, 0x50, 0x3, 0x50, 
    0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 
    0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
    0x3, 0x50, 0x5, 0x50, 0x3e1, 0xa, 0x50, 0x3, 0x50, 0x5, 0x50, 0x3e4, 
    0xa, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x3e9, 0xa, 0x51, 
    0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x3ed, 0xa, 0x52, 0x3, 0x53, 0x3, 0x53, 
    0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 0x3, 0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 
    0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 
    0x3fd, 0xa, 0x57, 0x3, 0x57, 0x3, 0x57, 0x7, 0x57, 0x401, 0xa, 0x57, 
    0xc, 0x57, 0xe, 0x57, 0x404, 0xb, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 
    0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 
    0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 
    0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 
    0x57, 0x3, 0x57, 0x5, 0x57, 0x41e, 0xa, 0x57, 0x3, 0x58, 0x3, 0x58, 
    0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x7, 0x58, 0x425, 0xa, 0x58, 0xc, 0x58, 
    0xe, 0x58, 0x428, 0xb, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 
    0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x433, 
    0xa, 0x58, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x7, 0x59, 0x438, 0xa, 0x59, 
    0xc, 0x59, 0xe, 0x59, 0x43b, 0xb, 0x59, 0x3, 0x5a, 0x5, 0x5a, 0x43e, 
    0xa, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x443, 0xa, 0x5a, 
    0x3, 0x5a, 0x7, 0x5a, 0x446, 0xa, 0x5a, 0xc, 0x5a, 0xe, 0x5a, 0x449, 
    0xb, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x7, 0x5b, 0x44e, 0xa, 0x5b, 
    0xc, 0x5b, 0xe, 0x5b, 0x451, 0xb, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 
    0x7, 0x5c, 0x456, 0xa, 0x5c, 0xc, 0x5c, 0xe, 0x5c, 0x459, 0xb, 0x5c, 
    0x3, 0x5d, 0x5, 0x5d, 0x45c, 0xa, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 
    0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x5, 0x5d, 0x466, 
    0xa, 0x5d, 0x3, 0x5e, 0x6, 0x5e, 0x469, 0xa, 0x5e, 0xd, 0x5e, 0xe, 0x5e, 
    0x46a, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x5, 0x5f, 0x470, 0xa, 0x5f, 
    0x3, 0x60, 0x5, 0x60, 0x473, 0xa, 0x60, 0x3, 0x60, 0x5, 0x60, 0x476, 
    0xa, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x7, 0x60, 0x47c, 
    0xa, 0x60, 0xc, 0x60, 0xe, 0x60, 0x47f, 0xb, 0x60, 0x3, 0x60, 0x5, 0x60, 
    0x482, 0xa, 0x60, 0x3, 0x61, 0x3, 0x61, 0x5, 0x61, 0x486, 0xa, 0x61, 
    0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x5, 
    0x62, 0x48e, 0xa, 0x62, 0x3, 0x63, 0x5, 0x63, 0x491, 0xa, 0x63, 0x3, 
    0x63, 0x3, 0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 0x65, 0x3, 0x65, 0x3, 0x66, 
    0x5, 0x66, 0x49a, 0xa, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x67, 0x3, 0x67, 
    0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 
    0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 
    0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 
    0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 
    0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 
    0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 
    0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 
    0x67, 0x3, 0x67, 0x3, 0x67, 0x5, 0x67, 0x4d0, 0xa, 0x67, 0x3, 0x68, 
    0x3, 0x68, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 
    0x69, 0x3, 0x69, 0x3, 0x69, 0x5, 0x69, 0x4dc, 0xa, 0x69, 0x3, 0x69, 
    0x3, 0x69, 0x3, 0x69, 0x7, 0x69, 0x4e1, 0xa, 0x69, 0xc, 0x69, 0xe, 0x69, 
    0x4e4, 0xb, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
    0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
    0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
    0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
    0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
    0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
    0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
    0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
    0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
    0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
    0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
    0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
    0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
    0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
    0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x5, 0x6a, 0x5a4, 0xa, 0x6a, 0x3, 0x6b, 
    0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 
    0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 
    0x3, 0x6b, 0x3, 0x6b, 0x5, 0x6b, 0x5b6, 0xa, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 
    0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 
    0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 
    0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x7, 
    0x6b, 0x5cd, 0xa, 0x6b, 0xc, 0x6b, 0xe, 0x6b, 0x5d0, 0xb, 0x6b, 0x3, 
    0x6c, 0x3, 0x6c, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x2, 0x4, 0xd0, 0xd4, 
    0x6e, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 
    0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 
    0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 
    0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 
    0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 
    0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 
    0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 
    0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 
    0x2, 0xf, 0x4, 0x2, 0x25, 0x25, 0xd0, 0xd0, 0x4, 0x2, 0x19, 0x19, 0x1b, 
    0x1b, 0x3, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0xd3, 0xd5, 0x3, 0x2, 0xb8, 0xb9, 
    0x3, 0x2, 0x67, 0x6a, 0x3, 0x2, 0xab, 0xb0, 0x3, 0x2, 0xba, 0xbb, 0x3, 
    0x2, 0xb5, 0xb6, 0x3, 0x2, 0xbc, 0xbd, 0x3, 0x2, 0xb2, 0xb4, 0x3, 0x2, 
    0x3b, 0x42, 0x3, 0x2, 0x43, 0x5d, 0x2, 0x662, 0x2, 0xdd, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x6, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x10b, 0x3, 0x2, 0x2, 0x2, 0xa, 0x10d, 0x3, 0x2, 0x2, 0x2, 0xc, 0x115, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x131, 0x3, 0x2, 0x2, 0x2, 0x10, 0x133, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x135, 0x3, 0x2, 0x2, 0x2, 0x14, 0x144, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x147, 0x3, 0x2, 0x2, 0x2, 0x18, 0x151, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x15e, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x162, 0x3, 0x2, 0x2, 0x2, 0x20, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x17c, 0x3, 0x2, 0x2, 0x2, 0x24, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x26, 0x19e, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x1ac, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1ca, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x32, 0x1dc, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x36, 0x1ec, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x1f5, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x40, 0x204, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x209, 0x3, 0x2, 0x2, 0x2, 0x44, 0x215, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x217, 0x3, 0x2, 0x2, 0x2, 0x48, 0x21f, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x223, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x22a, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x50, 0x234, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x236, 0x3, 0x2, 0x2, 0x2, 0x54, 0x250, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x257, 0x3, 0x2, 0x2, 0x2, 0x58, 0x259, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x25e, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x261, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x266, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x62, 0x28c, 0x3, 0x2, 
    0x2, 0x2, 0x64, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x66, 0x299, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x2b4, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x70, 
    0x2c9, 0x3, 0x2, 0x2, 0x2, 0x72, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x74, 0x316, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x318, 0x3, 0x2, 0x2, 0x2, 0x78, 0x31d, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x326, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x328, 0x3, 0x2, 
    0x2, 0x2, 0x7e, 0x331, 0x3, 0x2, 0x2, 0x2, 0x80, 0x33a, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x343, 0x3, 0x2, 0x2, 0x2, 0x84, 0x345, 0x3, 0x2, 0x2, 0x2, 
    0x86, 0x347, 0x3, 0x2, 0x2, 0x2, 0x88, 0x355, 0x3, 0x2, 0x2, 0x2, 0x8a, 
    0x363, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x36c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x375, 
    0x3, 0x2, 0x2, 0x2, 0x90, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x92, 0x37d, 0x3, 
    0x2, 0x2, 0x2, 0x94, 0x389, 0x3, 0x2, 0x2, 0x2, 0x96, 0x38d, 0x3, 0x2, 
    0x2, 0x2, 0x98, 0x392, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x394, 0x3, 0x2, 0x2, 
    0x2, 0x9c, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x3e3, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0x3e8, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0xa4, 
    0x3ee, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x3f0, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x3f2, 
    0x3, 0x2, 0x2, 0x2, 0xaa, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0xac, 0x41d, 0x3, 
    0x2, 0x2, 0x2, 0xae, 0x432, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x434, 0x3, 0x2, 
    0x2, 0x2, 0xb2, 0x43d, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x44a, 0x3, 0x2, 0x2, 
    0x2, 0xb6, 0x452, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x465, 0x3, 0x2, 0x2, 0x2, 
    0xba, 0x468, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x46f, 0x3, 0x2, 0x2, 0x2, 0xbe, 
    0x472, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x485, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x48d, 
    0x3, 0x2, 0x2, 0x2, 0xc4, 0x490, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x494, 0x3, 
    0x2, 0x2, 0x2, 0xc8, 0x496, 0x3, 0x2, 0x2, 0x2, 0xca, 0x499, 0x3, 0x2, 
    0x2, 0x2, 0xcc, 0x4cf, 0x3, 0x2, 0x2, 0x2, 0xce, 0x4d1, 0x3, 0x2, 0x2, 
    0x2, 0xd0, 0x4db, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x5a3, 0x3, 0x2, 0x2, 0x2, 
    0xd4, 0x5b5, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x5d1, 0x3, 0x2, 0x2, 0x2, 0xd8, 
    0x5d3, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdc, 0x5, 0x4, 0x3, 0x2, 0xdb, 0xda, 
    0x3, 0x2, 0x2, 0x2, 0xdc, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdb, 0x3, 
    0x2, 0x2, 0x2, 0xdd, 0xde, 0x3, 0x2, 0x2, 0x2, 0xde, 0xe0, 0x3, 0x2, 
    0x2, 0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x7, 0x2, 0x2, 
    0x3, 0xe1, 0x3, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xf8, 0x7, 0xc4, 0x2, 0x2, 
    0xe3, 0xe5, 0x5, 0xa, 0x6, 0x2, 0xe4, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe4, 
    0xe5, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe8, 
    0x9, 0x2, 0x2, 0x2, 0xe7, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x3, 
    0x2, 0x2, 0x2, 0xe8, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xf8, 0x7, 0xc4, 
    0x2, 0x2, 0xea, 0xec, 0x5, 0xa, 0x6, 0x2, 0xeb, 0xea, 0x3, 0x2, 0x2, 
    0x2, 0xeb, 0xec, 0x3, 0x2, 0x2, 0x2, 0xec, 0xee, 0x3, 0x2, 0x2, 0x2, 
    0xed, 0xef, 0x5, 0xc, 0x7, 0x2, 0xee, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 
    0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 
    0x3, 0x2, 0x2, 0x2, 0xf1, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf4, 0x9, 
    0x2, 0x2, 0x2, 0xf3, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x3, 0x2, 
    0x2, 0x2, 0xf4, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0xc4, 0x2, 
    0x2, 0xf6, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xe2, 0x3, 0x2, 0x2, 0x2, 
    0xf7, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xf8, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfb, 0x5, 0xc, 0x7, 0x2, 0xfa, 0xf9, 
    0x3, 0x2, 0x2, 0x2, 0xfb, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfa, 0x3, 
    0x2, 0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfd, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0xfe, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xff, 0x101, 0x5, 0xc, 0x7, 
    0x2, 0x100, 0xff, 0x3, 0x2, 0x2, 0x2, 0x101, 0x104, 0x3, 0x2, 0x2, 0x2, 
    0x102, 0x100, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 0x2, 0x2, 0x2, 
    0x103, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 
    0x105, 0x107, 0x5, 0x4, 0x3, 0x2, 0x106, 0x105, 0x3, 0x2, 0x2, 0x2, 
    0x107, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x108, 0x106, 0x3, 0x2, 0x2, 0x2, 
    0x108, 0x109, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10c, 0x3, 0x2, 0x2, 0x2, 
    0x10a, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x102, 0x3, 0x2, 0x2, 0x2, 
    0x10b, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x9, 0x3, 0x2, 0x2, 0x2, 0x10d, 
    0x10e, 0x7, 0xdc, 0x2, 0x2, 0x10e, 0xb, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x116, 
    0x7, 0xc8, 0x2, 0x2, 0x110, 0x116, 0x5, 0xe, 0x8, 0x2, 0x111, 0x116, 
    0x5, 0x44, 0x23, 0x2, 0x112, 0x116, 0x5, 0x54, 0x2b, 0x2, 0x113, 0x116, 
    0x5, 0x56, 0x2c, 0x2, 0x114, 0x116, 0x5, 0x62, 0x32, 0x2, 0x115, 0x10f, 
    0x3, 0x2, 0x2, 0x2, 0x115, 0x110, 0x3, 0x2, 0x2, 0x2, 0x115, 0x111, 
    0x3, 0x2, 0x2, 0x2, 0x115, 0x112, 0x3, 0x2, 0x2, 0x2, 0x115, 0x113, 
    0x3, 0x2, 0x2, 0x2, 0x115, 0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x117, 0x132, 0x5, 0x10, 0x9, 0x2, 0x118, 0x132, 0x5, 
    0x12, 0xa, 0x2, 0x119, 0x132, 0x5, 0x14, 0xb, 0x2, 0x11a, 0x132, 0x5, 
    0x16, 0xc, 0x2, 0x11b, 0x132, 0x5, 0x18, 0xd, 0x2, 0x11c, 0x132, 0x5, 
    0x1a, 0xe, 0x2, 0x11d, 0x132, 0x5, 0x1c, 0xf, 0x2, 0x11e, 0x132, 0x5, 
    0x1e, 0x10, 0x2, 0x11f, 0x132, 0x5, 0x20, 0x11, 0x2, 0x120, 0x132, 0x5, 
    0x22, 0x12, 0x2, 0x121, 0x132, 0x5, 0x24, 0x13, 0x2, 0x122, 0x132, 0x5, 
    0x26, 0x14, 0x2, 0x123, 0x132, 0x5, 0x28, 0x15, 0x2, 0x124, 0x132, 0x5, 
    0x2a, 0x16, 0x2, 0x125, 0x132, 0x5, 0x2c, 0x17, 0x2, 0x126, 0x132, 0x5, 
    0x2e, 0x18, 0x2, 0x127, 0x132, 0x5, 0x30, 0x19, 0x2, 0x128, 0x132, 0x5, 
    0x32, 0x1a, 0x2, 0x129, 0x132, 0x5, 0x34, 0x1b, 0x2, 0x12a, 0x132, 0x5, 
    0x36, 0x1c, 0x2, 0x12b, 0x132, 0x5, 0x38, 0x1d, 0x2, 0x12c, 0x132, 0x5, 
    0x3a, 0x1e, 0x2, 0x12d, 0x132, 0x5, 0x3c, 0x1f, 0x2, 0x12e, 0x132, 0x5, 
    0x3e, 0x20, 0x2, 0x12f, 0x132, 0x5, 0x40, 0x21, 0x2, 0x130, 0x132, 0x5, 
    0x42, 0x22, 0x2, 0x131, 0x117, 0x3, 0x2, 0x2, 0x2, 0x131, 0x118, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x119, 0x3, 0x2, 0x2, 0x2, 0x131, 0x11a, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x131, 0x11c, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x131, 0x11e, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x131, 0x120, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x121, 0x3, 0x2, 0x2, 0x2, 0x131, 0x122, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x123, 0x3, 0x2, 0x2, 0x2, 0x131, 0x124, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x125, 0x3, 0x2, 0x2, 0x2, 0x131, 0x126, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x127, 0x3, 0x2, 0x2, 0x2, 0x131, 0x128, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x129, 0x3, 0x2, 0x2, 0x2, 0x131, 0x12a, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x131, 0x12c, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x131, 0x12e, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x131, 0x130, 0x3, 
    0x2, 0x2, 0x2, 0x132, 0xf, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x7, 0x3, 
    0x2, 0x2, 0x134, 0x11, 0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 0x7, 0x4, 0x2, 
    0x2, 0x136, 0x137, 0x5, 0xc0, 0x61, 0x2, 0x137, 0x138, 0x7, 0x1d, 0x2, 
    0x2, 0x138, 0x13a, 0x7, 0xc4, 0x2, 0x2, 0x139, 0x13b, 0x5, 0x92, 0x4a, 
    0x2, 0x13a, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x3, 0x2, 0x2, 
    0x2, 0x13c, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x3, 0x2, 0x2, 
    0x2, 0x13d, 0x140, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x7, 0x21, 0x2, 
    0x2, 0x13f, 0x141, 0x5, 0x8, 0x5, 0x2, 0x140, 0x13e, 0x3, 0x2, 0x2, 
    0x2, 0x140, 0x141, 0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 0x3, 0x2, 0x2, 
    0x2, 0x142, 0x143, 0x7, 0xb, 0x2, 0x2, 0x143, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x144, 0x145, 0x7, 0x5, 0x2, 0x2, 0x145, 0x146, 0x5, 0xd0, 0x69, 0x2, 
    0x146, 0x15, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x7, 0x6, 0x2, 0x2, 0x148, 
    0x14d, 0x5, 0x96, 0x4c, 0x2, 0x149, 0x14a, 0x7, 0xc9, 0x2, 0x2, 0x14a, 
    0x14c, 0x5, 0x96, 0x4c, 0x2, 0x14b, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14c, 
    0x14f, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14d, 
    0x14e, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x17, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x14d, 
    0x3, 0x2, 0x2, 0x2, 0x150, 0x152, 0x7, 0x1a, 0x2, 0x2, 0x151, 0x150, 
    0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 
    0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 0x7, 0x8, 0x2, 0x2, 0x154, 0x159, 
    0x5, 0xae, 0x58, 0x2, 0x155, 0x156, 0x7, 0xc9, 0x2, 0x2, 0x156, 0x158, 
    0x5, 0xae, 0x58, 0x2, 0x157, 0x155, 0x3, 0x2, 0x2, 0x2, 0x158, 0x15b, 
    0x3, 0x2, 0x2, 0x2, 0x159, 0x157, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 
    0x3, 0x2, 0x2, 0x2, 0x15a, 0x19, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x159, 0x3, 
    0x2, 0x2, 0x2, 0x15c, 0x15d, 0x7, 0xa, 0x2, 0x2, 0x15d, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0x15e, 0x160, 0x7, 0x28, 0x2, 0x2, 0x15f, 0x161, 0x5, 0xc0, 
    0x61, 0x2, 0x160, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x3, 0x2, 
    0x2, 0x2, 0x161, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x162, 0x163, 0x7, 0x7, 0x2, 
    0x2, 0x163, 0x164, 0x5, 0x94, 0x4b, 0x2, 0x164, 0x166, 0x7, 0xcb, 0x2, 
    0x2, 0x165, 0x167, 0x5, 0xb2, 0x5a, 0x2, 0x166, 0x165, 0x3, 0x2, 0x2, 
    0x2, 0x166, 0x167, 0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 0x3, 0x2, 0x2, 
    0x2, 0x168, 0x169, 0x7, 0xcd, 0x2, 0x2, 0x169, 0x16b, 0x5, 0x8, 0x5, 
    0x2, 0x16a, 0x16c, 0x5, 0xa, 0x6, 0x2, 0x16b, 0x16a, 0x3, 0x2, 0x2, 
    0x2, 0x16b, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16d, 0x3, 0x2, 0x2, 
    0x2, 0x16d, 0x16e, 0x7, 0xd, 0x2, 0x2, 0x16e, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x16f, 0x170, 0x7, 0x7, 0x2, 0x2, 0x170, 0x171, 0x7, 0xd2, 0x2, 0x2, 
    0x171, 0x173, 0x7, 0xcb, 0x2, 0x2, 0x172, 0x174, 0x5, 0xb2, 0x5a, 0x2, 
    0x173, 0x172, 0x3, 0x2, 0x2, 0x2, 0x173, 0x174, 0x3, 0x2, 0x2, 0x2, 
    0x174, 0x175, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x7, 0xcd, 0x2, 0x2, 
    0x176, 0x178, 0x5, 0x8, 0x5, 0x2, 0x177, 0x179, 0x5, 0xa, 0x6, 0x2, 
    0x178, 0x177, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x3, 0x2, 0x2, 0x2, 
    0x179, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17b, 0x7, 0xe, 0x2, 0x2, 
    0x17b, 0x21, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17e, 0x7, 0x11, 0x2, 0x2, 
    0x17d, 0x17f, 0x7, 0x1a, 0x2, 0x2, 0x17e, 0x17d, 0x3, 0x2, 0x2, 0x2, 
    0x17e, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x3, 0x2, 0x2, 0x2, 
    0x180, 0x181, 0x5, 0xa2, 0x52, 0x2, 0x181, 0x182, 0x7, 0xab, 0x2, 0x2, 
    0x182, 0x183, 0x5, 0xd4, 0x6b, 0x2, 0x183, 0x184, 0x7, 0x2d, 0x2, 0x2, 
    0x184, 0x187, 0x5, 0xd4, 0x6b, 0x2, 0x185, 0x186, 0x7, 0x2a, 0x2, 0x2, 
    0x186, 0x188, 0x5, 0xd4, 0x6b, 0x2, 0x187, 0x185, 0x3, 0x2, 0x2, 0x2, 
    0x187, 0x188, 0x3, 0x2, 0x2, 0x2, 0x188, 0x189, 0x3, 0x2, 0x2, 0x2, 
    0x189, 0x18b, 0x5, 0x8, 0x5, 0x2, 0x18a, 0x18c, 0x5, 0xa, 0x6, 0x2, 
    0x18b, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18c, 0x3, 0x2, 0x2, 0x2, 
    0x18c, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 0x7, 0x1c, 0x2, 0x2, 
    0x18e, 0x23, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x191, 0x7, 0x11, 0x2, 0x2, 
    0x190, 0x192, 0x7, 0x1a, 0x2, 0x2, 0x191, 0x190, 0x3, 0x2, 0x2, 0x2, 
    0x191, 0x192, 0x3, 0x2, 0x2, 0x2, 0x192, 0x193, 0x3, 0x2, 0x2, 0x2, 
    0x193, 0x194, 0x5, 0xa0, 0x51, 0x2, 0x194, 0x195, 0x7, 0x15, 0x2, 0x2, 
    0x195, 0x196, 0x5, 0xa0, 0x51, 0x2, 0x196, 0x197, 0x7, 0xcb, 0x2, 0x2, 
    0x197, 0x198, 0x7, 0xcd, 0x2, 0x2, 0x198, 0x19a, 0x5, 0x8, 0x5, 0x2, 
    0x199, 0x19b, 0x5, 0xa, 0x6, 0x2, 0x19a, 0x199, 0x3, 0x2, 0x2, 0x2, 
    0x19a, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19c, 0x3, 0x2, 0x2, 0x2, 
    0x19c, 0x19d, 0x7, 0x1c, 0x2, 0x2, 0x19d, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0x19e, 0x19f, 0x5, 0x94, 0x4b, 0x2, 0x19f, 0x1a1, 0x7, 0xcb, 0x2, 0x2, 
    0x1a0, 0x1a2, 0x5, 0xb4, 0x5b, 0x2, 0x1a1, 0x1a0, 0x3, 0x2, 0x2, 0x2, 
    0x1a1, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x3, 0x2, 0x2, 0x2, 
    0x1a3, 0x1a4, 0x7, 0xcd, 0x2, 0x2, 0x1a4, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0x1a5, 0x1a6, 0x7, 0x14, 0x2, 0x2, 0x1a6, 0x1a7, 0x5, 0xc0, 0x61, 0x2, 
    0x1a7, 0x1aa, 0x5, 0x6, 0x4, 0x2, 0x1a8, 0x1a9, 0x7, 0x9, 0x2, 0x2, 
    0x1a9, 0x1ab, 0x5, 0x6, 0x4, 0x2, 0x1aa, 0x1a8, 0x3, 0x2, 0x2, 0x2, 
    0x1aa, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x29, 0x3, 0x2, 0x2, 0x2, 0x1ac, 
    0x1ad, 0x7, 0x14, 0x2, 0x2, 0x1ad, 0x1ae, 0x5, 0xc0, 0x61, 0x2, 0x1ae, 
    0x1af, 0x7, 0x2c, 0x2, 0x2, 0x1af, 0x1b1, 0x7, 0xc4, 0x2, 0x2, 0x1b0, 
    0x1b2, 0x5, 0x4, 0x3, 0x2, 0x1b1, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b2, 
    0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b3, 
    0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1b5, 
    0x1b6, 0x7, 0x9, 0x2, 0x2, 0x1b6, 0x1b8, 0x7, 0xc4, 0x2, 0x2, 0x1b7, 
    0x1b9, 0x5, 0x4, 0x3, 0x2, 0x1b8, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b9, 
    0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1ba, 
    0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bc, 
    0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bd, 
    0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1c0, 0x5, 0xa, 0x6, 0x2, 0x1bf, 
    0x1be, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c0, 
    0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c2, 0x7, 0xc, 0x2, 0x2, 0x1c2, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c4, 0x7, 0x16, 0x2, 0x2, 0x1c4, 
    0x1c5, 0x5, 0xd0, 0x69, 0x2, 0x1c5, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x1c6, 
    0x1c8, 0x9, 0x3, 0x2, 0x2, 0x1c7, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c7, 
    0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1c9, 
    0x1cb, 0x7, 0x1a, 0x2, 0x2, 0x1ca, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1ca, 
    0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1cc, 
    0x1cd, 0x5, 0xac, 0x57, 0x2, 0x1cd, 0x1ce, 0x7, 0xab, 0x2, 0x2, 0x1ce, 
    0x1d6, 0x5, 0xc0, 0x61, 0x2, 0x1cf, 0x1d0, 0x7, 0xc9, 0x2, 0x2, 0x1d0, 
    0x1d1, 0x5, 0xac, 0x57, 0x2, 0x1d1, 0x1d2, 0x7, 0xab, 0x2, 0x2, 0x1d2, 
    0x1d3, 0x5, 0xc0, 0x61, 0x2, 0x1d3, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d4, 
    0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d6, 
    0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d7, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1da, 
    0x7, 0x20, 0x2, 0x2, 0x1da, 0x1db, 0x5, 0xd0, 0x69, 0x2, 0x1db, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x7, 0xd2, 0x2, 0x2, 0x1dd, 0x1df, 
    0x7, 0xcb, 0x2, 0x2, 0x1de, 0x1e0, 0x5, 0xb4, 0x5b, 0x2, 0x1df, 0x1de, 
    0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e1, 
    0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x7, 0xcd, 0x2, 0x2, 0x1e2, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x7, 0x24, 0x2, 0x2, 0x1e4, 0x1e9, 
    0x5, 0xac, 0x57, 0x2, 0x1e5, 0x1e6, 0x7, 0xc9, 0x2, 0x2, 0x1e6, 0x1e8, 
    0x5, 0xac, 0x57, 0x2, 0x1e7, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1eb, 
    0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1ea, 
    0x3, 0x2, 0x2, 0x2, 0x1ea, 0x35, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1e9, 0x3, 
    0x2, 0x2, 0x2, 0x1ec, 0x1ed, 0x7, 0x27, 0x2, 0x2, 0x1ed, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x1ee, 0x1ef, 0x7, 0x2b, 0x2, 0x2, 0x1ef, 0x1f0, 0x5, 
    0xa0, 0x51, 0x2, 0x1f0, 0x1f1, 0x7, 0xc9, 0x2, 0x2, 0x1f1, 0x1f2, 0x5, 
    0xa0, 0x51, 0x2, 0x1f2, 0x39, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f4, 0x7, 
    0x2f, 0x2, 0x2, 0x1f4, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f6, 0x7, 
    0x30, 0x2, 0x2, 0x1f6, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x7, 
    0x32, 0x2, 0x2, 0x1f8, 0x1f9, 0x5, 0xa4, 0x53, 0x2, 0x1f9, 0x1fa, 0x7, 
    0xcb, 0x2, 0x2, 0x1fa, 0x1ff, 0x5, 0xa0, 0x51, 0x2, 0x1fb, 0x1fc, 0x7, 
    0xc9, 0x2, 0x2, 0x1fc, 0x1fe, 0x5, 0xa0, 0x51, 0x2, 0x1fd, 0x1fb, 0x3, 
    0x2, 0x2, 0x2, 0x1fe, 0x201, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x1fd, 0x3, 
    0x2, 0x2, 0x2, 0x1ff, 0x200, 0x3, 0x2, 0x2, 0x2, 0x200, 0x202, 0x3, 
    0x2, 0x2, 0x2, 0x201, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x7, 
    0xcd, 0x2, 0x2, 0x203, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x204, 0x205, 0x7, 
    0x26, 0x2, 0x2, 0x205, 0x206, 0x5, 0x8, 0x5, 0x2, 0x206, 0x207, 0x7, 
    0x33, 0x2, 0x2, 0x207, 0x208, 0x5, 0xc0, 0x61, 0x2, 0x208, 0x41, 0x3, 
    0x2, 0x2, 0x2, 0x209, 0x20a, 0x7, 0x35, 0x2, 0x2, 0x20a, 0x20b, 0x5, 
    0xc0, 0x61, 0x2, 0x20b, 0x20c, 0x5, 0x8, 0x5, 0x2, 0x20c, 0x20d, 0x7, 
    0xf, 0x2, 0x2, 0x20d, 0x43, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x216, 0x5, 0x46, 
    0x24, 0x2, 0x20f, 0x216, 0x5, 0x48, 0x25, 0x2, 0x210, 0x216, 0x5, 0x4a, 
    0x26, 0x2, 0x211, 0x216, 0x5, 0x4c, 0x27, 0x2, 0x212, 0x216, 0x5, 0x4e, 
    0x28, 0x2, 0x213, 0x216, 0x5, 0x50, 0x29, 0x2, 0x214, 0x216, 0x5, 0x52, 
    0x2a, 0x2, 0x215, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x215, 0x20f, 0x3, 0x2, 
    0x2, 0x2, 0x215, 0x210, 0x3, 0x2, 0x2, 0x2, 0x215, 0x211, 0x3, 0x2, 
    0x2, 0x2, 0x215, 0x212, 0x3, 0x2, 0x2, 0x2, 0x215, 0x213, 0x3, 0x2, 
    0x2, 0x2, 0x215, 0x214, 0x3, 0x2, 0x2, 0x2, 0x216, 0x45, 0x3, 0x2, 0x2, 
    0x2, 0x217, 0x21b, 0x7, 0x18, 0x2, 0x2, 0x218, 0x219, 0x5, 0xd0, 0x69, 
    0x2, 0x219, 0x21a, 0x7, 0xc9, 0x2, 0x2, 0x21a, 0x21c, 0x3, 0x2, 0x2, 
    0x2, 0x21b, 0x218, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21c, 0x3, 0x2, 0x2, 
    0x2, 0x21c, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 0x5, 0xb0, 0x59, 
    0x2, 0x21e, 0x47, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x221, 0x7, 0x22, 0x2, 
    0x2, 0x220, 0x222, 0x5, 0xbe, 0x60, 0x2, 0x221, 0x220, 0x3, 0x2, 0x2, 
    0x2, 0x221, 0x222, 0x3, 0x2, 0x2, 0x2, 0x222, 0x49, 0x3, 0x2, 0x2, 0x2, 
    0x223, 0x224, 0x7, 0x36, 0x2, 0x2, 0x224, 0x225, 0x5, 0xa6, 0x54, 0x2, 
    0x225, 0x226, 0x7, 0xc9, 0x2, 0x2, 0x226, 0x227, 0x5, 0xa6, 0x54, 0x2, 
    0x227, 0x228, 0x7, 0xc9, 0x2, 0x2, 0x228, 0x229, 0x5, 0xa6, 0x54, 0x2, 
    0x229, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22b, 0x7, 0x37, 0x2, 0x2, 
    0x22b, 0x22c, 0x7, 0xcb, 0x2, 0x2, 0x22c, 0x22d, 0x5, 0xd4, 0x6b, 0x2, 
    0x22d, 0x22e, 0x7, 0xcd, 0x2, 0x2, 0x22e, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x22f, 0x230, 0x7, 0x38, 0x2, 0x2, 0x230, 0x231, 0x7, 0xcb, 0x2, 0x2, 
    0x231, 0x232, 0x5, 0xd4, 0x6b, 0x2, 0x232, 0x233, 0x7, 0xcd, 0x2, 0x2, 
    0x233, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x234, 0x235, 0x7, 0x39, 0x2, 0x2, 
    0x235, 0x51, 0x3, 0x2, 0x2, 0x2, 0x236, 0x237, 0x7, 0x3a, 0x2, 0x2, 
    0x237, 0x53, 0x3, 0x2, 0x2, 0x2, 0x238, 0x239, 0x5, 0xac, 0x57, 0x2, 
    0x239, 0x23a, 0x7, 0xc0, 0x2, 0x2, 0x23a, 0x23b, 0x5, 0xd4, 0x6b, 0x2, 
    0x23b, 0x251, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23d, 0x5, 0xac, 0x57, 0x2, 
    0x23d, 0x23e, 0x7, 0xc1, 0x2, 0x2, 0x23e, 0x23f, 0x5, 0xd4, 0x6b, 0x2, 
    0x23f, 0x251, 0x3, 0x2, 0x2, 0x2, 0x240, 0x241, 0x5, 0xac, 0x57, 0x2, 
    0x241, 0x242, 0x7, 0xbe, 0x2, 0x2, 0x242, 0x243, 0x5, 0xd4, 0x6b, 0x2, 
    0x243, 0x251, 0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 0x5, 0xac, 0x57, 0x2, 
    0x245, 0x246, 0x7, 0xbf, 0x2, 0x2, 0x246, 0x247, 0x5, 0xd4, 0x6b, 0x2, 
    0x247, 0x251, 0x3, 0x2, 0x2, 0x2, 0x248, 0x249, 0x5, 0xac, 0x57, 0x2, 
    0x249, 0x24a, 0x7, 0xc2, 0x2, 0x2, 0x24a, 0x24b, 0x5, 0xd4, 0x6b, 0x2, 
    0x24b, 0x251, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24d, 0x5, 0xac, 0x57, 0x2, 
    0x24d, 0x24e, 0x7, 0xc3, 0x2, 0x2, 0x24e, 0x24f, 0x5, 0xd4, 0x6b, 0x2, 
    0x24f, 0x251, 0x3, 0x2, 0x2, 0x2, 0x250, 0x238, 0x3, 0x2, 0x2, 0x2, 
    0x250, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x250, 0x240, 0x3, 0x2, 0x2, 0x2, 
    0x250, 0x244, 0x3, 0x2, 0x2, 0x2, 0x250, 0x248, 0x3, 0x2, 0x2, 0x2, 
    0x250, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x251, 0x55, 0x3, 0x2, 0x2, 0x2, 0x252, 
    0x258, 0x5, 0x58, 0x2d, 0x2, 0x253, 0x258, 0x5, 0x5a, 0x2e, 0x2, 0x254, 
    0x258, 0x5, 0x5c, 0x2f, 0x2, 0x255, 0x258, 0x5, 0x5e, 0x30, 0x2, 0x256, 
    0x258, 0x5, 0x60, 0x31, 0x2, 0x257, 0x252, 0x3, 0x2, 0x2, 0x2, 0x257, 
    0x253, 0x3, 0x2, 0x2, 0x2, 0x257, 0x254, 0x3, 0x2, 0x2, 0x2, 0x257, 
    0x255, 0x3, 0x2, 0x2, 0x2, 0x257, 0x256, 0x3, 0x2, 0x2, 0x2, 0x258, 
    0x57, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25a, 0x7, 0x6c, 0x2, 0x2, 0x25a, 
    0x25b, 0x5, 0xd4, 0x6b, 0x2, 0x25b, 0x25c, 0x7, 0xc9, 0x2, 0x2, 0x25c, 
    0x25d, 0x5, 0xd4, 0x6b, 0x2, 0x25d, 0x59, 0x3, 0x2, 0x2, 0x2, 0x25e, 
    0x25f, 0x7, 0x6b, 0x2, 0x2, 0x25f, 0x260, 0x5, 0xd4, 0x6b, 0x2, 0x260, 
    0x5b, 0x3, 0x2, 0x2, 0x2, 0x261, 0x262, 0x7, 0x74, 0x2, 0x2, 0x262, 
    0x263, 0x5, 0xd4, 0x6b, 0x2, 0x263, 0x264, 0x7, 0xab, 0x2, 0x2, 0x264, 
    0x265, 0x5, 0xd4, 0x6b, 0x2, 0x265, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x266, 
    0x267, 0x7, 0x6d, 0x2, 0x2, 0x267, 0x268, 0x5, 0xd4, 0x6b, 0x2, 0x268, 
    0x5f, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26b, 0x7, 0x1a, 0x2, 0x2, 0x26a, 
    0x269, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x26b, 
    0x26c, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26d, 0x5, 0xa8, 0x55, 0x2, 0x26d, 
    0x26e, 0x7, 0xcb, 0x2, 0x2, 0x26e, 0x26f, 0x7, 0xcd, 0x2, 0x2, 0x26f, 
    0x270, 0x7, 0xab, 0x2, 0x2, 0x270, 0x271, 0x7, 0x70, 0x2, 0x2, 0x271, 
    0x272, 0x7, 0xcb, 0x2, 0x2, 0x272, 0x273, 0x5, 0xd0, 0x69, 0x2, 0x273, 
    0x274, 0x7, 0xcd, 0x2, 0x2, 0x274, 0x61, 0x3, 0x2, 0x2, 0x2, 0x275, 
    0x28d, 0x5, 0x64, 0x33, 0x2, 0x276, 0x28d, 0x5, 0x66, 0x34, 0x2, 0x277, 
    0x28d, 0x5, 0x68, 0x35, 0x2, 0x278, 0x28d, 0x5, 0x6a, 0x36, 0x2, 0x279, 
    0x28d, 0x5, 0x6c, 0x37, 0x2, 0x27a, 0x28d, 0x5, 0x6e, 0x38, 0x2, 0x27b, 
    0x28d, 0x5, 0x70, 0x39, 0x2, 0x27c, 0x28d, 0x5, 0x72, 0x3a, 0x2, 0x27d, 
    0x28d, 0x5, 0x74, 0x3b, 0x2, 0x27e, 0x28d, 0x5, 0x76, 0x3c, 0x2, 0x27f, 
    0x28d, 0x5, 0x78, 0x3d, 0x2, 0x280, 0x28d, 0x5, 0x7a, 0x3e, 0x2, 0x281, 
    0x28d, 0x5, 0x7c, 0x3f, 0x2, 0x282, 0x28d, 0x5, 0x7e, 0x40, 0x2, 0x283, 
    0x28d, 0x5, 0x80, 0x41, 0x2, 0x284, 0x28d, 0x5, 0x82, 0x42, 0x2, 0x285, 
    0x28d, 0x5, 0x84, 0x43, 0x2, 0x286, 0x28d, 0x5, 0x86, 0x44, 0x2, 0x287, 
    0x28d, 0x5, 0x88, 0x45, 0x2, 0x288, 0x28d, 0x5, 0x8a, 0x46, 0x2, 0x289, 
    0x28d, 0x5, 0x8c, 0x47, 0x2, 0x28a, 0x28d, 0x5, 0x8e, 0x48, 0x2, 0x28b, 
    0x28d, 0x5, 0x90, 0x49, 0x2, 0x28c, 0x275, 0x3, 0x2, 0x2, 0x2, 0x28c, 
    0x276, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x277, 0x3, 0x2, 0x2, 0x2, 0x28c, 
    0x278, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x279, 0x3, 0x2, 0x2, 0x2, 0x28c, 
    0x27a, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x28c, 
    0x27c, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x28c, 
    0x27e, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x28c, 
    0x280, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x281, 0x3, 0x2, 0x2, 0x2, 0x28c, 
    0x282, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x283, 0x3, 0x2, 0x2, 0x2, 0x28c, 
    0x284, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x285, 0x3, 0x2, 0x2, 0x2, 0x28c, 
    0x286, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x287, 0x3, 0x2, 0x2, 0x2, 0x28c, 
    0x288, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x289, 0x3, 0x2, 0x2, 0x2, 0x28c, 
    0x28a, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28d, 
    0x63, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28f, 0x7, 0x77, 0x2, 0x2, 0x28f, 
    0x65, 0x3, 0x2, 0x2, 0x2, 0x290, 0x291, 0x7, 0x7a, 0x2, 0x2, 0x291, 
    0x29a, 0x5, 0xd4, 0x6b, 0x2, 0x292, 0x293, 0x7, 0x7a, 0x2, 0x2, 0x293, 
    0x294, 0x5, 0xd4, 0x6b, 0x2, 0x294, 0x295, 0x7, 0xc9, 0x2, 0x2, 0x295, 
    0x296, 0x5, 0xd4, 0x6b, 0x2, 0x296, 0x297, 0x7, 0xc9, 0x2, 0x2, 0x297, 
    0x298, 0x5, 0xd4, 0x6b, 0x2, 0x298, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x299, 
    0x290, 0x3, 0x2, 0x2, 0x2, 0x299, 0x292, 0x3, 0x2, 0x2, 0x2, 0x29a, 
    0x67, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x29c, 0x7, 0x7b, 0x2, 0x2, 0x29c, 
    0x2a5, 0x5, 0xd4, 0x6b, 0x2, 0x29d, 0x29e, 0x7, 0x7b, 0x2, 0x2, 0x29e, 
    0x29f, 0x5, 0xd4, 0x6b, 0x2, 0x29f, 0x2a0, 0x7, 0xc9, 0x2, 0x2, 0x2a0, 
    0x2a1, 0x5, 0xd4, 0x6b, 0x2, 0x2a1, 0x2a2, 0x7, 0xc9, 0x2, 0x2, 0x2a2, 
    0x2a3, 0x5, 0xd4, 0x6b, 0x2, 0x2a3, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a4, 
    0x29b, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x2a5, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2b5, 0x7, 0x80, 0x2, 0x2, 0x2a7, 
    0x2a8, 0x7, 0x80, 0x2, 0x2, 0x2a8, 0x2a9, 0x5, 0xd4, 0x6b, 0x2, 0x2a9, 
    0x2aa, 0x7, 0xc9, 0x2, 0x2, 0x2aa, 0x2ab, 0x5, 0xd4, 0x6b, 0x2, 0x2ab, 
    0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2ad, 0x7, 0x80, 0x2, 0x2, 0x2ad, 
    0x2b5, 0x7, 0x75, 0x2, 0x2, 0x2ae, 0x2af, 0x7, 0x80, 0x2, 0x2, 0x2af, 
    0x2b0, 0x7, 0x75, 0x2, 0x2, 0x2b0, 0x2b1, 0x5, 0xd4, 0x6b, 0x2, 0x2b1, 
    0x2b2, 0x7, 0xc9, 0x2, 0x2, 0x2b2, 0x2b3, 0x5, 0xd4, 0x6b, 0x2, 0x2b3, 
    0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2b4, 
    0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2b4, 
    0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2b7, 
    0x7, 0x7e, 0x2, 0x2, 0x2b7, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x2b8, 0x2b9, 
    0x7, 0x76, 0x2, 0x2, 0x2b9, 0x2ba, 0x5, 0xd4, 0x6b, 0x2, 0x2ba, 0x2bb, 
    0x7, 0xc9, 0x2, 0x2, 0x2bb, 0x2bc, 0x5, 0xd4, 0x6b, 0x2, 0x2bc, 0x2bd, 
    0x7, 0xc9, 0x2, 0x2, 0x2bd, 0x2be, 0x5, 0xd4, 0x6b, 0x2, 0x2be, 0x2c8, 
    0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c0, 0x7, 0x76, 0x2, 0x2, 0x2c0, 0x2c1, 
    0x7, 0x7d, 0x2, 0x2, 0x2c1, 0x2c2, 0x5, 0xd4, 0x6b, 0x2, 0x2c2, 0x2c3, 
    0x7, 0xc9, 0x2, 0x2, 0x2c3, 0x2c4, 0x5, 0xd4, 0x6b, 0x2, 0x2c4, 0x2c5, 
    0x7, 0xc9, 0x2, 0x2, 0x2c5, 0x2c6, 0x5, 0xd4, 0x6b, 0x2, 0x2c6, 0x2c8, 
    0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2bf, 
    0x3, 0x2, 0x2, 0x2, 0x2c8, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2ca, 0x7, 
    0x81, 0x2, 0x2, 0x2ca, 0x2cb, 0x5, 0xd4, 0x6b, 0x2, 0x2cb, 0x2cc, 0x7, 
    0xc9, 0x2, 0x2, 0x2cc, 0x2cd, 0x5, 0xd4, 0x6b, 0x2, 0x2cd, 0x2ce, 0x7, 
    0xc9, 0x2, 0x2, 0x2ce, 0x2cf, 0x5, 0xd4, 0x6b, 0x2, 0x2cf, 0x2d0, 0x7, 
    0xc9, 0x2, 0x2, 0x2d0, 0x2d1, 0x5, 0xd4, 0x6b, 0x2, 0x2d1, 0x71, 0x3, 
    0x2, 0x2, 0x2, 0x2d2, 0x2d3, 0x7, 0x83, 0x2, 0x2, 0x2d3, 0x2d4, 0x5, 
    0xd4, 0x6b, 0x2, 0x2d4, 0x2d5, 0x7, 0xc9, 0x2, 0x2, 0x2d5, 0x2d6, 0x5, 
    0xd4, 0x6b, 0x2, 0x2d6, 0x2d7, 0x7, 0xc9, 0x2, 0x2, 0x2d7, 0x2d8, 0x5, 
    0xd4, 0x6b, 0x2, 0x2d8, 0x2d9, 0x7, 0xc9, 0x2, 0x2, 0x2d9, 0x2da, 0x5, 
    0xd4, 0x6b, 0x2, 0x2da, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2dc, 0x7, 
    0x83, 0x2, 0x2, 0x2dc, 0x2dd, 0x7, 0x7d, 0x2, 0x2, 0x2dd, 0x2de, 0x5, 
    0xd4, 0x6b, 0x2, 0x2de, 0x2df, 0x7, 0xc9, 0x2, 0x2, 0x2df, 0x2e0, 0x5, 
    0xd4, 0x6b, 0x2, 0x2e0, 0x2e1, 0x7, 0xc9, 0x2, 0x2, 0x2e1, 0x2e2, 0x5, 
    0xd4, 0x6b, 0x2, 0x2e2, 0x2e3, 0x7, 0xc9, 0x2, 0x2, 0x2e3, 0x2e4, 0x5, 
    0xd4, 0x6b, 0x2, 0x2e4, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2d2, 0x3, 
    0x2, 0x2, 0x2, 0x2e5, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x2e7, 0x2e8, 0x7, 0x8c, 0x2, 0x2, 0x2e8, 0x2e9, 0x5, 0xd4, 
    0x6b, 0x2, 0x2e9, 0x2ea, 0x7, 0xc9, 0x2, 0x2, 0x2ea, 0x2eb, 0x5, 0xd4, 
    0x6b, 0x2, 0x2eb, 0x2ec, 0x7, 0xc9, 0x2, 0x2, 0x2ec, 0x2ed, 0x5, 0xd4, 
    0x6b, 0x2, 0x2ed, 0x2ee, 0x7, 0xc9, 0x2, 0x2, 0x2ee, 0x2ef, 0x5, 0xd4, 
    0x6b, 0x2, 0x2ef, 0x2f0, 0x7, 0xc9, 0x2, 0x2, 0x2f0, 0x2f1, 0x5, 0xd4, 
    0x6b, 0x2, 0x2f1, 0x2f2, 0x7, 0xc9, 0x2, 0x2, 0x2f2, 0x2f3, 0x5, 0xd4, 
    0x6b, 0x2, 0x2f3, 0x317, 0x3, 0x2, 0x2, 0x2, 0x2f4, 0x2f5, 0x7, 0x8c, 
    0x2, 0x2, 0x2f5, 0x2f6, 0x7, 0x7d, 0x2, 0x2, 0x2f6, 0x2f7, 0x5, 0xd4, 
    0x6b, 0x2, 0x2f7, 0x2f8, 0x7, 0xc9, 0x2, 0x2, 0x2f8, 0x2f9, 0x5, 0xd4, 
    0x6b, 0x2, 0x2f9, 0x2fa, 0x7, 0xc9, 0x2, 0x2, 0x2fa, 0x2fb, 0x5, 0xd4, 
    0x6b, 0x2, 0x2fb, 0x2fc, 0x7, 0xc9, 0x2, 0x2, 0x2fc, 0x2fd, 0x5, 0xd4, 
    0x6b, 0x2, 0x2fd, 0x2fe, 0x7, 0xc9, 0x2, 0x2, 0x2fe, 0x2ff, 0x5, 0xd4, 
    0x6b, 0x2, 0x2ff, 0x300, 0x7, 0xc9, 0x2, 0x2, 0x300, 0x301, 0x5, 0xd4, 
    0x6b, 0x2, 0x301, 0x317, 0x3, 0x2, 0x2, 0x2, 0x302, 0x303, 0x7, 0x8c, 
    0x2, 0x2, 0x303, 0x304, 0x7, 0x69, 0x2, 0x2, 0x304, 0x305, 0x5, 0xd4, 
    0x6b, 0x2, 0x305, 0x306, 0x7, 0xc9, 0x2, 0x2, 0x306, 0x307, 0x5, 0xd4, 
    0x6b, 0x2, 0x307, 0x308, 0x7, 0xc9, 0x2, 0x2, 0x308, 0x309, 0x5, 0xd4, 
    0x6b, 0x2, 0x309, 0x30a, 0x7, 0xc9, 0x2, 0x2, 0x30a, 0x30b, 0x5, 0xd4, 
    0x6b, 0x2, 0x30b, 0x30c, 0x7, 0xc9, 0x2, 0x2, 0x30c, 0x30d, 0x5, 0xd4, 
    0x6b, 0x2, 0x30d, 0x30e, 0x7, 0xc9, 0x2, 0x2, 0x30e, 0x30f, 0x5, 0xd4, 
    0x6b, 0x2, 0x30f, 0x310, 0x7, 0xc9, 0x2, 0x2, 0x310, 0x311, 0x5, 0xd4, 
    0x6b, 0x2, 0x311, 0x312, 0x7, 0xc9, 0x2, 0x2, 0x312, 0x313, 0x5, 0xd4, 
    0x6b, 0x2, 0x313, 0x314, 0x7, 0xc9, 0x2, 0x2, 0x314, 0x315, 0x5, 0xd4, 
    0x6b, 0x2, 0x315, 0x317, 0x3, 0x2, 0x2, 0x2, 0x316, 0x2e7, 0x3, 0x2, 
    0x2, 0x2, 0x316, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x316, 0x302, 0x3, 0x2, 
    0x2, 0x2, 0x317, 0x75, 0x3, 0x2, 0x2, 0x2, 0x318, 0x319, 0x7, 0x84, 
    0x2, 0x2, 0x319, 0x31a, 0x5, 0xd4, 0x6b, 0x2, 0x31a, 0x31b, 0x7, 0xc9, 
    0x2, 0x2, 0x31b, 0x31c, 0x5, 0xd4, 0x6b, 0x2, 0x31c, 0x77, 0x3, 0x2, 
    0x2, 0x2, 0x31d, 0x31e, 0x7, 0x78, 0x2, 0x2, 0x31e, 0x31f, 0x5, 0xd4, 
    0x6b, 0x2, 0x31f, 0x320, 0x7, 0xc9, 0x2, 0x2, 0x320, 0x321, 0x5, 0xd4, 
    0x6b, 0x2, 0x321, 0x322, 0x7, 0xc9, 0x2, 0x2, 0x322, 0x323, 0x5, 0xd4, 
    0x6b, 0x2, 0x323, 0x324, 0x7, 0xc9, 0x2, 0x2, 0x324, 0x325, 0x5, 0xd4, 
    0x6b, 0x2, 0x325, 0x79, 0x3, 0x2, 0x2, 0x2, 0x326, 0x327, 0x7, 0x79, 
    0x2, 0x2, 0x327, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x328, 0x329, 0x7, 0x88, 
    0x2, 0x2, 0x329, 0x32a, 0x5, 0xd4, 0x6b, 0x2, 0x32a, 0x32b, 0x7, 0xc9, 
    0x2, 0x2, 0x32b, 0x32c, 0x5, 0xd4, 0x6b, 0x2, 0x32c, 0x32d, 0x7, 0xc9, 
    0x2, 0x2, 0x32d, 0x32e, 0x5, 0xd4, 0x6b, 0x2, 0x32e, 0x32f, 0x7, 0xc9, 
    0x2, 0x2, 0x32f, 0x330, 0x5, 0xd0, 0x69, 0x2, 0x330, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x331, 0x332, 0x7, 0x89, 0x2, 0x2, 0x332, 0x333, 0x5, 0xd4, 
    0x6b, 0x2, 0x333, 0x334, 0x7, 0xc9, 0x2, 0x2, 0x334, 0x335, 0x5, 0xd4, 
    0x6b, 0x2, 0x335, 0x336, 0x7, 0xc9, 0x2, 0x2, 0x336, 0x337, 0x5, 0xd4, 
    0x6b, 0x2, 0x337, 0x338, 0x7, 0xc9, 0x2, 0x2, 0x338, 0x339, 0x5, 0xd0, 
    0x69, 0x2, 0x339, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x33b, 0x9, 0x4, 
    0x2, 0x2, 0x33b, 0x33c, 0x5, 0xd4, 0x6b, 0x2, 0x33c, 0x33d, 0x7, 0xc9, 
    0x2, 0x2, 0x33d, 0x33e, 0x5, 0xd4, 0x6b, 0x2, 0x33e, 0x33f, 0x7, 0xc9, 
    0x2, 0x2, 0x33f, 0x340, 0x5, 0xd4, 0x6b, 0x2, 0x340, 0x341, 0x7, 0xc9, 
    0x2, 0x2, 0x341, 0x342, 0x5, 0xd0, 0x69, 0x2, 0x342, 0x81, 0x3, 0x2, 
    0x2, 0x2, 0x343, 0x344, 0x7, 0x7f, 0x2, 0x2, 0x344, 0x83, 0x3, 0x2, 
    0x2, 0x2, 0x345, 0x346, 0x7, 0x5e, 0x2, 0x2, 0x346, 0x85, 0x3, 0x2, 
    0x2, 0x2, 0x347, 0x348, 0x7, 0x5f, 0x2, 0x2, 0x348, 0x349, 0x5, 0xaa, 
    0x56, 0x2, 0x349, 0x34a, 0x7, 0xcb, 0x2, 0x2, 0x34a, 0x34b, 0x5, 0xd4, 
    0x6b, 0x2, 0x34b, 0x34c, 0x7, 0xcd, 0x2, 0x2, 0x34c, 0x34d, 0x7, 0xc9, 
    0x2, 0x2, 0x34d, 0x34e, 0x5, 0xd4, 0x6b, 0x2, 0x34e, 0x34f, 0x7, 0xc9, 
    0x2, 0x2, 0x34f, 0x350, 0x5, 0xd4, 0x6b, 0x2, 0x350, 0x351, 0x7, 0xc9, 
    0x2, 0x2, 0x351, 0x352, 0x5, 0xd4, 0x6b, 0x2, 0x352, 0x353, 0x7, 0xc9, 
    0x2, 0x2, 0x353, 0x354, 0x5, 0xd4, 0x6b, 0x2, 0x354, 0x87, 0x3, 0x2, 
    0x2, 0x2, 0x355, 0x356, 0x7, 0x60, 0x2, 0x2, 0x356, 0x357, 0x5, 0xaa, 
    0x56, 0x2, 0x357, 0x358, 0x7, 0xcb, 0x2, 0x2, 0x358, 0x359, 0x5, 0xd4, 
    0x6b, 0x2, 0x359, 0x35a, 0x7, 0xcd, 0x2, 0x2, 0x35a, 0x35b, 0x7, 0xc9, 
    0x2, 0x2, 0x35b, 0x35c, 0x5, 0xd4, 0x6b, 0x2, 0x35c, 0x35d, 0x7, 0xc9, 
    0x2, 0x2, 0x35d, 0x35e, 0x5, 0xd4, 0x6b, 0x2, 0x35e, 0x35f, 0x7, 0xc9, 
    0x2, 0x2, 0x35f, 0x360, 0x5, 0xd4, 0x6b, 0x2, 0x360, 0x361, 0x7, 0xc9, 
    0x2, 0x2, 0x361, 0x362, 0x5, 0xd4, 0x6b, 0x2, 0x362, 0x89, 0x3, 0x2, 
    0x2, 0x2, 0x363, 0x364, 0x7, 0x61, 0x2, 0x2, 0x364, 0x365, 0x5, 0xd4, 
    0x6b, 0x2, 0x365, 0x366, 0x7, 0xc9, 0x2, 0x2, 0x366, 0x367, 0x5, 0xd4, 
    0x6b, 0x2, 0x367, 0x368, 0x7, 0xc9, 0x2, 0x2, 0x368, 0x369, 0x5, 0xd4, 
    0x6b, 0x2, 0x369, 0x36a, 0x7, 0xc9, 0x2, 0x2, 0x36a, 0x36b, 0x5, 0xd4, 
    0x6b, 0x2, 0x36b, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x36d, 0x7, 0x62, 
    0x2, 0x2, 0x36d, 0x36e, 0x5, 0xd4, 0x6b, 0x2, 0x36e, 0x36f, 0x7, 0xc9, 
    0x2, 0x2, 0x36f, 0x370, 0x5, 0xd4, 0x6b, 0x2, 0x370, 0x371, 0x7, 0xc9, 
    0x2, 0x2, 0x371, 0x372, 0x5, 0xd4, 0x6b, 0x2, 0x372, 0x373, 0x7, 0xc9, 
    0x2, 0x2, 0x373, 0x374, 0x5, 0xd4, 0x6b, 0x2, 0x374, 0x8d, 0x3, 0x2, 
    0x2, 0x2, 0x375, 0x376, 0x7, 0x63, 0x2, 0x2, 0x376, 0x377, 0x5, 0xd4, 
    0x6b, 0x2, 0x377, 0x378, 0x7, 0xc9, 0x2, 0x2, 0x378, 0x379, 0x5, 0xd4, 
    0x6b, 0x2, 0x379, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x37a, 0x37b, 0x7, 0x64, 
    0x2, 0x2, 0x37b, 0x37c, 0x5, 0xd4, 0x6b, 0x2, 0x37c, 0x91, 0x3, 0x2, 
    0x2, 0x2, 0x37d, 0x37e, 0x7, 0x34, 0x2, 0x2, 0x37e, 0x383, 0x5, 0xc0, 
    0x61, 0x2, 0x37f, 0x380, 0x7, 0xc9, 0x2, 0x2, 0x380, 0x382, 0x5, 0xc0, 
    0x61, 0x2, 0x381, 0x37f, 0x3, 0x2, 0x2, 0x2, 0x382, 0x385, 0x3, 0x2, 
    0x2, 0x2, 0x383, 0x381, 0x3, 0x2, 0x2, 0x2, 0x383, 0x384, 0x3, 0x2, 
    0x2, 0x2, 0x384, 0x386, 0x3, 0x2, 0x2, 0x2, 0x385, 0x383, 0x3, 0x2, 
    0x2, 0x2, 0x386, 0x387, 0x7, 0xc8, 0x2, 0x2, 0x387, 0x388, 0x5, 0x8, 
    0x5, 0x2, 0x388, 0x93, 0x3, 0x2, 0x2, 0x2, 0x389, 0x38a, 0x9, 0x5, 0x2, 
    0x2, 0x38a, 0x95, 0x3, 0x2, 0x2, 0x2, 0x38b, 0x38e, 0x5, 0xc2, 0x62, 
    0x2, 0x38c, 0x38e, 0x5, 0xce, 0x68, 0x2, 0x38d, 0x38b, 0x3, 0x2, 0x2, 
    0x2, 0x38d, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x38e, 0x97, 0x3, 0x2, 0x2, 0x2, 
    0x38f, 0x393, 0x5, 0x9c, 0x4f, 0x2, 0x390, 0x393, 0x5, 0x9e, 0x50, 0x2, 
    0x391, 0x393, 0x5, 0x9a, 0x4e, 0x2, 0x392, 0x38f, 0x3, 0x2, 0x2, 0x2, 
    0x392, 0x390, 0x3, 0x2, 0x2, 0x2, 0x392, 0x391, 0x3, 0x2, 0x2, 0x2, 
    0x393, 0x99, 0x3, 0x2, 0x2, 0x2, 0x394, 0x395, 0x5, 0xaa, 0x56, 0x2, 
    0x395, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x396, 0x397, 0x5, 0xa4, 0x53, 0x2, 
    0x397, 0x398, 0x7, 0xcb, 0x2, 0x2, 0x398, 0x39b, 0x5, 0xd4, 0x6b, 0x2, 
    0x399, 0x39a, 0x7, 0xc9, 0x2, 0x2, 0x39a, 0x39c, 0x5, 0xd4, 0x6b, 0x2, 
    0x39b, 0x399, 0x3, 0x2, 0x2, 0x2, 0x39b, 0x39c, 0x3, 0x2, 0x2, 0x2, 
    0x39c, 0x39d, 0x3, 0x2, 0x2, 0x2, 0x39d, 0x39e, 0x7, 0xcd, 0x2, 0x2, 
    0x39e, 0x3c9, 0x3, 0x2, 0x2, 0x2, 0x39f, 0x3a0, 0x5, 0xa6, 0x54, 0x2, 
    0x3a0, 0x3a1, 0x7, 0xcb, 0x2, 0x2, 0x3a1, 0x3a4, 0x5, 0xd4, 0x6b, 0x2, 
    0x3a2, 0x3a3, 0x7, 0xc9, 0x2, 0x2, 0x3a3, 0x3a5, 0x5, 0xd4, 0x6b, 0x2, 
    0x3a4, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a5, 0x3, 0x2, 0x2, 0x2, 
    0x3a5, 0x3a6, 0x3, 0x2, 0x2, 0x2, 0x3a6, 0x3a7, 0x7, 0xcd, 0x2, 0x2, 
    0x3a7, 0x3c9, 0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3a9, 0x5, 0x9a, 0x4e, 0x2, 
    0x3a9, 0x3aa, 0x7, 0xcb, 0x2, 0x2, 0x3aa, 0x3ab, 0x5, 0xd4, 0x6b, 0x2, 
    0x3ab, 0x3ac, 0x7, 0xcd, 0x2, 0x2, 0x3ac, 0x3ad, 0x5, 0xa6, 0x54, 0x2, 
    0x3ad, 0x3c9, 0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3af, 0x5, 0x9a, 0x4e, 0x2, 
    0x3af, 0x3b0, 0x7, 0xcb, 0x2, 0x2, 0x3b0, 0x3b1, 0x5, 0xd4, 0x6b, 0x2, 
    0x3b1, 0x3b2, 0x7, 0xcd, 0x2, 0x2, 0x3b2, 0x3b3, 0x5, 0xa4, 0x53, 0x2, 
    0x3b3, 0x3c9, 0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b5, 0x7, 0xd4, 0x2, 0x2, 
    0x3b5, 0x3b7, 0x7, 0xcb, 0x2, 0x2, 0x3b6, 0x3b8, 0x5, 0xb4, 0x5b, 0x2, 
    0x3b7, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3b8, 0x3, 0x2, 0x2, 0x2, 
    0x3b8, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3c9, 0x7, 0xcd, 0x2, 0x2, 
    0x3ba, 0x3bb, 0x7, 0xd3, 0x2, 0x2, 0x3bb, 0x3bd, 0x7, 0xcb, 0x2, 0x2, 
    0x3bc, 0x3be, 0x5, 0xb4, 0x5b, 0x2, 0x3bd, 0x3bc, 0x3, 0x2, 0x2, 0x2, 
    0x3bd, 0x3be, 0x3, 0x2, 0x2, 0x2, 0x3be, 0x3bf, 0x3, 0x2, 0x2, 0x2, 
    0x3bf, 0x3c9, 0x7, 0xcd, 0x2, 0x2, 0x3c0, 0x3c9, 0x5, 0xa4, 0x53, 0x2, 
    0x3c1, 0x3c9, 0x5, 0xa6, 0x54, 0x2, 0x3c2, 0x3c3, 0x5, 0x9a, 0x4e, 0x2, 
    0x3c3, 0x3c4, 0x5, 0xa4, 0x53, 0x2, 0x3c4, 0x3c9, 0x3, 0x2, 0x2, 0x2, 
    0x3c5, 0x3c6, 0x5, 0x9a, 0x4e, 0x2, 0x3c6, 0x3c7, 0x5, 0xa6, 0x54, 0x2, 
    0x3c7, 0x3c9, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x396, 0x3, 0x2, 0x2, 0x2, 
    0x3c8, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3a8, 0x3, 0x2, 0x2, 0x2, 
    0x3c8, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3b4, 0x3, 0x2, 0x2, 0x2, 
    0x3c8, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3c0, 0x3, 0x2, 0x2, 0x2, 
    0x3c8, 0x3c1, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3c2, 0x3, 0x2, 0x2, 0x2, 
    0x3c8, 0x3c5, 0x3, 0x2, 0x2, 0x2, 0x3c9, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x3ca, 
    0x3cb, 0x5, 0xa8, 0x55, 0x2, 0x3cb, 0x3cc, 0x7, 0xcb, 0x2, 0x2, 0x3cc, 
    0x3cf, 0x5, 0xd4, 0x6b, 0x2, 0x3cd, 0x3ce, 0x7, 0xc9, 0x2, 0x2, 0x3ce, 
    0x3d0, 0x5, 0xd4, 0x6b, 0x2, 0x3cf, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3cf, 
    0x3d0, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3d1, 0x3, 0x2, 0x2, 0x2, 0x3d1, 
    0x3d2, 0x7, 0xcd, 0x2, 0x2, 0x3d2, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3d3, 
    0x3d4, 0x5, 0x9a, 0x4e, 0x2, 0x3d4, 0x3d5, 0x7, 0xcb, 0x2, 0x2, 0x3d5, 
    0x3d6, 0x5, 0xd4, 0x6b, 0x2, 0x3d6, 0x3d7, 0x7, 0xcd, 0x2, 0x2, 0x3d7, 
    0x3d8, 0x5, 0xa8, 0x55, 0x2, 0x3d8, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3d9, 
    0x3e4, 0x5, 0xa8, 0x55, 0x2, 0x3da, 0x3db, 0x5, 0x9a, 0x4e, 0x2, 0x3db, 
    0x3dc, 0x5, 0xa8, 0x55, 0x2, 0x3dc, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3dd, 
    0x3de, 0x7, 0xd5, 0x2, 0x2, 0x3de, 0x3e0, 0x7, 0xcb, 0x2, 0x2, 0x3df, 
    0x3e1, 0x5, 0xb4, 0x5b, 0x2, 0x3e0, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3e0, 
    0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e1, 0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3e2, 
    0x3e4, 0x7, 0xcd, 0x2, 0x2, 0x3e3, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3e3, 
    0x3d3, 0x3, 0x2, 0x2, 0x2, 0x3e3, 0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3e3, 
    0x3da, 0x3, 0x2, 0x2, 0x2, 0x3e3, 0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3e4, 
    0x9f, 0x3, 0x2, 0x2, 0x2, 0x3e5, 0x3e9, 0x5, 0xa4, 0x53, 0x2, 0x3e6, 
    0x3e9, 0x5, 0xa6, 0x54, 0x2, 0x3e7, 0x3e9, 0x5, 0xa8, 0x55, 0x2, 0x3e8, 
    0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3e8, 0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3e8, 
    0x3e7, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3ed, 
    0x5, 0xa4, 0x53, 0x2, 0x3eb, 0x3ed, 0x5, 0xa6, 0x54, 0x2, 0x3ec, 0x3ea, 
    0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3ed, 0xa3, 0x3, 
    0x2, 0x2, 0x2, 0x3ee, 0x3ef, 0x7, 0xd6, 0x2, 0x2, 0x3ef, 0xa5, 0x3, 
    0x2, 0x2, 0x2, 0x3f0, 0x3f1, 0x7, 0xd7, 0x2, 0x2, 0x3f1, 0xa7, 0x3, 
    0x2, 0x2, 0x2, 0x3f2, 0x3f3, 0x7, 0xd8, 0x2, 0x2, 0x3f3, 0xa9, 0x3, 
    0x2, 0x2, 0x2, 0x3f4, 0x3f5, 0x7, 0xd9, 0x2, 0x2, 0x3f5, 0xab, 0x3, 
    0x2, 0x2, 0x2, 0x3f6, 0x41e, 0x5, 0xa0, 0x51, 0x2, 0x3f7, 0x402, 0x5, 
    0xa0, 0x51, 0x2, 0x3f8, 0x3f9, 0x7, 0xcb, 0x2, 0x2, 0x3f9, 0x3fc, 0x5, 
    0xd4, 0x6b, 0x2, 0x3fa, 0x3fb, 0x7, 0xc9, 0x2, 0x2, 0x3fb, 0x3fd, 0x5, 
    0xd4, 0x6b, 0x2, 0x3fc, 0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3fc, 0x3fd, 0x3, 
    0x2, 0x2, 0x2, 0x3fd, 0x3fe, 0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3ff, 0x7, 
    0xcd, 0x2, 0x2, 0x3ff, 0x401, 0x3, 0x2, 0x2, 0x2, 0x400, 0x3f8, 0x3, 
    0x2, 0x2, 0x2, 0x401, 0x404, 0x3, 0x2, 0x2, 0x2, 0x402, 0x400, 0x3, 
    0x2, 0x2, 0x2, 0x402, 0x403, 0x3, 0x2, 0x2, 0x2, 0x403, 0x41e, 0x3, 
    0x2, 0x2, 0x2, 0x404, 0x402, 0x3, 0x2, 0x2, 0x2, 0x405, 0x406, 0x5, 
    0x9a, 0x4e, 0x2, 0x406, 0x407, 0x5, 0xa4, 0x53, 0x2, 0x407, 0x41e, 0x3, 
    0x2, 0x2, 0x2, 0x408, 0x409, 0x5, 0x9a, 0x4e, 0x2, 0x409, 0x40a, 0x5, 
    0xa6, 0x54, 0x2, 0x40a, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x40b, 0x40c, 0x5, 
    0x9a, 0x4e, 0x2, 0x40c, 0x40d, 0x7, 0xcb, 0x2, 0x2, 0x40d, 0x40e, 0x5, 
    0xd4, 0x6b, 0x2, 0x40e, 0x40f, 0x7, 0xcd, 0x2, 0x2, 0x40f, 0x410, 0x5, 
    0xa4, 0x53, 0x2, 0x410, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x411, 0x412, 0x5, 
    0x9a, 0x4e, 0x2, 0x412, 0x413, 0x7, 0xcb, 0x2, 0x2, 0x413, 0x414, 0x5, 
    0xd4, 0x6b, 0x2, 0x414, 0x415, 0x7, 0xcd, 0x2, 0x2, 0x415, 0x416, 0x5, 
    0xa6, 0x54, 0x2, 0x416, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x417, 0x41e, 0x5, 
    0x9a, 0x4e, 0x2, 0x418, 0x419, 0x5, 0x9a, 0x4e, 0x2, 0x419, 0x41a, 0x7, 
    0xcb, 0x2, 0x2, 0x41a, 0x41b, 0x5, 0xd4, 0x6b, 0x2, 0x41b, 0x41c, 0x7, 
    0xcd, 0x2, 0x2, 0x41c, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x3f6, 0x3, 
    0x2, 0x2, 0x2, 0x41d, 0x3f7, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x405, 0x3, 
    0x2, 0x2, 0x2, 0x41d, 0x408, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x40b, 0x3, 
    0x2, 0x2, 0x2, 0x41d, 0x411, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x417, 0x3, 
    0x2, 0x2, 0x2, 0x41d, 0x418, 0x3, 0x2, 0x2, 0x2, 0x41e, 0xad, 0x3, 0x2, 
    0x2, 0x2, 0x41f, 0x420, 0x5, 0xa0, 0x51, 0x2, 0x420, 0x421, 0x7, 0xcb, 
    0x2, 0x2, 0x421, 0x426, 0x5, 0xd4, 0x6b, 0x2, 0x422, 0x423, 0x7, 0xc9, 
    0x2, 0x2, 0x423, 0x425, 0x5, 0xd4, 0x6b, 0x2, 0x424, 0x422, 0x3, 0x2, 
    0x2, 0x2, 0x425, 0x428, 0x3, 0x2, 0x2, 0x2, 0x426, 0x424, 0x3, 0x2, 
    0x2, 0x2, 0x426, 0x427, 0x3, 0x2, 0x2, 0x2, 0x427, 0x429, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x426, 0x3, 0x2, 0x2, 0x2, 0x429, 0x42a, 0x7, 0xcd, 
    0x2, 0x2, 0x42a, 0x433, 0x3, 0x2, 0x2, 0x2, 0x42b, 0x42c, 0x5, 0x9a, 
    0x4e, 0x2, 0x42c, 0x42d, 0x7, 0xcb, 0x2, 0x2, 0x42d, 0x42e, 0x5, 0xd4, 
    0x6b, 0x2, 0x42e, 0x42f, 0x7, 0xc9, 0x2, 0x2, 0x42f, 0x430, 0x5, 0xa4, 
    0x53, 0x2, 0x430, 0x431, 0x7, 0xcd, 0x2, 0x2, 0x431, 0x433, 0x3, 0x2, 
    0x2, 0x2, 0x432, 0x41f, 0x3, 0x2, 0x2, 0x2, 0x432, 0x42b, 0x3, 0x2, 
    0x2, 0x2, 0x433, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x434, 0x439, 0x5, 0xac, 
    0x57, 0x2, 0x435, 0x436, 0x7, 0xc9, 0x2, 0x2, 0x436, 0x438, 0x5, 0xac, 
    0x57, 0x2, 0x437, 0x435, 0x3, 0x2, 0x2, 0x2, 0x438, 0x43b, 0x3, 0x2, 
    0x2, 0x2, 0x439, 0x437, 0x3, 0x2, 0x2, 0x2, 0x439, 0x43a, 0x3, 0x2, 
    0x2, 0x2, 0x43a, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x439, 0x3, 0x2, 0x2, 
    0x2, 0x43c, 0x43e, 0x7, 0x28, 0x2, 0x2, 0x43d, 0x43c, 0x3, 0x2, 0x2, 
    0x2, 0x43d, 0x43e, 0x3, 0x2, 0x2, 0x2, 0x43e, 0x43f, 0x3, 0x2, 0x2, 
    0x2, 0x43f, 0x447, 0x5, 0xa0, 0x51, 0x2, 0x440, 0x442, 0x7, 0xc9, 0x2, 
    0x2, 0x441, 0x443, 0x7, 0x28, 0x2, 0x2, 0x442, 0x441, 0x3, 0x2, 0x2, 
    0x2, 0x442, 0x443, 0x3, 0x2, 0x2, 0x2, 0x443, 0x444, 0x3, 0x2, 0x2, 
    0x2, 0x444, 0x446, 0x5, 0xa0, 0x51, 0x2, 0x445, 0x440, 0x3, 0x2, 0x2, 
    0x2, 0x446, 0x449, 0x3, 0x2, 0x2, 0x2, 0x447, 0x445, 0x3, 0x2, 0x2, 
    0x2, 0x447, 0x448, 0x3, 0x2, 0x2, 0x2, 0x448, 0xb3, 0x3, 0x2, 0x2, 0x2, 
    0x449, 0x447, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x44f, 0x5, 0xc0, 0x61, 0x2, 
    0x44b, 0x44c, 0x7, 0xc9, 0x2, 0x2, 0x44c, 0x44e, 0x5, 0xc0, 0x61, 0x2, 
    0x44d, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x44e, 0x451, 0x3, 0x2, 0x2, 0x2, 
    0x44f, 0x44d, 0x3, 0x2, 0x2, 0x2, 0x44f, 0x450, 0x3, 0x2, 0x2, 0x2, 
    0x450, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x451, 0x44f, 0x3, 0x2, 0x2, 0x2, 0x452, 
    0x457, 0x5, 0xc0, 0x61, 0x2, 0x453, 0x454, 0x7, 0xc9, 0x2, 0x2, 0x454, 
    0x456, 0x5, 0xc0, 0x61, 0x2, 0x455, 0x453, 0x3, 0x2, 0x2, 0x2, 0x456, 
    0x459, 0x3, 0x2, 0x2, 0x2, 0x457, 0x455, 0x3, 0x2, 0x2, 0x2, 0x457, 
    0x458, 0x3, 0x2, 0x2, 0x2, 0x458, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x459, 0x457, 
    0x3, 0x2, 0x2, 0x2, 0x45a, 0x45c, 0x7, 0xc6, 0x2, 0x2, 0x45b, 0x45a, 
    0x3, 0x2, 0x2, 0x2, 0x45b, 0x45c, 0x3, 0x2, 0x2, 0x2, 0x45c, 0x45d, 
    0x3, 0x2, 0x2, 0x2, 0x45d, 0x466, 0x5, 0xc0, 0x61, 0x2, 0x45e, 0x45f, 
    0x7, 0x29, 0x2, 0x2, 0x45f, 0x460, 0x7, 0xcb, 0x2, 0x2, 0x460, 0x461, 
    0x5, 0xd4, 0x6b, 0x2, 0x461, 0x462, 0x7, 0xcd, 0x2, 0x2, 0x462, 0x466, 
    0x3, 0x2, 0x2, 0x2, 0x463, 0x464, 0x7, 0x29, 0x2, 0x2, 0x464, 0x466, 
    0x5, 0xd4, 0x6b, 0x2, 0x465, 0x45b, 0x3, 0x2, 0x2, 0x2, 0x465, 0x45e, 
    0x3, 0x2, 0x2, 0x2, 0x465, 0x463, 0x3, 0x2, 0x2, 0x2, 0x466, 0xb9, 0x3, 
    0x2, 0x2, 0x2, 0x467, 0x469, 0x7, 0xc5, 0x2, 0x2, 0x468, 0x467, 0x3, 
    0x2, 0x2, 0x2, 0x469, 0x46a, 0x3, 0x2, 0x2, 0x2, 0x46a, 0x468, 0x3, 
    0x2, 0x2, 0x2, 0x46a, 0x46b, 0x3, 0x2, 0x2, 0x2, 0x46b, 0xbb, 0x3, 0x2, 
    0x2, 0x2, 0x46c, 0x470, 0x7, 0xc9, 0x2, 0x2, 0x46d, 0x470, 0x7, 0xce, 
    0x2, 0x2, 0x46e, 0x470, 0x5, 0xba, 0x5e, 0x2, 0x46f, 0x46c, 0x3, 0x2, 
    0x2, 0x2, 0x46f, 0x46d, 0x3, 0x2, 0x2, 0x2, 0x46f, 0x46e, 0x3, 0x2, 
    0x2, 0x2, 0x470, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x471, 0x473, 0x5, 0xba, 
    0x5e, 0x2, 0x472, 0x471, 0x3, 0x2, 0x2, 0x2, 0x472, 0x473, 0x3, 0x2, 
    0x2, 0x2, 0x473, 0x475, 0x3, 0x2, 0x2, 0x2, 0x474, 0x476, 0x7, 0xce, 
    0x2, 0x2, 0x475, 0x474, 0x3, 0x2, 0x2, 0x2, 0x475, 0x476, 0x3, 0x2, 
    0x2, 0x2, 0x476, 0x477, 0x3, 0x2, 0x2, 0x2, 0x477, 0x47d, 0x5, 0xb8, 
    0x5d, 0x2, 0x478, 0x479, 0x5, 0xbc, 0x5f, 0x2, 0x479, 0x47a, 0x5, 0xb8, 
    0x5d, 0x2, 0x47a, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x47b, 0x478, 0x3, 0x2, 
    0x2, 0x2, 0x47c, 0x47f, 0x3, 0x2, 0x2, 0x2, 0x47d, 0x47b, 0x3, 0x2, 
    0x2, 0x2, 0x47d, 0x47e, 0x3, 0x2, 0x2, 0x2, 0x47e, 0x481, 0x3, 0x2, 
    0x2, 0x2, 0x47f, 0x47d, 0x3, 0x2, 0x2, 0x2, 0x480, 0x482, 0x7, 0xce, 
    0x2, 0x2, 0x481, 0x480, 0x3, 0x2, 0x2, 0x2, 0x481, 0x482, 0x3, 0x2, 
    0x2, 0x2, 0x482, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x483, 0x486, 0x5, 0xd4, 
    0x6b, 0x2, 0x484, 0x486, 0x5, 0xd0, 0x69, 0x2, 0x485, 0x483, 0x3, 0x2, 
    0x2, 0x2, 0x485, 0x484, 0x3, 0x2, 0x2, 0x2, 0x486, 0xc1, 0x3, 0x2, 0x2, 
    0x2, 0x487, 0x48e, 0x5, 0xc4, 0x63, 0x2, 0x488, 0x48e, 0x5, 0xca, 0x66, 
    0x2, 0x489, 0x48e, 0x5, 0xc6, 0x64, 0x2, 0x48a, 0x48e, 0x5, 0xc8, 0x65, 
    0x2, 0x48b, 0x48e, 0x5, 0xd6, 0x6c, 0x2, 0x48c, 0x48e, 0x5, 0xd8, 0x6d, 
    0x2, 0x48d, 0x487, 0x3, 0x2, 0x2, 0x2, 0x48d, 0x488, 0x3, 0x2, 0x2, 
    0x2, 0x48d, 0x489, 0x3, 0x2, 0x2, 0x2, 0x48d, 0x48a, 0x3, 0x2, 0x2, 
    0x2, 0x48d, 0x48b, 0x3, 0x2, 0x2, 0x2, 0x48d, 0x48c, 0x3, 0x2, 0x2, 
    0x2, 0x48e, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x491, 0x9, 0x6, 0x2, 0x2, 
    0x490, 0x48f, 0x3, 0x2, 0x2, 0x2, 0x490, 0x491, 0x3, 0x2, 0x2, 0x2, 
    0x491, 0x492, 0x3, 0x2, 0x2, 0x2, 0x492, 0x493, 0x7, 0xdc, 0x2, 0x2, 
    0x493, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x494, 0x495, 0x7, 0xda, 0x2, 0x2, 
    0x495, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x496, 0x497, 0x7, 0xdb, 0x2, 0x2, 
    0x497, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x498, 0x49a, 0x9, 0x6, 0x2, 0x2, 0x499, 
    0x498, 0x3, 0x2, 0x2, 0x2, 0x499, 0x49a, 0x3, 0x2, 0x2, 0x2, 0x49a, 
    0x49b, 0x3, 0x2, 0x2, 0x2, 0x49b, 0x49c, 0x7, 0xdd, 0x2, 0x2, 0x49c, 
    0xcb, 0x3, 0x2, 0x2, 0x2, 0x49d, 0x4d0, 0x7, 0xa1, 0x2, 0x2, 0x49e, 
    0x49f, 0x7, 0xa4, 0x2, 0x2, 0x49f, 0x4a0, 0x7, 0xcb, 0x2, 0x2, 0x4a0, 
    0x4a1, 0x5, 0xd4, 0x6b, 0x2, 0x4a1, 0x4a2, 0x7, 0xcd, 0x2, 0x2, 0x4a2, 
    0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4a3, 0x4a4, 0x7, 0xa5, 0x2, 0x2, 0x4a4, 
    0x4a5, 0x7, 0xcb, 0x2, 0x2, 0x4a5, 0x4a6, 0x5, 0xd0, 0x69, 0x2, 0x4a6, 
    0x4a7, 0x7, 0xc9, 0x2, 0x2, 0x4a7, 0x4a8, 0x5, 0xd4, 0x6b, 0x2, 0x4a8, 
    0x4a9, 0x7, 0xcd, 0x2, 0x2, 0x4a9, 0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4aa, 
    0x4ab, 0x7, 0xa6, 0x2, 0x2, 0x4ab, 0x4ac, 0x7, 0xcb, 0x2, 0x2, 0x4ac, 
    0x4ad, 0x5, 0xd0, 0x69, 0x2, 0x4ad, 0x4ae, 0x7, 0xc9, 0x2, 0x2, 0x4ae, 
    0x4af, 0x5, 0xd4, 0x6b, 0x2, 0x4af, 0x4b0, 0x7, 0xc9, 0x2, 0x2, 0x4b0, 
    0x4b1, 0x5, 0xd4, 0x6b, 0x2, 0x4b1, 0x4b2, 0x7, 0xcd, 0x2, 0x2, 0x4b2, 
    0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4b3, 0x4b4, 0x7, 0xa6, 0x2, 0x2, 0x4b4, 
    0x4b5, 0x7, 0xcb, 0x2, 0x2, 0x4b5, 0x4b6, 0x5, 0xd0, 0x69, 0x2, 0x4b6, 
    0x4b7, 0x7, 0xc9, 0x2, 0x2, 0x4b7, 0x4b8, 0x5, 0xd4, 0x6b, 0x2, 0x4b8, 
    0x4b9, 0x7, 0xcd, 0x2, 0x2, 0x4b9, 0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4ba, 
    0x4bb, 0x7, 0xa7, 0x2, 0x2, 0x4bb, 0x4bc, 0x7, 0xcb, 0x2, 0x2, 0x4bc, 
    0x4bd, 0x5, 0xd0, 0x69, 0x2, 0x4bd, 0x4be, 0x7, 0xc9, 0x2, 0x2, 0x4be, 
    0x4bf, 0x5, 0xd4, 0x6b, 0x2, 0x4bf, 0x4c0, 0x7, 0xcd, 0x2, 0x2, 0x4c0, 
    0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4c1, 0x4c2, 0x7, 0xa2, 0x2, 0x2, 0x4c2, 
    0x4d0, 0x5, 0xd4, 0x6b, 0x2, 0x4c3, 0x4c4, 0x7, 0xa2, 0x2, 0x2, 0x4c4, 
    0x4c5, 0x7, 0xc6, 0x2, 0x2, 0x4c5, 0x4d0, 0x5, 0xd4, 0x6b, 0x2, 0x4c6, 
    0x4c7, 0x7, 0xa3, 0x2, 0x2, 0x4c7, 0x4c8, 0x7, 0xcb, 0x2, 0x2, 0x4c8, 
    0x4c9, 0x5, 0xd4, 0x6b, 0x2, 0x4c9, 0x4ca, 0x7, 0xc9, 0x2, 0x2, 0x4ca, 
    0x4cb, 0x5, 0xd0, 0x69, 0x2, 0x4cb, 0x4cc, 0x7, 0xcd, 0x2, 0x2, 0x4cc, 
    0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4cd, 0x4ce, 0x7, 0x38, 0x2, 0x2, 0x4ce, 
    0x4d0, 0x5, 0xd4, 0x6b, 0x2, 0x4cf, 0x49d, 0x3, 0x2, 0x2, 0x2, 0x4cf, 
    0x49e, 0x3, 0x2, 0x2, 0x2, 0x4cf, 0x4a3, 0x3, 0x2, 0x2, 0x2, 0x4cf, 
    0x4aa, 0x3, 0x2, 0x2, 0x2, 0x4cf, 0x4b3, 0x3, 0x2, 0x2, 0x2, 0x4cf, 
    0x4ba, 0x3, 0x2, 0x2, 0x2, 0x4cf, 0x4c1, 0x3, 0x2, 0x2, 0x2, 0x4cf, 
    0x4c3, 0x3, 0x2, 0x2, 0x2, 0x4cf, 0x4c6, 0x3, 0x2, 0x2, 0x2, 0x4cf, 
    0x4cd, 0x3, 0x2, 0x2, 0x2, 0x4d0, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x4d1, 0x4d2, 
    0x7, 0xd1, 0x2, 0x2, 0x4d2, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x4d3, 0x4d4, 
    0x8, 0x69, 0x1, 0x2, 0x4d4, 0x4d5, 0x7, 0xcb, 0x2, 0x2, 0x4d5, 0x4d6, 
    0x5, 0xd0, 0x69, 0x2, 0x4d6, 0x4d7, 0x7, 0xcd, 0x2, 0x2, 0x4d7, 0x4dc, 
    0x3, 0x2, 0x2, 0x2, 0x4d8, 0x4dc, 0x5, 0xcc, 0x67, 0x2, 0x4d9, 0x4dc, 
    0x5, 0x9e, 0x50, 0x2, 0x4da, 0x4dc, 0x5, 0xce, 0x68, 0x2, 0x4db, 0x4d3, 
    0x3, 0x2, 0x2, 0x2, 0x4db, 0x4d8, 0x3, 0x2, 0x2, 0x2, 0x4db, 0x4d9, 
    0x3, 0x2, 0x2, 0x2, 0x4db, 0x4da, 0x3, 0x2, 0x2, 0x2, 0x4dc, 0x4e2, 
    0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4de, 0xc, 0x5, 0x2, 0x2, 0x4de, 0x4df, 
    0x7, 0xb8, 0x2, 0x2, 0x4df, 0x4e1, 0x5, 0xd0, 0x69, 0x6, 0x4e0, 0x4dd, 
    0x3, 0x2, 0x2, 0x2, 0x4e1, 0x4e4, 0x3, 0x2, 0x2, 0x2, 0x4e2, 0x4e0, 
    0x3, 0x2, 0x2, 0x2, 0x4e2, 0x4e3, 0x3, 0x2, 0x2, 0x2, 0x4e3, 0xd1, 0x3, 
    0x2, 0x2, 0x2, 0x4e4, 0x4e2, 0x3, 0x2, 0x2, 0x2, 0x4e5, 0x5a4, 0x7, 
    0x8e, 0x2, 0x2, 0x4e6, 0x5a4, 0x7, 0x10, 0x2, 0x2, 0x4e7, 0x5a4, 0x7, 
    0x31, 0x2, 0x2, 0x4e8, 0x5a4, 0x7, 0x8d, 0x2, 0x2, 0x4e9, 0x4ea, 0x7, 
    0xa8, 0x2, 0x2, 0x4ea, 0x4eb, 0x7, 0xcb, 0x2, 0x2, 0x4eb, 0x4ec, 0x5, 
    0xd4, 0x6b, 0x2, 0x4ec, 0x4ed, 0x7, 0xcd, 0x2, 0x2, 0x4ed, 0x5a4, 0x3, 
    0x2, 0x2, 0x2, 0x4ee, 0x5a4, 0x7, 0xa8, 0x2, 0x2, 0x4ef, 0x5a4, 0x7, 
    0xa9, 0x2, 0x2, 0x4f0, 0x5a4, 0x7, 0xaa, 0x2, 0x2, 0x4f1, 0x4f2, 0x7, 
    0x90, 0x2, 0x2, 0x4f2, 0x4f3, 0x7, 0xcb, 0x2, 0x2, 0x4f3, 0x4f4, 0x5, 
    0xd4, 0x6b, 0x2, 0x4f4, 0x4f5, 0x7, 0xcd, 0x2, 0x2, 0x4f5, 0x5a4, 0x3, 
    0x2, 0x2, 0x2, 0x4f6, 0x4f7, 0x7, 0x91, 0x2, 0x2, 0x4f7, 0x4f8, 0x7, 
    0xcb, 0x2, 0x2, 0x4f8, 0x4f9, 0x5, 0xd4, 0x6b, 0x2, 0x4f9, 0x4fa, 0x7, 
    0xcd, 0x2, 0x2, 0x4fa, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x4fb, 0x4fc, 0x7, 
    0x92, 0x2, 0x2, 0x4fc, 0x4fd, 0x7, 0xcb, 0x2, 0x2, 0x4fd, 0x4fe, 0x5, 
    0xd4, 0x6b, 0x2, 0x4fe, 0x4ff, 0x7, 0xcd, 0x2, 0x2, 0x4ff, 0x5a4, 0x3, 
    0x2, 0x2, 0x2, 0x500, 0x501, 0x7, 0x93, 0x2, 0x2, 0x501, 0x502, 0x7, 
    0xcb, 0x2, 0x2, 0x502, 0x503, 0x5, 0xd4, 0x6b, 0x2, 0x503, 0x504, 0x7, 
    0xcd, 0x2, 0x2, 0x504, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x505, 0x506, 0x7, 
    0x94, 0x2, 0x2, 0x506, 0x507, 0x7, 0xcb, 0x2, 0x2, 0x507, 0x508, 0x5, 
    0xd4, 0x6b, 0x2, 0x508, 0x509, 0x7, 0xcd, 0x2, 0x2, 0x509, 0x5a4, 0x3, 
    0x2, 0x2, 0x2, 0x50a, 0x50b, 0x7, 0x95, 0x2, 0x2, 0x50b, 0x50c, 0x7, 
    0xcb, 0x2, 0x2, 0x50c, 0x50d, 0x5, 0xd4, 0x6b, 0x2, 0x50d, 0x50e, 0x7, 
    0xcd, 0x2, 0x2, 0x50e, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x510, 0x7, 
    0x96, 0x2, 0x2, 0x510, 0x511, 0x7, 0xcb, 0x2, 0x2, 0x511, 0x512, 0x5, 
    0xd4, 0x6b, 0x2, 0x512, 0x513, 0x7, 0xcd, 0x2, 0x2, 0x513, 0x5a4, 0x3, 
    0x2, 0x2, 0x2, 0x514, 0x515, 0x7, 0x97, 0x2, 0x2, 0x515, 0x516, 0x7, 
    0xcb, 0x2, 0x2, 0x516, 0x517, 0x5, 0xd4, 0x6b, 0x2, 0x517, 0x518, 0x7, 
    0xcd, 0x2, 0x2, 0x518, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x519, 0x51a, 0x7, 
    0x98, 0x2, 0x2, 0x51a, 0x51b, 0x7, 0xcb, 0x2, 0x2, 0x51b, 0x51c, 0x5, 
    0xd4, 0x6b, 0x2, 0x51c, 0x51d, 0x7, 0xcd, 0x2, 0x2, 0x51d, 0x5a4, 0x3, 
    0x2, 0x2, 0x2, 0x51e, 0x51f, 0x7, 0x99, 0x2, 0x2, 0x51f, 0x520, 0x7, 
    0xcb, 0x2, 0x2, 0x520, 0x521, 0x5, 0xd4, 0x6b, 0x2, 0x521, 0x522, 0x7, 
    0xcd, 0x2, 0x2, 0x522, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x523, 0x524, 0x7, 
    0x9a, 0x2, 0x2, 0x524, 0x525, 0x7, 0xcb, 0x2, 0x2, 0x525, 0x526, 0x5, 
    0xd4, 0x6b, 0x2, 0x526, 0x527, 0x7, 0xcd, 0x2, 0x2, 0x527, 0x5a4, 0x3, 
    0x2, 0x2, 0x2, 0x528, 0x529, 0x7, 0x9b, 0x2, 0x2, 0x529, 0x52a, 0x7, 
    0xcb, 0x2, 0x2, 0x52a, 0x52b, 0x5, 0xd4, 0x6b, 0x2, 0x52b, 0x52c, 0x7, 
    0xcd, 0x2, 0x2, 0x52c, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x52d, 0x52e, 0x7, 
    0x8f, 0x2, 0x2, 0x52e, 0x52f, 0x7, 0xcb, 0x2, 0x2, 0x52f, 0x530, 0x5, 
    0xd4, 0x6b, 0x2, 0x530, 0x531, 0x7, 0xcd, 0x2, 0x2, 0x531, 0x5a4, 0x3, 
    0x2, 0x2, 0x2, 0x532, 0x533, 0x7, 0x9c, 0x2, 0x2, 0x533, 0x534, 0x7, 
    0xcb, 0x2, 0x2, 0x534, 0x535, 0x5, 0xd4, 0x6b, 0x2, 0x535, 0x536, 0x7, 
    0xcd, 0x2, 0x2, 0x536, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x537, 0x5a4, 0x7, 
    0x39, 0x2, 0x2, 0x538, 0x539, 0x7, 0x37, 0x2, 0x2, 0x539, 0x53a, 0x7, 
    0xcb, 0x2, 0x2, 0x53a, 0x53b, 0x5, 0xd4, 0x6b, 0x2, 0x53b, 0x53c, 0x7, 
    0xcd, 0x2, 0x2, 0x53c, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x53d, 0x53e, 0x7, 
    0x17, 0x2, 0x2, 0x53e, 0x53f, 0x7, 0xcb, 0x2, 0x2, 0x53f, 0x540, 0x5, 
    0xd4, 0x6b, 0x2, 0x540, 0x541, 0x7, 0xcd, 0x2, 0x2, 0x541, 0x5a4, 0x3, 
    0x2, 0x2, 0x2, 0x542, 0x543, 0x7, 0x12, 0x2, 0x2, 0x543, 0x544, 0x7, 
    0xcb, 0x2, 0x2, 0x544, 0x545, 0x5, 0xd4, 0x6b, 0x2, 0x545, 0x546, 0x7, 
    0xcd, 0x2, 0x2, 0x546, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x547, 0x5a4, 0x7, 
    0x86, 0x2, 0x2, 0x548, 0x5a4, 0x7, 0x87, 0x2, 0x2, 0x549, 0x54a, 0x7, 
    0x85, 0x2, 0x2, 0x54a, 0x54b, 0x7, 0xcb, 0x2, 0x2, 0x54b, 0x54c, 0x5, 
    0xd4, 0x6b, 0x2, 0x54c, 0x54d, 0x7, 0xc9, 0x2, 0x2, 0x54d, 0x54e, 0x5, 
    0xd4, 0x6b, 0x2, 0x54e, 0x54f, 0x7, 0xcd, 0x2, 0x2, 0x54f, 0x5a4, 0x3, 
    0x2, 0x2, 0x2, 0x550, 0x551, 0x7, 0x7a, 0x2, 0x2, 0x551, 0x552, 0x7, 
    0xcb, 0x2, 0x2, 0x552, 0x553, 0x5, 0xd4, 0x6b, 0x2, 0x553, 0x554, 0x7, 
    0xc9, 0x2, 0x2, 0x554, 0x555, 0x5, 0xd4, 0x6b, 0x2, 0x555, 0x556, 0x7, 
    0xc9, 0x2, 0x2, 0x556, 0x557, 0x5, 0xd4, 0x6b, 0x2, 0x557, 0x558, 0x7, 
    0xcd, 0x2, 0x2, 0x558, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x559, 0x55a, 0x7, 
    0x82, 0x2, 0x2, 0x55a, 0x5a4, 0x5, 0xd0, 0x69, 0x2, 0x55b, 0x55c, 0x7, 
    0x7c, 0x2, 0x2, 0x55c, 0x55d, 0x5, 0xd4, 0x6b, 0x2, 0x55d, 0x55e, 0x7, 
    0xc9, 0x2, 0x2, 0x55e, 0x55f, 0x5, 0xd4, 0x6b, 0x2, 0x55f, 0x5a4, 0x3, 
    0x2, 0x2, 0x2, 0x560, 0x561, 0x7, 0x65, 0x2, 0x2, 0x561, 0x562, 0x5, 
    0xaa, 0x56, 0x2, 0x562, 0x563, 0x7, 0xc9, 0x2, 0x2, 0x563, 0x564, 0x5, 
    0xaa, 0x56, 0x2, 0x564, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x565, 0x566, 0x7, 
    0x66, 0x2, 0x2, 0x566, 0x567, 0x5, 0xd4, 0x6b, 0x2, 0x567, 0x568, 0x7, 
    0xc9, 0x2, 0x2, 0x568, 0x569, 0x5, 0xd4, 0x6b, 0x2, 0x569, 0x56a, 0x7, 
    0xc9, 0x2, 0x2, 0x56a, 0x56b, 0x5, 0xd4, 0x6b, 0x2, 0x56b, 0x56c, 0x7, 
    0xc9, 0x2, 0x2, 0x56c, 0x56d, 0x5, 0xd4, 0x6b, 0x2, 0x56d, 0x56e, 0x7, 
    0xc9, 0x2, 0x2, 0x56e, 0x56f, 0x5, 0xd4, 0x6b, 0x2, 0x56f, 0x570, 0x7, 
    0xc9, 0x2, 0x2, 0x570, 0x571, 0x5, 0xd4, 0x6b, 0x2, 0x571, 0x572, 0x7, 
    0xc9, 0x2, 0x2, 0x572, 0x573, 0x5, 0xd4, 0x6b, 0x2, 0x573, 0x574, 0x7, 
    0xc9, 0x2, 0x2, 0x574, 0x575, 0x5, 0xd4, 0x6b, 0x2, 0x575, 0x576, 0x7, 
    0xc9, 0x2, 0x2, 0x576, 0x577, 0x9, 0x7, 0x2, 0x2, 0x577, 0x5a4, 0x3, 
    0x2, 0x2, 0x2, 0x578, 0x579, 0x7, 0x6b, 0x2, 0x2, 0x579, 0x5a4, 0x5, 
    0xd4, 0x6b, 0x2, 0x57a, 0x57b, 0x7, 0x6e, 0x2, 0x2, 0x57b, 0x5a4, 0x5, 
    0xd4, 0x6b, 0x2, 0x57c, 0x57d, 0x7, 0x71, 0x2, 0x2, 0x57d, 0x57e, 0x7, 
    0xcb, 0x2, 0x2, 0x57e, 0x57f, 0x5, 0xd0, 0x69, 0x2, 0x57f, 0x580, 0x7, 
    0xcd, 0x2, 0x2, 0x580, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x581, 0x582, 0x7, 
    0x72, 0x2, 0x2, 0x582, 0x583, 0x7, 0xcb, 0x2, 0x2, 0x583, 0x584, 0x5, 
    0xd0, 0x69, 0x2, 0x584, 0x585, 0x7, 0xcd, 0x2, 0x2, 0x585, 0x5a4, 0x3, 
    0x2, 0x2, 0x2, 0x586, 0x587, 0x7, 0x73, 0x2, 0x2, 0x587, 0x588, 0x7, 
    0xcb, 0x2, 0x2, 0x588, 0x589, 0x5, 0xd0, 0x69, 0x2, 0x589, 0x58a, 0x7, 
    0xcd, 0x2, 0x2, 0x58a, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x58c, 0x7, 
    0x74, 0x2, 0x2, 0x58c, 0x5a4, 0x5, 0xd4, 0x6b, 0x2, 0x58d, 0x58e, 0x7, 
    0x9d, 0x2, 0x2, 0x58e, 0x5a4, 0x5, 0xd0, 0x69, 0x2, 0x58f, 0x590, 0x7, 
    0x9e, 0x2, 0x2, 0x590, 0x5a4, 0x5, 0xd0, 0x69, 0x2, 0x591, 0x592, 0x7, 
    0x9f, 0x2, 0x2, 0x592, 0x593, 0x7, 0xcb, 0x2, 0x2, 0x593, 0x594, 0x5, 
    0xd0, 0x69, 0x2, 0x594, 0x595, 0x7, 0xc9, 0x2, 0x2, 0x595, 0x596, 0x5, 
    0xd0, 0x69, 0x2, 0x596, 0x597, 0x7, 0xcd, 0x2, 0x2, 0x597, 0x5a4, 0x3, 
    0x2, 0x2, 0x2, 0x598, 0x599, 0x7, 0x9f, 0x2, 0x2, 0x599, 0x59a, 0x7, 
    0xcb, 0x2, 0x2, 0x59a, 0x59b, 0x5, 0xd0, 0x69, 0x2, 0x59b, 0x59c, 0x7, 
    0xc9, 0x2, 0x2, 0x59c, 0x59d, 0x5, 0xd0, 0x69, 0x2, 0x59d, 0x59e, 0x7, 
    0xc9, 0x2, 0x2, 0x59e, 0x59f, 0x5, 0xd4, 0x6b, 0x2, 0x59f, 0x5a0, 0x7, 
    0xcd, 0x2, 0x2, 0x5a0, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0x5a1, 0x5a2, 0x7, 
    0xa0, 0x2, 0x2, 0x5a2, 0x5a4, 0x5, 0xd0, 0x69, 0x2, 0x5a3, 0x4e5, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x4e6, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x4e7, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x4e8, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x4e9, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x4ee, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x4ef, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x4f0, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x4f1, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x4f6, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x4fb, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x500, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x505, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x50a, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x50f, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x514, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x519, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x51e, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x523, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x528, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x52d, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x532, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x537, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x538, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x53d, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x542, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x547, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x548, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x549, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x550, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x559, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x55b, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x560, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x565, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x578, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x57a, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x57c, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x581, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x586, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x58b, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x58d, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x58f, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x591, 0x3, 
    0x2, 0x2, 0x2, 0x5a3, 0x598, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x5a1, 0x3, 
    0x2, 0x2, 0x2, 0x5a4, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x5a5, 0x5a6, 0x8, 0x6b, 
    0x1, 0x2, 0x5a6, 0x5b6, 0x5, 0x9c, 0x4f, 0x2, 0x5a7, 0x5b6, 0x5, 0xc2, 
    0x62, 0x2, 0x5a8, 0x5a9, 0x7, 0xcb, 0x2, 0x2, 0x5a9, 0x5aa, 0x5, 0xd4, 
    0x6b, 0x2, 0x5aa, 0x5ab, 0x7, 0xcd, 0x2, 0x2, 0x5ab, 0x5b6, 0x3, 0x2, 
    0x2, 0x2, 0x5ac, 0x5ad, 0x7, 0xb9, 0x2, 0x2, 0x5ad, 0x5b6, 0x5, 0xd4, 
    0x6b, 0xd, 0x5ae, 0x5af, 0x7, 0xb1, 0x2, 0x2, 0x5af, 0x5b6, 0x5, 0xd4, 
    0x6b, 0xc, 0x5b0, 0x5b6, 0x5, 0xd2, 0x6a, 0x2, 0x5b1, 0x5b2, 0x5, 0xd0, 
    0x69, 0x2, 0x5b2, 0x5b3, 0x9, 0x8, 0x2, 0x2, 0x5b3, 0x5b4, 0x5, 0xd0, 
    0x69, 0x2, 0x5b4, 0x5b6, 0x3, 0x2, 0x2, 0x2, 0x5b5, 0x5a5, 0x3, 0x2, 
    0x2, 0x2, 0x5b5, 0x5a7, 0x3, 0x2, 0x2, 0x2, 0x5b5, 0x5a8, 0x3, 0x2, 
    0x2, 0x2, 0x5b5, 0x5ac, 0x3, 0x2, 0x2, 0x2, 0x5b5, 0x5ae, 0x3, 0x2, 
    0x2, 0x2, 0x5b5, 0x5b0, 0x3, 0x2, 0x2, 0x2, 0x5b5, 0x5b1, 0x3, 0x2, 
    0x2, 0x2, 0x5b6, 0x5ce, 0x3, 0x2, 0x2, 0x2, 0x5b7, 0x5b8, 0xc, 0xa, 
    0x2, 0x2, 0x5b8, 0x5b9, 0x7, 0xb7, 0x2, 0x2, 0x5b9, 0x5cd, 0x5, 0xd4, 
    0x6b, 0xa, 0x5ba, 0x5bb, 0xc, 0x9, 0x2, 0x2, 0x5bb, 0x5bc, 0x9, 0x9, 
    0x2, 0x2, 0x5bc, 0x5cd, 0x5, 0xd4, 0x6b, 0xa, 0x5bd, 0x5be, 0xc, 0x8, 
    0x2, 0x2, 0x5be, 0x5bf, 0x9, 0xa, 0x2, 0x2, 0x5bf, 0x5cd, 0x5, 0xd4, 
    0x6b, 0x9, 0x5c0, 0x5c1, 0xc, 0x7, 0x2, 0x2, 0x5c1, 0x5c2, 0x9, 0x6, 
    0x2, 0x2, 0x5c2, 0x5cd, 0x5, 0xd4, 0x6b, 0x8, 0x5c3, 0x5c4, 0xc, 0x6, 
    0x2, 0x2, 0x5c4, 0x5c5, 0x9, 0xb, 0x2, 0x2, 0x5c5, 0x5cd, 0x5, 0xd4, 
    0x6b, 0x7, 0x5c6, 0x5c7, 0xc, 0x5, 0x2, 0x2, 0x5c7, 0x5c8, 0x9, 0x8, 
    0x2, 0x2, 0x5c8, 0x5cd, 0x5, 0xd4, 0x6b, 0x6, 0x5c9, 0x5ca, 0xc, 0x3, 
    0x2, 0x2, 0x5ca, 0x5cb, 0x9, 0xc, 0x2, 0x2, 0x5cb, 0x5cd, 0x5, 0xd4, 
    0x6b, 0x4, 0x5cc, 0x5b7, 0x3, 0x2, 0x2, 0x2, 0x5cc, 0x5ba, 0x3, 0x2, 
    0x2, 0x2, 0x5cc, 0x5bd, 0x3, 0x2, 0x2, 0x2, 0x5cc, 0x5c0, 0x3, 0x2, 
    0x2, 0x2, 0x5cc, 0x5c3, 0x3, 0x2, 0x2, 0x2, 0x5cc, 0x5c6, 0x3, 0x2, 
    0x2, 0x2, 0x5cc, 0x5c9, 0x3, 0x2, 0x2, 0x2, 0x5cd, 0x5d0, 0x3, 0x2, 
    0x2, 0x2, 0x5ce, 0x5cc, 0x3, 0x2, 0x2, 0x2, 0x5ce, 0x5cf, 0x3, 0x2, 
    0x2, 0x2, 0x5cf, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x5d0, 0x5ce, 0x3, 0x2, 0x2, 
    0x2, 0x5d1, 0x5d2, 0x9, 0xd, 0x2, 0x2, 0x5d2, 0xd7, 0x3, 0x2, 0x2, 0x2, 
    0x5d3, 0x5d4, 0x9, 0xe, 0x2, 0x2, 0x5d4, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0xdd, 0xe4, 0xe7, 0xeb, 0xf0, 0xf3, 0xf7, 0xfc, 0x102, 0x108, 0x10b, 
    0x115, 0x131, 0x13c, 0x140, 0x14d, 0x151, 0x159, 0x160, 0x166, 0x16b, 
    0x173, 0x178, 0x17e, 0x187, 0x18b, 0x191, 0x19a, 0x1a1, 0x1aa, 0x1b3, 
    0x1ba, 0x1bc, 0x1bf, 0x1c7, 0x1ca, 0x1d6, 0x1df, 0x1e9, 0x1ff, 0x215, 
    0x21b, 0x221, 0x250, 0x257, 0x26a, 0x28c, 0x299, 0x2a4, 0x2b4, 0x2c7, 
    0x2e5, 0x316, 0x383, 0x38d, 0x392, 0x39b, 0x3a4, 0x3b7, 0x3bd, 0x3c8, 
    0x3cf, 0x3e0, 0x3e3, 0x3e8, 0x3ec, 0x3fc, 0x402, 0x41d, 0x426, 0x432, 
    0x439, 0x43d, 0x442, 0x447, 0x44f, 0x457, 0x45b, 0x465, 0x46a, 0x46f, 
    0x472, 0x475, 0x47d, 0x481, 0x485, 0x48d, 0x490, 0x499, 0x4cf, 0x4db, 
    0x4e2, 0x5a3, 0x5b5, 0x5cc, 0x5ce, 
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
