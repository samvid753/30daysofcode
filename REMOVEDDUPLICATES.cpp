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
	int b[n],f=0;
	for(int j=0;j<n;j++)
	{
		if(a[j]!=a[j+1])
		{
			b[f]=a[j];
			f++;
		}
	
	}
		for(int i=0;i<f;i++)
	{
		cout<<b[i]<"   ";
	}

}
