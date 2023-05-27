#include<iostream>
using namespace std;

class node{
	public:
		node* next;
		int data;
		node(int newData , node* ptr=0)
		{
			data=newData;
			next=ptr;
		}
};
class singly{
	public:
		node *head;
	//	public:
			singly()
			{
				head=0;
			}
			// add a new node at the front of likendlist
		void insert_at_begining(int data)
		{
		
			node* newNode= new node(data);
		
		
			newNode->next=head;
			head=newNode;
		}
		// add new node at the end of list 
	
			void insert_node_at_end(int data)
		{
			node *newNode=new node(data);
		
			newNode->next=0;
			
			if(head==NULL)
			{
				head=newNode;
			}
			else
			{
				node *temp=head;
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				temp->next=newNode;
			}
		}
		void print()
{
    node *temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

		
};
int main()
{
	singly s;
	int val,val1;
	cout<<"Enter value to insert at the front of linked list :"<<endl;
	cin>>val;
	s.insert_at_begining(5);
	s.insert_at_begining(8);
		s.insert_at_begining(val);
		cout<<"\n Enter the value to insert the end of linked list "<<endl;
		cin>>val1;
		s.insert_node_at_end(val1);

	
	s.print();
}
