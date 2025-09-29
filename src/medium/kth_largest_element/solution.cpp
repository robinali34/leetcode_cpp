/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Kth Largest Element in an Array
 * Reference : https://leetcode.com/problems/kth-largest-element-in-an-array/
 */

#include "solution.h"
#include <queue>

using namespace std;

namespace KthLargestElement {

int Solution::findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for (auto& x : nums) {
        pq.push(x);
        if((int)pq.size() > k) pq.pop();
    }
    return pq.top();
}

}
