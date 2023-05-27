#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    cout << "The sum of the array elements is " << sum << " and the elements in reverse order are: ";
    for (int i = size-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
