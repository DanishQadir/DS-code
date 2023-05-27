#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
	node()
	{
		this->data=0;
		this->next=NULL;
	}
	node(int d)
	{
		data=d;
		next=NULL;
	}
};
	void tail(node* &head,int val)
	{
		node *n=new node(val);
		if(head==NULL)
		{
			head=n;
		}
		node *tmp;
		tmp=head;
		while(tmp->next!=NULL)
		{
			tmp=tmp->next;
		}
		tmp->next=n;
		
	}
	void dis(node *head)
	{
		node*tmp=head;
		{
			while(tmp!=NULL)
			{
				cout<<tmp->data;
				tmp=tmp->next;
			}
			cout<<endl;
		}
	}
	int main()
	{
		node *head=NULL;
	
		tail(head,2);
				tail(head,2);
		tail(head,2);

		
	
		dis(head);
	}
