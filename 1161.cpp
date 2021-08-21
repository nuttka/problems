#include <bits/stdc++.h>

#define _                        \
   ios_base::sync_with_stdio(0); \
   cin.tie(0);
#define endl '\n'
#define MAX(a, b)((a > b) ? a : b )
#define MIN(a, b)((a < b) ? a : b )
#define MAX_VALUE 1000000000

using namespace std;

int fac(int n) {
    if(n<0) return 1;
    long long value = 1;
    while(n!=0) {
        value *= n;
        n--;
    }
    return value;
}


int main() {
    _;

    int n, m;

    while(cin >> n >> m){
        std::cout << fac(n) + fac(m) << endl;
    }

    return 0;
}