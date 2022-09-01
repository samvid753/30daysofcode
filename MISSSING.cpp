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
		for(int j=1;j<=n;j++)
    	{
    		int k=0;
    for (int i=0;i<n;i++)
    {
    	if(j==a[i])
    	{
    		k=1;
    
		}
    
if(k==0)
{
	cout<<j<<"   ";
}    	}}}
