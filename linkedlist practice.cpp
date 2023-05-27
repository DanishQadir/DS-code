#include<iostream>
using namespace std;

class node{
	public:
		node* next;
		int data;
		node()
		{
			next=0;
		}
		node(int newdata)
		{
			newdata=data;
		}
};
class linkedlist{
	private:
		public:
		node* head;
		node* tail;
	
		void frontAdd(int data)
		{
		node* newnode=new node();
		newnode->data=data;
		newnode->next=head;
		head=newnode;
		}
		
		void print()
		{
		
				node* temp=head;
				while(temp->next!=0)
				{
					cout<<temp->data<<" ";
					temp=temp->next;
				}
				cout<<endl;
			}
		
};
int main()
{
	linkedlist s;
	int num;
//	cout<<"Enter the data "<<endl;
//	cin>>num;
	s.frontAdd(8);
	s.frontAdd(6);
	s.frontAdd(5);
	s.print();
	
	
}
