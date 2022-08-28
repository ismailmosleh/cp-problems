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
#include <cstring>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;
//href:
void solve(int n){
    int m;
    if(n%11==0){
        cout<<"YES"<<'\n';
    }
    else {
        m=n%11;
        n=n-m*111;
        if(n%11==0 && n>=0){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    
    cin >> t;
    string s;
    for (int i = 1; i <= t; i++)
    {
        cin>>n;
        solve(n);
    }
    return 0;
}