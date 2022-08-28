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
    int t, n = 1, m = 0;
    string a, s, b;
    cin >> t >> a;

    for (int it = 2;it <= t;it++) {
        cin >> s;
        if (s == a) {
            n += 1;
        }
        else {
            b = s;
            m += 1;
        }
    }
    if (m < n) {
        cout << a;
    }
    else {
        cout << b;
    }
    return 0;
}