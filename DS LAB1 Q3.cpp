#include<iostream>
using namespace std;

int main()
{
    int n, *ptr, fact=1;
    cout << "Enter a number: ";
    cin >> n;

    ptr = &n;

    for(int i=1; i<=*ptr; i++)
    {
        fact *= i;
    }

    cout << "Factorial of the number is: " << fact;
    cout << endl;
    return 0;
}
