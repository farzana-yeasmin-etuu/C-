#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;

    size_t idx = s.find("1111111");
    size_t idx2 =s.find("0000000");
  
    if(idx != string::npos || idx2!= string::npos)
        cout << "YES"<<endl;
    else
        cout <<"NO"<<endl;;

    return 0;
}