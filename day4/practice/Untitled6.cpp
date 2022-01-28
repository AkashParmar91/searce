class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n=a.size(),k;
        int i=n-2;
        while(i>=0 && a[i]>=a[i+1])
        {
            i--;
        }
        if(i==-1)
        {
            reverse(a.begin(),a.end());
            return ;
        }
        reverse(a.begin()+i+1,a.end());
        k=upper_bound(a.begin()+i+1,a.end(),a[i])-a.begin();
        swap(a[i],a[k]);
    }
};


//link:https://leetcode.com/problems/next-permutation/
