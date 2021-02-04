
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
    setState(65); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(64);
      line();
      setState(67); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << DARICParser::DIM)
      | (1ULL << DARICParser::END)
      | (1ULL << DARICParser::INPUT)
      | (1ULL << DARICParser::GLOBAL)
      | (1ULL << DARICParser::LOCAL)
      | (1ULL << DARICParser::LET)
      | (1ULL << DARICParser::PRINT)
      | (1ULL << DARICParser::REM)
      | (1ULL << DARICParser::TYPE))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (DARICParser::COMMENT - 71))
      | (1ULL << (DARICParser::VARIABLE_FLOAT - 71))
      | (1ULL << (DARICParser::VARIABLE_INTEGER - 71))
      | (1ULL << (DARICParser::VARIABLE_STRING - 71))
      | (1ULL << (DARICParser::VARIABLE_TYPE - 71))
      | (1ULL << (DARICParser::NUMBER - 71)))) != 0));
    setState(69);
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
    setState(98);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::DIM:
      case DARICParser::END:
      case DARICParser::INPUT:
      case DARICParser::GLOBAL:
      case DARICParser::LOCAL:
      case DARICParser::LET:
      case DARICParser::PRINT:
      case DARICParser::REM:
      case DARICParser::TYPE:
      case DARICParser::COMMENT:
      case DARICParser::VARIABLE_FLOAT:
      case DARICParser::VARIABLE_INTEGER:
      case DARICParser::VARIABLE_STRING:
      case DARICParser::VARIABLE_TYPE: {
        enterOuterAlt(_localctx, 1);
        setState(82);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case DARICParser::DIM:
          case DARICParser::END:
          case DARICParser::INPUT:
          case DARICParser::GLOBAL:
          case DARICParser::LOCAL:
          case DARICParser::LET:
          case DARICParser::PRINT:
          case DARICParser::TYPE:
          case DARICParser::VARIABLE_FLOAT:
          case DARICParser::VARIABLE_INTEGER:
          case DARICParser::VARIABLE_STRING:
          case DARICParser::VARIABLE_TYPE: {
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

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
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

      case DARICParser::NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(84);
        linenumber();
        setState(96);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case DARICParser::DIM:
          case DARICParser::END:
          case DARICParser::INPUT:
          case DARICParser::GLOBAL:
          case DARICParser::LOCAL:
          case DARICParser::LET:
          case DARICParser::PRINT:
          case DARICParser::TYPE:
          case DARICParser::VARIABLE_FLOAT:
          case DARICParser::VARIABLE_INTEGER:
          case DARICParser::VARIABLE_STRING:
          case DARICParser::VARIABLE_TYPE: {
            setState(85);
            stmt();
            setState(92);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == DARICParser::COLON) {
              setState(86);
              match(DARICParser::COLON);
              setState(88);
              _errHandler->sync(this);

              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
              case 1: {
                setState(87);
                stmt();
                break;
              }

              default:
                break;
              }
              setState(94);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            break;
          }

          case DARICParser::REM:
          case DARICParser::COMMENT: {
            setState(95);
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
    setState(100);
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
    setState(171);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::DIM: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtDIMContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(102);
        match(DARICParser::DIM);
        setState(103);
        varDeclWithDimension();
        setState(108);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == DARICParser::COMMA) {
          setState(104);
          match(DARICParser::COMMA);
          setState(105);
          varDeclWithDimension();
          setState(110);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case DARICParser::END: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtENDContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(111);
        match(DARICParser::END);
        break;
      }

      case DARICParser::INPUT: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtINPUTContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(112);
        match(DARICParser::INPUT);
        setState(116);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          setState(113);
          strExpr(0);
          setState(114);
          match(DARICParser::COMMA);
          break;
        }

        default:
          break;
        }
        setState(118);
        varList();
        break;
      }

      case DARICParser::GLOBAL:
      case DARICParser::LET:
      case DARICParser::VARIABLE_FLOAT:
      case DARICParser::VARIABLE_INTEGER:
      case DARICParser::VARIABLE_STRING:
      case DARICParser::VARIABLE_TYPE: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtLETContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(125);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          setState(120);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == DARICParser::LET) {
            setState(119);
            match(DARICParser::LET);
          }
          break;
        }

        case 2: {
          setState(123);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == DARICParser::GLOBAL) {
            setState(122);
            match(DARICParser::GLOBAL);
          }
          break;
        }

        default:
          break;
        }
        setState(127);
        varDecl();
        setState(128);
        match(DARICParser::EQ);
        setState(129);
        expr();
        setState(137);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == DARICParser::COMMA) {
          setState(130);
          match(DARICParser::COMMA);
          setState(131);
          varDecl();
          setState(132);
          match(DARICParser::EQ);
          setState(133);
          expr();
          setState(139);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case DARICParser::LOCAL: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtLOCALContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(140);
        match(DARICParser::LOCAL);
        setState(141);
        varDecl();
        setState(142);
        match(DARICParser::EQ);
        setState(143);
        expr();
        setState(151);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == DARICParser::COMMA) {
          setState(144);
          match(DARICParser::COMMA);
          setState(145);
          varDecl();
          setState(146);
          match(DARICParser::EQ);
          setState(147);
          expr();
          setState(153);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case DARICParser::PRINT: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtPRINTContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(154);
        match(DARICParser::PRINT);
        setState(156);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          setState(155);
          printList();
          break;
        }

        default:
          break;
        }
        break;
      }

      case DARICParser::TYPE: {
        _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<DARICParser::StmtTYPEContext>(_localctx));
        enterOuterAlt(_localctx, 7);
        setState(158);
        match(DARICParser::TYPE);
        setState(159);
        varName();
        setState(160);
        match(DARICParser::LPAREN);
        setState(161);
        justVar();
        setState(166);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == DARICParser::COMMA) {
          setState(162);
          match(DARICParser::COMMA);
          setState(163);
          justVar();
          setState(168);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(169);
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
  enterRule(_localctx, 8, DARICParser::RuleVar);

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(173);
      numVar();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(174);
      strVar();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(175);
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
  enterRule(_localctx, 10, DARICParser::RuleTypeVar);

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
    setState(178);
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
  enterRule(_localctx, 12, DARICParser::RuleNumVar);
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
    setState(228);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(180);
      varName();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatArrayContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(181);
      varName();
      setState(192);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(182);
          match(DARICParser::LPAREN);
          setState(183);
          numExpr(0);
          setState(186);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == DARICParser::COMMA) {
            setState(184);
            match(DARICParser::COMMA);
            setState(185);
            numExpr(0);
          }
          setState(188);
          match(DARICParser::RPAREN); 
        }
        setState(194);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(195);
      varNameInteger();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerArrayContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(196);
      varNameInteger();
      setState(207);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(197);
          match(DARICParser::LPAREN);
          setState(198);
          numExpr(0);
          setState(201);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == DARICParser::COMMA) {
            setState(199);
            match(DARICParser::COMMA);
            setState(200);
            numExpr(0);
          }
          setState(203);
          match(DARICParser::RPAREN); 
        }
        setState(209);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
      }
      break;
    }

    case 5: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatFieldContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(210);
      typeVar();
      setState(211);
      varName();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarFloatFieldArrayContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(213);
      typeVar();
      setState(214);
      match(DARICParser::LPAREN);
      setState(215);
      numExpr(0);
      setState(216);
      match(DARICParser::RPAREN);
      setState(217);
      varName();
      break;
    }

    case 7: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerFieldContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(219);
      typeVar();
      setState(220);
      varNameInteger();
      break;
    }

    case 8: {
      _localctx = dynamic_cast<NumVarContext *>(_tracker.createInstance<DARICParser::NumVarIntegerFieldArrayContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(222);
      typeVar();
      setState(223);
      match(DARICParser::LPAREN);
      setState(224);
      numExpr(0);
      setState(225);
      match(DARICParser::RPAREN);
      setState(226);
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
  enterRule(_localctx, 14, DARICParser::RuleStrVar);
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
    setState(254);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(230);
      varNameString();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringArrayContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(231);
      varNameString();
      setState(242);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(232);
          match(DARICParser::LPAREN);
          setState(233);
          numExpr(0);
          setState(236);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == DARICParser::COMMA) {
            setState(234);
            match(DARICParser::COMMA);
            setState(235);
            numExpr(0);
          }
          setState(238);
          match(DARICParser::RPAREN); 
        }
        setState(244);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringFieldContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(245);
      typeVar();
      setState(246);
      varNameString();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StrVarContext *>(_tracker.createInstance<DARICParser::NumVarStringFieldArrayContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(248);
      typeVar();
      setState(249);
      match(DARICParser::LPAREN);
      setState(250);
      numExpr(0);
      setState(251);
      match(DARICParser::RPAREN);
      setState(252);
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


size_t DARICParser::JustVarContext::getRuleIndex() const {
  return DARICParser::RuleJustVar;
}

void DARICParser::JustVarContext::copyFrom(JustVarContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- JustVarNameIntegerContext ------------------------------------------------------------------

DARICParser::VarNameIntegerContext* DARICParser::JustVarNameIntegerContext::varNameInteger() {
  return getRuleContext<DARICParser::VarNameIntegerContext>(0);
}

DARICParser::JustVarNameIntegerContext::JustVarNameIntegerContext(JustVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::JustVarNameIntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitJustVarNameInteger(this);
  else
    return visitor->visitChildren(this);
}
//----------------- JustVarNameContext ------------------------------------------------------------------

DARICParser::VarNameContext* DARICParser::JustVarNameContext::varName() {
  return getRuleContext<DARICParser::VarNameContext>(0);
}

DARICParser::JustVarNameContext::JustVarNameContext(JustVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::JustVarNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitJustVarName(this);
  else
    return visitor->visitChildren(this);
}
//----------------- JustVarNameStringContext ------------------------------------------------------------------

DARICParser::VarNameStringContext* DARICParser::JustVarNameStringContext::varNameString() {
  return getRuleContext<DARICParser::VarNameStringContext>(0);
}

DARICParser::JustVarNameStringContext::JustVarNameStringContext(JustVarContext *ctx) { copyFrom(ctx); }


antlrcpp::Any DARICParser::JustVarNameStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<DARICVisitor*>(visitor))
    return parserVisitor->visitJustVarNameString(this);
  else
    return visitor->visitChildren(this);
}
DARICParser::JustVarContext* DARICParser::justVar() {
  JustVarContext *_localctx = _tracker.createInstance<JustVarContext>(_ctx, getState());
  enterRule(_localctx, 16, DARICParser::RuleJustVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(259);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::VARIABLE_FLOAT: {
        _localctx = dynamic_cast<JustVarContext *>(_tracker.createInstance<DARICParser::JustVarNameContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(256);
        varName();
        break;
      }

      case DARICParser::VARIABLE_INTEGER: {
        _localctx = dynamic_cast<JustVarContext *>(_tracker.createInstance<DARICParser::JustVarNameIntegerContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(257);
        varNameInteger();
        break;
      }

      case DARICParser::VARIABLE_STRING: {
        _localctx = dynamic_cast<JustVarContext *>(_tracker.createInstance<DARICParser::JustVarNameStringContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(258);
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
  enterRule(_localctx, 18, DARICParser::RuleVarName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
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
  enterRule(_localctx, 20, DARICParser::RuleVarNameInteger);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
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
  enterRule(_localctx, 22, DARICParser::RuleVarNameString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(265);
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
  enterRule(_localctx, 24, DARICParser::RuleVarNameType);

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
  enterRule(_localctx, 26, DARICParser::RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(293);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclIndContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(269);
      var();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclArrayedContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(270);
      var();
      setState(281);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == DARICParser::LPAREN) {
        setState(271);
        match(DARICParser::LPAREN);
        setState(272);
        numExpr(0);
        setState(275);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == DARICParser::COMMA) {
          setState(273);
          match(DARICParser::COMMA);
          setState(274);
          numExpr(0);
        }
        setState(277);
        match(DARICParser::RPAREN);
        setState(283);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(284);
      typeVar();
      setState(285);
      varName();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<VarDeclContext *>(_tracker.createInstance<DARICParser::VarDeclTypeArrayedContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(287);
      typeVar();
      setState(288);
      match(DARICParser::LPAREN);
      setState(289);
      numExpr(0);
      setState(290);
      match(DARICParser::RPAREN);
      setState(291);
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
  enterRule(_localctx, 28, DARICParser::RuleVarDeclWithDimension);
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
    setState(295);
    var();
    setState(296);
    match(DARICParser::LPAREN);
    setState(297);
    numExpr(0);
    setState(302);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(298);
      match(DARICParser::COMMA);
      setState(299);
      numExpr(0);
      setState(304);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(305);
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
  enterRule(_localctx, 30, DARICParser::RuleVarList);
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
    varDecl();
    setState(312);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(308);
      match(DARICParser::COMMA);
      setState(309);
      varDecl();
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
  enterRule(_localctx, 32, DARICParser::RuleExprList);
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
    setState(315);
    expr();
    setState(320);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == DARICParser::COMMA) {
      setState(316);
      match(DARICParser::COMMA);
      setState(317);
      expr();
      setState(322);
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
  enterRule(_localctx, 34, DARICParser::RulePrintListItem);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(334);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<PrintListItemContext *>(_tracker.createInstance<DARICParser::PrintListExprContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(324);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == DARICParser::TILDE) {
        setState(323);
        match(DARICParser::TILDE);
      }
      setState(326);
      expr();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<PrintListItemContext *>(_tracker.createInstance<DARICParser::PrintListSPCPContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(327);
      match(DARICParser::SPC);
      setState(328);
      match(DARICParser::LPAREN);
      setState(329);
      numExpr(0);
      setState(330);
      match(DARICParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<PrintListItemContext *>(_tracker.createInstance<DARICParser::PrintListSPCContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(332);
      match(DARICParser::SPC);
      setState(333);
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
  enterRule(_localctx, 36, DARICParser::RulePrintStartingTicks);
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
    setState(337); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(336);
      match(DARICParser::TICK);
      setState(339); 
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
  enterRule(_localctx, 38, DARICParser::RulePrintList);
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
    setState(342);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::TICK) {
      setState(341);
      printStartingTicks();
    }
    setState(345);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::COMMA) {
      setState(344);
      match(DARICParser::COMMA);
    }
    setState(347);
    printListItem();
    setState(354);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 61) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 61)) & ((1ULL << (DARICParser::TICK - 61))
      | (1ULL << (DARICParser::COMMA - 61))
      | (1ULL << (DARICParser::SEMICOLON - 61)))) != 0)) {
      setState(348);
      _la = _input->LA(1);
      if (!(((((_la - 61) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 61)) & ((1ULL << (DARICParser::TICK - 61))
        | (1ULL << (DARICParser::COMMA - 61))
        | (1ULL << (DARICParser::SEMICOLON - 61)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(350);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
      case 1: {
        setState(349);
        printListItem();
        break;
      }

      default:
        break;
      }
      setState(356);
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
  enterRule(_localctx, 40, DARICParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(359);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(357);
      numExpr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(358);
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
  enterRule(_localctx, 42, DARICParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(365);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(361);
      numberInteger();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(362);
      numberFloat();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(363);
      numberHex();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(364);
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
  enterRule(_localctx, 44, DARICParser::RuleNumberInteger);
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
    setState(368);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::PLUS

    || _la == DARICParser::MINUS) {
      setState(367);
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
    setState(370);
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
  enterRule(_localctx, 46, DARICParser::RuleNumberHex);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(372);
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
  enterRule(_localctx, 48, DARICParser::RuleNumberBinary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(374);
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
  enterRule(_localctx, 50, DARICParser::RuleNumberFloat);
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
    setState(377);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == DARICParser::PLUS

    || _la == DARICParser::MINUS) {
      setState(376);
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
    setState(379);
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
  enterRule(_localctx, 52, DARICParser::RuleStrFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(437);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncTIMESContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(381);
      match(DARICParser::TIMES);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncCHRSPContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(382);
      match(DARICParser::CHRS);
      setState(383);
      match(DARICParser::LPAREN);
      setState(384);
      numExpr(0);
      setState(385);
      match(DARICParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncCHRSContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(387);
      match(DARICParser::CHRS);
      setState(388);
      numExpr(0);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncLEFTSContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(389);
      match(DARICParser::LEFTS);
      setState(390);
      match(DARICParser::LPAREN);
      setState(391);
      strExpr(0);
      setState(392);
      match(DARICParser::COMMA);
      setState(393);
      numExpr(0);
      setState(394);
      match(DARICParser::RPAREN);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncMIDS3Context>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(396);
      match(DARICParser::MIDS);
      setState(397);
      match(DARICParser::LPAREN);
      setState(398);
      strExpr(0);
      setState(399);
      match(DARICParser::COMMA);
      setState(400);
      numExpr(0);
      setState(401);
      match(DARICParser::COMMA);
      setState(402);
      numExpr(0);
      setState(403);
      match(DARICParser::RPAREN);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncMIDS2Context>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(405);
      match(DARICParser::MIDS);
      setState(406);
      match(DARICParser::LPAREN);
      setState(407);
      strExpr(0);
      setState(408);
      match(DARICParser::COMMA);
      setState(409);
      numExpr(0);
      setState(410);
      match(DARICParser::RPAREN);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncRIGHTSContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(412);
      match(DARICParser::RIGHTS);
      setState(413);
      match(DARICParser::LPAREN);
      setState(414);
      strExpr(0);
      setState(415);
      match(DARICParser::COMMA);
      setState(416);
      numExpr(0);
      setState(417);
      match(DARICParser::RPAREN);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncSTRSContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(419);
      match(DARICParser::STRS);
      setState(420);
      match(DARICParser::LPAREN);
      setState(421);
      numExpr(0);
      setState(422);
      match(DARICParser::RPAREN);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncSTRSHEXContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(424);
      match(DARICParser::STRS);
      setState(425);
      match(DARICParser::TILDE);
      setState(426);
      match(DARICParser::LPAREN);
      setState(427);
      numExpr(0);
      setState(428);
      match(DARICParser::RPAREN);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<StrFuncContext *>(_tracker.createInstance<DARICParser::StrFuncSTRINGSContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(430);
      match(DARICParser::STRINGS);
      setState(431);
      match(DARICParser::LPAREN);
      setState(432);
      numExpr(0);
      setState(433);
      match(DARICParser::COMMA);
      setState(434);
      strExpr(0);
      setState(435);
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
  enterRule(_localctx, 54, DARICParser::RuleString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(439);
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
  size_t startState = 56;
  enterRecursionRule(_localctx, 56, DARICParser::RuleStrExpr, precedence);

    

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
    setState(445);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::STRINGLITERAL: {
        setState(442);
        string();
        break;
      }

      case DARICParser::VARIABLE_STRING:
      case DARICParser::VARIABLE_TYPE: {
        setState(443);
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
        setState(444);
        strFunc();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(452);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StrExprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStrExpr);
        setState(447);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(448);
        match(DARICParser::PLUS);
        setState(449);
        strExpr(2); 
      }
      setState(454);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
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
  enterRule(_localctx, 58, DARICParser::RuleNumFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(566);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncPIContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(455);
      match(DARICParser::PI);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncTIMEContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(456);
      match(DARICParser::TIME);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRNDContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(457);
      match(DARICParser::RND);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRND0Context>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(458);
      match(DARICParser::RND0);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRND1Context>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(459);
      match(DARICParser::RND1);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRNDRANGEContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(460);
      match(DARICParser::RND);
      setState(461);
      match(DARICParser::LPAREN);
      setState(462);
      numExpr(0);
      setState(463);
      match(DARICParser::RPAREN);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncLNContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(465);
      match(DARICParser::LN);
      setState(466);
      match(DARICParser::LPAREN);
      setState(467);
      numExpr(0);
      setState(468);
      match(DARICParser::RPAREN);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncLOGContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(470);
      match(DARICParser::LOG);
      setState(471);
      match(DARICParser::LPAREN);
      setState(472);
      numExpr(0);
      setState(473);
      match(DARICParser::RPAREN);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncEXPContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(475);
      match(DARICParser::EXP);
      setState(476);
      match(DARICParser::LPAREN);
      setState(477);
      numExpr(0);
      setState(478);
      match(DARICParser::RPAREN);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncATNContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(480);
      match(DARICParser::ATN);
      setState(481);
      match(DARICParser::LPAREN);
      setState(482);
      numExpr(0);
      setState(483);
      match(DARICParser::RPAREN);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncTANContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(485);
      match(DARICParser::TAN);
      setState(486);
      match(DARICParser::LPAREN);
      setState(487);
      numExpr(0);
      setState(488);
      match(DARICParser::RPAREN);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncCOSContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(490);
      match(DARICParser::COS);
      setState(491);
      match(DARICParser::LPAREN);
      setState(492);
      numExpr(0);
      setState(493);
      match(DARICParser::RPAREN);
      break;
    }

    case 13: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSINContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(495);
      match(DARICParser::SIN);
      setState(496);
      match(DARICParser::LPAREN);
      setState(497);
      numExpr(0);
      setState(498);
      match(DARICParser::RPAREN);
      break;
    }

    case 14: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncABSContext>(_localctx));
      enterOuterAlt(_localctx, 14);
      setState(500);
      match(DARICParser::ABS);
      setState(501);
      match(DARICParser::LPAREN);
      setState(502);
      numExpr(0);
      setState(503);
      match(DARICParser::RPAREN);
      break;
    }

    case 15: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncACSContext>(_localctx));
      enterOuterAlt(_localctx, 15);
      setState(505);
      match(DARICParser::ACS);
      setState(506);
      match(DARICParser::LPAREN);
      setState(507);
      numExpr(0);
      setState(508);
      match(DARICParser::RPAREN);
      break;
    }

    case 16: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncASNContext>(_localctx));
      enterOuterAlt(_localctx, 16);
      setState(510);
      match(DARICParser::ASN);
      setState(511);
      match(DARICParser::LPAREN);
      setState(512);
      numExpr(0);
      setState(513);
      match(DARICParser::RPAREN);
      break;
    }

    case 17: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncDEGContext>(_localctx));
      enterOuterAlt(_localctx, 17);
      setState(515);
      match(DARICParser::DEG);
      setState(516);
      match(DARICParser::LPAREN);
      setState(517);
      numExpr(0);
      setState(518);
      match(DARICParser::RPAREN);
      break;
    }

    case 18: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncRADContext>(_localctx));
      enterOuterAlt(_localctx, 18);
      setState(520);
      match(DARICParser::RAD);
      setState(521);
      match(DARICParser::LPAREN);
      setState(522);
      numExpr(0);
      setState(523);
      match(DARICParser::RPAREN);
      break;
    }

    case 19: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSQRContext>(_localctx));
      enterOuterAlt(_localctx, 19);
      setState(525);
      match(DARICParser::SQR);
      setState(526);
      match(DARICParser::LPAREN);
      setState(527);
      numExpr(0);
      setState(528);
      match(DARICParser::RPAREN);
      break;
    }

    case 20: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncSGNContext>(_localctx));
      enterOuterAlt(_localctx, 20);
      setState(530);
      match(DARICParser::SGN);
      setState(531);
      match(DARICParser::LPAREN);
      setState(532);
      numExpr(0);
      setState(533);
      match(DARICParser::RPAREN);
      break;
    }

    case 21: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncASCContext>(_localctx));
      enterOuterAlt(_localctx, 21);
      setState(535);
      match(DARICParser::ASC);
      setState(536);
      match(DARICParser::LPAREN);
      setState(537);
      strExpr(0);
      setState(538);
      match(DARICParser::RPAREN);
      break;
    }

    case 22: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncLENContext>(_localctx));
      enterOuterAlt(_localctx, 22);
      setState(540);
      match(DARICParser::LEN);
      setState(541);
      match(DARICParser::LPAREN);
      setState(542);
      strExpr(0);
      setState(543);
      match(DARICParser::RPAREN);
      break;
    }

    case 23: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncINSTR2Context>(_localctx));
      enterOuterAlt(_localctx, 23);
      setState(545);
      match(DARICParser::INSTR);
      setState(546);
      match(DARICParser::LPAREN);
      setState(547);
      strExpr(0);
      setState(548);
      match(DARICParser::COMMA);
      setState(549);
      strExpr(0);
      setState(550);
      match(DARICParser::RPAREN);
      break;
    }

    case 24: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncINSTR3Context>(_localctx));
      enterOuterAlt(_localctx, 24);
      setState(552);
      match(DARICParser::INSTR);
      setState(553);
      match(DARICParser::LPAREN);
      setState(554);
      strExpr(0);
      setState(555);
      match(DARICParser::COMMA);
      setState(556);
      strExpr(0);
      setState(557);
      match(DARICParser::COMMA);
      setState(558);
      numExpr(0);
      setState(559);
      match(DARICParser::RPAREN);
      break;
    }

    case 25: {
      _localctx = dynamic_cast<NumFuncContext *>(_tracker.createInstance<DARICParser::NumFuncVALContext>(_localctx));
      enterOuterAlt(_localctx, 25);
      setState(561);
      match(DARICParser::VAL);
      setState(562);
      match(DARICParser::LPAREN);
      setState(563);
      strExpr(0);
      setState(564);
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
  size_t startState = 60;
  enterRecursionRule(_localctx, 60, DARICParser::RuleNumExpr, precedence);

    

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
    setState(582);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NumExprNumberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(569);
      number();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NumExprVarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(570);
      numVar();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NumExprFuncContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(571);
      numFunc();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<NumExprNOTContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(572);
      match(DARICParser::NOT);
      setState(573);
      numExpr(16);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NumExprNestedContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(574);
      match(DARICParser::LPAREN);
      setState(575);
      numExpr(0);
      setState(576);
      match(DARICParser::RPAREN);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<NumExprStrRelopContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(578);
      strExpr(0);
      setState(579);
      compare();
      setState(580);
      strExpr(0);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(626);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(624);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<NumExprHatContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(584);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(585);
          match(DARICParser::HAT);
          setState(586);
          numExpr(14);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<NumExprMultiplyContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(587);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(588);
          match(DARICParser::MULTIPLY);
          setState(589);
          numExpr(14);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<NumExprDivideContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(590);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(591);
          match(DARICParser::DIVIDE);
          setState(592);
          numExpr(13);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<NumExprDIVContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(593);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(594);
          match(DARICParser::DIV);
          setState(595);
          numExpr(12);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<NumExprMODContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(596);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(597);
          match(DARICParser::MOD);
          setState(598);
          numExpr(11);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<NumExprPlusContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(599);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(600);
          match(DARICParser::PLUS);
          setState(601);
          numExpr(10);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<NumExprSubtractContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(602);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(603);
          match(DARICParser::MINUS);
          setState(604);
          numExpr(9);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<NumExprNumRelopContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(605);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(606);
          compare();
          setState(607);
          numExpr(8);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<NumExprSHLContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(609);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(610);
          match(DARICParser::SHL);
          setState(611);
          numExpr(6);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<NumExprSHRContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(612);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(613);
          match(DARICParser::SHR);
          setState(614);
          numExpr(5);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<NumExprANDContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(615);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(616);
          match(DARICParser::AND);
          setState(617);
          numExpr(4);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<NumExprORContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(618);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(619);
          match(DARICParser::OR);
          setState(620);
          numExpr(3);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<NumExprEORContext>(_tracker.createInstance<NumExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleNumExpr);
          setState(621);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(622);
          match(DARICParser::EOR);
          setState(623);
          numExpr(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(628);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
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
  enterRule(_localctx, 62, DARICParser::RuleCompare);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(635);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case DARICParser::EQ: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareEQContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(629);
        match(DARICParser::EQ);
        break;
      }

      case DARICParser::NE: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareNEContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(630);
        match(DARICParser::NE);
        break;
      }

      case DARICParser::GT: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareGTContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(631);
        match(DARICParser::GT);
        break;
      }

      case DARICParser::GE: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareGEContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(632);
        match(DARICParser::GE);
        break;
      }

      case DARICParser::LT: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareLTContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(633);
        match(DARICParser::LT);
        break;
      }

      case DARICParser::LE: {
        _localctx = dynamic_cast<CompareContext *>(_tracker.createInstance<DARICParser::CompareLEContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(634);
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
    case 28: return strExprSempred(dynamic_cast<StrExprContext *>(context), predicateIndex);
    case 30: return numExprSempred(dynamic_cast<NumExprContext *>(context), predicateIndex);

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
  "prog", "line", "linenumber", "stmt", "var", "typeVar", "numVar", "strVar", 
  "justVar", "varName", "varNameInteger", "varNameString", "varNameType", 
  "varDecl", "varDeclWithDimension", "varList", "exprList", "printListItem", 
  "printStartingTicks", "printList", "expr", "number", "numberInteger", 
  "numberHex", "numberBinary", "numberFloat", "strFunc", "string", "strExpr", 
  "numFunc", "numExpr", "compare"
};

std::vector<std::string> DARICParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "'='", "'<>'", "'>'", "'>='", "'<'", "'<='", "", 
  "", "", "", "", "", "'^'", "'+'", "'-'", "'*'", "'/'", "'<<'", "'>>'", 
  "'''", "'~'", "':'", "','", "'$'", "'('", "'%'", "')'", "';'", "'_'"
};

std::vector<std::string> DARICParser::_symbolicNames = {
  "", "DIM", "END", "FIELD", "INPUT", "GLOBAL", "LOCAL", "LET", "PRINT", 
  "REM", "SPC", "TYPE", "TIME", "PI", "SQR", "LN", "LOG", "EXP", "ATN", 
  "TAN", "COS", "SIN", "ABS", "ACS", "ASN", "DEG", "RAD", "SGN", "ASC", 
  "LEN", "INSTR", "VAL", "TIMES", "STRS", "STRINGS", "CHRS", "LEFTS", "MIDS", 
  "RIGHTS", "RND", "RND0", "RND1", "EQ", "NE", "GT", "GE", "LT", "LE", "NOT", 
  "AND", "OR", "EOR", "MOD", "DIV", "HAT", "PLUS", "MINUS", "MULTIPLY", 
  "DIVIDE", "SHL", "SHR", "TICK", "TILDE", "COLON", "COMMA", "DOLLAR", "LPAREN", 
  "PERCENT", "RPAREN", "SEMICOLON", "UNDERSCORE", "COMMENT", "STRINGLITERAL", 
  "VARIABLE_FLOAT", "VARIABLE_INTEGER", "VARIABLE_STRING", "VARIABLE_TYPE", 
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
    0x3, 0x54, 0x280, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x3, 0x2, 
    0x6, 0x2, 0x44, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x45, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x4d, 0xa, 0x3, 0x7, 0x3, 0x4f, 
    0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x52, 0xb, 0x3, 0x3, 0x3, 0x5, 0x3, 0x55, 
    0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x5b, 0xa, 
    0x3, 0x7, 0x3, 0x5d, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x60, 0xb, 0x3, 0x3, 
    0x3, 0x5, 0x3, 0x63, 0xa, 0x3, 0x5, 0x3, 0x65, 0xa, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x6d, 0xa, 0x5, 
    0xc, 0x5, 0xe, 0x5, 0x70, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x77, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 
    0x7b, 0xa, 0x5, 0x3, 0x5, 0x5, 0x5, 0x7e, 0xa, 0x5, 0x5, 0x5, 0x80, 
    0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x8a, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x8d, 
    0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x98, 0xa, 0x5, 0xc, 0x5, 0xe, 
    0x5, 0x9b, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x9f, 0xa, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xa7, 
    0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xaa, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 
    0x5, 0xae, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xb3, 0xa, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x5, 0x8, 0xbd, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 
    0xc1, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xc4, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xcc, 0xa, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x7, 0x8, 0xd0, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xd3, 0xb, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xe7, 0xa, 0x8, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 
    0xef, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0xf3, 0xa, 0x9, 0xc, 0x9, 
    0xe, 0x9, 0xf6, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x101, 0xa, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x106, 0xa, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x116, 
    0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x11a, 0xa, 0xf, 0xc, 0xf, 0xe, 
    0xf, 0x11d, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x128, 0xa, 0xf, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x12f, 
    0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x132, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x139, 0xa, 0x11, 0xc, 0x11, 
    0xe, 0x11, 0x13c, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 
    0x141, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x144, 0xb, 0x12, 0x3, 0x13, 
    0x5, 0x13, 0x147, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x151, 0xa, 0x13, 
    0x3, 0x14, 0x6, 0x14, 0x154, 0xa, 0x14, 0xd, 0x14, 0xe, 0x14, 0x155, 
    0x3, 0x15, 0x5, 0x15, 0x159, 0xa, 0x15, 0x3, 0x15, 0x5, 0x15, 0x15c, 
    0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x161, 0xa, 0x15, 
    0x7, 0x15, 0x163, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x166, 0xb, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x16a, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x170, 0xa, 0x17, 0x3, 0x18, 0x5, 0x18, 
    0x173, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1b, 0x5, 0x1b, 0x17c, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x1b8, 0xa, 0x1c, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 
    0x1e, 0x1c0, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 
    0x1c5, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x1c8, 0xb, 0x1e, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 
    0x1f, 0x239, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x249, 0xa, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x7, 0x20, 0x273, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x276, 
    0xb, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
    0x21, 0x5, 0x21, 0x27e, 0xa, 0x21, 0x3, 0x21, 0x2, 0x4, 0x3a, 0x3e, 
    0x22, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 
    0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x2, 0x5, 0x4, 0x2, 
    0xb, 0xb, 0x49, 0x49, 0x5, 0x2, 0x3f, 0x3f, 0x42, 0x42, 0x47, 0x47, 
    0x3, 0x2, 0x39, 0x3a, 0x2, 0x2db, 0x2, 0x43, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x64, 0x3, 0x2, 0x2, 0x2, 0x6, 0x66, 0x3, 0x2, 0x2, 0x2, 0x8, 0xad, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xc, 0xb4, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0xe6, 0x3, 0x2, 0x2, 0x2, 0x10, 0x100, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x105, 0x3, 0x2, 0x2, 0x2, 0x14, 0x107, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x109, 0x3, 0x2, 0x2, 0x2, 0x18, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x10d, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x127, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x129, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0x135, 0x3, 0x2, 0x2, 0x2, 0x22, 0x13d, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x150, 0x3, 0x2, 0x2, 0x2, 0x26, 0x153, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x158, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x169, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x172, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x176, 0x3, 0x2, 0x2, 0x2, 0x32, 0x178, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x17b, 0x3, 0x2, 0x2, 0x2, 0x36, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x38, 0x1b9, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x238, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x248, 0x3, 0x2, 0x2, 0x2, 0x40, 0x27d, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x44, 0x5, 0x4, 0x3, 0x2, 0x43, 0x42, 0x3, 0x2, 0x2, 
    0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x43, 0x3, 0x2, 0x2, 0x2, 
    0x45, 0x46, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 
    0x48, 0x7, 0x2, 0x2, 0x3, 0x48, 0x3, 0x3, 0x2, 0x2, 0x2, 0x49, 0x50, 
    0x5, 0x8, 0x5, 0x2, 0x4a, 0x4c, 0x7, 0x41, 0x2, 0x2, 0x4b, 0x4d, 0x5, 
    0x8, 0x5, 0x2, 0x4c, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x4d, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4a, 0x3, 0x2, 0x2, 
    0x2, 0x4f, 0x52, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4e, 0x3, 0x2, 0x2, 0x2, 
    0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 0x55, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x50, 0x3, 0x2, 0x2, 0x2, 0x53, 0x55, 0x9, 0x2, 0x2, 0x2, 0x54, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x53, 0x3, 0x2, 0x2, 0x2, 0x55, 0x65, 0x3, 
    0x2, 0x2, 0x2, 0x56, 0x62, 0x5, 0x6, 0x4, 0x2, 0x57, 0x5e, 0x5, 0x8, 
    0x5, 0x2, 0x58, 0x5a, 0x7, 0x41, 0x2, 0x2, 0x59, 0x5b, 0x5, 0x8, 0x5, 
    0x2, 0x5a, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0x5b, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5d, 
    0x60, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0x5f, 0x63, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5e, 0x3, 
    0x2, 0x2, 0x2, 0x61, 0x63, 0x9, 0x2, 0x2, 0x2, 0x62, 0x57, 0x3, 0x2, 
    0x2, 0x2, 0x62, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 0x65, 0x3, 0x2, 0x2, 
    0x2, 0x64, 0x54, 0x3, 0x2, 0x2, 0x2, 0x64, 0x56, 0x3, 0x2, 0x2, 0x2, 
    0x65, 0x5, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x7, 0x52, 0x2, 0x2, 0x67, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x7, 0x3, 0x2, 0x2, 0x69, 0x6e, 
    0x5, 0x1e, 0x10, 0x2, 0x6a, 0x6b, 0x7, 0x42, 0x2, 0x2, 0x6b, 0x6d, 0x5, 
    0x1e, 0x10, 0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x70, 0x3, 0x2, 
    0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 
    0x2, 0x6f, 0xae, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 
    0x71, 0xae, 0x7, 0x4, 0x2, 0x2, 0x72, 0x76, 0x7, 0x6, 0x2, 0x2, 0x73, 
    0x74, 0x5, 0x3a, 0x1e, 0x2, 0x74, 0x75, 0x7, 0x42, 0x2, 0x2, 0x75, 0x77, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x73, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 
    0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 0x2, 0x2, 0x78, 0xae, 0x5, 0x20, 
    0x11, 0x2, 0x79, 0x7b, 0x7, 0x9, 0x2, 0x2, 0x7a, 0x79, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x80, 0x3, 0x2, 0x2, 0x2, 
    0x7c, 0x7e, 0x7, 0x7, 0x2, 0x2, 0x7d, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7d, 
    0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x80, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7a, 
    0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x3, 
    0x2, 0x2, 0x2, 0x81, 0x82, 0x5, 0x1c, 0xf, 0x2, 0x82, 0x83, 0x7, 0x2c, 
    0x2, 0x2, 0x83, 0x8b, 0x5, 0x2a, 0x16, 0x2, 0x84, 0x85, 0x7, 0x42, 0x2, 
    0x2, 0x85, 0x86, 0x5, 0x1c, 0xf, 0x2, 0x86, 0x87, 0x7, 0x2c, 0x2, 0x2, 
    0x87, 0x88, 0x5, 0x2a, 0x16, 0x2, 0x88, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x89, 
    0x84, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x89, 
    0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0xae, 0x3, 
    0x2, 0x2, 0x2, 0x8d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x8, 
    0x2, 0x2, 0x8f, 0x90, 0x5, 0x1c, 0xf, 0x2, 0x90, 0x91, 0x7, 0x2c, 0x2, 
    0x2, 0x91, 0x99, 0x5, 0x2a, 0x16, 0x2, 0x92, 0x93, 0x7, 0x42, 0x2, 0x2, 
    0x93, 0x94, 0x5, 0x1c, 0xf, 0x2, 0x94, 0x95, 0x7, 0x2c, 0x2, 0x2, 0x95, 
    0x96, 0x5, 0x2a, 0x16, 0x2, 0x96, 0x98, 0x3, 0x2, 0x2, 0x2, 0x97, 0x92, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x99, 0x97, 0x3, 
    0x2, 0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0xae, 0x3, 0x2, 
    0x2, 0x2, 0x9b, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9e, 0x7, 0xa, 0x2, 
    0x2, 0x9d, 0x9f, 0x5, 0x28, 0x15, 0x2, 0x9e, 0x9d, 0x3, 0x2, 0x2, 0x2, 
    0x9e, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xae, 0x3, 0x2, 0x2, 0x2, 0xa0, 
    0xa1, 0x7, 0xd, 0x2, 0x2, 0xa1, 0xa2, 0x5, 0x14, 0xb, 0x2, 0xa2, 0xa3, 
    0x7, 0x44, 0x2, 0x2, 0xa3, 0xa8, 0x5, 0x12, 0xa, 0x2, 0xa4, 0xa5, 0x7, 
    0x42, 0x2, 0x2, 0xa5, 0xa7, 0x5, 0x12, 0xa, 0x2, 0xa6, 0xa4, 0x3, 0x2, 
    0x2, 0x2, 0xa7, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa6, 0x3, 0x2, 0x2, 
    0x2, 0xa8, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x7, 0x46, 0x2, 0x2, 0xac, 
    0xae, 0x3, 0x2, 0x2, 0x2, 0xad, 0x68, 0x3, 0x2, 0x2, 0x2, 0xad, 0x71, 
    0x3, 0x2, 0x2, 0x2, 0xad, 0x72, 0x3, 0x2, 0x2, 0x2, 0xad, 0x7f, 0x3, 
    0x2, 0x2, 0x2, 0xad, 0x8e, 0x3, 0x2, 0x2, 0x2, 0xad, 0x9c, 0x3, 0x2, 
    0x2, 0x2, 0xad, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xae, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0xaf, 0xb3, 0x5, 0xe, 0x8, 0x2, 0xb0, 0xb3, 0x5, 0x10, 0x9, 0x2, 
    0xb1, 0xb3, 0x5, 0xc, 0x7, 0x2, 0xb2, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb2, 
    0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x5, 0x1a, 0xe, 0x2, 0xb5, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0xb6, 0xe7, 0x5, 0x14, 0xb, 0x2, 0xb7, 0xc2, 0x5, 0x14, 
    0xb, 0x2, 0xb8, 0xb9, 0x7, 0x44, 0x2, 0x2, 0xb9, 0xbc, 0x5, 0x3e, 0x20, 
    0x2, 0xba, 0xbb, 0x7, 0x42, 0x2, 0x2, 0xbb, 0xbd, 0x5, 0x3e, 0x20, 0x2, 
    0xbc, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 
    0xbe, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0x46, 0x2, 0x2, 0xbf, 0xc1, 
    0x3, 0x2, 0x2, 0x2, 0xc0, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc4, 0x3, 
    0x2, 0x2, 0x2, 0xc2, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2, 
    0x2, 0x2, 0xc3, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc2, 0x3, 0x2, 0x2, 
    0x2, 0xc5, 0xe7, 0x5, 0x16, 0xc, 0x2, 0xc6, 0xd1, 0x5, 0x16, 0xc, 0x2, 
    0xc7, 0xc8, 0x7, 0x44, 0x2, 0x2, 0xc8, 0xcb, 0x5, 0x3e, 0x20, 0x2, 0xc9, 
    0xca, 0x7, 0x42, 0x2, 0x2, 0xca, 0xcc, 0x5, 0x3e, 0x20, 0x2, 0xcb, 0xc9, 
    0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 
    0x2, 0x2, 0x2, 0xcd, 0xce, 0x7, 0x46, 0x2, 0x2, 0xce, 0xd0, 0x3, 0x2, 
    0x2, 0x2, 0xcf, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd3, 0x3, 0x2, 0x2, 
    0x2, 0xd1, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x3, 0x2, 0x2, 0x2, 
    0xd2, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd4, 
    0xd5, 0x5, 0xc, 0x7, 0x2, 0xd5, 0xd6, 0x5, 0x14, 0xb, 0x2, 0xd6, 0xe7, 
    0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x5, 0xc, 0x7, 0x2, 0xd8, 0xd9, 0x7, 
    0x44, 0x2, 0x2, 0xd9, 0xda, 0x5, 0x3e, 0x20, 0x2, 0xda, 0xdb, 0x7, 0x46, 
    0x2, 0x2, 0xdb, 0xdc, 0x5, 0x14, 0xb, 0x2, 0xdc, 0xe7, 0x3, 0x2, 0x2, 
    0x2, 0xdd, 0xde, 0x5, 0xc, 0x7, 0x2, 0xde, 0xdf, 0x5, 0x16, 0xc, 0x2, 
    0xdf, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x5, 0xc, 0x7, 0x2, 0xe1, 
    0xe2, 0x7, 0x44, 0x2, 0x2, 0xe2, 0xe3, 0x5, 0x3e, 0x20, 0x2, 0xe3, 0xe4, 
    0x7, 0x46, 0x2, 0x2, 0xe4, 0xe5, 0x5, 0x16, 0xc, 0x2, 0xe5, 0xe7, 0x3, 
    0x2, 0x2, 0x2, 0xe6, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xb7, 0x3, 0x2, 
    0x2, 0x2, 0xe6, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xc6, 0x3, 0x2, 0x2, 
    0x2, 0xe6, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xd7, 0x3, 0x2, 0x2, 0x2, 
    0xe6, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe7, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0xe8, 0x101, 0x5, 0x18, 0xd, 0x2, 0xe9, 0xf4, 
    0x5, 0x18, 0xd, 0x2, 0xea, 0xeb, 0x7, 0x44, 0x2, 0x2, 0xeb, 0xee, 0x5, 
    0x3e, 0x20, 0x2, 0xec, 0xed, 0x7, 0x42, 0x2, 0x2, 0xed, 0xef, 0x5, 0x3e, 
    0x20, 0x2, 0xee, 0xec, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x3, 0x2, 0x2, 
    0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0x46, 0x2, 0x2, 
    0xf1, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xea, 0x3, 0x2, 0x2, 0x2, 0xf3, 
    0xf6, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 
    0x3, 0x2, 0x2, 0x2, 0xf5, 0x101, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf4, 0x3, 
    0x2, 0x2, 0x2, 0xf7, 0xf8, 0x5, 0xc, 0x7, 0x2, 0xf8, 0xf9, 0x5, 0x18, 
    0xd, 0x2, 0xf9, 0x101, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0xc, 0x7, 
    0x2, 0xfb, 0xfc, 0x7, 0x44, 0x2, 0x2, 0xfc, 0xfd, 0x5, 0x3e, 0x20, 0x2, 
    0xfd, 0xfe, 0x7, 0x46, 0x2, 0x2, 0xfe, 0xff, 0x5, 0x18, 0xd, 0x2, 0xff, 
    0x101, 0x3, 0x2, 0x2, 0x2, 0x100, 0xe8, 0x3, 0x2, 0x2, 0x2, 0x100, 0xe9, 
    0x3, 0x2, 0x2, 0x2, 0x100, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x100, 0xfa, 0x3, 
    0x2, 0x2, 0x2, 0x101, 0x11, 0x3, 0x2, 0x2, 0x2, 0x102, 0x106, 0x5, 0x14, 
    0xb, 0x2, 0x103, 0x106, 0x5, 0x16, 0xc, 0x2, 0x104, 0x106, 0x5, 0x18, 
    0xd, 0x2, 0x105, 0x102, 0x3, 0x2, 0x2, 0x2, 0x105, 0x103, 0x3, 0x2, 
    0x2, 0x2, 0x105, 0x104, 0x3, 0x2, 0x2, 0x2, 0x106, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x107, 0x108, 0x7, 0x4b, 0x2, 0x2, 0x108, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x109, 0x10a, 0x7, 0x4c, 0x2, 0x2, 0x10a, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x10b, 0x10c, 0x7, 0x4d, 0x2, 0x2, 0x10c, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x10d, 0x10e, 0x7, 0x4e, 0x2, 0x2, 0x10e, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x10f, 0x128, 0x5, 0xa, 0x6, 0x2, 0x110, 0x11b, 0x5, 0xa, 0x6, 
    0x2, 0x111, 0x112, 0x7, 0x44, 0x2, 0x2, 0x112, 0x115, 0x5, 0x3e, 0x20, 
    0x2, 0x113, 0x114, 0x7, 0x42, 0x2, 0x2, 0x114, 0x116, 0x5, 0x3e, 0x20, 
    0x2, 0x115, 0x113, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 0x3, 0x2, 0x2, 
    0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 0x7, 0x46, 0x2, 
    0x2, 0x118, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x119, 0x111, 0x3, 0x2, 0x2, 
    0x2, 0x11a, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x119, 0x3, 0x2, 0x2, 
    0x2, 0x11b, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x128, 0x3, 0x2, 0x2, 
    0x2, 0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x5, 0xc, 0x7, 
    0x2, 0x11f, 0x120, 0x5, 0x14, 0xb, 0x2, 0x120, 0x128, 0x3, 0x2, 0x2, 
    0x2, 0x121, 0x122, 0x5, 0xc, 0x7, 0x2, 0x122, 0x123, 0x7, 0x44, 0x2, 
    0x2, 0x123, 0x124, 0x5, 0x3e, 0x20, 0x2, 0x124, 0x125, 0x7, 0x46, 0x2, 
    0x2, 0x125, 0x126, 0x5, 0x14, 0xb, 0x2, 0x126, 0x128, 0x3, 0x2, 0x2, 
    0x2, 0x127, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x127, 0x110, 0x3, 0x2, 0x2, 
    0x2, 0x127, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x127, 0x121, 0x3, 0x2, 0x2, 
    0x2, 0x128, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x5, 0xa, 0x6, 0x2, 
    0x12a, 0x12b, 0x7, 0x44, 0x2, 0x2, 0x12b, 0x130, 0x5, 0x3e, 0x20, 0x2, 
    0x12c, 0x12d, 0x7, 0x42, 0x2, 0x2, 0x12d, 0x12f, 0x5, 0x3e, 0x20, 0x2, 
    0x12e, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x132, 0x3, 0x2, 0x2, 0x2, 
    0x130, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x3, 0x2, 0x2, 0x2, 
    0x131, 0x133, 0x3, 0x2, 0x2, 0x2, 0x132, 0x130, 0x3, 0x2, 0x2, 0x2, 
    0x133, 0x134, 0x7, 0x46, 0x2, 0x2, 0x134, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x135, 0x13a, 0x5, 0x1c, 0xf, 0x2, 0x136, 0x137, 0x7, 0x42, 0x2, 0x2, 
    0x137, 0x139, 0x5, 0x1c, 0xf, 0x2, 0x138, 0x136, 0x3, 0x2, 0x2, 0x2, 
    0x139, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x138, 0x3, 0x2, 0x2, 0x2, 
    0x13a, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x21, 0x3, 0x2, 0x2, 0x2, 0x13c, 
    0x13a, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x142, 0x5, 0x2a, 0x16, 0x2, 0x13e, 
    0x13f, 0x7, 0x42, 0x2, 0x2, 0x13f, 0x141, 0x5, 0x2a, 0x16, 0x2, 0x140, 
    0x13e, 0x3, 0x2, 0x2, 0x2, 0x141, 0x144, 0x3, 0x2, 0x2, 0x2, 0x142, 
    0x140, 0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 0x3, 0x2, 0x2, 0x2, 0x143, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x144, 0x142, 0x3, 0x2, 0x2, 0x2, 0x145, 0x147, 
    0x7, 0x40, 0x2, 0x2, 0x146, 0x145, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 
    0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 0x2, 0x2, 0x2, 0x148, 0x151, 
    0x5, 0x2a, 0x16, 0x2, 0x149, 0x14a, 0x7, 0xc, 0x2, 0x2, 0x14a, 0x14b, 
    0x7, 0x44, 0x2, 0x2, 0x14b, 0x14c, 0x5, 0x3e, 0x20, 0x2, 0x14c, 0x14d, 
    0x7, 0x46, 0x2, 0x2, 0x14d, 0x151, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 
    0x7, 0xc, 0x2, 0x2, 0x14f, 0x151, 0x5, 0x3e, 0x20, 0x2, 0x150, 0x146, 
    0x3, 0x2, 0x2, 0x2, 0x150, 0x149, 0x3, 0x2, 0x2, 0x2, 0x150, 0x14e, 
    0x3, 0x2, 0x2, 0x2, 0x151, 0x25, 0x3, 0x2, 0x2, 0x2, 0x152, 0x154, 0x7, 
    0x3f, 0x2, 0x2, 0x153, 0x152, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 0x3, 
    0x2, 0x2, 0x2, 0x155, 0x153, 0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 0x3, 
    0x2, 0x2, 0x2, 0x156, 0x27, 0x3, 0x2, 0x2, 0x2, 0x157, 0x159, 0x5, 0x26, 
    0x14, 0x2, 0x158, 0x157, 0x3, 0x2, 0x2, 0x2, 0x158, 0x159, 0x3, 0x2, 
    0x2, 0x2, 0x159, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15c, 0x7, 0x42, 
    0x2, 0x2, 0x15b, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 0x3, 0x2, 
    0x2, 0x2, 0x15c, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x164, 0x5, 0x24, 
    0x13, 0x2, 0x15e, 0x160, 0x9, 0x3, 0x2, 0x2, 0x15f, 0x161, 0x5, 0x24, 
    0x13, 0x2, 0x160, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x3, 0x2, 
    0x2, 0x2, 0x161, 0x163, 0x3, 0x2, 0x2, 0x2, 0x162, 0x15e, 0x3, 0x2, 
    0x2, 0x2, 0x163, 0x166, 0x3, 0x2, 0x2, 0x2, 0x164, 0x162, 0x3, 0x2, 
    0x2, 0x2, 0x164, 0x165, 0x3, 0x2, 0x2, 0x2, 0x165, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x166, 0x164, 0x3, 0x2, 0x2, 0x2, 0x167, 0x16a, 0x5, 0x3e, 0x20, 
    0x2, 0x168, 0x16a, 0x5, 0x3a, 0x1e, 0x2, 0x169, 0x167, 0x3, 0x2, 0x2, 
    0x2, 0x169, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0x16b, 0x170, 0x5, 0x2e, 0x18, 0x2, 0x16c, 0x170, 0x5, 0x34, 0x1b, 0x2, 
    0x16d, 0x170, 0x5, 0x30, 0x19, 0x2, 0x16e, 0x170, 0x5, 0x32, 0x1a, 0x2, 
    0x16f, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x16c, 0x3, 0x2, 0x2, 0x2, 
    0x16f, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x16e, 0x3, 0x2, 0x2, 0x2, 
    0x170, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x171, 0x173, 0x9, 0x4, 0x2, 0x2, 0x172, 
    0x171, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 0x3, 0x2, 0x2, 0x2, 0x173, 
    0x174, 0x3, 0x2, 0x2, 0x2, 0x174, 0x175, 0x7, 0x52, 0x2, 0x2, 0x175, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 0x7, 0x50, 0x2, 0x2, 0x177, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x7, 0x51, 0x2, 0x2, 0x179, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17c, 0x9, 0x4, 0x2, 0x2, 0x17b, 0x17a, 
    0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 
    0x3, 0x2, 0x2, 0x2, 0x17d, 0x17e, 0x7, 0x53, 0x2, 0x2, 0x17e, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x17f, 0x1b8, 0x7, 0x22, 0x2, 0x2, 0x180, 0x181, 
    0x7, 0x25, 0x2, 0x2, 0x181, 0x182, 0x7, 0x44, 0x2, 0x2, 0x182, 0x183, 
    0x5, 0x3e, 0x20, 0x2, 0x183, 0x184, 0x7, 0x46, 0x2, 0x2, 0x184, 0x1b8, 
    0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x7, 0x25, 0x2, 0x2, 0x186, 0x1b8, 
    0x5, 0x3e, 0x20, 0x2, 0x187, 0x188, 0x7, 0x26, 0x2, 0x2, 0x188, 0x189, 
    0x7, 0x44, 0x2, 0x2, 0x189, 0x18a, 0x5, 0x3a, 0x1e, 0x2, 0x18a, 0x18b, 
    0x7, 0x42, 0x2, 0x2, 0x18b, 0x18c, 0x5, 0x3e, 0x20, 0x2, 0x18c, 0x18d, 
    0x7, 0x46, 0x2, 0x2, 0x18d, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 
    0x7, 0x27, 0x2, 0x2, 0x18f, 0x190, 0x7, 0x44, 0x2, 0x2, 0x190, 0x191, 
    0x5, 0x3a, 0x1e, 0x2, 0x191, 0x192, 0x7, 0x42, 0x2, 0x2, 0x192, 0x193, 
    0x5, 0x3e, 0x20, 0x2, 0x193, 0x194, 0x7, 0x42, 0x2, 0x2, 0x194, 0x195, 
    0x5, 0x3e, 0x20, 0x2, 0x195, 0x196, 0x7, 0x46, 0x2, 0x2, 0x196, 0x1b8, 
    0x3, 0x2, 0x2, 0x2, 0x197, 0x198, 0x7, 0x27, 0x2, 0x2, 0x198, 0x199, 
    0x7, 0x44, 0x2, 0x2, 0x199, 0x19a, 0x5, 0x3a, 0x1e, 0x2, 0x19a, 0x19b, 
    0x7, 0x42, 0x2, 0x2, 0x19b, 0x19c, 0x5, 0x3e, 0x20, 0x2, 0x19c, 0x19d, 
    0x7, 0x46, 0x2, 0x2, 0x19d, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 
    0x7, 0x28, 0x2, 0x2, 0x19f, 0x1a0, 0x7, 0x44, 0x2, 0x2, 0x1a0, 0x1a1, 
    0x5, 0x3a, 0x1e, 0x2, 0x1a1, 0x1a2, 0x7, 0x42, 0x2, 0x2, 0x1a2, 0x1a3, 
    0x5, 0x3e, 0x20, 0x2, 0x1a3, 0x1a4, 0x7, 0x46, 0x2, 0x2, 0x1a4, 0x1b8, 
    0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a6, 0x7, 0x23, 0x2, 0x2, 0x1a6, 0x1a7, 
    0x7, 0x44, 0x2, 0x2, 0x1a7, 0x1a8, 0x5, 0x3e, 0x20, 0x2, 0x1a8, 0x1a9, 
    0x7, 0x46, 0x2, 0x2, 0x1a9, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 
    0x7, 0x23, 0x2, 0x2, 0x1ab, 0x1ac, 0x7, 0x40, 0x2, 0x2, 0x1ac, 0x1ad, 
    0x7, 0x44, 0x2, 0x2, 0x1ad, 0x1ae, 0x5, 0x3e, 0x20, 0x2, 0x1ae, 0x1af, 
    0x7, 0x46, 0x2, 0x2, 0x1af, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b1, 
    0x7, 0x24, 0x2, 0x2, 0x1b1, 0x1b2, 0x7, 0x44, 0x2, 0x2, 0x1b2, 0x1b3, 
    0x5, 0x3e, 0x20, 0x2, 0x1b3, 0x1b4, 0x7, 0x42, 0x2, 0x2, 0x1b4, 0x1b5, 
    0x5, 0x3a, 0x1e, 0x2, 0x1b5, 0x1b6, 0x7, 0x46, 0x2, 0x2, 0x1b6, 0x1b8, 
    0x3, 0x2, 0x2, 0x2, 0x1b7, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x180, 
    0x3, 0x2, 0x2, 0x2, 0x1b7, 0x185, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x187, 
    0x3, 0x2, 0x2, 0x2, 0x1b7, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x197, 
    0x3, 0x2, 0x2, 0x2, 0x1b7, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1a5, 
    0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b0, 
    0x3, 0x2, 0x2, 0x2, 0x1b8, 0x37, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x7, 
    0x4a, 0x2, 0x2, 0x1ba, 0x39, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x8, 
    0x1e, 0x1, 0x2, 0x1bc, 0x1c0, 0x5, 0x38, 0x1d, 0x2, 0x1bd, 0x1c0, 0x5, 
    0x10, 0x9, 0x2, 0x1be, 0x1c0, 0x5, 0x36, 0x1c, 0x2, 0x1bf, 0x1bb, 0x3, 
    0x2, 0x2, 0x2, 0x1bf, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1be, 0x3, 
    0x2, 0x2, 0x2, 0x1c0, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c2, 0xc, 
    0x3, 0x2, 0x2, 0x1c2, 0x1c3, 0x7, 0x39, 0x2, 0x2, 0x1c3, 0x1c5, 0x5, 
    0x3a, 0x1e, 0x4, 0x1c4, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c8, 0x3, 
    0x2, 0x2, 0x2, 0x1c6, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c7, 0x3, 
    0x2, 0x2, 0x2, 0x1c7, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c6, 0x3, 0x2, 
    0x2, 0x2, 0x1c9, 0x239, 0x7, 0xf, 0x2, 0x2, 0x1ca, 0x239, 0x7, 0xe, 
    0x2, 0x2, 0x1cb, 0x239, 0x7, 0x29, 0x2, 0x2, 0x1cc, 0x239, 0x7, 0x2a, 
    0x2, 0x2, 0x1cd, 0x239, 0x7, 0x2b, 0x2, 0x2, 0x1ce, 0x1cf, 0x7, 0x29, 
    0x2, 0x2, 0x1cf, 0x1d0, 0x7, 0x44, 0x2, 0x2, 0x1d0, 0x1d1, 0x5, 0x3e, 
    0x20, 0x2, 0x1d1, 0x1d2, 0x7, 0x46, 0x2, 0x2, 0x1d2, 0x239, 0x3, 0x2, 
    0x2, 0x2, 0x1d3, 0x1d4, 0x7, 0x11, 0x2, 0x2, 0x1d4, 0x1d5, 0x7, 0x44, 
    0x2, 0x2, 0x1d5, 0x1d6, 0x5, 0x3e, 0x20, 0x2, 0x1d6, 0x1d7, 0x7, 0x46, 
    0x2, 0x2, 0x1d7, 0x239, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d9, 0x7, 0x12, 
    0x2, 0x2, 0x1d9, 0x1da, 0x7, 0x44, 0x2, 0x2, 0x1da, 0x1db, 0x5, 0x3e, 
    0x20, 0x2, 0x1db, 0x1dc, 0x7, 0x46, 0x2, 0x2, 0x1dc, 0x239, 0x3, 0x2, 
    0x2, 0x2, 0x1dd, 0x1de, 0x7, 0x13, 0x2, 0x2, 0x1de, 0x1df, 0x7, 0x44, 
    0x2, 0x2, 0x1df, 0x1e0, 0x5, 0x3e, 0x20, 0x2, 0x1e0, 0x1e1, 0x7, 0x46, 
    0x2, 0x2, 0x1e1, 0x239, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e3, 0x7, 0x14, 
    0x2, 0x2, 0x1e3, 0x1e4, 0x7, 0x44, 0x2, 0x2, 0x1e4, 0x1e5, 0x5, 0x3e, 
    0x20, 0x2, 0x1e5, 0x1e6, 0x7, 0x46, 0x2, 0x2, 0x1e6, 0x239, 0x3, 0x2, 
    0x2, 0x2, 0x1e7, 0x1e8, 0x7, 0x15, 0x2, 0x2, 0x1e8, 0x1e9, 0x7, 0x44, 
    0x2, 0x2, 0x1e9, 0x1ea, 0x5, 0x3e, 0x20, 0x2, 0x1ea, 0x1eb, 0x7, 0x46, 
    0x2, 0x2, 0x1eb, 0x239, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ed, 0x7, 0x16, 
    0x2, 0x2, 0x1ed, 0x1ee, 0x7, 0x44, 0x2, 0x2, 0x1ee, 0x1ef, 0x5, 0x3e, 
    0x20, 0x2, 0x1ef, 0x1f0, 0x7, 0x46, 0x2, 0x2, 0x1f0, 0x239, 0x3, 0x2, 
    0x2, 0x2, 0x1f1, 0x1f2, 0x7, 0x17, 0x2, 0x2, 0x1f2, 0x1f3, 0x7, 0x44, 
    0x2, 0x2, 0x1f3, 0x1f4, 0x5, 0x3e, 0x20, 0x2, 0x1f4, 0x1f5, 0x7, 0x46, 
    0x2, 0x2, 0x1f5, 0x239, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f7, 0x7, 0x18, 
    0x2, 0x2, 0x1f7, 0x1f8, 0x7, 0x44, 0x2, 0x2, 0x1f8, 0x1f9, 0x5, 0x3e, 
    0x20, 0x2, 0x1f9, 0x1fa, 0x7, 0x46, 0x2, 0x2, 0x1fa, 0x239, 0x3, 0x2, 
    0x2, 0x2, 0x1fb, 0x1fc, 0x7, 0x19, 0x2, 0x2, 0x1fc, 0x1fd, 0x7, 0x44, 
    0x2, 0x2, 0x1fd, 0x1fe, 0x5, 0x3e, 0x20, 0x2, 0x1fe, 0x1ff, 0x7, 0x46, 
    0x2, 0x2, 0x1ff, 0x239, 0x3, 0x2, 0x2, 0x2, 0x200, 0x201, 0x7, 0x1a, 
    0x2, 0x2, 0x201, 0x202, 0x7, 0x44, 0x2, 0x2, 0x202, 0x203, 0x5, 0x3e, 
    0x20, 0x2, 0x203, 0x204, 0x7, 0x46, 0x2, 0x2, 0x204, 0x239, 0x3, 0x2, 
    0x2, 0x2, 0x205, 0x206, 0x7, 0x1b, 0x2, 0x2, 0x206, 0x207, 0x7, 0x44, 
    0x2, 0x2, 0x207, 0x208, 0x5, 0x3e, 0x20, 0x2, 0x208, 0x209, 0x7, 0x46, 
    0x2, 0x2, 0x209, 0x239, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x7, 0x1c, 
    0x2, 0x2, 0x20b, 0x20c, 0x7, 0x44, 0x2, 0x2, 0x20c, 0x20d, 0x5, 0x3e, 
    0x20, 0x2, 0x20d, 0x20e, 0x7, 0x46, 0x2, 0x2, 0x20e, 0x239, 0x3, 0x2, 
    0x2, 0x2, 0x20f, 0x210, 0x7, 0x10, 0x2, 0x2, 0x210, 0x211, 0x7, 0x44, 
    0x2, 0x2, 0x211, 0x212, 0x5, 0x3e, 0x20, 0x2, 0x212, 0x213, 0x7, 0x46, 
    0x2, 0x2, 0x213, 0x239, 0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 0x7, 0x1d, 
    0x2, 0x2, 0x215, 0x216, 0x7, 0x44, 0x2, 0x2, 0x216, 0x217, 0x5, 0x3e, 
    0x20, 0x2, 0x217, 0x218, 0x7, 0x46, 0x2, 0x2, 0x218, 0x239, 0x3, 0x2, 
    0x2, 0x2, 0x219, 0x21a, 0x7, 0x1e, 0x2, 0x2, 0x21a, 0x21b, 0x7, 0x44, 
    0x2, 0x2, 0x21b, 0x21c, 0x5, 0x3a, 0x1e, 0x2, 0x21c, 0x21d, 0x7, 0x46, 
    0x2, 0x2, 0x21d, 0x239, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 0x7, 0x1f, 
    0x2, 0x2, 0x21f, 0x220, 0x7, 0x44, 0x2, 0x2, 0x220, 0x221, 0x5, 0x3a, 
    0x1e, 0x2, 0x221, 0x222, 0x7, 0x46, 0x2, 0x2, 0x222, 0x239, 0x3, 0x2, 
    0x2, 0x2, 0x223, 0x224, 0x7, 0x20, 0x2, 0x2, 0x224, 0x225, 0x7, 0x44, 
    0x2, 0x2, 0x225, 0x226, 0x5, 0x3a, 0x1e, 0x2, 0x226, 0x227, 0x7, 0x42, 
    0x2, 0x2, 0x227, 0x228, 0x5, 0x3a, 0x1e, 0x2, 0x228, 0x229, 0x7, 0x46, 
    0x2, 0x2, 0x229, 0x239, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22b, 0x7, 0x20, 
    0x2, 0x2, 0x22b, 0x22c, 0x7, 0x44, 0x2, 0x2, 0x22c, 0x22d, 0x5, 0x3a, 
    0x1e, 0x2, 0x22d, 0x22e, 0x7, 0x42, 0x2, 0x2, 0x22e, 0x22f, 0x5, 0x3a, 
    0x1e, 0x2, 0x22f, 0x230, 0x7, 0x42, 0x2, 0x2, 0x230, 0x231, 0x5, 0x3e, 
    0x20, 0x2, 0x231, 0x232, 0x7, 0x46, 0x2, 0x2, 0x232, 0x239, 0x3, 0x2, 
    0x2, 0x2, 0x233, 0x234, 0x7, 0x21, 0x2, 0x2, 0x234, 0x235, 0x7, 0x44, 
    0x2, 0x2, 0x235, 0x236, 0x5, 0x3a, 0x1e, 0x2, 0x236, 0x237, 0x7, 0x46, 
    0x2, 0x2, 0x237, 0x239, 0x3, 0x2, 0x2, 0x2, 0x238, 0x1c9, 0x3, 0x2, 
    0x2, 0x2, 0x238, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x238, 0x1cb, 0x3, 0x2, 
    0x2, 0x2, 0x238, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x238, 0x1cd, 0x3, 0x2, 
    0x2, 0x2, 0x238, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x238, 0x1d3, 0x3, 0x2, 
    0x2, 0x2, 0x238, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x238, 0x1dd, 0x3, 0x2, 
    0x2, 0x2, 0x238, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x238, 0x1e7, 0x3, 0x2, 
    0x2, 0x2, 0x238, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x238, 0x1f1, 0x3, 0x2, 
    0x2, 0x2, 0x238, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x238, 0x1fb, 0x3, 0x2, 
    0x2, 0x2, 0x238, 0x200, 0x3, 0x2, 0x2, 0x2, 0x238, 0x205, 0x3, 0x2, 
    0x2, 0x2, 0x238, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x238, 0x20f, 0x3, 0x2, 
    0x2, 0x2, 0x238, 0x214, 0x3, 0x2, 0x2, 0x2, 0x238, 0x219, 0x3, 0x2, 
    0x2, 0x2, 0x238, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x238, 0x223, 0x3, 0x2, 
    0x2, 0x2, 0x238, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x238, 0x233, 0x3, 0x2, 
    0x2, 0x2, 0x239, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23b, 0x8, 0x20, 
    0x1, 0x2, 0x23b, 0x249, 0x5, 0x2c, 0x17, 0x2, 0x23c, 0x249, 0x5, 0xe, 
    0x8, 0x2, 0x23d, 0x249, 0x5, 0x3c, 0x1f, 0x2, 0x23e, 0x23f, 0x7, 0x32, 
    0x2, 0x2, 0x23f, 0x249, 0x5, 0x3e, 0x20, 0x12, 0x240, 0x241, 0x7, 0x44, 
    0x2, 0x2, 0x241, 0x242, 0x5, 0x3e, 0x20, 0x2, 0x242, 0x243, 0x7, 0x46, 
    0x2, 0x2, 0x243, 0x249, 0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 0x5, 0x3a, 
    0x1e, 0x2, 0x245, 0x246, 0x5, 0x40, 0x21, 0x2, 0x246, 0x247, 0x5, 0x3a, 
    0x1e, 0x2, 0x247, 0x249, 0x3, 0x2, 0x2, 0x2, 0x248, 0x23a, 0x3, 0x2, 
    0x2, 0x2, 0x248, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x248, 0x23d, 0x3, 0x2, 
    0x2, 0x2, 0x248, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x248, 0x240, 0x3, 0x2, 
    0x2, 0x2, 0x248, 0x244, 0x3, 0x2, 0x2, 0x2, 0x249, 0x274, 0x3, 0x2, 
    0x2, 0x2, 0x24a, 0x24b, 0xc, 0x10, 0x2, 0x2, 0x24b, 0x24c, 0x7, 0x38, 
    0x2, 0x2, 0x24c, 0x273, 0x5, 0x3e, 0x20, 0x10, 0x24d, 0x24e, 0xc, 0xf, 
    0x2, 0x2, 0x24e, 0x24f, 0x7, 0x3b, 0x2, 0x2, 0x24f, 0x273, 0x5, 0x3e, 
    0x20, 0x10, 0x250, 0x251, 0xc, 0xe, 0x2, 0x2, 0x251, 0x252, 0x7, 0x3c, 
    0x2, 0x2, 0x252, 0x273, 0x5, 0x3e, 0x20, 0xf, 0x253, 0x254, 0xc, 0xd, 
    0x2, 0x2, 0x254, 0x255, 0x7, 0x37, 0x2, 0x2, 0x255, 0x273, 0x5, 0x3e, 
    0x20, 0xe, 0x256, 0x257, 0xc, 0xc, 0x2, 0x2, 0x257, 0x258, 0x7, 0x36, 
    0x2, 0x2, 0x258, 0x273, 0x5, 0x3e, 0x20, 0xd, 0x259, 0x25a, 0xc, 0xb, 
    0x2, 0x2, 0x25a, 0x25b, 0x7, 0x39, 0x2, 0x2, 0x25b, 0x273, 0x5, 0x3e, 
    0x20, 0xc, 0x25c, 0x25d, 0xc, 0xa, 0x2, 0x2, 0x25d, 0x25e, 0x7, 0x3a, 
    0x2, 0x2, 0x25e, 0x273, 0x5, 0x3e, 0x20, 0xb, 0x25f, 0x260, 0xc, 0x9, 
    0x2, 0x2, 0x260, 0x261, 0x5, 0x40, 0x21, 0x2, 0x261, 0x262, 0x5, 0x3e, 
    0x20, 0xa, 0x262, 0x273, 0x3, 0x2, 0x2, 0x2, 0x263, 0x264, 0xc, 0x7, 
    0x2, 0x2, 0x264, 0x265, 0x7, 0x3d, 0x2, 0x2, 0x265, 0x273, 0x5, 0x3e, 
    0x20, 0x8, 0x266, 0x267, 0xc, 0x6, 0x2, 0x2, 0x267, 0x268, 0x7, 0x3e, 
    0x2, 0x2, 0x268, 0x273, 0x5, 0x3e, 0x20, 0x7, 0x269, 0x26a, 0xc, 0x5, 
    0x2, 0x2, 0x26a, 0x26b, 0x7, 0x33, 0x2, 0x2, 0x26b, 0x273, 0x5, 0x3e, 
    0x20, 0x6, 0x26c, 0x26d, 0xc, 0x4, 0x2, 0x2, 0x26d, 0x26e, 0x7, 0x34, 
    0x2, 0x2, 0x26e, 0x273, 0x5, 0x3e, 0x20, 0x5, 0x26f, 0x270, 0xc, 0x3, 
    0x2, 0x2, 0x270, 0x271, 0x7, 0x35, 0x2, 0x2, 0x271, 0x273, 0x5, 0x3e, 
    0x20, 0x4, 0x272, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x272, 0x24d, 0x3, 0x2, 
    0x2, 0x2, 0x272, 0x250, 0x3, 0x2, 0x2, 0x2, 0x272, 0x253, 0x3, 0x2, 
    0x2, 0x2, 0x272, 0x256, 0x3, 0x2, 0x2, 0x2, 0x272, 0x259, 0x3, 0x2, 
    0x2, 0x2, 0x272, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x272, 0x25f, 0x3, 0x2, 
    0x2, 0x2, 0x272, 0x263, 0x3, 0x2, 0x2, 0x2, 0x272, 0x266, 0x3, 0x2, 
    0x2, 0x2, 0x272, 0x269, 0x3, 0x2, 0x2, 0x2, 0x272, 0x26c, 0x3, 0x2, 
    0x2, 0x2, 0x272, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x273, 0x276, 0x3, 0x2, 
    0x2, 0x2, 0x274, 0x272, 0x3, 0x2, 0x2, 0x2, 0x274, 0x275, 0x3, 0x2, 
    0x2, 0x2, 0x275, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x276, 0x274, 0x3, 0x2, 0x2, 
    0x2, 0x277, 0x27e, 0x7, 0x2c, 0x2, 0x2, 0x278, 0x27e, 0x7, 0x2d, 0x2, 
    0x2, 0x279, 0x27e, 0x7, 0x2e, 0x2, 0x2, 0x27a, 0x27e, 0x7, 0x2f, 0x2, 
    0x2, 0x27b, 0x27e, 0x7, 0x30, 0x2, 0x2, 0x27c, 0x27e, 0x7, 0x31, 0x2, 
    0x2, 0x27d, 0x277, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x278, 0x3, 0x2, 0x2, 
    0x2, 0x27d, 0x279, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x27a, 0x3, 0x2, 0x2, 
    0x2, 0x27d, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x27c, 0x3, 0x2, 0x2, 
    0x2, 0x27e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x37, 0x45, 0x4c, 0x50, 0x54, 
    0x5a, 0x5e, 0x62, 0x64, 0x6e, 0x76, 0x7a, 0x7d, 0x7f, 0x8b, 0x99, 0x9e, 
    0xa8, 0xad, 0xb2, 0xbc, 0xc2, 0xcb, 0xd1, 0xe6, 0xee, 0xf4, 0x100, 0x105, 
    0x115, 0x11b, 0x127, 0x130, 0x13a, 0x142, 0x146, 0x150, 0x155, 0x158, 
    0x15b, 0x160, 0x164, 0x169, 0x16f, 0x172, 0x17b, 0x1b7, 0x1bf, 0x1c6, 
    0x238, 0x248, 0x272, 0x274, 0x27d, 
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
