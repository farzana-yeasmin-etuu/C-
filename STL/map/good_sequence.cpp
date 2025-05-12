#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,count=0;
    cin>>n;
    vector<int> v(n);
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
       cin>>v[i];
    }

    for(int i=0;i<n;i++)
    {
        int x=v[i];
        m[x]++;
    }

    for(auto it:m)
    {
        int x=it.first;
        int y=it.second;

        if(x!=y)
        {
            if(x>y)
            {
                count+=y;
            }
            if(y>x)
            {
                count+=(y-x);
            }
        }

    }
    cout<<count<<endl;
}