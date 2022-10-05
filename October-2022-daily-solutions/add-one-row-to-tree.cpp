/*
    author: @yusuufaslan
    Date: 5 October 2022
    Problem number at LeetCode: 623
    Problem name: Add One Row to Tree
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

    void insertNodes(TreeNode* node, int val, int depth, int curr_depth) {
        if (node == NULL)
            return;
        
        if (curr_depth == depth - 1) {
            TreeNode* nodePtr = node->left;
            node->left = new TreeNode(val);
            node->left->left = nodePtr;

            nodePtr = node->right;
            node->right = new TreeNode(val);
            node->right->right = nodePtr;
        }
        else {
            insertNodes(node->left, val, depth, curr_depth + 1);
            insertNodes(node->right, val, depth, curr_depth + 1);
        }
    }    

    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1) {
            TreeNode* node = new TreeNode(val);
            node->left = root;
            return node;
        }

        insertNodes(root, val, depth, 1);
        return root;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
