/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Shortest Path in Binary Matrix
 * Reference : https://leetcode.com/problems/shortest-path-in-binary-matrix/
 */

#ifndef SHORTEST_PATH_BINARY_MATRIX_SOLUTION_H
#define SHORTEST_PATH_BINARY_MATRIX_SOLUTION_H

#include <vector>

using namespace std;

namespace ShortestPathBinaryMatrix {
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid);
private:
    vector<pair<int, int>> getNeighbors(int row, int col, const vector<vector<int>>& grid);
    vector<pair<int, int>> dirs = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
};
}

#endif // SHORTEST_PATH_BINARY_MATRIX_SOLUTION_H
