#include<iostream>

using namespace std;
int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	int a[n][n][n];
	for(int y=1;y<=k;y++)
	{
	
	a[n][n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				cin>>a[i][j][k];
			}
		}
	}

	int l=n-1;
	int t=a[l][l][l];
	int p=n-1;
	int it=0;
	
	
	for(int st=n-1;st>=0;st--)
	{
		int f=0;
		if(st%2==0)
		{
			 for(int j=n-1;j>=1;j--)
	     {
	     	f++;
	    	a[j][st][j]=a[j-1][st][j-1];
		 }
		 if(f==n-1 && st>=1)
		 {
		 	a[0][st][0]=a[0][st-1][0];
		 }
	    }
		 else
		 {
		  for(int j=0;j<=n-2;j++)
	     {
	     	a[j][st][j]=a[j+1][st][j+1];
	     	++f;
		 }
		 if(f==n-1 && st>=1)
		 {
		 	a[n-1][st][n-1]=a[n-1][st-1][n-1];
		 }
		 	
		 }
}
a[0][0][0]=t;
int d=a[0][n-1][n-1];
for(int st=n-1;st>=0;st--)
{
	int f=0;
	if(st%2==0)
	{
		for(int j=n-1;j>=1;j--)
		{
			f++;
			a[(n-1)-j][st][j]=a[(n-1)-(j-1)][st][j-1];
		}
	
	if(f==n-1 &&st>=1)
	{
		a[n-1][st][0]=a[n-1][st-1][0];
	}}
	 else
		 {
		  for(int j=0;j<=n-2;j++)
	     {
	     	a[(n-1)-j][st][j]=a[(n-1)-(j+1)][st][j+1];
	     	++f;
		 }
		 if(f==n-1 && st>=1)
		 {
		 	a[0][st][n-1]=a[0][st-1][n-1];
		 }
	}}	
	a[n-1][0][0]=d;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				cout<<a[i][j][k]<<" ";
			}
			
		}
	
	}}
	}
