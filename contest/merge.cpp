#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int left,int mid, int right)
{
    int n1 =mid-left;
    int n2 =right-mid;

    vector<int> L(arr.begin()+left,arr.begin()+mid);
    vector<int> R(arr.begin()+mid,arr.begin()+right);

    int i=0,j=0,k=left;

    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
            arr[k++]=L[i++];
        else
            arr[k++]=R[j++];
    }

    while(i<n1)
        arr[k++]=L[i++];
    while(j<n2)
        arr[k++]=R[j++];
}

void mergeSort(vector<int> &arr,int left,int right)
{
    if(right-left<=1)
        return;

    int mid=(left+right)/2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid,right);
    merge(arr,left,mid,right);
}

int main()
{
    int n=6;

    vector<int>arr(n);
    for (int i=0;i<n;i++)
        cin>>arr[i];

    mergeSort(arr,0,n);

    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    cout<<endl;
    return 0;
}
