/*
 * Copyright 2025 Robina Li. MIT License
 * @file : decorator_pattern.h
 * @desc : Decorator Design Pattern Implementation
 * @pattern : Structural Pattern - Adds behavior to objects dynamically
 */

#ifndef DECORATOR_PATTERN_H
#define DECORATOR_PATTERN_H

#include <memory>
#include <string>

namespace DesignPatterns {

// Component interface
class Coffee {
public:
    virtual ~Coffee() = default;
    virtual std::string getDescription() const = 0;
    virtual double getCost() const = 0;
};

// Concrete Component
class SimpleCoffee : public Coffee {
public:
    std::string getDescription() const override;
    double getCost() const override;
};

// Decorator base class
class CoffeeDecorator : public Coffee {
protected:
    std::unique_ptr<Coffee> coffee_;
    
public:
    explicit CoffeeDecorator(std::unique_ptr<Coffee> coffee) : coffee_(std::move(coffee)) {}
};

// Concrete Decorators
class MilkDecorator : public CoffeeDecorator {
public:
    explicit MilkDecorator(std::unique_ptr<Coffee> coffee) : CoffeeDecorator(std::move(coffee)) {}
    
    std::string getDescription() const override;
    double getCost() const override;
};

class SugarDecorator : public CoffeeDecorator {
public:
    explicit SugarDecorator(std::unique_ptr<Coffee> coffee) : CoffeeDecorator(std::move(coffee)) {}
    
    std::string getDescription() const override;
    double getCost() const override;
};

class VanillaDecorator : public CoffeeDecorator {
public:
    explicit VanillaDecorator(std::unique_ptr<Coffee> coffee) : CoffeeDecorator(std::move(coffee)) {}
    
    std::string getDescription() const override;
    double getCost() const override;
};

class CaramelDecorator : public CoffeeDecorator {
public:
    explicit CaramelDecorator(std::unique_ptr<Coffee> coffee) : CoffeeDecorator(std::move(coffee)) {}
    
    std::string getDescription() const override;
    double getCost() const override;
};

// Text Processing Example
class TextProcessor {
public:
    virtual ~TextProcessor() = default;
    virtual std::string process(const std::string& text) = 0;
};

class BasicTextProcessor : public TextProcessor {
public:
    std::string process(const std::string& text) override;
};

class TextProcessorDecorator : public TextProcessor {
protected:
    std::unique_ptr<TextProcessor> processor_;
    
public:
    explicit TextProcessorDecorator(std::unique_ptr<TextProcessor> processor) 
        : processor_(std::move(processor)) {}
};

class BoldDecorator : public TextProcessorDecorator {
public:
    explicit BoldDecorator(std::unique_ptr<TextProcessor> processor) 
        : TextProcessorDecorator(std::move(processor)) {}
    
    std::string process(const std::string& text) override;
};

class ItalicDecorator : public TextProcessorDecorator {
public:
    explicit ItalicDecorator(std::unique_ptr<TextProcessor> processor) 
        : TextProcessorDecorator(std::move(processor)) {}
    
    std::string process(const std::string& text) override;
};

class UnderlineDecorator : public TextProcessorDecorator {
public:
    explicit UnderlineDecorator(std::unique_ptr<TextProcessor> processor) 
        : TextProcessorDecorator(std::move(processor)) {}
    
    std::string process(const std::string& text) override;
};

} // namespace DesignPatterns

#endif // DECORATOR_PATTERN_H

