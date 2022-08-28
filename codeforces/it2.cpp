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
    int t, k;
    cin >> t;
    vector<int> v;
    cin >> k;
    v.push_back(k);
    if (t == 1) {
        cout << k;
    }
    else {
        cin >> k;
        v.push_back(k);
        for (int it = 3;it <= t;it++) {
            cin >> k;
            if (it == 3) {
                v.push_back(v[0] + k);
            }
            else {
                v.push_back(max(v[v.size() - 2], v[v.size() - 3]) + k);
            }
        }
        cout<<max(v[v.size() - 2], v[v.size() - 1]);
    }
    return 0;
}