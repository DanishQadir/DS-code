#include<iostream>
using namespace std;

class node{
	public:
		node *next;
		int data;
		
		node()
		{
			next=0;
		}
		node(int newdata)
		{
			data=newdata;
		}
};
class linkedlist{
	public:
		node *head;
	//	node *tail;

		
		linkedlist()
		{
			head=NULL;
		}
		//making linked list
		void list(int newdata)
		{
			node* newnode=new node(newdata);
			newnode->data=newdata;
			newnode->next=head;
			
		if(head==NULL)
		{
			head=newnode;
			//tail=NULL;
		}
		else 
		{
			node* temp= head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newnode;
		}
		}
		//Insert node at beginning
		void frontNOde(int newdata)
	    	{
			node* newnode=new node(newdata);
			newnode->data=newdata;
			newnode->next=head;
			head=newnode;
        	}
		
		 void print()
	    	 {
		 	node* temp=head;
		 	while(temp!=NULL)
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
	s.list(2);
	s.list(4);
	s.list(1);
	s.frontNOde(18);
	s.print();
	s.print();
}
