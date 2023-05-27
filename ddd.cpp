#include<iostream>
#include<string>
using namespace std;

void Merge_sort(int array[], int left, int right, int mid)
{
	 int size_of_array1 = mid - left + 1;
	 int size_of_array2 = right - mid;
	 
	 int* temp_array1 = new int[size_of_array1];
	 int* temp_array2 = new int[size_of_array2];
	 
	 for(int i = 0; i < size_of_array1; i++)
	 {
        temp_array1[i] = array[left + i];
	 }
	 for(int i = 0 ; i < size_of_array2; i++)
	 {
	 	temp_array2[i] = array[mid + i + 1];
	 }
	 int i = 0, j = 0 , k = left;
	 while(i < size_of_array1 && j < size_of_array2)
	 {
	 	if(temp_array1[i] <= temp_array2[j])
	 	{
	 		array[k] = temp_array1[i];
	 		k++; i++;
	 	}
		else
		{
			array[k] = temp_array2[j];
			k++; j++;
		}
	 }
	 while(i < size_of_array1)
	 {
	 	array[k] = temp_array1[i];
	 	k++; i++;
	 }
	 while(j < size_of_array2)
	 {
	 	array[k] = temp_array2[j];
	 	k++; j++;
	 }
	
}

void MergeSort(int array[], int left, int right )
{
	if(left < right)
	{
		int mid = (left + right) / 2;
		MergeSort(array, left, mid);
		MergeSort(array, mid + 1, right);
	 	Merge_sort(array, left, right, mid);
	}
}

int main()
{
	int arr[] = {2, 3, 5, 91, 51, 7,11};
   	MergeSort(arr, 0, 6);
	cout << "==>";
	for(int i = 0; i < 7; i++)
	{
		cout << arr[i] << " ";	
	}
	return 0;
}

