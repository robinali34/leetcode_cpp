/*
 * Copyright 2025 Robina Li. MIT License
 * @file : factory_pattern.h
 * @desc : Factory Design Pattern Implementation
 * @pattern : Creational Pattern - Creates objects without specifying their exact class
 */

#ifndef FACTORY_PATTERN_H
#define FACTORY_PATTERN_H

#include <memory>
#include <string>

namespace DesignPatterns {

// Abstract Product
class Shape {
public:
    virtual ~Shape() = default;
    virtual void draw() = 0;
    virtual double getArea() = 0;
};

// Concrete Products
class Circle : public Shape {
private:
    double radius_;
    
public:
    explicit Circle(double radius) : radius_(radius) {}
    
    void draw() override;
    double getArea() override;
};

class Rectangle : public Shape {
private:
    double width_, height_;
    
public:
    Rectangle(double width, double height) : width_(width), height_(height) {}
    
    void draw() override;
    double getArea() override;
};

class Triangle : public Shape {
private:
    double base_, height_;
    
public:
    Triangle(double base, double height) : base_(base), height_(height) {}
    
    void draw() override;
    double getArea() override;
};

// Abstract Factory
class ShapeFactory {
public:
    virtual ~ShapeFactory() = default;
    virtual std::unique_ptr<Shape> createShape(const std::string& type) = 0;
};

// Concrete Factory
class ConcreteShapeFactory : public ShapeFactory {
public:
    std::unique_ptr<Shape> createShape(const std::string& type) override;
};

// Factory Method Pattern
class Document {
public:
    virtual ~Document() = default;
    virtual void open() = 0;
    virtual void close() = 0;
};

class TextDocument : public Document {
public:
    void open() override;
    void close() override;
};

class PDFDocument : public Document {
public:
    void open() override;
    void close() override;
};

class Application {
public:
    virtual ~Application() = default;
    virtual std::unique_ptr<Document> createDocument() = 0;
};

class TextEditor : public Application {
public:
    std::unique_ptr<Document> createDocument() override;
};

class PDFViewer : public Application {
public:
    std::unique_ptr<Document> createDocument() override;
};

} // namespace DesignPatterns

#endif // FACTORY_PATTERN_H

