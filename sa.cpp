/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[]={};
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"input elements of array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     cout<<"Resultant array\n";
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
    cout<<"select element to be inserted";
    int c;
    cin>>c;
    n=n+1;
    cout<<"select index at which element need to be inserted";
    int x;
    cin>>x;
    for(int y=n-1;y>x;y--)
    {
        a[y]=a[y-1];
    }
    a[x]=c;
     cout<<"Resultant array\n";
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
    cout<<"select element to be deleted";
    int b;
    cin>>b;
    for(int j=b-1;j<n;j++)
    {
        a[j]=a[j+1];
    }
    n=n-1;
     cout<<"Resultant array\n";
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
    cout<<"enter search element"<<endl;
    int p;
    cin>>p;
    for(int k=0;k<n;k++)
    {
        if(a[k]==p)
        {
            cout<<"the Search element is present at "<<k+1<<"th place";
        }
    }
}

