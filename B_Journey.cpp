#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c;
        int sum=a+b+c;
        int cycle=n/sum;
        int rem=n%sum;
        if(rem==0)
        {
            cout<<3*cycle<<endl;
        }
        else{
             int day=0,total=0;
            if(rem>0)
        {
            total+=a;
            day++;
        }
        if(rem>total)
        {
            total+=b;
            day++;
        }
        if(rem>total)
        {
            sum+=c;
            day++;
        }
        cout<<((3*cycle)+day)<<endl;
        }
    }
}