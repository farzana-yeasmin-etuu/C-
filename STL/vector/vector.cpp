#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    vector<int>v;
    cin>>q;
    while(q--)
    {  int x,y;
        cin>>x;
        if(x==0)
        {   cin>>y;
            v.push_back(y);

        }
        if(!v.empty() && x==1 )

        {  cin>>y;
           cout<<v[y]<<endl;
        }
        if(!v.empty() && x==2)
        {
            v.pop_back();
        }
    }
    
}