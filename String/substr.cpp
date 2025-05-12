#include <bits/stdc++.h>
using namespace std;

int main()
{
   string S,T="ab";
   cin>>S;
   int k= S.size() , m=T.size(),count=0;
   for(int i=0;i<(k-m+1);i++)
   {
    if(S.substr(i,m)==T)
    {
       count++;
    }
    
   }
   if(count!=0)
   {
    cout<<"yes";
   }
   else { cout<<"no"; }
    return 0;
}