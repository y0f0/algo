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