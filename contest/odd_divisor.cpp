#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,k,l,h,divisor_count,count;
    cin>>x;
    while(x--)
    {
        cin>>k>>l>>h;
        divisor_count=0;
         
        for(int i=l;i<=h;i++)
        {    count=0;
            
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
            
          if(count==k)
         {
           divisor_count++; 
         } 
            

         }
       
          cout<<divisor_count<<endl;
        
       
        }
       
    

}
