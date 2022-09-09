#include<iostream>
using namespace std;
int main()
{
	   int n;
	   cout<<"Enter the order of matrix"<<endl;
	   cin>>n;
       int a[n][n];
       int b[n][n];
       cout<<"Enter the elements of matrix"<<endl;
       for(int i=0;i<n;i++)
       {
       	for(int j=0;j<n;j++)
       	{
		   
           cin>>a[i][j];
       }}
       int f=0;
       for(int i=0;i<n;i++)
       {
       	for(int j=0;j<n;j++)
       	{
		    
		    b[j][i]=a[i][j];
		  
	   }
}
cout<<"Transpose Of the matrix is-->"<<endl;
for(int i=0;i<n;i++)
       {
       	for(int j=0;j<n;j++)
       	{
		   
           cout<<b[i][j]<<"  ";
       }
	   cout<<endl;}}

