#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q,a,t,x;
    cin>>n>>q;
    
    vector<vector<int>> v(n);
    
    while(q--) 
    {
        
        cin>>t>>a;
        
        if(t==0) {   
            cin>>x;
            v[a].push_back(x);
        } 
        else if (t==1) {  
            for (int i = 0;i<v[a].size();i++) {
                if (i > 0) cout<<" ";
                cout<<v[a][i];
            }
            cout<<endl;
        } 
        else if(t==2) {  
            v[a].clear();
        }
    }
    
    return 0;
}
