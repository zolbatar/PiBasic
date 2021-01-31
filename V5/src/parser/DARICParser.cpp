
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
    setState(51); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(50);
      line();
      setState(53); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << DARICParser::LET)
      | (1ULL << DARICParser::PRINT)
      | (1ULL << DARICParser::REM)
      | (1ULL << DARICParser::COMMENT)
      | (1ULL << DARICParser::LETTERS)
      | (1ULL << DARICParser::NUMBER))) != 0));
    setState(55);
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
    setState(84);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::LET:
      case DARICParser::PRINT:
      case DARICParser::REM:
      case DARICParser::COMMENT:
      case DARICParser::LETTERS: {
        enterOuterAlt(_localctx, 1);
        setState(68);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case DARICParser::LET:
          case DARICParser::PRINT:
          case DARICParser::LETTERS: {
            setState(57);
            stmt();
            setState(64);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == DARICParser::COLON) {
              setState(58);
              match(DARICParser::COLON);
              setState(60);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
              case 1: {
                setState(59);
                stmt();
                break;
              }

              default:
                break;
              }
              setState(66);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            break;
          }

          case DARICParser::REM:
          case DARICParser::COMMENT: {
            setState(67);
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
        setState(70);
        linenumber();
        setState(82);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case DARICParser::LET:
          case DARICParser::PRINT:
          case DARICParser::LETTERS: {
            setState(71);
            stmt();
            setState(78);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == DARICParser::COLON) {
              setState(72);
              match(DARICParser::COLON);
              setState(74);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
              case 1: {
                setState(73);
                stmt();
                break;
              }

              default:
                break;
              }
              setState(80);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            break;
          }

          case DARICParser::REM:
          case DARICParser::COMMENT: {
            setState(81);
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
    setState(86);
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
    setState(96);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::LET:
      case DARICParser::LETTERS: {
        enterOuterAlt(_localctx, 1);
        setState(89);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DARICParser::LET) {
          setState(88);
          match(DARICParser::LET);
        }
        setState(91);
        varAssign();
        break;
      }

      case DARICParser::PRINT: {
        enterOuterAlt(_localctx, 2);
        setState(92);
        match(DARICParser::PRINT);
        setState(94);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          setState(93);
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
    setState(100);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(98);
      numVar();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(99);
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
    setState(106);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(102);
      varName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(103);
      varName();
      setState(104);
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
    setState(108);
    varName();
    setState(109);
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
    setState(111);
    match(DARICParser::LETTERS);
    setState(115);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(112);
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
      setState(117);
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
    setState(118);
    var();
    setState(125);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::LPAREN) {
      setState(119);
      match(DARICParser::LPAREN);
      setState(120);
      exprList();
      setState(121);
      match(DARICParser::RPAREN);
      setState(127);
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
    setState(128);
    varDecl();
    setState(129);
    match(DARICParser::EQ);
    setState(130);
    expr();
    setState(138);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(131);
      match(DARICParser::COMMA);
      setState(132);
      varDecl();
      setState(133);
      match(DARICParser::EQ);
      setState(134);
      expr();
      setState(140);
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
    setState(141);
    varDecl();
    setState(146);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(142);
      match(DARICParser::COMMA);
      setState(143);
      varDecl();
      setState(148);
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
    setState(149);
    expr();
    setState(154);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(150);
      match(DARICParser::COMMA);
      setState(151);
      expr();
      setState(156);
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
    setState(157);
    expr();
    setState(164);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA

    || _la == DARICParser::SEMICOLON) {
      setState(158);
      _la = _input->LA(1);
      if (!(_la == DARICParser::COMMA

      || _la == DARICParser::SEMICOLON)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(160);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
      case 1: {
        setState(159);
        expr();
        break;
      }

      default:
        break;
      }
      setState(166);
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
    setState(170);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(167);
      numExpr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(168);
      numVar();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(169);
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
  enterRule(_localctx, 28, DARICParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(176);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(172);
      numberInteger();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(173);
      numberFloat();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(174);
      numberHex();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(175);
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
    setState(179);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::PLUS

    || _la == DARICParser::MINUS) {
      setState(178);
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
    setState(181);
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
  enterRule(_localctx, 32, DARICParser::RuleNumberHex);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
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
  enterRule(_localctx, 34, DARICParser::RuleNumberBinary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
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
  enterRule(_localctx, 36, DARICParser::RuleNumberFloat);
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
    setState(188);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::PLUS

    || _la == DARICParser::MINUS) {
      setState(187);
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
    setState(190);
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
  enterRule(_localctx, 38, DARICParser::RuleStrFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(DARICParser::MIDS);
    setState(193);
    match(DARICParser::LPAREN);
    setState(194);
    strExpr(0);
    setState(195);
    match(DARICParser::COMMA);
    setState(196);
    numExpr(0);
    setState(197);
    match(DARICParser::COMMA);
    setState(198);
    numExpr(0);
    setState(199);
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
  enterRule(_localctx, 40, DARICParser::RuleString);

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
  size_t startState = 42;
  enterRecursionRule(_localctx, 42, DARICParser::RuleStrExpr, precedence);

    

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
    setState(207);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::STRINGLITERAL: {
        setState(204);
        string();
        break;
      }

      case DARICParser::LETTERS: {
        setState(205);
        strVar();
        break;
      }

      case DARICParser::MIDS: {
        setState(206);
        strFunc();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(214);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StrExprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStrExpr);
        setState(209);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(210);
        match(DARICParser::PLUS);
        setState(211);
        strExpr(2); 
      }
      setState(216);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
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

tree::TerminalNode* DARICParser::NumFuncContext::RND() {
  return getToken(DARICParser::RND, 0);
}

tree::TerminalNode* DARICParser::NumFuncContext::RND0() {
  return getToken(DARICParser::RND0, 0);
}

tree::TerminalNode* DARICParser::NumFuncContext::RND1() {
  return getToken(DARICParser::RND1, 0);
}

tree::TerminalNode* DARICParser::NumFuncContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::NumExprContext* DARICParser::NumFuncContext::numExpr() {
  return getRuleContext<DARICParser::NumExprContext>(0);
}

tree::TerminalNode* DARICParser::NumFuncContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

tree::TerminalNode* DARICParser::NumFuncContext::SQR() {
  return getToken(DARICParser::SQR, 0);
}

tree::TerminalNode* DARICParser::NumFuncContext::LN() {
  return getToken(DARICParser::LN, 0);
}

tree::TerminalNode* DARICParser::NumFuncContext::LOG() {
  return getToken(DARICParser::LOG, 0);
}

tree::TerminalNode* DARICParser::NumFuncContext::EXP() {
  return getToken(DARICParser::EXP, 0);
}

tree::TerminalNode* DARICParser::NumFuncContext::ATN() {
  return getToken(DARICParser::ATN, 0);
}

tree::TerminalNode* DARICParser::NumFuncContext::TAN() {
  return getToken(DARICParser::TAN, 0);
}

tree::TerminalNode* DARICParser::NumFuncContext::COS() {
  return getToken(DARICParser::COS, 0);
}

tree::TerminalNode* DARICParser::NumFuncContext::SIN() {
  return getToken(DARICParser::SIN, 0);
}

tree::TerminalNode* DARICParser::NumFuncContext::ABS() {
  return getToken(DARICParser::ABS, 0);
}

tree::TerminalNode* DARICParser::NumFuncContext::ACS() {
  return getToken(DARICParser::ACS, 0);
}

tree::TerminalNode* DARICParser::NumFuncContext::ASN() {
  return getToken(DARICParser::ASN, 0);
}

tree::TerminalNode* DARICParser::NumFuncContext::DEG() {
  return getToken(DARICParser::DEG, 0);
}

tree::TerminalNode* DARICParser::NumFuncContext::RAD() {
  return getToken(DARICParser::RAD, 0);
}

tree::TerminalNode* DARICParser::NumFuncContext::SGN() {
  return getToken(DARICParser::SGN, 0);
}

tree::TerminalNode* DARICParser::NumFuncContext::ASC() {
  return getToken(DARICParser::ASC, 0);
}

std::vector<DARICParser::StrExprContext *> DARICParser::NumFuncContext::strExpr() {
  return getRuleContexts<DARICParser::StrExprContext>();
}

DARICParser::StrExprContext* DARICParser::NumFuncContext::strExpr(size_t i) {
  return getRuleContext<DARICParser::StrExprContext>(i);
}

tree::TerminalNode* DARICParser::NumFuncContext::LEN() {
  return getToken(DARICParser::LEN, 0);
}

tree::TerminalNode* DARICParser::NumFuncContext::INSTR() {
  return getToken(DARICParser::INSTR, 0);
}

std::vector<tree::TerminalNode *> DARICParser::NumFuncContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::NumFuncContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

tree::TerminalNode* DARICParser::NumFuncContext::VAL() {
  return getToken(DARICParser::VAL, 0);
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
  enterRule(_localctx, 44, DARICParser::RuleNumFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(332);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(217);
      match(DARICParser::PI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(218);
      match(DARICParser::RND);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(219);
      match(DARICParser::RND0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(220);
      match(DARICParser::RND1);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(221);
      match(DARICParser::RND);
      setState(222);
      match(DARICParser::LPAREN);
      setState(223);
      numExpr(0);
      setState(224);
      match(DARICParser::RPAREN);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(226);
      match(DARICParser::SQR);
      setState(227);
      match(DARICParser::LPAREN);
      setState(228);
      numExpr(0);
      setState(229);
      match(DARICParser::RPAREN);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(231);
      match(DARICParser::LN);
      setState(232);
      match(DARICParser::LPAREN);
      setState(233);
      numExpr(0);
      setState(234);
      match(DARICParser::RPAREN);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(236);
      match(DARICParser::LOG);
      setState(237);
      match(DARICParser::LPAREN);
      setState(238);
      numExpr(0);
      setState(239);
      match(DARICParser::RPAREN);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(241);
      match(DARICParser::EXP);
      setState(242);
      match(DARICParser::LPAREN);
      setState(243);
      numExpr(0);
      setState(244);
      match(DARICParser::RPAREN);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(246);
      match(DARICParser::ATN);
      setState(247);
      match(DARICParser::LPAREN);
      setState(248);
      numExpr(0);
      setState(249);
      match(DARICParser::RPAREN);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(251);
      match(DARICParser::TAN);
      setState(252);
      match(DARICParser::LPAREN);
      setState(253);
      numExpr(0);
      setState(254);
      match(DARICParser::RPAREN);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(256);
      match(DARICParser::COS);
      setState(257);
      match(DARICParser::LPAREN);
      setState(258);
      numExpr(0);
      setState(259);
      match(DARICParser::RPAREN);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(261);
      match(DARICParser::SIN);
      setState(262);
      match(DARICParser::LPAREN);
      setState(263);
      numExpr(0);
      setState(264);
      match(DARICParser::RPAREN);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(266);
      match(DARICParser::ABS);
      setState(267);
      match(DARICParser::LPAREN);
      setState(268);
      numExpr(0);
      setState(269);
      match(DARICParser::RPAREN);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(271);
      match(DARICParser::ACS);
      setState(272);
      match(DARICParser::LPAREN);
      setState(273);
      numExpr(0);
      setState(274);
      match(DARICParser::RPAREN);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(276);
      match(DARICParser::ASN);
      setState(277);
      match(DARICParser::LPAREN);
      setState(278);
      numExpr(0);
      setState(279);
      match(DARICParser::RPAREN);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(281);
      match(DARICParser::DEG);
      setState(282);
      match(DARICParser::LPAREN);
      setState(283);
      numExpr(0);
      setState(284);
      match(DARICParser::RPAREN);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(286);
      match(DARICParser::RAD);
      setState(287);
      match(DARICParser::LPAREN);
      setState(288);
      numExpr(0);
      setState(289);
      match(DARICParser::RPAREN);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(291);
      match(DARICParser::SQR);
      setState(292);
      match(DARICParser::LPAREN);
      setState(293);
      numExpr(0);
      setState(294);
      match(DARICParser::RPAREN);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(296);
      match(DARICParser::SGN);
      setState(297);
      match(DARICParser::LPAREN);
      setState(298);
      numExpr(0);
      setState(299);
      match(DARICParser::RPAREN);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(301);
      match(DARICParser::ASC);
      setState(302);
      match(DARICParser::LPAREN);
      setState(303);
      strExpr(0);
      setState(304);
      match(DARICParser::RPAREN);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(306);
      match(DARICParser::LEN);
      setState(307);
      match(DARICParser::LPAREN);
      setState(308);
      strExpr(0);
      setState(309);
      match(DARICParser::RPAREN);
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(311);
      match(DARICParser::INSTR);
      setState(312);
      match(DARICParser::LPAREN);
      setState(313);
      strExpr(0);
      setState(314);
      match(DARICParser::COMMA);
      setState(315);
      strExpr(0);
      setState(316);
      match(DARICParser::RPAREN);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(318);
      match(DARICParser::INSTR);
      setState(319);
      match(DARICParser::LPAREN);
      setState(320);
      strExpr(0);
      setState(321);
      match(DARICParser::COMMA);
      setState(322);
      strExpr(0);
      setState(323);
      match(DARICParser::COMMA);
      setState(324);
      numExpr(0);
      setState(325);
      match(DARICParser::RPAREN);
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(327);
      match(DARICParser::VAL);
      setState(328);
      match(DARICParser::LPAREN);
      setState(329);
      strExpr(0);
      setState(330);
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

DARICParser::NumberContext* DARICParser::NumExprContext::number() {
  return getRuleContext<DARICParser::NumberContext>(0);
}

DARICParser::NumFuncContext* DARICParser::NumExprContext::numFunc() {
  return getRuleContext<DARICParser::NumFuncContext>(0);
}

tree::TerminalNode* DARICParser::NumExprContext::NOT() {
  return getToken(DARICParser::NOT, 0);
}

std::vector<DARICParser::NumExprContext *> DARICParser::NumExprContext::numExpr() {
  return getRuleContexts<DARICParser::NumExprContext>();
}

DARICParser::NumExprContext* DARICParser::NumExprContext::numExpr(size_t i) {
  return getRuleContext<DARICParser::NumExprContext>(i);
}

tree::TerminalNode* DARICParser::NumExprContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
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

tree::TerminalNode* DARICParser::NumExprContext::HAT() {
  return getToken(DARICParser::HAT, 0);
}

tree::TerminalNode* DARICParser::NumExprContext::MULTIPLY() {
  return getToken(DARICParser::MULTIPLY, 0);
}

tree::TerminalNode* DARICParser::NumExprContext::DIVIDE() {
  return getToken(DARICParser::DIVIDE, 0);
}

tree::TerminalNode* DARICParser::NumExprContext::DIV() {
  return getToken(DARICParser::DIV, 0);
}

tree::TerminalNode* DARICParser::NumExprContext::MOD() {
  return getToken(DARICParser::MOD, 0);
}

tree::TerminalNode* DARICParser::NumExprContext::PLUS() {
  return getToken(DARICParser::PLUS, 0);
}

tree::TerminalNode* DARICParser::NumExprContext::MINUS() {
  return getToken(DARICParser::MINUS, 0);
}

tree::TerminalNode* DARICParser::NumExprContext::SHL() {
  return getToken(DARICParser::SHL, 0);
}

tree::TerminalNode* DARICParser::NumExprContext::SHR() {
  return getToken(DARICParser::SHR, 0);
}

tree::TerminalNode* DARICParser::NumExprContext::AND() {
  return getToken(DARICParser::AND, 0);
}

tree::TerminalNode* DARICParser::NumExprContext::OR() {
  return getToken(DARICParser::OR, 0);
}

tree::TerminalNode* DARICParser::NumExprContext::EOR() {
  return getToken(DARICParser::EOR, 0);
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
  size_t startState = 46;
  enterRecursionRule(_localctx, 46, DARICParser::RuleNumExpr, precedence);

    

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
    setState(347);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::PLUS:
      case DARICParser::MINUS:
      case DARICParser::HEXNUMBER:
      case DARICParser::BINARYNUMBER:
      case DARICParser::NUMBER:
      case DARICParser::FLOAT: {
        setState(335);
        number();
        break;
      }

      case DARICParser::PI:
      case DARICParser::SQR:
      case DARICParser::LN:
      case DARICParser::LOG:
      case DARICParser::EXP:
      case DARICParser::ATN:
      case DARICParser::TAN:
      case DARICParser::COS:
      case DARICParser::SIN:
      case DARICParser::ABS:
      case DARICParser::ACS:
      case DARICParser::ASN:
      case DARICParser::DEG:
      case DARICParser::RAD:
      case DARICParser::SGN:
      case DARICParser::ASC:
      case DARICParser::LEN:
      case DARICParser::INSTR:
      case DARICParser::VAL:
      case DARICParser::RND:
      case DARICParser::RND0:
      case DARICParser::RND1: {
        setState(336);
        numFunc();
        break;
      }

      case DARICParser::NOT: {
        setState(337);
        match(DARICParser::NOT);
        setState(338);
        numExpr(17);
        break;
      }

      case DARICParser::LPAREN: {
        setState(339);
        match(DARICParser::LPAREN);
        setState(340);
        numExpr(0);
        setState(341);
        match(DARICParser::RPAREN);
        break;
      }

      case DARICParser::MIDS:
      case DARICParser::STRINGLITERAL:
      case DARICParser::LETTERS: {
        setState(343);
        strExpr(0);
        setState(344);
        relop();
        setState(345);
        strExpr(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(394);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(392);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NumExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNumExpr);
          setState(349);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(350);
          match(DARICParser::HAT);
          setState(351);
          numExpr(15);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NumExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNumExpr);
          setState(352);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(353);
          match(DARICParser::MULTIPLY);
          setState(354);
          numExpr(15);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<NumExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNumExpr);
          setState(355);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(356);
          match(DARICParser::DIVIDE);
          setState(357);
          numExpr(14);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<NumExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNumExpr);
          setState(358);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(359);
          match(DARICParser::DIV);
          setState(360);
          numExpr(13);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<NumExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNumExpr);
          setState(361);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(362);
          match(DARICParser::MOD);
          setState(363);
          numExpr(12);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<NumExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNumExpr);
          setState(364);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(365);
          match(DARICParser::PLUS);
          setState(366);
          numExpr(11);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<NumExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNumExpr);
          setState(367);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(368);
          match(DARICParser::MINUS);
          setState(369);
          numExpr(10);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<NumExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNumExpr);
          setState(370);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(371);
          relop();
          setState(372);
          numExpr(9);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<NumExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNumExpr);
          setState(374);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(375);
          match(DARICParser::SHL);
          setState(376);
          numExpr(7);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<NumExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNumExpr);
          setState(377);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(378);
          match(DARICParser::SHR);
          setState(379);
          numExpr(6);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<NumExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNumExpr);
          setState(380);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(381);
          match(DARICParser::AND);
          setState(382);
          numExpr(5);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<NumExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNumExpr);
          setState(383);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(384);
          match(DARICParser::NOT);
          setState(385);
          numExpr(4);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<NumExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNumExpr);
          setState(386);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(387);
          match(DARICParser::OR);
          setState(388);
          numExpr(3);
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<NumExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNumExpr);
          setState(389);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(390);
          match(DARICParser::EOR);
          setState(391);
          numExpr(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(396);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
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
  enterRule(_localctx, 48, DARICParser::RuleRelop);
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
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << DARICParser::EQ)
      | (1ULL << DARICParser::NE)
      | (1ULL << DARICParser::GT)
      | (1ULL << DARICParser::GE)
      | (1ULL << DARICParser::LT)
      | (1ULL << DARICParser::LE)
      | (1ULL << DARICParser::AND)
      | (1ULL << DARICParser::OR))) != 0))) {
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
    case 21: return strExprSempred(dynamic_cast<StrExprContext *>(context), predicateIndex);
    case 23: return numExprSempred(dynamic_cast<NumExprContext *>(context), predicateIndex);

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
    case 1: return precpred(_ctx, 15);
    case 2: return precpred(_ctx, 14);
    case 3: return precpred(_ctx, 13);
    case 4: return precpred(_ctx, 12);
    case 5: return precpred(_ctx, 11);
    case 6: return precpred(_ctx, 10);
    case 7: return precpred(_ctx, 9);
    case 8: return precpred(_ctx, 8);
    case 9: return precpred(_ctx, 6);
    case 10: return precpred(_ctx, 5);
    case 11: return precpred(_ctx, 4);
    case 12: return precpred(_ctx, 3);
    case 13: return precpred(_ctx, 2);
    case 14: return precpred(_ctx, 1);

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
  "numberInteger", "numberHex", "numberBinary", "numberFloat", "strFunc", 
  "string", "strExpr", "numFunc", "numExpr", "relop"
};

std::vector<std::string> DARICParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "'='", "'<>'", "'>'", "'>='", "'<'", 
  "'<='", "", "", "", "", "", "", "'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", 
  "'>>'", "':'", "','", "'$'", "'('", "'%'", "')'", "';'", "'_'"
};

std::vector<std::string> DARICParser::_symbolicNames = {
  "", "LET", "MIDS", "PRINT", "REM", "PI", "SQR", "LN", "LOG", "EXP", "ATN", 
  "TAN", "COS", "SIN", "ABS", "ACS", "ASN", "DEG", "RAD", "SGN", "ASC", 
  "LEN", "INSTR", "VAL", "RND", "RND0", "RND1", "EQ", "NE", "GT", "GE", 
  "LT", "LE", "NOT", "AND", "OR", "EOR", "MOD", "DIV", "HAT", "PLUS", "MINUS", 
  "MULTIPLY", "DIVIDE", "SHL", "SHR", "COLON", "COMMA", "DOLLAR", "LPAREN", 
  "PERCENT", "RPAREN", "SEMICOLON", "UNDERSCORE", "COMMENT", "STRINGLITERAL", 
  "LETTERS", "HEXNUMBER", "BINARYNUMBER", "NUMBER", "FLOAT", "WS"
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
    0x3, 0x3f, 0x192, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x3, 0x2, 0x6, 0x2, 
    0x36, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x37, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x3f, 0xa, 0x3, 0x7, 0x3, 0x41, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x44, 0xb, 0x3, 0x3, 0x3, 0x5, 0x3, 0x47, 0xa, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x4d, 0xa, 0x3, 0x7, 
    0x3, 0x4f, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x52, 0xb, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x55, 0xa, 0x3, 0x5, 0x3, 0x57, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x5, 0x5, 0x5c, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 
    0x61, 0xa, 0x5, 0x5, 0x5, 0x63, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 
    0x67, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x6d, 
    0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 
    0x74, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x77, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x7e, 0xa, 0xa, 0xc, 0xa, 0xe, 
    0xa, 0x81, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x8b, 0xa, 0xb, 0xc, 0xb, 0xe, 
    0xb, 0x8e, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x93, 0xa, 
    0xc, 0xc, 0xc, 0xe, 0xc, 0x96, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x7, 0xd, 0x9b, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x9e, 0xb, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xa3, 0xa, 0xe, 0x7, 0xe, 0xa5, 0xa, 0xe, 
    0xc, 0xe, 0xe, 0xe, 0xa8, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 
    0xf, 0xad, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 
    0x10, 0xb3, 0xa, 0x10, 0x3, 0x11, 0x5, 0x11, 0xb6, 0xa, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x5, 
    0x14, 0xbf, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 
    0x17, 0xd2, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0xd7, 
    0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0xda, 0xb, 0x17, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x14f, 0xa, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 
    0x15e, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 
    0x18b, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x18e, 0xb, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x2, 0x4, 0x2c, 0x30, 0x1b, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x2, 0x7, 0x4, 
    0x2, 0x6, 0x6, 0x38, 0x38, 0x5, 0x2, 0x37, 0x37, 0x3a, 0x3a, 0x3d, 0x3d, 
    0x4, 0x2, 0x31, 0x31, 0x36, 0x36, 0x3, 0x2, 0x2a, 0x2b, 0x4, 0x2, 0x1d, 
    0x22, 0x24, 0x25, 0x2, 0x1c0, 0x2, 0x35, 0x3, 0x2, 0x2, 0x2, 0x4, 0x56, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x58, 0x3, 0x2, 0x2, 0x2, 0x8, 0x62, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x66, 0x3, 0x2, 0x2, 0x2, 0xc, 0x6c, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x10, 0x71, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x78, 0x3, 0x2, 0x2, 0x2, 0x14, 0x82, 0x3, 0x2, 0x2, 0x2, 0x16, 0x8f, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x97, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x9f, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0xac, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xb2, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x22, 0xb9, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x26, 0xbe, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0xc2, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0xd1, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x30, 0x15d, 
    0x3, 0x2, 0x2, 0x2, 0x32, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x34, 0x36, 0x5, 
    0x4, 0x3, 0x2, 0x35, 0x34, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x3, 0x2, 0x2, 
    0x2, 0x38, 0x39, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x7, 0x2, 0x2, 0x3, 
    0x3a, 0x3, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x42, 0x5, 0x8, 0x5, 0x2, 0x3c, 
    0x3e, 0x7, 0x30, 0x2, 0x2, 0x3d, 0x3f, 0x5, 0x8, 0x5, 0x2, 0x3e, 0x3d, 
    0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x41, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x41, 0x44, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x43, 0x47, 0x3, 0x2, 0x2, 0x2, 0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 
    0x45, 0x47, 0x9, 0x2, 0x2, 0x2, 0x46, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x47, 0x57, 0x3, 0x2, 0x2, 0x2, 0x48, 0x54, 
    0x5, 0x6, 0x4, 0x2, 0x49, 0x50, 0x5, 0x8, 0x5, 0x2, 0x4a, 0x4c, 0x7, 
    0x30, 0x2, 0x2, 0x4b, 0x4d, 0x5, 0x8, 0x5, 0x2, 0x4c, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4f, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x52, 0x3, 0x2, 0x2, 0x2, 
    0x50, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x53, 0x55, 
    0x9, 0x2, 0x2, 0x2, 0x54, 0x49, 0x3, 0x2, 0x2, 0x2, 0x54, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x55, 0x57, 0x3, 0x2, 0x2, 0x2, 0x56, 0x46, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x48, 0x3, 0x2, 0x2, 0x2, 0x57, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x59, 0x7, 0x3d, 0x2, 0x2, 0x59, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x5a, 0x5c, 0x7, 0x3, 0x2, 0x2, 0x5b, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5b, 
    0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x63, 
    0x5, 0x14, 0xb, 0x2, 0x5e, 0x60, 0x7, 0x5, 0x2, 0x2, 0x5f, 0x61, 0x5, 
    0x1a, 0xe, 0x2, 0x60, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 
    0x2, 0x2, 0x61, 0x63, 0x3, 0x2, 0x2, 0x2, 0x62, 0x5b, 0x3, 0x2, 0x2, 
    0x2, 0x62, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x63, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x67, 0x5, 0xc, 0x7, 0x2, 0x65, 0x67, 0x5, 0xe, 0x8, 0x2, 0x66, 
    0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x6d, 0x5, 0x10, 0x9, 0x2, 0x69, 0x6a, 0x5, 
    0x10, 0x9, 0x2, 0x6a, 0x6b, 0x7, 0x34, 0x2, 0x2, 0x6b, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0x6c, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x69, 0x3, 0x2, 0x2, 
    0x2, 0x6d, 0xd, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x5, 0x10, 0x9, 0x2, 
    0x6f, 0x70, 0x7, 0x32, 0x2, 0x2, 0x70, 0xf, 0x3, 0x2, 0x2, 0x2, 0x71, 
    0x75, 0x7, 0x3a, 0x2, 0x2, 0x72, 0x74, 0x9, 0x3, 0x2, 0x2, 0x73, 0x72, 
    0x3, 0x2, 0x2, 0x2, 0x74, 0x77, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 
    0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x77, 0x75, 0x3, 0x2, 0x2, 0x2, 0x78, 0x7f, 0x5, 0xa, 0x6, 
    0x2, 0x79, 0x7a, 0x7, 0x33, 0x2, 0x2, 0x7a, 0x7b, 0x5, 0x18, 0xd, 0x2, 
    0x7b, 0x7c, 0x7, 0x35, 0x2, 0x2, 0x7c, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7d, 
    0x79, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x81, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 
    0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x5, 0x12, 
    0xa, 0x2, 0x83, 0x84, 0x7, 0x1d, 0x2, 0x2, 0x84, 0x8c, 0x5, 0x1c, 0xf, 
    0x2, 0x85, 0x86, 0x7, 0x31, 0x2, 0x2, 0x86, 0x87, 0x5, 0x12, 0xa, 0x2, 
    0x87, 0x88, 0x7, 0x1d, 0x2, 0x2, 0x88, 0x89, 0x5, 0x1c, 0xf, 0x2, 0x89, 
    0x8b, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x85, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8e, 
    0x3, 0x2, 0x2, 0x2, 0x8c, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x3, 
    0x2, 0x2, 0x2, 0x8d, 0x15, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 
    0x2, 0x2, 0x8f, 0x94, 0x5, 0x12, 0xa, 0x2, 0x90, 0x91, 0x7, 0x31, 0x2, 
    0x2, 0x91, 0x93, 0x5, 0x12, 0xa, 0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 0x2, 
    0x93, 0x96, 0x3, 0x2, 0x2, 0x2, 0x94, 0x92, 0x3, 0x2, 0x2, 0x2, 0x94, 
    0x95, 0x3, 0x2, 0x2, 0x2, 0x95, 0x17, 0x3, 0x2, 0x2, 0x2, 0x96, 0x94, 
    0x3, 0x2, 0x2, 0x2, 0x97, 0x9c, 0x5, 0x1c, 0xf, 0x2, 0x98, 0x99, 0x7, 
    0x31, 0x2, 0x2, 0x99, 0x9b, 0x5, 0x1c, 0xf, 0x2, 0x9a, 0x98, 0x3, 0x2, 
    0x2, 0x2, 0x9b, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 
    0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa6, 0x5, 0x1c, 0xf, 0x2, 0xa0, 
    0xa2, 0x9, 0x4, 0x2, 0x2, 0xa1, 0xa3, 0x5, 0x1c, 0xf, 0x2, 0xa2, 0xa1, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa5, 0x3, 
    0x2, 0x2, 0x2, 0xa4, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa8, 0x3, 0x2, 
    0x2, 0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x3, 0x2, 0x2, 
    0x2, 0xa7, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa6, 0x3, 0x2, 0x2, 0x2, 
    0xa9, 0xad, 0x5, 0x30, 0x19, 0x2, 0xaa, 0xad, 0x5, 0xc, 0x7, 0x2, 0xab, 
    0xad, 0x5, 0x2c, 0x17, 0x2, 0xac, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaa, 
    0x3, 0x2, 0x2, 0x2, 0xac, 0xab, 0x3, 0x2, 0x2, 0x2, 0xad, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0xae, 0xb3, 0x5, 0x20, 0x11, 0x2, 0xaf, 0xb3, 0x5, 0x26, 
    0x14, 0x2, 0xb0, 0xb3, 0x5, 0x22, 0x12, 0x2, 0xb1, 0xb3, 0x5, 0x24, 
    0x13, 0x2, 0xb2, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xaf, 0x3, 0x2, 0x2, 
    0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb1, 0x3, 0x2, 0x2, 0x2, 
    0xb3, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb6, 0x9, 0x5, 0x2, 0x2, 0xb5, 
    0xb4, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 
    0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x7, 0x3d, 0x2, 0x2, 0xb8, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0xb9, 0xba, 0x7, 0x3b, 0x2, 0x2, 0xba, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0xbb, 0xbc, 0x7, 0x3c, 0x2, 0x2, 0xbc, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0xbd, 0xbf, 0x9, 0x5, 0x2, 0x2, 0xbe, 0xbd, 0x3, 0x2, 0x2, 0x2, 
    0xbe, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 
    0xc1, 0x7, 0x3e, 0x2, 0x2, 0xc1, 0x27, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 
    0x7, 0x4, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x33, 0x2, 0x2, 0xc4, 0xc5, 0x5, 
    0x2c, 0x17, 0x2, 0xc5, 0xc6, 0x7, 0x31, 0x2, 0x2, 0xc6, 0xc7, 0x5, 0x30, 
    0x19, 0x2, 0xc7, 0xc8, 0x7, 0x31, 0x2, 0x2, 0xc8, 0xc9, 0x5, 0x30, 0x19, 
    0x2, 0xc9, 0xca, 0x7, 0x35, 0x2, 0x2, 0xca, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0xcb, 0xcc, 0x7, 0x39, 0x2, 0x2, 0xcc, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xcd, 
    0xce, 0x8, 0x17, 0x1, 0x2, 0xce, 0xd2, 0x5, 0x2a, 0x16, 0x2, 0xcf, 0xd2, 
    0x5, 0xe, 0x8, 0x2, 0xd0, 0xd2, 0x5, 0x28, 0x15, 0x2, 0xd1, 0xcd, 0x3, 
    0x2, 0x2, 0x2, 0xd1, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd0, 0x3, 0x2, 
    0x2, 0x2, 0xd2, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0xc, 0x3, 0x2, 
    0x2, 0xd4, 0xd5, 0x7, 0x2a, 0x2, 0x2, 0xd5, 0xd7, 0x5, 0x2c, 0x17, 0x4, 
    0xd6, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xda, 0x3, 0x2, 0x2, 0x2, 0xd8, 
    0xd6, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xdb, 0x14f, 0x7, 
    0x7, 0x2, 0x2, 0xdc, 0x14f, 0x7, 0x1a, 0x2, 0x2, 0xdd, 0x14f, 0x7, 0x1b, 
    0x2, 0x2, 0xde, 0x14f, 0x7, 0x1c, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0x1a, 0x2, 
    0x2, 0xe0, 0xe1, 0x7, 0x33, 0x2, 0x2, 0xe1, 0xe2, 0x5, 0x30, 0x19, 0x2, 
    0xe2, 0xe3, 0x7, 0x35, 0x2, 0x2, 0xe3, 0x14f, 0x3, 0x2, 0x2, 0x2, 0xe4, 
    0xe5, 0x7, 0x8, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x33, 0x2, 0x2, 0xe6, 0xe7, 
    0x5, 0x30, 0x19, 0x2, 0xe7, 0xe8, 0x7, 0x35, 0x2, 0x2, 0xe8, 0x14f, 
    0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x9, 0x2, 0x2, 0xea, 0xeb, 0x7, 
    0x33, 0x2, 0x2, 0xeb, 0xec, 0x5, 0x30, 0x19, 0x2, 0xec, 0xed, 0x7, 0x35, 
    0x2, 0x2, 0xed, 0x14f, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x7, 0xa, 0x2, 
    0x2, 0xef, 0xf0, 0x7, 0x33, 0x2, 0x2, 0xf0, 0xf1, 0x5, 0x30, 0x19, 0x2, 
    0xf1, 0xf2, 0x7, 0x35, 0x2, 0x2, 0xf2, 0x14f, 0x3, 0x2, 0x2, 0x2, 0xf3, 
    0xf4, 0x7, 0xb, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x33, 0x2, 0x2, 0xf5, 0xf6, 
    0x5, 0x30, 0x19, 0x2, 0xf6, 0xf7, 0x7, 0x35, 0x2, 0x2, 0xf7, 0x14f, 
    0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0xc, 0x2, 0x2, 0xf9, 0xfa, 0x7, 
    0x33, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0x30, 0x19, 0x2, 0xfb, 0xfc, 0x7, 0x35, 
    0x2, 0x2, 0xfc, 0x14f, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x7, 0xd, 0x2, 
    0x2, 0xfe, 0xff, 0x7, 0x33, 0x2, 0x2, 0xff, 0x100, 0x5, 0x30, 0x19, 
    0x2, 0x100, 0x101, 0x7, 0x35, 0x2, 0x2, 0x101, 0x14f, 0x3, 0x2, 0x2, 
    0x2, 0x102, 0x103, 0x7, 0xe, 0x2, 0x2, 0x103, 0x104, 0x7, 0x33, 0x2, 
    0x2, 0x104, 0x105, 0x5, 0x30, 0x19, 0x2, 0x105, 0x106, 0x7, 0x35, 0x2, 
    0x2, 0x106, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x7, 0xf, 0x2, 
    0x2, 0x108, 0x109, 0x7, 0x33, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x30, 0x19, 
    0x2, 0x10a, 0x10b, 0x7, 0x35, 0x2, 0x2, 0x10b, 0x14f, 0x3, 0x2, 0x2, 
    0x2, 0x10c, 0x10d, 0x7, 0x10, 0x2, 0x2, 0x10d, 0x10e, 0x7, 0x33, 0x2, 
    0x2, 0x10e, 0x10f, 0x5, 0x30, 0x19, 0x2, 0x10f, 0x110, 0x7, 0x35, 0x2, 
    0x2, 0x110, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x7, 0x11, 0x2, 
    0x2, 0x112, 0x113, 0x7, 0x33, 0x2, 0x2, 0x113, 0x114, 0x5, 0x30, 0x19, 
    0x2, 0x114, 0x115, 0x7, 0x35, 0x2, 0x2, 0x115, 0x14f, 0x3, 0x2, 0x2, 
    0x2, 0x116, 0x117, 0x7, 0x12, 0x2, 0x2, 0x117, 0x118, 0x7, 0x33, 0x2, 
    0x2, 0x118, 0x119, 0x5, 0x30, 0x19, 0x2, 0x119, 0x11a, 0x7, 0x35, 0x2, 
    0x2, 0x11a, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x7, 0x13, 0x2, 
    0x2, 0x11c, 0x11d, 0x7, 0x33, 0x2, 0x2, 0x11d, 0x11e, 0x5, 0x30, 0x19, 
    0x2, 0x11e, 0x11f, 0x7, 0x35, 0x2, 0x2, 0x11f, 0x14f, 0x3, 0x2, 0x2, 
    0x2, 0x120, 0x121, 0x7, 0x14, 0x2, 0x2, 0x121, 0x122, 0x7, 0x33, 0x2, 
    0x2, 0x122, 0x123, 0x5, 0x30, 0x19, 0x2, 0x123, 0x124, 0x7, 0x35, 0x2, 
    0x2, 0x124, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x7, 0x8, 0x2, 
    0x2, 0x126, 0x127, 0x7, 0x33, 0x2, 0x2, 0x127, 0x128, 0x5, 0x30, 0x19, 
    0x2, 0x128, 0x129, 0x7, 0x35, 0x2, 0x2, 0x129, 0x14f, 0x3, 0x2, 0x2, 
    0x2, 0x12a, 0x12b, 0x7, 0x15, 0x2, 0x2, 0x12b, 0x12c, 0x7, 0x33, 0x2, 
    0x2, 0x12c, 0x12d, 0x5, 0x30, 0x19, 0x2, 0x12d, 0x12e, 0x7, 0x35, 0x2, 
    0x2, 0x12e, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 0x7, 0x16, 0x2, 
    0x2, 0x130, 0x131, 0x7, 0x33, 0x2, 0x2, 0x131, 0x132, 0x5, 0x2c, 0x17, 
    0x2, 0x132, 0x133, 0x7, 0x35, 0x2, 0x2, 0x133, 0x14f, 0x3, 0x2, 0x2, 
    0x2, 0x134, 0x135, 0x7, 0x17, 0x2, 0x2, 0x135, 0x136, 0x7, 0x33, 0x2, 
    0x2, 0x136, 0x137, 0x5, 0x2c, 0x17, 0x2, 0x137, 0x138, 0x7, 0x35, 0x2, 
    0x2, 0x138, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x7, 0x18, 0x2, 
    0x2, 0x13a, 0x13b, 0x7, 0x33, 0x2, 0x2, 0x13b, 0x13c, 0x5, 0x2c, 0x17, 
    0x2, 0x13c, 0x13d, 0x7, 0x31, 0x2, 0x2, 0x13d, 0x13e, 0x5, 0x2c, 0x17, 
    0x2, 0x13e, 0x13f, 0x7, 0x35, 0x2, 0x2, 0x13f, 0x14f, 0x3, 0x2, 0x2, 
    0x2, 0x140, 0x141, 0x7, 0x18, 0x2, 0x2, 0x141, 0x142, 0x7, 0x33, 0x2, 
    0x2, 0x142, 0x143, 0x5, 0x2c, 0x17, 0x2, 0x143, 0x144, 0x7, 0x31, 0x2, 
    0x2, 0x144, 0x145, 0x5, 0x2c, 0x17, 0x2, 0x145, 0x146, 0x7, 0x31, 0x2, 
    0x2, 0x146, 0x147, 0x5, 0x30, 0x19, 0x2, 0x147, 0x148, 0x7, 0x35, 0x2, 
    0x2, 0x148, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x7, 0x19, 0x2, 
    0x2, 0x14a, 0x14b, 0x7, 0x33, 0x2, 0x2, 0x14b, 0x14c, 0x5, 0x2c, 0x17, 
    0x2, 0x14c, 0x14d, 0x7, 0x35, 0x2, 0x2, 0x14d, 0x14f, 0x3, 0x2, 0x2, 
    0x2, 0x14e, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x14e, 0xdc, 0x3, 0x2, 0x2, 0x2, 
    0x14e, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x14e, 0xde, 0x3, 0x2, 0x2, 0x2, 0x14e, 
    0xdf, 0x3, 0x2, 0x2, 0x2, 0x14e, 0xe4, 0x3, 0x2, 0x2, 0x2, 0x14e, 0xe9, 
    0x3, 0x2, 0x2, 0x2, 0x14e, 0xee, 0x3, 0x2, 0x2, 0x2, 0x14e, 0xf3, 0x3, 
    0x2, 0x2, 0x2, 0x14e, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x14e, 0xfd, 0x3, 0x2, 
    0x2, 0x2, 0x14e, 0x102, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x107, 0x3, 0x2, 
    0x2, 0x2, 0x14e, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x111, 0x3, 0x2, 
    0x2, 0x2, 0x14e, 0x116, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x11b, 0x3, 0x2, 
    0x2, 0x2, 0x14e, 0x120, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x125, 0x3, 0x2, 
    0x2, 0x2, 0x14e, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x12f, 0x3, 0x2, 
    0x2, 0x2, 0x14e, 0x134, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x139, 0x3, 0x2, 
    0x2, 0x2, 0x14e, 0x140, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x149, 0x3, 0x2, 
    0x2, 0x2, 0x14f, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 0x8, 0x19, 
    0x1, 0x2, 0x151, 0x15e, 0x5, 0x1e, 0x10, 0x2, 0x152, 0x15e, 0x5, 0x2e, 
    0x18, 0x2, 0x153, 0x154, 0x7, 0x23, 0x2, 0x2, 0x154, 0x15e, 0x5, 0x30, 
    0x19, 0x13, 0x155, 0x156, 0x7, 0x33, 0x2, 0x2, 0x156, 0x157, 0x5, 0x30, 
    0x19, 0x2, 0x157, 0x158, 0x7, 0x35, 0x2, 0x2, 0x158, 0x15e, 0x3, 0x2, 
    0x2, 0x2, 0x159, 0x15a, 0x5, 0x2c, 0x17, 0x2, 0x15a, 0x15b, 0x5, 0x32, 
    0x1a, 0x2, 0x15b, 0x15c, 0x5, 0x2c, 0x17, 0x2, 0x15c, 0x15e, 0x3, 0x2, 
    0x2, 0x2, 0x15d, 0x150, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x152, 0x3, 0x2, 
    0x2, 0x2, 0x15d, 0x153, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x155, 0x3, 0x2, 
    0x2, 0x2, 0x15d, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x18c, 0x3, 0x2, 
    0x2, 0x2, 0x15f, 0x160, 0xc, 0x11, 0x2, 0x2, 0x160, 0x161, 0x7, 0x29, 
    0x2, 0x2, 0x161, 0x18b, 0x5, 0x30, 0x19, 0x11, 0x162, 0x163, 0xc, 0x10, 
    0x2, 0x2, 0x163, 0x164, 0x7, 0x2c, 0x2, 0x2, 0x164, 0x18b, 0x5, 0x30, 
    0x19, 0x11, 0x165, 0x166, 0xc, 0xf, 0x2, 0x2, 0x166, 0x167, 0x7, 0x2d, 
    0x2, 0x2, 0x167, 0x18b, 0x5, 0x30, 0x19, 0x10, 0x168, 0x169, 0xc, 0xe, 
    0x2, 0x2, 0x169, 0x16a, 0x7, 0x28, 0x2, 0x2, 0x16a, 0x18b, 0x5, 0x30, 
    0x19, 0xf, 0x16b, 0x16c, 0xc, 0xd, 0x2, 0x2, 0x16c, 0x16d, 0x7, 0x27, 
    0x2, 0x2, 0x16d, 0x18b, 0x5, 0x30, 0x19, 0xe, 0x16e, 0x16f, 0xc, 0xc, 
    0x2, 0x2, 0x16f, 0x170, 0x7, 0x2a, 0x2, 0x2, 0x170, 0x18b, 0x5, 0x30, 
    0x19, 0xd, 0x171, 0x172, 0xc, 0xb, 0x2, 0x2, 0x172, 0x173, 0x7, 0x2b, 
    0x2, 0x2, 0x173, 0x18b, 0x5, 0x30, 0x19, 0xc, 0x174, 0x175, 0xc, 0xa, 
    0x2, 0x2, 0x175, 0x176, 0x5, 0x32, 0x1a, 0x2, 0x176, 0x177, 0x5, 0x30, 
    0x19, 0xb, 0x177, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0xc, 0x8, 
    0x2, 0x2, 0x179, 0x17a, 0x7, 0x2e, 0x2, 0x2, 0x17a, 0x18b, 0x5, 0x30, 
    0x19, 0x9, 0x17b, 0x17c, 0xc, 0x7, 0x2, 0x2, 0x17c, 0x17d, 0x7, 0x2f, 
    0x2, 0x2, 0x17d, 0x18b, 0x5, 0x30, 0x19, 0x8, 0x17e, 0x17f, 0xc, 0x6, 
    0x2, 0x2, 0x17f, 0x180, 0x7, 0x24, 0x2, 0x2, 0x180, 0x18b, 0x5, 0x30, 
    0x19, 0x7, 0x181, 0x182, 0xc, 0x5, 0x2, 0x2, 0x182, 0x183, 0x7, 0x23, 
    0x2, 0x2, 0x183, 0x18b, 0x5, 0x30, 0x19, 0x6, 0x184, 0x185, 0xc, 0x4, 
    0x2, 0x2, 0x185, 0x186, 0x7, 0x25, 0x2, 0x2, 0x186, 0x18b, 0x5, 0x30, 
    0x19, 0x5, 0x187, 0x188, 0xc, 0x3, 0x2, 0x2, 0x188, 0x189, 0x7, 0x26, 
    0x2, 0x2, 0x189, 0x18b, 0x5, 0x30, 0x19, 0x4, 0x18a, 0x15f, 0x3, 0x2, 
    0x2, 0x2, 0x18a, 0x162, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x165, 0x3, 0x2, 
    0x2, 0x2, 0x18a, 0x168, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x16b, 0x3, 0x2, 
    0x2, 0x2, 0x18a, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x171, 0x3, 0x2, 
    0x2, 0x2, 0x18a, 0x174, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x178, 0x3, 0x2, 
    0x2, 0x2, 0x18a, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x17e, 0x3, 0x2, 
    0x2, 0x2, 0x18a, 0x181, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x184, 0x3, 0x2, 
    0x2, 0x2, 0x18a, 0x187, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18e, 0x3, 0x2, 
    0x2, 0x2, 0x18c, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18d, 0x3, 0x2, 
    0x2, 0x2, 0x18d, 0x31, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18c, 0x3, 0x2, 0x2, 
    0x2, 0x18f, 0x190, 0x9, 0x6, 0x2, 0x2, 0x190, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x37, 0x3e, 0x42, 0x46, 0x4c, 0x50, 0x54, 0x56, 0x5b, 0x60, 0x62, 
    0x66, 0x6c, 0x75, 0x7f, 0x8c, 0x94, 0x9c, 0xa2, 0xa6, 0xac, 0xb2, 0xb5, 
    0xbe, 0xd1, 0xd8, 0x14e, 0x15d, 0x18a, 0x18c, 
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
