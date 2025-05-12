#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> s(2 * n); 
    for (int i = 0; i < 2 * n; i++) {
        cin >> s[i]; 
    }
     set<int> t; 
    int m = 0;

    for (int i = 0; i < 2 * n; i++) {
       

        if (t.find(s[i]) == t.end()) {
            
            t.insert(s[i]);
        } else {
            
            t.erase(s[i]);
        }
        int a = t.size();
        m = max(m, a);
    }

    cout << m << endl;

    return 0;
}
