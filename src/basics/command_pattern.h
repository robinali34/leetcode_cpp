/*
 * Copyright 2025 Robina Li. MIT License
 * @file : command_pattern.h
 * @desc : Command Design Pattern Interfaces
 * @pattern : Behavioral Pattern - Encapsulates requests as objects
 */

#ifndef COMMAND_PATTERN_H
#define COMMAND_PATTERN_H

#include <memory>
#include <string>
#include <vector>

namespace DesignPatterns {

// Receiver
class Light {
private:
    bool isOn_ = false;

public:
    std::string on();
    std::string off();
    bool isOn() const { return isOn_; }
};

// Command interface
class Command {
public:
    virtual ~Command() = default;
    virtual std::string execute() = 0;
    virtual std::string undo() = 0;
};

// Concrete commands
class LightOnCommand : public Command {
private:
    Light& light_;

public:
    explicit LightOnCommand(Light& light) : light_(light) {}
    std::string execute() override;
    std::string undo() override;
};

class LightOffCommand : public Command {
private:
    Light& light_;

public:
    explicit LightOffCommand(Light& light) : light_(light) {}
    std::string execute() override;
    std::string undo() override;
};

// Invoker
class RemoteControl {
private:
    std::unique_ptr<Command> onCommand_;
    std::unique_ptr<Command> offCommand_;
    std::vector<std::string> history_;

public:
    void setCommands(std::unique_ptr<Command> onCommand, std::unique_ptr<Command> offCommand);
    std::string pressOn();
    std::string pressOff();
    std::string pressUndo();
    const std::vector<std::string>& history() const { return history_; }
};

// MacroCommand example (composite command)
class MacroCommand : public Command {
private:
    std::vector<std::unique_ptr<Command>> commands_;

public:
    void add(std::unique_ptr<Command> command);
    std::string execute() override;
    std::string undo() override;
};

} // namespace DesignPatterns

#endif // COMMAND_PATTERN_H


