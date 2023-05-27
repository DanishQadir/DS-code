#include<iostream>
using namespace std;
void bublsort(int array[],int size)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		if(array[j]<array[i])
		{
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;
		}
	//	cout<<array[i]<<" ";
	}
}
void selectionsort(int arr[],int m)
{
	int temp;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		if(arr[i]<arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	//	cout<<array[i]<<" ";
	}
}
void insertiosort(int array[],int size )
{
	int temp;
	for(int i=0;i<size;i++)
	{
		temp=array[i];
		int j=i-1;
		while(array[j]>temp&&j>0)
		{
			array[j+1]=array[j];
			j--;//because it helps to keep unmied array elements from each other 
			array[j]=temp;
		}
		
	}
}
void shellsort(int ar[],int z)
{
	int temp;
	for(int gap=z/2;gap>0;gap/=2)
	{
		for(int i=gap;i<z;i++)
		{
		  temp=ar[i];
		  int j;
			for ( j = i; j >= gap && ar[j - gap] > temp; j -= gap){
			
			{
				ar[j]=ar[gap-j];
				
				
			}
			ar[j]=temp;
		}
	}
}
}

int main()
{
	int i,n;
	cout<<"sizze of array :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"\n array elements :"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
		cout<<"\n array elements :"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\nSorted array by using bubble sort method  :"<<endl;
	bublsort(arr ,n);
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
		cout<<"\nSorted array by using selection sort method  :"<<endl;
	bublsort(arr ,n);
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
		cout<<"\nSorted array by using insortion  sort method  :"<<endl;
	bublsort(arr ,n);
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
		cout<<"\nSorted array by using Shell sort method  :"<<endl;
	bublsort(arr ,n);
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
