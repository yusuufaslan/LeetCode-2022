/*
    author: @yusuufaslan
    Date: 7 September 2022
    Problem number at LeetCode: 606
    Problem name: Construct String from Binary Tree
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
    string tree2str(TreeNode* root) {
        if (root == NULL)
            return "";

        string answer = to_string(root->val);

        if (root->left || root->right)
            answer += '(' + tree2str(root->left) + ')';

        if (root->right)
            answer += '(' + tree2str(root->right) + ')';

        return answer;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
