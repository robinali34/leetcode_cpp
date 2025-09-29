/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Container With Most Water
 * Reference : https://leetcode.com/problems/container-with-most-water/
 */

#include "solution.h"

using namespace std;

namespace ContainerWithMostWater {

int Solution::maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1, area = 0;
    while (left < right) {
        int cur = min(height[left], height[right]) * (right - left);
        area = max(area, cur);
        if (height[left] <= height[right])
            left += 1;
        else
            right -= 1;
    }
    return area;
}

}
