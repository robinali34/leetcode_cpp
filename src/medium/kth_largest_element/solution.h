/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Kth Largest Element in an Array
 * Reference : https://leetcode.com/problems/kth-largest-element-in-an-array/
 */

#ifndef KTH_LARGEST_ELEMENT_SOLUTION_H
#define KTH_LARGEST_ELEMENT_SOLUTION_H

#include <vector>

using namespace std;

namespace KthLargestElement {
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k);
};
}

#endif // KTH_LARGEST_ELEMENT_SOLUTION_H
