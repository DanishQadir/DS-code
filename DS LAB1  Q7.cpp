#include<iostream>
using namespace std;

int main()
{
	int row, col;
	cout<<"Enter the number of rows : ";
	cin>>row;
	cout<<"Enter the number of columns : ";
	cin>>col;
	int arr[row][col];

	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			cout<<"Enter element ["<<i<<"]["<<j<<"] : ";
			cin>>arr[i][j];
		}
	}
	cout<<"\nThe 2D array is : \n";
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
