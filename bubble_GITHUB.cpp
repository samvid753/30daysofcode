#include<iostream>
using namespace std;
int main()
{
	int  n;
	cin>>n;
	int a[n];
	
	int i=0;
	while(i<n)
	{
		cin>>a[i];
		i++;
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			
		}
	
	}
	i=0;
		while(i<n)
	{
		cout<<a[i];
		i++;
	}
}
