
#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node* next;

};
void print(node *head)
{
	node *n=new node();
	n=head->next;
	while(n!=NULL)
	{
		cout<<n->data<<endl;
		n=n->next;
	}
}

int main()
{
	node* head=new node();
	node* T1=new node();
	node* T2=new node();
	node* T3=new node(); 
	head->next=T1;
	T1->data=10;
	T1->next=T2;
	T2->data=20;
	T2->next=T3;
	T3->data=30;
	T3->next=NULL;
	print(head);
	return 0;
}
