#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int getMaxDigits(string arr[], int n) {
    int maxDigits = 0;
    for (int i = 0; i < n; i++) {
        int currDigits = arr[i].size();
        maxDigits = max(maxDigits, currDigits);
    }
    return maxDigits;
}
void countingSort(string arr[], int n, int exp) {
    int count[10] = {0};
    string output[n];
    for (int i = 0; i < n; i++) {
        int digit = (arr[i][exp] - '0');
        count[digit]++;
    }
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i][exp] - '0');
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}
void radixSort(string arr[], int n) {
    int maxDigits = getMaxDigits(arr, n);
    for (int i = maxDigits - 1; i >= 0; i--) {
        countingSort(arr, n, i);
    }
}

int main() {
    string arr[10] = {"1275", "0978", "9812", "3456", "8765", "1111", "9989", "2345", "7777", "54324"};
    radixSort(arr, 10);

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

