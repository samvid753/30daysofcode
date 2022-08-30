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
	int f=0;
	for(int j=0;j<n-1;j++)
	{
		if(a[j+1]>a[j])
		{
		   
		}
		else
		{
			f=1;
		}
	}
	if(f==0)
	{
		cout<<"SORTED"<<endl;
	}
	else if(f==1)
	{
		cout<<"UNSORTED"<<endl;
	}
}
