#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,y;
    cin>>t;
    vector<int> v;
    while(t--)
    {   int d;
        cin>>d;
        vector<int>v;
        while(d>=1){
             int x=d%10;
             v.push_back(x);
             d=d/10;

        }

        y=*min_element(v.begin(),v.end());
        cout<<y<<endl;

    }
}