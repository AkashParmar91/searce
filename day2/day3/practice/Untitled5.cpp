class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& a) {
        map<vector<int>,vector<string>> m;
        
        for(int i=0;i<a.size();i++)
        {
            vector<int> b(26,0);
            for(int j=0;j<a[i].length();j++)
            {
                b[a[i][j]-'a']++;
            }
            m[b].push_back(a[i]);
        }
        vector<vector<string>> ans;
        map<vector<int>,vector<string>> :: iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            ans.push_back(it->second);
        }
        return ans;
    }
};

//link:https://leetcode.com/problems/group-anagrams/
