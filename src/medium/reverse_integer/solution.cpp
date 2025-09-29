/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Reverse Integer
 * Reference : https://leetcode.com/problems/reverse-integer/
 */

#include "solution.h"
#include <climits>

using namespace std;

namespace ReverseInteger {

int Solution::reverse(int x) {
    int rev = 0;
    while(x != 0) {
        int pop = x % 10;
        x /= 10;
        if(rev > INT_MAX/10 || (rev == INT_MAX/10 && pop > 7)) return 0;
        if(rev < INT_MIN/10 || (rev == INT_MIN/10 && pop < -8)) return 0;
        rev = rev * 10 + pop;
    }
    return rev;
}

}
