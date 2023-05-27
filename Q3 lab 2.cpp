#include <iostream>
using namespace std;
int main()
{
int size ,count=0;

cout<<"Enter the size of array:";

cin>>size;

int array[size];
cout<<"Enter the elements :";

for(int i=0;i<size;i++)
{
cin>>array[i];
}
cout<<"Unique elements are :";
for(int i=0;i<size;i++)
{
count=0;

for(int j=0;j<size;j++)
{

if(array[i]==array[j])
{

count=count +1;

}

}
if(count==1)
{
cout<<array[i]<<" ";
}
}
}
