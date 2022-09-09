#include<iostream>
using namespace std;
int main()
{
       int a[4][4];
       for(int i=0;i<4;i++)
       {
       	for(int j=0;j<4;j++)
       	{
		   
           cin>>a[i][j];
       }}
       int f=0;
       for(int k=0;k<4;k++)
       {
       	for(int l=0;l<4;l++)
       	{
		    if(k==l)
		    {
			
       		cout<<a[k][l]<<"  ";
         	}
         	else 
         	
         	{
         		cout<<"0"<<"  ";
			 }
           }
		   
             cout<<"\n";
		   
	   }
}

