#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,max_sum=0,current_sum=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        current_sum+=arr[i];

        if(current_sum>max_sum)
        {
            max_sum=current_sum;
        }
        if(current_sum<0)
        { 
            current_sum=0;
        }
    }
    cout<<max_sum<<endl;
}