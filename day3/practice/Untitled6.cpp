class Solution {
public:
    int compareVersion(string a, string b) {
        int i=0,j=0,n=a.length(),m=b.length(),cnt1,cnt2;
        while(i<n && j<m)
        {
            cnt1=0,cnt2=0;
            while(i<n && a[i]=='0')
                i++;
            while(i<n && a[i]!='.')
            {
                cnt1=cnt1*10+(a[i]-'0');
                i++;
            }
            while(j<m && b[j]=='0')
                j++;
            while(j<m && b[j]!='.')
            {
                cnt2=cnt2*10+(b[j]-'0');
                j++;
            }
            if(cnt1>cnt2)
                return 1;
            else if(cnt1<cnt2)
                return -1;
            i++;
            j++;
        }
        while(i<n)
        {
            if(a[i]!='0' && a[i]!='.')
                return 1;
            i++;
        }
        while(j<m)
        {
            if(b[j]!='0' && b[j]!='.')
                return -1;
            j++;
        }
        return 0;
    }
};


//link:https://leetcode.com/problems/compare-version-numbers/
