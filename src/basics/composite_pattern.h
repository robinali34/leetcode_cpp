/*
 * Copyright 2025 Robina Li. MIT License
 * @file : composite_pattern.h
 * @desc : Composite Design Pattern Interfaces
 * @pattern : Structural Pattern - Compose objects into tree structures
 */

#ifndef COMPOSITE_PATTERN_H
#define COMPOSITE_PATTERN_H

#include <memory>
#include <string>
#include <vector>

namespace DesignPatterns {

class FileSystemNode {
public:
    virtual ~FileSystemNode() = default;
    virtual std::string name() const = 0;
    virtual size_t size() const = 0;
};

class FileLeaf : public FileSystemNode {
private:
    std::string name_;
    size_t size_;

public:
    FileLeaf(std::string name, size_t size) : name_(std::move(name)), size_(size) {}
    std::string name() const override { return name_; }
    size_t size() const override { return size_; }
};

class DirectoryComposite : public FileSystemNode {
private:
    std::string name_;
    std::vector<std::shared_ptr<FileSystemNode>> children_;

public:
    explicit DirectoryComposite(std::string name) : name_(std::move(name)) {}
    void add(std::shared_ptr<FileSystemNode> node);
    std::string name() const override { return name_; }
    size_t size() const override;
};

} // namespace DesignPatterns

#endif // COMPOSITE_PATTERN_H


