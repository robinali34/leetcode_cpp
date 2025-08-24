/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Insert Interval
 * Reference : https://leetcode.com/problems/insert-interval/
 */

#include "solution.h"
#include <algorithm>

using namespace std;

namespace InsertInterval {

vector<vector<int>> Solution::insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    int n = intervals.size(), i = 0;
    vector<vector<int>> res;

    while (i < n && intervals[i][1] < newInterval[0]) {
        res.push_back(intervals[i]);
        i++;
    }
    while (i < n && newInterval[1] >= intervals[i][0]) {
        newInterval[0] = min(newInterval[0], intervals[i][0]);
        newInterval[1] = max(newInterval[1], intervals[i][1]);
        i++;
    }
    res.push_back(newInterval);
    while(i < n) {
        res.push_back(intervals[i]);
        i++;
    }
    return res;
}

// Alternative approach: Using binary search to find insertion point
vector<vector<int>> Solution::insert2(vector<vector<int>>& intervals, vector<int>& newInterval) {
    if(intervals.empty()) {
        return {newInterval};
    }
    int n = intervals.size(), target = newInterval[0], left = 0, right = n - 1;
    while(left <= right) {
        int mid = (left + right) / 2;
        if(intervals[mid][0] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    intervals.insert(intervals.begin() + left, newInterval);
    vector<vector<int>> res;
    for (const auto& interval : intervals) {
        if (res.empty() || res.back()[1] < interval[0]) {
            res.push_back(interval);
        } else {
            res.back()[1] = max (res.back()[1], interval[1]);
        }
    }
    return res;
}

}
