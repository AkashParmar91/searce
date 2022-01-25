class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sa) {
        int c0=0,c1=0;
        for(int i=0;i<st.size();i++)
        {
            if(st[i]==0)
                c0++;
            else
                c1++;
        }
        for(int i=0;i<sa.size();i++)
        {
            if(sa[i]==1 && c1)
                c1--;
            else if(sa[i]==0 && c0)
                c0--;
            else
                return sa.size()-i;
        }
        return 0;
    }
};

//link:https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/
