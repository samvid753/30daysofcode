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
	}int c=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j-i<=0)
			{
			
			cout<<a[c];
			c++;}
			else
			{
				cout<<"0";
			}
		}
		cout<<endl;
	}
	
}
