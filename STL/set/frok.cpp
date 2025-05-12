#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,xk,yk,xq,yq,count=0;
        cin>>x>>y>>xk>>yk>>xq>>yq;

        vector<int> dx={x,y,y,x,-y,-x,-x,-y};
        vector<int> dy={y,x,-x,-y,x,y,-y,-x};
        set<pair<int,int>> pos_k;
        set<pair<int,int>> pos_q;

        for(int i=0;i<8;i++)
        {
            pos_k.insert({xk+dx[i],yk+dy[i]});
        }
        for(int i=0;i<8;i++)
        {
            pos_q.insert({xq+dx[i],yq+dy[i]});
        }
for(auto i : pos_k)
{
    if(pos_q.find(i)!=pos_q.end())
    {
        count++;
    }
}
cout<<count<<endl;

    }
}