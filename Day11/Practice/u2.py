class Solution:
    def countVowelStrings(self, n: int) -> int:
        if(n==0):
            return 0;
        a=[5,4,3,2,1];
        for i in range(2,n+1):
            for j in range(3,-1,-1):
                a[j]+=a[j+1];
        return a[0];


#link: https://leetcode.com/problems/count-sorted-vowel-strings/