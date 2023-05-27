#include<iostream>
using namespace std;

class node
{
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
	public:
      node* head;
	linkedlist()
	{
		head=NULL;
	}
	void fun(int data){
	   node* newnode= new node;
	   newnode->data=data;
	   newnode->next=0;
	   if(head==0)
	   {
	   	head=newnode;
	   }
	   else
	   {
	   	node* temp=head;
	   	node* a;
	   	while(temp->next!=NULL)
	   	{
	   		temp=temp->next;
	   	
		   }
		   temp->next=newnode;
	
	  
      		if(temp<temp->next)
      		{
      			a=temp;
      			temp=temp->next;
      			temp->next=a;
			  }
			  
		}
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
		  return;
	  }
	
	
};
int main()
{
	linkedlist a;
	a.fun(34);
	a.fun(4);
	a.fun(5);
	a.print();
	
	}
