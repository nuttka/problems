#include <bits/stdc++.h>

#define _                        \
   ios_base::sync_with_stdio(0); \
   cin.tie(0);
#define endl '\n'
#define MAX(a, b)((a > b) ? a : b )
#define MIN(a, b)((a < b) ? a : b )
#define MAX_VALUE 1000000000

using namespace std;

vector<int> x;
vector<int> y;
int n, p;

int ks(vector<vector<int>> &dp, int s, int ac){
    if (s==n) {
        if (ac>=p) return 0;
        else return MAX_VALUE;
    }

    if (dp[s][ac] != -1) return dp[s][ac];

    dp[s][ac] = MIN(ks(dp, s+1, ac), ks(dp, s+1, ac + y[s])+x[s]);
    return dp[s][ac];
};

int main() {
    _;

    while(cin >> n){
        cin >> p;

        for(int i=0; i<n; ++i){
            int d, m;
            cin >> d;
            cin >> m;

            y.push_back(d);
            x.push_back(m);
        }

        vector<vector<int>> dp(n+1, vector<int>(p+1,-1));

        int total = ks(dp, 0, 0);

        if (total == MAX_VALUE) cout << "-1" << endl;
        else cout << total << endl;

        x.clear();
        y.clear();
    }

    return 0;
}