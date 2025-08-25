#include<bits/stdc++.h>
using namespace std;
const int MAX=20000000;

vector<bool>is_prime(MAX+1,true);
void sieve(){
    is_prime[0]=is_prime[1]=false;

    for(long long i=2;i<=MAX;i++)
    {
        if(is_prime[i])
        {
            for( long long j=i*i; j<=MAX; j+=i)
            {
                is_prime[j]=false;
            }
        }
    }
}
vector<pair<int, int>> twin_prime;
void twin(){
    for( long long i=2; i+2<=MAX; i++){
        if(is_prime[i] && is_prime[i+2]){
            twin_prime.push_back({i,i+2});
        }
    }
}
int main(){
    sieve();
    twin();
    int s;
    while(cin >> s){
        cout<<"("<<twin_prime[s-1].first<<", "<<twin_prime[s-1].second<<")\n";
    }
 return 0;
}