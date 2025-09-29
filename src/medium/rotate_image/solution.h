/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Rotate Image
 * Reference : https://leetcode.com/problems/rotate-image/
 */

#ifndef ROTATE_IMAGE_SOLUTION_H
#define ROTATE_IMAGE_SOLUTION_H

#include <vector>

using namespace std;

namespace RotateImage {
class Solution {
public:
    void rotate(vector<vector<int>>& matrix);
private:
    void transpose(vector<vector<int>>& matrix);
    void reflect(vector<vector<int>>& matrix);
};
}

#endif // ROTATE_IMAGE_SOLUTION_H
