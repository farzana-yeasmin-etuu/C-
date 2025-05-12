#include<bits/stdc++.h>
using namespace std;

int main()
{
    char letter[2][4];
    for(int i=0;i<2;i++){
     for(int j=0;j<4;j++)
     {
        cin>>letter[i][j];
     } }

     for(int i=0;i<2;i++){
        for(int j=0;j<4;j++)
        {
           cout<<letter[i][j]<<" ";
        } 
    cout<<"\n";
}
}