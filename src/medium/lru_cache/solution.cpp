/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for LRU Cache
 * Reference : https://leetcode.com/problems/lru-cache/
 */

#include "solution.h"

using namespace std;

namespace LRUCache {

LRUCache::LRUCache(int capacity) : capacity(capacity) {}

int LRUCache::get(int key) {
    auto it = cache.find(key);
    if (it == cache.end()) {
        return -1;
    }
    
    // Move to front (most recently used)
    lru.splice(lru.begin(), lru, it->second);
    return it->second->second;
}

void LRUCache::put(int key, int value) {
    auto it = cache.find(key);
    if (it != cache.end()) {
        // Key exists, update value and move to front
        it->second->second = value;
        lru.splice(lru.begin(), lru, it->second);
    } else {
        // Key doesn't exist, add new entry
        if (cache.size() >= capacity) {
            // Remove least recently used
            int lruKey = lru.back().first;
            cache.erase(lruKey);
            lru.pop_back();
        }
        
        lru.push_front({key, value});
        cache[key] = lru.begin();
    }
}

}
