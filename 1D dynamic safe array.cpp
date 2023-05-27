#include<iostream>
using namespace std;
int main()
{
	int size;
	int* ptr;
	cout<<"Enter the number of items you need :"<<endl;
	cin>>size;
	int *ptr=new int[size];
	cout<<"Enter the name of item to be stored on the array :"<<endl;
	for(int i=0; i<size; i++)
	cin>>ptr[i];
	cout<<"array contains following items :"<<endl;
		for(int i=0; i<size; i++)
	cout<<ptr[i];
	
}
