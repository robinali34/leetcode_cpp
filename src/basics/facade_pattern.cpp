/*
 * Copyright 2025 Robina Li. MIT License
 * @file : facade_pattern.cpp
 * @desc : Facade Design Pattern Implementation
 */

#include "facade_pattern.h"

namespace DesignPatterns {

std::string CPU::freeze() { return "CPU freeze"; }
std::string CPU::jump(long position) { return "CPU jump to " + std::to_string(position); }
std::string CPU::execute() { return "CPU execute"; }

std::string Memory::load(long position, const std::string& data) {
    return "Memory load '" + data + "' at " + std::to_string(position);
}

std::string HardDrive::read(long lba, int size) {
    return "HardDrive read " + std::to_string(size) + " bytes at " + std::to_string(lba);
}

std::string ComputerFacade::start() {
    std::string s;
    s += cpu_.freeze();
    s += "; ";
    s += memory_.load(0, "bootloader");
    s += "; ";
    s += cpu_.jump(0);
    s += "; ";
    s += hardDrive_.read(0, 512);
    s += "; ";
    s += cpu_.execute();
    return s;
}

} // namespace DesignPatterns


