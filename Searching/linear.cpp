#include<bits/stdc++.h>
using namespace std;

int linear_search(vector<int> v,int n,int key)
{
for(int i=0;i<n;i++)
{
    if(v[i]== key)
    {
        return i;
    }
}
return -1;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int key;
    cin>>key;
    int result =linear_search(v,n,key);
    cout<<result<<endl;
}
