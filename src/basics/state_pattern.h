/*
 * Copyright 2025 Robina Li. MIT License
 * @file : state_pattern.h
 * @desc : State Design Pattern Interfaces
 * @pattern : Behavioral Pattern - Allow an object to alter its behavior when its internal state changes
 */

#ifndef STATE_PATTERN_H
#define STATE_PATTERN_H

#include <memory>
#include <string>

namespace DesignPatterns {

class Context;

class State {
public:
    virtual ~State() = default;
    virtual std::string handle(Context& context) = 0;
};

class Context {
private:
    std::unique_ptr<State> state_;

public:
    explicit Context(std::unique_ptr<State> initialState) : state_(std::move(initialState)) {}
    void setState(std::unique_ptr<State> state) { state_ = std::move(state); }
    std::string request();
};

class LockedState : public State {
public:
    std::string handle(Context& context) override;
};

class UnlockedState : public State {
public:
    std::string handle(Context& context) override;
};

} // namespace DesignPatterns

#endif // STATE_PATTERN_H


