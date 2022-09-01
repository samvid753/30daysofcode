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
		
	}
	int f=0;
	cout<<"ENTER ELEMENTS-->"<<endl;
		for(int j=0;j<m;j++)
	{
		cin>>b[j];
		f++;
	}
    int c[f];
    int k=0;
		for(int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			if(b[j]==a[i])
			{
			  c[k]=b[j];
			  k++;
		}}
		
	}
	for(int j=0;j<k;j++)
	{
		if(b[j]!=b[j+1])
		{
		
		cout<<b[j]<<"  ";}
	}
}
