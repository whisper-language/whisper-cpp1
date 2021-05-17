
// Generated from ./TL.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "TLListener.h"


/**
 * This class provides an empty implementation of TLListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TLBaseListener : public TLListener {
public:

  virtual void enterParse(TLParser::ParseContext * /*ctx*/) override { }
  virtual void exitParse(TLParser::ParseContext * /*ctx*/) override { }

  virtual void enterBlock(TLParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(TLParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatement(TLParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(TLParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssignment(TLParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(TLParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterBuildInIdentifierFunctionCall(TLParser::BuildInIdentifierFunctionCallContext * /*ctx*/) override { }
  virtual void exitBuildInIdentifierFunctionCall(TLParser::BuildInIdentifierFunctionCallContext * /*ctx*/) override { }

  virtual void enterIdentifierFunctionCall(TLParser::IdentifierFunctionCallContext * /*ctx*/) override { }
  virtual void exitIdentifierFunctionCall(TLParser::IdentifierFunctionCallContext * /*ctx*/) override { }

  virtual void enterPrintlnFunctionCall(TLParser::PrintlnFunctionCallContext * /*ctx*/) override { }
  virtual void exitPrintlnFunctionCall(TLParser::PrintlnFunctionCallContext * /*ctx*/) override { }

  virtual void enterPrintFunctionCall(TLParser::PrintFunctionCallContext * /*ctx*/) override { }
  virtual void exitPrintFunctionCall(TLParser::PrintFunctionCallContext * /*ctx*/) override { }

  virtual void enterAssertFunctionCall(TLParser::AssertFunctionCallContext * /*ctx*/) override { }
  virtual void exitAssertFunctionCall(TLParser::AssertFunctionCallContext * /*ctx*/) override { }

  virtual void enterSizeFunctionCall(TLParser::SizeFunctionCallContext * /*ctx*/) override { }
  virtual void exitSizeFunctionCall(TLParser::SizeFunctionCallContext * /*ctx*/) override { }

  virtual void enterIfStatement(TLParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(TLParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterIfStat(TLParser::IfStatContext * /*ctx*/) override { }
  virtual void exitIfStat(TLParser::IfStatContext * /*ctx*/) override { }

  virtual void enterElseIfStat(TLParser::ElseIfStatContext * /*ctx*/) override { }
  virtual void exitElseIfStat(TLParser::ElseIfStatContext * /*ctx*/) override { }

  virtual void enterElseStat(TLParser::ElseStatContext * /*ctx*/) override { }
  virtual void exitElseStat(TLParser::ElseStatContext * /*ctx*/) override { }

  virtual void enterFunctionDecl(TLParser::FunctionDeclContext * /*ctx*/) override { }
  virtual void exitFunctionDecl(TLParser::FunctionDeclContext * /*ctx*/) override { }

  virtual void enterForStatement(TLParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(TLParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(TLParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(TLParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterIdList(TLParser::IdListContext * /*ctx*/) override { }
  virtual void exitIdList(TLParser::IdListContext * /*ctx*/) override { }

  virtual void enterExprList(TLParser::ExprListContext * /*ctx*/) override { }
  virtual void exitExprList(TLParser::ExprListContext * /*ctx*/) override { }

  virtual void enterBoolExpression(TLParser::BoolExpressionContext * /*ctx*/) override { }
  virtual void exitBoolExpression(TLParser::BoolExpressionContext * /*ctx*/) override { }

  virtual void enterNumberExpression(TLParser::NumberExpressionContext * /*ctx*/) override { }
  virtual void exitNumberExpression(TLParser::NumberExpressionContext * /*ctx*/) override { }

  virtual void enterIdentifierExpression(TLParser::IdentifierExpressionContext * /*ctx*/) override { }
  virtual void exitIdentifierExpression(TLParser::IdentifierExpressionContext * /*ctx*/) override { }

  virtual void enterNotExpression(TLParser::NotExpressionContext * /*ctx*/) override { }
  virtual void exitNotExpression(TLParser::NotExpressionContext * /*ctx*/) override { }

  virtual void enterOrExpression(TLParser::OrExpressionContext * /*ctx*/) override { }
  virtual void exitOrExpression(TLParser::OrExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryMinusExpression(TLParser::UnaryMinusExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryMinusExpression(TLParser::UnaryMinusExpressionContext * /*ctx*/) override { }

  virtual void enterPowerExpression(TLParser::PowerExpressionContext * /*ctx*/) override { }
  virtual void exitPowerExpression(TLParser::PowerExpressionContext * /*ctx*/) override { }

  virtual void enterEqExpression(TLParser::EqExpressionContext * /*ctx*/) override { }
  virtual void exitEqExpression(TLParser::EqExpressionContext * /*ctx*/) override { }

  virtual void enterAndExpression(TLParser::AndExpressionContext * /*ctx*/) override { }
  virtual void exitAndExpression(TLParser::AndExpressionContext * /*ctx*/) override { }

  virtual void enterInExpression(TLParser::InExpressionContext * /*ctx*/) override { }
  virtual void exitInExpression(TLParser::InExpressionContext * /*ctx*/) override { }

  virtual void enterStringExpression(TLParser::StringExpressionContext * /*ctx*/) override { }
  virtual void exitStringExpression(TLParser::StringExpressionContext * /*ctx*/) override { }

  virtual void enterExpressionExpression(TLParser::ExpressionExpressionContext * /*ctx*/) override { }
  virtual void exitExpressionExpression(TLParser::ExpressionExpressionContext * /*ctx*/) override { }

  virtual void enterAddExpression(TLParser::AddExpressionContext * /*ctx*/) override { }
  virtual void exitAddExpression(TLParser::AddExpressionContext * /*ctx*/) override { }

  virtual void enterCompExpression(TLParser::CompExpressionContext * /*ctx*/) override { }
  virtual void exitCompExpression(TLParser::CompExpressionContext * /*ctx*/) override { }

  virtual void enterNullExpression(TLParser::NullExpressionContext * /*ctx*/) override { }
  virtual void exitNullExpression(TLParser::NullExpressionContext * /*ctx*/) override { }

  virtual void enterFunctionCallExpression(TLParser::FunctionCallExpressionContext * /*ctx*/) override { }
  virtual void exitFunctionCallExpression(TLParser::FunctionCallExpressionContext * /*ctx*/) override { }

  virtual void enterMultExpression(TLParser::MultExpressionContext * /*ctx*/) override { }
  virtual void exitMultExpression(TLParser::MultExpressionContext * /*ctx*/) override { }

  virtual void enterListExpression(TLParser::ListExpressionContext * /*ctx*/) override { }
  virtual void exitListExpression(TLParser::ListExpressionContext * /*ctx*/) override { }

  virtual void enterTernaryExpression(TLParser::TernaryExpressionContext * /*ctx*/) override { }
  virtual void exitTernaryExpression(TLParser::TernaryExpressionContext * /*ctx*/) override { }

  virtual void enterInputExpression(TLParser::InputExpressionContext * /*ctx*/) override { }
  virtual void exitInputExpression(TLParser::InputExpressionContext * /*ctx*/) override { }

  virtual void enterList(TLParser::ListContext * /*ctx*/) override { }
  virtual void exitList(TLParser::ListContext * /*ctx*/) override { }

  virtual void enterIndexes(TLParser::IndexesContext * /*ctx*/) override { }
  virtual void exitIndexes(TLParser::IndexesContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

