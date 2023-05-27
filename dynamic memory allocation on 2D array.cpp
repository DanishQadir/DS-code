#include<iostream>
using namespace std;
int main()
{
	int row,col;
	cout<<"Enter rows :"<<endl;
	cin>>row;
	cout<<"Enter coloumns :"<<endl;
	cin>>col;
	int** array;
	array=new int * [row];
	for(int i=0; i<row; i++)
	{
		array[i] =new int [col];
	}
}
	void function(int** ptr ,int row, int col )
	{
		for(int i=0; i<row ; i++)
		{
			for(int j=0; j<col; j++)
			{
				cout<<"Enter the elements if array :"<<i<<j<<endl;
				cin>>ptr[i][j];
			}
		}
	}
	void display_function(int** ptr ,int row, int col )
	{
		for(int i=0; i<row ; i++)
		{
			for(int j=0; j<col; j++)
			{
				cout<<ptr[i][j]<<" ";
			}
			cout<<endl;
		}
	}

