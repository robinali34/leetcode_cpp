/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Check If a Number Is Majority Element in a Sorted Array
 * Reference : https://leetcode.com/problems/check-if-a-number-is-majority-element-in-a-sorted-array/
 */

#ifndef MAJORITY_ELEMENT_SORTED_ARRAY_SOLUTION_H
#define MAJORITY_ELEMENT_SORTED_ARRAY_SOLUTION_H

#include <vector>

using namespace std;

namespace MajorityElementSortedArray {
class Solution {
public:
    bool isMajorityElement(vector<int>& nums, int target);
    bool isMajorityElementBinarySearch(vector<int>& nums, int target);
};
}

#endif // MAJORITY_ELEMENT_SORTED_ARRAY_SOLUTION_H
