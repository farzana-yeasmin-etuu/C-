#include<bits/stdc++.h>
using namespace  std;

int main() {
// {  cout<<"STDIN      Function"<<endl;
//    cout<<"-----      --------"<<;
    int q,v,n,m=0;
    cin>>q;
    cout<<"          Q="<<q<<endl;
    while(q--)
    {  
        set<int> s;
        cin>>v>>n;
        if(v==1)
        { 
            s.insert(n);

        }
        if(v==2)
        {
            s.erase(n);
        }
        if(v==3)
        {
           cout<<s.top();
        }

        
    }
}