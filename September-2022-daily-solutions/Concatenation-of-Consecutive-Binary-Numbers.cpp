/*
    author: @yusuufaslan
    Date: 23 September 2022
    Problem number at LeetCode: 1680
    Problem name: Concatenation of Consecutive Binary Numbers
    level: medium
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

long int MOD = 1e9 + 7;

class Solution {
public:

    int numberOfBits(int n) {
        return log2(n) + 1;
    }

    int concatenatedBinary(int n) {
        long ans = 0;

        for (int i = 1; i <= n; i++)
            ans = ((ans << numberOfBits(i)) + i) % MOD;
        
        return ans;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.concatenatedBinary(12) << endl;

    return 0;
}
