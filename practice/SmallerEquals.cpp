#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &A, int B) {
    //Eithe on write one line of code
    // return upper_bound(A.begin(), A.end(), B) - A.begin();//this one reduces codes
    //Or write the full binary code both will be accepted
    int ans = 0;
    int low = 0,high=A.size()-1;
    while(low <= high){
        int mid=low+(high-low)/2;
        if(A[mid] > B){
        high=mid-1;
        }else{
            ans=mid+1;low=mid+1;
        }
    }
return ans;
}
int main(){
    int n,b;cin>>n>>b;
    vector<int>a(n);
    for(auto &i:a)
        cin>>i;
    cout<<solve(a,b);
return 0;
}
