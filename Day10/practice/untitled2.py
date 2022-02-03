class Solution:
    def jump(self, a: List[int]) -> int:
        if(len(a)==1):
            return 0;
        mx1=a[0]
        mx2=0
        cnt=0
        for i in range(len(a)):
            if i>mx1:
                cnt+=1
                mx1=mx2
            mx2=max(mx2,i+a[i]);
        cnt+=1
        return cnt;
        
    #link:https://leetcode.com/problems/jump-game-ii/