#include<iostream>
using namespace std;
void merg(int arr[],int l,int r,int mid)
{
	int n1=mid-l+1;
	int n2=r-mid;
	int tempArray[n1];
	int tempArray2[n2];
	for(int i=0;i<n1;i++)
	{
		tempArray[i]=arr[l+i];
	}
	for(int i=0;i<n2;i++)
	{
		tempArray2[i]=arr[mid+1+i];
	}
	//
	int i=0;
	int j=0;
	int k=l;
	while(i<n1&&j<n2)
	{
		if(tempArray[i]<tempArray2[j])
		{
			arr[k]=tempArray[i];
			k++;i++;
		}
		else
		{
	
		arr[k]=tempArray2[j];
		k++;
		j++;
		
		}
	}
	while(i<n1)
	{
			arr[k]=tempArray[i];
			k++;i++;
	}
	while(j<n2){
			arr[k]=tempArray2[j];
		k++;
		j++;
		
	}
}

void mergeSort(int arr[],int l,int r)
{
	if(l<r){
	
	int mid=(l+r)/2;
	mergeSort(arr,l,mid);
	mergeSort(arr, mid+1,r);
	
	merg(arr,l,r,mid);
}
}
int main()
{
	int arr[]={2,3,5,1,5,7};
	mergeSort(arr,0,5);
	cout<<"==>";
	for(int i=0;i<5;i++)
	{
	cout<<arr[i]<<" ";	
	}
}
