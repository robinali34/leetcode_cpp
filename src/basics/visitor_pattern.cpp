/*
 * Copyright 2025 Robina Li. MIT License
 * @file : visitor_pattern.cpp
 * @desc : Visitor Design Pattern Implementation
 */

#include "visitor_pattern.h"
#include <cmath>

namespace DesignPatterns {

std::string CircleElement::accept(Visitor& visitor) const {
    return visitor.visitCircle(*this);
}

std::string RectangleElement::accept(Visitor& visitor) const {
    return visitor.visitRectangle(*this);
}

std::string AreaVisitor::visitCircle(const CircleElement& circle) {
    double area = M_PI * circle.radius() * circle.radius();
    return "Area(Circle)=" + std::to_string(area);
}

std::string AreaVisitor::visitRectangle(const RectangleElement& rectangle) {
    double area = rectangle.width() * rectangle.height();
    return "Area(Rectangle)=" + std::to_string(area);
}

} // namespace DesignPatterns


