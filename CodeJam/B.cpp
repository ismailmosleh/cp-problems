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
    int t;
    cin >> t;
    for (int it = 1;it <= t;it++) {
        int a, b, c, d, A, B, C, D;
        cin >> A >> B >> C >> D;
        cin >> a >> b >> c >> d;
        a = min(a, A);
        b = min(B, b);
        c = min(c, C);
        d = min(d, D);
        cin >> A >> B >> C >> D;
        a = min(a, A);
        b = min(B, b);
        c = min(c, C);
        d = min(d, D);
        cout << "Case #" << it << ": ";
        if (a + b + c + d >= 1000000) {
            cout << a << " ";
            if (b < 1000000 - a) {
                cout << b << " ";
                if (c < 1000000 - a - b) {
                    cout << c << " ";
                    cout << 1000000 - a - b - c << "\n";
                }
                else {
                    cout << 1000000 - a - b << " " << 0<<"\n";
                }
            }
            else {
                cout << 1000000 - a << " " << 0 << " " << 0<<"\n";
            }
        }
        else {
            cout << "IMPOSSIBLE" << "\n";
        }
    }
    return 0;
}