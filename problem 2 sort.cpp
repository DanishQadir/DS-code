#include<iostream>
using namespace std;
int main()
{
	int i,j,size,temp;
	cout<<"Enter the size of array for selection sorting :"<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter the elements of array for selection sorting :"<<endl;
	for(i=0;i<size;i++)
	cin>>arr[i];
	cout <<"Your array elements are :"<<endl;
		for(i=0;i<size;i++)
	cout<<arr[i]<<" ";
	
	cout<<"\nselection sort in increasing order :"<<endl;
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
			
		}
		cout<<arr[i]<<" ";
	}
	
		
	cout<<"\nselection sort in decreasing  order :"<<endl;
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[j]>arr[i])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
			
		}
		cout<<arr[i]<<" ";
	}
}
