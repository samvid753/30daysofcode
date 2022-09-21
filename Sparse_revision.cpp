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
			if(a[i][j]!=0)
			{
				k++;
			}
		}
	}
	int arr[3][k];
	int p=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]!=0)
			{
				arr[0][p]=i;
				arr[1][p]=j;
				arr[2][p]=a[i][j];
				p++;
			}
			
		}
	}
	int arrt[k][3];
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<p;j++)
		{
		    
		    arrt[j][i]=arr[i][j];
		}
		
	}
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<3;j++)
		{
		    
		    cout<<arrt[i][j];
		}
		cout<<endl;
		
	}
}
