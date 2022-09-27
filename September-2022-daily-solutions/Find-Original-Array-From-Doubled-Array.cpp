/*
    author: @yusuufaslan
    Date: 15 September 2022
    Problem number at LeetCode: 2007
    Problem name: Find Original Array From Doubled Array
    level: medium
*/

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

class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if (changed.size() % 2 == 1)
            return {};
        
        vector<int> answer;
        map<int, int> hash;
        sort(changed.begin(), changed.end());
       
        for (auto i:changed)
            hash[i]++;

        for (int i = 0; i < changed.size(); i++) {
            if (hash[changed[i]] == 0)
                continue;
            
            if (hash[changed[i] * 2] == 0)
                return {};
            
            answer.push_back(changed[i]);
            hash[changed[i]]--;
            hash[changed[i] * 2]--;
        }
        return answer;
    }
};

int main(int argc, char const *argv[])
{
    
    return 0;
}
