#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the order of the matrix"<<endl;
  cin>>n;
  int A[n][n];
  int B[n][n];
  int C[n][n];
  cout<<"Enter the elements of 1st array"<<endl;
  for(int i=0;i<n;i++)
  {
  	for(int j=0;j<n;j++)
  	{
  		cin>>A[i][j];
	  }
	  }	
   cout<<"Enter the elements of 2nd array"<<endl;
	for(int i=0;i<n;i++)
  {
  	for(int j=0;j<n;j++)
  	{
  		cin>>B[i][j];
	  }
	  }	

  		int s=0;
  			for(int k=0;k<n;k++)
  	{
  			for(int l=0;l<n;l++)
  	{
  		s=0;
  		for(int m=0;m<n;m++)
  	{
  	         s=s+(A[k][m]*B[m][l]);
  	         
  	}
  	    C[k][l]=s;
	  }
  	
  }
	  cout<<endl;
	  cout<<"The Resultant Array is-->"<<endl;
	  for(int i=0;i<n;i++)
  {
  	for(int j=0;j<n;j++)
  	{
  		cout<<C[i][j]<<"  ";
	  }
	  cout<<endl;
	  }	
}
