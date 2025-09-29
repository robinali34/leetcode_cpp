/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Search in Rotated Sorted Array
 * Reference : https://leetcode.com/problems/search-in-rotated-sorted-array/
 */

#ifndef SEARCH_ROTATED_SORTED_ARRAY_SOLUTION_H
#define SEARCH_ROTATED_SORTED_ARRAY_SOLUTION_H

#include <vector>

using namespace std;

namespace SearchRotatedSortedArray {
class Solution {
public:
    int search(vector<int>& nums, int target);
};
}

#endif // SEARCH_ROTATED_SORTED_ARRAY_SOLUTION_H
