/*
    author: @yusuufaslan
    Date: 12 September 2022
    Problem number at LeetCode: 948
    Problem name: Bag of Tokens
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

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score = 0;
        int start_idx = 0;
        int end_idx = tokens.size() - 1;

        sort(tokens.begin(), tokens.end());

        if (tokens.size() == 0 || tokens[0] > power)
            return 0;
        
        while (start_idx <= end_idx) {
            if (power >= tokens[start_idx]) {
                score++;
                power -= tokens[start_idx];
                start_idx++;
            }
            else {
                if (end_idx - start_idx > 1) {
                    power += tokens[end_idx];
                    end_idx--;
                    score--;
                }
                else break;
            }
        }
        return score;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
