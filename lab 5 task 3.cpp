#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void sub_total(int ,int);
void Tax(int,int);
void discount(int,int);
void sub_total()
{
int qty,total,preprice,price;
cout<<endl;
cout<<"Enter total price of product:";
cin>>price;
cout<<"Enter quantity of product :";
cin>>qty;
cout<<"Enter previous order price :";
cin>>preprice;
total=price*qty;
Tax(total,preprice);
}
void Tax(int total,int preprice)
{
float tax=0.3;
float total_tax;
total_tax=tax*total;
total=total+total_tax;
discount(total,preprice);
}
void discount(int total,int preprice)
{
if(total>100)
{
int dis=(total*10)/100;
total=total-dis;
}
if( preprice>500)
{
total=total-50;
}
else if(preprice>1000)
{
int dis2=(total*5)/100;
total=total-dis2;
}
cout<<"Total price is :"<<total;
sub_total();


}
int main()
{
sub_total();
}


