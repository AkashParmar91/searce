#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
typedef long long int ll;
typedef long double ld;
using namespace std;
using namespace __gnu_pbds;
#define fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ordered_set tree<pair<ll,ll>,null_type, less<pair<ll,ll> >, rb_tree_tag, tree_order_statistics_node_update>
///order_set two command:order_of_key,find_by_order
ll MOD=1000000007;


bool isValidSerialization(string a) {
        if(a[0]=='#')
        {
             if(a.length()==1)
            return true;
            else
                return false;
        }
        if(a[0]==',')
            return false;
        
        stack<string> s;
        stack<pair<bool,bool> > s1;
            string t;
        int i=0;
            if(a[0]=='#')
            {
                t=a[i];
                i+=2;
            }
            else
            {
                while(i<a.length() && a[i]!=',')
                {
                    t+=a[i];
                    i++;
                }
                i++;
            }
        s.push(t);
        s1.push({false,false});
        while(i<a.length())
        {
            t.clear();
            if(a[i]=='#')
            {
                t=a[i];
                i+=2;
            }
            else
            {
                while(i<a.length() && a[i]!=',')
                {
                    t+=a[i];
                    i++;
                }
                i++;
            }
            if(t!="#")
            {
                if(!s.empty())
                {
                    if(!s1.top().first)
                        s1.top().first=true;
                    else if(!s1.top().second)
                        s1.top().second=true;
                    else 
                        return false;
                        //cout<<s.top()<<" tt "<<s1.top().first<<" "<<s1.top().second<<endl;
                }
                else 
                    return false;
                if(!s.empty() && s1.top().first && s1.top().second)
                {
                    s.pop();
                    s1.pop();
                }
                s.push(t);
                s1.push({false,false}); 
            }
            else
            {
                if(s.empty())
                    return false;
                else if(!s1.top().first)
                        s1.top().first=true;
                    else
                        s1.top().second=true;
            }
            /*if(!s.empty())
                cout<<s.top()<<" "<<s1.top().first<<" "<<s1.top().second<<endl;*/
            if(s1.top().first && s1.top().second)
            {
                s.pop();
                s1.pop();
            }
        }
        if(s.empty())
            return true;
        return false;
    }
    
    
int main()
{
	string s;
	cin>>s;
	if(isValidSerialization(s))
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
}

///problem:https://leetcode.com/problems/verify-preorder-serialization-of-a-binary-tree/
