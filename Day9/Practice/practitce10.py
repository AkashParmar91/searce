class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        mx=0
        for i in candies:
            mx=max(mx,i)
        ans=[]
        for i in candies:
            if i+extraCandies>=mx:
                ans.append(True)
            else:
                ans.append(False)
        return ans
    #link:https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/