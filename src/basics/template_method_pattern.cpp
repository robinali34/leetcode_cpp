/*
 * Copyright 2025 Robina Li. MIT License
 * @file : template_method_pattern.cpp
 * @desc : Template Method Design Pattern Implementation
 */

#include "template_method_pattern.h"

namespace DesignPatterns {

std::string CaffeineBeverage::prepareRecipe() {
    std::string out;
    out += boilWater();
    out += "; ";
    out += brew();
    out += "; ";
    out += pourInCup();
    out += "; ";
    out += addCondiments();
    return out;
}

std::string CaffeineBeverage::boilWater() { return "Boiling water"; }
std::string CaffeineBeverage::pourInCup() { return "Pouring into cup"; }

std::string Tea::brew() { return "Steeping the tea"; }
std::string Tea::addCondiments() { return "Adding lemon"; }

std::string CoffeeBrew::brew() { return "Dripping coffee through filter"; }
std::string CoffeeBrew::addCondiments() { return "Adding sugar and milk"; }

} // namespace DesignPatterns


