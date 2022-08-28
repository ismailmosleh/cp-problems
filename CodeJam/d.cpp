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
        int n, m,p, y, z, sum = 0, ff, couut = 0;
        cin >> n;
        vector<int> v(n), s(n);
        vector<bool> visited(n);
        //cout << visited[0];
        set<int> f;
        for (int i = 0;i < n;i++) {
            cin >> v[i];
            f.insert(i);
        }
        for (int i = 0;i < n;i++) {
            cin >> s[i];
            if (s[i] != 0) f.erase(s[i] - 1);
        }
        cout << "Case #" << it << ": ";
        for (auto x : f) {
            m = v[x];
            cout << x << " " << m << "\n";
        }
        for (auto x : f) {
            m = v[x];
            y = x;
            //cout << x << " " << m << "\n";
            break;
        }
        p=y;
        ff = f.size();
        //*
        while (ff)
        {
            for (auto x : f) {
                if (v[y] >v[x]) {
                    y = x;
                    p=x;
                    m = v[x];
                }
            }
            cout<<"len f "<<ff<<" y= "<<y<<'\n';
            f.erase(y);
            /*couut = v[y];
            z = y;
            while (y != 0) {
                y = s[y] - 1;
                if (visited[y] == false)
                {
                    if (couut <= v[y]) {
                        couut = v[y];
                        z = y;
                    }
                }
                else break;
            }
            visited[z] = true;
            cout << couut << " " << z << "\n";
            sum += couut;*/
            y=p;
            ff--;
        }
        cout << sum << "\n";
        //*/

    }
    return 0;
}