	#include<iostream>
using namespace std;
int main()
{
	int  n;
	cin>>n;
	int a[n];
	
	int i=0;
	while(i<n)
	{
		cin>>a[i];
		i++;
	}

	for(int i=1;i<n;i++)
	{
		int k=i;
		int val=a[i];
	  for(int j=i-1;j>=0;j--)
	  {
	  	 if(a[j]>val)
	  	 {
	  	 	k=j;
	  	 	
		   }
	  }
	  for(int t=i;t>k;t--)
	  {
	  	a[t]=a[t-1];
	  	
	  }
	  a[k]=val;

}
int l=0;
while(l<n)
	{
		cout<<a[l]<<endl;
		l++;
	}
	
}
