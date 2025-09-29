/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_capacity_to_ship_packages.cpp
 * @desc : Test file for Capacity To Ship Packages Within D Days
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/medium/capacity_to_ship_packages/solution.h"
#include "../../src/medium/capacity_to_ship_packages/solution.cpp"

void testCapacityToShipPackages() {
    CapacityToShipPackages::Solution solution;
    
    // Test case 1: weights = [1,2,3,4,5,6,7,8,9,10], days = 5 -> 15
    vector<int> weights1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days1 = 5;
    int result1 = solution.shipWithinDays(weights1, days1);
    assert(result1 == 15);
    std::cout << "Test 1 PASSED: [1,2,3,4,5,6,7,8,9,10], days=5 -> " << result1 << std::endl;
    
    // Test case 2: weights = [3,2,2,4,1,4], days = 3 -> 6
    vector<int> weights2 = {3, 2, 2, 4, 1, 4};
    int days2 = 3;
    int result2 = solution.shipWithinDays(weights2, days2);
    assert(result2 == 6);
    std::cout << "Test 2 PASSED: [3,2,2,4,1,4], days=3 -> " << result2 << std::endl;
    
    // Test case 3: weights = [1,2,3,1,1], days = 4 -> 3
    vector<int> weights3 = {1, 2, 3, 1, 1};
    int days3 = 4;
    int result3 = solution.shipWithinDays(weights3, days3);
    assert(result3 == 3);
    std::cout << "Test 3 PASSED: [1,2,3,1,1], days=4 -> " << result3 << std::endl;
}

int main() {
    try {
        testCapacityToShipPackages();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
