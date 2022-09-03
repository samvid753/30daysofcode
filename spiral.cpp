#include<iostream>
using namespace std;
int main()
{
	int m,n=0;
	cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		cin>>a[i][j];
		}
	}
	int left=0,right=m-1,top=0,bottom=n-1;
	int d=0;int x=0;
	while(x<(m*n))
	{
	  if(d==0)
	  {
	  
	 for(int i=left;i<=right;i++)
    {
    	
    		cout<<a[top][i]<<" ";
    		x++;
		
	}
	top+=1;}
    else if(d==1)
	{
			for(int i=top;i<=bottom;i++)
	{
		cout<<a[i][right]<<" ";
		x++;
		
	}
	right-=1;}
	else if(d==2)
	{
	
	for(int i=right;i>=left;i--)
	{
		cout<<a[bottom][i]<<" ";
		x++;
		
	}
	bottom-=1;}
	else if(d==3)
	{
	
	for(int i=bottom;i>=top;i--)
	{
		cout<<a[i][left]<<" ";
		x++;
		
	}
	left+=1;}
	d=d+1;
	}
	return 0;

}
