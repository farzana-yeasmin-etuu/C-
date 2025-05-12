#include <bits/stdc++.h>
using namespace std;
int main()
{   int l,a=0,b=0;
    string x,y;
    cin>>x>>y;
    if(x.length()<y.length())
    {
        l=x.length();
    }
    else { l= y.length();} 
    for(int i=0;i<l;i++)
    {
        if(x[i]<=y[i]) { a++; }
        else { b++; }
    }

    if(a>b) { cout<<x<<endl;}
    else { cout<<y<<endl; }
}