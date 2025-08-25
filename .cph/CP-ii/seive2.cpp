#include<bits/stdc++.h>
using namespace std;
void primeSeive(int l,int r)
{ 
    vector<int>prime(100,0);
    for(int i=2;i<=r;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=r;j+=i)
            {
                prime[j]=1;
            }
        }
    }

    for(int i=l;i<=r;i++)
    {
        if(prime[i]==0)
        {
           cout<<i<<" ";
        }
    }
}
int main()
{
    int l,r;
    cin>>l>>r;

    primeSeive(l,r);
}