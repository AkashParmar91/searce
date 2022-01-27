class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int k=0;
        char c; 
        bool f=true;
        while(k<strs[0].size())
        {
            c=strs[0][k];
            for(int i=1;i<strs.size();i++)
            {
                if(k<strs[i].size())
                {
                    if(strs[i][k]!=c)
                    {
                        f=false;
                        break;
                    }
                }
                else
                    return strs[i];
            }
            if(!f)
                break;
            k++;
        }        
        if(k==0)
            return "";
        return strs[0].substr(0,k);
    }
};


//link:https://leetcode.com/problems/longest-common-prefix/
