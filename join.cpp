#include<iostream>
using namespace std;
class Node
{
	public:
		 int data;
		Node *next;
};
Node* take()
{
	int n;
	cout<<"ENTER";
	cin>>n;
	
	Node* head=NULL;
	Node* tail=NULL;

			for(int j=1;j<=n;j++)
	{
		Node* newnode=new Node();
		int dat;
		cin>>dat;
		newnode->data=dat;
		if(head==NULL)
		{
			head=newnode;
			tail=newnode;
		}
		else
		
		{
			tail->next=newnode;
			tail=newnode;
		}

	}
		 return(head);
}
Node* join(Node* &head,Node* &head1)
{
	Node* n1=new Node();
	Node* n2=new Node();
	n1=head;
    n2=head1;
		while(n1->next!=NULL)
	{
	    
		
		n1=n1->next;
	}
	n1->next=n2;
	return(n1);
}
void print(Node* n)
{
	
	while(n!=NULL)
	{
		cout<<n->data<<"->";
		n=n->next;
	}
	cout<<endl;
}
int main()
{
	Node* head=take();
	Node* head1=take();
	print(head);
	print (head1);
	join(head,head1);
	print(head);
}
