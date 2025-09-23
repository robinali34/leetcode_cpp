/*
 * Copyright 2025 Robina Li. MIT License
 * @file : facade_pattern.h
 * @desc : Facade Design Pattern Interfaces
 * @pattern : Structural Pattern - Provide a simplified interface to a subsystem
 */

#ifndef FACADE_PATTERN_H
#define FACADE_PATTERN_H

#include <string>

namespace DesignPatterns {

class CPU {
public:
    std::string freeze();
    std::string jump(long position);
    std::string execute();
};

class Memory {
public:
    std::string load(long position, const std::string& data);
};

class HardDrive {
public:
    std::string read(long lba, int size);
};

class ComputerFacade {
private:
    CPU cpu_;
    Memory memory_;
    HardDrive hardDrive_;

public:
    std::string start();
};

} // namespace DesignPatterns

#endif // FACADE_PATTERN_H


