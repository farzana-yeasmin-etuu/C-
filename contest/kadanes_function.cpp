#include<bits/stdc++.h>
using namespace std;
 
int max_subarrary(int arr[],int n)

{
    int max_sum=0,current_sum=0;
    for(int i=0;i<n;i++)
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
    return  max_sum;
}

int main()
{
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    cout<<max_subarrary(arr,n);
}