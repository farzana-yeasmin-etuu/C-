#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int s=a+b+c;
        int x=s/3;
        if(s%3==0 && b<=x)
        {
            cout<<"YES"<<endl;
        }
       
        else{
            cout<<"NO"<<endl;
        }
    }
}