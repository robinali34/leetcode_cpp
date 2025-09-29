#include <cassert>
#include <vector>
#include <iostream>
#include "../../src/hard/first_missing_positive/solution.h"
#include "../../src/hard/first_missing_positive/solution.cpp"
using namespace std;

using namespace std;

void test_first_missing_positive() {
    FirstMissingPositive::Solution solution;
    
    // Test case 1: Normal case
    vector<int> nums1 = {1, 2, 0};
    assert(solution.firstMissingPositive(nums1) == 3);
    
    // Test case 2: Another case
    vector<int> nums2 = {3, 4, -1, 1};
    assert(solution.firstMissingPositive(nums2) == 2);
    
    // Test case 3: Another case
    vector<int> nums3 = {7, 8, 9, 11, 12};
    assert(solution.firstMissingPositive(nums3) == 1);
    
    // Test case 4: Single element
    vector<int> nums4 = {1};
    assert(solution.firstMissingPositive(nums4) == 2);
    
    // Test case 5: Single element not 1
    vector<int> nums5 = {2};
    assert(solution.firstMissingPositive(nums5) == 1);
    
    // Test case 6: Empty array
    vector<int> nums6 = {};
    assert(solution.firstMissingPositive(nums6) == 1);
    
    // Test case 7: All negative numbers
    vector<int> nums7 = {-1, -2, -3};
    assert(solution.firstMissingPositive(nums7) == 1);
    
    // Test case 8: Contains duplicates
    vector<int> nums8 = {1, 1};
    assert(solution.firstMissingPositive(nums8) == 2);
    
    // Test case 9: Large numbers
    vector<int> nums9 = {1, 2, 3, 4, 5};
    assert(solution.firstMissingPositive(nums9) == 6);
    
    cout << "All first_missing_positive tests passed!" << endl;
}

int main() {
    test_first_missing_positive();
    return 0;
}
