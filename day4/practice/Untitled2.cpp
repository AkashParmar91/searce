class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int t) {
        set<vector<int>> b;
        vector<int> a1(4);
        map<int,vector<int>> m;
        int s1,s2;
        for(int i=0;i<a.size();i++)
        {
            for(int j=i+1;j<a.size();j++)
            {
                m[a[i]+a[j]].push_back(i);
                m[a[i]+a[j]].push_back(j);
            }
        }
        map<int,vector<int>> :: iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            s1=it->first;
            s2=t-s1;
            if(m[s2].size()>0 && m[s1].size()>0)
            {

                for(int i=1;i<m[s1].size();i+=2)
                {
                    a1[0]=m[s1][i];
                    a1[1]=m[s1][i-1];
                    for(int j=1;j<m[s2].size();j+=2)
                    {
                        a1[2]=m[s2][j];
                        a1[3]=m[s2][j-1];
                        if(a1[0]!=a1[1] && a1[0]!=a1[2] && a1[0]!=a1[3] && a1[1]!=a1[2] && a1[1]!=a1[3] && a1[2]!=a1[3])
                        {
                            //cout<<"YES1"<<endl;
                            vector<int> c(4,0);
                            c[0]=a[a1[0]];
                            c[1]=a[a1[1]];
                            c[2]=a[a1[2]];
                            c[3]=a[a1[3]];
                            sort(c.begin(),c.end());
                            b.insert(c);
                        }
                    }
                }
            }
            m[s1].clear();
            m[s2].clear();
        }
        set<vector<int>> :: iterator itr;
        vector<vector<int>> ans(b.size());
        int l=0;
        for(itr=b.begin();itr!=b.end();itr++,l++)
            ans[l]=*itr;
        return ans;
    }
};

//link:https://leetcode.com/problems/4sum/
