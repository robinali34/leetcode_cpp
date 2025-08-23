/*
 * Copyright 2021 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Insert Interval
 * Reference : https://leetcode.com/problems/insert-interval/
 */

#ifndef INSERT_INTERVAL_SOLUTION_H
#define INSERT_INTERVAL_SOLUTION_H

#include <vector>

namespace InsertInterval {
class Solution {
public:
    std::vector<std::vector<int>> insert(std::vector<std::vector<int>>& intervals, std::vector<int>& newInterval);
};
}

#endif // INSERT_INTERVAL_SOLUTION_H
