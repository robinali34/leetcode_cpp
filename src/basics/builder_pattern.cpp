/*
 * Copyright 2025 Robina Li. MIT License
 * @file : builder_pattern.cpp
 * @desc : Builder Design Pattern Implementation
 */

#include "builder_pattern.h"

namespace DesignPatterns {

std::string Burger::description() const {
    return bun_ + " bun, " + patty_ + " patty, " + sauce_ + (cheese_ ? ", cheese" : "");
}

BurgerBuilder& BurgerBuilder::bun(const std::string& b) {
    bun_ = b; return *this;
}

BurgerBuilder& BurgerBuilder::patty(const std::string& p) {
    patty_ = p; return *this;
}

BurgerBuilder& BurgerBuilder::sauce(const std::string& s) {
    sauce_ = s; return *this;
}

BurgerBuilder& BurgerBuilder::cheese(bool c) {
    cheese_ = c; return *this;
}

Burger BurgerBuilder::build() const {
    return Burger(bun_, patty_, sauce_, cheese_);
}

} // namespace DesignPatterns


