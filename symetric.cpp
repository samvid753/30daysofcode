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
       		cout<<a[k][l]<<"  ";
		   if(a[l][k]!=a[k][l])
		    {
			    f=1;
       	    }
       	  
		}
		cout<<"\n";
}
if(f==1)
{
	cout<<"Not a symetric matrix";
}
else
{
	 cout<<"symetric matrix";
}
}

