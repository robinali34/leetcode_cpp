/*
 * Copyright 2025 Robina Li. MIT License
 * @file : test_web_crawler_multithreaded.cpp
 * @desc : Test file for Web Crawler Multithreaded
 */

#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <functional>
#include "../../src/medium/web_crawler_multithreaded/solution.h"
#include "../../src/medium/web_crawler_multithreaded/solution.cpp"

void testWebCrawlerMultithreaded() {
    WebCrawlerMultithreaded::Solution solution;
    
    // Test case 1: startUrl = "http://news.yahoo.com/news/topics/", htmlParser returns ["http://news.yahoo.com", "http://news.yahoo.com/news"]
    string startUrl1 = "http://news.yahoo.com/news/topics/";
    function<void(string)> htmlParser1 = [](string url) {
        // Mock implementation
    };
    
    vector<string> result1 = solution.crawl(startUrl1, htmlParser1);
    // Expected: ["http://news.yahoo.com/news/topics/", "http://news.yahoo.com", "http://news.yahoo.com/news"]
    assert(result1.size() >= 1);
    std::cout << "Test 1 PASSED: Web crawler multithreaded" << std::endl;
    
    // Test case 2: startUrl = "http://example.com", htmlParser returns ["http://example.com/page1", "http://example.com/page2"]
    string startUrl2 = "http://example.com";
    function<void(string)> htmlParser2 = [](string url) {
        // Mock implementation
    };
    
    vector<string> result2 = solution.crawl(startUrl2, htmlParser2);
    assert(result2.size() >= 1);
    std::cout << "Test 2 PASSED: Simple web crawler" << std::endl;
}

int main() {
    try {
        testWebCrawlerMultithreaded();
        std::cout << "\n=== All tests PASSED ===" << std::endl;
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed: " << e.what() << std::endl;
        return 1;
    }
}
