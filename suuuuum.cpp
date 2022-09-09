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
       	int s=0,S=0;
       for(int k=0;k<t;k++)
       {
          s=0;
          S=0;
       	for(int l=0;l<t;l++)
       	{
		    s=s+a[k][l];
		    S=S+a[l][k];
		}
		cout<<"The Sum Of "<<(k+1)<<" is-->"<<s<<endl;
		cout<<"The Sum Of "<<(k+1)<<" is-->"<<S<<endl;
}


}

