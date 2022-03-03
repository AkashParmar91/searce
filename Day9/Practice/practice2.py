# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        if not l1 and not l2:
            return None
        if not l1 and l2:
            return l2
        b = l2.val if l2 else 0
        l1.val += b
        pivot = int((l1.val) / 10)
        l1.val %= 10
        if pivot > 0:
            if not l1.next:
                l1.next = ListNode(pivot)
            else:
                l1.next.val += pivot
        if l2 and l2.next:
            l1.next = Solution().addTwoNumbers(l1.next, l2.next)
        else:
            l1.next = Solution().addTwoNumbers(l1.next, None)
        return l1


#link:https://leetcode.com/problems/add-two-numbers/ajshjhajhsjh
