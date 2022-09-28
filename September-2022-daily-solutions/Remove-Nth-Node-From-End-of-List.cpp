/*
    author: @yusuufaslan
    Date: 28 September 2022
    Problem number at LeetCode: 19
    Problem name: Remove Nth Node From End of List
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
#include <map>

using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL) 
            return NULL;
        
        ListNode* p1 = head;
        ListNode* p2 = head;
        
        while(n != 0) {
            p2 = p2->next;
            n--;
        }
        
        while(p2 != NULL && p2->next != NULL) {
            p2 = p2->next;
            p1 = p1->next;
        }
        
        if(p1 == head && p2 == NULL) 
            return head->next;
        
        p1->next = p1->next->next;
        return head;
    }
};

int main(int argc, char const *argv[])
{
    ListNode* n5 = new ListNode(5);
    ListNode* n4 = new ListNode(4, n5);
    ListNode* n3 = new ListNode(3, n4);
    ListNode* n2 = new ListNode(2, n3);
    ListNode* n1 = new ListNode(1, n2);

    ListNode* head = n1;

    Solution s;
    s.removeNthFromEnd(head, 2);

    return 0;
}
