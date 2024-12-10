#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<int>> &adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs(vector<vector<int>> &adj, int n)
{
    stack<int> s;

    int vec_size = adj.size();
    vector<bool> visited(vec_size, false);

    s.push(n);
    visited[n] = true;

    while (!s.empty())
    {
        int num = s.top();
        cout << num << " ";
        s.pop();

        for (int x : adj[num])
        {
            if (!visited[x])
            {
                visited[x] = true;
                s.push(x);
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
    addEdge(adj, 3, 4);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 2);
    addEdge(adj, 5, 1);

    cout << "dFS starting from 0 : \n";
    dfs(adj, 0);
}

// out = 0 5 3 4 2 1
// 0
// 5 3 1
// 3 1
// 4 1
// 2 1
// 1
//