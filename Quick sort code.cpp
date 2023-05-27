#include<iostream>
using namespace std;

void swap(int arr[], int start, int end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}

int partition_function_for_QuickSort(int arr[], int left, int right) {
    int pivot_element = arr[left];
    int start = left;
    int end = right;
    while (start < end) {
        while (arr[start] <= pivot_element ) {
            start++;
        }
        while (arr[end] > pivot_element) {
            end--;
        }
        if (start < end) {
            swap(arr, start, end);
        }
    }
    swap(arr, left, end);
    return end;
}

void Quick_sort_function(int arr[], int left, int right) {
    if (left < right) {
        int location = partition_function_for_QuickSort(arr, left, right);
        Quick_sort_function(arr, left, location - 1);
        Quick_sort_function(arr, location + 1, right);
    }
}

int main() {
    int arr[] = {33, 54, 8, 42, 3, 17, 9};
    Quick_sort_function(arr, 0, 6);
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

