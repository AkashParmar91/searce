class Solution:
    def findComplement(self, num: int) -> int:
        i=ceil(math.log(num,2))
        if math.pow(2,i)==num:
            i+=1
        j=int(math.pow(2,i))-1
        return j^num

    #link:https://leetcode.com/problems/number-complement/