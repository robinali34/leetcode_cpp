/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Find Duplicate File in System
 * Reference : https://leetcode.com/problems/find-duplicate-file-in-system/
 */

#ifndef FIND_DUPLICATE_FILE_SOLUTION_H
#define FIND_DUPLICATE_FILE_SOLUTION_H

#include <vector>
#include <string>

using namespace std;

namespace FindDuplicateFile {
class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths);
};
}

#endif // FIND_DUPLICATE_FILE_SOLUTION_H
