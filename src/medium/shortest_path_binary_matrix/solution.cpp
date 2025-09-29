/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Shortest Path in Binary Matrix
 * Reference : https://leetcode.com/problems/shortest-path-in-binary-matrix/
 */

#include "solution.h"
#include <queue>

using namespace std;

namespace ShortestPathBinaryMatrix {

int Solution::shortestPathBinaryMatrix(vector<vector<int>>& grid) {
    const int n = grid.size();
    if(grid[0][0] != 0 || grid[n - 1][n - 1] != 0) return -1;

    queue<tuple<int, int, int>> q;
    q.emplace(0, 0, 1);
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    visited[0][0] = true;

    while (!q.empty()) {
        auto [row, col, dist] = q.front();
        q.pop();
        if(row == n - 1 && col == n -1) return dist;

        for(const auto& [newRow, newCol] : getNeighbors(row, col, grid)) {
            if(visited[newRow][newCol]) continue;
            visited[newRow][newCol] = true;
            q.emplace(newRow, newCol, dist + 1);
        }
    }
    return -1;
}

vector<pair<int, int>> Solution::getNeighbors(int row, int col, const vector<vector<int>>& grid) {
    vector<pair<int, int>> neighbours;
    for (int i = 0; i < dirs.size(); i++) {
        int newRow = row + dirs[i].first;
        int newCol = col + dirs[i].second;
        if (newRow < 0 || newRow >= grid.size() || newCol < 0 || newCol >= grid[0].size()
            || grid[newRow][newCol] != 0)
            continue;
        neighbours.emplace_back(newRow, newCol);
    }
    return neighbours;
}

}
