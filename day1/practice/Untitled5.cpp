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
    ListNode* reverseKGroup(ListNode* head, int k) {
      ListNode* temp=head,*n,*starting,*p,*sp=NULL;
        int cnt=0,turn;
        while(temp)
        {
            temp=temp->next;
            cnt++;
        }
        turn=cnt/k;
        temp=head;
        while(turn--)
        {
            cnt=0;
            starting=temp;
            p=NULL;
            while(cnt<k)
            {
                n=temp->next;
                temp->next=p;
                p=temp;
                temp=n;
                cnt++;
            }
            if(sp)
                sp->next=p;
            else
                head=p;
            starting->next=temp;
            sp=starting;
        }
        return head;
    }
};

//problem link:https://leetcode.com/problems/reverse-nodes-in-k-group/
