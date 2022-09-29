#include<iostream>
using namespace std;
class Stack
{
	public:
    	int *arr;
    	int size;
     	int top;
	
     	Stack(int s)
    	{
	    	this->size=s;
	    	arr=new int[size];
	    	top=-1;
    	}
};
Stack push(Stack s,int a)
{
	if(s.size-s.top>1)
	{
		++s.top;
		s.arr[s.top]=a;
	}
	else
	{
		cout<<"STACK OVERFLOW"<<endl;
	}
	return s;
}
Stack pop(Stack s)
{
	if(s.top>=0)
	{
		--s.top;
		return s;
	}
	else
	{
		cout<<"UNDERFLOW";
	}
	
}
int  main()
{
	Stack s(5);
	s=push(s,5);
	s=pop(s);
	s=pop(s);
	string p;
	cin>>p;
	cout<<p;
}
