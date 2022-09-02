#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node* next;
};
void print(Node* &head)
{
	Node* n=new Node();
	n=head->next;
	while(n!=NULL)
	{
		cout<<n->data<<"->";
		n=n->next;
	}
}
void deleteall(Node* head,int dat)
{
	Node* n=new Node();
	Node* prev=new Node();
	n=head;
	
	while(n!=NULL)
	{
		if(n->data==dat)
		{
			prev->next=n->next;
			n=prev;
		}
		prev=n;
		n=n->next;
	}
}
int main()
{
	Node* head=new Node();
	Node* first=new Node();
	Node* second=new Node();
	Node* third=new Node();
	head->next=first;
	first->data=3;
	first->next=second;
	second->data=1;
	second->next=third;
	third->data=3;
	third->next=NULL;
	print(head);
	deleteall(head,3);
	cout<<endl;
		print(head);
}
