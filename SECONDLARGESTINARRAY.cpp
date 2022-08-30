#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[n];
	cout<<"ENTER SIZE"<<endl;
	cin>>n;
	int f=0,se;
	cout<<"ENTER ELEMENTS-->"<<endl
	;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=a[0];
	for(int j=0;j<n;j++)
	{
		if(a[j]>max)
		{
		   se=max;
			max=a[j];
		}
	}
	cout<<"THE SECOND LARGEST ELEMENT IS-->"<<se;
}
