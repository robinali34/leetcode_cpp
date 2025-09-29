/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Rotate Image
 * Reference : https://leetcode.com/problems/rotate-image/
 */

#include "solution.h"
#include <algorithm>

using namespace std;

namespace RotateImage {

void Solution::rotate(vector<vector<int>>& matrix) {
    transpose(matrix);
    reflect(matrix);
}

void Solution::transpose(vector<vector<int>>& matrix) {
    const int n = matrix.size();
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++) {
            swap(matrix[j][i], matrix[i][j]);
        }
    }
}

void Solution::reflect(vector<vector<int>>& matrix) {
    for (auto& row : matrix) {
        reverse(row.begin(), row.end());
    }
}

}
