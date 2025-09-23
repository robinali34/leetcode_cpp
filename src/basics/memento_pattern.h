/*
 * Copyright 2025 Robina Li. MIT License
 * @file : memento_pattern.h
 * @desc : Memento Design Pattern Interfaces
 * @pattern : Behavioral Pattern - Capture and externalize an object's internal state
 */

#ifndef MEMENTO_PATTERN_H
#define MEMENTO_PATTERN_H

#include <string>
#include <vector>

namespace DesignPatterns {

class TextEditorMemento {
private:
    std::string state_;

public:
    explicit TextEditorMemento(std::string state) : state_(std::move(state)) {}
    const std::string& getState() const { return state_; }
};

class Editor {
private:
    std::string text_;

public:
    void type(const std::string& words);
    std::string content() const { return text_; }
    TextEditorMemento save() const;
    void restore(const TextEditorMemento& memento);
};

class EditorHistory {
private:
    std::vector<TextEditorMemento> states_;

public:
    void push(const TextEditorMemento& memento);
    bool canUndo() const;
    TextEditorMemento pop();
};

} // namespace DesignPatterns

#endif // MEMENTO_PATTERN_H


