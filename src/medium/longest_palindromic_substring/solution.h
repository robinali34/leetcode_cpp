/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Longest Palindromic Substring
 * Reference : https://leetcode.com/problems/longest-palindromic-substring/
 */

#ifndef LONGEST_PALINDROMIC_SUBSTRING_SOLUTION_H
#define LONGEST_PALINDROMIC_SUBSTRING_SOLUTION_H

#include <string>

using namespace std;

namespace LongestPalindromicSubstring {
class Solution {
public:
    string longestPalindrome(string s);
private:
    string expandAroundCenter(string s, int left, int right);
};
}

#endif // LONGEST_PALINDROMIC_SUBSTRING_SOLUTION_H
