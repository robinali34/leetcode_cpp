/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.h
 * @desc : Header file for LRU Cache
 * Reference : https://leetcode.com/problems/lru-cache/
 */

#ifndef LRU_CACHE_SOLUTION_H
#define LRU_CACHE_SOLUTION_H

#include <unordered_map>
#include <list>

using namespace std;

namespace LRUCache {

class LRUCache {
private:
    int capacity;
    unordered_map<int, list<pair<int, int>>::iterator> cache;
    list<pair<int, int>> lru;

public:
    LRUCache(int capacity);
    int get(int key);
    void put(int key, int value);
};

}

#endif // LRU_CACHE_SOLUTION_H
