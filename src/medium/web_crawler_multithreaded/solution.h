/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for Web Crawler Multithreaded
 * Reference : https://leetcode.com/problems/web-crawler-multithreaded/
 */

#ifndef WEB_CRAWLER_MULTITHREADED_SOLUTION_H
#define WEB_CRAWLER_MULTITHREADED_SOLUTION_H

#include <string>
#include <vector>
#include <unordered_set>
#include <functional>
#include <thread>
#include <mutex>
#include <queue>

using namespace std;

namespace WebCrawlerMultithreaded {
class Solution {
public:
    vector<string> crawl(string startUrl, function<void(string)> htmlParser);
private:
    vector<string> rtn;
    unordered_set<string> m;
    mutex mtxq, mtxm, mtxa;
    string StUrl;
    int n = thread::hardware_concurrency();
    vector<thread> pool;
    queue<string> q;
    string getStartUrl(string& s);
};
}

#endif // WEB_CRAWLER_MULTITHREADED_SOLUTION_H
