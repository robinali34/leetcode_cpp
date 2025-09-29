/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Number of Segments in a String
 * Reference : https://leetcode.com/problems/number-of-segments-in-a-string/
 */

#include "solution.h"

using namespace std;

namespace NumberOfSegmentsInString {

int Solution::countSegments(string s) {
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if ((i == 0 || s[i - 1] == ' ') && s[i] != ' ') {
            cnt++;
        }
    }
    return cnt;
}

}
