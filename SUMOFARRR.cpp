#include<iostream>
using namespace std;
int main()
{
	int n;

	cout<<"ENTER SIZE"<<endl;
	cin>>n;
    	int a[n];
	cout<<"ENTER ELEMENTS-->"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	int dat;
	cin>>dat;
	int k=n;
	int t=0;
	while(k>=1)
	{
		int f=0;
		while(f<=n-k)
		{
		int s=0;
		for(int i=f;i<(k+f);i++)
		{
			s=s+a[i];
		}	
		if(s==dat)
		{
			cout<<k;
			t=1;
			break;
		}f++;}
	
		if(t==1)
		{
			break;
		}
			k--;
		}
	}
