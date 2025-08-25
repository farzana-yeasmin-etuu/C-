#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) 
    {
        int t_pos,start;
        cin>>t_pos>>start;

        vector<int>pos(t_pos);
        for(int i=0;i<t_pos;i++) 
        {
            cin>>pos[i];
        }

        sort(pos.begin(),pos.end());

        int l_distance=abs(start-pos[0]);
        int r_distance=abs(pos[t_pos-1]-start);

        int st=min(l_distance,r_distance);
        st+=pos[t_pos - 1]-pos[0];

        cout<<st<<endl;
    }

    return 0;
}