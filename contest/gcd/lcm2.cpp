#include <bits/stdc++.h>
using namespace std;

int gcd(int num1, int num2) {
    while (num2!= 0) 
    {
        int temp=num2;
        num2=num1%num2;
        num1=temp;
    }
    return num1;
}
long long lcm(int num1, int num2) {
    return (1LL*num1*num2)/gcd(num1,num2);
}
int main() {
    int t;
    cin>>t;
    while (t--) 
    {
        int num,n;
        cin>>num; 
        long long ans=1;
        for(int i=0;i<num;i++) 
        {
            cin>>n;
            ans=lcm(ans,n);
        }
        cout<<ans<<endl;
    }
    
}
