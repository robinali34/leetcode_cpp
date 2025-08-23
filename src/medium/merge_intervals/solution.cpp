/*
 * Copyright 2021 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Merge Intervals
 * Reference : https://leetcode.com/problems/merge-intervals/
 */

#include "solution.h"
#include <algorithm>

namespace MergeIntervals {

std::vector<std::vector<int>> Solution::merge(std::vector<std::vector<int>>& intervals) {
    if (intervals.empty()) return {};
    
    // Sort intervals by start time
    std::sort(intervals.begin(), intervals.end());
    
    std::vector<std::vector<int>> merged;
    merged.push_back(intervals[0]);
    
    for (int i = 1; i < intervals.size(); i++) {
        if (merged.back()[1] >= intervals[i][0]) {
            // Overlapping intervals, merge them
            merged.back()[1] = std::max(merged.back()[1], intervals[i][1]);
        } else {
            // Non-overlapping interval, add to result
            merged.push_back(intervals[i]);
        }
    }
    
    return merged;
}

}
