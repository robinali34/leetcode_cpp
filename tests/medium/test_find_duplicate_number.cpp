#include <cassert>
#include <vector>
#include <iostream>
#include "../../src/medium/find_duplicate_number/solution.h"
#include "../../src/medium/find_duplicate_number/solution.cpp"

using namespace std;

void test_find_duplicate_number() {
    FindDuplicateNumber::Solution solution;
    
    // Test case 1: Normal case
    vector<int> nums1 = {1, 3, 4, 2, 2};
    assert(solution.findDuplicate(nums1) == 2);
    
    // Test case 2: Another case
    vector<int> nums2 = {3, 1, 3, 4, 2};
    assert(solution.findDuplicate(nums2) == 3);
    
    // Test case 3: Duplicate at the end
    vector<int> nums3 = {1, 2, 3, 4, 4};
    assert(solution.findDuplicate(nums3) == 4);
    
    // Test case 4: Duplicate at the beginning
    vector<int> nums4 = {1, 1, 2, 3, 4};
    assert(solution.findDuplicate(nums4) == 1);
    
    // Test case 5: Two elements
    vector<int> nums5 = {1, 1};
    assert(solution.findDuplicate(nums5) == 1);
    
    // Test case 6: Three elements
    vector<int> nums6 = {1, 2, 1};
    assert(solution.findDuplicate(nums6) == 1);
    
    cout << "All find_duplicate_number tests passed!" << endl;
}

int main() {
    test_find_duplicate_number();
    return 0;
}
