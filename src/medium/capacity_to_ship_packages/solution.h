/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Capacity To Ship Packages Within D Days
 * Reference : https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
 */

#ifndef CAPACITY_TO_SHIP_PACKAGES_SOLUTION_H
#define CAPACITY_TO_SHIP_PACKAGES_SOLUTION_H

#include <vector>

using namespace std;

namespace CapacityToShipPackages {
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days);
private:
    bool canShip(vector<int>& weights, int days, int capacity);
};
}

#endif // CAPACITY_TO_SHIP_PACKAGES_SOLUTION_H
