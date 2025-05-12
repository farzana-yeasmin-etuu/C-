#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    string command;
    while (true)

    {
        cin >> command;
        if (command == "push")
        {
            int n;
            cin >> n;
            q.push(n);
            cout << "ok" << endl;
        }
        else if (command == "pop")
        {
            cout << q.front() << endl;
            q.pop();
        }
        else if (command == "front")
        {
            cout << q.front() << endl;
        }
        else if (command == "size")
        {
            cout << q.size() << endl;
        }
        else if (command == "clear")
        {
            while (!q.empty())
            {
                q.pop();
            }
            cout << "ok" << endl;
        }
        else if (command == "exit")
        {
            cout << "bye" << endl;
            break;
        }
    }
}