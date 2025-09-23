/*
 * Copyright 2025 Robina Li. MIT License
 * @file : proxy_pattern.cpp
 * @desc : Proxy Design Pattern Implementation
 */

#include "proxy_pattern.h"

namespace DesignPatterns {

std::string RealImage::loadFromDisk() {
    loaded_ = true;
    return "Loading " + fileName_ + " from disk";
}

std::string RealImage::display() {
    if (!loaded_) {
        loadFromDisk();
    }
    return "Displaying " + fileName_;
}

std::string ProxyImage::display() {
    if (!real_) {
        real_ = std::make_unique<RealImage>(fileName_);
    }
    return real_->display();
}

} // namespace DesignPatterns


