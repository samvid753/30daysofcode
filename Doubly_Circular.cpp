#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node* next;
	Node* prev;
};
void doubly(Node *head)
{
	Node* n=new Node();
     n=head;
	n=n->next;
	int f=0;
	while(n!=NULL && n!=head)
	{ 
	
	
		n=n->next;
	}
    if(n==head)
    {
    	cout<<"Circular";
	}
	else if(n==NULL)
	{
		 cout<<"Not";
	}
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
	
	first->data=10;
	second->data=20;
	third->data=30;
	last->data=40;
    doubly(head);

}
