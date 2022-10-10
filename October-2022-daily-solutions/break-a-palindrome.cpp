/*
    author: @yusuufaslan
    Date: 10 October 2022
    Problem number at LeetCode: 1328
    Problem name: break-a-palindrome
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
    string breakPalindrome(string palindrome) {
        int size = palindrome.size();

        if (size <= 1)
            return "";

        for (int i = 0; i < size / 2; i++) {
            if (palindrome[i] != 'a') {
                palindrome[i] = 'a';
                return palindrome;
            }
        }
        palindrome[size - 1] = 'b';
        return palindrome;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
