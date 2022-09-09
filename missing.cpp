#include<iostream>
using namespace std;
int main()
{
	   int n;
	   cout<<"Enter the number of elements"<<endl;
	   cin>>n;
       int a[n];
       cout<<"enter the elements"<<endl;
       for(int i=0;i<n;i++)
       {
       	cin>>a[i];
	   }
	   for(int i=0;i<n-1;i++)
	   {
	   	if(a[i]-a[i+1] != -1)
	   	{
	   		cout<<"The missing element is"<<a[i]+1<<endl;
		   }
	   }
    }
