#include<iostream>
using namespace std;
void mergTwoArray(int arr[],int left,int right ,int mid)
{
	int size_of_array1= (mid-left)+1;
    int	size_of_array2=right-mid;
    
    int temp_array1[size_of_array1];
    int temp_array2[size_of_array2];
    
    for(int i=0;i<size_of_array1;i++)
    {
    	temp_array1[i]=arr[left+i];
    	
	}
	for(int i=0;i<size_of_array2;i++)
	{
		temp_array2[i]=arr[mid+i+1];
	}
	int i=0,j=0,k=left;
	while(i<size_of_array1&&j<size_of_array2)
	{
	
		if(temp_array1[i]<temp_array2[j])
			{
				arr[k]=temp_array1[i];
				i++;
			}
			else{
			
			arr[k]=temp_array2[j];
			j++;
		}
		k++;
		}
	
	while(i<size_of_array1)
	{
		arr[k]=temp_array1[i];
		i++;k++;
		
	}
	while(j<size_of_array2)
	{
		arr[k]=temp_array2[j];
		j++;k++;
		
	}
}

void mergSort(int arr[],int left,int right)
{
	int mid=(left+right)/2;
	if(left<right){
	mergSort(arr,left,mid);
	
	mergSort(arr,mid+1,right);
	
	mergTwoArray(arr,left,right,mid); 
   }

}
int main()
{
	int arr[]={2,6,5,1,5,1};
	mergSort(arr,0,5);

	for(int i=0;i<6;i++)
	{
	cout<<arr[i]<<" ";	
	}
}
