#include <cassert>
#include <string>
#include <iostream>
#include "../../src/easy/isomorphic_strings/solution.h"
#include "../../src/easy/isomorphic_strings/solution.cpp"

using namespace std;

void test_isomorphic_strings() {
    IsomorphicStrings::Solution solution;
    
    // Test case 1: Isomorphic strings
    string s1 = "egg";
    string t1 = "add";
    assert(solution.isIsomorphic(s1, t1) == true);
    
    // Test case 2: Not isomorphic strings
    string s2 = "foo";
    string t2 = "bar";
    assert(solution.isIsomorphic(s2, t2) == false);
    
    // Test case 3: Isomorphic strings
    string s3 = "paper";
    string t3 = "title";
    assert(solution.isIsomorphic(s3, t3) == true);
    
    // Test case 4: Single character
    string s4 = "a";
    string t4 = "b";
    assert(solution.isIsomorphic(s4, t4) == true);
    
    // Test case 5: Same string
    string s5 = "abc";
    string t5 = "abc";
    assert(solution.isIsomorphic(s5, t5) == true);
    
    // Test case 6: Different lengths
    string s6 = "ab";
    string t6 = "abc";
    assert(solution.isIsomorphic(s6, t6) == false);
    
    // Test case 7: Empty strings
    string s7 = "";
    string t7 = "";
    assert(solution.isIsomorphic(s7, t7) == true);
    
    cout << "All isomorphic_strings tests passed!" << endl;
}

int main() {
    test_isomorphic_strings();
    return 0;
}
