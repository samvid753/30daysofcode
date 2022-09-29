#include<iostream>
using namespace std;
class Node
{
	public:
		Node* next;
		int data;
		
};
Node* take()
{
	int n;
	cin>>n;
	Node* head=NULL;
	Node* end=NULL;
	for(int i=1;i<=n;i++)
	{
		Node* nn=new Node();
		int dat;
		cin>>dat;
		nn->data=dat;
		if(head==NULL)
		{
			head=nn;
			end=nn;
		}
		else
		{
			end->next=nn;
			end=nn;
		}
	}
	return(head);
}
void print(Node* n)
{
	n=n->next;
	while(n!=NULL)
	{
		cout<<n->data<<"->";
		n=n->next;
	}
	cout<<endl;
}
void insertl(Node* &head,int ele)
{
	Node* n=new Node();
	n=head;
	while(n->next!=NULL)
	{
		n=n->next;
	}
	Node* temp=new Node();
	
	temp->data=ele;
	n->next=temp;
}

void LL2(Node* head,Node* head1,Node* head2)
{
	Node* n=new Node();
	n=head;
	int p=0,f=0,t=0;
	
	while(n->next->next!=NULL)
	{
		if(f%2==0)
		{
		
		p=0;
		p=n->data+n->next->next->data;
		
	insertl(head1,p);
	
}
	
		else
		{
			t=0;
			t=n->data+n->next->next->data;
			
          insertl(head2,t);
		}
	f++;
	n=n->next;
	
		
	}

}
int main()
{
	Node* head=take();
	Node* head1=new Node();
	head1->data=1;
	head1->next=NULL;
	Node* head2=new Node();
	head2->data=1;
	head2->next=NULL;
	LL2(head,head1,head2);
    print(head1);
    print(head2);
}

