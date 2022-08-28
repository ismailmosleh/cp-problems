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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int it = 1;it <= t;it++) {
        int n, a, c;
        cin >> n;
        string s;
        cin >>s;
        deque<int> v;
        int i = 0, m = 0;
        while (i < n) {
            if (s[i] == '-') {
                a = 1;
            }
            else {
                a = -1;
            }
            v.push_front(a);
            if (a < 0);
            else if (a == 0) {
                m += 1;
            }
            else if (a % 3 == 0) {
                m += 1;
            }
            for (int j = 1;j <= i;j++) {
                //cout << v[j - 1] << " " << a << " " << s[j] << " ";
                v[j]+=a;
                if (v[j] < 0);
                else if (v[j] == 0) {
                    m += 1;
                }
                else if (v[j] % 3 == 0) {
                    m += 1;
                }
            }
            /*for (auto x : w) {
                cout << x << "  ";
            }*/
            //cout << "\n";
            i++;
        }
        cout << m << '\n';
        //cout << b-a;
        /*if (solve( a, b)) {
            cout << "YES" << '\n';
        }
        else cout << "NO" << '\n';*/
    }
    return 0;
}