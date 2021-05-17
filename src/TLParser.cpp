
// Generated from ./TL.g4 by ANTLR 4.9.2


#include "TLListener.h"
#include "TLVisitor.h"

#include "TLParser.h"


using namespace antlrcpp;
using namespace antlr4;

TLParser::TLParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

TLParser::~TLParser() {
  delete _interpreter;
}

std::string TLParser::getGrammarFileName() const {
  return "TL.g4";
}

const std::vector<std::string>& TLParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& TLParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ParseContext ------------------------------------------------------------------

TLParser::ParseContext::ParseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TLParser::ParseContext::EOF() {
  return getToken(TLParser::EOF, 0);
}

TLParser::BlockContext* TLParser::ParseContext::block() {
  return getRuleContext<TLParser::BlockContext>(0);
}

TLParser::StatementContext* TLParser::ParseContext::statement() {
  return getRuleContext<TLParser::StatementContext>(0);
}


size_t TLParser::ParseContext::getRuleIndex() const {
  return TLParser::RuleParse;
}

void TLParser::ParseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParse(this);
}

void TLParser::ParseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParse(this);
}


antlrcpp::Any TLParser::ParseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitParse(this);
  else
    return visitor->visitChildren(this);
}

TLParser::ParseContext* TLParser::parse() {
  ParseContext *_localctx = _tracker.createInstance<ParseContext>(_ctx, getState());
  enterRule(_localctx, 0, TLParser::RuleParse);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      setState(34);
      block();
      break;
    }

    case 2: {
      setState(35);
      statement();
      break;
    }

    default:
      break;
    }
    setState(38);
    match(TLParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

TLParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TLParser::StatementContext *> TLParser::BlockContext::statement() {
  return getRuleContexts<TLParser::StatementContext>();
}

TLParser::StatementContext* TLParser::BlockContext::statement(size_t i) {
  return getRuleContext<TLParser::StatementContext>(i);
}

std::vector<TLParser::FunctionDeclContext *> TLParser::BlockContext::functionDecl() {
  return getRuleContexts<TLParser::FunctionDeclContext>();
}

TLParser::FunctionDeclContext* TLParser::BlockContext::functionDecl(size_t i) {
  return getRuleContext<TLParser::FunctionDeclContext>(i);
}

tree::TerminalNode* TLParser::BlockContext::Return() {
  return getToken(TLParser::Return, 0);
}

TLParser::ExpressionContext* TLParser::BlockContext::expression() {
  return getRuleContext<TLParser::ExpressionContext>(0);
}

tree::TerminalNode* TLParser::BlockContext::SColon() {
  return getToken(TLParser::SColon, 0);
}


size_t TLParser::BlockContext::getRuleIndex() const {
  return TLParser::RuleBlock;
}

void TLParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void TLParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any TLParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

TLParser::BlockContext* TLParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 2, TLParser::RuleBlock);
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
    setState(44);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TLParser::Println)
      | (1ULL << TLParser::Print)
      | (1ULL << TLParser::Assert)
      | (1ULL << TLParser::Size)
      | (1ULL << TLParser::Def)
      | (1ULL << TLParser::If)
      | (1ULL << TLParser::For)
      | (1ULL << TLParser::While)
      | (1ULL << TLParser::BuildIdentifier)
      | (1ULL << TLParser::Identifier))) != 0)) {
      setState(42);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TLParser::Println:
        case TLParser::Print:
        case TLParser::Assert:
        case TLParser::Size:
        case TLParser::If:
        case TLParser::For:
        case TLParser::While:
        case TLParser::BuildIdentifier:
        case TLParser::Identifier: {
          setState(40);
          statement();
          break;
        }

        case TLParser::Def: {
          setState(41);
          functionDecl();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(46);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(51);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TLParser::Return) {
      setState(47);
      match(TLParser::Return);
      setState(48);
      expression(0);
      setState(49);
      match(TLParser::SColon);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

TLParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TLParser::AssignmentContext* TLParser::StatementContext::assignment() {
  return getRuleContext<TLParser::AssignmentContext>(0);
}

tree::TerminalNode* TLParser::StatementContext::SColon() {
  return getToken(TLParser::SColon, 0);
}

TLParser::FunctionCallContext* TLParser::StatementContext::functionCall() {
  return getRuleContext<TLParser::FunctionCallContext>(0);
}

TLParser::IfStatementContext* TLParser::StatementContext::ifStatement() {
  return getRuleContext<TLParser::IfStatementContext>(0);
}

TLParser::ForStatementContext* TLParser::StatementContext::forStatement() {
  return getRuleContext<TLParser::ForStatementContext>(0);
}

TLParser::WhileStatementContext* TLParser::StatementContext::whileStatement() {
  return getRuleContext<TLParser::WhileStatementContext>(0);
}


size_t TLParser::StatementContext::getRuleIndex() const {
  return TLParser::RuleStatement;
}

void TLParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void TLParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any TLParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

TLParser::StatementContext* TLParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, TLParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(62);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(53);
      assignment();
      setState(54);
      match(TLParser::SColon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(56);
      functionCall();
      setState(57);
      match(TLParser::SColon);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(59);
      ifStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(60);
      forStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(61);
      whileStatement();
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

//----------------- AssignmentContext ------------------------------------------------------------------

TLParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TLParser::AssignmentContext::Identifier() {
  return getToken(TLParser::Identifier, 0);
}

tree::TerminalNode* TLParser::AssignmentContext::Assign() {
  return getToken(TLParser::Assign, 0);
}

TLParser::ExpressionContext* TLParser::AssignmentContext::expression() {
  return getRuleContext<TLParser::ExpressionContext>(0);
}

TLParser::IndexesContext* TLParser::AssignmentContext::indexes() {
  return getRuleContext<TLParser::IndexesContext>(0);
}


size_t TLParser::AssignmentContext::getRuleIndex() const {
  return TLParser::RuleAssignment;
}

void TLParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void TLParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


antlrcpp::Any TLParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

TLParser::AssignmentContext* TLParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 6, TLParser::RuleAssignment);
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
    setState(64);
    match(TLParser::Identifier);
    setState(66);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TLParser::OBracket) {
      setState(65);
      indexes();
    }
    setState(68);
    match(TLParser::Assign);
    setState(69);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

TLParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TLParser::FunctionCallContext::getRuleIndex() const {
  return TLParser::RuleFunctionCall;
}

void TLParser::FunctionCallContext::copyFrom(FunctionCallContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AssertFunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* TLParser::AssertFunctionCallContext::Assert() {
  return getToken(TLParser::Assert, 0);
}

tree::TerminalNode* TLParser::AssertFunctionCallContext::OParen() {
  return getToken(TLParser::OParen, 0);
}

TLParser::ExpressionContext* TLParser::AssertFunctionCallContext::expression() {
  return getRuleContext<TLParser::ExpressionContext>(0);
}

tree::TerminalNode* TLParser::AssertFunctionCallContext::CParen() {
  return getToken(TLParser::CParen, 0);
}

TLParser::AssertFunctionCallContext::AssertFunctionCallContext(FunctionCallContext *ctx) { copyFrom(ctx); }

void TLParser::AssertFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssertFunctionCall(this);
}
void TLParser::AssertFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssertFunctionCall(this);
}

antlrcpp::Any TLParser::AssertFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitAssertFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SizeFunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* TLParser::SizeFunctionCallContext::Size() {
  return getToken(TLParser::Size, 0);
}

tree::TerminalNode* TLParser::SizeFunctionCallContext::OParen() {
  return getToken(TLParser::OParen, 0);
}

TLParser::ExpressionContext* TLParser::SizeFunctionCallContext::expression() {
  return getRuleContext<TLParser::ExpressionContext>(0);
}

tree::TerminalNode* TLParser::SizeFunctionCallContext::CParen() {
  return getToken(TLParser::CParen, 0);
}

TLParser::SizeFunctionCallContext::SizeFunctionCallContext(FunctionCallContext *ctx) { copyFrom(ctx); }

void TLParser::SizeFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSizeFunctionCall(this);
}
void TLParser::SizeFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSizeFunctionCall(this);
}

antlrcpp::Any TLParser::SizeFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitSizeFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintlnFunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* TLParser::PrintlnFunctionCallContext::Println() {
  return getToken(TLParser::Println, 0);
}

tree::TerminalNode* TLParser::PrintlnFunctionCallContext::OParen() {
  return getToken(TLParser::OParen, 0);
}

tree::TerminalNode* TLParser::PrintlnFunctionCallContext::CParen() {
  return getToken(TLParser::CParen, 0);
}

TLParser::ExpressionContext* TLParser::PrintlnFunctionCallContext::expression() {
  return getRuleContext<TLParser::ExpressionContext>(0);
}

TLParser::PrintlnFunctionCallContext::PrintlnFunctionCallContext(FunctionCallContext *ctx) { copyFrom(ctx); }

void TLParser::PrintlnFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintlnFunctionCall(this);
}
void TLParser::PrintlnFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintlnFunctionCall(this);
}

antlrcpp::Any TLParser::PrintlnFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitPrintlnFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BuildInIdentifierFunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* TLParser::BuildInIdentifierFunctionCallContext::BuildIdentifier() {
  return getToken(TLParser::BuildIdentifier, 0);
}

tree::TerminalNode* TLParser::BuildInIdentifierFunctionCallContext::OParen() {
  return getToken(TLParser::OParen, 0);
}

tree::TerminalNode* TLParser::BuildInIdentifierFunctionCallContext::CParen() {
  return getToken(TLParser::CParen, 0);
}

TLParser::ExprListContext* TLParser::BuildInIdentifierFunctionCallContext::exprList() {
  return getRuleContext<TLParser::ExprListContext>(0);
}

TLParser::BuildInIdentifierFunctionCallContext::BuildInIdentifierFunctionCallContext(FunctionCallContext *ctx) { copyFrom(ctx); }

void TLParser::BuildInIdentifierFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBuildInIdentifierFunctionCall(this);
}
void TLParser::BuildInIdentifierFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBuildInIdentifierFunctionCall(this);
}

antlrcpp::Any TLParser::BuildInIdentifierFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitBuildInIdentifierFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdentifierFunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* TLParser::IdentifierFunctionCallContext::Identifier() {
  return getToken(TLParser::Identifier, 0);
}

tree::TerminalNode* TLParser::IdentifierFunctionCallContext::OParen() {
  return getToken(TLParser::OParen, 0);
}

tree::TerminalNode* TLParser::IdentifierFunctionCallContext::CParen() {
  return getToken(TLParser::CParen, 0);
}

TLParser::ExprListContext* TLParser::IdentifierFunctionCallContext::exprList() {
  return getRuleContext<TLParser::ExprListContext>(0);
}

TLParser::IdentifierFunctionCallContext::IdentifierFunctionCallContext(FunctionCallContext *ctx) { copyFrom(ctx); }

void TLParser::IdentifierFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierFunctionCall(this);
}
void TLParser::IdentifierFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierFunctionCall(this);
}

antlrcpp::Any TLParser::IdentifierFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitIdentifierFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintFunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* TLParser::PrintFunctionCallContext::Print() {
  return getToken(TLParser::Print, 0);
}

tree::TerminalNode* TLParser::PrintFunctionCallContext::OParen() {
  return getToken(TLParser::OParen, 0);
}

TLParser::ExpressionContext* TLParser::PrintFunctionCallContext::expression() {
  return getRuleContext<TLParser::ExpressionContext>(0);
}

tree::TerminalNode* TLParser::PrintFunctionCallContext::CParen() {
  return getToken(TLParser::CParen, 0);
}

TLParser::PrintFunctionCallContext::PrintFunctionCallContext(FunctionCallContext *ctx) { copyFrom(ctx); }

void TLParser::PrintFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintFunctionCall(this);
}
void TLParser::PrintFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintFunctionCall(this);
}

antlrcpp::Any TLParser::PrintFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitPrintFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
TLParser::FunctionCallContext* TLParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 8, TLParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(104);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TLParser::BuildIdentifier: {
        _localctx = dynamic_cast<FunctionCallContext *>(_tracker.createInstance<TLParser::BuildInIdentifierFunctionCallContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(71);
        match(TLParser::BuildIdentifier);
        setState(72);
        match(TLParser::OParen);
        setState(74);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << TLParser::Println)
          | (1ULL << TLParser::Print)
          | (1ULL << TLParser::Input)
          | (1ULL << TLParser::Assert)
          | (1ULL << TLParser::Size)
          | (1ULL << TLParser::Null)
          | (1ULL << TLParser::Excl)
          | (1ULL << TLParser::Subtract)
          | (1ULL << TLParser::OBracket)
          | (1ULL << TLParser::OParen)
          | (1ULL << TLParser::Bool)
          | (1ULL << TLParser::Number)
          | (1ULL << TLParser::BuildIdentifier)
          | (1ULL << TLParser::Identifier)
          | (1ULL << TLParser::String))) != 0)) {
          setState(73);
          exprList();
        }
        setState(76);
        match(TLParser::CParen);
        break;
      }

      case TLParser::Identifier: {
        _localctx = dynamic_cast<FunctionCallContext *>(_tracker.createInstance<TLParser::IdentifierFunctionCallContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(77);
        match(TLParser::Identifier);
        setState(78);
        match(TLParser::OParen);
        setState(80);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << TLParser::Println)
          | (1ULL << TLParser::Print)
          | (1ULL << TLParser::Input)
          | (1ULL << TLParser::Assert)
          | (1ULL << TLParser::Size)
          | (1ULL << TLParser::Null)
          | (1ULL << TLParser::Excl)
          | (1ULL << TLParser::Subtract)
          | (1ULL << TLParser::OBracket)
          | (1ULL << TLParser::OParen)
          | (1ULL << TLParser::Bool)
          | (1ULL << TLParser::Number)
          | (1ULL << TLParser::BuildIdentifier)
          | (1ULL << TLParser::Identifier)
          | (1ULL << TLParser::String))) != 0)) {
          setState(79);
          exprList();
        }
        setState(82);
        match(TLParser::CParen);
        break;
      }

      case TLParser::Println: {
        _localctx = dynamic_cast<FunctionCallContext *>(_tracker.createInstance<TLParser::PrintlnFunctionCallContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(83);
        match(TLParser::Println);
        setState(84);
        match(TLParser::OParen);
        setState(86);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << TLParser::Println)
          | (1ULL << TLParser::Print)
          | (1ULL << TLParser::Input)
          | (1ULL << TLParser::Assert)
          | (1ULL << TLParser::Size)
          | (1ULL << TLParser::Null)
          | (1ULL << TLParser::Excl)
          | (1ULL << TLParser::Subtract)
          | (1ULL << TLParser::OBracket)
          | (1ULL << TLParser::OParen)
          | (1ULL << TLParser::Bool)
          | (1ULL << TLParser::Number)
          | (1ULL << TLParser::BuildIdentifier)
          | (1ULL << TLParser::Identifier)
          | (1ULL << TLParser::String))) != 0)) {
          setState(85);
          expression(0);
        }
        setState(88);
        match(TLParser::CParen);
        break;
      }

      case TLParser::Print: {
        _localctx = dynamic_cast<FunctionCallContext *>(_tracker.createInstance<TLParser::PrintFunctionCallContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(89);
        match(TLParser::Print);
        setState(90);
        match(TLParser::OParen);
        setState(91);
        expression(0);
        setState(92);
        match(TLParser::CParen);
        break;
      }

      case TLParser::Assert: {
        _localctx = dynamic_cast<FunctionCallContext *>(_tracker.createInstance<TLParser::AssertFunctionCallContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(94);
        match(TLParser::Assert);
        setState(95);
        match(TLParser::OParen);
        setState(96);
        expression(0);
        setState(97);
        match(TLParser::CParen);
        break;
      }

      case TLParser::Size: {
        _localctx = dynamic_cast<FunctionCallContext *>(_tracker.createInstance<TLParser::SizeFunctionCallContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(99);
        match(TLParser::Size);
        setState(100);
        match(TLParser::OParen);
        setState(101);
        expression(0);
        setState(102);
        match(TLParser::CParen);
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

//----------------- IfStatementContext ------------------------------------------------------------------

TLParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TLParser::IfStatContext* TLParser::IfStatementContext::ifStat() {
  return getRuleContext<TLParser::IfStatContext>(0);
}

std::vector<TLParser::ElseIfStatContext *> TLParser::IfStatementContext::elseIfStat() {
  return getRuleContexts<TLParser::ElseIfStatContext>();
}

TLParser::ElseIfStatContext* TLParser::IfStatementContext::elseIfStat(size_t i) {
  return getRuleContext<TLParser::ElseIfStatContext>(i);
}

TLParser::ElseStatContext* TLParser::IfStatementContext::elseStat() {
  return getRuleContext<TLParser::ElseStatContext>(0);
}


size_t TLParser::IfStatementContext::getRuleIndex() const {
  return TLParser::RuleIfStatement;
}

void TLParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void TLParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


antlrcpp::Any TLParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

TLParser::IfStatementContext* TLParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, TLParser::RuleIfStatement);
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
    setState(106);
    ifStat();
    setState(110);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(107);
        elseIfStat(); 
      }
      setState(112);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(114);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TLParser::Else) {
      setState(113);
      elseStat();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatContext ------------------------------------------------------------------

TLParser::IfStatContext::IfStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TLParser::IfStatContext::If() {
  return getToken(TLParser::If, 0);
}

TLParser::ExpressionContext* TLParser::IfStatContext::expression() {
  return getRuleContext<TLParser::ExpressionContext>(0);
}

tree::TerminalNode* TLParser::IfStatContext::OBrace() {
  return getToken(TLParser::OBrace, 0);
}

TLParser::BlockContext* TLParser::IfStatContext::block() {
  return getRuleContext<TLParser::BlockContext>(0);
}

tree::TerminalNode* TLParser::IfStatContext::CBrace() {
  return getToken(TLParser::CBrace, 0);
}


size_t TLParser::IfStatContext::getRuleIndex() const {
  return TLParser::RuleIfStat;
}

void TLParser::IfStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStat(this);
}

void TLParser::IfStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStat(this);
}


antlrcpp::Any TLParser::IfStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitIfStat(this);
  else
    return visitor->visitChildren(this);
}

TLParser::IfStatContext* TLParser::ifStat() {
  IfStatContext *_localctx = _tracker.createInstance<IfStatContext>(_ctx, getState());
  enterRule(_localctx, 12, TLParser::RuleIfStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(TLParser::If);
    setState(117);
    expression(0);
    setState(118);
    match(TLParser::OBrace);
    setState(119);
    block();
    setState(120);
    match(TLParser::CBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseIfStatContext ------------------------------------------------------------------

TLParser::ElseIfStatContext::ElseIfStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TLParser::ElseIfStatContext::Else() {
  return getToken(TLParser::Else, 0);
}

tree::TerminalNode* TLParser::ElseIfStatContext::If() {
  return getToken(TLParser::If, 0);
}

TLParser::ExpressionContext* TLParser::ElseIfStatContext::expression() {
  return getRuleContext<TLParser::ExpressionContext>(0);
}

tree::TerminalNode* TLParser::ElseIfStatContext::OBrace() {
  return getToken(TLParser::OBrace, 0);
}

TLParser::BlockContext* TLParser::ElseIfStatContext::block() {
  return getRuleContext<TLParser::BlockContext>(0);
}

tree::TerminalNode* TLParser::ElseIfStatContext::CBrace() {
  return getToken(TLParser::CBrace, 0);
}


size_t TLParser::ElseIfStatContext::getRuleIndex() const {
  return TLParser::RuleElseIfStat;
}

void TLParser::ElseIfStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseIfStat(this);
}

void TLParser::ElseIfStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseIfStat(this);
}


antlrcpp::Any TLParser::ElseIfStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitElseIfStat(this);
  else
    return visitor->visitChildren(this);
}

TLParser::ElseIfStatContext* TLParser::elseIfStat() {
  ElseIfStatContext *_localctx = _tracker.createInstance<ElseIfStatContext>(_ctx, getState());
  enterRule(_localctx, 14, TLParser::RuleElseIfStat);

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
    match(TLParser::Else);
    setState(123);
    match(TLParser::If);
    setState(124);
    expression(0);
    setState(125);
    match(TLParser::OBrace);
    setState(126);
    block();
    setState(127);
    match(TLParser::CBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStatContext ------------------------------------------------------------------

TLParser::ElseStatContext::ElseStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TLParser::ElseStatContext::Else() {
  return getToken(TLParser::Else, 0);
}

tree::TerminalNode* TLParser::ElseStatContext::OBrace() {
  return getToken(TLParser::OBrace, 0);
}

TLParser::BlockContext* TLParser::ElseStatContext::block() {
  return getRuleContext<TLParser::BlockContext>(0);
}

tree::TerminalNode* TLParser::ElseStatContext::CBrace() {
  return getToken(TLParser::CBrace, 0);
}


size_t TLParser::ElseStatContext::getRuleIndex() const {
  return TLParser::RuleElseStat;
}

void TLParser::ElseStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseStat(this);
}

void TLParser::ElseStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseStat(this);
}


antlrcpp::Any TLParser::ElseStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitElseStat(this);
  else
    return visitor->visitChildren(this);
}

TLParser::ElseStatContext* TLParser::elseStat() {
  ElseStatContext *_localctx = _tracker.createInstance<ElseStatContext>(_ctx, getState());
  enterRule(_localctx, 16, TLParser::RuleElseStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(TLParser::Else);
    setState(130);
    match(TLParser::OBrace);
    setState(131);
    block();
    setState(132);
    match(TLParser::CBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclContext ------------------------------------------------------------------

TLParser::FunctionDeclContext::FunctionDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TLParser::FunctionDeclContext::Def() {
  return getToken(TLParser::Def, 0);
}

tree::TerminalNode* TLParser::FunctionDeclContext::Identifier() {
  return getToken(TLParser::Identifier, 0);
}

tree::TerminalNode* TLParser::FunctionDeclContext::OParen() {
  return getToken(TLParser::OParen, 0);
}

tree::TerminalNode* TLParser::FunctionDeclContext::CParen() {
  return getToken(TLParser::CParen, 0);
}

tree::TerminalNode* TLParser::FunctionDeclContext::OBrace() {
  return getToken(TLParser::OBrace, 0);
}

TLParser::BlockContext* TLParser::FunctionDeclContext::block() {
  return getRuleContext<TLParser::BlockContext>(0);
}

tree::TerminalNode* TLParser::FunctionDeclContext::CBrace() {
  return getToken(TLParser::CBrace, 0);
}

TLParser::IdListContext* TLParser::FunctionDeclContext::idList() {
  return getRuleContext<TLParser::IdListContext>(0);
}


size_t TLParser::FunctionDeclContext::getRuleIndex() const {
  return TLParser::RuleFunctionDecl;
}

void TLParser::FunctionDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDecl(this);
}

void TLParser::FunctionDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDecl(this);
}


antlrcpp::Any TLParser::FunctionDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitFunctionDecl(this);
  else
    return visitor->visitChildren(this);
}

TLParser::FunctionDeclContext* TLParser::functionDecl() {
  FunctionDeclContext *_localctx = _tracker.createInstance<FunctionDeclContext>(_ctx, getState());
  enterRule(_localctx, 18, TLParser::RuleFunctionDecl);
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
    setState(134);
    match(TLParser::Def);
    setState(135);
    match(TLParser::Identifier);
    setState(136);
    match(TLParser::OParen);
    setState(138);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TLParser::Identifier) {
      setState(137);
      idList();
    }
    setState(140);
    match(TLParser::CParen);
    setState(141);
    match(TLParser::OBrace);
    setState(142);
    block();
    setState(143);
    match(TLParser::CBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

TLParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TLParser::ForStatementContext::For() {
  return getToken(TLParser::For, 0);
}

tree::TerminalNode* TLParser::ForStatementContext::Identifier() {
  return getToken(TLParser::Identifier, 0);
}

tree::TerminalNode* TLParser::ForStatementContext::Assign() {
  return getToken(TLParser::Assign, 0);
}

std::vector<TLParser::ExpressionContext *> TLParser::ForStatementContext::expression() {
  return getRuleContexts<TLParser::ExpressionContext>();
}

TLParser::ExpressionContext* TLParser::ForStatementContext::expression(size_t i) {
  return getRuleContext<TLParser::ExpressionContext>(i);
}

tree::TerminalNode* TLParser::ForStatementContext::To() {
  return getToken(TLParser::To, 0);
}

tree::TerminalNode* TLParser::ForStatementContext::OBrace() {
  return getToken(TLParser::OBrace, 0);
}

TLParser::BlockContext* TLParser::ForStatementContext::block() {
  return getRuleContext<TLParser::BlockContext>(0);
}

tree::TerminalNode* TLParser::ForStatementContext::CBrace() {
  return getToken(TLParser::CBrace, 0);
}


size_t TLParser::ForStatementContext::getRuleIndex() const {
  return TLParser::RuleForStatement;
}

void TLParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void TLParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}


antlrcpp::Any TLParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

TLParser::ForStatementContext* TLParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, TLParser::RuleForStatement);

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
    match(TLParser::For);
    setState(146);
    match(TLParser::Identifier);
    setState(147);
    match(TLParser::Assign);
    setState(148);
    expression(0);
    setState(149);
    match(TLParser::To);
    setState(150);
    expression(0);
    setState(151);
    match(TLParser::OBrace);
    setState(152);
    block();
    setState(153);
    match(TLParser::CBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

TLParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TLParser::WhileStatementContext::While() {
  return getToken(TLParser::While, 0);
}

TLParser::ExpressionContext* TLParser::WhileStatementContext::expression() {
  return getRuleContext<TLParser::ExpressionContext>(0);
}

tree::TerminalNode* TLParser::WhileStatementContext::OBrace() {
  return getToken(TLParser::OBrace, 0);
}

TLParser::BlockContext* TLParser::WhileStatementContext::block() {
  return getRuleContext<TLParser::BlockContext>(0);
}

tree::TerminalNode* TLParser::WhileStatementContext::CBrace() {
  return getToken(TLParser::CBrace, 0);
}


size_t TLParser::WhileStatementContext::getRuleIndex() const {
  return TLParser::RuleWhileStatement;
}

void TLParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void TLParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


antlrcpp::Any TLParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

TLParser::WhileStatementContext* TLParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, TLParser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    match(TLParser::While);
    setState(156);
    expression(0);
    setState(157);
    match(TLParser::OBrace);
    setState(158);
    block();
    setState(159);
    match(TLParser::CBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdListContext ------------------------------------------------------------------

TLParser::IdListContext::IdListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TLParser::IdListContext::Identifier() {
  return getTokens(TLParser::Identifier);
}

tree::TerminalNode* TLParser::IdListContext::Identifier(size_t i) {
  return getToken(TLParser::Identifier, i);
}

std::vector<tree::TerminalNode *> TLParser::IdListContext::Comma() {
  return getTokens(TLParser::Comma);
}

tree::TerminalNode* TLParser::IdListContext::Comma(size_t i) {
  return getToken(TLParser::Comma, i);
}


size_t TLParser::IdListContext::getRuleIndex() const {
  return TLParser::RuleIdList;
}

void TLParser::IdListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdList(this);
}

void TLParser::IdListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdList(this);
}


antlrcpp::Any TLParser::IdListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitIdList(this);
  else
    return visitor->visitChildren(this);
}

TLParser::IdListContext* TLParser::idList() {
  IdListContext *_localctx = _tracker.createInstance<IdListContext>(_ctx, getState());
  enterRule(_localctx, 24, TLParser::RuleIdList);
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
    setState(161);
    match(TLParser::Identifier);
    setState(166);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TLParser::Comma) {
      setState(162);
      match(TLParser::Comma);
      setState(163);
      match(TLParser::Identifier);
      setState(168);
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

TLParser::ExprListContext::ExprListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TLParser::ExpressionContext *> TLParser::ExprListContext::expression() {
  return getRuleContexts<TLParser::ExpressionContext>();
}

TLParser::ExpressionContext* TLParser::ExprListContext::expression(size_t i) {
  return getRuleContext<TLParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> TLParser::ExprListContext::Comma() {
  return getTokens(TLParser::Comma);
}

tree::TerminalNode* TLParser::ExprListContext::Comma(size_t i) {
  return getToken(TLParser::Comma, i);
}


size_t TLParser::ExprListContext::getRuleIndex() const {
  return TLParser::RuleExprList;
}

void TLParser::ExprListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprList(this);
}

void TLParser::ExprListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprList(this);
}


antlrcpp::Any TLParser::ExprListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitExprList(this);
  else
    return visitor->visitChildren(this);
}

TLParser::ExprListContext* TLParser::exprList() {
  ExprListContext *_localctx = _tracker.createInstance<ExprListContext>(_ctx, getState());
  enterRule(_localctx, 26, TLParser::RuleExprList);
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
    setState(169);
    expression(0);
    setState(174);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TLParser::Comma) {
      setState(170);
      match(TLParser::Comma);
      setState(171);
      expression(0);
      setState(176);
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

//----------------- ExpressionContext ------------------------------------------------------------------

TLParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TLParser::ExpressionContext::getRuleIndex() const {
  return TLParser::RuleExpression;
}

void TLParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BoolExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TLParser::BoolExpressionContext::Bool() {
  return getToken(TLParser::Bool, 0);
}

TLParser::BoolExpressionContext::BoolExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::BoolExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolExpression(this);
}
void TLParser::BoolExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolExpression(this);
}

antlrcpp::Any TLParser::BoolExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitBoolExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TLParser::NumberExpressionContext::Number() {
  return getToken(TLParser::Number, 0);
}

TLParser::NumberExpressionContext::NumberExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::NumberExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumberExpression(this);
}
void TLParser::NumberExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumberExpression(this);
}

antlrcpp::Any TLParser::NumberExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitNumberExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdentifierExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TLParser::IdentifierExpressionContext::Identifier() {
  return getToken(TLParser::Identifier, 0);
}

TLParser::IndexesContext* TLParser::IdentifierExpressionContext::indexes() {
  return getRuleContext<TLParser::IndexesContext>(0);
}

TLParser::IdentifierExpressionContext::IdentifierExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::IdentifierExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierExpression(this);
}
void TLParser::IdentifierExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierExpression(this);
}

antlrcpp::Any TLParser::IdentifierExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitIdentifierExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TLParser::NotExpressionContext::Excl() {
  return getToken(TLParser::Excl, 0);
}

TLParser::ExpressionContext* TLParser::NotExpressionContext::expression() {
  return getRuleContext<TLParser::ExpressionContext>(0);
}

TLParser::NotExpressionContext::NotExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::NotExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotExpression(this);
}
void TLParser::NotExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotExpression(this);
}

antlrcpp::Any TLParser::NotExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitNotExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrExpressionContext ------------------------------------------------------------------

std::vector<TLParser::ExpressionContext *> TLParser::OrExpressionContext::expression() {
  return getRuleContexts<TLParser::ExpressionContext>();
}

TLParser::ExpressionContext* TLParser::OrExpressionContext::expression(size_t i) {
  return getRuleContext<TLParser::ExpressionContext>(i);
}

tree::TerminalNode* TLParser::OrExpressionContext::Or() {
  return getToken(TLParser::Or, 0);
}

TLParser::OrExpressionContext::OrExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::OrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrExpression(this);
}
void TLParser::OrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrExpression(this);
}

antlrcpp::Any TLParser::OrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitOrExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryMinusExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TLParser::UnaryMinusExpressionContext::Subtract() {
  return getToken(TLParser::Subtract, 0);
}

TLParser::ExpressionContext* TLParser::UnaryMinusExpressionContext::expression() {
  return getRuleContext<TLParser::ExpressionContext>(0);
}

TLParser::UnaryMinusExpressionContext::UnaryMinusExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::UnaryMinusExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryMinusExpression(this);
}
void TLParser::UnaryMinusExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryMinusExpression(this);
}

antlrcpp::Any TLParser::UnaryMinusExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitUnaryMinusExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowerExpressionContext ------------------------------------------------------------------

std::vector<TLParser::ExpressionContext *> TLParser::PowerExpressionContext::expression() {
  return getRuleContexts<TLParser::ExpressionContext>();
}

TLParser::ExpressionContext* TLParser::PowerExpressionContext::expression(size_t i) {
  return getRuleContext<TLParser::ExpressionContext>(i);
}

tree::TerminalNode* TLParser::PowerExpressionContext::Pow() {
  return getToken(TLParser::Pow, 0);
}

TLParser::PowerExpressionContext::PowerExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::PowerExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowerExpression(this);
}
void TLParser::PowerExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowerExpression(this);
}

antlrcpp::Any TLParser::PowerExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitPowerExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqExpressionContext ------------------------------------------------------------------

std::vector<TLParser::ExpressionContext *> TLParser::EqExpressionContext::expression() {
  return getRuleContexts<TLParser::ExpressionContext>();
}

TLParser::ExpressionContext* TLParser::EqExpressionContext::expression(size_t i) {
  return getRuleContext<TLParser::ExpressionContext>(i);
}

tree::TerminalNode* TLParser::EqExpressionContext::Equals() {
  return getToken(TLParser::Equals, 0);
}

tree::TerminalNode* TLParser::EqExpressionContext::NEquals() {
  return getToken(TLParser::NEquals, 0);
}

TLParser::EqExpressionContext::EqExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::EqExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqExpression(this);
}
void TLParser::EqExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqExpression(this);
}

antlrcpp::Any TLParser::EqExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitEqExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndExpressionContext ------------------------------------------------------------------

std::vector<TLParser::ExpressionContext *> TLParser::AndExpressionContext::expression() {
  return getRuleContexts<TLParser::ExpressionContext>();
}

TLParser::ExpressionContext* TLParser::AndExpressionContext::expression(size_t i) {
  return getRuleContext<TLParser::ExpressionContext>(i);
}

tree::TerminalNode* TLParser::AndExpressionContext::And() {
  return getToken(TLParser::And, 0);
}

TLParser::AndExpressionContext::AndExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::AndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndExpression(this);
}
void TLParser::AndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndExpression(this);
}

antlrcpp::Any TLParser::AndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitAndExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InExpressionContext ------------------------------------------------------------------

std::vector<TLParser::ExpressionContext *> TLParser::InExpressionContext::expression() {
  return getRuleContexts<TLParser::ExpressionContext>();
}

TLParser::ExpressionContext* TLParser::InExpressionContext::expression(size_t i) {
  return getRuleContext<TLParser::ExpressionContext>(i);
}

tree::TerminalNode* TLParser::InExpressionContext::In() {
  return getToken(TLParser::In, 0);
}

TLParser::InExpressionContext::InExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::InExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInExpression(this);
}
void TLParser::InExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInExpression(this);
}

antlrcpp::Any TLParser::InExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitInExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TLParser::StringExpressionContext::String() {
  return getToken(TLParser::String, 0);
}

TLParser::IndexesContext* TLParser::StringExpressionContext::indexes() {
  return getRuleContext<TLParser::IndexesContext>(0);
}

TLParser::StringExpressionContext::StringExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::StringExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringExpression(this);
}
void TLParser::StringExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringExpression(this);
}

antlrcpp::Any TLParser::StringExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitStringExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpressionExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TLParser::ExpressionExpressionContext::OParen() {
  return getToken(TLParser::OParen, 0);
}

TLParser::ExpressionContext* TLParser::ExpressionExpressionContext::expression() {
  return getRuleContext<TLParser::ExpressionContext>(0);
}

tree::TerminalNode* TLParser::ExpressionExpressionContext::CParen() {
  return getToken(TLParser::CParen, 0);
}

TLParser::IndexesContext* TLParser::ExpressionExpressionContext::indexes() {
  return getRuleContext<TLParser::IndexesContext>(0);
}

TLParser::ExpressionExpressionContext::ExpressionExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::ExpressionExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionExpression(this);
}
void TLParser::ExpressionExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionExpression(this);
}

antlrcpp::Any TLParser::ExpressionExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitExpressionExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddExpressionContext ------------------------------------------------------------------

std::vector<TLParser::ExpressionContext *> TLParser::AddExpressionContext::expression() {
  return getRuleContexts<TLParser::ExpressionContext>();
}

TLParser::ExpressionContext* TLParser::AddExpressionContext::expression(size_t i) {
  return getRuleContext<TLParser::ExpressionContext>(i);
}

tree::TerminalNode* TLParser::AddExpressionContext::Add() {
  return getToken(TLParser::Add, 0);
}

tree::TerminalNode* TLParser::AddExpressionContext::Subtract() {
  return getToken(TLParser::Subtract, 0);
}

TLParser::AddExpressionContext::AddExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::AddExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddExpression(this);
}
void TLParser::AddExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddExpression(this);
}

antlrcpp::Any TLParser::AddExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitAddExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompExpressionContext ------------------------------------------------------------------

std::vector<TLParser::ExpressionContext *> TLParser::CompExpressionContext::expression() {
  return getRuleContexts<TLParser::ExpressionContext>();
}

TLParser::ExpressionContext* TLParser::CompExpressionContext::expression(size_t i) {
  return getRuleContext<TLParser::ExpressionContext>(i);
}

tree::TerminalNode* TLParser::CompExpressionContext::GTEquals() {
  return getToken(TLParser::GTEquals, 0);
}

tree::TerminalNode* TLParser::CompExpressionContext::LTEquals() {
  return getToken(TLParser::LTEquals, 0);
}

tree::TerminalNode* TLParser::CompExpressionContext::GT() {
  return getToken(TLParser::GT, 0);
}

tree::TerminalNode* TLParser::CompExpressionContext::LT() {
  return getToken(TLParser::LT, 0);
}

TLParser::CompExpressionContext::CompExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::CompExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompExpression(this);
}
void TLParser::CompExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompExpression(this);
}

antlrcpp::Any TLParser::CompExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitCompExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NullExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TLParser::NullExpressionContext::Null() {
  return getToken(TLParser::Null, 0);
}

TLParser::NullExpressionContext::NullExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::NullExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNullExpression(this);
}
void TLParser::NullExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNullExpression(this);
}

antlrcpp::Any TLParser::NullExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitNullExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallExpressionContext ------------------------------------------------------------------

TLParser::FunctionCallContext* TLParser::FunctionCallExpressionContext::functionCall() {
  return getRuleContext<TLParser::FunctionCallContext>(0);
}

TLParser::IndexesContext* TLParser::FunctionCallExpressionContext::indexes() {
  return getRuleContext<TLParser::IndexesContext>(0);
}

TLParser::FunctionCallExpressionContext::FunctionCallExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::FunctionCallExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallExpression(this);
}
void TLParser::FunctionCallExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallExpression(this);
}

antlrcpp::Any TLParser::FunctionCallExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitFunctionCallExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultExpressionContext ------------------------------------------------------------------

std::vector<TLParser::ExpressionContext *> TLParser::MultExpressionContext::expression() {
  return getRuleContexts<TLParser::ExpressionContext>();
}

TLParser::ExpressionContext* TLParser::MultExpressionContext::expression(size_t i) {
  return getRuleContext<TLParser::ExpressionContext>(i);
}

tree::TerminalNode* TLParser::MultExpressionContext::Multiply() {
  return getToken(TLParser::Multiply, 0);
}

tree::TerminalNode* TLParser::MultExpressionContext::Divide() {
  return getToken(TLParser::Divide, 0);
}

tree::TerminalNode* TLParser::MultExpressionContext::Modulus() {
  return getToken(TLParser::Modulus, 0);
}

TLParser::MultExpressionContext::MultExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::MultExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultExpression(this);
}
void TLParser::MultExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultExpression(this);
}

antlrcpp::Any TLParser::MultExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitMultExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ListExpressionContext ------------------------------------------------------------------

TLParser::ListContext* TLParser::ListExpressionContext::list() {
  return getRuleContext<TLParser::ListContext>(0);
}

TLParser::IndexesContext* TLParser::ListExpressionContext::indexes() {
  return getRuleContext<TLParser::IndexesContext>(0);
}

TLParser::ListExpressionContext::ListExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::ListExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListExpression(this);
}
void TLParser::ListExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListExpression(this);
}

antlrcpp::Any TLParser::ListExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitListExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TernaryExpressionContext ------------------------------------------------------------------

std::vector<TLParser::ExpressionContext *> TLParser::TernaryExpressionContext::expression() {
  return getRuleContexts<TLParser::ExpressionContext>();
}

TLParser::ExpressionContext* TLParser::TernaryExpressionContext::expression(size_t i) {
  return getRuleContext<TLParser::ExpressionContext>(i);
}

tree::TerminalNode* TLParser::TernaryExpressionContext::QMark() {
  return getToken(TLParser::QMark, 0);
}

tree::TerminalNode* TLParser::TernaryExpressionContext::Colon() {
  return getToken(TLParser::Colon, 0);
}

TLParser::TernaryExpressionContext::TernaryExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::TernaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTernaryExpression(this);
}
void TLParser::TernaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTernaryExpression(this);
}

antlrcpp::Any TLParser::TernaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitTernaryExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InputExpressionContext ------------------------------------------------------------------

tree::TerminalNode* TLParser::InputExpressionContext::Input() {
  return getToken(TLParser::Input, 0);
}

tree::TerminalNode* TLParser::InputExpressionContext::OParen() {
  return getToken(TLParser::OParen, 0);
}

tree::TerminalNode* TLParser::InputExpressionContext::CParen() {
  return getToken(TLParser::CParen, 0);
}

tree::TerminalNode* TLParser::InputExpressionContext::String() {
  return getToken(TLParser::String, 0);
}

TLParser::InputExpressionContext::InputExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::InputExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInputExpression(this);
}
void TLParser::InputExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInputExpression(this);
}

antlrcpp::Any TLParser::InputExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitInputExpression(this);
  else
    return visitor->visitChildren(this);
}

TLParser::ExpressionContext* TLParser::expression() {
   return expression(0);
}

TLParser::ExpressionContext* TLParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  TLParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  TLParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, TLParser::RuleExpression, precedence);

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
    setState(213);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<UnaryMinusExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(178);
      match(TLParser::Subtract);
      setState(179);
      expression(20);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NotExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(180);
      match(TLParser::Excl);
      setState(181);
      expression(19);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NumberExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(182);
      match(TLParser::Number);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<BoolExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(183);
      match(TLParser::Bool);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NullExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(184);
      match(TLParser::Null);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<FunctionCallExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(185);
      functionCall();
      setState(187);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
      case 1: {
        setState(186);
        indexes();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ListExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(189);
      list();
      setState(191);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
      case 1: {
        setState(190);
        indexes();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<IdentifierExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(193);
      match(TLParser::Identifier);
      setState(195);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
      case 1: {
        setState(194);
        indexes();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<StringExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(197);
      match(TLParser::String);
      setState(199);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
      case 1: {
        setState(198);
        indexes();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<ExpressionExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(201);
      match(TLParser::OParen);
      setState(202);
      expression(0);
      setState(203);
      match(TLParser::CParen);
      setState(205);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(204);
        indexes();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<InputExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(207);
      match(TLParser::Input);
      setState(208);
      match(TLParser::OParen);
      setState(210);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TLParser::String) {
        setState(209);
        match(TLParser::String);
      }
      setState(212);
      match(TLParser::CParen);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(247);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(245);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowerExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(215);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(216);
          match(TLParser::Pow);
          setState(217);
          expression(18);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(218);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(219);
          dynamic_cast<MultExpressionContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << TLParser::Multiply)
            | (1ULL << TLParser::Divide)
            | (1ULL << TLParser::Modulus))) != 0))) {
            dynamic_cast<MultExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(220);
          expression(18);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AddExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(221);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(222);
          dynamic_cast<AddExpressionContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == TLParser::Add

          || _la == TLParser::Subtract)) {
            dynamic_cast<AddExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(223);
          expression(17);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<CompExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(224);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(225);
          dynamic_cast<CompExpressionContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << TLParser::GTEquals)
            | (1ULL << TLParser::LTEquals)
            | (1ULL << TLParser::GT)
            | (1ULL << TLParser::LT))) != 0))) {
            dynamic_cast<CompExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(226);
          expression(16);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<EqExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(227);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(228);
          dynamic_cast<EqExpressionContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == TLParser::Equals

          || _la == TLParser::NEquals)) {
            dynamic_cast<EqExpressionContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(229);
          expression(15);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<AndExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(230);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(231);
          match(TLParser::And);
          setState(232);
          expression(14);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<OrExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(233);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(234);
          match(TLParser::Or);
          setState(235);
          expression(13);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<TernaryExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(236);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(237);
          match(TLParser::QMark);
          setState(238);
          expression(0);
          setState(239);
          match(TLParser::Colon);
          setState(240);
          expression(12);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<InExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(242);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(243);
          match(TLParser::In);
          setState(244);
          expression(11);
          break;
        }

        default:
          break;
        } 
      }
      setState(249);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ListContext ------------------------------------------------------------------

TLParser::ListContext::ListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TLParser::ListContext::OBracket() {
  return getToken(TLParser::OBracket, 0);
}

tree::TerminalNode* TLParser::ListContext::CBracket() {
  return getToken(TLParser::CBracket, 0);
}

TLParser::ExprListContext* TLParser::ListContext::exprList() {
  return getRuleContext<TLParser::ExprListContext>(0);
}


size_t TLParser::ListContext::getRuleIndex() const {
  return TLParser::RuleList;
}

void TLParser::ListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList(this);
}

void TLParser::ListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList(this);
}


antlrcpp::Any TLParser::ListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitList(this);
  else
    return visitor->visitChildren(this);
}

TLParser::ListContext* TLParser::list() {
  ListContext *_localctx = _tracker.createInstance<ListContext>(_ctx, getState());
  enterRule(_localctx, 30, TLParser::RuleList);
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
    setState(250);
    match(TLParser::OBracket);
    setState(252);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TLParser::Println)
      | (1ULL << TLParser::Print)
      | (1ULL << TLParser::Input)
      | (1ULL << TLParser::Assert)
      | (1ULL << TLParser::Size)
      | (1ULL << TLParser::Null)
      | (1ULL << TLParser::Excl)
      | (1ULL << TLParser::Subtract)
      | (1ULL << TLParser::OBracket)
      | (1ULL << TLParser::OParen)
      | (1ULL << TLParser::Bool)
      | (1ULL << TLParser::Number)
      | (1ULL << TLParser::BuildIdentifier)
      | (1ULL << TLParser::Identifier)
      | (1ULL << TLParser::String))) != 0)) {
      setState(251);
      exprList();
    }
    setState(254);
    match(TLParser::CBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IndexesContext ------------------------------------------------------------------

TLParser::IndexesContext::IndexesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TLParser::IndexesContext::OBracket() {
  return getTokens(TLParser::OBracket);
}

tree::TerminalNode* TLParser::IndexesContext::OBracket(size_t i) {
  return getToken(TLParser::OBracket, i);
}

std::vector<TLParser::ExpressionContext *> TLParser::IndexesContext::expression() {
  return getRuleContexts<TLParser::ExpressionContext>();
}

TLParser::ExpressionContext* TLParser::IndexesContext::expression(size_t i) {
  return getRuleContext<TLParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> TLParser::IndexesContext::CBracket() {
  return getTokens(TLParser::CBracket);
}

tree::TerminalNode* TLParser::IndexesContext::CBracket(size_t i) {
  return getToken(TLParser::CBracket, i);
}


size_t TLParser::IndexesContext::getRuleIndex() const {
  return TLParser::RuleIndexes;
}

void TLParser::IndexesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndexes(this);
}

void TLParser::IndexesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndexes(this);
}


antlrcpp::Any TLParser::IndexesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitIndexes(this);
  else
    return visitor->visitChildren(this);
}

TLParser::IndexesContext* TLParser::indexes() {
  IndexesContext *_localctx = _tracker.createInstance<IndexesContext>(_ctx, getState());
  enterRule(_localctx, 32, TLParser::RuleIndexes);

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
    setState(260); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(256);
              match(TLParser::OBracket);
              setState(257);
              expression(0);
              setState(258);
              match(TLParser::CBracket);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(262); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool TLParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 14: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool TLParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 18);
    case 1: return precpred(_ctx, 17);
    case 2: return precpred(_ctx, 16);
    case 3: return precpred(_ctx, 15);
    case 4: return precpred(_ctx, 14);
    case 5: return precpred(_ctx, 13);
    case 6: return precpred(_ctx, 12);
    case 7: return precpred(_ctx, 11);
    case 8: return precpred(_ctx, 10);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> TLParser::_decisionToDFA;
atn::PredictionContextCache TLParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN TLParser::_atn;
std::vector<uint16_t> TLParser::_serializedATN;

std::vector<std::string> TLParser::_ruleNames = {
  "parse", "block", "statement", "assignment", "functionCall", "ifStatement", 
  "ifStat", "elseIfStat", "elseStat", "functionDecl", "forStatement", "whileStatement", 
  "idList", "exprList", "expression", "list", "indexes"
};

std::vector<std::string> TLParser::_literalNames = {
  "", "'println'", "'print'", "'input'", "'assert'", "'size'", "'func'", 
  "'if'", "'else'", "'return'", "'for'", "'while'", "'to'", "'do'", "'end'", 
  "'in'", "'null'", "'||'", "'&&'", "'=='", "'!='", "'>='", "'<='", "'^'", 
  "'!'", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'%'", "'{'", "'}'", 
  "'['", "']'", "'('", "')'", "';'", "'='", "','", "'\u003F'", "':'"
};

std::vector<std::string> TLParser::_symbolicNames = {
  "", "Println", "Print", "Input", "Assert", "Size", "Def", "If", "Else", 
  "Return", "For", "While", "To", "Do", "End", "In", "Null", "Or", "And", 
  "Equals", "NEquals", "GTEquals", "LTEquals", "Pow", "Excl", "GT", "LT", 
  "Add", "Subtract", "Multiply", "Divide", "Modulus", "OBrace", "CBrace", 
  "OBracket", "CBracket", "OParen", "CParen", "SColon", "Assign", "Comma", 
  "QMark", "Colon", "Bool", "Number", "BuildIdentifier", "Identifier", "String", 
  "Comment", "Space"
};

dfa::Vocabulary TLParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> TLParser::_tokenNames;

TLParser::Initializer::Initializer() {
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

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x33, 0x10b, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x27, 
       0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x2d, 
       0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x30, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x36, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x5, 0x4, 0x41, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x45, 
       0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x5, 0x6, 0x4d, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x5, 0x6, 0x53, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x5, 0x6, 0x59, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 
       0x6, 0x6b, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x6f, 0xa, 0x7, 
       0xc, 0x7, 0xe, 0x7, 0x72, 0xb, 0x7, 0x3, 0x7, 0x5, 0x7, 0x75, 0xa, 
       0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x8d, 0xa, 0xb, 0x3, 0xb, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xa7, 0xa, 0xe, 0xc, 
       0xe, 0xe, 0xe, 0xaa, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 
       0xf, 0xaf, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xb2, 0xb, 0xf, 0x3, 0x10, 
       0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
       0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xbe, 0xa, 0x10, 0x3, 
       0x10, 0x3, 0x10, 0x5, 0x10, 0xc2, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 
       0x5, 0x10, 0xc6, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xca, 
       0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 
       0xd0, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xd5, 
       0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 0xd8, 0xa, 0x10, 0x3, 0x10, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xf8, 
       0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xfb, 0xb, 0x10, 0x3, 0x11, 0x3, 
       0x11, 0x5, 0x11, 0xff, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x6, 0x12, 0x107, 0xa, 0x12, 0xd, 
       0x12, 0xe, 0x12, 0x108, 0x3, 0x12, 0x2, 0x3, 0x1e, 0x13, 0x2, 0x4, 
       0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
       0x1e, 0x20, 0x22, 0x2, 0x6, 0x3, 0x2, 0x1f, 0x21, 0x3, 0x2, 0x1d, 
       0x1e, 0x4, 0x2, 0x17, 0x18, 0x1b, 0x1c, 0x3, 0x2, 0x15, 0x16, 0x2, 
       0x12a, 0x2, 0x26, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2e, 0x3, 0x2, 0x2, 0x2, 
       0x6, 0x40, 0x3, 0x2, 0x2, 0x2, 0x8, 0x42, 0x3, 0x2, 0x2, 0x2, 0xa, 
       0x6a, 0x3, 0x2, 0x2, 0x2, 0xc, 0x6c, 0x3, 0x2, 0x2, 0x2, 0xe, 0x76, 
       0x3, 0x2, 0x2, 0x2, 0x10, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x12, 0x83, 0x3, 
       0x2, 0x2, 0x2, 0x14, 0x88, 0x3, 0x2, 0x2, 0x2, 0x16, 0x93, 0x3, 0x2, 
       0x2, 0x2, 0x18, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xa3, 0x3, 0x2, 0x2, 
       0x2, 0x1c, 0xab, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xd7, 0x3, 0x2, 0x2, 0x2, 
       0x20, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x22, 0x106, 0x3, 0x2, 0x2, 0x2, 
       0x24, 0x27, 0x5, 0x4, 0x3, 0x2, 0x25, 0x27, 0x5, 0x6, 0x4, 0x2, 0x26, 
       0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 
       0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x7, 0x2, 0x2, 0x3, 0x29, 0x3, 0x3, 
       0x2, 0x2, 0x2, 0x2a, 0x2d, 0x5, 0x6, 0x4, 0x2, 0x2b, 0x2d, 0x5, 0x14, 
       0xb, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2b, 0x3, 0x2, 0x2, 
       0x2, 0x2d, 0x30, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2c, 0x3, 0x2, 0x2, 0x2, 
       0x2e, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x35, 0x3, 0x2, 0x2, 0x2, 0x30, 
       0x2e, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x7, 0xb, 0x2, 0x2, 0x32, 0x33, 
       0x5, 0x1e, 0x10, 0x2, 0x33, 0x34, 0x7, 0x28, 0x2, 0x2, 0x34, 0x36, 
       0x3, 0x2, 0x2, 0x2, 0x35, 0x31, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 
       0x2, 0x2, 0x2, 0x36, 0x5, 0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x5, 0x8, 
       0x5, 0x2, 0x38, 0x39, 0x7, 0x28, 0x2, 0x2, 0x39, 0x41, 0x3, 0x2, 
       0x2, 0x2, 0x3a, 0x3b, 0x5, 0xa, 0x6, 0x2, 0x3b, 0x3c, 0x7, 0x28, 
       0x2, 0x2, 0x3c, 0x41, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x41, 0x5, 0xc, 0x7, 
       0x2, 0x3e, 0x41, 0x5, 0x16, 0xc, 0x2, 0x3f, 0x41, 0x5, 0x18, 0xd, 
       0x2, 0x40, 0x37, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3a, 0x3, 0x2, 0x2, 0x2, 
       0x40, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x40, 
       0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x7, 0x3, 0x2, 0x2, 0x2, 0x42, 0x44, 
       0x7, 0x30, 0x2, 0x2, 0x43, 0x45, 0x5, 0x22, 0x12, 0x2, 0x44, 0x43, 
       0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x3, 
       0x2, 0x2, 0x2, 0x46, 0x47, 0x7, 0x29, 0x2, 0x2, 0x47, 0x48, 0x5, 
       0x1e, 0x10, 0x2, 0x48, 0x9, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x7, 
       0x2f, 0x2, 0x2, 0x4a, 0x4c, 0x7, 0x26, 0x2, 0x2, 0x4b, 0x4d, 0x5, 
       0x1c, 0xf, 0x2, 0x4c, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 
       0x2, 0x2, 0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x6b, 0x7, 0x27, 
       0x2, 0x2, 0x4f, 0x50, 0x7, 0x30, 0x2, 0x2, 0x50, 0x52, 0x7, 0x26, 
       0x2, 0x2, 0x51, 0x53, 0x5, 0x1c, 0xf, 0x2, 0x52, 0x51, 0x3, 0x2, 
       0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x3, 0x2, 0x2, 
       0x2, 0x54, 0x6b, 0x7, 0x27, 0x2, 0x2, 0x55, 0x56, 0x7, 0x3, 0x2, 
       0x2, 0x56, 0x58, 0x7, 0x26, 0x2, 0x2, 0x57, 0x59, 0x5, 0x1e, 0x10, 
       0x2, 0x58, 0x57, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 0x2, 0x2, 
       0x59, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x6b, 0x7, 0x27, 0x2, 0x2, 
       0x5b, 0x5c, 0x7, 0x4, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x26, 0x2, 0x2, 
       0x5d, 0x5e, 0x5, 0x1e, 0x10, 0x2, 0x5e, 0x5f, 0x7, 0x27, 0x2, 0x2, 
       0x5f, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x7, 0x6, 0x2, 0x2, 0x61, 
       0x62, 0x7, 0x26, 0x2, 0x2, 0x62, 0x63, 0x5, 0x1e, 0x10, 0x2, 0x63, 
       0x64, 0x7, 0x27, 0x2, 0x2, 0x64, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x65, 
       0x66, 0x7, 0x7, 0x2, 0x2, 0x66, 0x67, 0x7, 0x26, 0x2, 0x2, 0x67, 
       0x68, 0x5, 0x1e, 0x10, 0x2, 0x68, 0x69, 0x7, 0x27, 0x2, 0x2, 0x69, 
       0x6b, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x49, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x4f, 
       0x3, 0x2, 0x2, 0x2, 0x6a, 0x55, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x5b, 0x3, 
       0x2, 0x2, 0x2, 0x6a, 0x60, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x65, 0x3, 0x2, 
       0x2, 0x2, 0x6b, 0xb, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x70, 0x5, 0xe, 0x8, 
       0x2, 0x6d, 0x6f, 0x5, 0x10, 0x9, 0x2, 0x6e, 0x6d, 0x3, 0x2, 0x2, 
       0x2, 0x6f, 0x72, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 
       0x70, 0x71, 0x3, 0x2, 0x2, 0x2, 0x71, 0x74, 0x3, 0x2, 0x2, 0x2, 0x72, 
       0x70, 0x3, 0x2, 0x2, 0x2, 0x73, 0x75, 0x5, 0x12, 0xa, 0x2, 0x74, 
       0x73, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x3, 0x2, 0x2, 0x2, 0x75, 0xd, 
       0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x7, 0x9, 0x2, 0x2, 0x77, 0x78, 0x5, 
       0x1e, 0x10, 0x2, 0x78, 0x79, 0x7, 0x22, 0x2, 0x2, 0x79, 0x7a, 0x5, 
       0x4, 0x3, 0x2, 0x7a, 0x7b, 0x7, 0x23, 0x2, 0x2, 0x7b, 0xf, 0x3, 0x2, 
       0x2, 0x2, 0x7c, 0x7d, 0x7, 0xa, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x9, 0x2, 
       0x2, 0x7e, 0x7f, 0x5, 0x1e, 0x10, 0x2, 0x7f, 0x80, 0x7, 0x22, 0x2, 
       0x2, 0x80, 0x81, 0x5, 0x4, 0x3, 0x2, 0x81, 0x82, 0x7, 0x23, 0x2, 
       0x2, 0x82, 0x11, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 0xa, 0x2, 0x2, 
       0x84, 0x85, 0x7, 0x22, 0x2, 0x2, 0x85, 0x86, 0x5, 0x4, 0x3, 0x2, 
       0x86, 0x87, 0x7, 0x23, 0x2, 0x2, 0x87, 0x13, 0x3, 0x2, 0x2, 0x2, 
       0x88, 0x89, 0x7, 0x8, 0x2, 0x2, 0x89, 0x8a, 0x7, 0x30, 0x2, 0x2, 
       0x8a, 0x8c, 0x7, 0x26, 0x2, 0x2, 0x8b, 0x8d, 0x5, 0x1a, 0xe, 0x2, 
       0x8c, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8d, 
       0x8e, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x27, 0x2, 0x2, 0x8f, 
       0x90, 0x7, 0x22, 0x2, 0x2, 0x90, 0x91, 0x5, 0x4, 0x3, 0x2, 0x91, 
       0x92, 0x7, 0x23, 0x2, 0x2, 0x92, 0x15, 0x3, 0x2, 0x2, 0x2, 0x93, 
       0x94, 0x7, 0xc, 0x2, 0x2, 0x94, 0x95, 0x7, 0x30, 0x2, 0x2, 0x95, 
       0x96, 0x7, 0x29, 0x2, 0x2, 0x96, 0x97, 0x5, 0x1e, 0x10, 0x2, 0x97, 
       0x98, 0x7, 0xe, 0x2, 0x2, 0x98, 0x99, 0x5, 0x1e, 0x10, 0x2, 0x99, 
       0x9a, 0x7, 0x22, 0x2, 0x2, 0x9a, 0x9b, 0x5, 0x4, 0x3, 0x2, 0x9b, 
       0x9c, 0x7, 0x23, 0x2, 0x2, 0x9c, 0x17, 0x3, 0x2, 0x2, 0x2, 0x9d, 
       0x9e, 0x7, 0xd, 0x2, 0x2, 0x9e, 0x9f, 0x5, 0x1e, 0x10, 0x2, 0x9f, 
       0xa0, 0x7, 0x22, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x4, 0x3, 0x2, 0xa1, 
       0xa2, 0x7, 0x23, 0x2, 0x2, 0xa2, 0x19, 0x3, 0x2, 0x2, 0x2, 0xa3, 
       0xa8, 0x7, 0x30, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0x2a, 0x2, 0x2, 0xa5, 
       0xa7, 0x7, 0x30, 0x2, 0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa7, 
       0xaa, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 
       0x3, 0x2, 0x2, 0x2, 0xa9, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa8, 0x3, 
       0x2, 0x2, 0x2, 0xab, 0xb0, 0x5, 0x1e, 0x10, 0x2, 0xac, 0xad, 0x7, 
       0x2a, 0x2, 0x2, 0xad, 0xaf, 0x5, 0x1e, 0x10, 0x2, 0xae, 0xac, 0x3, 
       0x2, 0x2, 0x2, 0xaf, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xae, 0x3, 0x2, 
       0x2, 0x2, 0xb0, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb1, 0x1d, 0x3, 0x2, 0x2, 
       0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x8, 0x10, 0x1, 
       0x2, 0xb4, 0xb5, 0x7, 0x1e, 0x2, 0x2, 0xb5, 0xd8, 0x5, 0x1e, 0x10, 
       0x16, 0xb6, 0xb7, 0x7, 0x1a, 0x2, 0x2, 0xb7, 0xd8, 0x5, 0x1e, 0x10, 
       0x15, 0xb8, 0xd8, 0x7, 0x2e, 0x2, 0x2, 0xb9, 0xd8, 0x7, 0x2d, 0x2, 
       0x2, 0xba, 0xd8, 0x7, 0x12, 0x2, 0x2, 0xbb, 0xbd, 0x5, 0xa, 0x6, 
       0x2, 0xbc, 0xbe, 0x5, 0x22, 0x12, 0x2, 0xbd, 0xbc, 0x3, 0x2, 0x2, 
       0x2, 0xbd, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xd8, 0x3, 0x2, 0x2, 0x2, 
       0xbf, 0xc1, 0x5, 0x20, 0x11, 0x2, 0xc0, 0xc2, 0x5, 0x22, 0x12, 0x2, 
       0xc1, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 
       0xd8, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc5, 0x7, 0x30, 0x2, 0x2, 0xc4, 
       0xc6, 0x5, 0x22, 0x12, 0x2, 0xc5, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc5, 
       0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc9, 
       0x7, 0x31, 0x2, 0x2, 0xc8, 0xca, 0x5, 0x22, 0x12, 0x2, 0xc9, 0xc8, 
       0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x3, 0x2, 0x2, 0x2, 0xca, 0xd8, 0x3, 
       0x2, 0x2, 0x2, 0xcb, 0xcc, 0x7, 0x26, 0x2, 0x2, 0xcc, 0xcd, 0x5, 
       0x1e, 0x10, 0x2, 0xcd, 0xcf, 0x7, 0x27, 0x2, 0x2, 0xce, 0xd0, 0x5, 
       0x22, 0x12, 0x2, 0xcf, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x3, 
       0x2, 0x2, 0x2, 0xd0, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x7, 0x5, 
       0x2, 0x2, 0xd2, 0xd4, 0x7, 0x26, 0x2, 0x2, 0xd3, 0xd5, 0x7, 0x31, 
       0x2, 0x2, 0xd4, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x3, 0x2, 0x2, 
       0x2, 0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd8, 0x7, 0x27, 0x2, 
       0x2, 0xd7, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xb6, 0x3, 0x2, 0x2, 0x2, 
       0xd7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xd7, 
       0xba, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xbf, 
       0x3, 0x2, 0x2, 0x2, 0xd7, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xc7, 0x3, 
       0x2, 0x2, 0x2, 0xd7, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd1, 0x3, 0x2, 
       0x2, 0x2, 0xd8, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0xc, 0x14, 
       0x2, 0x2, 0xda, 0xdb, 0x7, 0x19, 0x2, 0x2, 0xdb, 0xf8, 0x5, 0x1e, 
       0x10, 0x14, 0xdc, 0xdd, 0xc, 0x13, 0x2, 0x2, 0xdd, 0xde, 0x9, 0x2, 
       0x2, 0x2, 0xde, 0xf8, 0x5, 0x1e, 0x10, 0x14, 0xdf, 0xe0, 0xc, 0x12, 
       0x2, 0x2, 0xe0, 0xe1, 0x9, 0x3, 0x2, 0x2, 0xe1, 0xf8, 0x5, 0x1e, 
       0x10, 0x13, 0xe2, 0xe3, 0xc, 0x11, 0x2, 0x2, 0xe3, 0xe4, 0x9, 0x4, 
       0x2, 0x2, 0xe4, 0xf8, 0x5, 0x1e, 0x10, 0x12, 0xe5, 0xe6, 0xc, 0x10, 
       0x2, 0x2, 0xe6, 0xe7, 0x9, 0x5, 0x2, 0x2, 0xe7, 0xf8, 0x5, 0x1e, 
       0x10, 0x11, 0xe8, 0xe9, 0xc, 0xf, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x14, 
       0x2, 0x2, 0xea, 0xf8, 0x5, 0x1e, 0x10, 0x10, 0xeb, 0xec, 0xc, 0xe, 
       0x2, 0x2, 0xec, 0xed, 0x7, 0x13, 0x2, 0x2, 0xed, 0xf8, 0x5, 0x1e, 
       0x10, 0xf, 0xee, 0xef, 0xc, 0xd, 0x2, 0x2, 0xef, 0xf0, 0x7, 0x2b, 
       0x2, 0x2, 0xf0, 0xf1, 0x5, 0x1e, 0x10, 0x2, 0xf1, 0xf2, 0x7, 0x2c, 
       0x2, 0x2, 0xf2, 0xf3, 0x5, 0x1e, 0x10, 0xe, 0xf3, 0xf8, 0x3, 0x2, 
       0x2, 0x2, 0xf4, 0xf5, 0xc, 0xc, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0x11, 
       0x2, 0x2, 0xf6, 0xf8, 0x5, 0x1e, 0x10, 0xd, 0xf7, 0xd9, 0x3, 0x2, 
       0x2, 0x2, 0xf7, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xdf, 0x3, 0x2, 0x2, 
       0x2, 0xf7, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xe5, 0x3, 0x2, 0x2, 0x2, 
       0xf7, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xf7, 
       0xee, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xfb, 
       0x3, 0x2, 0x2, 0x2, 0xf9, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x3, 
       0x2, 0x2, 0x2, 0xfa, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xf9, 0x3, 0x2, 
       0x2, 0x2, 0xfc, 0xfe, 0x7, 0x24, 0x2, 0x2, 0xfd, 0xff, 0x5, 0x1c, 
       0xf, 0x2, 0xfe, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 
       0x2, 0xff, 0x100, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x7, 0x25, 0x2, 
       0x2, 0x101, 0x21, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x7, 0x24, 0x2, 
       0x2, 0x103, 0x104, 0x5, 0x1e, 0x10, 0x2, 0x104, 0x105, 0x7, 0x25, 
       0x2, 0x2, 0x105, 0x107, 0x3, 0x2, 0x2, 0x2, 0x106, 0x102, 0x3, 0x2, 
       0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 0x2, 0x2, 0x108, 0x106, 0x3, 0x2, 
       0x2, 0x2, 0x108, 0x109, 0x3, 0x2, 0x2, 0x2, 0x109, 0x23, 0x3, 0x2, 
       0x2, 0x2, 0x1c, 0x26, 0x2c, 0x2e, 0x35, 0x40, 0x44, 0x4c, 0x52, 0x58, 
       0x6a, 0x70, 0x74, 0x8c, 0xa8, 0xb0, 0xbd, 0xc1, 0xc5, 0xc9, 0xcf, 
       0xd4, 0xd7, 0xf7, 0xf9, 0xfe, 0x108, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

TLParser::Initializer TLParser::_init;
