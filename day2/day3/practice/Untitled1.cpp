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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0,sum;
        ListNode *head=l1,*p;
        while(l1 && l2)
        {
            sum=l1->val+l2->val+carry;
            carry=sum/10;
            l1->val=sum%10;
            p=l1;
            l1=l1->next;
            l2=l2->next;
        }
        while(carry)
        {
            if(!l1)
            {
                l1=new ListNode(0);
                p->next=l1;
            }
            l1->val+=carry;
            if(l2)
                l1->val+=l2->val,l2=l2->next;
            carry=l1->val/10;
            l1->val%=10;
            p=l1;
            l1=l1->next;
        }
        if(l2)
            p->next=l2;
        return head;
    }
};


//link:https://leetcode.com/problems/add-two-numbers/
