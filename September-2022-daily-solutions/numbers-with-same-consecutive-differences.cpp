/*
    author: @yusuufaslan
    Date: 3 September 2022
    Problem number at LeetCode: 967
    Problem name:  Numbers With Same Consecutive Differences
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
    vector<int> answer;

    void recursiveHelper(int n, int k, int number, int last_digit) {
        if (n == 0) {
            answer.push_back(number);
            return;
        }

        for (int i = 0; i < 10; i++)
        {
            if (abs(i - last_digit) == k)
                recursiveHelper(n - 1, k, (number*10 + i), i);
        }
        

    } 

    vector<int> numsSameConsecDiff(int n, int k) {
        for (int i = 1; i <= 9; i++)
            recursiveHelper(n - 1, k, i, i);
        
        return answer;
    }
};


int main(int argc, char const *argv[])
{

    Solution s;

    for(auto a: s.numsSameConsecDiff(3, 7)) {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}


// This solution gave me timeout error, but results were correct.
// class Solution {
// public:
//     vector<int> numsSameConsecDiff(int n, int k) {
//         vector<int> answer;
//         int max = pow(10, n);
//         int min = pow(10, n - 1);

//         for (int number = min; number < max; number++)
//         {
//             int last_digit = -1;
//             int num = number;
//             bool isEligibleNumber = true;

//             while(num > 0) {
//                 int digit = num % 10;
//                 num /= 10;

//                 if (last_digit == -1){
//                     last_digit = digit;
//                     continue;
//                 }

//                 if(abs(last_digit - digit) != k){
//                     isEligibleNumber = false;
//                     break;
//                 }

//                 last_digit = digit;
//             }

//             if (isEligibleNumber)
//                 answer.push_back(number);
//         }
//         return answer;
//     }
// };