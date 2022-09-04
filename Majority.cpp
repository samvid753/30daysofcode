#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=0;
	}
	for(int i=0;i<n;i++)
	{
         b[a[i]-1]= b[a[i]-1]+1;
    }
    for(int i=0;i<n;i++)
	{
         if(b[i]>(n/2))
         
         {
         	cout<<i+1;
		 }
    }}
