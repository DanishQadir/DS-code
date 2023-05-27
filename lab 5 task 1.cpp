#include <iostream>
using namespace std;
class Node {
public :
    int data;
    Node* next;
};
void insertAtEnd(Node*& head, int data) {
    if (head == NULL)
	 {
        head = new Node;
        head->data = data;
        head->next = NULL;
        return;
    }
    insertAtEnd(head->next, data);
}

void displayReverse(Node* head) 
{
    if (head == NULL)
	 {
    	
        return;
    }
    displayReverse(head->next);
    cout << head->data << " ";
}

int main() {
	
	
    Node* head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    displayReverse(head);
    
    cout << endl;
    
    cout<<"TASK B "<<endl;
    int nth,n=1;
       cout<<"1 , 3, 6 , 10 ....."<<endl;
        cout<<"Enter the element number you want to find :";
      cin>>nth;
         for(int i=0;i<nth;i++)
    {
     n=i+n;
     cout<<n<<" ";
      n++;
        }

   
    return 0;
}
