#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x;
    cin>>t;
    while(t--)

    { 
        cin>>n>>x;
         int a[n],b[n],count=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }

     for(int i=0;i<n;i++)
     {
        if(a[i]>=x)
        {
           count+=b[i];
        }
     }
     cout<<count<<endl;
    }
}