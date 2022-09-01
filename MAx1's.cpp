#include<iostream>
using namespace std;
int main()
{
	int n;

	cout<<"ENTER SIZE"<<endl;
	cin>>n;
    	int a[n];
	cout<<"ENTER ELEMENTS-->"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	int max=0;
	int i;
	while( i<n)
	{
	
		int k=0;
		while(a[i]==1)
		{
			k++;
			i++;
		}
		if(k>max)
		{
			max=k;
			i=i+k-1;
		}
		if(a[i]==0)
		{
			i++;
		}
		
	}
	cout<<max;
	
	}
