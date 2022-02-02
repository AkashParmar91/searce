class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        g.sort();
        s.sort();
        cnt = 0
        j = 0
        for i in s:
            if (j < len(g)):
                if (i >= g[j]):
                    cnt += 1
                    j += 1
            else:
                break
        return cnt


#link:https://leetcode.com/problems/assign-cookies/