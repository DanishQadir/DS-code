#include<iostream>
#include<string>
using namespace std;

void Merg_sort(int array[], int left , int right)
{
	int mid;
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
	 
	if(array[i]<array[j])
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
	 void MergSort(int array[],int left,int right )
	 {
	 	if(left<right)
	 	{
	 		int mid=(right+left)/2;
	 		MergSort(array,mid,left);
	 		MergSort(array,mid+1,right);
	 		
	 	
	 		Merg_sort(array,left,right);
		 }
	 }
	 int main()
	 {
	 		int arr[]={2,9,5,1,5,7};
   	Merg_sort(arr,0,6);
	cout<<"==>";
	for(int i=0;i<6;i++)
	{
	cout<<arr[i]<<" ";	
	}
	 }
