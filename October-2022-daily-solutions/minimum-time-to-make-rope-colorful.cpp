/*
    author: @yusuufaslan
    Date: 3 October 2022
    Problem number at LeetCode: 1578
    Problem name: minimum-time-to-make-rope-colorful
    level: medium
*/

// this problem requires dynamic programinng approach again as previous day's problem.

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
    int minCost(string colors, vector<int>& neededTime) {
        int answer = 0;
        int left = 0;
        int right = 1;

        while(right != colors.size()) {
            if (colors[left] != colors[right]){
                left = right;
            }
            else {
                if (neededTime[left] < neededTime[right]) {
                    answer += neededTime[left];
                    left = right;
                }
                else {
                    answer += neededTime[right];
                }
            }
            right++;
        }

        return answer;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> neededTime = {3,5,10,7,5,3,5,5,4,8,1};
    cout << s.minCost("aaabbbabbbb", neededTime) << endl;

    return 0;
}
