/*
 * Copyright 2025 Robina Li. MIT License
 * @file : chain_of_responsibility_pattern.h
 * @desc : Chain of Responsibility Design Pattern Interfaces
 * @pattern : Behavioral Pattern - Pass request along a chain of handlers
 */

#ifndef CHAIN_OF_RESPONSIBILITY_PATTERN_H
#define CHAIN_OF_RESPONSIBILITY_PATTERN_H

#include <memory>
#include <string>

namespace DesignPatterns {

enum class LogLevel { INFO, DEBUG, ERROR };

class Logger {
protected:
    std::unique_ptr<Logger> next_;

public:
    virtual ~Logger() = default;
    void setNext(std::unique_ptr<Logger> next) { next_ = std::move(next); }
    std::string log(LogLevel level, const std::string& message);

protected:
    virtual bool canHandle(LogLevel level) const = 0;
    virtual std::string write(const std::string& message) = 0;
};

class InfoLogger : public Logger {
protected:
    bool canHandle(LogLevel level) const override { return level == LogLevel::INFO; }
    std::string write(const std::string& message) override;
};

class DebugLogger : public Logger {
protected:
    bool canHandle(LogLevel level) const override { return level == LogLevel::DEBUG; }
    std::string write(const std::string& message) override;
};

class ErrorLogger : public Logger {
protected:
    bool canHandle(LogLevel level) const override { return level == LogLevel::ERROR; }
    std::string write(const std::string& message) override;
};

} // namespace DesignPatterns

#endif // CHAIN_OF_RESPONSIBILITY_PATTERN_H


