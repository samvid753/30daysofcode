#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node* next;
};
void printlist(node *n,node *h)
{
	int x=n->data;
	int f=0;
	while(n !=NULL)
	{
		cout<<n->data<<endl;
        n=n->next;
        f++;
	}
	
	int k=0;
    while(k<(f/2))
    
    {
    	h=h->next;
    	k++;
	}
	
    cout<<h->data<<endl;
	
}
int main()
{
	node* head=NULL;
	node* second=NULL;
	node* third=NULL;
	head=new node();
	second=new node();
	third=new node();
	head->data=6;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next= NULL;
	printlist(head,head);
	return 0;
}
