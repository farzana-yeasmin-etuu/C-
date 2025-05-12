#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    int max_ = v[0];
    int index = 0;
    for (int i = 1; i < n; ++i)
    {
        if (v[i] > max_)
        {
            max_ = v[i];
            index = i;
        }
    }

    int s = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        if (i != index && v[i] > s)
        {
            s = v[i];
        }
    }

    cout << (index + 1) << " " << s << endl;

   
}
