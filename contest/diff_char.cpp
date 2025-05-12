#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;

cin>>t;
while(t--)
{  
    int n, count=0;
    cin>>n;
    char s[n];
 for(int i=0;i<n;i++)
 {
    cin>>s[i];
    if(s[i]==s[i-1])
    {
        count++;
    }
 }
 
 cout<<count<<endl;

}
return 0;

}