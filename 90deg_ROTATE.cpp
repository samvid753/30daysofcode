#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"ENTER SIZE"<<endl;
cin>>n;

int a[n][n],b[n][n],c[n][n];
cout<<"ENTER ELEMENTS"<<endl;
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
	
	cin>>a[i][j];
}}

for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
	     
	     b[i][j]=a[j][i];
	  
	    
}
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
	
	c[i][j]=b[i][n-j-1];
}
cout<<endl;
}for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
	
	cout<<c[i][j]<<"   ";
}
cout<<endl;
}
}
