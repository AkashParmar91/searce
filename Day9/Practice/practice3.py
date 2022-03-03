class Solution:
    def checkPowersOfThree(self, n: int) -> bool:
        if(n==0 or n==1):
            return True;
        if(n==2):
            return False;
        a=floor(math.log(n,2)/math.log(3,2))
        c=math.pow(3,a)
        if(n-c<c):
            return Solution().checkPowersOfThree(n-c)
        return False;

    #link:https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three/askjskjsnak
