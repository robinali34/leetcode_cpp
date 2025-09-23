/*
 * Copyright 2025 Robina Li. MIT License
 * @file : state_pattern.cpp
 * @desc : State Design Pattern Implementation
 */

#include "state_pattern.h"

namespace DesignPatterns {

std::string Context::request() {
    return state_->handle(*this);
}

std::string LockedState::handle(Context& context) {
    context.setState(std::make_unique<UnlockedState>());
    return "Transitioned: Locked -> Unlocked";
}

std::string UnlockedState::handle(Context& context) {
    context.setState(std::make_unique<LockedState>());
    return "Transitioned: Unlocked -> Locked";
}

} // namespace DesignPatterns


