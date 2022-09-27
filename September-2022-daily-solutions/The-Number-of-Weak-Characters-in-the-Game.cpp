/*
    author: @yusuufaslan
    Date: 9 September 2022
    Problem number at LeetCode: 1996
    Problem name: The Number of Weak Characters in the Game
    level: medium
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <bits/stdc++.h>
#include <queue>

using namespace std;

bool comparator(vector<int>& v1, vector<int>& v2) {
    if (v1[0] != v2[0]) 
        return v1[0] > v2[0];
    else
        return v1[1] < v2[1];
}

class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int answer = 0;
        int max_val = INT_MIN;
        
        sort(properties.begin(), properties.end(), comparator);

        for (auto character: properties) {
            if (max_val > character[1])
                answer++;
            else
                max_val = character[1];
        }

        return answer;
    }
};

int main(int argc, char const *argv[])
{
    vector<vector<int>> prop = {{1, 1}, {2, 1}, {2, 2}, {1, 2}};
    Solution s;

    cout << s.numberOfWeakCharacters(prop) << endl;

    return 0;
}
