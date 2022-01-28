class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()<=1)
            return s.length();
        int i=0,j=0,mx=1;
        unordered_map<char,int> a;
        while(j<s.length() && i<s.length())
        {
            a[s[j]]++;
            if(a[s[j]]>1)
            {
                mx=max(mx,j-i);
                while(a[s[j]]>1)
                {
                    a[s[i]]--;
                    i++;
                }
            }
                j++;
        }
        mx=max(mx,j-i);
        return mx;
    }
};



//link:https://leetcode.com/problems/longest-substring-without-repeating-characters/
