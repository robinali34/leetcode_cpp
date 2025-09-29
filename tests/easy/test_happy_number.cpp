#include <cassert>
#include <iostream>
#include "../../src/easy/happy_number/solution.h"
#include "../../src/easy/happy_number/solution.cpp"

using namespace std;

void test_happy_number() {
    Solution solution;
    
    // Test case 1: Happy number (19 -> 1^2 + 9^2 = 82 -> 8^2 + 2^2 = 68 -> 6^2 + 8^2 = 100 -> 1^2 + 0^2 + 0^2 = 1)
    assert(solution.isHappy(19) == true);
    
    // Test case 2: Not happy number (2 -> 4 -> 16 -> 37 -> 58 -> 89 -> 145 -> 42 -> 20 -> 4 -> cycle)
    assert(solution.isHappy(2) == false);
    
    // Test case 3: Single digit happy number
    assert(solution.isHappy(1) == true);
    
    // Test case 4: Single digit not happy number
    assert(solution.isHappy(2) == false);
    
    // Test case 5: Another happy number
    assert(solution.isHappy(7) == true);
    
    // Test case 6: Another not happy number
    assert(solution.isHappy(3) == false);
    
    cout << "All happy_number tests passed!" << endl;
}

int main() {
    test_happy_number();
    return 0;
}
