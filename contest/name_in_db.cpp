#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    
    set<string> exist; 
    string name;
    
    while (n--) {
        cin >> name; 
        if (exist.count(name)) {
            cout << name  << endl; 
        }
         else {
            cout << "OK" << endl; 
            exist.insert(name); 
        }
    }

    return 0;
}
