/*
 * Copyright 2025 Robina Li. MIT License
 * @file : proxy_pattern.h
 * @desc : Proxy Design Pattern Interfaces
 * @pattern : Structural Pattern - Provide a surrogate or placeholder
 */

#ifndef PROXY_PATTERN_H
#define PROXY_PATTERN_H

#include <memory>
#include <string>

namespace DesignPatterns {

class Image {
public:
    virtual ~Image() = default;
    virtual std::string display() = 0;
};

class RealImage : public Image {
private:
    std::string fileName_;
    bool loaded_ = false;
    std::string loadFromDisk();

public:
    explicit RealImage(std::string fileName) : fileName_(std::move(fileName)) {}
    std::string display() override;
};

class ProxyImage : public Image {
private:
    std::string fileName_;
    std::unique_ptr<RealImage> real_;

public:
    explicit ProxyImage(std::string fileName) : fileName_(std::move(fileName)) {}
    std::string display() override;
};

} // namespace DesignPatterns

#endif // PROXY_PATTERN_H


