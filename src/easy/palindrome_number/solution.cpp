/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Palindrome Number
 * Reference : https://leetcode.com/problems/palindrome-number/
 */

#include "solution.h"

using namespace std;

namespace PalindromeNumber {

bool Solution::isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;
    int reverted = 0;
    while(x > reverted) {
        reverted = reverted * 10 + x % 10;
        x /= 10;
    }
    return x == reverted || x == reverted / 10;
}

}
