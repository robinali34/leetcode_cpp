/*
 * Copyright 2025 Robina Li. MIT License
 * @file : visitor_pattern.h
 * @desc : Visitor Design Pattern Interfaces
 * @pattern : Behavioral Pattern - Represent an operation to be performed on elements of an object structure
 */

#ifndef VISITOR_PATTERN_H
#define VISITOR_PATTERN_H

#include <memory>
#include <string>
#include <vector>

namespace DesignPatterns {

class CircleElement;
class RectangleElement;

class Visitor {
public:
    virtual ~Visitor() = default;
    virtual std::string visitCircle(const CircleElement& circle) = 0;
    virtual std::string visitRectangle(const RectangleElement& rectangle) = 0;
};

class Element {
public:
    virtual ~Element() = default;
    virtual std::string accept(Visitor& visitor) const = 0;
};

class CircleElement : public Element {
private:
    float radius_;
public:
    explicit CircleElement(float r) : radius_(r) {}
    float radius() const { return radius_; }
    std::string accept(Visitor& visitor) const override;
};

class RectangleElement : public Element {
private:
    float width_;
    float height_;
public:
    RectangleElement(float w, float h) : width_(w), height_(h) {}
    float width() const { return width_; }
    float height() const { return height_; }
    std::string accept(Visitor& visitor) const override;
};

class AreaVisitor : public Visitor {
public:
    std::string visitCircle(const CircleElement& circle) override;
    std::string visitRectangle(const RectangleElement& rectangle) override;
};

} // namespace DesignPatterns

#endif // VISITOR_PATTERN_H


