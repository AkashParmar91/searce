class Solution:
    def trap(self, a: List[int]) -> int:
        dp = [0] * len(a)
        mx = 0
        for i in range(len(a) - 1, -1, -1):
            dp[i] = mx;
            mx = max(mx, a[i]);
        mx = 0
        cnt = 0
        for i in range(len(a)):
            cnt += max(0, min(dp[i], mx) - a[i])
            mx = max(mx, a[i])
        return cnt

    #link:https://leetcode.com/problems/trapping-rain-water/