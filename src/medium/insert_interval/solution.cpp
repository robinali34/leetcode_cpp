/*
 * Copyright 2021 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Insert Interval
 * Reference : https://leetcode.com/problems/insert-interval/
 */

#include "solution.h"
#include <algorithm>

namespace InsertInterval {

std::vector<std::vector<int>> Solution::insert(std::vector<std::vector<int>>& intervals, std::vector<int>& newInterval) {
    std::vector<std::vector<int>> result;
    
    // Add all intervals that come before newInterval
    int i = 0;
    while (i < intervals.size() && intervals[i][1] < newInterval[0]) {
        result.push_back(intervals[i]);
        i++;
    }
    
    // Merge overlapping intervals
    while (i < intervals.size() && intervals[i][0] <= newInterval[1]) {
        newInterval[0] = std::min(newInterval[0], intervals[i][0]);
        newInterval[1] = std::max(newInterval[1], intervals[i][1]);
        i++;
    }
    result.push_back(newInterval);
    
    // Add remaining intervals
    while (i < intervals.size()) {
        result.push_back(intervals[i]);
        i++;
    }
    
    return result;
}

}
