/*
    author: @yusuufaslan
    Date: 2 October 2022
    Problem number at LeetCode: 1155
    Problem name: number-of-dice-rolls-with-target-sum
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

#define MODULO 1000000007

using namespace std;

class Solution {
public:
    int helper(int n, int k, int target, vector<vector<int>>& dp) {
        if (target < 0)
            return 0;
        if (target == 0 && n == 0)
            return 1;
        if (target != 0 && n == 0)
            return 0;
        if (target == 0 && n != 0)
            return 0;

        if (dp[n][target] != -1) 
            return dp[n][target];
        
        long long ans = 0;
        for (int i = 1; i <= k; i++)
            ans += ( helper(n - 1, k, target - i, dp) ) % MODULO;
        
        return dp[n][target] = ans % MODULO;
    }

    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
        return helper(n, k, target, dp);
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
