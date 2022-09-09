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
	n=head;
	int f=0;
	while(n->next!=head)
{

		f++;
		n=n->next;
	}
	cout<<f;
}
int main()
{
	node* head=new node();
	node* T1=new node();
	node* T2=new node();
	node* T3=new node();
	head->data=0; 
	head->next=T1;
	T1->data=10;
	T1->next=T2;
	T2->data=20;
	T2->next=T3;
	T3->data=40;
	T3->next=head;
	print(head);
}
