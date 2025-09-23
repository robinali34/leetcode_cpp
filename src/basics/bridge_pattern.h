/*
 * Copyright 2025 Robina Li. MIT License
 * @file : bridge_pattern.h
 * @desc : Bridge Design Pattern Interfaces
 * @pattern : Structural Pattern - Decouple abstraction from implementation
 */

#ifndef BRIDGE_PATTERN_H
#define BRIDGE_PATTERN_H

#include <memory>
#include <string>

namespace DesignPatterns {

// Implementor
class Renderer {
public:
    virtual ~Renderer() = default;
    virtual std::string renderCircle(float x, float y, float radius) = 0;
};

// Concrete Implementors
class VectorRenderer : public Renderer {
public:
    std::string renderCircle(float x, float y, float radius) override;
};

class RasterRenderer : public Renderer {
public:
    std::string renderCircle(float x, float y, float radius) override;
};

// Abstraction
class ShapeBridge {
protected:
    std::shared_ptr<Renderer> renderer_;

public:
    explicit ShapeBridge(std::shared_ptr<Renderer> renderer) : renderer_(std::move(renderer)) {}
    virtual ~ShapeBridge() = default;
    virtual std::string draw() = 0;
};

// Refined Abstraction
class CircleBridge : public ShapeBridge {
private:
    float x_;
    float y_;
    float r_;

public:
    CircleBridge(std::shared_ptr<Renderer> renderer, float x, float y, float r)
        : ShapeBridge(std::move(renderer)), x_(x), y_(y), r_(r) {}
    std::string draw() override;
};

} // namespace DesignPatterns

#endif // BRIDGE_PATTERN_H


