/*
 * Copyright 2025 Robina Li. MIT License
 * @file : solution.cpp
 * @desc : Solution for Merge Intervals
 * Reference : https://leetcode.com/problems/merge-intervals/
 */

#include "solution.h"
#include <algorithm>
#include <map>
#include <set>
#include <stack>

using namespace std;

namespace MergeIntervals {

vector<vector<int>> Solution::merge(vector<vector<int>>& intervals) {
    if (intervals.empty()) return {};
    
    // Sort intervals by start time
            sort(intervals.begin(), intervals.end());
    
            vector<vector<int>> merged;
    merged.push_back(intervals[0]);
    
    for (int i = 1; i < intervals.size(); i++) {
        if (merged.back()[1] >= intervals[i][0]) {
            // Overlapping intervals, merge them
            merged.back()[1] = max(merged.back()[1], intervals[i][1]);
        } else {
            // Non-overlapping interval, add to result
            merged.push_back(intervals[i]);
        }
    }
    
    return merged;
}

vector<vector<int>> Solution::merge2(vector<vector<int>>& intervals) {
    if (intervals.empty()) return {};
    
    // Sort intervals by start time
    sort(intervals.begin(), intervals.end());
    
    vector<vector<int>> result;
    vector<int> current = intervals[0];
    
    for (int i = 1; i < intervals.size(); i++) {
        // If current interval overlaps with next interval
        if (current[1] >= intervals[i][0]) {
            // Merge them by updating the end time
            current[1] = max(current[1], intervals[i][1]);
        } else {
            // No overlap, add current to result and start new current
            result.push_back(current);
            current = intervals[i];
        }
    }
    
    // Don't forget to add the last interval
    result.push_back(current);
    
    return result;
}

// Graph-based approach using connected components
vector<vector<int>> Solution::mergeGraph(vector<vector<int>>& intervals) {
    map<vector<int>, vector<vector<int>>> graph;
    map<int, vector<vector<int>>> nodes_in_comp;
    set<vector<int>> visited;

    // Helper function to check if two intervals overlap
    auto overlap = [](vector<int>& a, vector<int>& b) -> bool {
        return a[0] <= b[1] and a[1] >= b[0];
    };

    // Build graph where nodes are intervals and edges represent overlaps
    auto buildGraph = [&](vector<vector<int>>& intervals) {
        for (auto interval1 : intervals) {
            for (auto interval2: intervals) {
                if (overlap(interval1, interval2)) {
                    graph[interval1].push_back(interval2);
                    graph[interval2].push_back(interval1);
                }
            }
        }
    };

    // Merge nodes in a component by finding min start and max end
    auto mergeNodes = [](vector<vector<int>>& nodes) -> vector<int> {
        int min_start = nodes[0][0];
        for (auto node: nodes) {
            min_start = min(min_start, node[0]);
        }

        int max_end = nodes[0][1];
        for (auto node: nodes) {
            max_end = max(max_end, node[1]);
        }

        return {min_start, max_end};
    };

    // DFS to mark all nodes in a connected component
    auto markComponentDFS = [&](vector<int>& start, int comp_number) {
        stack<vector<int>> stk;
        stk.push(start);

        while (!stk.empty()) {
            vector<int> node = stk.top();
            stk.pop();
            if (visited.find(node) == visited.end()) {
                visited.insert(node);

                nodes_in_comp[comp_number].push_back(node);
                for(auto child: graph[node]) {
                    stk.push(child);
                }
            }
        }
    };

    // Build connected components
    auto buildComponents = [&](vector<vector<int>>& intervals) {
        int comp_number = 0;
        for(auto interval : intervals) {
            if (visited.find(interval) == visited.end()) {
                markComponentDFS(interval, comp_number);
                comp_number++;
            }
        }
    };

    // Main merge function using graph approach
    buildGraph(intervals);
    buildComponents(intervals);
    vector<vector<int>> merged;
    for (size_t comp = 0; comp < nodes_in_comp.size(); comp++) {
        merged.push_back(mergeNodes(nodes_in_comp[comp]));
    }
    return merged;
}

// Concise merge approach
vector<vector<int>> Solution::mergeConcise(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> merged;
    for (auto interval : intervals) {
        if (merged.empty() || merged.back()[1] < interval[0]) {
            merged.push_back(interval);
        }
        else {
            merged.back()[1] = max(merged.back()[1], interval[1]);
        }
    }
    return merged;
}

}
