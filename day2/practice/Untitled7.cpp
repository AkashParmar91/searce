class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        string t,t1,ans;
        int j;
        for(int i=0;i<s.length();i++)
        {
            while(i<s.length() && s[i]>='a' && s[i]<='z')
            {
                t+=s[i];
                i++;
            }
            if(t.length()>0)
            st.push(t);
            t.clear();
            while(i<s.length() && s[i]>='0' && s[i]<='9')
            {
                t+=s[i];
                i++;
            }
           
            if(t.length()>0)
            st.push(t);
            t.clear();
            if(i<s.length() && s[i]==']')
            {
                while(!st.empty() && st.top()[0]>='a' && st.top()[0]<='z')
                t=st.top()+t,st.pop();
                j=stoi(st.top());
                st.pop();
                t1.clear();
                for(int k=1;k<=j;k++)
                {
                    t1+=t;
                }
                st.push(t1);
            }
            t.clear();
        }
        while(!st.empty())
        {
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};

//link:https://leetcode.com/problems/decode-string/
