/*
 * Copyright 2021 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Merge Intervals
 * Reference : https://leetcode.com/problems/merge-intervals/
 */

#ifndef MERGE_INTERVALS_SOLUTION_H
#define MERGE_INTERVALS_SOLUTION_H

#include <vector>

namespace MergeIntervals {
class Solution {
public:
    std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals);
};
}

#endif // MERGE_INTERVALS_SOLUTION_H
