/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Randomized Set
 * Reference : https://leetcode.com/problems/insert-delete-getrandom-o1/
 */

#ifndef RANDOMIZED_SET_SOLUTION_H
#define RANDOMIZED_SET_SOLUTION_H

#include <vector>
#include <unordered_map>

using namespace std;

namespace RandomizedSet {

class RandomizedSet {
private:
    vector<int> nums;
    unordered_map<int, int> valToIndex;

public:
    RandomizedSet();
    bool insert(int val);
    bool remove(int val);
    int getRandom();
};

}

#endif // RANDOMIZED_SET_SOLUTION_H
