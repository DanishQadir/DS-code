#include<iostream>
using namespace std;

bool issafe(int** arr,int x,int y,int n)
{
    if(x<n && y<n && arr[x][y==0])
    return false;
}
bool mat(int** arr,int x,int y,int n,int** sol)
{
    if(issafe(arr,x,y,n))
    {
      sol[x][y]=1;
    }
    if(issafe(arr,x+1,y,n))
    return true;
    if(issafe(arr,x,y+1,n))
    return true;
    if(issafe(arr,x-1,y,n))
    return true;
    if(issafe(arr,x,y-1,n))
    return true;
     
    //return false;

  sol[x][y]=0;
  return false;
}
  int main()
  {
      int size,count=0;
      cin>>size;
      int** arr=new  int*[size];
      for(int i=0;i<size;i++)
      {
          arr[i]=new int[size];
      }
      for(int i=0;i<size;i++)
      {
          for(int j=0;j<size;j++)
          {
              cin>>arr[i][j];
          }
      }
  
   for(int i=0;i<size;i++)
      {
          for(int j=0;j<size;j++)
          {
             if(arr[i][j]==1)
             count++;
           }
      }
      cout<<count;
  
   int** sol=new  int*[size];
  for(int i=0;i<size;i++)
      {
          sol[i]=new int[size];
          for(int j=0;j<size;j++){
          sol[i][j]=0;
      }
  }

     if(mat(arr,0,0,sol,mat){
       for(int i=0;i<size;i++)
      {
          for(int j=0;j<size;j++)
          {
                        count<<sol[i][j]<<" ";
          }
      }
  }
}



