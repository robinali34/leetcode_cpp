/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Shortest Distance from All Buildings
 * Reference : https://leetcode.com/problems/shortest-distance-from-all-buildings/
 */

#include "solution.h"
#include <climits>
#include <queue>

using namespace std;

namespace ShortestDistanceBuildings {

int Solution::shortestDistance(vector<vector<int>>& grid) {
    int dirs[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    const int rows = grid.size(), cols = grid[0].size();
    vector<vector<int>> total(rows, vector<int> (cols, 0));
    int emptyLandValue = 0, minDist = INT_MAX;
    for(int row = 0; row < rows; row++) {
        for(int col = 0; col < cols; col++) {
            if(grid[row][col] == 1) {
                minDist = INT_MAX;
                queue<pair<int, int>> q;
                q.emplace(row, col);
                int steps = 0;
                while(!q.empty()) {
                    steps++;
                    for(int level = q.size(); level > 0; level--) {
                        auto cur = q.front();
                        q.pop();
                        for (auto& [dr,dc]: dirs) {
                            int nextRow = cur.first + dr;
                            int nextCol = cur.second + dc;
                            if(nextRow >= 0 && nextRow < rows && nextCol >= 0 && nextCol < cols
                                && grid[nextRow][nextCol] == emptyLandValue) {
                                grid[nextRow][nextCol]--;
                                total[nextRow][nextCol] += steps;
                                q.emplace(nextRow, nextCol);
                                minDist = min(minDist, total[nextRow][nextCol]);
                            }
                        }
                    }
                }
                emptyLandValue--;
            }
        }
    }
    return minDist == INT_MAX? -1: minDist;
}

}
