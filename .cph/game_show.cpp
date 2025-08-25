#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,x,y;
        cin>>a>>x>>y;
        bool ok=false;
        for(int b=1;b<=100;b++)
        {
            if((b!= a) &&  (abs(b-y)<abs(a-y)) && (abs(b-x) < abs(a-x)))
            {
                ok=true;
                break;
            }
        }
        if(ok)
        {
            cout<<"YES"<<endl;
        }
        else
        {

            cout<<"NO"<<endl;
        }
    }
 
}