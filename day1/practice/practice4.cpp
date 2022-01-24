//#include<bits/stdc++.h>
//using namespace std;
    
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL || l2==NULL)
        {
            if(l1)
                return l1;
            else
                return l2;
        }
        if(l2->val<l1->val)
            swap(l1,l2);
        ListNode *p1=NULL,*head=NULL;
        head=l1;
        while(l1 && l2)
        {
            while(l1 && l1->val<=l2->val)
            {
                p1=l1;
                l1=l1->next;    
            }
            p1->next=l2;
            swap(l1,l2);   
        }
        return head;
    }
    
///problem:https://leetcode.com/problems/merge-two-sorted-lists/
