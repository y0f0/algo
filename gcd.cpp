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

