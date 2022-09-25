#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node* next;
		
};
Node* take()
{
	Node* head=NULL;
	Node* end=NULL;
	int x;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		Node* n=new Node();
		int k;
		cin>>k;
		n->data=k;
		if(head==NULL)
		{
			head=n;
			end=n;
		}
		else
		{
		  end->next=n;
		  end=n;
		}
	}
	return(head);
	
}
void print(Node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<"->";
	    n=n->next;
	}
	cout<<endl;
}
void search(Node* n,int ele)
{
	while(n!=NULL)
	{
		if(n->data==ele)
		{
			cout<<"Found"<<endl;
			break;
		}
	n=n->next;
	}
}
void insert1(Node*&head)
{
	Node* n=new Node();
	int dat;
	cin>>dat;
	n->data=dat;
	n->next=head;
	head=n;
}

void delb(Node*&head)
{
	head=head->next;
}
void dele(Node*&head)
{
	Node* n=new  Node();
	n=head;
	while(n->next->next!=NULL)
	{
		n=n->next;
	}
	n->next=NULL;
}
void delp(Node*&head,int dat)
{
	Node* n=new  Node();
	n=head;
	while(n->next->data!=dat)
	{
		n=n->next;
	}
	n->next=n->next->next;
}

void insertp(Node*&head,int term)
{
	Node* n=new Node();
	n=head;
	while(n!=NULL && n->data!=term)
	{
		n=n->next;
	}
	int data;
    cin>>data;
	Node* m=new Node();
	m->data=data;
	m->next=n->next;
	n->next=m;
}
void insertl(Node* &head)
{
	Node* n=new Node();
	n=head;
	while(n->next!=NULL)
	{
		n=n->next;
	}
	Node* temp=new Node();
	int data;
	cin>>data;
	temp->data=data;
	n->next=temp;
}

int main()
{
	Node* head=take();
	print(head);
	int element;
	cin>>element;
	search(head,element);
	insert1(head);
	print(head);
	insertl(head);
	print(head);
	int term;
	cin>>term;
	insertp(head,term);
	print(head);
	delb(head);
	print(head);
	dele(head);
	print(head);
	int node;
	cin>>node;
	delp(head,node);
	
	print(head);
	
		
	
}

