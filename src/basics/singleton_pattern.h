/*
 * Copyright 2025 Robina Li. MIT License
 * @file : singleton_pattern.h
 * @desc : Singleton Design Pattern Implementation
 * @pattern : Creational Pattern - Ensures a class has only one instance
 */

#ifndef SINGLETON_PATTERN_H
#define SINGLETON_PATTERN_H

#include <memory>
#include <mutex>

namespace DesignPatterns {

class Singleton {
private:
    static std::unique_ptr<Singleton> instance_;
    static std::mutex mutex_;
    
    // Private constructor to prevent direct instantiation
    Singleton() = default;
    
public:
    // Delete copy constructor and assignment operator
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    
    // Get the single instance
    static Singleton& getInstance();
    
    // Example method
    void doSomething();
    
    // Destructor
    ~Singleton() = default;
};

// Thread-safe lazy initialization
class ThreadSafeSingleton {
private:
    static std::unique_ptr<ThreadSafeSingleton> instance_;
    static std::once_flag initialized_;
    
    ThreadSafeSingleton() = default;
    
public:
    ThreadSafeSingleton(const ThreadSafeSingleton&) = delete;
    ThreadSafeSingleton& operator=(const ThreadSafeSingleton&) = delete;
    
    static ThreadSafeSingleton& getInstance();
    
    void doSomething();
    
    ~ThreadSafeSingleton() = default;
};

} // namespace DesignPatterns

#endif // SINGLETON_PATTERN_H

