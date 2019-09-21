#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void karatsuba(ll *res, const ll *p, const ll *q, int sz){
    ll t0[sz], t1[sz], r[sz<<1];

    memset(r, 0, (sz<<1) * sizeof(ll));
    
    if ( sz <= 4 ){ 
        for ( int i = 0 ; i < sz ; i++ )
            for ( int j = 0 ; j < sz ; j++ ){
                r[i + j] += p[i] * q[j];
            }
    } else {
        int nSz = (sz >> 1);

        for ( int i = 0 ; i < nSz ; i++ ){
            t0[i] = p[i] + p[nSz + i];   
            t1[i] = q[i] + q[nSz + i];   
            t0[i + nSz] = t1[i + nSz] = 0;  
        }

        karatsuba(r + nSz, t0, t1, nSz);      
        karatsuba(t0, p, q, nSz);             
        karatsuba(t1, p + nSz, q + nSz, nSz); 

        for ( int i = 0 ; i < sz ; i++ ){
            r[i] += t0[i];                    
            r[i + nSz] -= t0[i] + t1[i];      
            r[i + sz] += t1[i];               
        }
    }
    
    memcpy(res, r, (sz<<1) * sizeof(ll));
}

void polyMult(ll *r, ll *p, ll *q, int sz){
    if ( sz & (sz - 1) ){ 
        int k = 1;
        while ( k < sz ) k <<= 1;
        while ( ++sz <= k ) p[sz - 1] = q[sz - 1] = 0;
        sz--;
    }

    karatsuba(r, p, q, sz);
}


int main(){
    ll p[4] = {1, 2, 0, 0}; //4 -- max of power 2 in max degree of polinomials  
    ll q[4] = {2, 3, 1, 0};
    ll r[4 * 2];
    int degree = 2; //max degree of polinomials
    polyMult(r, p, q, degree + 1);
    return 0;
}