class Solution:
    def maxSatisfaction(self, a: List[int]) -> int:
        a.sort(reverse=True);
        extra=0
        cnt=0
        for i in a:
            if extra+i<0:
                return cnt;
            extra+=i;
            cnt+=extra
        return cnt;
#link:https://leetcode.com/problems/reducing-dishes/