#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

  map<char, int> freq;

//   if (k > n) {
//     cout << -1 << endl;
//     return 0;
// }
    for (char c : s) {
        freq[c]++;
    }

int distinct = freq.size();

    if (distinct == k) {
        cout << 0 << endl;
    } else if (distinct > k) {
        cout << distinct - k << endl;
    } else {
        
        vector<int> c;
        for (auto it : freq) {
            c.push_back(it.second);
        }

        //sort(c.begin(), c.end(), greater<int>());

        int n = k - distinct;
        int m = 0;
        for (int i = 0; i < n; i++) {

            m++;
        }

        cout << m << endl;  }
    

    return 0;
}
