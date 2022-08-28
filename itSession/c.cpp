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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, w, b, s = 0, x, y;
    cin >> n;
    while (n > 0)
    {
        cin >> b >> w;
        if (w <= b)
        {
            n--;
            s += w;
        }
        else
        {
            x = 0;
            y = 0;
            s += b;
            if (n % 2 == 0)
            {
                x += w - b;
            }
            else
            {
                y += w - b;
            }
            n--;
            while (n > 0)
            {

                cin >> b >> w;
                if (w <= b)
                {
                    n--;
                    s += w;
                    break;
                }
                else
                {
                    s += b;
                    if (n % 2 == 0)
                    {
                        x += w - b;
                    }
                    else
                    {
                        y += w - b;
                    }
                    n--;
                }
            }
            if (x < y)
            {
                s += x;
            }
            else
            {
                s += y;
            }
        }
    }
    cout << s << '\n';
}