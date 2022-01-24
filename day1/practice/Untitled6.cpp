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
	ll t,n,cnt;
	cin>>t;
	while(t--)
	{
		cin>>n;
		char a[2][n];
		cnt=0;
		for(int i=0;i<n;i++)
		cin>>a[0][i];
		for(int i=0;i<n;i++)
		cin>>a[1][i];
		if(a[1][n-1]=='1')
		{
			if(a[0][n-1]=='0')
			cnt++;
			else if(a[0][n-2]=='1')
			a[0][n-2]='2',cnt++;
		}
		if(a[1][0]=='1')
		{
			if(a[0][0]=='0')
			cnt++;
			else if(a[0][1]=='1')
			a[0][1]='2',cnt++;
		}
		for(int i=1;i<n-1;i++)
		{
			if(a[1][i]=='1')
			{
				if(a[0][i]=='0')
				{
					cnt++;
				}
				else if(a[0][i-1]=='1')
				{
					cnt++;
				}
				else if(a[0][i+1]=='1')
				{
					cnt++;
					a[0][i+1]='2';
				}
			}
		}
		cout<<cnt<<endl;
	}
}


//link:https://codeforces.com/contest/1549/problem/B
