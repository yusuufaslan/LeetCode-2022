/*
    author: @yusuufaslan
    Date: 8 October 2022
    Problem number at LeetCode: 16
    Problem name: 3Sum Closest
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
    int threeSumClosest(vector<int>& nums, int target) {
        int res = nums[0] + nums[1] + nums[2];
        sort(begin(nums), end(nums));
        int n = nums.size();
        
        for(int i = 0 ; i< n-1 ;i++){
            int j = i+1;
            int k = n-1;
            
            while(j < k){
                int cur_sum = nums[i] + nums[j] + nums[k];
                if(cur_sum > target )
                    k -= 1;
                else if (cur_sum == target)
                    return cur_sum;
                else j += 1;
                
                if(abs(cur_sum - target) < abs(res-target)){
                    res = cur_sum;
                }
            }
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
