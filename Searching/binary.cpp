#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> v,int n,int key)
{
int start=0,end=n;
while(start<=end)
{
int mid=(start+end)/2;
if(v[mid]==key)
{
    return mid;
}
else if(v[mid]>key)
{
   end=mid-1;
}
else{
     start=mid+1;
}
}
return -1;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int key;
    cin>>key;
    int result =binary_search(v,n,key);
    cout<<result<<endl;
}
