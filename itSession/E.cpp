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

bool solve(string s)
{
    int x;
    char c = s[2];
    x = s[0] + s[1];
    if (x % 2 == 1)
    {
        return false;
    }
    x = s[3] + s[4];
    if (x % 2 == 1)
    {
        return false;
    }
    x = s[4] + s[5];
    // cout << x << y;
    if (x % 2 == 1)
    {
        return false;
    }
    x = s[7] + s[8];
    if (x % 2 == 1)
    {
        return false;
    }
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'Y' || c == 'U')
        return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x, y;
    bool b;
    string s;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        cin >> s;
        b = solve(s);
        if (b)
        {
            cout << "valid" << '\n';
        }
        else
        {
            cout << "invalid" << '\n';
        }
    }
    return 0;
}