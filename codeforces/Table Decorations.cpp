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
//href:  https://codeforces.com/problemset/problem/478/C


void solve() {
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long r, g, b;
    cin >> r >> g >> b;
    long long s = r + g + b;
    long long max = s / 3;
    vector<long long> v = { r,g,b };
    sort(v.begin(), v.end());
    if (v[2] >= max * 2) {
        cout << min(v[0] + v[1], max) << endl;
        return 0;
    }
    else {
        cout << max << endl;
        return 0;
    }
    return 0;
}