#include<iostream>
using namespace std;
#define n 4
int main()
{
	int k=(n*(n+1)/2);
	int a[k];
	for(int i=0;i<k;i++)
	{
		cin>>a[i];
	}int c=0,t=0,f=0;
	int b[k];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{ 
			if(i-j<0)
			{
			b[t]=a[c];
			cout<<a[c];
			c++;
			t++;}
			if(i-j==0)
			{
			cout<<a[c];
			c++;
			}
		    if(i-j>0)
		    {
		    	cout<<b[f];
		    	f++;
			}
			
		}
		cout<<endl;
	}
	
}
