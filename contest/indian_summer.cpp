#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    set<pair<string,string>> s;
    
    for (int i=0; i<n;i++) {
        string spec,clr;
        cin>>spec>>clr;
        s.insert({spec,clr});
    }
    
    cout<<s.size()<<endl;
    
}
