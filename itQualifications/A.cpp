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
// Let S be a sequence of bits (consisting of only 0s and 1s) of length n. S is said to be a valid sequence if and only if there are no two successive equal bits in S. For example the sequences "01", "1", "0", "101" are valid sequences, but the sequences "00" and "011" are not valid sequences.

// Given the length of a valid sequence S, find the number of valid subsequences of S.

// Note 1 : A subsequence of a given sequence is a sequence that can be derived from the given sequence by deleting some or no elements without changing the order of the remaining elements.

// Note 2 : if S is a valid sequence of length n, then, the number of valid subsequences of S depends only on n. For example if n=3, then, the sequences "010" and "101" has the same number of valid subsequences.



int solve(int n) {
    if (n == 1) return 1;
    if (n == 2) return 3;
    if (n == 3) return 6;
    else {
        vector<int> dp(n + 1);

        long long sum = n;
        dp[0] = 0;
        dp[1] = 1;
        dp[2]=3;
        dp[3]=6;
        for (int i = 4;i <= n;i++) {
            sum=dp[i-2]+dp[i-1]+2;
            dp[i] = sum % 1000000007;
            // cout<<dp[i]<<endl;
        }
        return dp[n];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cout << solve(t);
    return 0;
}