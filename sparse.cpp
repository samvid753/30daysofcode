#include<iostream>
using namespace std;
int main()
{
	int t;
	cout<<"Enter order of matrix"<<endl;
	cin>>t;
	cout<<"Enter elements of matrix"<<endl;
       int a[t][t];
       for(int i=0;i<t;i++)
       {
       	for(int j=0;j<t;j++)
       	{
		   
           cin>>a[i][j];
       }}
       int f=0;
       
       for(int k=0;k<t;k++)
       {
       	for(int l=0;l<t;l++)
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
       for(int i=0 ;i<t;i++)
       {
       	for(int j=0;j<t;j++)
       	{
       		if(a[i][j]!=0)
       		{
			   
       		k[0][y]=a[i][j];
       		k[1][y]=i;
       		k[2][y]=j;
       		y++;
       		
       	}
		   }
	   }
     for(int i=0;i<t;i++)
       {
       	for(int j=0;j<t;j++)
       	{
		   
           cout<<a[i][j];
       }}
     cout<<f;
}
  

