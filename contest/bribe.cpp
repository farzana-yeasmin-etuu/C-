#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	
	while(t--)
	{
	    
	  int a[4];
      int g=0;
	  for(int i=0;i<=4;i++)
	    { 
	        cin>>a[i];
	        if(a[i]!=7)
	        {
	            g+=100;
	        }
	    }
	    cout<<g<<endl;
	    
	}

}
