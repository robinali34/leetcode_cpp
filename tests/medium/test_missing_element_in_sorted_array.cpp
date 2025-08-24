/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_missing_element_in_sorted_array.cpp
 * @desc : Test file for Missing Element in Sorted Array
 */

#include <iostream>
#include <vector>
#include <cassert>
#include "../../src/medium/missing_element_in_sorted_array/solution.h"
#include "../../src/medium/missing_element_in_sorted_array/solution.cpp"

using namespace std;

void testMissingElement() {
    MissingElementInSortedArray::Solution solution;
    
    // Test case 1: [4,7,9,10], k = 1 -> 5
    vector<int> nums1 = {4, 7, 9, 10};
    int result1 = solution.missingElement(nums1, 1);
    assert(result1 == 5);
    cout << "Test 1 PASSED: [4,7,9,10], k=1 -> 5" << endl;
    
    // Test case 2: [4,7,9,10], k = 3 -> 8
    vector<int> nums2 = {4, 7, 9, 10};
    int result2 = solution.missingElement(nums2, 3);
    assert(result2 == 8);
    cout << "Test 2 PASSED: [4,7,9,10], k=3 -> 8" << endl;
    
    // Test case 3: [1,2,4], k = 3 -> 6
    vector<int> nums3 = {1, 2, 4};
    int result3 = solution.missingElement(nums3, 3);
    assert(result3 == 6);
    cout << "Test 3 PASSED: [1,2,4], k=3 -> 6" << endl;
}

int main() {
    try {
        testMissingElement();
        cout << "\n=== All tests PASSED ===" << endl;
        return 0;
    } catch (const exception& e) {
        cerr << "Test failed: " << e.what() << endl;
        return 1;
    }
}
