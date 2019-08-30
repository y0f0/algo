#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cin.tie(0);


    int a, b, cnt = 1;
    cin >> a >> b;
    vector <char> prime (b+1, true);
    vector <int> primes;
    prime[0] = prime[1] = false;
    for (int i=2; i<=b; i++)
        if (prime[i])
            if (i * i <= b)
                for (int j=i*i; j<=b; j+=i)
                    prime[j] = false;
    for (int i = a; i <= b; i++) {
        if (prime[i]) {
            primes.push_back(i);
        }
    }
    for (auto e: primes)
        cout << e << endl;
    for (int i = 1; i < (int)primes.size(); i++) {
        if (abs(primes[i - 1]- primes[i]) == 2)
            cnt++;
    }
    cout << cnt;
    return 0;
}
