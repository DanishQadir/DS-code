#include<iostream>
using namespace std;

class node{
	
	public:
		node* next;
		node* prev;
		int data;
		
		node()
		{
			next=0;
			prev=0;
		}
		node(int newdata)
		{
			data=newdata;
		}
};
 class doubly{
 	public:
 		node* head;
 		dubly()
 		{
 			head=NULL;
		 }
		void insethead(int x)
		 {
		 	node* newnode= new node();
		 	newnode->data=x;
		 	newnode->next=NULL;
		 	newnode->prev=NULL;
		 	if(head==NULL)
		 	{
		 		head=newnode;
			 }
		 
		 else{
		 head->prev=newnode;
		 newnode->next=head;
		 head=newnode;
	}
}
	void displayList(node *head)
{
    node *current = head;

    while (current != NULL)
    {
        cout << current->data << " ";

        current = current->next;
    }
}
};
int main()
{
	doubly d;
	d.insethead(4);
	d.insethead(6);
}

