/*
    author: @yusuufaslan
    Date: 6 October 2022
    Problem number at LeetCode: 981
    Problem name: Time Based Key-Value Store
    level: medium
*/

// it requires dynamic programming approach

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <bits/stdc++.h>
#include <queue>
#include <unordered_map>
#include <map>

using namespace std;

class TimeMap {
public:
    unordered_map<string, unordered_map<int, string>> keyTimeMap;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        // Store '(timestamp, value)' pair in 'key' bucket.
        keyTimeMap[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        // If the 'key' does not exist in map we will return empty string.
        if (!keyTimeMap.count(key)) {
            return "";
        }
        
        // Iterate on time from 'timestamp' to '1'.
        for (int currTime = timestamp; currTime >= 1; --currTime) {
            // If a value for current time is stored in key's bucket we return the value.
            if (keyTimeMap[key].count(currTime)) {
                return keyTimeMap[key][currTime];
            }
        }
        
        // Otherwise no time <= timestamp was stored in key's bucket.
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
