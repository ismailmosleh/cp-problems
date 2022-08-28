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
    int n, k, l, a, s, t = 0;
    cin >> n >> k;
    vector<int> ans(k);
    for (int i = 0; i < n; i++)
    {
        s = 0;
        cin >> l;
        if (l > k)
        {
            for (int j = 0; j < k; j++)
            {
                if (t < k)
                {
                    t++;
                }
                cin >> a;
                s += a;
                ans[j] = max(s, ans[j]);
                for (int m = j + 1; m < t; m++)
                {
                    if (s > ans[m] - ans[m - j - 1])
                    {
                        ans[m] = ans[m - j - 1] + s;
                    }
                }
            }
            for (int j = k; j < l; j++)
            {
                cin >> a;
            }
        }
        else
        {
            for (int j = 0; j < l; j++)
            {
                if (t < k)
                {
                    t++;
                }
                cin >> a;
                s += a;
                ans[j] = max(s, ans[j]);
                for (int m = t - 1; m > j; m--)
                {
                    if (s > ans[m] - ans[m - j - 1])
                    {
                        ans[m] = ans[m - j - 1] + s;
                    }
                }
            }
        }
        for (auto x : ans)
        {
            cout << x << '\t';
        }
        cout << '\n';
    }
    cout << ans[k - 1] << '\n';
    return 0;
}