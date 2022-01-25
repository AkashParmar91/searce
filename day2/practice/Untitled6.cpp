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
    bool isPalindrome(ListNode* head) {
        ListNode *p=NULL,*tp,*tf,*n;
        while(head)
        {
            n=head->next;
            head->next=p;
            tp=head;
            tf=n;
            while(tp && tf && tp->val==tf->val)
            {
                tp=tp->next;
                tf=tf->next;
            }
            if(!tp && !tf)
                return true;
            tp=head->next;
            tf=n;
            while(tp && tf && tp->val==tf->val)
            {
                tp=tp->next;
                tf=tf->next;
            }
            if(!tp && !tf)
                return true;
            p=head;
            head=n;
        }
        return false;
    }
};


//link:https://leetcode.com/problems/palindrome-linked-list/
