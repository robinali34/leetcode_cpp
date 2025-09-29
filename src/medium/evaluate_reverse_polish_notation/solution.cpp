/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Evaluate Reverse Polish Notation
 * Reference : https://leetcode.com/problems/evaluate-reverse-polish-notation/
 */

#include "solution.h"
#include <unordered_set>

using namespace std;

namespace EvaluateReversePolishNotation {

int Solution::evalRPN(vector<string>& tokens) {
    const int n = tokens.size();
    vector<int> stk((n + 1) / 2);
    int idx = -1;
    unordered_set<string> ops = {"+", "-", "*", "/"};
    for (const auto& token : tokens) {
        if (token.length() > 1 || !ops.count(token)){
            idx++;
            stk[idx] = stoi(token);
        } else {
            switch (token[0]) {
                case '+': idx--; stk[idx] += stk[idx + 1]; break;
                case '-': idx--; stk[idx] -= stk[idx + 1]; break;
                case '*': idx--; stk[idx] *= stk[idx + 1]; break;
                case '/': idx--; stk[idx] /= stk[idx + 1]; break;
            }
        }
    }
    return stk[idx];
}

}
