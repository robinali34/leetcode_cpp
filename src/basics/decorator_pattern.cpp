/*
 * Copyright 2025 Robina Li. MIT License
 * @file : decorator_pattern.cpp
 * @desc : Decorator Design Pattern Implementation
 */

#include "decorator_pattern.h"
#include <iostream>

namespace DesignPatterns {

// SimpleCoffee implementation
std::string SimpleCoffee::getDescription() const {
    return "Simple Coffee";
}

double SimpleCoffee::getCost() const {
    return 2.0;
}

// MilkDecorator implementation
std::string MilkDecorator::getDescription() const {
    return coffee_->getDescription() + ", Milk";
}

double MilkDecorator::getCost() const {
    return coffee_->getCost() + 0.5;
}

// SugarDecorator implementation
std::string SugarDecorator::getDescription() const {
    return coffee_->getDescription() + ", Sugar";
}

double SugarDecorator::getCost() const {
    return coffee_->getCost() + 0.2;
}

// VanillaDecorator implementation
std::string VanillaDecorator::getDescription() const {
    return coffee_->getDescription() + ", Vanilla";
}

double VanillaDecorator::getCost() const {
    return coffee_->getCost() + 0.8;
}

// CaramelDecorator implementation
std::string CaramelDecorator::getDescription() const {
    return coffee_->getDescription() + ", Caramel";
}

double CaramelDecorator::getCost() const {
    return coffee_->getCost() + 1.0;
}

// BasicTextProcessor implementation
std::string BasicTextProcessor::process(const std::string& text) {
    return text;
}

// BoldDecorator implementation
std::string BoldDecorator::process(const std::string& text) {
    return "<b>" + processor_->process(text) + "</b>";
}

// ItalicDecorator implementation
std::string ItalicDecorator::process(const std::string& text) {
    return "<i>" + processor_->process(text) + "</i>";
}

// UnderlineDecorator implementation
std::string UnderlineDecorator::process(const std::string& text) {
    return "<u>" + processor_->process(text) + "</u>";
}

} // namespace DesignPatterns

