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


void solve() {
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, j, best;
    cin >> t;
    for (int it = 1;it <= t;it++) {
        cin >> n;
        j = 0;
        best = 0;
        vector<int> v(n);
        for (int i = 0;i < n;i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        cout << "Case #" << it << ": ";
        for (int i = 0;i < n;i++) {
            if (v[i] > j) {
                j += 1;
            }
            else {
                best = max(best, j);
                j = v[i];
            }
        }
        best = max(best, j);
        cout << best << "\n";
    }
    return 0;
}