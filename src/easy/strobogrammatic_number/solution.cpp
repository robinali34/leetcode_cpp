/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Strobogrammatic Number
 * Reference : https://leetcode.com/problems/strobogrammatic-number/
 */

#include "solution.h"
#include <unordered_map>

using namespace std;

namespace StrobogrammaticNumber {

bool Solution::isStrobogrammatic(string num) {
    unordered_map<char, char> pair = {{'0', '0'}, {'1', '1'}, {'6', '9'}, {'9', '6'}, {'8', '8'}};
    for(int left = 0, right = num.length() - 1; left <= right; left++, right--) {
        char lChar = num[left], rChar = num[right];
        if(!pair[lChar] || !pair[rChar] || pair[lChar] != rChar) {
            return false;
        }
    }
    return true;
}

}
