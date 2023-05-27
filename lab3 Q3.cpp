#include<iostream>
using namespace std;
int main()
{
	int size,i,j;
	cout<<"Enter the size of array :"<<endl;
	cin>>size;
	int array[size];
	cout<<"Enter the elements of array :"<<endl;
	for(i=0;i<size;i++)
	cin>>array[i];
	cout<<"Unsorted array elements are :"<<endl;
	for(i=0;i<size;i++)
	cout<<array[i]<<" ";
	cout<<"\nSorted array elements are :"<<endl;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(array[j]<array[i]&&j>0)
			{
				int temp=array[j];
				array[j]=array[i];
				array[i]=temp;
			}
		///	cout<<array[i]<<" ";
		}
	//	cout<<endl;
		cout<<array[i]<<" ";
	}
	
}
