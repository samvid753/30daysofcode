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
	for(int i=0;i<n;i++)
	{
		int min=a[i];
		int k=i;
		for(int j=i;j<n;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				k=j;
							}
			
		}
		int t=a[k];
		a[k]=a[i];
		a[i]=t;
	}
	i=0;
		while(i<n)
	{
		cout<<a[i];
		i++;
	}
}
