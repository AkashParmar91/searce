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


class node{
	public:
		int value;
		int mx;
		node * next;
		node(int value)
		{
			this->value=value;
			next=NULL;
		}
};

class new_stack{
	public:
		node * head,*curr;
		stack()
		{
			head=NULL;
		}
		void push(int value)
		{
			curr=new node(value);
			curr->next=head;
			if(head)     // if head is not null than compare max value till head and new value
			curr->mx=max(curr->value,head->mx);
			else
			curr->mx=value;
			head=curr;
		}
		void pop()
		{
			if(head) // if head is not null than remove top value
			{
				curr=head;
				head=head->next;
				delete(curr);
				cout<<"last element pop succefully"<<endl;
			}
			else
			cout<<"stack is already empty"<<endl;
		}
		void printmaxElement()
		{
			if(head) 
			cout<<head->mx<<endl;
			else
			cout<<"stack is an empty"<<endl;
		}
};

int main()
{
	int n,temp;
	new_stack s;
	cin>>n;
	while(n--)
	{
		cout<<"for push press 1 \nfor pop press 2 \nfor print max element in stack press 3"<<endl;
		cin>>temp;
		if(temp==1)
		{
			cin>>temp;
			s.push(temp);
		}
		else if(temp==2)
		s.pop();
		else if(temp==3)
		s.printmaxElement();
		else
		cout<<"Reenter value between 1 to 3"<<endl,n++;
	}
}
