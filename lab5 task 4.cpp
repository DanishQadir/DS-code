#include<iostream>

using namespace std;

void Natural(int n)
{
static int x=1,sum=0;
if(n==0)
{
cout<<"\nSum of Natural Numbers:"<<sum;
return;
}
sum=sum+x;x++;
Natural(n-1);
}
int main()
{
int number;
cout<<"How many numbers do you want to write:";
cin>>number;
Natural(number);
}
