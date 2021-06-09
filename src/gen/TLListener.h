
// Generated from ./TL.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "TLParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by TLParser.
 */
class  TLListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterParse(TLParser::ParseContext *ctx) = 0;
  virtual void exitParse(TLParser::ParseContext *ctx) = 0;

  virtual void enterBlock(TLParser::BlockContext *ctx) = 0;
  virtual void exitBlock(TLParser::BlockContext *ctx) = 0;

  virtual void enterStatement(TLParser::StatementContext *ctx) = 0;
  virtual void exitStatement(TLParser::StatementContext *ctx) = 0;

  virtual void enterAssignment(TLParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(TLParser::AssignmentContext *ctx) = 0;

  virtual void enterBuildInIdentifierFunctionCall(TLParser::BuildInIdentifierFunctionCallContext *ctx) = 0;
  virtual void exitBuildInIdentifierFunctionCall(TLParser::BuildInIdentifierFunctionCallContext *ctx) = 0;

  virtual void enterIdentifierFunctionCall(TLParser::IdentifierFunctionCallContext *ctx) = 0;
  virtual void exitIdentifierFunctionCall(TLParser::IdentifierFunctionCallContext *ctx) = 0;

  virtual void enterPrintlnFunctionCall(TLParser::PrintlnFunctionCallContext *ctx) = 0;
  virtual void exitPrintlnFunctionCall(TLParser::PrintlnFunctionCallContext *ctx) = 0;

  virtual void enterPrintFunctionCall(TLParser::PrintFunctionCallContext *ctx) = 0;
  virtual void exitPrintFunctionCall(TLParser::PrintFunctionCallContext *ctx) = 0;

  virtual void enterAssertFunctionCall(TLParser::AssertFunctionCallContext *ctx) = 0;
  virtual void exitAssertFunctionCall(TLParser::AssertFunctionCallContext *ctx) = 0;

  virtual void enterSizeFunctionCall(TLParser::SizeFunctionCallContext *ctx) = 0;
  virtual void exitSizeFunctionCall(TLParser::SizeFunctionCallContext *ctx) = 0;

  virtual void enterIfStatement(TLParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(TLParser::IfStatementContext *ctx) = 0;

  virtual void enterIfStat(TLParser::IfStatContext *ctx) = 0;
  virtual void exitIfStat(TLParser::IfStatContext *ctx) = 0;

  virtual void enterElseIfStat(TLParser::ElseIfStatContext *ctx) = 0;
  virtual void exitElseIfStat(TLParser::ElseIfStatContext *ctx) = 0;

  virtual void enterElseStat(TLParser::ElseStatContext *ctx) = 0;
  virtual void exitElseStat(TLParser::ElseStatContext *ctx) = 0;

  virtual void enterFunctionDecl(TLParser::FunctionDeclContext *ctx) = 0;
  virtual void exitFunctionDecl(TLParser::FunctionDeclContext *ctx) = 0;

  virtual void enterForStatement(TLParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(TLParser::ForStatementContext *ctx) = 0;

  virtual void enterWhileStatement(TLParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(TLParser::WhileStatementContext *ctx) = 0;

  virtual void enterIdList(TLParser::IdListContext *ctx) = 0;
  virtual void exitIdList(TLParser::IdListContext *ctx) = 0;

  virtual void enterExprList(TLParser::ExprListContext *ctx) = 0;
  virtual void exitExprList(TLParser::ExprListContext *ctx) = 0;

  virtual void enterBoolExpression(TLParser::BoolExpressionContext *ctx) = 0;
  virtual void exitBoolExpression(TLParser::BoolExpressionContext *ctx) = 0;

  virtual void enterNumberExpression(TLParser::NumberExpressionContext *ctx) = 0;
  virtual void exitNumberExpression(TLParser::NumberExpressionContext *ctx) = 0;

  virtual void enterIdentifierExpression(TLParser::IdentifierExpressionContext *ctx) = 0;
  virtual void exitIdentifierExpression(TLParser::IdentifierExpressionContext *ctx) = 0;

  virtual void enterNotExpression(TLParser::NotExpressionContext *ctx) = 0;
  virtual void exitNotExpression(TLParser::NotExpressionContext *ctx) = 0;

  virtual void enterOrExpression(TLParser::OrExpressionContext *ctx) = 0;
  virtual void exitOrExpression(TLParser::OrExpressionContext *ctx) = 0;

  virtual void enterUnaryMinusExpression(TLParser::UnaryMinusExpressionContext *ctx) = 0;
  virtual void exitUnaryMinusExpression(TLParser::UnaryMinusExpressionContext *ctx) = 0;

  virtual void enterPowerExpression(TLParser::PowerExpressionContext *ctx) = 0;
  virtual void exitPowerExpression(TLParser::PowerExpressionContext *ctx) = 0;

  virtual void enterEqExpression(TLParser::EqExpressionContext *ctx) = 0;
  virtual void exitEqExpression(TLParser::EqExpressionContext *ctx) = 0;

  virtual void enterAndExpression(TLParser::AndExpressionContext *ctx) = 0;
  virtual void exitAndExpression(TLParser::AndExpressionContext *ctx) = 0;

  virtual void enterInExpression(TLParser::InExpressionContext *ctx) = 0;
  virtual void exitInExpression(TLParser::InExpressionContext *ctx) = 0;

  virtual void enterStringExpression(TLParser::StringExpressionContext *ctx) = 0;
  virtual void exitStringExpression(TLParser::StringExpressionContext *ctx) = 0;

  virtual void enterExpressionExpression(TLParser::ExpressionExpressionContext *ctx) = 0;
  virtual void exitExpressionExpression(TLParser::ExpressionExpressionContext *ctx) = 0;

  virtual void enterAddExpression(TLParser::AddExpressionContext *ctx) = 0;
  virtual void exitAddExpression(TLParser::AddExpressionContext *ctx) = 0;

  virtual void enterCompExpression(TLParser::CompExpressionContext *ctx) = 0;
  virtual void exitCompExpression(TLParser::CompExpressionContext *ctx) = 0;

  virtual void enterNullExpression(TLParser::NullExpressionContext *ctx) = 0;
  virtual void exitNullExpression(TLParser::NullExpressionContext *ctx) = 0;

  virtual void enterFunctionCallExpression(TLParser::FunctionCallExpressionContext *ctx) = 0;
  virtual void exitFunctionCallExpression(TLParser::FunctionCallExpressionContext *ctx) = 0;

  virtual void enterMultExpression(TLParser::MultExpressionContext *ctx) = 0;
  virtual void exitMultExpression(TLParser::MultExpressionContext *ctx) = 0;

  virtual void enterListExpression(TLParser::ListExpressionContext *ctx) = 0;
  virtual void exitListExpression(TLParser::ListExpressionContext *ctx) = 0;

  virtual void enterTernaryExpression(TLParser::TernaryExpressionContext *ctx) = 0;
  virtual void exitTernaryExpression(TLParser::TernaryExpressionContext *ctx) = 0;

  virtual void enterInputExpression(TLParser::InputExpressionContext *ctx) = 0;
  virtual void exitInputExpression(TLParser::InputExpressionContext *ctx) = 0;

  virtual void enterList(TLParser::ListContext *ctx) = 0;
  virtual void exitList(TLParser::ListContext *ctx) = 0;

  virtual void enterIndexes(TLParser::IndexesContext *ctx) = 0;
  virtual void exitIndexes(TLParser::IndexesContext *ctx) = 0;


};

