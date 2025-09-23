/*
 * Copyright 2025 Robina Li. MIT License
 * @file : factory_pattern.cpp
 * @desc : Factory Design Pattern Implementation
 */

#include "factory_pattern.h"
#include <iostream>
#include <cmath>

namespace DesignPatterns {

// Circle implementation
void Circle::draw() {
    std::cout << "Drawing a circle with radius " << radius_ << std::endl;
}

double Circle::getArea() {
    return M_PI * radius_ * radius_;
}

// Rectangle implementation
void Rectangle::draw() {
    std::cout << "Drawing a rectangle with width " << width_ 
              << " and height " << height_ << std::endl;
}

double Rectangle::getArea() {
    return width_ * height_;
}

// Triangle implementation
void Triangle::draw() {
    std::cout << "Drawing a triangle with base " << base_ 
              << " and height " << height_ << std::endl;
}

double Triangle::getArea() {
    return 0.5 * base_ * height_;
}

// Concrete Shape Factory implementation
std::unique_ptr<Shape> ConcreteShapeFactory::createShape(const std::string& type) {
    if (type == "circle") {
        return std::make_unique<Circle>(5.0);
    } else if (type == "rectangle") {
        return std::make_unique<Rectangle>(4.0, 6.0);
    } else if (type == "triangle") {
        return std::make_unique<Triangle>(3.0, 4.0);
    }
    return nullptr;
}

// Document implementations
void TextDocument::open() {
    std::cout << "Opening text document..." << std::endl;
}

void TextDocument::close() {
    std::cout << "Closing text document..." << std::endl;
}

void PDFDocument::open() {
    std::cout << "Opening PDF document..." << std::endl;
}

void PDFDocument::close() {
    std::cout << "Closing PDF document..." << std::endl;
}

// Application implementations
std::unique_ptr<Document> TextEditor::createDocument() {
    return std::make_unique<TextDocument>();
}

std::unique_ptr<Document> PDFViewer::createDocument() {
    return std::make_unique<PDFDocument>();
}

} // namespace DesignPatterns

