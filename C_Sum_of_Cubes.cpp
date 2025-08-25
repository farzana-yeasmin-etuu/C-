#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int r=(n+1)*(n+1);
        int s=n*n;
        int sum=(s*r)/4;
        if(sum%3==0)
        {
          cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }
}