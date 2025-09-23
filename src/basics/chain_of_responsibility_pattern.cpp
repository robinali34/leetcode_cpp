/*
 * Copyright 2025 Robina Li. MIT License
 * @file : chain_of_responsibility_pattern.cpp
 * @desc : Chain of Responsibility Design Pattern Implementation
 */

#include "chain_of_responsibility_pattern.h"

namespace DesignPatterns {

std::string Logger::log(LogLevel level, const std::string& message) {
    std::string out;
    if (canHandle(level)) {
        out = write(message);
    }
    if (next_) {
        std::string nextOut = next_->log(level, message);
        if (!out.empty() && !nextOut.empty()) out += "; ";
        out += nextOut;
    }
    return out.empty() ? std::string("No handler") : out;
}

std::string InfoLogger::write(const std::string& message) {
    return "INFO: " + message;
}

std::string DebugLogger::write(const std::string& message) {
    return "DEBUG: " + message;
}

std::string ErrorLogger::write(const std::string& message) {
    return "ERROR: " + message;
}

} // namespace DesignPatterns


