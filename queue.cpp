#include<iostream>
using namespace std;
class Queue
{
	public:
		int *arr;
		int front;
		int rear;
		int size;
		Queue(int d)
		{
			size=d;
			front=0;
			rear=0;
			arr=new int[size];
		}

bool isempty()
{
	if(front==rear)
	{
		return false;
	}
	else
	{
		return true;
	}
}
void enque(int data)
{
	if(rear==size)
	{
		cout<<"STACK OVERFLOW";
	}
	else
	{
		arr[rear]=data;
		rear++;
	}
}
int dequeue()
{ 
    int ans;
	if(rear==front)
	{
		return -1;
	}
	else
	{
		ans=arr[front];
		arr[front]=-1;
		front++;
		if(front==rear)
		{
			front=0;
			rear=0;
		}
		return ans;
	}
}};
int main()
{
	 
	Queue q(5);
	q.enque(6);
	cout<<q.isempty()<<endl;
	cout<<q.dequeue()<<endl;;
		cout<<q.isempty()<<endl;
}
