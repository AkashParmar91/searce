class Solution:
    def minCost(self, s: str, a: List[int]) -> int:
        c=s[0];
        mx=a[0]
        sum=a[0];
        for i in range(1,len(s)):
            sum+=a[i];
            if(s[i]==c):
                mx=max(mx,a[i]);
            else:
                sum-=mx;
                mx=a[i];
                c=s[i];
        sum-=mx;
        return sum;
#link:https://leetcode.com/problems/minimum-time-to-make-rope-colorful/