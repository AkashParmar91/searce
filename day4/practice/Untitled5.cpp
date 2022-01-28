class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        int n=a.size(),cnt=0,k,l,t,t1;
        for(int i=cnt;i<n-cnt;i++,cnt++)
        {
            //cout<<cnt<<endl;
            for(int j=cnt;j<n-cnt-1;j++)
            {
                k=i;
                l=j;
                t=a[k][l];
                swap(k,l);
                //cout<<k<<","<<l<<" ";
                t1=a[k][n-l-1];
                a[k][n-l-1]=t;
                t=t1;
                l=n-l-1;
                
                swap(k,l);
                //cout<<k<<","<<l<<" ";
                t1=a[k][n-l-1];
                a[k][n-l-1]=t;
                t=t1;
                l=n-l-1;
                swap(k,l);
                //cout<<k<<","<<l<<" ";
                t1=a[k][n-l-1];
                a[k][n-l-1]=t;
                t=t1;
                l=n-l-1;
                
                swap(k,l);
                //cout<<k<<","<<l<<" "<<endl;
                
                a[k][n-l-1]=t;
            }
        }
    }
};

//link:https://leetcode.com/problems/rotate-image/
