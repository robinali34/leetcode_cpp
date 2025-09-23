/*
 * Copyright 2025 Robina Li. MIT License
 * @file : builder_pattern.h
 * @desc : Builder Design Pattern Interfaces
 * @pattern : Creational Pattern - Separate construction of a complex object from its representation
 */

#ifndef BUILDER_PATTERN_H
#define BUILDER_PATTERN_H

#include <string>

namespace DesignPatterns {

class Burger {
private:
    std::string bun_;
    std::string patty_;
    std::string sauce_;
    bool cheese_ = false;

public:
    Burger(std::string bun, std::string patty, std::string sauce, bool cheese)
        : bun_(std::move(bun)), patty_(std::move(patty)), sauce_(std::move(sauce)), cheese_(cheese) {}
    std::string description() const;
};

class BurgerBuilder {
private:
    std::string bun_ = "sesame";
    std::string patty_ = "beef";
    std::string sauce_ = "ketchup";
    bool cheese_ = false;

public:
    BurgerBuilder& bun(const std::string& b);
    BurgerBuilder& patty(const std::string& p);
    BurgerBuilder& sauce(const std::string& s);
    BurgerBuilder& cheese(bool c);
    Burger build() const;
};

} // namespace DesignPatterns

#endif // BUILDER_PATTERN_H


