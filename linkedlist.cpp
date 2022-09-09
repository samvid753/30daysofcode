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
	int n;
	cout<<"ENTER DESIRED";
	cin>>n;
	Node *head=NULL;
	Node *tail=NULL;
	
	while(n!=0)
	{
		int dat;
		cin>>dat;
		Node *newnode=new Node();
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
		n--;
	}
	return head;
}
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
int main()
{
	Node *head=take();
	print(head);
	cout<<endl;
	insertdata(head,3);
	
	print(head);
	return 0;
}
