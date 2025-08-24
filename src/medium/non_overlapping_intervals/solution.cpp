/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Non-overlapping Intervals
 * Reference : https://leetcode.com/problems/non-overlapping-intervals/
 */

#include "solution.h"
#include <algorithm>
#include <climits>

using namespace std;

namespace NonOverlappingIntervals {

int Solution::eraseOverlapIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int> & b) {return a[1] < b[1];});
    int ans = 0;
    int k = INT_MIN;

    for (size_t i = 0; i < intervals.size(); i++) {
        int x = intervals[i][0];
        int y = intervals[i][1];
        if(x >= k) {
            k = y;
        } else {
            ans++;
        }
    }

    return ans;
}

}
