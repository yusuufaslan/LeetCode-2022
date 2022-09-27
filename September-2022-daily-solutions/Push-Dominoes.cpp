/*
    author: @yusuufaslan
    Date: 27 September 2022
    Problem number at LeetCode: 838
    Problem name: Push Dominoes
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
    string pushDominoes(string dominoes) {
        int size = dominoes.size();
        int right = -1;

        for (int i = 0; i < size; ++i) {
            if (dominoes[i] == 'L') {
                if (right == -1) {
                    for (int j = i - 1; j >= 0 && dominoes[j] == '.'; --j)
                        dominoes[j] = 'L';
                }
                else {
                    for (int j = right + 1, k = i - 1; j < k; ++j, --k) {
                        dominoes[j] = 'R';
                        dominoes[k] = 'L';
                    }
                    right = -1;
                }
            }
            else if (dominoes[i] == 'R') {
                if (right != -1) {
                    for (int j = right + 1; j < i; ++j)
                        dominoes[j] = 'R';            
                }
                right = i;
            }
        }
        if (right != -1) {
            for (int j = right + 1; j < size; ++j) 
                dominoes[j] = 'R';
        }
        return dominoes;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
