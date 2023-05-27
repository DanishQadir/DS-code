#include<iostream>
using namespace std;

class node{
	private:
		
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
class single{
	private:
		node* head;
		node* tail;
		public:
			single()
			{
				head=NULL;
			}
			void insertnode(int data)
			{
				node* newnode= new node;
				newnode->data=data;
				newnode->next=head;
				head=newnode;
		 }
			void print()
			{
				node* temp =head;
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
	single s;
	s.insertnode(1);
	s.insertnode(3);
	s.insertnode(9);
	s.print();
	return 0;
}
