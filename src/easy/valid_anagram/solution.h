/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Valid Anagram
 * Reference : https://leetcode.com/problems/valid-anagram/
 */

#ifndef VALID_ANAGRAM_SOLUTION_H
#define VALID_ANAGRAM_SOLUTION_H

#include <string>

using namespace std;

namespace ValidAnagram {
class Solution {
public:
    bool isAnagram(string s, string t);
    bool isAnagram2(string s, string t);
};
}

#endif // VALID_ANAGRAM_SOLUTION_H
