#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node* next;
};
void mid(node *head)

{
   node* n=new node();
   n=head;
   int k=0,f=0;
   while(n->next!=NULL)
   {
   	n=n->next;
   	k++;
   }
   node* c=new node();
   c=head;
   while(f<(k+1)/2)
   {
   	   c=c->next;
   	   f++;
   }
	cout<<c->data;
}
int main()
{
	node* head=NULL;
	node* second=NULL;
	node* third=NULL;
	node* fourth=new node;
	head=new node();
	second=new node();
	third=new node();
	head->data=6;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=fourth;
	fourth->data=4;
	fourth->next= NULL;
	mid(head);
	return 0;
}
