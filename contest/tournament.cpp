#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>j>>k;
        
        vector<int>v(n);
        for(int i=0;i<n;i++)
         {
            cin>>v[i];
            }
        int ts=v[j-1],s=0;

        for(int i=0;i<n;i++)
        {
            if(v[i]>ts)
            {
                s++;
            }
        }
        if(s<=(k-1))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}