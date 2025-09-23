/*
 * Copyright 2025 Robina Li. MIT License
 * @file : mediator_pattern.cpp
 * @desc : Mediator Design Pattern Implementation
 */

#include "mediator_pattern.h"

namespace DesignPatterns {

void ChatRoom::registerUser(const std::string& name, ChatUser* user) {
    users_[name] = user;
}

std::string ChatRoom::sendMessage(const std::string& from, const std::string& to, const std::string& message) {
    if (users_.find(to) == users_.end()) {
        return "User '" + to + "' not found";
    }
    return users_[to]->receive(from, message);
}

std::string ChatUser::send(const std::string& to, const std::string& message) {
    return mediator_.sendMessage(name_, to, message);
}

std::string ChatUser::receive(const std::string& from, const std::string& message) {
    return name_ + " received from " + from + ": " + message;
}

} // namespace DesignPatterns


