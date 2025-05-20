#include<bits/stdc++.h>
using namespace std;
int median(vector<vector<int>> &matrix,int r,int c){
    int mi=INT_MAX;
    int mx=INT_MIN;
    for(int i=0;i<r;i++){
        mi=min(mi,matrix[i][0]);
        mx=max(mx,matrix[i][c-1]);
    }
    int ans;
    while(mi <= mx){
        int mid = (mi+mx)/2;
        int cnt = 0;
        for(int i=0;i<r;i++){
            cnt += upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
        }
        if(cnt  >=  (r*c+1)/2){
            ans=mid;
            mx=mid-1;
        }else{
            mi=mid+1;
        }
    }
    return ans;
}
int main(){
  int n,m;cin>>n>>m;
  vector<vector<int>>matrix(n,vector<int>(m));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>matrix[i][j];
    }
  }
 cout<<"Median is : "<<median(matrix,n,m);

return 0;
}
