/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Merge Sorted Array
 * Reference : https://leetcode.com/problems/merge-sorted-array/
 */

#ifndef MERGE_SORTED_ARRAY_SOLUTION_H
#define MERGE_SORTED_ARRAY_SOLUTION_H

#include <vector>

using namespace std;

namespace MergeSortedArray {
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);
};
}

#endif // MERGE_SORTED_ARRAY_SOLUTION_H
