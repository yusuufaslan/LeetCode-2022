/*
    DAY - 1
    author: @yusuufaslan
    Date: 10 October 2022
    Problem number at LeetCode: 35
    Problem name: Search Insert Position
    level: easy
*/

/*
Given a sorted array of distinct integers and a target value, 
return the index if the target is found. If not, return the 
index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.
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
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int mid;

        while (left <= right) {
            mid = left + (right - left) / 2;

            if (nums[mid] >= target) {
                right = mid - 1;
            }
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
