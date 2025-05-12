#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;

    while(t--)
    {   
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        deque<int> dq(k);
     for(int i =0;i<n;i++) 
     
     {
          
            if(!dq.empty() && dq.front()==i-k)
                dq.pop_front();
    
            while(!dq.empty() && v[dq.back()]<=v[i])
              {  dq.pop_back(); }
    
             dq.push_back(i);
    
             if(i>=k-1)
              { cout<<v[dq.front()]<< " "; }
        }
        cout << endl;
    }
     
}