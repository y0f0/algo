#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (a != 0 && b != 0) {
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    return a + b;
}
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
}

