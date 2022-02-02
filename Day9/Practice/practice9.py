class Solution:
    def maxScore(self, s: str) -> int:
        a=[0]*len(s)
        cnt=0
        mx=int(0)
        for i in range(len(s)):
            if s[i]=="0":
                cnt+=1
            a[i]=cnt
        cnt=0
        for i in range(len(a)-2,-1,-1):
            if(s[i+1]=="1"):
                cnt+=1
            mx=max(mx,cnt+a[i])
        return mx
#link:https://leetcode.com/problems/maximum-score-after-splitting-a-string/