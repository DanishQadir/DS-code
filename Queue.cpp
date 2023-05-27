#include<iostream>
#include<stack>
using namespace std;

const int Maxsize=5;
int queue[Maxsize];
int front=-1;
int rear=-1;

void enqueue(int x)
{
	if(front==Maxsize-1)
	{
		cout<<"overflow :"<<endl;
		
	}
	else if(front==-1)
	{
		front=0;
		rear=0;
		queue[Maxsize]=x;
	}
	else
	{
		rear++;
		queue[Maxsize]=x;
	}
	
}
void dequeue()
{
	if(front==-1&& rear==-1)
	{
		cout<<"Queue is empty :"<<endl;
	}
   else	if(front==rear)
   {
   	front=-1;
   	rear=-1;
   }
   else
   front++;
}
 void display()
 {
 	int i; 
 	if(front==-1&& rear==-1)
 	{
 		cout<<"Empty :"<<endl;
	 }
	 else 
	 {
	 	for(i=front;i>=0;i--)
	 	{
	 		cout<<queue[i];
		 }
	 }
	 
 }
 int main()
 {
 	enqueue(34);
// 		enqueue(33);
// 			enqueue(354);
 			display();
 			dequeue();
 			display();
 }
