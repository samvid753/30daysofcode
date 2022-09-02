#include<iostream>
 using namespace std;
class Node
{
	public:
	int data;
	Node* next;
};
void reverse(Node* &head)
{
       Node* prev=new Node();
       Node* current=new Node();
       Node* next=new Node();
       current=head;
       prev=NULL;
       next=NULL;

	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
}
void print(Node* &head)
{
	Node* n=new Node();
	n=head;
	while(n!=NULL)
	{
		cout<<n->data<<" ";
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
	
	first->data=1;
	first->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=NULL;
	print(head);
	cout<<endl;
	reverse(head);
	
	print(head);
	return 0;
}
