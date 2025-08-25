#include<bits/stdc++.h>
using namespace std;

void drink(vector<int> x,int n)
{  int q;
    cin>>q;
   vector<long int> m(q);
   for(int i=0;i<q;i++)
   {
    int count=0;
    cin>>m[i];
    for(int j=0;j<n;j++)
    {
        if(m[i]>=x[j])
        {
           count++;
        }
        else 
         {continue; }

    }
    cout<<count<<endl;
   }
}

int main()
{
    int n;
    cin>>n;
    vector<int> x(n);
   for(int i=0;i<n;i++)
   {
    cin>>x[i];
   }
   sort(x.begin(),x.end());
   for(auto i : x)
   {
      cout<<i<<" ";
   }

   drink(x,n);
   
}