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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode * temp=head,*p,*nhead;
        if(!head)
            return head;
        int cnt=0,t1;
        while(temp)
        {
            cnt++;
            p=temp;
            temp=temp->next;
        }
        k%=cnt;
        if(k==0)
            return head;
        p->next=head;
        t1=cnt-k;
        temp=head;
        while(t1--)
        {
            p=temp;
            temp=temp->next;
        }
        p->next=NULL;
        return temp;
    }
};

//link:https://leetcode.com/problems/rotate-list/
