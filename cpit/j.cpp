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
    long long c, a;
    cin >> c >> a;
    long long day = 0, n, rm = c;
    double x,y;
    if (c <= a) {
        n = c;
    }
    else {
        x=(-1+sqrt(1+8*(c-a)))/2;
        n=x;
        y=x-n;
        if(y>0){n+=1;}
        n+=a;
    }
    cout << n << '\n';
    return 0;
}