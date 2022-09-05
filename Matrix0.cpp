#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
	{
		cin>>a[i][j];
	}
	}
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
	{
		if(a[i][j]==0)
		{
			for(int k=0;k<m;k++)
			{
				a[i][k]=0;
			}
			break;
		}
	}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
	{
		cout<<a[i][j]<<"   ";
	}
	cout<<endl;
	}
}
