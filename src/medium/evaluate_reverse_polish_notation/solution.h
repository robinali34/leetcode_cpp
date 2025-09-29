/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Evaluate Reverse Polish Notation
 * Reference : https://leetcode.com/problems/evaluate-reverse-polish-notation/
 */

#ifndef EVALUATE_REVERSE_POLISH_NOTATION_SOLUTION_H
#define EVALUATE_REVERSE_POLISH_NOTATION_SOLUTION_H

#include <vector>
#include <string>

using namespace std;

namespace EvaluateReversePolishNotation {
class Solution {
public:
    int evalRPN(vector<string>& tokens);
};
}

#endif // EVALUATE_REVERSE_POLISH_NOTATION_SOLUTION_H
