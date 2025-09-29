/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Find Duplicate File in System
 * Reference : https://leetcode.com/problems/find-duplicate-file-in-system/
 */

#include "solution.h"
#include <unordered_map>
#include <sstream>

using namespace std;

namespace FindDuplicateFile {

vector<vector<string>> Solution::findDuplicate(vector<string>& paths) {
    unordered_map<string, vector<string>> temp;
    vector<vector<string>> rtn;
    for(auto& i: paths) {
        stringstream stream(i);
        string filelocation;
        string s;
        getline(stream, filelocation, ' ');
        while(getline(stream, s, ' ')) {
            string fname = filelocation + '/' + s.substr(0, s.find('('));
            string fcontent = s.substr(s.find('(') + 1, s.find(')') - s.find('(') - 1);
            temp[fcontent].push_back(fname);
        }
    }
    for (auto& file: temp) {
        if(file.second.size() > 1)
            rtn.push_back(file.second);
    }
    return rtn;
}

}
