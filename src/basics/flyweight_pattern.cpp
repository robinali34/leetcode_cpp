/*
 * Copyright 2025 Robina Li. MIT License
 * @file : flyweight_pattern.cpp
 * @desc : Flyweight Design Pattern Implementation
 */

#include "flyweight_pattern.h"

namespace DesignPatterns {

std::unordered_map<std::string, std::shared_ptr<TreeType>> TreeFactory::cache_;

std::string TreeType::draw(int x, int y) const {
    return "Tree '" + name_ + "' color " + color_ + " at (" + std::to_string(x) + "," + std::to_string(y) + ")";
}

std::shared_ptr<TreeType> TreeFactory::getTreeType(const std::string& name, const std::string& color) {
    std::string key = name + ":" + color;
    auto it = cache_.find(key);
    if (it != cache_.end()) {
        return it->second;
    }
    auto type = std::make_shared<TreeType>(name, color);
    cache_[key] = type;
    return type;
}

} // namespace DesignPatterns


