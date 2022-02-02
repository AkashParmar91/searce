class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        arr.sort()
        mi=9999999
        ans=[];
        for i in range(1,len(arr)):
            if(arr[i]-arr[i-1]<mi):
                mi=arr[i]-arr[i-1]
                ans.clear()
                ans.append([arr[i-1],arr[i]])
            elif (arr[i]-arr[i-1]==mi):
                ans.append([arr[i-1],arr[i]])
        return ans;

    #link:https://leetcode.com/problems/minimum-absolute-difference/