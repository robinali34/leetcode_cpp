/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Valid Anagram
 * Reference : https://leetcode.com/problems/valid-anagram/
 */

#include "solution.h"
#include <vector>
#include <algorithm>

using namespace std;

namespace ValidAnagram {

bool Solution::isAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

bool Solution::isAnagram2(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }
    vector<int> table(26, 0);
    for (auto& ch: s) {
        table[ch - 'a']++;
    }
    for (auto& ch: t) {
        table[ch - 'a']--;
        if (table[ch - 'a'] < 0) {
            return false;
        }
    }
    return true;
}


}
