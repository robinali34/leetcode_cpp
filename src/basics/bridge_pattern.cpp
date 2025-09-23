/*
 * Copyright 2025 Robina Li. MIT License
 * @file : bridge_pattern.cpp
 * @desc : Bridge Design Pattern Implementation
 */

#include "bridge_pattern.h"

namespace DesignPatterns {

std::string VectorRenderer::renderCircle(float x, float y, float radius) {
    return "Vector: circle at (" + std::to_string(x) + "," + std::to_string(y) + ") r=" + std::to_string(radius);
}

std::string RasterRenderer::renderCircle(float x, float y, float radius) {
    return "Raster: circle at (" + std::to_string(x) + "," + std::to_string(y) + ") r=" + std::to_string(radius);
}

std::string CircleBridge::draw() {
    return renderer_->renderCircle(x_, y_, r_);
}

} // namespace DesignPatterns


