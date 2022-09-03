#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter number of elements in array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter elements of array"<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	for(int j=0;j<n/2;j++)
	{
		int t=a[j];
		a[j]=a[n-1-j];
		a[n-1-j]=t;
	}
	for (int i=0;i<n;i++)
	{
		cout<<a[i];
		
	}
}
