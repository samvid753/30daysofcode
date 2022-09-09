#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter order of matrix"<<endl;
	cin>>m;
	cin>>n;
	cout<<"Enter elements of matrix"<<endl;
       int a[m][n];
       for(int i=0;i<m;i++)
       {
       	for(int j=0;j<n;j++)
       	{
		   
           cin>>a[i][j];
       }
	   }
       int f=0;
       for(int k=0;k<m;k++)
       {
       	for(int l=0;l<n;l++)
       	{
       	
		   if(a[k][l]!=0)
		    {
			    f+=1;
       	    }
       	  
		}
		cout<<"\n";
       }
       int k[3][f];
       int y=0;
       for(int i=0 ;i<m;i++)
       {
       	for(int j=0;j<n;j++)
       	{
       		if(a[i][j]!=0)
       		{
			   
       		k[2][y]=a[i][j];
       		k[0][y]=i;
       		k[1][y]=j;
       		y++;
       		
       	}
		   }
	   }
	   
     for(int i=0;i<3;i++)
       {
       	for(int j=0;j<y;j++)
       	{
		   
           cout<<k[i][j];
       }
	   cout<<endl;}
}
  

