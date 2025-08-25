#include <bits/stdc++.h>
using namespace std;

int main() 
{

    int n;
    cin>>n;
    int num1;
    cin>>num1;
    for(int i=0;i<n-1;i++)
    {
        
    int num2;
    cin >>num2;
    while (num2!= 0) 
    {
        int temp=num2;
        num2=num1%num2;
        num1= temp;
    }
    cout <<num1<< endl;
    }
    

}
