bool comp(pair<int,string> a,pair<int,string> b)
{
    if(a.first<b.first)
        return false;
    else if(a.first==b.first)
    {
        if(a.second>b.second)
            return false;
    }
    return true;
}
class Solution {
public:
    vector<string> topKFrequent(vector<string>& a, int k) {
        vector<string> ans;
        vector<pair<int,string>> b;
        int n=a.size();
        map<string,int> m;
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
        }
        
        map<string,int> :: iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            b.push_back({it->second,it->first});
        }
        sort(b.begin(),b.end(),comp);
        int j=0;
        while(k)
        {
            ans.push_back(b[j].second);
            k--;
            j++;
        }
        return ans;
    }
};


//link:https://leetcode.com/problems/top-k-frequent-words/
