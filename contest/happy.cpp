#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        
     int c=0;
        for (int i = 0; i <= n - 3; i++) {
            string sub = s.substr(i, 3);
            if ((sub[0] == 'a' || sub[0] == 'e' || sub[0] == 'i' || sub[0] == 'o' || sub[0] == 'u') &&
        (sub[1] == 'a' || sub[1] == 'e' || sub[1] == 'i' || sub[1] == 'o' || sub[1] == 'u') &&
            (sub[2] == 'a' || sub[2] == 'e' || sub[2] == 'i' || sub[2] == 'o' || sub[2] == 'u')) {
               c++;
                break;
            }
        }

        if (c!=0) 
        {cout << "HAPPY" << endl; }
        else
         { cout << "SAD" << endl; 
        }

    }

}