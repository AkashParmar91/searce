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
	ll t,mx,n,k,g,l,t1,t2;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>l;
		vector<ll> p(2*k),a(n);
		vector<vector<ll> > dp(n,vector<ll>(2*k));
		vector<vector<bool> > ch(n,vector<bool>(2*k,false));
		for(int i=0;i<=k;i++)
		{
			p[i]=i;
		}
		for(int i=k+1;i<2*k;i++)
		{
			p[i]=2*k-i;
		}
		
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<2*k;j++)
			{
				dp[i][j]=a[i]+p[j];		
			}
		}
		for(int j=0;j<2*k;j++)
		{
			if(dp[0][j]<=l)
			ch[0][j]=true;
		}
		
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<2*k;j++)
			{
				if(ch[i][j]==true)
				{
					if(dp[i+1][(j+1)%(2*k)]<=l)
					{
						//ch[i+1][(j+1)%2*k]=true;
						t1=j+1;
						while(dp[i+1][t1%(2*k)]<=l && !ch[i+1][t1%(2*k)])
						{
							ch[i+1][t1%(2*k)]=true;
							t1++;
						}	
					}
				}
			}
		}
		/*for(int i=0;i<n;i++)
		{
			for(int j=0;j<2*k;j++)
			{
				g=0;
				if(ch[i][j])
				g++;
				cout<<g<<" ";
			}
			cout<<endl;
		}*/
		bool f=false;;
		for(int j=0;j<2*k;j++)
		{
			if(ch[n-1][j])
			{
				f=true;
				break;
			}
		}
		if(f)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}


//link: https://codeforces.com/contest/1384/problem/B1

