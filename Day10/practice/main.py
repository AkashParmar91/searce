class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        mx = prices[len(prices) - 1]
        sum = 0
        for i in range(len(prices) - 2, -1, -1):
            if mx > prices[i]:
                sum += mx - prices[i]
            mx = prices[i]
        return sum


#link:https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/