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
};
class doubly{
	public:
		node* head;
		doubly()
		{
			head=NULL;
		}
		void insertNode(int newdata)
		{
			node* newnode=new node();
			newnode->data=newdata;
			newnode->next=NULL;
			newnode->prev=NULL;
			if(head==NULL)
			{
				head=newnode;
			}
			else
			{
				head->prev=newnode;
				newnode->next=head;
				head=newnode;
			}
		}
		
    void addNodeAtEnd(int newData) {
        // Create a new node with the given data
        node* newNode = new node;
        newNode->data = newData;
        newNode->next = 0;

        // If the list is empty, make the new node the head
        if (head == 0) {
            newNode->prev = 0;
            head = newNode;
            return;
        }

        // Traverse the list to find the last node
        node* lastNode = head;
        while (lastNode->next != nullptr) {
            lastNode = lastNode->next;
        }

        // Set the next pointer of the last node to the new node
        lastNode->next = newNode;

        // Set the previous pointer of the new node to the last node
        newNode->prev = lastNode;
    }
};
		void display()
		{
			node* temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
		}
};
int main()
{
	doubly l;
	l.insertNode(4);
	l.insertNode(5);
	l.addNodeAtEnd(787);
	l.display();
}
