#include<iostream>
using namespace std;

class node{
	public:
		node* next;
		int data;
		node()
		{
			next=NULL;
		}
};
class list{
	public:
		node* head;
		list()
		{
			head=0;
		}
		void insertatfront(int newdata)
		{                
			node* newnode=new node();
			newnode->data=newdata;
			newnode->next=head;
			head=newnode;
	//	}
	}
	void display()
	{
		node* temp=head;
		while(temp!=0)
		{
			cout<<temp->data<<" ";
	
			temp=temp->next;
		}
	}
};
int main()
{
	list l;
	l.insertatfront(23);
		l.insertatfront(234);
			l.insertatfront(233);
				l.insertatfront(2);
					l.insertatfront(3);
						l.insertatfront(23);
							l.insertatfront(23);
								l.insertatfront(23);
									l.insertatfront(23);
										l.insertatfront(23);
											l.insertatfront(23);
	l.display();
}
