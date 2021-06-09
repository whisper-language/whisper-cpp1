
// Generated from ./TL.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "TLParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by TLParser.
 */
class  TLVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by TLParser.
   */
    virtual antlrcpp::Any visitParse(TLParser::ParseContext *context) = 0;

    virtual antlrcpp::Any visitBlock(TLParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitStatement(TLParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitAssignment(TLParser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitBuildInIdentifierFunctionCall(TLParser::BuildInIdentifierFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierFunctionCall(TLParser::IdentifierFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitPrintlnFunctionCall(TLParser::PrintlnFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitPrintFunctionCall(TLParser::PrintFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitAssertFunctionCall(TLParser::AssertFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitSizeFunctionCall(TLParser::SizeFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(TLParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStat(TLParser::IfStatContext *context) = 0;

    virtual antlrcpp::Any visitElseIfStat(TLParser::ElseIfStatContext *context) = 0;

    virtual antlrcpp::Any visitElseStat(TLParser::ElseStatContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDecl(TLParser::FunctionDeclContext *context) = 0;

    virtual antlrcpp::Any visitForStatement(TLParser::ForStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(TLParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitIdList(TLParser::IdListContext *context) = 0;

    virtual antlrcpp::Any visitExprList(TLParser::ExprListContext *context) = 0;

    virtual antlrcpp::Any visitBoolExpression(TLParser::BoolExpressionContext *context) = 0;

    virtual antlrcpp::Any visitNumberExpression(TLParser::NumberExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierExpression(TLParser::IdentifierExpressionContext *context) = 0;

    virtual antlrcpp::Any visitNotExpression(TLParser::NotExpressionContext *context) = 0;

    virtual antlrcpp::Any visitOrExpression(TLParser::OrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryMinusExpression(TLParser::UnaryMinusExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPowerExpression(TLParser::PowerExpressionContext *context) = 0;

    virtual antlrcpp::Any visitEqExpression(TLParser::EqExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAndExpression(TLParser::AndExpressionContext *context) = 0;

    virtual antlrcpp::Any visitInExpression(TLParser::InExpressionContext *context) = 0;

    virtual antlrcpp::Any visitStringExpression(TLParser::StringExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExpressionExpression(TLParser::ExpressionExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAddExpression(TLParser::AddExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCompExpression(TLParser::CompExpressionContext *context) = 0;

    virtual antlrcpp::Any visitNullExpression(TLParser::NullExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallExpression(TLParser::FunctionCallExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultExpression(TLParser::MultExpressionContext *context) = 0;

    virtual antlrcpp::Any visitListExpression(TLParser::ListExpressionContext *context) = 0;

    virtual antlrcpp::Any visitTernaryExpression(TLParser::TernaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitInputExpression(TLParser::InputExpressionContext *context) = 0;

    virtual antlrcpp::Any visitList(TLParser::ListContext *context) = 0;

    virtual antlrcpp::Any visitIndexes(TLParser::IndexesContext *context) = 0;


};

