#include<iostream>
using namespace std;
int main()
{
	int n,x=0,b=0,c=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			x++;
		}
		if(a[i]==1)
		{
			b++;
		}
		if(a[i]==2)
		{
			c++;
		}
		
	}
	int i=0;
	while(x!=0)
	{
		a[i]=0;
		i++;
		x--;
	}
	while(b!=0)
	{
		a[i]=1;
		i++;
		b--;
	}
		while(c!=0)
	{
		a[i]=2;
		i++;
		c--;
	}
	for(int i=0;i<n;i++)
	{
		cout<<"  "<<a[i];
	}
}
