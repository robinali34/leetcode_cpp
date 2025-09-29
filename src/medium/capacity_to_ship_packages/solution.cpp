/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Capacity To Ship Packages Within D Days
 * Reference : https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
 */

#include "solution.h"
#include <algorithm>
#include <numeric>

using namespace std;

namespace CapacityToShipPackages {

int Solution::shipWithinDays(vector<int>& weights, int days) {
    int left = *max_element(weights.begin(), weights.end());
    int right = accumulate(weights.begin(), weights.end(), 0);
    while(left < right) {
        int mid = left + (right - left) / 2;
        if(canShip(weights, days, mid)) right = mid;
        else left = mid + 1;
    }
    return left;
}

bool Solution::canShip(vector<int>& weights, int days, int capacity) {
    int current = 0, day = 1;
    for (auto& weight : weights) {
        if (current + weight > capacity) {
            day++;
            current = weight;
        } else{
            current += weight;
        }
    }
    return day <= days;
}

}
