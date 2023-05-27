#include <bits/stdc++.h>
#define row 3
#define column 4
using namespace std;
void spiralOrder(int X, int Y, int array[row][column])
{
    int i, k = 0, l = 0;
while (k < m && l < n) 
{
for (i = l; i < n; ++i) 
{
cout << arr[k][i] << " ";
}
k++;
for (i = k; i < m; ++i) 
{
cout << arr[i][n - 1] << " ";
}
X--;
if (k < Y) {
for (i = X - 1; i >= l; --i) 
{
cout << array[Y - 1][i] << " ";
}
Y--;
}
if (l < X) 
{
for (i = Y - 1; i >= k; --i) 
{
cout << array[i][l] << " ";
}
l++;
}
}
}
int main()
{
int array[row][column] = { { 1, 2, 3, 4 },
                           { 5, 6, 7, 8 },
                            { 9, 10, 11, 12 } };
spiralOrder(row, column, arr);
return 0;
}
