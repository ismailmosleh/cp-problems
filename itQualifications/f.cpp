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
// Input
// The first line will contain an integer 1≤T≤1000, the number of test cases. The T following lines each will contain 2 real numbers 0≤x≤90 and 0≤y≤40, respectively the inclination of the water's surface relative to the original position (when the train's velocity is constant) and the inclination of the earth's surface under the train at the same moment.

// Output
// You must output T lines, the acceleration ai in each test case.



void solve() {
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    float x,y,ah,av;
    for (int it = 1;it <= t;it++) {
        cin >>x>>y;
        x=x/180*3.14159265358979323846;
        y=y/180*3.14159265358979323846;
        ah=0;
        av=sin(x)/cos(y);
        if(y!=0) ah=(cos(x)-1)/sin(y);

        cout<<sqrt(pow(ah,2)+pow(av,2))*9.8<<endl;

    }
    return 0;
}