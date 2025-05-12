#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,x;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n],l=0,b=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	       l+=a[i]; }

            b=l-n;
	        
	     cout<<b<<endl;
	        
	    }
        
	    
	}
	


