#include<iostream>
using namespace std;
int main()
{
	int t;
	cout<<"Enter order of matrix"<<endl;
	cin>>t;
	cout<<"Enter elements of matrix"<<endl;
       int a[t][t];
       for(int i=0;i<t;i++)
       {
       	for(int j=0;j<t;j++)
       	{
		   
           cin>>a[i][j];
       }}
       int f=0;
       for(int k=0;k<t;k++)
       {
       	for(int l=0;l<t;l++)
       	{
		    if(l-k>=0)
		    {
			    cout<<a[k][l]<<"  ";
       	    }
       	    else
       	    {
       		a[k][l]=0;
       		cout<<a[k][l]<<"  ";
		    }
        }
		    cout<<"\n";
		}
}

