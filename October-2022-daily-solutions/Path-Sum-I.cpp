/*
    author: @yusuufaslan
    Date: 4 October 2022
    Problem number at LeetCode: 112
    Problem name: Path Sum I1
    level: easy
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <bits/stdc++.h>
#include <queue>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// I solve it again recursive approach but i need to develop my dynamic programming skills
// later i will try to solve this kind of questions with dp.

class Solution {
public:
    int answer;
    void dfs(TreeNode* node, int targetSum, int curr_sum) {
        if (node == NULL)
            return;
        
        curr_sum += node->val;
        
        if (curr_sum == targetSum && node->left == NULL && node->right == NULL)
            answer++;
        
        dfs(node->left, targetSum, curr_sum);
        dfs(node->right, targetSum, curr_sum);
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        answer = 0;
        dfs(root, targetSum, 0);
        return answer;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
