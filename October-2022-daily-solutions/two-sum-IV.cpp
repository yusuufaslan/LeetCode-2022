/*
    author: @yusuufaslan
    Date: 9 October 2022
    Problem number at LeetCode: 653
    Problem name: Two Sum IV - Input is a BST
    level: easy
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

//  Definition for a binary tree node.
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
    vector<int>ans;
    void solve(TreeNode*root){
       if(root==NULL){
           return;
       }
        solve(root->left);
        ans.push_back(root->val);
        solve(root->right);//inorder traversal since it is a BST inorder means a sorted order 
    }
    bool findTarget(TreeNode* root, int k) {
        solve(root);
        int n=ans.size();
        int s=0,e=n-1;
        while(s<e){//we can apply binary search on that vector since it is in sorted format
            if(ans[s]+ans[e]==k){
                return true;
            }
            else if(ans[s]+ans[e]<k){
                s++;
            }
            else{
                e--;
            }
        }
        return false;
        
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
