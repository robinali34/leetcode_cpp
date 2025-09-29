/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_shortest_distance_buildings.cpp
 * @desc : Test file for Shortest Distance from All Buildings
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/hard/shortest_distance_buildings/solution.h"
#include "../../src/hard/shortest_distance_buildings/solution.cpp"

void testShortestDistanceBuildings() {
    ShortestDistanceBuildings::Solution solution;
    
    // Test case 1: grid = [[1,0,2,0,1],[0,0,0,0,0],[0,0,1,0,0]] -> 7
    vector<vector<int>> grid1 = {{1, 0, 2, 0, 1}, {0, 0, 0, 0, 0}, {0, 0, 1, 0, 0}};
    int result1 = solution.shortestDistance(grid1);
    assert(result1 == 7);
    std::cout << "Test 1 PASSED: Grid with buildings -> " << result1 << std::endl;
    
    // Test case 2: grid = [[1,0]] -> 1
    vector<vector<int>> grid2 = {{1, 0}};
    int result2 = solution.shortestDistance(grid2);
    assert(result2 == 1);
    std::cout << "Test 2 PASSED: Simple grid -> " << result2 << std::endl;
    
    // Test case 3: grid = [[1]] -> -1
    vector<vector<int>> grid3 = {{1}};
    int result3 = solution.shortestDistance(grid3);
    assert(result3 == -1);
    std::cout << "Test 3 PASSED: Single building -> " << result3 << std::endl;
}

int main() {
    try {
        testShortestDistanceBuildings();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
