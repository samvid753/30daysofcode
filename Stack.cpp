#include<iostream>
#define max 10
using namespace std;
class Stack
{
	
	public:
		int top;
		int a[100];
		Stack()
		{
		   top=-1;	
		};
		
		int pop();
	
};
/*boo1 Stack::push(int f)
{
	if(top>(max-1))
	{
		cout<<"OVERFLOW"<<endl;
	}
	else
	{
		a[++top]=f;
		
	}
};*/
int Stack::pop()
{
	if(top<0)
	{
		
		return 0;
	}
	else
	{
	
		return 1;
	}
};
/*int Stack::peek()
{
	
}*/
int main()
{
	Stack s;
//	s.push(10);
     s.a[++s.top]=5;
     s.a[++s.top]=55;
     s.a[++s.top]=225;
     while(s.pop()!=0)
     {

     	cout<<s.a[s.top]<<endl;
     	s.top--;
	 }
	
}
