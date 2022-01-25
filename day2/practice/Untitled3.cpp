/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)
            return head;
        ListNode * curr=head,*sprev=NULL,*prev,*next;
        int cnt=right-left;
        while(left>1)
        {
            left--;
            sprev=curr;
            curr=curr->next;
        }
        prev=curr;
        curr=curr->next;
        while(cnt--)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        if(sprev)
        {
            sprev->next->next=curr;
            sprev->next=prev;
        }
        else
        {
            head->next=curr;
            head=prev;
        }
        return head;
    }
};

//link:https://leetcode.com/problems/reverse-linked-list-ii/submissions/
