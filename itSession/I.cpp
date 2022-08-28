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
    string s;
    while (t--)
    {
        map<char, int> m;
        cin >> s;
        int i = 0, n = s.size(), ans = 0, v;
        while (i < n)
        {
            v = m[s[i]] + 1;
            m[s[i]] = v;
            if (ans < v)
            {
                ans = v;
            }
            i++;
        }
        if (ans < n / 2 + 1 && n % 2 == 0)
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