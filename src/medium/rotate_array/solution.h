/*
 * Copyright 2021 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Rotate Array solution
 * Reference : https://leetcode.com/problems/rotate-array/
 */

#ifndef ROTATE_ARRAY_SOLUTION_H
#define ROTATE_ARRAY_SOLUTION_H

#include <vector>

namespace RotateArray {
    class Solution {
    public:
        void rotate(std::vector<int>& nums, int k);
        void rotate1(std::vector<int>& nums, int k);

    private:
        void reverse(std::vector<int>& nums, int start, int end);
    };
}

#endif // ROTATE_ARRAY_SOLUTION_H
