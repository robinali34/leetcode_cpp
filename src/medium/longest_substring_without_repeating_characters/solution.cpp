/*
 * Copyright 2021 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Longest Substring Without Repeating Characters
 * Reference : https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

#include "solution.h"
#include <vector>
#include <algorithm>

namespace LongestSubstringWithoutRepeatingCharacters {

int Solution::lengthOfLongestSubstring(std::string s) {
    std::vector<int> charIndex(128, -1);
    int maxLength = 0;
    int start = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (charIndex[s[i]] >= start) {
            start = charIndex[s[i]] + 1;
        }
        charIndex[s[i]] = i;
        maxLength = std::max(maxLength, i - start + 1);
    }
    
    return maxLength;
}

}
