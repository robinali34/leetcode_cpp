/*
 * Copyright 2021 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Non-overlapping Intervals
 * Reference : https://leetcode.com/problems/non-overlapping-intervals/
 */

#include "solution.h"
#include <algorithm>

namespace NonOverlappingIntervals {

int Solution::eraseOverlapIntervals(std::vector<std::vector<int>>& intervals) {
    if (intervals.empty()) return 0;
    
    // Sort intervals by end time
    std::sort(intervals.begin(), intervals.end(), 
              [](const std::vector<int>& a, const std::vector<int>& b) {
                  return a[1] < b[1];
              });
    
    int count = 0;
    int end = intervals[0][1];
    
    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i][0] < end) {
            // Overlapping interval, remove it
            count++;
        } else {
            // Non-overlapping interval, update end
            end = intervals[i][1];
        }
    }
    
    return count;
}

}
