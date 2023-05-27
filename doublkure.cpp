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
      void displayList()
     {
    node *current = head;

    while (current != NULL)
    {
        cout << current->data << " ";

        current = current->next;
    }
}
    void revprint()
    {
    	node* temp= head;
    	if(temp==0)
    	{
    		return;
		}
		while(temp->next!=NULL)
		{
			temp=temp->next;
					}
    	while(temp!=NULL)
    	{
    		cout<<temp->data<<" ";
    		temp=temp->prev;
		}
	}
};
int main()
{
	doubly d;
	d.insethead(4);
	d.insethead(48);
	d.insethead(74);
	d.insethead(46);
	d.displayList();
	cout<<endl;
	d.revprint();
}

