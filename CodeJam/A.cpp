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
        int n, m;
        cin >> n >> m;
        cout << "Case #" << it << ":\n";
        cout << "..";
        for (int i = 0;i < m-1;i++) {
            cout << "+-";
        }
        cout << "+\n";
        cout << "..";
        for (int i = 0;i < m-1;i++) {
            cout << "|.";
        }
        cout << "|\n";
        for (int j = 0;j < n - 1;j++) {
            for (int i = 0;i < m;i++) {
                cout << "+-";
            }
            cout << "+\n";
            for (int i = 0;i < m;i++) {
                cout << "|.";
            }
            cout << "|\n";
        }
        for (int i = 0;i < m;i++) {
                cout << "+-";
            }
            cout << "+\n";
    }
    return 0;
}