#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    
    set<string> name; 
    string names;
    
    while (n--) {
        cin >> names; 
        if (name.count(names)) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl; 
            name.insert(names); 
        }
    }

    return 0;
}
