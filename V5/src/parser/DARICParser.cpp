
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
    setState(41); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(40);
      line();
      setState(43); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << DARICParser::LET)
      | (1ULL << DARICParser::PRINT)
      | (1ULL << DARICParser::REM)
      | (1ULL << DARICParser::COMMENT)
      | (1ULL << DARICParser::LETTERS)
      | (1ULL << DARICParser::NUMBER))) != 0));
    setState(45);
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
    setState(74);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::LET:
      case DARICParser::PRINT:
      case DARICParser::REM:
      case DARICParser::COMMENT:
      case DARICParser::LETTERS: {
        enterOuterAlt(_localctx, 1);
        setState(58);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case DARICParser::LET:
          case DARICParser::PRINT:
          case DARICParser::LETTERS: {
            setState(47);
            stmt();
            setState(54);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == DARICParser::COLON) {
              setState(48);
              match(DARICParser::COLON);
              setState(50);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
              case 1: {
                setState(49);
                stmt();
                break;
              }

              default:
                break;
              }
              setState(56);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            break;
          }

          case DARICParser::REM:
          case DARICParser::COMMENT: {
            setState(57);
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
        setState(60);
        linenumber();
        setState(72);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case DARICParser::LET:
          case DARICParser::PRINT:
          case DARICParser::LETTERS: {
            setState(61);
            stmt();
            setState(68);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == DARICParser::COLON) {
              setState(62);
              match(DARICParser::COLON);
              setState(64);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
              case 1: {
                setState(63);
                stmt();
                break;
              }

              default:
                break;
              }
              setState(70);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            break;
          }

          case DARICParser::REM:
          case DARICParser::COMMENT: {
            setState(71);
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
    setState(76);
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

DARICParser::VariableassignmentContext* DARICParser::StmtContext::variableassignment() {
  return getRuleContext<DARICParser::VariableassignmentContext>(0);
}

tree::TerminalNode* DARICParser::StmtContext::LET() {
  return getToken(DARICParser::LET, 0);
}

tree::TerminalNode* DARICParser::StmtContext::PRINT() {
  return getToken(DARICParser::PRINT, 0);
}

DARICParser::PrintlistContext* DARICParser::StmtContext::printlist() {
  return getRuleContext<DARICParser::PrintlistContext>(0);
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
    setState(86);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::LET:
      case DARICParser::LETTERS: {
        enterOuterAlt(_localctx, 1);
        setState(79);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DARICParser::LET) {
          setState(78);
          match(DARICParser::LET);
        }
        setState(81);
        variableassignment();
        break;
      }

      case DARICParser::PRINT: {
        enterOuterAlt(_localctx, 2);
        setState(82);
        match(DARICParser::PRINT);
        setState(84);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          setState(83);
          printlist();
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

DARICParser::Num_varContext* DARICParser::VarContext::num_var() {
  return getRuleContext<DARICParser::Num_varContext>(0);
}

DARICParser::Str_varContext* DARICParser::VarContext::str_var() {
  return getRuleContext<DARICParser::Str_varContext>(0);
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
    setState(90);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(88);
      num_var();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(89);
      str_var();
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

//----------------- Num_varContext ------------------------------------------------------------------

DARICParser::Num_varContext::Num_varContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DARICParser::VarnameContext* DARICParser::Num_varContext::varname() {
  return getRuleContext<DARICParser::VarnameContext>(0);
}

tree::TerminalNode* DARICParser::Num_varContext::PERCENT() {
  return getToken(DARICParser::PERCENT, 0);
}


size_t DARICParser::Num_varContext::getRuleIndex() const {
  return DARICParser::RuleNum_var;
}


antlrcpp::Any DARICParser::Num_varContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNum_var(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::Num_varContext* DARICParser::num_var() {
  Num_varContext *_localctx = _tracker.createInstance<Num_varContext>(_ctx, getState());
  enterRule(_localctx, 10, DARICParser::RuleNum_var);

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(92);
      varname();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(93);
      varname();
      setState(94);
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

//----------------- Str_varContext ------------------------------------------------------------------

DARICParser::Str_varContext::Str_varContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DARICParser::VarnameContext* DARICParser::Str_varContext::varname() {
  return getRuleContext<DARICParser::VarnameContext>(0);
}

tree::TerminalNode* DARICParser::Str_varContext::DOLLAR() {
  return getToken(DARICParser::DOLLAR, 0);
}


size_t DARICParser::Str_varContext::getRuleIndex() const {
  return DARICParser::RuleStr_var;
}


antlrcpp::Any DARICParser::Str_varContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStr_var(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::Str_varContext* DARICParser::str_var() {
  Str_varContext *_localctx = _tracker.createInstance<Str_varContext>(_ctx, getState());
  enterRule(_localctx, 12, DARICParser::RuleStr_var);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    varname();
    setState(99);
    match(DARICParser::DOLLAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarnameContext ------------------------------------------------------------------

DARICParser::VarnameContext::VarnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> DARICParser::VarnameContext::LETTERS() {
  return getTokens(DARICParser::LETTERS);
}

tree::TerminalNode* DARICParser::VarnameContext::LETTERS(size_t i) {
  return getToken(DARICParser::LETTERS, i);
}

std::vector<tree::TerminalNode *> DARICParser::VarnameContext::NUMBER() {
  return getTokens(DARICParser::NUMBER);
}

tree::TerminalNode* DARICParser::VarnameContext::NUMBER(size_t i) {
  return getToken(DARICParser::NUMBER, i);
}

std::vector<tree::TerminalNode *> DARICParser::VarnameContext::UNDERSCORE() {
  return getTokens(DARICParser::UNDERSCORE);
}

tree::TerminalNode* DARICParser::VarnameContext::UNDERSCORE(size_t i) {
  return getToken(DARICParser::UNDERSCORE, i);
}


size_t DARICParser::VarnameContext::getRuleIndex() const {
  return DARICParser::RuleVarname;
}


antlrcpp::Any DARICParser::VarnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVarname(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::VarnameContext* DARICParser::varname() {
  VarnameContext *_localctx = _tracker.createInstance<VarnameContext>(_ctx, getState());
  enterRule(_localctx, 14, DARICParser::RuleVarname);
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
    setState(101);
    match(DARICParser::LETTERS);
    setState(105);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(102);
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
      setState(107);
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

//----------------- VardeclContext ------------------------------------------------------------------

DARICParser::VardeclContext::VardeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DARICParser::VarContext* DARICParser::VardeclContext::var() {
  return getRuleContext<DARICParser::VarContext>(0);
}

std::vector<tree::TerminalNode *> DARICParser::VardeclContext::LPAREN() {
  return getTokens(DARICParser::LPAREN);
}

tree::TerminalNode* DARICParser::VardeclContext::LPAREN(size_t i) {
  return getToken(DARICParser::LPAREN, i);
}

std::vector<DARICParser::ExprlistContext *> DARICParser::VardeclContext::exprlist() {
  return getRuleContexts<DARICParser::ExprlistContext>();
}

DARICParser::ExprlistContext* DARICParser::VardeclContext::exprlist(size_t i) {
  return getRuleContext<DARICParser::ExprlistContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::VardeclContext::RPAREN() {
  return getTokens(DARICParser::RPAREN);
}

tree::TerminalNode* DARICParser::VardeclContext::RPAREN(size_t i) {
  return getToken(DARICParser::RPAREN, i);
}


size_t DARICParser::VardeclContext::getRuleIndex() const {
  return DARICParser::RuleVardecl;
}


antlrcpp::Any DARICParser::VardeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVardecl(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::VardeclContext* DARICParser::vardecl() {
  VardeclContext *_localctx = _tracker.createInstance<VardeclContext>(_ctx, getState());
  enterRule(_localctx, 16, DARICParser::RuleVardecl);
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
    setState(108);
    var();
    setState(115);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::LPAREN) {
      setState(109);
      match(DARICParser::LPAREN);
      setState(110);
      exprlist();
      setState(111);
      match(DARICParser::RPAREN);
      setState(117);
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

//----------------- VariableassignmentContext ------------------------------------------------------------------

DARICParser::VariableassignmentContext::VariableassignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DARICParser::VardeclContext* DARICParser::VariableassignmentContext::vardecl() {
  return getRuleContext<DARICParser::VardeclContext>(0);
}

tree::TerminalNode* DARICParser::VariableassignmentContext::EQ() {
  return getToken(DARICParser::EQ, 0);
}

DARICParser::ExprlistContext* DARICParser::VariableassignmentContext::exprlist() {
  return getRuleContext<DARICParser::ExprlistContext>(0);
}


size_t DARICParser::VariableassignmentContext::getRuleIndex() const {
  return DARICParser::RuleVariableassignment;
}


antlrcpp::Any DARICParser::VariableassignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVariableassignment(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::VariableassignmentContext* DARICParser::variableassignment() {
  VariableassignmentContext *_localctx = _tracker.createInstance<VariableassignmentContext>(_ctx, getState());
  enterRule(_localctx, 18, DARICParser::RuleVariableassignment);

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
    vardecl();
    setState(119);
    match(DARICParser::EQ);
    setState(120);
    exprlist();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarlistContext ------------------------------------------------------------------

DARICParser::VarlistContext::VarlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DARICParser::VardeclContext *> DARICParser::VarlistContext::vardecl() {
  return getRuleContexts<DARICParser::VardeclContext>();
}

DARICParser::VardeclContext* DARICParser::VarlistContext::vardecl(size_t i) {
  return getRuleContext<DARICParser::VardeclContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::VarlistContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::VarlistContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}


size_t DARICParser::VarlistContext::getRuleIndex() const {
  return DARICParser::RuleVarlist;
}


antlrcpp::Any DARICParser::VarlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitVarlist(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::VarlistContext* DARICParser::varlist() {
  VarlistContext *_localctx = _tracker.createInstance<VarlistContext>(_ctx, getState());
  enterRule(_localctx, 20, DARICParser::RuleVarlist);
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
    vardecl();
    setState(127);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(123);
      match(DARICParser::COMMA);
      setState(124);
      vardecl();
      setState(129);
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

//----------------- ExprlistContext ------------------------------------------------------------------

DARICParser::ExprlistContext::ExprlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DARICParser::ExprContext *> DARICParser::ExprlistContext::expr() {
  return getRuleContexts<DARICParser::ExprContext>();
}

DARICParser::ExprContext* DARICParser::ExprlistContext::expr(size_t i) {
  return getRuleContext<DARICParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::ExprlistContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::ExprlistContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}


size_t DARICParser::ExprlistContext::getRuleIndex() const {
  return DARICParser::RuleExprlist;
}


antlrcpp::Any DARICParser::ExprlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitExprlist(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::ExprlistContext* DARICParser::exprlist() {
  ExprlistContext *_localctx = _tracker.createInstance<ExprlistContext>(_ctx, getState());
  enterRule(_localctx, 22, DARICParser::RuleExprlist);
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
    setState(130);
    expr();
    setState(135);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(131);
      match(DARICParser::COMMA);
      setState(132);
      expr();
      setState(137);
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

//----------------- PrintlistContext ------------------------------------------------------------------

DARICParser::PrintlistContext::PrintlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<DARICParser::ExprContext *> DARICParser::PrintlistContext::expr() {
  return getRuleContexts<DARICParser::ExprContext>();
}

DARICParser::ExprContext* DARICParser::PrintlistContext::expr(size_t i) {
  return getRuleContext<DARICParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> DARICParser::PrintlistContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::PrintlistContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

std::vector<tree::TerminalNode *> DARICParser::PrintlistContext::SEMICOLON() {
  return getTokens(DARICParser::SEMICOLON);
}

tree::TerminalNode* DARICParser::PrintlistContext::SEMICOLON(size_t i) {
  return getToken(DARICParser::SEMICOLON, i);
}


size_t DARICParser::PrintlistContext::getRuleIndex() const {
  return DARICParser::RulePrintlist;
}


antlrcpp::Any DARICParser::PrintlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitPrintlist(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::PrintlistContext* DARICParser::printlist() {
  PrintlistContext *_localctx = _tracker.createInstance<PrintlistContext>(_ctx, getState());
  enterRule(_localctx, 24, DARICParser::RulePrintlist);
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
    setState(138);
    expr();
    setState(145);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA

    || _la == DARICParser::SEMICOLON) {
      setState(139);
      _la = _input->LA(1);
      if (!(_la == DARICParser::COMMA

      || _la == DARICParser::SEMICOLON)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(141);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
      case 1: {
        setState(140);
        expr();
        break;
      }

      default:
        break;
      }
      setState(147);
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

DARICParser::Num_exprContext* DARICParser::ExprContext::num_expr() {
  return getRuleContext<DARICParser::Num_exprContext>(0);
}

DARICParser::Num_varContext* DARICParser::ExprContext::num_var() {
  return getRuleContext<DARICParser::Num_varContext>(0);
}

DARICParser::Str_exprContext* DARICParser::ExprContext::str_expr() {
  return getRuleContext<DARICParser::Str_exprContext>(0);
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
    setState(151);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(148);
      num_expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(149);
      num_var();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(150);
      str_expr();
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

tree::TerminalNode* DARICParser::NumberContext::NUMBER() {
  return getToken(DARICParser::NUMBER, 0);
}

tree::TerminalNode* DARICParser::NumberContext::FLOAT() {
  return getToken(DARICParser::FLOAT, 0);
}

tree::TerminalNode* DARICParser::NumberContext::PLUS() {
  return getToken(DARICParser::PLUS, 0);
}

tree::TerminalNode* DARICParser::NumberContext::MINUS() {
  return getToken(DARICParser::MINUS, 0);
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
    setState(154);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::PLUS

    || _la == DARICParser::MINUS) {
      setState(153);
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
    setState(156);
    _la = _input->LA(1);
    if (!(_la == DARICParser::NUMBER

    || _la == DARICParser::FLOAT)) {
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

//----------------- Str_funcContext ------------------------------------------------------------------

DARICParser::Str_funcContext::Str_funcContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::Str_funcContext::MIDS() {
  return getToken(DARICParser::MIDS, 0);
}

tree::TerminalNode* DARICParser::Str_funcContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

DARICParser::Str_exprContext* DARICParser::Str_funcContext::str_expr() {
  return getRuleContext<DARICParser::Str_exprContext>(0);
}

std::vector<tree::TerminalNode *> DARICParser::Str_funcContext::COMMA() {
  return getTokens(DARICParser::COMMA);
}

tree::TerminalNode* DARICParser::Str_funcContext::COMMA(size_t i) {
  return getToken(DARICParser::COMMA, i);
}

std::vector<DARICParser::Num_exprContext *> DARICParser::Str_funcContext::num_expr() {
  return getRuleContexts<DARICParser::Num_exprContext>();
}

DARICParser::Num_exprContext* DARICParser::Str_funcContext::num_expr(size_t i) {
  return getRuleContext<DARICParser::Num_exprContext>(i);
}

tree::TerminalNode* DARICParser::Str_funcContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}


size_t DARICParser::Str_funcContext::getRuleIndex() const {
  return DARICParser::RuleStr_func;
}


antlrcpp::Any DARICParser::Str_funcContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStr_func(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::Str_funcContext* DARICParser::str_func() {
  Str_funcContext *_localctx = _tracker.createInstance<Str_funcContext>(_ctx, getState());
  enterRule(_localctx, 30, DARICParser::RuleStr_func);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158);
    match(DARICParser::MIDS);
    setState(159);
    match(DARICParser::LPAREN);
    setState(160);
    str_expr();
    setState(161);
    match(DARICParser::COMMA);
    setState(162);
    num_expr(0);
    setState(163);
    match(DARICParser::COMMA);
    setState(164);
    num_expr(0);
    setState(165);
    match(DARICParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Str_exprContext ------------------------------------------------------------------

DARICParser::Str_exprContext::Str_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::Str_exprContext::STRINGLITERAL() {
  return getToken(DARICParser::STRINGLITERAL, 0);
}

DARICParser::Str_varContext* DARICParser::Str_exprContext::str_var() {
  return getRuleContext<DARICParser::Str_varContext>(0);
}

DARICParser::Str_funcContext* DARICParser::Str_exprContext::str_func() {
  return getRuleContext<DARICParser::Str_funcContext>(0);
}


size_t DARICParser::Str_exprContext::getRuleIndex() const {
  return DARICParser::RuleStr_expr;
}


antlrcpp::Any DARICParser::Str_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitStr_expr(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::Str_exprContext* DARICParser::str_expr() {
  Str_exprContext *_localctx = _tracker.createInstance<Str_exprContext>(_ctx, getState());
  enterRule(_localctx, 32, DARICParser::RuleStr_expr);

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
    switch (_input->LA(1)) {
      case DARICParser::STRINGLITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(167);
        match(DARICParser::STRINGLITERAL);
        break;
      }

      case DARICParser::LETTERS: {
        enterOuterAlt(_localctx, 2);
        setState(168);
        str_var();
        break;
      }

      case DARICParser::MIDS: {
        enterOuterAlt(_localctx, 3);
        setState(169);
        str_func();
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

//----------------- Num_funcContext ------------------------------------------------------------------

DARICParser::Num_funcContext::Num_funcContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* DARICParser::Num_funcContext::PI() {
  return getToken(DARICParser::PI, 0);
}


size_t DARICParser::Num_funcContext::getRuleIndex() const {
  return DARICParser::RuleNum_func;
}


antlrcpp::Any DARICParser::Num_funcContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNum_func(this);
  else
    return visitor->visitChildren(this);
}

DARICParser::Num_funcContext* DARICParser::num_func() {
  Num_funcContext *_localctx = _tracker.createInstance<Num_funcContext>(_ctx, getState());
  enterRule(_localctx, 34, DARICParser::RuleNum_func);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(172);
    match(DARICParser::PI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Num_exprContext ------------------------------------------------------------------

DARICParser::Num_exprContext::Num_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

DARICParser::NumberContext* DARICParser::Num_exprContext::number() {
  return getRuleContext<DARICParser::NumberContext>(0);
}

DARICParser::Num_funcContext* DARICParser::Num_exprContext::num_func() {
  return getRuleContext<DARICParser::Num_funcContext>(0);
}

tree::TerminalNode* DARICParser::Num_exprContext::LPAREN() {
  return getToken(DARICParser::LPAREN, 0);
}

std::vector<DARICParser::Num_exprContext *> DARICParser::Num_exprContext::num_expr() {
  return getRuleContexts<DARICParser::Num_exprContext>();
}

DARICParser::Num_exprContext* DARICParser::Num_exprContext::num_expr(size_t i) {
  return getRuleContext<DARICParser::Num_exprContext>(i);
}

tree::TerminalNode* DARICParser::Num_exprContext::RPAREN() {
  return getToken(DARICParser::RPAREN, 0);
}

std::vector<DARICParser::Str_exprContext *> DARICParser::Num_exprContext::str_expr() {
  return getRuleContexts<DARICParser::Str_exprContext>();
}

DARICParser::Str_exprContext* DARICParser::Num_exprContext::str_expr(size_t i) {
  return getRuleContext<DARICParser::Str_exprContext>(i);
}

DARICParser::RelopContext* DARICParser::Num_exprContext::relop() {
  return getRuleContext<DARICParser::RelopContext>(0);
}

tree::TerminalNode* DARICParser::Num_exprContext::PLUS() {
  return getToken(DARICParser::PLUS, 0);
}

tree::TerminalNode* DARICParser::Num_exprContext::MINUS() {
  return getToken(DARICParser::MINUS, 0);
}

tree::TerminalNode* DARICParser::Num_exprContext::MULTIPLY() {
  return getToken(DARICParser::MULTIPLY, 0);
}

tree::TerminalNode* DARICParser::Num_exprContext::DIVIDE() {
  return getToken(DARICParser::DIVIDE, 0);
}


size_t DARICParser::Num_exprContext::getRuleIndex() const {
  return DARICParser::RuleNum_expr;
}


antlrcpp::Any DARICParser::Num_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitNum_expr(this);
  else
    return visitor->visitChildren(this);
}


DARICParser::Num_exprContext* DARICParser::num_expr() {
   return num_expr(0);
}

DARICParser::Num_exprContext* DARICParser::num_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  DARICParser::Num_exprContext *_localctx = _tracker.createInstance<Num_exprContext>(_ctx, parentState);
  DARICParser::Num_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, DARICParser::RuleNum_expr, precedence);

    

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
    setState(185);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::PLUS:
      case DARICParser::MINUS:
      case DARICParser::NUMBER:
      case DARICParser::FLOAT: {
        setState(175);
        number();
        break;
      }

      case DARICParser::PI: {
        setState(176);
        num_func();
        break;
      }

      case DARICParser::LPAREN: {
        setState(177);
        match(DARICParser::LPAREN);
        setState(178);
        num_expr(0);
        setState(179);
        match(DARICParser::RPAREN);
        break;
      }

      case DARICParser::MIDS:
      case DARICParser::STRINGLITERAL:
      case DARICParser::LETTERS: {
        setState(181);
        str_expr();
        setState(182);
        relop();
        setState(183);
        str_expr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(205);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(203);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Num_exprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNum_expr);
          setState(187);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(188);
          relop();
          setState(189);
          num_expr(7);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Num_exprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNum_expr);
          setState(191);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(192);
          match(DARICParser::PLUS);
          setState(193);
          num_expr(5);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<Num_exprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNum_expr);
          setState(194);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(195);
          match(DARICParser::MINUS);
          setState(196);
          num_expr(4);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<Num_exprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNum_expr);
          setState(197);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(198);
          match(DARICParser::MULTIPLY);
          setState(199);
          num_expr(3);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<Num_exprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNum_expr);
          setState(200);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(201);
          match(DARICParser::DIVIDE);
          setState(202);
          num_expr(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(207);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
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
  enterRule(_localctx, 38, DARICParser::RuleRelop);
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
    setState(208);
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
    case 18: return num_exprSempred(dynamic_cast<Num_exprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool DARICParser::num_exprSempred(Num_exprContext *_localctx, size_t predicateIndex) {
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
  "prog", "line", "linenumber", "stmt", "var", "num_var", "str_var", "varname", 
  "vardecl", "variableassignment", "varlist", "exprlist", "printlist", "expr", 
  "number", "str_func", "str_expr", "num_func", "num_expr", "relop"
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
    0x3, 0x21, 0xd5, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x3, 0x2, 0x6, 0x2, 0x2c, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x2d, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x35, 0xa, 
    0x3, 0x7, 0x3, 0x37, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x3a, 0xb, 0x3, 0x3, 
    0x3, 0x5, 0x3, 0x3d, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x5, 0x3, 0x43, 0xa, 0x3, 0x7, 0x3, 0x45, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 
    0x48, 0xb, 0x3, 0x3, 0x3, 0x5, 0x3, 0x4b, 0xa, 0x3, 0x5, 0x3, 0x4d, 
    0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x5, 0x5, 0x52, 0xa, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x57, 0xa, 0x5, 0x5, 0x5, 0x59, 0xa, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x5d, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x63, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x6a, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 
    0x6d, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 
    0xa, 0x74, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x77, 0xb, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x80, 
    0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x83, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x7, 0xd, 0x88, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x8b, 0xb, 0xd, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x90, 0xa, 0xe, 0x7, 0xe, 0x92, 0xa, 
    0xe, 0xc, 0xe, 0xe, 0xe, 0x95, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x5, 0xf, 0x9a, 0xa, 0xf, 0x3, 0x10, 0x5, 0x10, 0x9d, 0xa, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x5, 0x12, 0xad, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xbc, 0xa, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0xce, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 
    0xd1, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x2, 0x3, 0x26, 0x16, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2, 0x8, 0x4, 0x2, 0x9, 0x9, 
    0x1c, 0x1c, 0x4, 0x2, 0x1b, 0x1b, 0x1e, 0x1f, 0x4, 0x2, 0x15, 0x15, 
    0x1a, 0x1a, 0x3, 0x2, 0x10, 0x11, 0x3, 0x2, 0x1f, 0x20, 0x5, 0x2, 0x3, 
    0x3, 0x6, 0x6, 0xa, 0xf, 0x2, 0xe0, 0x2, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x4c, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x58, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x5c, 0x3, 0x2, 0x2, 0x2, 0xc, 0x62, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x64, 0x3, 0x2, 0x2, 0x2, 0x10, 0x67, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x14, 0x78, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x18, 0x84, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x8c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x99, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x9c, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x22, 0xac, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0xae, 0x3, 0x2, 0x2, 0x2, 0x26, 0xbb, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0xd2, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2c, 0x5, 0x4, 0x3, 
    0x2, 0x2b, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x7, 0x2, 0x2, 0x3, 0x30, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x31, 0x38, 0x5, 0x8, 0x5, 0x2, 0x32, 0x34, 0x7, 
    0x14, 0x2, 0x2, 0x33, 0x35, 0x5, 0x8, 0x5, 0x2, 0x34, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x35, 0x3, 0x2, 0x2, 0x2, 0x35, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x32, 0x3, 0x2, 0x2, 0x2, 0x37, 0x3a, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 0x2, 0x2, 0x2, 0x39, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3d, 
    0x9, 0x2, 0x2, 0x2, 0x3c, 0x31, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x3d, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x4a, 0x5, 0x6, 
    0x4, 0x2, 0x3f, 0x46, 0x5, 0x8, 0x5, 0x2, 0x40, 0x42, 0x7, 0x14, 0x2, 
    0x2, 0x41, 0x43, 0x5, 0x8, 0x5, 0x2, 0x42, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 0x45, 0x3, 0x2, 0x2, 0x2, 0x44, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0x45, 0x48, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 
    0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 0x4b, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4b, 0x9, 0x2, 
    0x2, 0x2, 0x4a, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x4b, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x3c, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x5, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x4f, 0x7, 0x1f, 0x2, 0x2, 0x4f, 0x7, 0x3, 0x2, 0x2, 0x2, 0x50, 0x52, 
    0x7, 0x4, 0x2, 0x2, 0x51, 0x50, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x59, 0x5, 0x14, 
    0xb, 0x2, 0x54, 0x56, 0x7, 0x8, 0x2, 0x2, 0x55, 0x57, 0x5, 0x1a, 0xe, 
    0x2, 0x56, 0x55, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0x57, 0x59, 0x3, 0x2, 0x2, 0x2, 0x58, 0x51, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x54, 0x3, 0x2, 0x2, 0x2, 0x59, 0x9, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5d, 
    0x5, 0xc, 0x7, 0x2, 0x5b, 0x5d, 0x5, 0xe, 0x8, 0x2, 0x5c, 0x5a, 0x3, 
    0x2, 0x2, 0x2, 0x5c, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x5e, 0x63, 0x5, 0x10, 0x9, 0x2, 0x5f, 0x60, 0x5, 0x10, 0x9, 
    0x2, 0x60, 0x61, 0x7, 0x18, 0x2, 0x2, 0x61, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x62, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x62, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x63, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x5, 0x10, 0x9, 0x2, 0x65, 0x66, 
    0x7, 0x16, 0x2, 0x2, 0x66, 0xf, 0x3, 0x2, 0x2, 0x2, 0x67, 0x6b, 0x7, 
    0x1e, 0x2, 0x2, 0x68, 0x6a, 0x9, 0x3, 0x2, 0x2, 0x69, 0x68, 0x3, 0x2, 
    0x2, 0x2, 0x6a, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x69, 0x3, 0x2, 0x2, 
    0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x6d, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x75, 0x5, 0xa, 0x6, 0x2, 0x6f, 
    0x70, 0x7, 0x17, 0x2, 0x2, 0x70, 0x71, 0x5, 0x18, 0xd, 0x2, 0x71, 0x72, 
    0x7, 0x19, 0x2, 0x2, 0x72, 0x74, 0x3, 0x2, 0x2, 0x2, 0x73, 0x6f, 0x3, 
    0x2, 0x2, 0x2, 0x74, 0x77, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x77, 0x75, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x5, 0x12, 0xa, 0x2, 
    0x79, 0x7a, 0x7, 0xa, 0x2, 0x2, 0x7a, 0x7b, 0x5, 0x18, 0xd, 0x2, 0x7b, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x81, 0x5, 0x12, 0xa, 0x2, 0x7d, 0x7e, 
    0x7, 0x15, 0x2, 0x2, 0x7e, 0x80, 0x5, 0x12, 0xa, 0x2, 0x7f, 0x7d, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x83, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 
    0x2, 0x2, 0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x83, 0x81, 0x3, 0x2, 0x2, 0x2, 0x84, 0x89, 0x5, 0x1c, 0xf, 0x2, 
    0x85, 0x86, 0x7, 0x15, 0x2, 0x2, 0x86, 0x88, 0x5, 0x1c, 0xf, 0x2, 0x87, 
    0x85, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x89, 0x87, 
    0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x8b, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x93, 0x5, 0x1c, 
    0xf, 0x2, 0x8d, 0x8f, 0x9, 0x4, 0x2, 0x2, 0x8e, 0x90, 0x5, 0x1c, 0xf, 
    0x2, 0x8f, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x3, 0x2, 0x2, 0x2, 
    0x90, 0x92, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x92, 
    0x95, 0x3, 0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 
    0x3, 0x2, 0x2, 0x2, 0x94, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x95, 0x93, 0x3, 
    0x2, 0x2, 0x2, 0x96, 0x9a, 0x5, 0x26, 0x14, 0x2, 0x97, 0x9a, 0x5, 0xc, 
    0x7, 0x2, 0x98, 0x9a, 0x5, 0x22, 0x12, 0x2, 0x99, 0x96, 0x3, 0x2, 0x2, 
    0x2, 0x99, 0x97, 0x3, 0x2, 0x2, 0x2, 0x99, 0x98, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9d, 0x9, 0x5, 0x2, 0x2, 0x9c, 
    0x9b, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 
    0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x9, 0x6, 0x2, 0x2, 0x9f, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0xa0, 0xa1, 0x7, 0x5, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x17, 
    0x2, 0x2, 0xa2, 0xa3, 0x5, 0x22, 0x12, 0x2, 0xa3, 0xa4, 0x7, 0x15, 0x2, 
    0x2, 0xa4, 0xa5, 0x5, 0x26, 0x14, 0x2, 0xa5, 0xa6, 0x7, 0x15, 0x2, 0x2, 
    0xa6, 0xa7, 0x5, 0x26, 0x14, 0x2, 0xa7, 0xa8, 0x7, 0x19, 0x2, 0x2, 0xa8, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xad, 0x7, 0x1d, 0x2, 0x2, 0xaa, 0xad, 
    0x5, 0xe, 0x8, 0x2, 0xab, 0xad, 0x5, 0x20, 0x11, 0x2, 0xac, 0xa9, 0x3, 
    0x2, 0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xac, 0xab, 0x3, 0x2, 
    0x2, 0x2, 0xad, 0x23, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x7, 0x7, 0x2, 
    0x2, 0xaf, 0x25, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x8, 0x14, 0x1, 0x2, 
    0xb1, 0xbc, 0x5, 0x1e, 0x10, 0x2, 0xb2, 0xbc, 0x5, 0x24, 0x13, 0x2, 
    0xb3, 0xb4, 0x7, 0x17, 0x2, 0x2, 0xb4, 0xb5, 0x5, 0x26, 0x14, 0x2, 0xb5, 
    0xb6, 0x7, 0x19, 0x2, 0x2, 0xb6, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 
    0x5, 0x22, 0x12, 0x2, 0xb8, 0xb9, 0x5, 0x28, 0x15, 0x2, 0xb9, 0xba, 
    0x5, 0x22, 0x12, 0x2, 0xba, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb0, 0x3, 
    0x2, 0x2, 0x2, 0xbb, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb3, 0x3, 0x2, 
    0x2, 0x2, 0xbb, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xcf, 0x3, 0x2, 0x2, 
    0x2, 0xbd, 0xbe, 0xc, 0x8, 0x2, 0x2, 0xbe, 0xbf, 0x5, 0x28, 0x15, 0x2, 
    0xbf, 0xc0, 0x5, 0x26, 0x14, 0x9, 0xc0, 0xce, 0x3, 0x2, 0x2, 0x2, 0xc1, 
    0xc2, 0xc, 0x6, 0x2, 0x2, 0xc2, 0xc3, 0x7, 0x10, 0x2, 0x2, 0xc3, 0xce, 
    0x5, 0x26, 0x14, 0x7, 0xc4, 0xc5, 0xc, 0x5, 0x2, 0x2, 0xc5, 0xc6, 0x7, 
    0x11, 0x2, 0x2, 0xc6, 0xce, 0x5, 0x26, 0x14, 0x6, 0xc7, 0xc8, 0xc, 0x4, 
    0x2, 0x2, 0xc8, 0xc9, 0x7, 0x12, 0x2, 0x2, 0xc9, 0xce, 0x5, 0x26, 0x14, 
    0x5, 0xca, 0xcb, 0xc, 0x3, 0x2, 0x2, 0xcb, 0xcc, 0x7, 0x13, 0x2, 0x2, 
    0xcc, 0xce, 0x5, 0x26, 0x14, 0x4, 0xcd, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xcd, 
    0xc1, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xc7, 
    0x3, 0x2, 0x2, 0x2, 0xcd, 0xca, 0x3, 0x2, 0x2, 0x2, 0xce, 0xd1, 0x3, 
    0x2, 0x2, 0x2, 0xcf, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x3, 0x2, 
    0x2, 0x2, 0xd0, 0x27, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xcf, 0x3, 0x2, 0x2, 
    0x2, 0xd2, 0xd3, 0x9, 0x7, 0x2, 0x2, 0xd3, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x1b, 0x2d, 0x34, 0x38, 0x3c, 0x42, 0x46, 0x4a, 0x4c, 0x51, 0x56, 0x58, 
    0x5c, 0x62, 0x6b, 0x75, 0x81, 0x89, 0x8f, 0x93, 0x99, 0x9c, 0xac, 0xbb, 
    0xcd, 0xcf, 
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
