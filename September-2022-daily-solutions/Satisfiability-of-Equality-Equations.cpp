/*
    author: @yusuufaslan
    Date: 26 September 2022
    Problem number at LeetCode: 990
    Problem name: Satisfiability of Equality Equations
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
    vector<char> parent;

    char rootFind(char x) {
        return parent[x] == x ? x : rootFind(parent[x]);
    }

    bool equationsPossible(vector<string>& equations) {
        parent.resize(26, 0);

        for (int i = 0; i < 26; i++)
            parent[i] = i;

        for (auto string: equations) {
            if (string[1] == '=') {
                char x = rootFind(string[0] - 'a');
                char y = rootFind(string[3] - 'a');
                
                if (x != y)
                    parent[y] = x;
            }
        }

        for (auto string: equations) {
            if (string[1] == '!') {
                int x = rootFind(string[0] - 'a');
                int y = rootFind(string[3] - 'a');

                if (x == y)
                    return false;
            }
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
    vector<string> eqs = {"a==b","b!=a"};
    Solution s;

    cout << s.equationsPossible(eqs);

    return 0;
}
