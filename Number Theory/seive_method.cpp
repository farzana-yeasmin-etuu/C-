#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mark[n+1];
    for(int i=1;i<=n;i++) {
        mark[i]=0; 
        mark[1]=1;
        for(int i=2;i<=n;i++){
        if(mark[i]==1)
        {
           continue;
        }
        for(int j=i*i;j<=n;j+=i)
        {
            mark[j]=1;
            } } }

    
    for(int i=2;i<=n;i++)
    {
        if(mark[i]==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;


    // divisor count

    cout<<"divisor count"<<endl<<endl;
     int divisor[n+1];
     for(int i=0;i<=n;i++)
    {  divisor[i]=0;  
    }
       
        for(int i=1;i<=n;i++){
       for(int j=i;j<=n;j+=i)
        {
            divisor[j]++;
        } }

    for(int i=1;i<=n;i++)
    {
       cout<<i<<" has  "<<divisor[i]<<"  divisor ."<<endl;
    }

}