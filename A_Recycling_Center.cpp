#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        vector<int>v(n),u(n);
        for(auto i : v)
        {
            cin>>v[i];

        }
        sort(v.begin(),v.end());
        int w=0;
        for(int i=0;i<n;i++)
        {  int weight= v[i]<<i;

            if(weight>c)
            {
               w++;

            }
        }
        cout<<w<<endl;

    }
}