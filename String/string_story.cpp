#include<bits/stdc++.h>
using namespace std;
int main()
{   int t,i;
    string s="codeforces";
    cin>>t;
    while(t--)
    {  string n;
        cin>>n;
        int count=0;
      int l=s.size();
    for(i=0;i<l;i++)
    {
        if(s[i]!=n[i])
        {
            count++;
        }
    }
    cout<<count<<endl;
    }

    return 0;
}