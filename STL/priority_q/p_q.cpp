#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,v;
    cin>>t;
    while(t--) {
        cin>>n;
        priority_queue<int> pq;
    for(int i=0;i<n;i++)
    {
        cin>>v;
        pq.push(v);
        
    }
   
    
    while(!pq.empty())
    {   int val= pq.top();
        pq.pop();
        cout<<val<<" ";
        int d= val/2;
        if(d>=1)
        {
            pq.push(d);
        }
       
    }
    cout<<endl;
    
    }
   

}