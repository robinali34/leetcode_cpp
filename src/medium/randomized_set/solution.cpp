/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Randomized Set
 * Reference : https://leetcode.com/problems/insert-delete-getrandom-o1/
 */

#include "solution.h"
#include <cstdlib>
#include <ctime>

using namespace std;

namespace RandomizedSet {

RandomizedSet::RandomizedSet() {
    srand(time(nullptr));
}

bool RandomizedSet::insert(int val) {
    if (valToIndex.find(val) != valToIndex.end()) {
        return false;
    }
    
    valToIndex[val] = nums.size();
    nums.push_back(val);
    return true;
}

bool RandomizedSet::remove(int val) {
    if (valToIndex.find(val) == valToIndex.end()) {
        return false;
    }
    
    int index = valToIndex[val];
    int lastVal = nums.back();
    
    // Move last element to the position of element to delete
    nums[index] = lastVal;
    valToIndex[lastVal] = index;
    
    // Remove last element
    nums.pop_back();
    valToIndex.erase(val);
    
    return true;
}

int RandomizedSet::getRandom() {
    return nums[rand() % nums.size()];
}

}
