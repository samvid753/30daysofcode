#include<iostream>
using namespace std;
int main()
{
	int m=0;
	cin>>m;
    int a[m][m];
    
	int left=0,right=m-1,top=0,bottom=m-1;
	int d=0;int x=1;
	while(x<=(m*m))
	{
	  if(d==0)
	  {
	  
	 for(int i=left;i<=right;i++)
    {
    	
    		a[top][i]=x;
		    x++;
	}
	top+=1;}
    else if(d==1)
	{
			for(int i=top;i<=bottom;i++)
	{
		a[i][right]=x;
		x++;
		
	}
	right-=1;}
	else if(d==2)
	{
	
	for(int i=right;i>=left;i--)
	{
		a[bottom][i]=x;
		x++;
		
	}
	bottom-=1;}
	else if(d==3)
	{
	
	for(int i=bottom;i>=top;i--)
	{
		a[i][left]=x;
		x++;
		
	}
	left+=1;}
	d=d+1;
	d=d%4;
	}
	for(int i=0;i<m;i++)
    {
    	for(int j=0;j<m;j++)
    	{
    		cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;

}
