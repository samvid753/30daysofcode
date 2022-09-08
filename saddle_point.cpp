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
       for(int i=0;i<t;i++)
       {
       	    int max1=0;
       	    int max2=0;
       	    for(int j=0;j<t;j++)
       	    {
       	    	if(a[i][j]>max1)
       	    	{
       	    		max1=a[i][j];
				   }
				   if(a[j][i]>max2)
       	    	{
       	    		max2=a[j][i];
				   }
				 
			   }
			 cout<<"the maximum of the row is -->"<<max1<<endl;  
			  cout<<"the maximum of the column is -->"<<max2<<endl;  
	   }
	   
      

}

