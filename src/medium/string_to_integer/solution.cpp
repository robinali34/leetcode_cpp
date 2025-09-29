/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for String to Integer (atoi)
 * Reference : https://leetcode.com/problems/string-to-integer-atoi/
 */

#include "solution.h"
#include <climits>

using namespace std;

namespace StringToInteger {

int Solution::myAtoi(string s) {
    int sign = 1, rtn = 0, idx = 0, n = s.size();
    while(idx < n && s[idx] == ' ') {
        idx++;
    }
    if(idx < n && s[idx] == '+') {
        sign = 1;
        idx++;
    } else if (idx < n && s[idx] == '-') {
        sign = -1;
        idx++;
    }
    while(idx < n && isdigit(s[idx])) {
        int digit = s[idx] - '0';
        if((rtn > INT_MAX / 10) ||
            (rtn == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
        rtn = 10 *rtn + digit;
        idx++;
    }
    return sign*rtn;
}

}
