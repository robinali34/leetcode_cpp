/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Unique Paths
 * Reference : https://leetcode.com/problems/unique-paths/
 */

#include "solution.h"
#include <vector>

using namespace std;

namespace UniquePaths {

int Solution::uniquePaths(int m, int n) {
    vector<vector<int>> dp(m, vector<int>(n, 1));
    for (int row = 1; row < m; row++) {
        for (int col = 1; col < n; col++) {
            dp[row][col] = dp[row][col - 1] + dp[row - 1][col];
        }
    }
    return dp[m- 1][n -1];
}

}
