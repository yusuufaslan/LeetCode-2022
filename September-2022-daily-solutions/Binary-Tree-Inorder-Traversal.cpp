/*
    author: @yusuufaslan
    Date: 8 September 2022
    Problem number at LeetCode: 94
    Problem name: Binary Tree Inorder Traversal
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
    vector<int> answer;

    void traversal(TreeNode* node) {
        if (!node)
            return;
        
        traversal(node->left);
        answer.push_back(node->val);
        traversal(node->right);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        traversal(root);
        
        return answer;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
