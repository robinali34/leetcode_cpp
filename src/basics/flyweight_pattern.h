/*
 * Copyright 2025 Robina Li. MIT License
 * @file : flyweight_pattern.h
 * @desc : Flyweight Design Pattern Interfaces
 * @pattern : Structural Pattern - Use sharing to support large numbers of fine-grained objects efficiently
 */

#ifndef FLYWEIGHT_PATTERN_H
#define FLYWEIGHT_PATTERN_H

#include <memory>
#include <string>
#include <unordered_map>

namespace DesignPatterns {

class TreeType {
private:
    std::string name_;
    std::string color_;

public:
    TreeType(std::string name, std::string color) : name_(std::move(name)), color_(std::move(color)) {}
    std::string draw(int x, int y) const;
};

class TreeFactory {
private:
    static std::unordered_map<std::string, std::shared_ptr<TreeType>> cache_;

public:
    static std::shared_ptr<TreeType> getTreeType(const std::string& name, const std::string& color);
};

} // namespace DesignPatterns

#endif // FLYWEIGHT_PATTERN_H


