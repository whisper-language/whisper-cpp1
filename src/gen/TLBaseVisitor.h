
// Generated from ./TL.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "TLVisitor.h"


/**
 * This class provides an empty implementation of TLVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  TLBaseVisitor : public TLVisitor {
public:

  virtual antlrcpp::Any visitParse(TLParser::ParseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(TLParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(TLParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment(TLParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBuildInIdentifierFunctionCall(TLParser::BuildInIdentifierFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierFunctionCall(TLParser::IdentifierFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintlnFunctionCall(TLParser::PrintlnFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintFunctionCall(TLParser::PrintFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssertFunctionCall(TLParser::AssertFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSizeFunctionCall(TLParser::SizeFunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(TLParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStat(TLParser::IfStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseIfStat(TLParser::ElseIfStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseStat(TLParser::ElseStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDecl(TLParser::FunctionDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForStatement(TLParser::ForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStatement(TLParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdList(TLParser::IdListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprList(TLParser::ExprListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolExpression(TLParser::BoolExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumberExpression(TLParser::NumberExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierExpression(TLParser::IdentifierExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotExpression(TLParser::NotExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrExpression(TLParser::OrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryMinusExpression(TLParser::UnaryMinusExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPowerExpression(TLParser::PowerExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqExpression(TLParser::EqExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAndExpression(TLParser::AndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInExpression(TLParser::InExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringExpression(TLParser::StringExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionExpression(TLParser::ExpressionExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddExpression(TLParser::AddExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompExpression(TLParser::CompExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNullExpression(TLParser::NullExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCallExpression(TLParser::FunctionCallExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultExpression(TLParser::MultExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitListExpression(TLParser::ListExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTernaryExpression(TLParser::TernaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInputExpression(TLParser::InputExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList(TLParser::ListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexes(TLParser::IndexesContext *ctx) override {
    return visitChildren(ctx);
  }


};

