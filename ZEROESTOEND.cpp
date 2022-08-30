#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[n];
	cout<<"ENTER SIZE"<<endl;
	cin>>n;

	cout<<"ENTER ELEMENTS-->"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int b[n],f=0,k=0;
	for(int j=0;j<n;j++)
	{
		if(a[j]!=0)
		{
		
			b[f]=a[j];
			f++;
	}
        else
        {
        	k++;
		}
	}
	for(int t=0;t<k;t++)
	{
		b[f]=0;
		f++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<< "  ";
	}
}
