#include <bits/stdc++.h>
using namespace std;

void factorize(int number, map<int, int>& m) {
    int divider = 2;
    while (divider * divider <= number) {
        while (number % divider == 0) {
            m[divider]++;
            number /= divider;
        }
        ++divider;
    }

    if (number > 1) {
        m[number]++;
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cin.tie(0);

    int n;
    cin >> n;
    map<int, int> m;
    factorize(n, m);
}
