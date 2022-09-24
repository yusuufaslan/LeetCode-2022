/*
    author: @yusuufaslan
    Date: 24 September 2022
    Problem number at LeetCode: 113
    Problem name: Path Sum II
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


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> sub_path;
    vector<vector<int>> answer;

    void dfs(TreeNode* node, int curr_sum, int target_sum) {
        if (node == NULL)
            return;
        
        curr_sum += node->val;
        sub_path.push_back(node->val);

        if (curr_sum == target_sum && node->left == NULL && node->right == NULL)
            answer.push_back(sub_path);
        
        dfs(node->left, curr_sum, target_sum);
        dfs(node->right, curr_sum, target_sum);
        sub_path.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root, 0, targetSum);
        return answer; 
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
