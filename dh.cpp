#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
		node* back;
	
		node(int v)
		{
			next=NULL;
			back=NULL;
			data=0;
		}
};
class queue{
	public:
		node* front;
		node* back;
		queue()
		{
			front=NULL;
			back=NULL;
		}
	void push(int x)
		{
			node* newnode=new node(x);
			newnode->data=x;
			if(front==NULL)
			{
				back=newnode;
				front=newnode;
				return;
			}
			back->next=newnode;
			newnode->back=back;
			back=newnode;
		}
		int pop()
		{
			if(front==NULL)
			{
				cout<<"is empty :"<<endl;
				
			}
			else
			{
				node* temp=front;
				front=front->next;
				delete temp;
			
			}
		}
		int peek()
		{
			if(front==NULL)
			{
				cout<<"empty :"<<endl;
				
			}
			else
			return front->data;
		}
		bool isempty()
		{
			if(front==NULL)
			{
				return true;
			}
			else
			return false;
		}
};
int main()
{
	queue n;
	n.push(34);
	n.push(4);
	n.push(3);
	n.push(2);
cout<<n.peek();
	n.pop();
		cout<<n.peek();
	n.pop();
		cout<<n.peek();
	n.pop();
		cout<<n.peek();
	n.pop();
	n.isempty();
	
}
