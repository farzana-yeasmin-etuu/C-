#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,x,num,i,q;
    cin>>n>>q;
    vector<int> v;
    vector<int> v1;
    vector<int> v2;
    
    
    while(q--)
    {
        cin>>t>>x;
        if(t==0)
        {  cin>>num;
            if(x==0)
            {
                
                v.push_back(num);
            }
            if(x==1)
            {   
                v1.push_back(num);
            }

            if(x==2)
            {   
              v2.push_back(num);

            }
        }
        if(t==1)
        {  
            if(x==0)
            { for(i=0;i<v.size();i++)
                {
                    if(i>0) cout<<" ";
                    cout<<v[i]; 
                }
                cout<<endl;
            }
            if(x==1)
            { for(i=0;i<v1.size();i++)
                {
                    if(i>0) cout<<" ";
                    cout<<v1[i]; 
                }
                cout<<endl;
            }

            if(x==2)
            
                { for(i=0;i<v2.size();i++)
                    {
                        if(i>0) cout<<" ";
                        cout<<v2[i]; 
                    }
                    cout<<endl;
                } }
        

        if(t==2)
        {
            
            if(x==0)
            {  v.clear();
                for(i=0;i<v.size();i++)
                {
                    v.pop_back();
                }
            }
            if(x==1)
            {
                for( i=0;i<v1.size();i++)
                {
                    v1.pop_back();
                }
            }

            if(x==2)
            {
                for(i=0;i<v2.size();i++)
                {   
                    v2.pop_back();
                }
            }
        }
   
    
   }

   return 0;

}