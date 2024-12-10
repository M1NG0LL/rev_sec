#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<int>> &adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void bfs(vector<vector<int>> &adj, int s)
{
    queue<int> q;
    int vec_size = adj.size();

    vector<bool> visited(vec_size, false);

    q.push(s);
    visited[s] = true;

    while (!q.empty())
    {
        int num = q.front();
        cout << num << " ";
        q.pop();

        for (int x : adj[num])
        {
            if (!visited[x])
            {
                visited[x] = true;
                q.push(x);
            }
        }
    }
}

int main()
{
    int V = 6;

    vector<vector<int>> adj(V);

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 3);
    addEdge(adj, 0, 5);
    addEdge(adj, 1, 0);
    addEdge(adj, 1, 2);
    addEdge(adj, 3, 4);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 2);
    addEdge(adj, 5, 1);

    cout << "BFS starting from 1 : \n";
    bfs(adj, 1);
}