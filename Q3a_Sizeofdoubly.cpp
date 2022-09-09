#include<iostream>
using namespace std;

class Node
{
	public:
	char data;
	Node* next;
	Node* prev;

};

void printsize(Node *n)
{
	n=n->next;
	int f=0;
	while(n!=NULL)
	{
		f++;
		n=n->next;
	}
	cout<<f;
}
int main()
{
	Node* head= new Node();
	Node* first= new Node();
	Node* second= new Node();
	Node* third= new Node();
	Node* last=new Node();
	head->next=first;
	first->next=second;
	second->next=third;
	third->next=last;
	last->next=NULL;
	last->prev=third;
	third->prev=second;
	second->prev=first;
	first->prev=NULL;
	first->data='a';
	second->data='b';
	third->data='b';
	last->data='a';
	printsize(head);
	
}
