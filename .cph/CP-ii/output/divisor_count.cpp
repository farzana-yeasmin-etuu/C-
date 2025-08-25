#include <bits/stdc++.h>
using namespace std;
// একটি ফাংশন যা একটি সংখ্যার divisor count বের করবে
int divisorCount(int n) {
    int cnt = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++; // i হলো divisor
            if (i != n / i) cnt++; // n/i হলো আরেকটা divisor (যদি আলাদা হয়)
        } }
    return cnt; }

// কাস্টম sort এর জন্য comparator ফাংশন
bool cmp(int a, int b) {
    int da = divisorCount(a);
    int db = divisorCount(b);
    if (da != db) return da < db; // divisor count কম হলে আগে আসবে
    return a > b; // সমান হলে বড় সংখ্যা আগে আসবে
}
int main() {
    vector<int> arr;
    for (int i = 1; i <= 1000; i++) arr.push_back(i);
// সাজানো
    sort(arr.begin(), arr.end(), cmp);
    int T;
    cin >> T;
    for (int cs = 1; cs <= T; cs++) {
        int n;
        cin >> n;
        cout << "Case " << cs << ": " << arr[n - 1] << "\n";
    }
    return 0; }
