/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Pascal's Triangle
 * Reference : https://leetcode.com/problems/pascals-triangle/
 */

#include "solution.h"

using namespace std;

namespace PascalTriangle {

vector<vector<int>> Solution::generate(int numRows) {
    vector<vector<int>> result;
    for(int i = 0; i < numRows; i++) {
        vector<int> row(i + 1, 1);
        for (int j = 1; j < i; j++) {
            row[j] = result[i - 1][j - 1] + result[i - 1][j];
        }
        result.push_back(row);
    }
    return result;
}

}
