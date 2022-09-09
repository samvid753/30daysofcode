#include<iostream>
using namespace std;
int main()
{
	   
       int n;
       cout<<"Enter the size"<<endl;
       cin>>n;
       int a[n];
       
       cout<<"Enter elements of array"<<endl;
       for(int i=0;i<n;i++)
       {
       	cin>>a[i];
	   }
       
      
for(int i=1;i<=n;i++)
       {
       	for(int j=0;j<n-1;j++)
       	{
		   
           if(a[j]>a[j+1])
           {
           	int t=a[j];
           	a[j]=a[j+1];
           	a[j+1]=t;
		   }
       }}
       int c[n];
       int f=0;
       for(int j=0;j<n;j++)
       {
       	 if(a[j]!=a[j+1])
       	 {
       	 	c[f]=a[j];
       	 	f++;
			}
			
	   }
	    for(int i=0;i<f;i++)
       {
       	cout<<c[i]<<"   ";
	   }
}

