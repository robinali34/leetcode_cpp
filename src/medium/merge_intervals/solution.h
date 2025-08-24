/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Merge Intervals
 * Reference : https://leetcode.com/problems/merge-intervals/
 */

#ifndef MERGE_INTERVALS_SOLUTION_H
#define MERGE_INTERVALS_SOLUTION_H

#include <vector>

using namespace std;

namespace MergeIntervals {
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals);
    vector<vector<int>> merge2(vector<vector<int>>& intervals);
    vector<vector<int>> mergeGraph(vector<vector<int>>& intervals);
    vector<vector<int>> mergeConcise(vector<vector<int>>& intervals);
};
}

#endif // MERGE_INTERVALS_SOLUTION_H
