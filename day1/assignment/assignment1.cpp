#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int size)
{
	int temp;
	for(int i=0;i<size/2;i++)
	{
		temp=arr[i];            /////////////////////
		arr[i]=arr[size-i-1];   ///// swwaping values in array//
		arr[size-i-1]=temp;     /////////////////////
	}
}

int main()
{
	int size;
	cout<<"Enter array size:"<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter values:"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"array is:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	reverseArray(arr,size);          // call the reverseArray function and pass two arguments:1. array address & 2. array size
	cout<<"reverseArray is:"<<endl;
		for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
