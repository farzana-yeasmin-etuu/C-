#include<bits/stdc++.h>
using namespace std;

void BFS(int start, vector<vector<int>> &adj, int n) {
    vector<bool> visited(n, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int neighbour : adj[node]) {
            if (!visited[neighbour]) {
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }
}


int main()
{
    int n,e;
    cin>>n>>e;
    vector<vector<int>>adj(n);
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //printing connected edges
     for (int i = 0; i < n; ++i) {
        std::cout << "Vertex " << i << ": ";
        for (int neighbor : adj[i]) {
            std::cout << neighbor << " ";
        }
        cout<<endl;
}
}