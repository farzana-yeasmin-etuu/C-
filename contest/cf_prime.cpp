#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,flag=0;
    cin>>t;
    

    while(t--)
    {
        int k,x;
        cin>>x>>k;
        // if(x==0 || x==1)
        // {
        //    flag=1;
        // }
        for(int i=2;i<=x;i++)
        {
            if(x%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

}