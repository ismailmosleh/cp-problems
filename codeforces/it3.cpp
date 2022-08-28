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
    string t;
    int k;
    cin >> t;
    string s, ss, tempo, c;
    for (int i = 0;i < t.size(); i++) {
        if (t[i] == 'a') {
            s += tempo + 'a';
            c += tempo;
            tempo = "";
        }
        else {
            tempo += t[i];
        }
    }
    //cout <<tempo<<'\n'<<c;
    if (tempo.size() == c.size()) {
        if (tempo == c) {
            cout << s;
        }
        else {
            cout << ":(";
        }
    }
    else if (tempo.size() < c.size()) {
        cout << ":(";
    }
    else {
        k = tempo.size() - c.size();
        if (k % 2 == 1) {
            cout << ":(";
        }
        else {
            s+=tempo.substr(0, k /2);
            c += tempo.substr(0, k /2);
            tempo = tempo.substr(k / 2, tempo.size() - k /2);
            if (tempo == c) {
                cout << s;
            }
            else cout << ":(";
        }
    }
    return 0;
}