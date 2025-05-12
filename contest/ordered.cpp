#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v1(n), v2(n);
        for (auto &i : v1)
            cin >> i;
        for (auto &i : v2)
            cin >> i;
        bool f = false;
        for (int i = 0; i < n; i++)
        {
            int p = v1[i];
            vector<pair<int, int>> k;
            for (int j = 0; j < n; j++)
            {
                k.push_back({abs(v1[j] - p), v1[j]});
            }
            sort(k.begin(), k.end());
            vector<int> s;
            for (int j = 0; j < n; j++)
            {
                s.push_back(k[j].second);
            }
            if (s == v2)
            {
                cout << i + 1 << endl;
                f = true;
                break;
            }
        }
        if (!f)
            cout << -1 << endl;
    }
    return 0;
}