#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        int c = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 1; i < n; i++)
        {
            if (v[i]>=v[i-1])
            {
                c++;
            }

            else
            {
                  break;
            }
        }
        if (c == n-1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}