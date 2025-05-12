#include <bits/stdc++.h>  
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    
    stack<int> st;

    while (T--) {
        int query;
        cin >> query;
        
        if (query == 1) {  
            int n;
            cin >> n;
            st.push(n);
        } 
        else if (query == 2) {  
            if (!st.empty()) {
                st.pop();
            }
        } 
        else if (query == 3) {  
            if (!st.empty()) {
                cout << st.top() << '\n';
            } else {
                cout << "Empty!" << '\n';
            }
        }
    }
    
    return 0;
}
