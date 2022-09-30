#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n][n];
  int c=0;
  for(int i=0;i<n;i++)
  {
  	for(int j=0;j<n;j++)
  	{
  		
  		
  		cin>>a[i][j];
  		int k=a[i][j];
  		if(k!=0)
  		{
		  
		  
  		c++;}
	  }
  }
  cout<<c;
  int t[3][c];
  int p=0;
  for(int i=0;i<n;i++)
  {
  	for(int j=0;j<n;j++)
  	{
  		if(a[i][j]!=0)
  		{
  			t[0][p]=i;
  			t[1][p]=j;
  			t[2][p]=a[i][j];
  			p++;
		  }
  		
	  }
  }
  cout<<p<<endl;
  for(int i=0;i<3;i++)
  {
  	for(int j=0;j<p;j++)
  	{
  		cout<<t[i][j]<<"  ";
	  }
	  cout<<endl;
  }
}
