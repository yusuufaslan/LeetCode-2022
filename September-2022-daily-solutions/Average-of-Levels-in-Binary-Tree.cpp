/*
    author: @yusuufaslan
    Date: 2 September 2022
    Problem number at LeetCode: 637
    Problem name: Average of Levels in Binary Tree
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

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> answer;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int level_size = q.size();
            double level_sum = 0;

            for (int i = 0; i < level_size; i++)
            {
                TreeNode* front = q.front();
                level_sum += front->val;
                q.pop();

                if(front->left)
                    q.push(front->left);
                
                if(front->right)
                    q.push(front->right);
                
            }
            answer.push_back(level_sum / level_size);
        }

        return answer;
    }
};

int main(int argc, char const *argv[])
{
    // Solution s;
    return 0;
}
