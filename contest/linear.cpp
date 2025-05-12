#include<bits/stdc++.h>
using namespace std;

int linear_search(int a[],int n,int x)

{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }

    i=  -1;
    return i;
}

int main()
{
    int i,n,x;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    { cin>>a[i]; }
    cin>>x;
    linear_search(a,n,x);
    if(a[i]==x)
    {
        cout<<x<<"is found at index"<<i<<endl;
    }
    else { cout<<x<<"is not found"<<endl; }
}