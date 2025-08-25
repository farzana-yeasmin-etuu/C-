#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        unordered_set<int>rev;
        bool p=false;
        for(int i=0;i<n;i++)
        {
            if(rev.count(v[i]))
            {
                p=true;
                break;
            }
            rev.insert(v[i]);
        }
        if(p)
        {
            cout<<"YES"<<endl;
        }
        else
         cout<<"NO"<<endl;

    }
}