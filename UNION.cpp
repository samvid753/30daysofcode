#include<iostream>
using namespace std;
int main()
{
	int n,m;
	int d;
	int a[n],b[m];
	cout<<"ENTER SIZE"<<endl;
	cin>>n>>m;
    
	cout<<"ENTER ELEMENTS-->"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
		
	}
	
	cout<<"ENTER ELEMENTS-->"<<endl;
		for(int j=n;j<m+n;j++)
	{
		cin>>b[j];
	}
    
		for(int j=0;j<m+n;j++)
	{
		for(int i=0;i<m+n-1;i++)
		{
			if(b[i]>b[i+1])
			{
				int t=b[i];
				b[i]=b[i+1];
			b[i+1]=t;
		}}
		
	}
	for(int j=0;j<m+n;j++)
	{
		if(b[j]!=b[j+1])
		{
		
		cout<<b[j]<<"  ";}
	}
}
