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
		node *tail;

		
		linkedlist()
		{
			head=NULL;
			tail=NULL;
		}
		//making linked list
		void list(int newdata)
		{
			node* newnode=new node(newdata);
			newnode->data=newdata;
			newnode->next=NULL;
			
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
        	// insert node at end of linked list 
        		void addNodeatEnd(int newdata)
		{
			node* newnode=new node(newdata);
			newnode->data=newdata;
			newnode->next=NULL;
			
		if(head==NULL)
		{
			head=newnode;
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
		// deleting node
	}
	void deletefirstnode()
		{
						if(head==NULL)
			{
				cout<<"Empty noe ";
			}
			else
			{
				node* temp=head;
				head=head->next;
				delete temp;
			}
	
		}
		// Delete last node
		
		void Deletelast_node()
		{
				if(head==NULL)
			{
				cout<<"Link is empty :"<<endl;
			}
			else if(head->next==NULL)
		    {
		    	delete head;
		    	head=NULL;
			}
			else
			{
				node* temp=head;
			   while(temp->next->next!=NULL)
			   {
			   	temp=temp->next;
			   }
			   delete temp->next;
			   temp->next=NULL;
			}
			
		}
	     // length of linked list 
			void lengthOfList()
			{
				int count=0;
				node* temp=head;
				if(head==NULL )
				{
					cout<<"\n NO list found :"<<endl;
					
				}
				else
				{
					while(temp!=NULL)
					{
						count++;
						temp=temp->next;
					}
					cout<<count;
				}
				
			}
		// Write a function to reverse the linked list 
		
         	void reverse() {
              node* prev_node = NULL;
             node* current_node = head;
                while (current_node != NULL) {
                 node* next_node = current_node->next;
                  current_node->next = prev_node;
                   prev_node = current_node;
                  current_node = next_node;
                   }
                    head = prev_node;
}
  // write a function to print list in icreasing order 
    void sortlist()
    {
    int temp;
    node *ptr=head;
    node  *ctr;
    	 ctr=ptr->next;
    while(ptr->next->next!=NULL)
    {
//    	 ctr=ptr->next;
    	 while(ctr!=NULL)
    	 {
    	 	if(ctr->data<ptr->next->data)
    	 	{
    	 		temp=ctr->data;
    	 		ctr->data=ptr->data;
    	 		ptr->data=temp;
    	 	
			 }
			 //cout<<ctr->data<<" ";
			 ctr=ctr->next;
		 }
		 //cout<<ptr->data<<" ";
		 ptr=ptr->next;
		 
	}


	}

				
		 void print()
	    	 {
		 	node* temp=head;
		 	while(temp->next!=NULL)
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
	int n;
	cout<<"\n Elements of Linked List :"<<endl;
    s.list(4);
    s.list(6);
     s.list(44);
    s.list(55);
   s.list(46);
    s.list(63);
 
  //  s.print();
    //cout<<"\n After adding node at front of Linked List :"<<endl;
	s.frontNOde(18);
//	s.print();
	//cout<<"\n After adding node at the End of linked list :"<<endl;
	//s.addNodeatEnd(34);
//	s.print();
	cout<<"\n After reversing a node :"<<endl;
	s.reverse();
//	s.print();
	cout<<"\n Length of linked list :"<<endl;
//	s.lengthOfList();
	cout<<endl;
//	cout<<"\n After Deleting First Node :"<<endl;
//	s.deletefirstnode();
//	s.print();
//	cout<<"\n After deleting Last node :"<<endl;
//	s.Deletelast_node();
//	s.print();
	s.sortlist();
	s.print();
		
	
	
}
