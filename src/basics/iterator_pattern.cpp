/*
 * Copyright 2025 Robina Li. MIT License
 * @file : iterator_pattern.cpp
 * @desc : Iterator Design Pattern Implementation
 */

#include "iterator_pattern.h"

namespace DesignPatterns {

NameRepository::NameRepository() : names_{"Alice", "Bob", "Charlie", "Diana"} {}

NameRepository::NameRepository(std::vector<std::string> names) : names_(std::move(names)) {}

std::unique_ptr<Iterator<std::string>> NameRepository::createIterator() const {
    return std::make_unique<NameIterator>(names_);
}

bool NameIterator::hasNext() const {
    return index_ < names_.size();
}

std::string NameIterator::next() {
    if (!hasNext()) return {};
    return names_[index_++];
}

} // namespace DesignPatterns


