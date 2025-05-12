#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int i,l,r,sum=0;
        cin>>l>>r;
        for(i=l;i<=r;i++)
        {
            sum+=a[i];
        }
        cout<<sum;

    }


}