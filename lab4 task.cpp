#include<iostream>
using namespace std;

class node{
	public:
		node * next;
		int data;
		node()
		{
			next=0;
			
		}
		node(int newData)
		{
			data=newData;
			next=NULL;
			
		}
};
class linkedlist{
	private:
		node* head;
		public:
		linkedlist()
		{
			head=NULL;
		
		}
		int insertNode(int newData)
		{
			node* newNode=new node;
			newNode->data=newData;
			newNode->next=NULL;
			
			if(head==0)
			{
				head=newNode;
			}
			else
			{
				node* temp=head;
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				temp->next=newNode;
				
			}
			
		}
		void printNode()
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
	linkedlist l;
	l.insertNode(17);
		l.insertNode(3);
			l.insertNode(2);
			l.insertNode(44);
		l.insertNode(4);
				l.printNode();
				
				
				return 1;
				
}
