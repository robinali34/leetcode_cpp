/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Word Pattern
 * Reference : https://leetcode.com/problems/word-pattern/
 */

#include "solution.h"
#include <unordered_map>
#include <unordered_set>
#include <sstream>

using namespace std;

namespace WordPattern {

bool Solution::wordPattern(string pattern, string s) {
    unordered_map<char, string> charToWord;
    unordered_set<string> usedWords;
    
    stringstream ss(s);
    string word;
    int i = 0;
    
    while (ss >> word) {
        if (i >= pattern.length()) {
            return false;
        }
        
        char c = pattern[i];
        
        if (charToWord.find(c) != charToWord.end()) {
            if (charToWord[c] != word) {
                return false;
            }
        } else {
            if (usedWords.find(word) != usedWords.end()) {
                return false;
            }
            charToWord[c] = word;
            usedWords.insert(word);
        }
        
        i++;
    }
    
    return i == pattern.length();
}

}
