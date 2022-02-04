class Solution:
    def rob(self, a: List[int]) -> int:
        n=len(a)
        dp=[0]*n
        mx=a[n-1]
        dp[n-1]=a[n-1];
        if(n-2>=0):
            dp[n-2]=a[n-2]
            dp[n-2]=max(mx,dp[n-2])
            mx=max(mx,dp[n-2]);
        for i in range(n-3,-1,-1):
            dp[i]=max(mx,a[i]+dp[i+2]);
            mx=max(mx,dp[i]);
        return mx;
#link:https://leetcode.com/problems/house-robber/