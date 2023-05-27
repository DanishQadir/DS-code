#include<iostream>
#include<new>
using namespace std;
int main()
{
	int row,col;
	cout<<"Enter the number row :"<<endl;
	cin>>row;
	cout<<"Enter the number of coloumns :"<<endl;
	cin>>col;
	//allocate a d2D array dynamicallly 
	int** array_pointer= new int * [row];
	for(int i=0;i<row;i++)
	{
		array_pointer[i]=new int [col];
	}
	//fill the elements in 2D arra
	cout<<"Enter the elements of the array :"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>array_pointer[i][j];
		}
	}
	//now print the array 
		for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		cout<<array_pointer[i][j]<<" ";
		}
		cout<<endl;
		
	}// now deallocate array
	for(int i=0;i<row;i++)
	{
		delete[] array_pointer[i];
    }
	delete[] array_pointer;
	return 0;
}
