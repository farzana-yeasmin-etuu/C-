#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
  vector<int> new_arr(arr.begin() + d, arr.end());  
   new_arr.insert(new_arr.end(), arr.begin(), arr.begin() + d);

   
    for (int num : new_arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
