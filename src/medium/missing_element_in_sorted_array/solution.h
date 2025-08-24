/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Missing Element in Sorted Array
 * Reference : https://leetcode.com/problems/missing-element-in-sorted-array/
 */

#ifndef MISSING_ELEMENT_IN_SORTED_ARRAY_SOLUTION_H
#define MISSING_ELEMENT_IN_SORTED_ARRAY_SOLUTION_H

#include <vector>

using namespace std;

namespace MissingElementInSortedArray {
class Solution {
public:
    int missingElement(vector<int>& nums, int k);
    int missingElement2(vector<int>& nums, int k);
};
}

#endif // MISSING_ELEMENT_IN_SORTED_ARRAY_SOLUTION_H
