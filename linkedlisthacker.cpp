#include<iostream>
 using namespace std;
class Node
{
	public:
	int data;
	Node* next;
};
void insertdata(Node* &head,int dat)
{
       Node* temp=new Node();
       temp->data=dat;
       temp->next=head;
       head=temp;
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
void appenddata(Node* &head,int dat)
{
       Node* n=new Node();
       n=head;
       while(n->next!=NULL)
       {
       	    n=n->next;
	   }
	   Node* append=new Node();
	   n->next=append;
	   append->data=dat;
	   append->next=NULL;
}
void insertdatap(Node* &head,int f,int dat)
{
	Node* n=new Node();
	
	if(f==1)
	{
		n->next=head;
		n->data=dat;
		head=n;
	}
	else
	
	
	{
		n=head;
	int k=0;
	while(k<(f-2))
	{
		n=n->next;
		k++;
	}
	Node* t=new Node();
	t=n->next;
	Node* middle=new Node();
	n->next=middle;
	middle->data=dat;
	middle->next=t;
}
}
void deletionpos(Node* &head,int dat)
{
	Node* n=new Node();
	if(dat==1)
	{
		head=head->next;
	}
	
	else
	{
	
	Node* prev=new Node();
	int k=0;
    n=head;
	while(k!=(dat-1))
	{
		
		
			
	
		
		prev=n;
		n=n->next;
		k++;
	}
      prev->next=n->next;
}
}
void deletend(Node *head)
{
	Node* n=new Node();
	n=head;
	while(n->next->next!=NULL)
	{
		n=n->next;
	}
	n->next=NULL;
}
void pos(Node *head,int dat)
{
	Node* n=new Node();
	n=head;
	int k=0,f=0;
	while(n!=NULL)
	{
	
		k++;
		if(n->data==dat)
		{
			f=1;
			break;
		}
	
		n=n->next;
}
	if(f==1)
	{
	
	cout<<"It is "<<k<<" th node"<<endl;;
}
else
{
	cout<<"Node is absent"<<endl;;
}
}
void deletebeg(Node *head)
{
	head->next=head->next->next;
	
}

int main()
{
	Node* head=new Node();
	Node* second=new Node();
	Node* third=new Node();
	head->data=2;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=2;
	third->next=NULL;
	print(head);
	cout<<endl;
	insertdata(head,3);
	print(head);
	cout<<endl;
	appenddata(head,9);
	print(head);
	insertdatap(head,3,11);
	cout<<endl;
	print(head);
	deletionpos(head,1);
	cout<<endl;
	print(head);
	cout<<endl;
    deletend(head);

	print(head);
		cout<<endl;
	deletebeg(head);
;
	print(head);
		cout<<endl;
	pos(head,6);
	print(head);
	
	return 0;
}
