#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,even[101];
    
    for(i=0;i<101;i++)
    {
        even[i]=0;
    }

    for(i=0;i<101;i+=2)
    {
        even[i]=1;
    }

    for(i=0;i<101;i++)
    {
        cout<<i<<"="<<even[i]<<endl;
    }

   // cin>>n;

    // if(even[n])
    // { cout<<n<<"is a even number"; }
    // else
    // {
    //     cout<<n<<"is a odd number";
    // }

}