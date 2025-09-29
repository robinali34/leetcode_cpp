/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Contains Duplicate
 * Reference : https://leetcode.com/problems/contains-duplicate/
 */

#include "solution.h"
#include <unordered_set>
#include <unordered_map>

using namespace std;

namespace ContainsDuplicate {

// First implementation using unordered_set
bool Solution::containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    
    for (int num : nums) {
        if (seen.find(num) != seen.end()) {
            return true;
        }
        seen.insert(num);
    }
    
    return false;
}

// Second implementation using unordered_map with count
bool Solution::containsDuplicateHashMap(vector<int>& nums) {
    unordered_map<int, int> seen;
    
    for (int num : nums) {
        if (++seen[num] > 1) return true;
    }
    return false;
}

}
