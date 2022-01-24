#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		int value;
		node* next;
		node(int temp=0)
		{
			value=temp;
			next=NULL;
		}
};


void printLinkedList(node * head)
{
	while(head)
	{
		cout<<head->value<<" "; // print value
		head=head->next;   // go to next node
	}
	cout<<endl;
}

int main()
{
	int size,value;
	cout<<"enter linkedlists size:"<<endl;
	cin>>size;
	node * head=NULL,*prev=NULL,*curr=NULL;
	if(size)
	{
		cout<<"enter values:"<<endl;
		cin>>value;
		head=prev=new node(value); // make 1st node as head
		for(int i=1;i<size;i++)
		{
			cin>>value;
			curr=new node(value); // create new node & assign its address to curr pointer
			prev->next=curr;   // make link between previous node & curr node by giving address of curr node to previous node
			prev=curr;    // go to the curr node by giving address of current node
		}
	}
	printLinkedList(head);	// call printLinkedList function & passed head address of singlyLinkedList to the function
}
