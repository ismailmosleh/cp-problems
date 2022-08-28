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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, y, n, m;
        bool b = 1;
        cin >> n >> m;
        vector<vector<int>> adj(n);
        vector<int> visited(n);
        for (int i = 0; i < m; i++)
        {
            cin >> a >> y;
            adj[a - 1].push_back(y - 1);
            adj[y - 1].push_back(a - 1);
        }

        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                // cout << i << " 1 ";
                visited[i] = 1;
                for (auto u : adj[i])
                {
                    if (visited[u] == 1)
                    {
                        b = 0;
                        break;
                    }
                    else
                    {
                        visited[u] = 2;
                        // cout << u << " 2 ";
                    }
                }
            }
            else
            {
                for (auto u : adj[i])
                {
                    if (!visited[u])
                    {
                        if (visited[i] == 1)
                        {
                            visited[u] = 2;
                        }
                        else
                        {
                            visited[u] = 1;
                        }
                    }
                    else
                    {
                        if (visited[u] == visited[i])
                        {
                            b = 0;
                            break;
                        }
                    }
                }
            }
        }
        if (b)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}