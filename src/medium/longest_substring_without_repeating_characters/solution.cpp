/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Longest Substring Without Repeating Characters
 * Reference : https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

#include "solution.h"
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <string>

using namespace std;

namespace LongestSubstringWithoutRepeatingCharacters {

int Solution::lengthOfLongestSubstring(string s) {
    vector<int> charIndex(128, -1);
    int maxLength = 0;
    int start = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (charIndex[s[i]] >= start) {
            start = charIndex[s[i]] + 1;
        }
        charIndex[s[i]] = i;
        maxLength = max(maxLength, i - start + 1);
    }
    
    return maxLength;
}


bool checkRepeation(string& s, int start, int end) {
    unordered_set<char> chars;

    for (int i = start; i <= end; i++) {
        char c = s[i];
        if (chars.count(c)) {
            return false;
        }
        chars.insert(c);
    }
    return true;
}

int Solution::lengthOfLongestSubstring3(string s) {
    int n = s.length(), res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (checkRepeation(s, i, j)) {
                res = max(res, j - i + 1);
            }
        }
    }
    return res;
}
}
