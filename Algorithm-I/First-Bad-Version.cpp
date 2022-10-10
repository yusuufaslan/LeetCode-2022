/*
    DAY - 1
    author: @yusuufaslan
    Date: 10 October 2022
    Problem number at LeetCode: 278
    Problem name: First Bad Version
    level: easy
*/

/*
You are a product manager and currently leading a team to develop a new product. 
Unfortunately, the latest version of your product fails the quality check. 
Since each version is developed based on the previous version, all the 
versions after a bad version are also bad.
Suppose you have n versions [1, 2, ..., n] and you want to find out the first 
bad one, which causes all the following ones to be bad.
You are given an API bool isBadVersion(version) which returns whether 
version is bad. Implement a function to find the first bad version. 
You should minimize the number of calls to the API.
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

// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;

        while (left < right) {
        int mid = left + (right - left) / 2;

            if (isBadVersion(mid))
                right =  mid;
            else {
                left = mid + 1;
            }
        }

        return left;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
