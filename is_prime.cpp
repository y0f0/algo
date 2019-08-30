#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    if (n == 1)
        return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return false;
            break;
        }
        i++;
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cin.tie(0);

    int n;
    cin >> n;
    if (is_prime(n))
        cout << "prime";
    else
        cout << "composite";
}
