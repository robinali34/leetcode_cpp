/*
 * Copyright 2021 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Valid Anagram
 * Reference : https://leetcode.com/problems/valid-anagram/
 */

#include "solution.h"
#include <vector>

namespace ValidAnagram {

bool Solution::isAnagram(std::string s, std::string t) {
    if (s.length() != t.length()) return false;
    
    std::vector<int> charCount(26, 0);
    
    // Count characters in string s
    for (char c : s) {
        charCount[c - 'a']++;
    }
    
    // Decrement characters in string t
    for (char c : t) {
        charCount[c - 'a']--;
        if (charCount[c - 'a'] < 0) return false;
    }
    
    return true;
}

}
