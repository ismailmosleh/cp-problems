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


int solve(int n, int a, int b, int c) {
    int m =0;
    if (n == 0) {
        return 0;
    }
    if(n==a){
        m= 1;
    }
    if(n==b){
        m= 1;
    }
    if(n==c){
        m= 1;
    }
    if(n>a)
        m = max(m,1+solve(n-a,a,b,c));
    if(n>b)
        m = max(m,1+solve(n-b,a,b,c));
    if(n>c)
        m = max(m,1+solve(n-c,a,b,c));  
    if(n<a && n<b && n<c)
        m = -10000000;

    return m;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << solve(n, a, b, c) << endl;
    return 0;
}