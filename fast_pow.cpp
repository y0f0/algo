#include <bits/stdc++.h>
using namespace std;
long long fast_pow(long long x, long long p, long long MOD) {
    long long res = 1;
    while(p > 0) {

        if(p & 1) { //p % 2 == 0
            res = (res * x) % MOD;
        }
        x = (x * x) % MOD;
        p >>= 1; //p /= 2
    }
    return res;
}
int main() {
    int x, n, p;
    cin >> x >> n >> p;
    cout << fast_pow(x, n, p);
    return 0;
}

