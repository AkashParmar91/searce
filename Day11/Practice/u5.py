class Solution:
    def minPathSum(self, a: List[List[int]]) -> int:
        m=len(a)
        n=len(a[0])
        for i in range(1,n):
            a[0][i]+=a[0][i-1];
        for i in range(1,m):
            a[i][0]+=a[i-1][0]
        for i in range (1,m):
            for j in range (1,n):
                a[i][j]+=min(a[i-1][j],a[i][j-1])
        return a[m-1][n-1]
#link:https://leetcode.com/problems/minimum-path-sum/