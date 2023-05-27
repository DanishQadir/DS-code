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
		// Function to display the length of the list
    int length() {
        int count = 0;
        node* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }
	
    // Function to delete a node with a given value
    void deleteNode(int data) {
        node* temp = head;
        node* prev = NULL;
        while (temp != NULL && temp->data != data) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL) {
            return;
        } else if (prev == NULL) {
            head = temp->next;
        } else {
            prev->next = temp->next;
        }
        delete temp;
    }
    void  print(){
    node *temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
};


int main() {
   singly s;

    // Add nodes to the list
    s.insert_node_at_end(1);
    s.insert_node_at_end(2);
    s.insert_node_at_end(3);
    s.insert_node_at_end(4);
    s.insert_node_at_end(5);
    s.print();
    cout << "Length of list: " << s.length() << endl; 
	s.deleteNode(3);
    s.print();

    return 0;
}


