/*
 * Copyright 2025 Robina Li. MIT License
 * @file : interpreter_pattern.h
 * @desc : Interpreter Design Pattern Interfaces
 * @pattern : Behavioral Pattern - Define a representation for a grammar and an interpreter
 */

#ifndef INTERPRETER_PATTERN_H
#define INTERPRETER_PATTERN_H

#include <memory>
#include <string>

namespace DesignPatterns {

class Expression {
public:
    virtual ~Expression() = default;
    virtual int interpret() const = 0;
};

class NumberExpression : public Expression {
private:
    int value_;
public:
    explicit NumberExpression(int value) : value_(value) {}
    int interpret() const override { return value_; }
};

class AddExpression : public Expression {
private:
    std::unique_ptr<Expression> left_;
    std::unique_ptr<Expression> right_;
public:
    AddExpression(std::unique_ptr<Expression> left, std::unique_ptr<Expression> right)
        : left_(std::move(left)), right_(std::move(right)) {}
    int interpret() const override { return left_->interpret() + right_->interpret(); }
};

class SubtractExpression : public Expression {
private:
    std::unique_ptr<Expression> left_;
    std::unique_ptr<Expression> right_;
public:
    SubtractExpression(std::unique_ptr<Expression> left, std::unique_ptr<Expression> right)
        : left_(std::move(left)), right_(std::move(right)) {}
    int interpret() const override { return left_->interpret() - right_->interpret(); }
};

} // namespace DesignPatterns

#endif // INTERPRETER_PATTERN_H


