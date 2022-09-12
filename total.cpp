#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	 cin>>a[i];
	}
	int s=0;
	for(int j=0;j<n;j++)
	{
		s=s+a[j];
	}
	cout<<s;
}
