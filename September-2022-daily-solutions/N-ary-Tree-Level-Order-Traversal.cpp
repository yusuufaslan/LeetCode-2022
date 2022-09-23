/*
    author: @yusuufaslan
    Date: 5 September 2022
    Problem number at LeetCode: 429
    Problem name:  N-ary Tree Level Order Traversal
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

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> answer;
        queue<Node*> q;

        if(root)
            q.push(root);
        
        while (!q.empty())
        {
            int size = q.size();
            vector<int> level_arr;

            for (int i = 0; i < size; i++)
            {
                Node* front = q.front();
                level_arr.push_back(front->val);
                q.pop();

                for (auto item : front->children)
                    q.push(item);
            }
            answer.push_back(level_arr);
        }
        return answer;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
