/*
 * Copyright 2025 Robina Li. MIT License
 * @file : singleton_pattern.cpp
 * @desc : Singleton Design Pattern Implementation
 */

#include "singleton_pattern.h"
#include <iostream>

namespace DesignPatterns {

// Static member definitions
std::unique_ptr<Singleton> Singleton::instance_ = nullptr;
std::mutex Singleton::mutex_;

std::unique_ptr<ThreadSafeSingleton> ThreadSafeSingleton::instance_ = nullptr;
std::once_flag ThreadSafeSingleton::initialized_;

// Singleton implementation
Singleton& Singleton::getInstance() {
    std::lock_guard<std::mutex> lock(mutex_);
    if (instance_ == nullptr) {
        instance_ = std::unique_ptr<Singleton>(new Singleton());
    }
    return *instance_;
}

void Singleton::doSomething() {
    std::cout << "Singleton instance is doing something!" << std::endl;
}

// Thread-safe Singleton implementation
ThreadSafeSingleton& ThreadSafeSingleton::getInstance() {
    std::call_once(initialized_, []() {
        instance_ = std::unique_ptr<ThreadSafeSingleton>(new ThreadSafeSingleton());
    });
    return *instance_;
}

void ThreadSafeSingleton::doSomething() {
    std::cout << "Thread-safe Singleton instance is doing something!" << std::endl;
}

} // namespace DesignPatterns

