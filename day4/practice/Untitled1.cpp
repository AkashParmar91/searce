class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        sort(a.begin(),a.end());
        int l,h,twosum,k,n=a.size();
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
                l=i+1,h=n-1;
                while(l<h)
                {
                    if(a[i]+a[l]+a[h]<0)
                        l++;
                    else if(a[i]+a[l]+a[h]>0)
                        h--;
                    else
                    {
                        ans.push_back({a[i],a[l],a[h]});
                        k=l;
                        while(k<n && a[k]==a[l]) k++;
                        l=k;
                        k=h;
                        while(k>l && a[k]==a[h]) k--;
                        h=k;
                    }
                }
            k=i;
            while(k<n && a[k]==a[i]) k++;
            i=k-1;
        }
        return ans;
    }
};


//link:https://leetcode.com/problems/3sum/
