/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Top K Frequent Elements
 * Reference : https://leetcode.com/problems/top-k-frequent-elements/
 */

#include "solution.h"
#include <unordered_map>
#include <queue>

using namespace std;

namespace TopKFrequentElements {

vector<int> Solution::topKFrequent(vector<int>& nums, int k) {
    // Count frequency of each element
    unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }
    
    // Use min heap to keep top k frequent elements
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    for (auto& [num, count] : freq) {
        pq.push({count, num});
        if (pq.size() > k) {
            pq.pop();
        }
    }
    
    // Extract result
    vector<int> result;
    while (!pq.empty()) {
        result.push_back(pq.top().second);
        pq.pop();
    }
    
    return result;
}

}
