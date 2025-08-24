/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Non-overlapping Intervals
 * Reference : https://leetcode.com/problems/non-overlapping-intervals/
 */

#ifndef NON_OVERLAPPING_INTERVALS_SOLUTION_H
#define NON_OVERLAPPING_INTERVALS_SOLUTION_H

#include <vector>

using namespace std;

namespace NonOverlappingIntervals {
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals);
};
}

#endif // NON_OVERLAPPING_INTERVALS_SOLUTION_H
