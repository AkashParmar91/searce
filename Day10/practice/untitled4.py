
def heapify(a : List[int] ,k : int ,n : int): j=k;
    if(2*k +1 < n an d a[2*k+1] < a [ j] ) :
        j=2*k+ 1 ;
    if(2*k+ 2< n an d a[2*k+2]<a [ j ] ):
        j=2*k+2; a[k],a[j]=a[j],a[ k];
    if (k!=j): heapify(a,j,n);

class Solution :


def sortArray(self, nums: List[int]) -> List[int]:
        n=len(nums);
        for i in range(floor(n/2)-1,-1,-1): heapify(nums,i ,n ) ;
        ans=[]
        for i in r an ge(n-1,-1,-1):
            nums[i],nums[0]= n um s[0 ],nums[i]
            ans .append ( nums[i]) ;
            heapify(nums,0,i);
        return ans;


#link:https://leetcode.com/problems/sort-an-array/