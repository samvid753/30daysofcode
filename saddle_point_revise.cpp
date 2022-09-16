#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][n];
	int k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
	 int max=a[0][i];
	 int k=0;
	for(int j=1;j<n;j++)
	{
		if(a[j][i]>max)
		{
			k=j;
			max=a[j][i];
		}
	}
	int min=a[k][i];
	int f=0;
	for(int p=0;p<n;p++)
	{
		if(a[k][p]<min)
		{
			f=1;
			break;
		}
	}
	if(f==0)
	{
		cout<<min;
		break;
	}
	}
}
