/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Zigzag Conversion
 * Reference : https://leetcode.com/problems/zigzag-conversion/
 */

#include "solution.h"

using namespace std;

namespace ZigzagConversion {

string Solution::convert(string s, int numRows) {
    if(numRows == 1) return s;
    string rtn = "";
    const int n = s.length();
    int charsInSection = 2 * (numRows - 1);
    for (int curRow = 0; curRow < numRows; curRow++) {
        int idx = curRow;
        while (idx < n) {
            rtn += s[idx];
            if (curRow != 0 && curRow != numRows - 1) {
                int charsInBetween = charsInSection - 2 * curRow;
                int secondIdx = idx + charsInBetween;
                if (secondIdx < n) {
                    rtn += s[secondIdx];
                }
            }
            idx += charsInSection;
        }
    }
    return rtn;
}

}
