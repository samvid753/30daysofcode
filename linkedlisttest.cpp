#include<iostream>
using namespace std;
class node
{
	public:
		char data;
		node* next;
		
};
node* take()
{
	int n;
	cout<<"ENTER NO OF ELEMENTS";
	cin>>n;
	node* head=NULL;
	node* tail=NULL;
	
	for(int i=n;i>=1;i--)
	{
		for(int j=n;j>=1;j--)
		{
		
		node* newnode=new node();
		char dat;
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
	node* newnode1=new node();
	newnode1->data='\n';
	
	tail->next=newnode1;
			tail=newnode1;
	
	}
	return head;
}
void print(node* n)
{
	
	while(n!=NULL)
	{
	
		cout<<n->data;
		n=n->next;
	}
	cout<<endl;
}

int main()
{
	node* head=take();
	node* head1=take();
	print(head);
	print(head1);
		
	for(int i=n;i>=1;i--)
	{
		for(int j=n;j>=1;j--)
		{
		
}
