/*
    DAY - 1
    author: @yusuufaslan
    Date: 10 October 2022
    Problem number at LeetCode: 704
    Problem name: Binary Search
    level: easy
*/

/*
Given an array of integers nums which is sorted in ascending order, 
and an integer target, write a function to search target in nums. 
If target exists, then return its index. Otherwise, return -1.
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
    int search(vector<int> nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int mid;

        while (left <= right){
            mid = (left + right) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] > target) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        return -1;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
