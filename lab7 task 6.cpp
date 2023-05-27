#include <iostream>
using namespace std;
void radixSort(int arr[], int n) {
    int maxval = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxval) {
            maxval = arr[i];
        }
    }
    for (int exp = 1; maxval / exp > 0; exp *= 10) {
        int output[n];
        int count[10] = {0};
        for (int i = 0; i < n; i++) {
            count[(arr[i] / exp) % 10]++;
        }
        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }
        for (int i = n - 1; i >= 0; i--) {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }
        for (int i = 0; i < n; i++) {
            arr[i] = output[i];
        }
    }
}
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int temparray1[n1], temparray2[n2];
    for (int i = 0; i < n1; i++) {
        temparray1[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
     temparray2[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (temparray1[i] <= temparray2[j]) {
            arr[k] = temparray1[i];
            i++;
        } else {
            arr[k] = temparray2[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = temparray1[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = temparray2[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right- left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr1[10] = {4, 7, 1, 9, 5, 3, 8, 2, 10, 6};
    int arr2[10] = {11, 14, 12, 19, 15, 13, 18, 16, 20, 17};
        int arr3[20];
    for (int i = 0; i < 10; i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < 10; i++) {
        arr3[10 + i] = arr2[i];
    }
    radixSort(arr3, 20);
    for (int i = 0; i < 20; i++)
    {
    cout<<arr3[i]<<" ";
}
}


