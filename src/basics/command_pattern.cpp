/*
 * Copyright 2025 Robina Li. MIT License
 * @file : command_pattern.cpp
 * @desc : Command Design Pattern Implementation
 */

#include "command_pattern.h"

namespace DesignPatterns {

// Receiver implementation
std::string Light::on() {
    if (isOn_) return "Light is already on";
    isOn_ = true;
    return "Light is ON";
}

std::string Light::off() {
    if (!isOn_) return "Light is already off";
    isOn_ = false;
    return "Light is OFF";
}

// LightOnCommand implementation
std::string LightOnCommand::execute() {
    return light_.on();
}

std::string LightOnCommand::undo() {
    return light_.off();
}

// LightOffCommand implementation
std::string LightOffCommand::execute() {
    return light_.off();
}

std::string LightOffCommand::undo() {
    return light_.on();
}

// RemoteControl implementation
void RemoteControl::setCommands(std::unique_ptr<Command> onCommand, std::unique_ptr<Command> offCommand) {
    onCommand_ = std::move(onCommand);
    offCommand_ = std::move(offCommand);
}

std::string RemoteControl::pressOn() {
    if (!onCommand_) return "No ON command set";
    std::string result = onCommand_->execute();
    history_.push_back(result);
    return result;
}

std::string RemoteControl::pressOff() {
    if (!offCommand_) return "No OFF command set";
    std::string result = offCommand_->execute();
    history_.push_back(result);
    return result;
}

std::string RemoteControl::pressUndo() {
    if (history_.empty()) return "Nothing to undo";
    // simple policy: undo last action by toggling
    if (!onCommand_ || !offCommand_) return "Undo unavailable";
    const std::string& last = history_.back();
    std::string result;
    if (last.find("ON") != std::string::npos) {
        result = offCommand_->undo();
    } else {
        result = onCommand_->undo();
    }
    history_.push_back("UNDO: " + result);
    return result;
}

// MacroCommand implementation
void MacroCommand::add(std::unique_ptr<Command> command) {
    commands_.push_back(std::move(command));
}

std::string MacroCommand::execute() {
    std::string out;
    for (auto& cmd : commands_) {
        if (!out.empty()) out += "; ";
        out += cmd->execute();
    }
    return out.empty() ? std::string("No commands") : out;
}

std::string MacroCommand::undo() {
    std::string out;
    for (auto it = commands_.rbegin(); it != commands_.rend(); ++it) {
        if (!out.empty()) out += "; ";
        out += (*it)->undo();
    }
    return out.empty() ? std::string("No commands") : out;
}

} // namespace DesignPatterns


