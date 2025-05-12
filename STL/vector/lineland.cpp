#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n,minimum=0,maximum=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
   {
     if(i==0)
     {
        minimum= abs(v[i]-v[i+1]);
        maximum= abs(v[n-1]-v[i]);
        cout<<minimum<<" "<<maximum<<endl;
     }
     if(i==(n-1))
     {
        minimum= abs(v[i]-v[i-1]);
        maximum= abs(v[n-1]-v[0]);
        cout<<minimum<<" "<<maximum<<endl;
     }

      else if(i>0 && i<n-1) {
        minimum= min(abs(v[i]-v[i-1]),abs(v[i]-v[i+1]));
        maximum= max(abs(v[i]-v[0]),abs(v[i]-v[n-1]));
         cout<<minimum<<" "<<maximum<<endl;
      }
   }
}