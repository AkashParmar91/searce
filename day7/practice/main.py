class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i, k1 in enumerate(nums):
            for j, k2 in enumerate(nums):
                if k1 + k2 == target and i != j:
                    return [i, j]
        return []

        # link: https: // leetcode.com / problems / two - sum /