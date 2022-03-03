class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        nums.sort()
        sum=0
        for i in range(0,len(nums),2):
            sum+=nums[i];
        return sum
    #link:https://leetcode.com/problems/array-partition-i/jashsjdbjhdjashajsjahj
