#include <iostream>

using namespace std;

void populate_arr_2d(int** ptr, int rows, int cols)
{
    //first taking the number of rows i.e. the size of each column
    for(int i=0; i < rows; i++)
    {
        for(int j=0; j< cols; j++)
        {
            cout<<"Enter the elements at index ("<<i<<","<<j<<"):"<<endl;
            cin>>ptr[i][j];
        }
    }
}
void display_arr_2d(int** ptr, int rows, int cols)
{
    //first looping through the number of rows i.e. the size of each column
    for(int i=0; i < rows; i++)
    {
        for(int j=0; j< cols; j++)
        {
           // cout<<"Value at index ("<<i<<","<<j<<"):"<<endl;
            cout<<ptr[i][j]<<" ";
          
        }
          cout<<endl;
    }
}

int main()
{
     //taking two variables for our number of rows and columns from user
     int rows, cols;
     cout<< "Enter the number of rows"<<endl;
     cin>> rows;
     cout<<"Enter the number of columns" << endl;
     cin>> cols;
     //declaring the 2d pointer to hold the addresses of the arrays on each row
     int** arr_2d;
      //declaring the size of pointer array to hold the number of arrays at each row
     arr_2d= new int * [rows];
      //now defining the number of columns at each row i.e size of array at each row
     for(int i=0; i <rows; i++)
     {
          arr_2d[i]= new int[cols];//size of each row
     }
      //creation of ur 2d array is complete now
      
     populate_arr_2d(arr_2d, rows, cols);
     display_arr_2d(arr_2d, rows, cols);
     
     return 0;
}
