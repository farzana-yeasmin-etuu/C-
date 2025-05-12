#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    
    for (char x : s) {
        if (x == '(' || x == '{' || x== '[') {
            st.push(x); 
        } else {
            if (st.empty()) 
            return false; 
            
 
            if ((x == ')' && st.top() == '(') || (x == '}' && st.top() == '{') || (x == ']' && st.top() == '['))
                 {
                st.pop(); 
            } else {
                return false; 
            }
        }
    }
    
    return st.empty(); 
}

int main() {
    string s;
    cin >> s;

    if (isValid(s)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
