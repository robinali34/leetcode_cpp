#include <cassert>
#include <string>
#include <iostream>
#include "../../src/medium/word_pattern/solution.h"
#include "../../src/medium/word_pattern/solution.cpp"

using namespace std;

void test_word_pattern() {
    WordPattern::Solution solution;
    
    // Test case 1: Valid pattern
    string pattern1 = "abba";
    string s1 = "dog cat cat dog";
    assert(solution.wordPattern(pattern1, s1) == true);
    
    // Test case 2: Invalid pattern
    string pattern2 = "abba";
    string s2 = "dog cat cat fish";
    assert(solution.wordPattern(pattern2, s2) == false);
    
    // Test case 3: Invalid pattern (different length)
    string pattern3 = "aaaa";
    string s3 = "dog cat cat dog";
    assert(solution.wordPattern(pattern3, s3) == false);
    
    // Test case 4: Valid pattern
    string pattern4 = "abba";
    string s4 = "dog dog dog dog";
    assert(solution.wordPattern(pattern4, s4) == false);
    
    // Test case 5: Single character pattern
    string pattern5 = "a";
    string s5 = "dog";
    assert(solution.wordPattern(pattern5, s5) == true);
    
    // Test case 6: Single character pattern, multiple words
    string pattern6 = "a";
    string s6 = "dog cat";
    assert(solution.wordPattern(pattern6, s6) == false);
    
    // Test case 7: Multiple characters, single word
    string pattern7 = "ab";
    string s7 = "dog";
    assert(solution.wordPattern(pattern7, s7) == false);
    
    // Test case 8: Empty pattern and string
    string pattern8 = "";
    string s8 = "";
    assert(solution.wordPattern(pattern8, s8) == true);
    
    // Test case 9: Complex valid pattern
    string pattern9 = "abc";
    string s9 = "dog cat bird";
    assert(solution.wordPattern(pattern9, s9) == true);
    
    cout << "All word_pattern tests passed!" << endl;
}

int main() {
    test_word_pattern();
    return 0;
}
