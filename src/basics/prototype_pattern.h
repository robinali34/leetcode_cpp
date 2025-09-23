/*
 * Copyright 2025 Robina Li. MIT License
 * @file : prototype_pattern.h
 * @desc : Prototype Design Pattern Interfaces
 * @pattern : Creational Pattern - Specify the kinds of objects to create using a prototypical instance
 */

#ifndef PROTOTYPE_PATTERN_H
#define PROTOTYPE_PATTERN_H

#include <memory>
#include <string>

namespace DesignPatterns {

class ShapeProto {
public:
    virtual ~ShapeProto() = default;
    virtual std::unique_ptr<ShapeProto> clone() const = 0;
    virtual std::string draw() const = 0;
};

class CircleProto : public ShapeProto {
private:
    int radius_;
public:
    explicit CircleProto(int r) : radius_(r) {}
    std::unique_ptr<ShapeProto> clone() const override;
    std::string draw() const override;
};

class RectangleProto : public ShapeProto {
private:
    int width_;
    int height_;
public:
    RectangleProto(int w, int h) : width_(w), height_(h) {}
    std::unique_ptr<ShapeProto> clone() const override;
    std::string draw() const override;
};

} // namespace DesignPatterns

#endif // PROTOTYPE_PATTERN_H


