#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter no of elements"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int beg=0;
	int last=n;
	int search;
	cout<<"Enter Search Element"<<endl;
	cin>>search;
	int f=0;
    while(beg<=last)
	{
		int mid=(beg+last)/2;
		if(a[mid]==search)
		{
			f=1;
			break;
		}
		else
		{
		    if(search>=a[mid])
			{
				beg=mid+1;
				
				
			}
			else if(search<a[mid])
			{
				last=mid-1;
				
			}
			}
	
			
		
	}
	if(f==1)
	{
		cout<<"Found"<<endl;
	}
	else if(f==0)
	{
		cout<<"Not Found"<<endl;
	}
}
