#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n); // ইনপুট অ্যারে
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    // lower_bound ফাংশন ব্যবহার করে প্রথম অবস্থান বের করা
    auto it = lower_bound(arr.begin(), arr.end(), target);
    // যদি target খুঁজে না পাওয়া যায়
    if (it == arr.end() || *it != target) {
        cout << -1 << endl;
    } else {
        cout << it - arr.begin() << endl; // iterator থেকে index বের করা
    }
    return 0;
}
