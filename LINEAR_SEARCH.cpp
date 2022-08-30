#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[n];
	cout<<"ENTER SIZE"<<endl;
	cin>>n;

	cout<<"ENTER ELEMENTS-->"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"ENTER element to be searched"<<endl;
	int ser;
	cin>>ser;
	int f=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==ser)
		{
			f=1;
			break;
		}
	}
	if(f==0)
	{
		cout<<"NOT FOUND"<<endl;
	}
	else
	{
		cout<<"FOUND"<<endl;
	}
}
