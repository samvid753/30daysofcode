
#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node* next;

};
void insertnodest(node *head,int data)
{
	node *n=new node();
	n->next=head->next;
	head->next=n;
	n->data=data;

}
void deletenode(node *head,int data)
{
	node *n=new node();
	node *prev=new node();
    n=head->next;
    prev=head;
    do
    {
    
    	if(n->data==data)
    	{
    		prev->next=n->next;
    		
    		break;
    		
		}
    	prev=n;
    	n=n->next;
	}while(n->next!=head);
}
void insertnodelst(node *head,int data)
{
	node *n=new node();
	node *nn=new node();
	n=head;
	while(n->next!=head)
	{
	     n=n->next;
	}
    n->next=nn;
    nn->next=head;
    nn->data=data;
}
void insertnodepos(node *head,int pos,int data)
{
	node *n=new node();
	node *prev=new node();
	node *nn=new node();
	int f=1;
	n=head;
	while(f!=pos)
	{
		prev=n;
	     n=n->next;
	     f++;
	}
    prev->next=nn;
    nn->next=n;
    nn->data=data;
}
void print(node *head)
{
	node *n=new node();
	n=head;
    
do
{

		cout<<n->data<<"  ";
		n=n->next;
	}	while(n!=head);
}
void search(node *head,int dat)
{
	node *n=new node();
	n=head;
    
do
{

		if(dat==n->data)
		{
			cout<<"FOund"<<endl;
			break;
		}
		n=n->next;
	}	while(n!=head);
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
	cout<<endl;
	insertnodest(head,30);
	print(head);
	cout<<endl;
	insertnodelst(head,50);
	print(head);
	cout<<endl;
	insertnodepos(head,2,60);
	print(head);

	cout<<endl;
	insertnodepos(head,5,30);
	print(head);
	cout<<endl;
	insertnodepos(head,9,30);
	print(head);
	cout<<endl;
    search(head,60);
	cout<<endl;
	deletenode(head,60);
		print(head);
	cout<<endl;
	return 0;
}
