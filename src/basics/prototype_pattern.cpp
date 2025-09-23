/*
 * Copyright 2025 Robina Li. MIT License
 * @file : prototype_pattern.cpp
 * @desc : Prototype Design Pattern Implementation
 */

#include "prototype_pattern.h"

namespace DesignPatterns {

std::unique_ptr<ShapeProto> CircleProto::clone() const {
    return std::make_unique<CircleProto>(*this);
}

std::string CircleProto::draw() const {
    return "Drawing Circle radius=" + std::to_string(radius_);
}

std::unique_ptr<ShapeProto> RectangleProto::clone() const {
    return std::make_unique<RectangleProto>(*this);
}

std::string RectangleProto::draw() const {
    return "Drawing Rectangle " + std::to_string(width_) + "x" + std::to_string(height_);
}

} // namespace DesignPatterns


