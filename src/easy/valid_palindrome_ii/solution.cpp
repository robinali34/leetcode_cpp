/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Valid Palindrome II
 * Reference : https://leetcode.com/problems/valid-palindrome-ii/
 */

#include "solution.h"

using namespace std;

namespace ValidPalindromeII {

bool Solution::validPalindrome(string s) {
    int i = 0, j = s.size() - 1;
    while(i < j) {
        if(s[i] != s[j]) {
            return (checkPalindrome(s, i, j - 1) || checkPalindrome(s, i + 1, j));
        }
        i++;
        j--;
    }
    return true;
}

bool Solution::checkPalindrome(string s, int i, int j) {
    while(i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

}
