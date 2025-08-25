#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k; 

        vector<int> v(n); 
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int count = 0;
        int i = 0;

        while (i <= n - k) { 
            bool hike = true;
            for (int j = 0; j < k; j++) {
                if (v[i + j] == 1) 
                { 
                    hike = false;
                    break;
                }
            }

            if (hike) {
                count++;   
                i = i + k + 1; 
            } else {
                i++;
            }
        }

        cout << count << endl; 
    }
   
}
