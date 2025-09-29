/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_find_duplicate_file.cpp
 * @desc : Test file for Find Duplicate File in System
 */

#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "../../src/medium/find_duplicate_file/solution.h"
#include "../../src/medium/find_duplicate_file/solution.cpp"

void testFindDuplicateFile() {
    FindDuplicateFile::Solution solution;
    
    // Test case 1: paths = ["root/a 1.txt(abcd) 2.txt(efgh)","root/c 3.txt(abcd)","root/c/d 4.txt(efgh)","root 4.txt(efgh)"]
    vector<string> paths1 = {"root/a 1.txt(abcd) 2.txt(efgh)", "root/c 3.txt(abcd)", "root/c/d 4.txt(efgh)", "root 4.txt(efgh)"};
    vector<vector<string>> result1 = solution.findDuplicate(paths1);
    // Expected: [["root/a/2.txt","root/c/d/4.txt","root/4.txt"],["root/a/1.txt","root/c/3.txt"]]
    assert(result1.size() == 2);
    std::cout << "Test 1 PASSED: Find duplicate files" << std::endl;
    
    // Test case 2: paths = ["root/a 1.txt(abcd) 2.txt(efgh)","root/c 3.txt(abcd)","root/c/d 4.txt(efgh)"]
    vector<string> paths2 = {"root/a 1.txt(abcd) 2.txt(efgh)", "root/c 3.txt(abcd)", "root/c/d 4.txt(efgh)"};
    vector<vector<string>> result2 = solution.findDuplicate(paths2);
    // Expected: [["root/a/1.txt","root/c/3.txt"],["root/a/2.txt","root/c/d/4.txt"]]
    assert(result2.size() == 2);
    std::cout << "Test 2 PASSED: Find duplicate files without root" << std::endl;
}

int main() {
    try {
        testFindDuplicateFile();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
