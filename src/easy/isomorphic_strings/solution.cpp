/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Isomorphic Strings
 * Reference : https://leetcode.com/problems/isomorphic-strings/
 */

#include "solution.h"
#include <unordered_map>
#include <unordered_set>

using namespace std;

namespace IsomorphicStrings {

bool Solution::isIsomorphic(string s, string t) {
    if (s.length() != t.length()) return false;
    
    unordered_map<char, char> sToT;
    unordered_set<char> usedInT;
    
    for (int i = 0; i < s.length(); i++) {
        char sChar = s[i];
        char tChar = t[i];
        
        if (sToT.find(sChar) != sToT.end()) {
            if (sToT[sChar] != tChar) {
                return false;
            }
        } else {
            if (usedInT.find(tChar) != usedInT.end()) {
                return false;
            }
            sToT[sChar] = tChar;
            usedInT.insert(tChar);
        }
    }
    
    return true;
}

}
