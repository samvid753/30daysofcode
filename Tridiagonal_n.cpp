#include <iostream>
using namespace std;
#define n 4
int main()
{

	int a[3*n-2];
	for(int i=0;i<((3*n)-2);i++)
	{
		cin>>a[i];
	}
	int c=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int ak=i-j;
			if(ak==1 || ak==0 ||ak==-1)
			
			{
				cout<<a[c];
				c++;
			}
			else 
			{
				cout<<"0";
			}
		}
		cout<<endl;
	}
}
