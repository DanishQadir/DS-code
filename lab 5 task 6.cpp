#include <iostream>
using namespace std;

int max_element(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    } else {
        int max = max_element(arr, n - 1);
        if (arr[n - 1] > max) {
            return arr[n - 1];
        } else {
            return max;
        }
    }
}

int main() {
    int arr[] = {3, 5, 1, 8, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = max_element(arr, n);
    cout << "The maximum element in the array is: " << max << endl;
    return 0;
}

