/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Top K Frequent Elements
 * Reference : https://leetcode.com/problems/top-k-frequent-elements/
 */

#ifndef TOP_K_FREQUENT_ELEMENTS_SOLUTION_H
#define TOP_K_FREQUENT_ELEMENTS_SOLUTION_H

#include <vector>

using namespace std;

namespace TopKFrequentElements {
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k);
};
}

#endif // TOP_K_FREQUENT_ELEMENTS_SOLUTION_H
