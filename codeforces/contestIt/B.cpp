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
    int r, x, y, x1, y1;
    cin >> r >> x >> y >> x1 >> y1;
    float d = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
    int ans = ceil(d / (2 * r));
    cout << ans;
    return 0;
}