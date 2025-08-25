#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
while(n--)
{
long long l,u;
cin>>l>>u;
int mx=0,res=l;

for(int i=l;i<=u;++i)
{
int cnt=0;
for(int j=1;j<=sqrt(i);++j)
{
if(i%j==0)
{
if(j==i/j)
{
    cnt+=1;
}
else cnt+=2;
}
}
if(cnt>mx)
{ mx=cnt;
  res=i;
}
}
cout<<"Between "<<l<<" and "<<u<<", "<<res<<" has a maximum of "<<mx<<" divisors."<<endl;
}
return 0;
}
