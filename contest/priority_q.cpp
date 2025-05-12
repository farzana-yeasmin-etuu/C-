#include<bits/stdc++.h>
using namespace std;
int main()
{

priority_queue<int> pq;

while(true) {

    string s;
    cin>>s;

    if(s=="insert")
    {  int x;
        cin>>x;
        pq.push(x);
    }
    if(s=="extract")
    {
       
        cout<<pq.top()<<endl;
        pq.pop();
       
    }
    if(s=="end")
    {
        break;
    } }
}