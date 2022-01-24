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
    ll t,n,r,p,k,t1,t2,t3,cnt,mx,sum,mi,mi1;
    //cin>>t;
    t=1;
	while(t--)
    {
    	cin>>n;
    	vector<ll> o,e;
    	for(int i=0;i<n;i++)
    	{
    		cin>>t1;
    		if(t1%2)
    		o.push_back(t1);
    		else
    		e.push_back(t1);
		}
		sort(o.begin(),o.end());
		sort(e.begin(),e.end());
		unordered_map<ll,bool> m,m1;
		cnt=0;
		for(int i=0;i<o.size();i++)
		{
			k=log2(o[i]);
			t1=pow(2,k+1);
			t1-=o[i];
			if(m1.find(t1)!=m1.end())
			{
				m[t1]=true;
				m[o[i]]=true;
			}
			m1[o[i]]=true;			
		}
		for(int i=0;i<o.size();i++)
		{
			if(!m[o[i]])
			cnt++;
		}
		m.clear();
		m1.clear();
		for(int i=0;i<e.size();i++)
		{
			k=log2(e[i]);
			t1=pow(2,k+1);
			t1-=e[i];
			if(m1.find(t1)!=m1.end())
			{
				m[t1]=true;
				m[e[i]]=true;
			}
			m1[e[i]]=true;			
		}
		for(int i=0;i<e.size();i++)
		{
			if(!m[e[i]])
			cnt++;
		}
		cout<<cnt<<endl;
	}
}

https://codeforces.com/contest/1005/problem/C
