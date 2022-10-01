/*
    author: @yusuufaslan
    Date: 1 October 2022
    Problem number at LeetCode: 91
    Problem name: Decode Ways
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

class Solution {
public:
    int numDecodings(string s) {
        int length = s.length();
        vector<int> dp(length + 1);
        dp[0] = 1;
        dp[1] = (s[0] == '0') ? 0 : 1;

        for (int i = 2; i <= length; i++) {
            int d = s[i - 1] - '0';
            int dd = 10*(s[i - 2] - '0') + d;

            if (d >= 1)
                dp[i] += dp[i - 1];
            if (dd >= 10 && dd <= 26)
                dp[i] += dp[i - 2];
        }
        return dp[length];
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
