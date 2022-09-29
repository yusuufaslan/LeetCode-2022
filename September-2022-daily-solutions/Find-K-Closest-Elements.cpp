/*
    author: @yusuufaslan
    Date: 29 September 2022
    Problem number at LeetCode: 658
    Problem name: Find K Closest Elements
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

// instead of using vector<vector<int>> structure, 
// i will use vector<pair<int, int>> structure in this time. 

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int, int>> vec;
        vector<int> answer;

        for (int i = 0; i < arr.size(); i++)
            vec.push_back({abs(x - arr[i]), arr[i]});

        sort(vec.begin(), vec.end());

        for (int i = 0; i < k; i++)
            answer.push_back(vec[i].second);
        
        sort(answer.begin(), answer.end());
        return answer;
    }
};


// bool comparator(vector<int>& v1, vector<int>& v2) {
//     if (v1[0] < v2[0])
//         return true;
//     else if (v1[0] == v2[0])
//         return v1[1] < v2[1];
//     else return false;
// }

// class Solution {
// public:
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         vector<vector<int>> vec;
//         vector<int> answer;

//         for (int i = 0; i < arr.size(); i++)
//             vec.push_back({abs(x - arr[i]), arr[i]});

//         sort(vec.begin(), vec.end(), comparator);

//         for (int i = 0; i < k; i++)
//             answer.push_back(vec[i][1]);
        
//         sort(answer.begin(), answer.end());
//         return answer;
//     }
// };

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
