/*
 * Copyright 2025 Robina Li. MIT License
 * @file : composite_pattern.cpp
 * @desc : Composite Design Pattern Implementation
 */

#include "composite_pattern.h"

namespace DesignPatterns {

void DirectoryComposite::add(std::shared_ptr<FileSystemNode> node) {
    children_.push_back(std::move(node));
}

size_t DirectoryComposite::size() const {
    size_t total = 0;
    for (const auto& child : children_) {
        total += child->size();
    }
    return total;
}

} // namespace DesignPatterns


