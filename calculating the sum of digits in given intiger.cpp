
#include<iostream>
#include<string>
using namespace std;

int function(int n) {
    if (n == 0)
        return n;
    else
        return n % 10 + function(n / 10);
}

int main() {
    int number;
    string s;
    cout << "Enter any integer: ";
    cin >> number;
    cout << "\nSum is " << function(number) << endl;
   
}

