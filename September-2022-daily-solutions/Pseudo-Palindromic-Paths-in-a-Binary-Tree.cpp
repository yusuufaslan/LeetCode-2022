/*
    author: @yusuufaslan
    Date: 14 September 2022
    Problem number at LeetCode: 1457
    Problem name: Pseudo-Palindromic Paths in a Binary Tree
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

	unordered_map<int, int> mp;

	void traversal(TreeNode* root, int& answer){
		if(!root)
			return;

		mp[root->val]++;

		if(!root->left && !root->right) {
			int odds = 0;

			for(auto i : mp){
				if(i.second % 2 == 1)
					odds++;
			}

			if(odds <= 1)
				answer++;
		}

		traversal(root->left, answer);
		traversal(root->right, answer);

		mp[root->val]--;
	}

    int pseudoPalindromicPaths (TreeNode* root) {
		int ans = 0;
		traversal(root, ans);
		return ans;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
