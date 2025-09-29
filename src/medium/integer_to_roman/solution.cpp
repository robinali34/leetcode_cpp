/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Integer to Roman
 * Reference : https://leetcode.com/problems/integer-to-roman/
 */

#include "solution.h"
#include <vector>

using namespace std;

namespace IntegerToRoman {

string Solution::intToRoman(int num) {
    vector<int> values = {1000, 900, 500, 400, 100, 90, 50,
                          40, 10, 9, 5, 4, 1};
    vector<string> symbols = {"M", "CM", "D", "CD", "C", "XC", "L",
                              "XL", "X", "IX", "V", "IV", "I"};
    string roman;
    for (int i = 0; i < values.size() && num > 0; i++) {
        while(values[i] <= num) {
            num -= values[i];
            roman += symbols[i];
        }
    }
    return roman;
}

}
