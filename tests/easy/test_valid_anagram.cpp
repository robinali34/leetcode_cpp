/*
 * Copyright 2021 Robina Li. MIT License
 * @file : test_valid_anagram.cpp
 * @desc : Test file for Valid Anagram
 */

#include <iostream>
#include <string>
#include <cassert>
#include "../../src/easy/valid_anagram/solution.h"
#include "../../src/easy/valid_anagram/solution.cpp"

void testIsAnagram() {
    ValidAnagram::Solution solution;
    
    // Test case 1: s = "anagram", t = "nagaram"
    std::string s1 = "anagram";
    std::string t1 = "nagaram";
    bool result1 = solution.isAnagram(s1, t1);
    assert(result1 == true);
    std::cout << "Test 1 PASSED: \"anagram\" vs \"nagaram\" -> " << (result1 ? "true" : "false") << std::endl;
    
    // Test case 2: s = "rat", t = "car"
    std::string s2 = "rat";
    std::string t2 = "car";
    bool result2 = solution.isAnagram(s2, t2);
    assert(result2 == false);
    std::cout << "Test 2 PASSED: \"rat\" vs \"car\" -> " << (result2 ? "true" : "false") << std::endl;
    
    // Test case 3: s = "", t = ""
    std::string s3 = "";
    std::string t3 = "";
    bool result3 = solution.isAnagram(s3, t3);
    assert(result3 == true);
    std::cout << "Test 3 PASSED: \"\" vs \"\" -> " << (result3 ? "true" : "false") << std::endl;
    
    // Test case 4: s = "hello", t = "world"
    std::string s4 = "hello";
    std::string t4 = "world";
    bool result4 = solution.isAnagram(s4, t4);
    assert(result4 == false);
    std::cout << "Test 4 PASSED: \"hello\" vs \"world\" -> " << (result4 ? "true" : "false") << std::endl;
}

int main() {
    try {
        testIsAnagram();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
