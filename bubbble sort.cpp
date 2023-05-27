#include<iostream>
using namespace std;
int main()
{
	int i,j,size,tem;
	cout<<"Enter the size of array :"<<endl;
	cin>>size;
	int array[size];
	cout<<"Enter the elements of array :"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>array[i];
	
		}
		cout<<"Unsorted Array elements are :"<<endl;
		for(i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	
		}
		cout<<"\nSorted Array elements are :"<<endl;
		for(i=0;i<size;i++)
		{
			for(j=i+1;j<size;j++)
			{
				if(array[i]>array[j])
				{
				 tem=array[i];
				 array[i]=array[j];
				 array[j]=tem;
				}
			
			}
				cout<<array[i]<<" ";
		}
		
	}
	
	

