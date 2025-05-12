#include<bits/stdc++.h>
using namespace std;
int main()
{  int n,c=0;
    long long p,h=0;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        h+=p;
        pq.push(p);
        c++;
        if(h<0)
        {
            h-=pq.top();
            pq.pop();
            c--;
            
        }
    }
    cout<<c<<endl;

}