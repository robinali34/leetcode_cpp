/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Longest Palindromic Substring
 * Reference : https://leetcode.com/problems/longest-palindromic-substring/
 */

#include "solution.h"

using namespace std;

namespace LongestPalindromicSubstring {

string Solution::longestPalindrome(string s) {
    string rtn = "";
    for(int i = 0; i < s.length(); i++) {
        string odd = expandAroundCenter(s, i, i);
        if(odd.length() > rtn.length()) rtn = odd;
        string even = expandAroundCenter(s, i, i + 1);
        if(even.length() > rtn.length()) rtn = even;
    }
    return rtn;
}

string Solution::expandAroundCenter(string s, int left, int right) {
    while(left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}

}
