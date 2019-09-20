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
