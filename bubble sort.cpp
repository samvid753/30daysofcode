#include<iostream>
using namespace std;
int main()
{
	   
       
       int a[7];
       a[0]=64,a[1]=34;a[2]=25;a[3]=12;a[4]=22;a[5]=11;a[6]=90;
       cout<<"Enter elements of array"<<endl;
       int n=7;
      
for(int i=1;i<=6;i++)
       {
       	for(int j=0;j<7;j++)
       	{
		   
           if(a[j]>a[j+1])
           {
           	int t=a[j];
           	a[j]=a[j+1];
           	a[j+1]=t;
		   }
       }}
           cout<<"Sorted Array"<<endl;
        for(int i=0;i<7;i++)
       {
       
		    
		    cout<<a[i]<<"  ";
		  
	   }
	   cout<<endl;
	
	   }
	   

