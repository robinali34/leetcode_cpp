/*
 * Copyright 2025 Robina Li. MIT License
 * @file : iterator_pattern.h
 * @desc : Iterator Design Pattern Interfaces
 * @pattern : Behavioral Pattern - Provide a way to access elements sequentially
 */

#ifndef ITERATOR_PATTERN_H
#define ITERATOR_PATTERN_H

#include <memory>
#include <optional>
#include <string>
#include <vector>

namespace DesignPatterns {

template <typename T>
class Iterator {
public:
    virtual ~Iterator() = default;
    virtual bool hasNext() const = 0;
    virtual T next() = 0;
};

template <typename T>
class Aggregate {
public:
    virtual ~Aggregate() = default;
    virtual std::unique_ptr<Iterator<T>> createIterator() const = 0;
};

class NameRepository : public Aggregate<std::string> {
private:
    std::vector<std::string> names_;

public:
    NameRepository();
    explicit NameRepository(std::vector<std::string> names);
    std::unique_ptr<Iterator<std::string>> createIterator() const override;
};

class NameIterator : public Iterator<std::string> {
private:
    const std::vector<std::string>& names_;
    size_t index_ = 0;

public:
    explicit NameIterator(const std::vector<std::string>& names) : names_(names) {}
    bool hasNext() const override;
    std::string next() override;
};

} // namespace DesignPatterns

#endif // ITERATOR_PATTERN_H


