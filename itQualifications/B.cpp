#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;
// href:
vector<bool> visited;
queue<int> q;
vector<vector<int>> adj;
vector<vector<int>> weights;
long long max_distance_global = 0;
long long max_dist = 0;

void dfs(int node, long long distance, int weight)
{
    if (!visited[node])
    {
        distance += weight;
        visited[node] = true;
        max_dist = max(max_dist, distance);
        for (auto next : adj[node])
        {
            dfs(next, distance, weights[node][next]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<int> N(t);


    int u, v, w;


    for (int i = 0;i < t;i++) {
        cin >> N[i];
        adj.clear();
        weights.clear();
        adj.resize(N[i] + 1);
        weights.resize(N[i] + 1, vector<int>(N[i] + 1));
        for (int j = 0;j < N[i] - 1;j++) {
            cin >> u >> v >> w;
            adj[u].push_back(v);
            adj[v].push_back(u);
            weights[u][v] = w;
            weights[v][u] = w;
        }
        max_dist = 0;
        for (int node = 1;node <= N[i];node++) {
            visited.clear();
            visited.resize(N[i] + 1);
            if(adj[node].size()==1) dfs(node, 0, 0);
        }
        max_distance_global = max(max_distance_global, max_dist);
    }
    cout << max_distance_global;
    return 0;
}