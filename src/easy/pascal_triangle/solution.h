/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Pascal's Triangle
 * Reference : https://leetcode.com/problems/pascals-triangle/
 */

#ifndef PASCAL_TRIANGLE_SOLUTION_H
#define PASCAL_TRIANGLE_SOLUTION_H

#include <vector>

using namespace std;

namespace PascalTriangle {
class Solution {
public:
    vector<vector<int>> generate(int numRows);
};
}

#endif // PASCAL_TRIANGLE_SOLUTION_H
