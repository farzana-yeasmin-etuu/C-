#include <bits/stdc++.h>
using namespace std;

void DFS(int node, vector<vector<int>> &adj, vector<bool> &visited) {
    visited[node] = true; // node visited
    cout << node << " ";  // বর্তমান node print

    for (int neighbour : adj[node]) { // বর্তমান node এর neighbour গুলো
        if (!visited[neighbour]) { // যদি neighbour visit না হয়
            DFS(neighbour, adj, visited); // recursive call
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(n, false);
    int start;
    cin >> start; // starting node
    DFS(start, adj, visited);

    return 0;
}
