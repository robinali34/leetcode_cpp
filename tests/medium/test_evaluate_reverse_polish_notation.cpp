/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_evaluate_reverse_polish_notation.cpp
 * @desc : Test file for Evaluate Reverse Polish Notation
 */

#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include "../../src/medium/evaluate_reverse_polish_notation/solution.h"
#include "../../src/medium/evaluate_reverse_polish_notation/solution.cpp"

void testEvaluateReversePolishNotation() {
    EvaluateReversePolishNotation::Solution solution;
    
    // Test case 1: tokens = ["2","1","+","3","*"] -> 9
    vector<string> tokens1 = {"2", "1", "+", "3", "*"};
    int result1 = solution.evalRPN(tokens1);
    assert(result1 == 9);
    std::cout << "Test 1 PASSED: [\"2\",\"1\",\"+\",\"3\",\"*\"] -> " << result1 << std::endl;
    
    // Test case 2: tokens = ["4","13","5","/","+"] -> 6
    vector<string> tokens2 = {"4", "13", "5", "/", "+"};
    int result2 = solution.evalRPN(tokens2);
    assert(result2 == 6);
    std::cout << "Test 2 PASSED: [\"4\",\"13\",\"5\",\"/\",\"+\"] -> " << result2 << std::endl;
    
    // Test case 3: tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"] -> 22
    vector<string> tokens3 = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    int result3 = solution.evalRPN(tokens3);
    assert(result3 == 22);
    std::cout << "Test 3 PASSED: Complex expression -> " << result3 << std::endl;
}

int main() {
    try {
        testEvaluateReversePolishNotation();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
