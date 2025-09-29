#include <cassert>
#include <set>
#include <iostream>
#include "../../src/medium/randomized_set/solution.h"
#include "../../src/medium/randomized_set/solution.cpp"

using namespace std;

void test_randomized_set() {
    RandomizedSet::RandomizedSet rs;
    
    // Test case 1: Insert operations
    assert(rs.insert(1) == true);
    assert(rs.insert(2) == true);
    assert(rs.insert(1) == false); // Already exists
    
    // Test case 2: Remove operations
    assert(rs.remove(1) == true);
    assert(rs.remove(3) == false); // Doesn't exist
    
    // Test case 3: GetRandom operations
    // Since we have only element 2, getRandom should return 2
    int random_val = rs.getRandom();
    assert(random_val == 2);
    
    // Test case 4: Insert after remove
    assert(rs.insert(1) == true);
    assert(rs.insert(3) == true);
    
    // Test case 5: Multiple getRandom calls
    set<int> possible_values = {1, 2, 3};
    for (int i = 0; i < 100; i++) {
        int val = rs.getRandom();
        assert(possible_values.find(val) != possible_values.end());
    }
    
    // Test case 6: Remove all elements
    assert(rs.remove(1) == true);
    assert(rs.remove(2) == true);
    assert(rs.remove(3) == true);
    
    // Test case 7: Operations on empty set
    assert(rs.remove(1) == false);
    assert(rs.insert(1) == true);
    assert(rs.getRandom() == 1);
    
    cout << "All randomized_set tests passed!" << endl;
}

int main() {
    test_randomized_set();
    return 0;
}
