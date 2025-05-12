#include <bits/stdc++.h>
using namespace std;

int main()
{ 
string s;
getline(cin,s);
int t= s.size();
int W_count=0;
for(int i=0;i<t;i++)
{
   if((s[i]=='.' || s[i]=='!' || s[i]=='?') && (s[i]!='...' || s[i]!='!!!' || s[i]!='?!'))
   {  W_count++;
   
   }

}

cout<<W_count;



}