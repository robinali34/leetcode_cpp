/*
 * Copyright 2025 Robina Li. MIT License
 * @file : template_method_pattern.h
 * @desc : Template Method Design Pattern Interfaces
 * @pattern : Behavioral Pattern - Define the skeleton of an algorithm in an operation
 */

#ifndef TEMPLATE_METHOD_PATTERN_H
#define TEMPLATE_METHOD_PATTERN_H

#include <string>

namespace DesignPatterns {

class CaffeineBeverage {
public:
    virtual ~CaffeineBeverage() = default;
    std::string prepareRecipe();

protected:
    virtual std::string boilWater();
    virtual std::string brew() = 0;
    virtual std::string pourInCup();
    virtual std::string addCondiments() = 0;
};

class Tea : public CaffeineBeverage {
protected:
    std::string brew() override;
    std::string addCondiments() override;
};

class CoffeeBrew : public CaffeineBeverage {
protected:
    std::string brew() override;
    std::string addCondiments() override;
};

} // namespace DesignPatterns

#endif // TEMPLATE_METHOD_PATTERN_H


