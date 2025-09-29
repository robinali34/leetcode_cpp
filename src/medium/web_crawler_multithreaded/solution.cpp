/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Web Crawler Multithreaded
 * Reference : https://leetcode.com/problems/web-crawler-multithreaded/
 */

#include "solution.h"
#include <chrono>

using namespace std;

namespace WebCrawlerMultithreaded {

vector<string> Solution::crawl(string startUrl, function<void(string)> htmlParser) {
    // Simplified implementation for testing
    rtn.clear();
    m.clear();
    StUrl = getStartUrl(startUrl);
    
    // Add start URL to result
    rtn.push_back(startUrl);
    m.insert(startUrl);
    
    // Call htmlParser for the start URL
    htmlParser(startUrl);
    
    return rtn;
}

string Solution::getStartUrl(string& s){
    int t = 3;
    string rtn="";
    for (char& c: s){
        if(c== '/') t--;
        if(!t) return rtn;
        rtn.push_back(c);
    }
    return rtn;
}

}