long long fast_pow(long long x, long long p, long long MOD) { //x ^ n % MOD
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
