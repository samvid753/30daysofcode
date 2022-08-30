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
	int b;

	b=1;
	for(int j=b;j<n;j++)
	{
			cout<<a[j]<"   ";
	}
		for(int i=0;i<b;i++)
	{
		cout<<a[i]<"   ";
	}

}
