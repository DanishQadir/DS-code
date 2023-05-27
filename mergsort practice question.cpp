#include<iostream>
#include<string>
using namespace std;

void Merg_sort(int array[], int left , int right,int mid)
{

	 int size_of_array1= mid-left+1;
	 int size_of_array2=right-mid;
	// int i;
	 int temp_array1[size_of_array1];
	 int temp_array2[size_of_array2];
	 
	 for(int i=0; i<size_of_array1; i++)
	 {
        temp_array1[i]=array[left+i];
	 }
	 for(int i=0 ;i< size_of_array2; i++)
	 {
	 	temp_array2[i]=array[mid+i+1];
	 }
	 int i=0,j=0 ,k=left;
	 while(i<size_of_array1 && j<size_of_array2)
	 {
	 
	if(temp_array1[i]<temp_array2[j])
	 	{
	 		array[k]=temp_array1[i];
	 		k++;i++;
	 		
		 }
		 else{
		 array[k]=temp_array2[j];
		 k++;j++;
	}
}
	  while(i<size_of_array1)
	  {
	  	array[k]=temp_array1[i];
	  	k++;
	  	i++;
	  }
	  while(i<size_of_array2)
	  {
	  	array[k]=temp_array2[i];
	  	k++;
	  	j++;
	  }

	 
	 
	 }
	 void MergSort(int array[],int right,int left )
	 {
	 	if(left<right)
	 	{
	 		int mid=(right+left)/2;
	 		MergSort(array,mid-1,left);
	 		MergSort(array,right,mid);
	 		
	 	
	 		Merg_sort(array,right,left);
		 }
	 }
	 int main()
	 {
	 		int arr[]={2,9,4,1,5,7};
   	Merg_sort(arr,0,5);
	cout<<"==>";
	for(int i=0;i<6;i++)
	{
	cout<<arr[i]<<" ";	
	}
	 }
