#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long num1,num2;
    cin >>num1>>num2;
    long long n=(num1*num2);
    while (num2!= 0) 
    {
        int temp=num2;
        num2=num1%num2;
        num1= temp;
    }
    cout <<(n/num1)<< endl;

}
