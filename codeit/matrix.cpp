#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;
#define forn(i, n) for (int i = 0; i < n; i++)
#define fornv(start, i, n) for (int i = start; i < n; i++)
#define fordesc(i, n, stopexclus) for (int i = n; i > stopexclus; i--)
#define foreach(i, v) for (auto &i : v)
#define forstr(i, s) for (int i = 0; s[i]; i++)
#define vi vector<int>
#define vll vector<long long>
#define INF 2e7
#define ll long long

bool dep(vector<int>l, vector<int>R) {
    forn(i, R.size()) {
        if (R[i - 1] * l[i] != R[i] * l[i - 1]) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, x;
    cin >> n >> m;
    vector<vector <int>> R(n);
    forn(i, n) {
        forn(j, m)
        {
            cin >> x;
            R[i].push_back(x);
        }
    }
    int v = 0;
    forn(i, n)
    {
        fornv(i + 1, j, n) {
            if (dep(R[i], R[j])) {
                v += 1;
            }
        }
    }
    if(v)
    int w = 0;
    forn(i, m)
    {
        fornv(i + 1, j, m) {
            vector<int> l, k;
            forn(s, n) {
                l.push_back(R[s][i]);
            }
            forn(s, n) {
                k.push_back(R[s][j]);
            }
            if (dep(l, k)) w += 1;
        }
    }
    cout << max(min((n - v), m - w), 1);
    return 0;
}