#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    vector<int>v(x);
    for(auto i:v)
    {
        cin>>i;
        int count=0; 
        for(int j=1;j*j<=i;j++)
        {
            if(i%j==0)
              { if(j*j==i)
                 {
                count++;
            }

            else {
                count+=2;
            }
              }
        }
        cout<<count<<endl;
    }
}