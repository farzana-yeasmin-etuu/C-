#include<bits/stdc++.h>
using namespace std;

int32_t main()
{int n;
 cin>>n;
 set<int> divisor;
 //n can be sqrt(n)
 for(int i=1;i*i<=n;++i)
 {
    if(n%i==0)
    {
        divisor.insert(i);
        divisor.insert(n/i);
    }
 }
 for(auto i : divisor)
 {
    cout<<i<<" ";
 }

 cout<<endl;
 if(divisor.size()==2)
 {
    cout<<"Prime"<<endl;
 }
 else 
 {
    cout<<"Composite"<<endl;
 }

}