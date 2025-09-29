/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Custom Sort String
 * Reference : https://leetcode.com/problems/custom-sort-string/
 */

#include "solution.h"
#include <unordered_map>

using namespace std;

namespace CustomSortString {

string Solution::customSortString(string order, string s) {
    unordered_map<char, int> freq;
    for(auto& ch: s) {
        freq[ch]++;
    }
    string rtn = "";
    for(auto& ch: order) {
        while (freq[ch]-- >0) {
            rtn += ch;
        }
    }
    for(auto& [ch, count] : freq) {
        while (count-- > 0) {
            rtn += ch;
        }
    }
    return rtn;
}

}
