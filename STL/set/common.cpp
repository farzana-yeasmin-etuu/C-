#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m;
    cin>>t;
   

    while(t--)
    {
        cin>>n>>m;
        int x=n+m;
        vector<int> v1(n),v2(m);
        set<int> s;
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
            s.insert(v1[i]);
        }
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
            s.insert(v2[i]);
        }

        int y=x-s.size();
        cout<<y<<endl;



}
}