#include<iostream>
using namespace std;

void Merg_sort(int array[] , int left , int right , int mid)
{
	 
	 int size_of_array1= mid-left+1;
	 int size_of_array2= right-mid;
	 
     int* temp_array1 = new int[size_of_array1];
	 int* temp_array2 = new int[size_of_array2];
	 
	 
	 for(int i=0; i< size_of_array1 ; i++)
	 {
	 	temp_array1[i]=array[left+ i];
	 	
	 }
	  for(int i=0; i< size_of_array2 ; i++)
	 {
	 	temp_array2[i]=array[mid + i+1 ];
	 	
	 }
	 int i=0;
	 int j=0; 
	 int k=left;
	 
	 while( i< size_of_array1 && j< size_of_array2)
	 {
	 	if(temp_array1[i]< temp_array2[j])
	 	{
	 		array[k]=temp_array1[i];
	 		k++;
	 		i++;
		 
		 }
		 else
		 {
		 	array[k]=temp_array2[j];
	 		k++;
	 		j++;
		 }
		 
		 
	 }
	 while (i< size_of_array1)
	 {
	 	array[k]=temp_array1[i];
	 		k++;
	 		i++;
	 }
	 while(j< size_of_array2)
	 {
	 	array[k]=temp_array2[j];
	 		k++;
	 		j++;
	 }
}
    void mergsort(int array[],int left, int right)
    {
    	if(left<right)
    	{
	
      int mid=(left+right)/2;
    	mergsort(array,left,mid);
    	mergsort(array,mid+1,right);
    	
    	Merg_sort(array,left,right,mid);
      }
	}

int main()
{
    int size;
    cout<<"Enter the size of array :"<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter array elements :"<<endl;
    for(int i=0 ;i<size ;i++)
    {
        cin>>array[i];
    }

    mergsort(array,0,size);

    // Remove duplicates
    int unique_size = size;
    for (int i = 1; i < unique_size; i++) {
        if (array[i] == array[i-1]) {
            for (int j = i; j < unique_size-1; j++) {
                array[j] = array[j+1];
            }
            unique_size--;
            i--;
        }
    }

    cout << "Array with duplicates removed: ";
    for(int i=0; i<unique_size; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}

