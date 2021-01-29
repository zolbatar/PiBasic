
// Generated from C:\Users\d_dud\source\repos\PiBasic\V5\Grammar\DARIC.g4 by ANTLR 4.9.1


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
    setState(47); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(46);
      line();
      setState(49); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << DARICParser::LET)
      | (1ULL << DARICParser::PRINT)
      | (1ULL << DARICParser::REM)
      | (1ULL << DARICParser::COMMENT)
      | (1ULL << DARICParser::LETTERS)
      | (1ULL << DARICParser::NUMBER))) != 0));
    setState(51);
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

std::vector<tree::TerminalNode *> DARICParser::LineContext::COLON() {
  return getTokens(DARICParser::COLON);
}

tree::TerminalNode* DARICParser::LineContext::COLON(size_t i) {
  return getToken(DARICParser::COLON, i);
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
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(80);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::LET:
      case DARICParser::PRINT:
      case DARICParser::REM:
      case DARICParser::COMMENT:
      case DARICParser::LETTERS: {
        enterOuterAlt(_localctx, 1);
        setState(64);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case DARICParser::LET:
          case DARICParser::PRINT:
          case DARICParser::LETTERS: {
            setState(53);
            stmt();
            setState(60);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == DARICParser::COLON) {
              setState(54);
              match(DARICParser::COLON);
              setState(56);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
              case 1: {
                setState(55);
                stmt();
                break;
              }

              default:
                break;
              }
              setState(62);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            break;
          }

          case DARICParser::REM:
          case DARICParser::COMMENT: {
            setState(63);
            _la = _input->LA(1);
            if (!(_la == DARICParser::REM

            || _la == DARICParser::COMMENT)) {
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
        break;
      }

      case DARICParser::NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(66);
        linenumber();
        setState(78);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case DARICParser::LET:
          case DARICParser::PRINT:
          case DARICParser::LETTERS: {
            setState(67);
            stmt();
            setState(74);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == DARICParser::COLON) {
              setState(68);
              match(DARICParser::COLON);
              setState(70);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
              case 1: {
                setState(69);
                stmt();
                break;
              }

              default:
                break;
              }
              setState(76);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            break;
          }

          case DARICParser::REM:
          case DARICParser::COMMENT: {
            setState(77);
            _la = _input->LA(1);
            if (!(_la == DARICParser::REM

            || _la == DARICParser::COMMENT)) {
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
  enterRule(_localctx, 4, DARICParser::RuleLinenumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
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

DARICParser::VarAssignContext* DARICParser::StmtContext::varAssign() {
  return getRuleContext<DARICParser::VarAssignContext>(0);
}

tree::TerminalNode* DARICParser::StmtContext::LET() {
  return getToken(DARICParser::LET, 0);
}

tree::TerminalNode* DARICParser::StmtContext::PRINT() {
  return getToken(DARICParser::PRINT, 0);
}

DARICParser::PrintListContext* DARICParser::StmtContext::printList() {
  return getRuleContext<DARICParser::PrintListContext>(0);
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
  enterRule(_localctx, 6, DARICParser::RuleStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(92);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::LET:
      case DARICParser::LETTERS: {
        enterOuterAlt(_localctx, 1);
        setState(85);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DARICParser::LET) {
          setState(84);
          match(DARICParser::LET);
        }
        setState(87);
        varAssign();
        break;
      }

      case DARICParser::PRINT: {
        enterOuterAlt(_localctx, 2);
        setState(88);
        match(DARICParser::PRINT);
        setState(90);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          setState(89);
          printList();
          break;
        }

        default:
          break;
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
  enterRule(_localctx, 8, DARICParser::RuleVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(96);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(94);
      numVar();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(95);
      strVar();
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

//----------------- NumVarContext ------------------------------------------------------------------

DARICParser::NumVarContext::NumVarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DARICParser::VarNameContext* DARICParser::NumVarContext::varName() {
  return getRuleContext<DARICParser::VarNameContext>(0);
}

tree::TerminalNode* DARICParser::NumVarContext::PERCENT() {
  return getToken(DARICParser::PERCENT, 0);
}


size_t DARICParser::NumVarContext::getRuleIndex() const {
  return DARICParser::RuleNumVar;
}


antlrcpp::Any DARICParser::NumVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumVar(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::NumVarContext* DARICParser::numVar() {
  NumVarContext *_localctx = _tracker.createInstance<NumVarContext>(_ctx, getState());
  enterRule(_localctx, 10, DARICParser::RuleNumVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(102);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(98);
      varName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(99);
      varName();
      setState(100);
      match(DARICParser::PERCENT);
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

DARICParser::VarNameContext* DARICParser::StrVarContext::varName() {
  return getRuleContext<DARICParser::VarNameContext>(0);
}

tree::TerminalNode* DARICParser::StrVarContext::DOLLAR() {
  return getToken(DARICParser::DOLLAR, 0);
}


size_t DARICParser::StrVarContext::getRuleIndex() const {
  return DARICParser::RuleStrVar;
}


antlrcpp::Any DARICParser::StrVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStrVar(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StrVarContext* DARICParser::strVar() {
  StrVarContext *_localctx = _tracker.createInstance<StrVarContext>(_ctx, getState());
  enterRule(_localctx, 12, DARICParser::RuleStrVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    varName();
    setState(105);
    match(DARICParser::DOLLAR);
   
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

std::vector<tree::TerminalNode *> DARICParser::VarNameContext::LETTERS() {
  return getTokens(DARICParser::LETTERS);
}

tree::TerminalNode* DARICParser::VarNameContext::LETTERS(size_t i) {
  return getToken(DARICParser::LETTERS, i);
}

std::vector<tree::TerminalNode *> DARICParser::VarNameContext::NUMBER() {
  return getTokens(DARICParser::NUMBER);
}

tree::TerminalNode* DARICParser::VarNameContext::NUMBER(size_t i) {
  return getToken(DARICParser::NUMBER, i);
}

std::vector<tree::TerminalNode *> DARICParser::VarNameContext::UNDERSCORE() {
  return getTokens(DARICParser::UNDERSCORE);
}

tree::TerminalNode* DARICParser::VarNameContext::UNDERSCORE(size_t i) {
  return getToken(DARICParser::UNDERSCORE, i);
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
  enterRule(_localctx, 14, DARICParser::RuleVarName);
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
    setState(107);
    match(DARICParser::LETTERS);
    setState(111);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(108);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << DARICParser::UNDERSCORE)
          | (1ULL << DARICParser::LETTERS)
          | (1ULL << DARICParser::NUMBER))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(113);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
   
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

DARICParser::VarContext* DARICParser::VarDeclContext::var() {
  return getRuleContext<DARICParser::VarContext>(0);
}

std::vector<tree::TerminalNode *> DARICParser::VarDeclContext::LPAREN() {
  return getTokens(DARICParser::LPAREN);
}

tree::TerminalNode* DARICParser::VarDeclContext::LPAREN(size_t i) {
  return getToken(DARICParser::LPAREN, i);
}

std::vector<DARICParser::ExprListContext *> DARICParser::VarDeclContext::exprList() {
  return getRuleContexts<DARICParser::ExprListContext>();
}

DARICParser::ExprListContext* DARICParser::VarDeclContext::exprList(size_t i) {
  return getRuleContext<DARICParser::ExprListContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::VarDeclContext::RPAREN() {
  return getTokens(DARICParser::RPAREN);
}

tree::TerminalNode* DARICParser::VarDeclContext::RPAREN(size_t i) {
  return getToken(DARICParser::RPAREN, i);
}


size_t DARICParser::VarDeclContext::getRuleIndex() const {
  return DARICParser::RuleVarDecl;
}


antlrcpp::Any DARICParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::VarDeclContext* DARICParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 16, DARICParser::RuleVarDecl);
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
    setState(114);
    var();
    setState(121);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::LPAREN) {
      setState(115);
      match(DARICParser::LPAREN);
      setState(116);
      exprList();
      setState(117);
      match(DARICParser::RPAREN);
      setState(123);
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

//----------------- VarAssignContext ------------------------------------------------------------------

DARICParser::VarAssignContext::VarAssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DARICParser::VarDeclContext *> DARICParser::VarAssignContext::varDecl() {
  return getRuleContexts<DARICParser::VarDeclContext>();
}

DARICParser::VarDeclContext* DARICParser::VarAssignContext::varDecl(size_t i) {
  return getRuleContext<DARICParser::VarDeclContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::VarAssignContext::EQ() {
  return getTokens(DARICParser::EQ);
}

tree::TerminalNode* DARICParser::VarAssignContext::EQ(size_t i) {
  return getToken(DARICParser::EQ, i);
}

std::vector<DARICParser::ExprContext *> DARICParser::VarAssignContext::expr() {
  return getRuleContexts<DARICParser::ExprContext>();
}

DARICParser::ExprContext* DARICParser::VarAssignContext::expr(size_t i) {
  return getRuleContext<DARICParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::VarAssignContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::VarAssignContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}


size_t DARICParser::VarAssignContext::getRuleIndex() const {
  return DARICParser::RuleVarAssign;
}


antlrcpp::Any DARICParser::VarAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVarAssign(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::VarAssignContext* DARICParser::varAssign() {
  VarAssignContext *_localctx = _tracker.createInstance<VarAssignContext>(_ctx, getState());
  enterRule(_localctx, 18, DARICParser::RuleVarAssign);
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
    setState(124);
    varDecl();
    setState(125);
    match(DARICParser::EQ);
    setState(126);
    expr();
    setState(134);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(127);
      match(DARICParser::COMMA);
      setState(128);
      varDecl();
      setState(129);
      match(DARICParser::EQ);
      setState(130);
      expr();
      setState(136);
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
  enterRule(_localctx, 20, DARICParser::RuleVarList);
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
    setState(137);
    varDecl();
    setState(142);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(138);
      match(DARICParser::COMMA);
      setState(139);
      varDecl();
      setState(144);
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
  enterRule(_localctx, 22, DARICParser::RuleExprList);
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
    setState(145);
    expr();
    setState(150);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(146);
      match(DARICParser::COMMA);
      setState(147);
      expr();
      setState(152);
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

//----------------- PrintListContext ------------------------------------------------------------------

DARICParser::PrintListContext::PrintListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DARICParser::ExprContext *> DARICParser::PrintListContext::expr() {
  return getRuleContexts<DARICParser::ExprContext>();
}

DARICParser::ExprContext* DARICParser::PrintListContext::expr(size_t i) {
  return getRuleContext<DARICParser::ExprContext>(i);
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
  enterRule(_localctx, 24, DARICParser::RulePrintList);
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
    setState(153);
    expr();
    setState(160);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA

    || _la == DARICParser::SEMICOLON) {
      setState(154);
      _la = _input->LA(1);
      if (!(_la == DARICParser::COMMA

      || _la == DARICParser::SEMICOLON)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(156);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
      case 1: {
        setState(155);
        expr();
        break;
      }

      default:
        break;
      }
      setState(162);
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

DARICParser::NumVarContext* DARICParser::ExprContext::numVar() {
  return getRuleContext<DARICParser::NumVarContext>(0);
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
  enterRule(_localctx, 26, DARICParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(166);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(163);
      numExpr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(164);
      numVar();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(165);
      strExpr();
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
  enterRule(_localctx, 28, DARICParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(170);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(168);
      numberInteger();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(169);
      numberFloat();
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
  enterRule(_localctx, 30, DARICParser::RuleNumberInteger);
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
    setState(173);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::PLUS

    || _la == DARICParser::MINUS) {
      setState(172);
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
    setState(175);
    match(DARICParser::NUMBER);
   
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
  enterRule(_localctx, 32, DARICParser::RuleNumberFloat);
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
    setState(178);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::PLUS

    || _la == DARICParser::MINUS) {
      setState(177);
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
    setState(180);
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

tree::TerminalNode* DARICParser::StrFuncContext::MIDS() {
  return getToken(DARICParser::MIDS, 0);
}

tree::TerminalNode* DARICParser::StrFuncContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::StrExprContext* DARICParser::StrFuncContext::strExpr() {
  return getRuleContext<DARICParser::StrExprContext>(0);
}

std::vector<tree::TerminalNode *> DARICParser::StrFuncContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::StrFuncContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

std::vector<DARICParser::NumExprContext *> DARICParser::StrFuncContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::StrFuncContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::StrFuncContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}


size_t DARICParser::StrFuncContext::getRuleIndex() const {
  return DARICParser::RuleStrFunc;
}


antlrcpp::Any DARICParser::StrFuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStrFunc(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::StrFuncContext* DARICParser::strFunc() {
  StrFuncContext *_localctx = _tracker.createInstance<StrFuncContext>(_ctx, getState());
  enterRule(_localctx, 34, DARICParser::RuleStrFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    match(DARICParser::MIDS);
    setState(183);
    match(DARICParser::LPAREN);
    setState(184);
    strExpr();
    setState(185);
    match(DARICParser::COMMA);
    setState(186);
    numExpr(0);
    setState(187);
    match(DARICParser::COMMA);
    setState(188);
    numExpr(0);
    setState(189);
    match(DARICParser::RPAREN);
   
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
  enterRule(_localctx, 36, DARICParser::RuleString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(191);
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
  StrExprContext *_localctx = _tracker.createInstance<StrExprContext>(_ctx, getState());
  enterRule(_localctx, 38, DARICParser::RuleStrExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(196);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::STRINGLITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(193);
        string();
        break;
      }

      case DARICParser::LETTERS: {
        enterOuterAlt(_localctx, 2);
        setState(194);
        strVar();
        break;
      }

      case DARICParser::MIDS: {
        enterOuterAlt(_localctx, 3);
        setState(195);
        strFunc();
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

//----------------- NumFuncContext ------------------------------------------------------------------

DARICParser::NumFuncContext::NumFuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::NumFuncContext::PI() {
  return getToken(DARICParser::PI, 0);
}


size_t DARICParser::NumFuncContext::getRuleIndex() const {
  return DARICParser::RuleNumFunc;
}


antlrcpp::Any DARICParser::NumFuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumFunc(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::NumFuncContext* DARICParser::numFunc() {
  NumFuncContext *_localctx = _tracker.createInstance<NumFuncContext>(_ctx, getState());
  enterRule(_localctx, 40, DARICParser::RuleNumFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    match(DARICParser::PI);
   
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

DARICParser::NumberContext* DARICParser::NumExprContext::number() {
  return getRuleContext<DARICParser::NumberContext>(0);
}

DARICParser::NumFuncContext* DARICParser::NumExprContext::numFunc() {
  return getRuleContext<DARICParser::NumFuncContext>(0);
}

tree::TerminalNode* DARICParser::NumExprContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::NumExprContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumExprContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumExprContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

std::vector<DARICParser::StrExprContext *> DARICParser::NumExprContext::strExpr() {
  return getRuleContexts<DARICParser::StrExprContext>();
}

DARICParser::StrExprContext* DARICParser::NumExprContext::strExpr(size_t i) {
  return getRuleContext<DARICParser::StrExprContext>(i);
}

DARICParser::RelopContext* DARICParser::NumExprContext::relop() {
  return getRuleContext<DARICParser::RelopContext>(0);
}

tree::TerminalNode* DARICParser::NumExprContext::PLUS() {
  return getToken(DARICParser::PLUS, 0);
}

tree::TerminalNode* DARICParser::NumExprContext::MINUS() {
  return getToken(DARICParser::MINUS, 0);
}

tree::TerminalNode* DARICParser::NumExprContext::MULTIPLY() {
  return getToken(DARICParser::MULTIPLY, 0);
}

tree::TerminalNode* DARICParser::NumExprContext::DIVIDE() {
  return getToken(DARICParser::DIVIDE, 0);
}


size_t DARICParser::NumExprContext::getRuleIndex() const {
  return DARICParser::RuleNumExpr;
}


antlrcpp::Any DARICParser::NumExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNumExpr(this);
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
  size_t startState = 42;
  enterRecursionRule(_localctx, 42, DARICParser::RuleNumExpr, precedence);

    

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
    setState(211);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::PLUS:
      case DARICParser::MINUS:
      case DARICParser::NUMBER:
      case DARICParser::FLOAT: {
        setState(201);
        number();
        break;
      }

      case DARICParser::PI: {
        setState(202);
        numFunc();
        break;
      }

      case DARICParser::LPAREN: {
        setState(203);
        match(DARICParser::LPAREN);
        setState(204);
        numExpr(0);
        setState(205);
        match(DARICParser::RPAREN);
        break;
      }

      case DARICParser::MIDS:
      case DARICParser::STRINGLITERAL:
      case DARICParser::LETTERS: {
        setState(207);
        strExpr();
        setState(208);
        relop();
        setState(209);
        strExpr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(231);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(229);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NumExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNumExpr);
          setState(213);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(214);
          relop();
          setState(215);
          numExpr(7);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NumExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNumExpr);
          setState(217);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(218);
          match(DARICParser::PLUS);
          setState(219);
          numExpr(5);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<NumExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNumExpr);
          setState(220);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(221);
          match(DARICParser::MINUS);
          setState(222);
          numExpr(4);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<NumExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNumExpr);
          setState(223);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(224);
          match(DARICParser::MULTIPLY);
          setState(225);
          numExpr(3);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<NumExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNumExpr);
          setState(226);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(227);
          match(DARICParser::DIVIDE);
          setState(228);
          numExpr(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(233);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelopContext ------------------------------------------------------------------

DARICParser::RelopContext::RelopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::RelopContext::EQ() {
  return getToken(DARICParser::EQ, 0);
}

tree::TerminalNode* DARICParser::RelopContext::NE() {
  return getToken(DARICParser::NE, 0);
}

tree::TerminalNode* DARICParser::RelopContext::GT() {
  return getToken(DARICParser::GT, 0);
}

tree::TerminalNode* DARICParser::RelopContext::GE() {
  return getToken(DARICParser::GE, 0);
}

tree::TerminalNode* DARICParser::RelopContext::LT() {
  return getToken(DARICParser::LT, 0);
}

tree::TerminalNode* DARICParser::RelopContext::LE() {
  return getToken(DARICParser::LE, 0);
}

tree::TerminalNode* DARICParser::RelopContext::AND() {
  return getToken(DARICParser::AND, 0);
}

tree::TerminalNode* DARICParser::RelopContext::OR() {
  return getToken(DARICParser::OR, 0);
}


size_t DARICParser::RelopContext::getRuleIndex() const {
  return DARICParser::RuleRelop;
}


antlrcpp::Any DARICParser::RelopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitRelop(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::RelopContext* DARICParser::relop() {
  RelopContext *_localctx = _tracker.createInstance<RelopContext>(_ctx, getState());
  enterRule(_localctx, 44, DARICParser::RuleRelop);
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
    setState(234);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << DARICParser::AND)
      | (1ULL << DARICParser::OR)
      | (1ULL << DARICParser::EQ)
      | (1ULL << DARICParser::NE)
      | (1ULL << DARICParser::GT)
      | (1ULL << DARICParser::GE)
      | (1ULL << DARICParser::LT)
      | (1ULL << DARICParser::LE))) != 0))) {
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
    case 21: return numExprSempred(dynamic_cast<NumExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool DARICParser::numExprSempred(NumExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);
    case 3: return precpred(_ctx, 2);
    case 4: return precpred(_ctx, 1);

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
  "prog", "line", "linenumber", "stmt", "var", "numVar", "strVar", "varName", 
  "varDecl", "varAssign", "varList", "exprList", "printList", "expr", "number", 
  "numberInteger", "numberFloat", "strFunc", "string", "strExpr", "numFunc", 
  "numExpr", "relop"
};

std::vector<std::string> DARICParser::_literalNames = {
  "", "", "", "", "", "", "", "", "'='", "'<>'", "'>'", "'>='", "'<'", "'<='", 
  "'+'", "'-'", "'*'", "'/'", "':'", "','", "'$'", "'('", "'%'", "')'", 
  "';'", "'_'"
};

std::vector<std::string> DARICParser::_symbolicNames = {
  "", "AND", "LET", "MIDS", "OR", "PI", "PRINT", "REM", "EQ", "NE", "GT", 
  "GE", "LT", "LE", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "COLON", "COMMA", 
  "DOLLAR", "LPAREN", "PERCENT", "RPAREN", "SEMICOLON", "UNDERSCORE", "COMMENT", 
  "STRINGLITERAL", "LETTERS", "NUMBER", "FLOAT", "WS"
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
    0x3, 0x21, 0xef, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x3, 0x2, 0x6, 0x2, 0x32, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x33, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x3b, 0xa, 0x3, 0x7, 
    0x3, 0x3d, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x40, 0xb, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x43, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x49, 0xa, 0x3, 0x7, 0x3, 0x4b, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x4e, 
    0xb, 0x3, 0x3, 0x3, 0x5, 0x3, 0x51, 0xa, 0x3, 0x5, 0x3, 0x53, 0xa, 0x3, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x5, 0x5, 0x58, 0xa, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x5d, 0xa, 0x5, 0x5, 0x5, 0x5f, 0xa, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x5, 0x6, 0x63, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x5, 0x7, 0x69, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x9, 0x3, 0x9, 0x7, 0x9, 0x70, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x73, 0xb, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x7a, 
    0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x7d, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x87, 
    0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x8a, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x7, 0xc, 0x8f, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x92, 0xb, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x97, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 
    0x9a, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x9f, 0xa, 0xe, 
    0x7, 0xe, 0xa1, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xa4, 0xb, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xa9, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 
    0x5, 0x10, 0xad, 0xa, 0x10, 0x3, 0x11, 0x5, 0x11, 0xb0, 0xa, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x12, 0x5, 0x12, 0xb5, 0xa, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x5, 0x15, 0xc7, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0xd6, 0xa, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0xe8, 0xa, 0x17, 0xc, 0x17, 
    0xe, 0x17, 0xeb, 0xb, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x2, 0x3, 
    0x2c, 0x19, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 
    0x2, 0x7, 0x4, 0x2, 0x9, 0x9, 0x1c, 0x1c, 0x4, 0x2, 0x1b, 0x1b, 0x1e, 
    0x1f, 0x4, 0x2, 0x15, 0x15, 0x1a, 0x1a, 0x3, 0x2, 0x10, 0x11, 0x5, 0x2, 
    0x3, 0x3, 0x6, 0x6, 0xa, 0xf, 0x2, 0xfa, 0x2, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x52, 0x3, 0x2, 0x2, 0x2, 0x6, 0x54, 0x3, 0x2, 0x2, 0x2, 0x8, 0x5e, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x62, 0x3, 0x2, 0x2, 0x2, 0xc, 0x68, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x10, 0x6d, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x74, 0x3, 0x2, 0x2, 0x2, 0x14, 0x7e, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x18, 0x93, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x9b, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xa8, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xac, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x22, 0xb4, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0xb8, 0x3, 0x2, 0x2, 0x2, 0x26, 0xc1, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0xc6, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xc8, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xec, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x32, 0x5, 0x4, 0x3, 0x2, 0x31, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x7, 
    0x2, 0x2, 0x3, 0x36, 0x3, 0x3, 0x2, 0x2, 0x2, 0x37, 0x3e, 0x5, 0x8, 
    0x5, 0x2, 0x38, 0x3a, 0x7, 0x14, 0x2, 0x2, 0x39, 0x3b, 0x5, 0x8, 0x5, 
    0x2, 0x3a, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x3b, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3d, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x3f, 0x43, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3e, 0x3, 
    0x2, 0x2, 0x2, 0x41, 0x43, 0x9, 0x2, 0x2, 0x2, 0x42, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x53, 0x3, 0x2, 0x2, 
    0x2, 0x44, 0x50, 0x5, 0x6, 0x4, 0x2, 0x45, 0x4c, 0x5, 0x8, 0x5, 0x2, 
    0x46, 0x48, 0x7, 0x14, 0x2, 0x2, 0x47, 0x49, 0x5, 0x8, 0x5, 0x2, 0x48, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4b, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x46, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4e, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x4d, 0x51, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 
    0x2, 0x4f, 0x51, 0x9, 0x2, 0x2, 0x2, 0x50, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x50, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x53, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x42, 0x3, 0x2, 0x2, 0x2, 0x52, 0x44, 0x3, 0x2, 0x2, 0x2, 0x53, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x7, 0x1f, 0x2, 0x2, 0x55, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x56, 0x58, 0x7, 0x4, 0x2, 0x2, 0x57, 0x56, 0x3, 0x2, 
    0x2, 0x2, 0x57, 0x58, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x59, 0x5f, 0x5, 0x14, 0xb, 0x2, 0x5a, 0x5c, 0x7, 0x8, 0x2, 0x2, 
    0x5b, 0x5d, 0x5, 0x1a, 0xe, 0x2, 0x5c, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x57, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x63, 0x5, 0xc, 0x7, 0x2, 0x61, 0x63, 0x5, 0xe, 
    0x8, 0x2, 0x62, 0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x63, 0xb, 0x3, 0x2, 0x2, 0x2, 0x64, 0x69, 0x5, 0x10, 0x9, 0x2, 
    0x65, 0x66, 0x5, 0x10, 0x9, 0x2, 0x66, 0x67, 0x7, 0x18, 0x2, 0x2, 0x67, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x68, 0x64, 0x3, 0x2, 0x2, 0x2, 0x68, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0x69, 0xd, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x5, 
    0x10, 0x9, 0x2, 0x6b, 0x6c, 0x7, 0x16, 0x2, 0x2, 0x6c, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x6d, 0x71, 0x7, 0x1e, 0x2, 0x2, 0x6e, 0x70, 0x9, 0x3, 0x2, 
    0x2, 0x6f, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x73, 0x3, 0x2, 0x2, 0x2, 
    0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x74, 0x7b, 
    0x5, 0xa, 0x6, 0x2, 0x75, 0x76, 0x7, 0x17, 0x2, 0x2, 0x76, 0x77, 0x5, 
    0x18, 0xd, 0x2, 0x77, 0x78, 0x7, 0x19, 0x2, 0x2, 0x78, 0x7a, 0x3, 0x2, 
    0x2, 0x2, 0x79, 0x75, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7d, 0x3, 0x2, 0x2, 
    0x2, 0x7b, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 
    0x7c, 0x13, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7e, 
    0x7f, 0x5, 0x12, 0xa, 0x2, 0x7f, 0x80, 0x7, 0xa, 0x2, 0x2, 0x80, 0x88, 
    0x5, 0x1c, 0xf, 0x2, 0x81, 0x82, 0x7, 0x15, 0x2, 0x2, 0x82, 0x83, 0x5, 
    0x12, 0xa, 0x2, 0x83, 0x84, 0x7, 0xa, 0x2, 0x2, 0x84, 0x85, 0x5, 0x1c, 
    0xf, 0x2, 0x85, 0x87, 0x3, 0x2, 0x2, 0x2, 0x86, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x87, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 
    0x88, 0x89, 0x3, 0x2, 0x2, 0x2, 0x89, 0x15, 0x3, 0x2, 0x2, 0x2, 0x8a, 
    0x88, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x90, 0x5, 0x12, 0xa, 0x2, 0x8c, 0x8d, 
    0x7, 0x15, 0x2, 0x2, 0x8d, 0x8f, 0x5, 0x12, 0xa, 0x2, 0x8e, 0x8c, 0x3, 
    0x2, 0x2, 0x2, 0x8f, 0x92, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8e, 0x3, 0x2, 
    0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 0x2, 0x93, 0x98, 0x5, 0x1c, 0xf, 0x2, 
    0x94, 0x95, 0x7, 0x15, 0x2, 0x2, 0x95, 0x97, 0x5, 0x1c, 0xf, 0x2, 0x96, 
    0x94, 0x3, 0x2, 0x2, 0x2, 0x97, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x98, 0x96, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 0x99, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x9a, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9b, 0xa2, 0x5, 0x1c, 
    0xf, 0x2, 0x9c, 0x9e, 0x9, 0x4, 0x2, 0x2, 0x9d, 0x9f, 0x5, 0x1c, 0xf, 
    0x2, 0x9e, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x3, 0x2, 0x2, 0x2, 
    0x9f, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9c, 0x3, 0x2, 0x2, 0x2, 0xa1, 
    0xa4, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 
    0x3, 0x2, 0x2, 0x2, 0xa3, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 
    0x2, 0x2, 0x2, 0xa5, 0xa9, 0x5, 0x2c, 0x17, 0x2, 0xa6, 0xa9, 0x5, 0xc, 
    0x7, 0x2, 0xa7, 0xa9, 0x5, 0x28, 0x15, 0x2, 0xa8, 0xa5, 0x3, 0x2, 0x2, 
    0x2, 0xa8, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa7, 0x3, 0x2, 0x2, 0x2, 
    0xa9, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xad, 0x5, 0x20, 0x11, 0x2, 0xab, 
    0xad, 0x5, 0x22, 0x12, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xac, 0xab, 
    0x3, 0x2, 0x2, 0x2, 0xad, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xae, 0xb0, 0x9, 
    0x5, 0x2, 0x2, 0xaf, 0xae, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x3, 0x2, 
    0x2, 0x2, 0xb0, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0x1f, 0x2, 
    0x2, 0xb2, 0x21, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb5, 0x9, 0x5, 0x2, 0x2, 
    0xb4, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb5, 
    0xb6, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0x20, 0x2, 0x2, 0xb7, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x7, 0x5, 0x2, 0x2, 0xb9, 0xba, 0x7, 
    0x17, 0x2, 0x2, 0xba, 0xbb, 0x5, 0x28, 0x15, 0x2, 0xbb, 0xbc, 0x7, 0x15, 
    0x2, 0x2, 0xbc, 0xbd, 0x5, 0x2c, 0x17, 0x2, 0xbd, 0xbe, 0x7, 0x15, 0x2, 
    0x2, 0xbe, 0xbf, 0x5, 0x2c, 0x17, 0x2, 0xbf, 0xc0, 0x7, 0x19, 0x2, 0x2, 
    0xc0, 0x25, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x7, 0x1d, 0x2, 0x2, 0xc2, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc7, 0x5, 0x26, 0x14, 0x2, 0xc4, 0xc7, 
    0x5, 0xe, 0x8, 0x2, 0xc5, 0xc7, 0x5, 0x24, 0x13, 0x2, 0xc6, 0xc3, 0x3, 
    0x2, 0x2, 0x2, 0xc6, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc5, 0x3, 0x2, 
    0x2, 0x2, 0xc7, 0x29, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x7, 0x7, 0x2, 
    0x2, 0xc9, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x8, 0x17, 0x1, 0x2, 
    0xcb, 0xd6, 0x5, 0x1e, 0x10, 0x2, 0xcc, 0xd6, 0x5, 0x2a, 0x16, 0x2, 
    0xcd, 0xce, 0x7, 0x17, 0x2, 0x2, 0xce, 0xcf, 0x5, 0x2c, 0x17, 0x2, 0xcf, 
    0xd0, 0x7, 0x19, 0x2, 0x2, 0xd0, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 
    0x5, 0x28, 0x15, 0x2, 0xd2, 0xd3, 0x5, 0x2e, 0x18, 0x2, 0xd3, 0xd4, 
    0x5, 0x28, 0x15, 0x2, 0xd4, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xca, 0x3, 
    0x2, 0x2, 0x2, 0xd5, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xcd, 0x3, 0x2, 
    0x2, 0x2, 0xd5, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xe9, 0x3, 0x2, 0x2, 
    0x2, 0xd7, 0xd8, 0xc, 0x8, 0x2, 0x2, 0xd8, 0xd9, 0x5, 0x2e, 0x18, 0x2, 
    0xd9, 0xda, 0x5, 0x2c, 0x17, 0x9, 0xda, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xdb, 
    0xdc, 0xc, 0x6, 0x2, 0x2, 0xdc, 0xdd, 0x7, 0x10, 0x2, 0x2, 0xdd, 0xe8, 
    0x5, 0x2c, 0x17, 0x7, 0xde, 0xdf, 0xc, 0x5, 0x2, 0x2, 0xdf, 0xe0, 0x7, 
    0x11, 0x2, 0x2, 0xe0, 0xe8, 0x5, 0x2c, 0x17, 0x6, 0xe1, 0xe2, 0xc, 0x4, 
    0x2, 0x2, 0xe2, 0xe3, 0x7, 0x12, 0x2, 0x2, 0xe3, 0xe8, 0x5, 0x2c, 0x17, 
    0x5, 0xe4, 0xe5, 0xc, 0x3, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x13, 0x2, 0x2, 
    0xe6, 0xe8, 0x5, 0x2c, 0x17, 0x4, 0xe7, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xe7, 
    0xdb, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe1, 
    0x3, 0x2, 0x2, 0x2, 0xe7, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xeb, 0x3, 
    0x2, 0x2, 0x2, 0xe9, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x3, 0x2, 
    0x2, 0x2, 0xea, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xe9, 0x3, 0x2, 0x2, 
    0x2, 0xec, 0xed, 0x9, 0x6, 0x2, 0x2, 0xed, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x33, 0x3a, 0x3e, 0x42, 0x48, 0x4c, 0x50, 0x52, 0x57, 0x5c, 0x5e, 
    0x62, 0x68, 0x71, 0x7b, 0x88, 0x90, 0x98, 0x9e, 0xa2, 0xa8, 0xac, 0xaf, 
    0xb4, 0xc6, 0xd5, 0xe7, 0xe9, 
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
