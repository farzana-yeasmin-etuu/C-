#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
       
    cin>>n;
    int l=n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)

    {
        
        if(a[i]==b[i])
        {
            l--;
        }
        else { break; }
        
    } 
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==b[i])
        {
            l--;
        }
        else { break; }

    }
    
    cout<<l<<endl;

    }
    

}