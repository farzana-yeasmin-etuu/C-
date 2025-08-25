#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n;
cin>>t;
while(t--)
{
cin>>n;
int a=sqrt(n);

if(a*a==n)
{
    cout<<a*a<<endl;
}
else 
{
    cout<<(a*a)<<endl;
}
}
return 0;
}
