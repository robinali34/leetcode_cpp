/*
 * Copyright 2025 Robina Li. MIT License
 * @file : memento_pattern.cpp
 * @desc : Memento Design Pattern Implementation
 */

#include "memento_pattern.h"

namespace DesignPatterns {

void Editor::type(const std::string& words) {
    if (!text_.empty()) text_ += " ";
    text_ += words;
}

TextEditorMemento Editor::save() const {
    return TextEditorMemento(text_);
}

void Editor::restore(const TextEditorMemento& memento) {
    text_ = memento.getState();
}

void EditorHistory::push(const TextEditorMemento& memento) {
    states_.push_back(memento);
}

bool EditorHistory::canUndo() const {
    return !states_.empty();
}

TextEditorMemento EditorHistory::pop() {
    auto m = states_.back();
    states_.pop_back();
    return m;
}

} // namespace DesignPatterns


