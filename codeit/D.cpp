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
int compareX(pair<int, int> a, pair<int, int> b) {
    if (a.first < b.first) return -1;
    if (a.first > b.first) return 1;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    int x, y;
    cin >> n >> m;
    vector<pair<int, int>> a(n), b(m);
    sort(a.begin(), a.end(), compareX);
    sort(b.begin(), b.end(), compareX);
    bool bellowUp = false, aboveDown = false;
    forn(i, n)
    {
        cin >> a[i].first >> a[i].second;
    }
    forn(i, m)
    {
        cin >> b[i].first >> b[i].second;
    }

    cin >> x >> y;
    forn(i, n)
    {
        if (x == a[i].first && y == a[i].second) {
            aboveDown = true;
            bellowUp = true;
            break;
        }
        if (x <= a[i].first && y <= a[i].second)
        {
            if (i == 0)
            {
                bellowUp = true;
                break;
            }
            else if (a[i].first == a[i - 1].first) {
                if (x == a[i].first || y <= a[i].second || y <= a[i - 1].second) {
                    aboveDown = true;
                    bellowUp = true;
                    break;
                }
            }
            else {
                //cout << "ah" << x * (a[i].second - a[i - 1].second) / (a[i].first - a[i - 1].first);

                if (y <= a[i - 1].second + x * (a[i].second - a[i - 1].second) / (a[i].first - a[i - 1].first)) {
                    bellowUp = true;
                    break;
                }
            }
        }
    }
    forn(i, m)
    {
        if (x >= b[i].first && y >= b[i].second)
        {
            if (x == b[i].first && y == b[i].second) {
                aboveDown = true;
                bellowUp = true;
                break;
            }
            if (i == 0)
            {
                aboveDown = true;
                break;
            }
            else if (b[i].first == b[i - 1].first) {
                if (x == b[i].first || y >= b[i].second || y >= b[i - 1].second) {
                    aboveDown = true;
                    bellowUp = true;
                    break;
                }
            }
            else {
                //cout << "ah" << x * (a[i].second - a[i - 1].second) / (a[i].first - a[i - 1].first);

                if (y >= b[i - 1].second + x * (b[i].second - b[i - 1].second) / (b[i].first - b[i - 1].first)) {
                    aboveDown = true;
                    break;
                }
            }
        }
    }
    if (bellowUp && aboveDown)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}