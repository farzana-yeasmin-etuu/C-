#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,l1,l2,l3,b1,b2,b3;
    cin>>t;
    while(t--)
    {
     
        cin>>l1>>b1>>l2>>b2>>l3>>b3;

      if(l1==l2 && l2==l3 && b1+b2+b3==l1)
      {
          cout<<"YES"<<endl;
      }
      else if(b1==b2 && b2==b3 && l1+l2+l3==b1)
      {
          cout<<"YES"<<endl;
      }

      else if(l2==l3 && l2+l1==b1 && b2+b3==b1)
      
       {
        cout<<"YES"<<endl;
       }
      
      else if(b2==b3 && b2+b1==l1 && l2+l3==l1)
      {
       
        cout<<"YES"<<endl;
       }
      
     else {
      cout<<"NO"<<endl;
     }
    

    }

}