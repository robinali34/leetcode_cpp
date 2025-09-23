/*
 * Copyright 2025 Robina Li. MIT License
 * @file : mediator_pattern.h
 * @desc : Mediator Design Pattern Interfaces
 * @pattern : Behavioral Pattern - Defines an object that encapsulates how a set of objects interact
 */

#ifndef MEDIATOR_PATTERN_H
#define MEDIATOR_PATTERN_H

#include <memory>
#include <string>
#include <unordered_map>

namespace DesignPatterns {

class ChatUser;

class ChatMediator {
public:
    virtual ~ChatMediator() = default;
    virtual void registerUser(const std::string& name, ChatUser* user) = 0;
    virtual std::string sendMessage(const std::string& from, const std::string& to, const std::string& message) = 0;
};

class ChatRoom : public ChatMediator {
private:
    std::unordered_map<std::string, ChatUser*> users_;

public:
    void registerUser(const std::string& name, ChatUser* user) override;
    std::string sendMessage(const std::string& from, const std::string& to, const std::string& message) override;
};

class ChatUser {
private:
    std::string name_;
    ChatMediator& mediator_;

public:
    ChatUser(std::string name, ChatMediator& mediator) : name_(std::move(name)), mediator_(mediator) {}
    const std::string& name() const { return name_; }
    std::string send(const std::string& to, const std::string& message);
    std::string receive(const std::string& from, const std::string& message);
};

} // namespace DesignPatterns

#endif // MEDIATOR_PATTERN_H


