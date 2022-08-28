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
//href:

void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        cin >> n;
        int t[n], s[n];
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> t[i] >> s[i];
        }
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i; j < n - 1; j++)
            {
                for (int k = j; k < n; k++)
                {
                    if (s[i] != s[j] && s[i] != s[k] && s[j] != s[k])
                    {
                        m += 1;
                    }
                    else if (t[i] != t[j] && t[i] != t[k] && t[j] != t[k])
                    {
                        m += 1;
                    }
                }
            }
        }
        cout << m << '\n';
    }
    return 0;
}