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

int main()
{
	fast;
	ll t,a,b,n,c0,c1,cnt0,cnt1,cnt;
	cin>>t;
	string s;
	char c;
	while(t--)
	{
		c0=c1=cnt0=cnt1=0;
		cin>>n>>a>>b;
		cin>>s;
		if(b>=0)
		{
			cout<<n*(a+b)<<endl;
		}
		else
		{
			c=s[0];
			cnt=0;
			for(int i=1;i<n;i++)
			{
				if(s[i]!=c)
				{
					cnt++;
					c=s[i];
				}
			}
			if(s[0]==s[n-1])
			{
				cout<<n*a+(cnt/2)*b+b<<endl;	
			}
			else
			{
				cout<<n*a+((cnt+1)/2)*b+b<<endl;	
			}	
		}
	}
}


//link:https://codeforces.com/contest/1550/problem/B
