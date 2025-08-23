/*
 * Copyright 2021 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Valid Anagram
 * Reference : https://leetcode.com/problems/valid-anagram/
 */

#ifndef VALID_ANAGRAM_SOLUTION_H
#define VALID_ANAGRAM_SOLUTION_H

#include <string>

namespace ValidAnagram {
class Solution {
public:
    bool isAnagram(std::string s, std::string t);
};
}

#endif // VALID_ANAGRAM_SOLUTION_H
