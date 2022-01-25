/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* t=head,*t1=head;
        int mi=INT_MAX;
        while(t1)
        {
            t=t->next;
            t1=t1->next;
            if(t1)
            t1=t1->next;
            if(t1 && t==t1)
            {
                while(head!=t)
                {
                    head=head->next;
                    t=t->next;
                }
                return head;
            }
        }
        return NULL;
    } 
};

//link:https://leetcode.com/problems/linked-list-cycle-ii/
