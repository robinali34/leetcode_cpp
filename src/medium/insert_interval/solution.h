/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Insert Interval
 * Reference : https://leetcode.com/problems/insert-interval/
 */

#ifndef INSERT_INTERVAL_SOLUTION_H
#define INSERT_INTERVAL_SOLUTION_H

#include <vector>

using namespace std;

namespace InsertInterval {
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval);
    vector<vector<int>> insert2(vector<vector<int>>& intervals, vector<int>& newInterval);
};
}

#endif // INSERT_INTERVAL_SOLUTION_H
