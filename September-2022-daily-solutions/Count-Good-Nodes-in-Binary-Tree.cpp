/*
    author: @yusuufaslan
    Date: 1 September 2022
    Problem number at LeetCode: 1448
    Problem name: Count Good Nodes in Binary Tree
    level: medium
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <bits/stdc++.h>

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
    int goodNodes(TreeNode* root) {
        int max_val = INT_MIN;
        int count = 0;
        goodNodeCounter(root, count, max_val);
        
        return count;
    }

    void goodNodeCounter(TreeNode* node, int& count, int max_val){
        if (node == NULL)
            return;

        if (node->val >= max_val){
            max_val = node->val;
            count++;
        }
        
        goodNodeCounter(node->left, count, max_val);
        goodNodeCounter(node->right, count, max_val);
    }
};

int main(int argc, char const *argv[])
{
    // Solution s;
    // TreeNode *node = new TreeNode();

    // cout << s.goodNodes(node) << endl;

    return 0;
}
