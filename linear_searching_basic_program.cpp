#include<iostream>
using namespace std;

void linear_search(int array[],int size_of_array,int searching_item)
{
	int flag=1,i;// flag is used for to indicate that searching is successfull or not
	for(i=0;i<size_of_array;i++)
	{
		if(array[i]==searching_item)
		{
			flag=0;
			cout<<" searching is successfull :"<<endl;
			
		}
	}
	if(flag==1)
	{
		cout<<"\n Searching is not successfull :"<<endl;
	}
}
int main()
{
	int size;
	cout<<"Enter the size of array :"<<endl;
	cin>>size;
	int array[size];
	cout<<"\n Enter the elements of the array: "<<endl;
	for(int k=0;k<size;k++)
	cin>>array[k];
	int item;
	cout<<"\n Enter the element that you want to search "<<endl;
	cin>>item;
	linear_search(array,size,item);
}
