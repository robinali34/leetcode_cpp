/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Valid Palindrome II
 * Reference : https://leetcode.com/problems/valid-palindrome-ii/
 */

#ifndef VALID_PALINDROME_II_SOLUTION_H
#define VALID_PALINDROME_II_SOLUTION_H

#include <string>

using namespace std;

namespace ValidPalindromeII {
class Solution {
public:
    bool validPalindrome(string s);
private:
    bool checkPalindrome(string s, int i, int j);
};
}

#endif // VALID_PALINDROME_II_SOLUTION_H
