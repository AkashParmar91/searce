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



int longestValidParentheses(string s) {
    
        int cnt=0,mx=0;
        stack<pair<char,int> > st;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='(' || s[i]=='{' || s[i]=='[')
		{
			st.push({s[i],cnt});
            cnt=0;
		}
		else if(!st.empty() && ((s[i]==')' && st.top().first=='(') || (s[i]=='}' && st.top().first=='{') || (s[i]==']' && st.top().first=='[')) )
		{
            cnt+=st.top().second+2;
            st.pop();
		}
		else
		{
            mx=max(mx,cnt);
			cnt=0;
		}
	}
        mx=max(mx,cnt);
        while(!st.empty())
        {
            mx=max(mx,st.top().second);
            st.pop();
        }
        return mx;
    }

int main()
{
	string s;
	cin>>s;
	cout<<longestValidParentheses(s)<<endl;	
}
