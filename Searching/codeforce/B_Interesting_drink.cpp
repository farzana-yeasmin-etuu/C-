#include<bits/stdc++.h>
using namespace std;

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
   int q;
    cin>>q;
   vector<long int> m(q);
   for(int i=0;i<q;i++)
   {
    cin>>m[i];
    vector<int>:: iterator ii;
 ii= upper_bound(x.begin(),x.end(),m[i]);
cout<<(ii-x.begin())<<endl;

}
 
   
}