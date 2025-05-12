#include<bits/stdc++.h>
using namespace std;

int pass(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    return a[i];
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    pass(a,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}