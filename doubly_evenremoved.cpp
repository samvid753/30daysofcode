#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
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
void print(Node *n)
{
	n=n->next;
	while(n->next!=NULL)
	{
		cout<<n->data<<endl;
		n=n->next;
	}
}
void evenremove(Node *n)
{
	n=n->next;
	int f=0;
	do
	{
		if((n->data)%2==0)
		{
			f++;
			n->prev->next=n->next;
			n->next->prev=n->prev;
		}
		n=n->next;
	}while (n->next!=NULL);
	cout<<f<<endl;
}
void palindromecheck(Node* n,Node *m)
{
	n=n->next;
	int f=0;
	while(n!=NULL)
	{
		if(n->data!=m->data)
		{
			f=1;
		}
		n=n->next;
		m=m->prev;
	}
	if(f==1)
	{
		cout<<"Not aPalindrome";
		
	}
	else
	{
		cout<<"palindrome";
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
	last->prev=third;
	third->prev=second;
	second->prev=first;
	first->prev=head;
	head->prev=NULL;
	first->data=10;
	second->data=20;
	third->data=23;
	printsize(head);
	print(head);
	cout<<endl;
	palindromecheck(head,last);
	cout<<endl;
	evenremove(head);
     cout<<endl;
     print(head);


}
