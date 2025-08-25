#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++)
      
        cin>>v[i]; 
      
     
    int max_value= *max_element(v.begin(),v.end());
    int min_value= *min_element(v.begin(),v.end());
    int even_count = 0, odd_count = 0;
    if((max_value+min_value)%2==0)
    {
        cout<<"0"<<endl;
    }

    else if((max_value+min_value)%2!=0)
    {
        for(int i=0;i<n;i++)
        {if (v[i] % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
        
        cout << min(even_count, odd_count) << "\n";}
    
   

      }
}