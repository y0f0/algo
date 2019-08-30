#include <bits/stdc++.h>
using namespace std;


int factorize(long long n) { 
    int ans = 0;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ans++;
            if (i != n / i) {
                ans++;
            }
        }
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

 
    return 0;
}
