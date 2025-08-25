#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c;
        int day=0,total=0;
        int sum=a+b+c;
        int cycle=n/sum;
        int rem=n%sum;
        if(rem==0)
        {
            cout<<3*cycle<<endl;
        }
        if(rem>0)
        {
            sum+=a;
            day++;
        }
        if(sum<n)
        {
            sum+=b;
            day++;
        }
        if(sum<n)
        {
            sum+=c;
            day++;
        }
        cout<<((3*cycle)+day)<<endl;
    }
}