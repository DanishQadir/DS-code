#include<iostream>
#include<new>
using namespace std;
int main()
{
	int row,col;
	cout<<"Enter the number of rows \n and coloumns of the array :"<<endl;
	cin>>row;
	cin>>col;
	int** array= new  int* [row];
	for(int i=0;i<row;i++)
	{
		array[i]=new int[col];
		
	}
	for(int i=0;i<row;i++)
	{
		for(int k=0;k<col;k++)
		{
			cout<<"Enter the element of row" <<i<<" and col "<<k;
			cin>>array[i][k];
		}
	}
	cout<<"Array elements are :"<<endl;
		for(int i=0;i<row;i++)
	{
		for(int k=0;k<col;k++)
		{
		//	cout<<"Enter the element of row" <<i<<" and col "<<j;
			cout<<array[i][k]<<" ";
		}
		cout<<endl;
		
	}
	for(int i=0;i<row;i++)
	{
	delete[] array[i];
		}
	delete[] array;
	return 0;
}
