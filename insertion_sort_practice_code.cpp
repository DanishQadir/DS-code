#include<iostream>
using namespace std;

void insertionsort(int array[] ,int size )
{
	for(int i=1; i<size ; i++)
	{
		int arr=array[i];
		int j=i-1;
		while(array[j]>arr&&j>=0)
		{
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=arr;
	}
}
int main()
{
	int i,n;
	cout<<"Enter the size of array :"<<endl;
	cin>>n;//n=size
	int array[n];
	cout<<"\n Enter the elements of array :"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	cout<<"\n Unsorted array elements are :"<<endl;
		for(i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	
	cout<<"\n Sorted array elements are :"<<endl;
	insertionsort(array,n);
	for(i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	
}
