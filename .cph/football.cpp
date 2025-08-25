#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n= s.length(),count=0;
    vector<string>v(100);
    for(int i=0;i<n;i++)
     for(int len=1;len<=n-i;len++)
      v.push_back(s.substr(i,len));
    

      for(int i=0;i<n;i++)
      {
        cout<<v[i]<<" ";
      }
   for(int i=0;i<n;i++)
   {
    if(v[i]=="11111111" || v[i]=="0000000")
    {
        count++;
    }
    
   }  
   //condition ? expression_if_true : expression_if_false; 
  string ans = (count!=0)?"YES":"NO";
  cout<<ans;
}