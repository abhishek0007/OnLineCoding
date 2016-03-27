#include <stdio.h>
#include <math.h>
#include <limits.h>
#include<bits/stdc++.h>

#define mod 1000000007
#define m 20000
static long long int fact[m][m];

using namespace std;

long long int minVal(long long int x, long long int y) {
    return (x < y) ? x : y;
}

long long int getMid(long long int s, long long int e) {
    return s + (e - s) / 2;
}

long long int RMQUtil(long long int *st, long long int ss, long long int se, long long int qs, long long int qe,
                      long long int index) {
    if (qs <= ss && qe >= se)
        return st[index];
    if (se < qs || ss > qe)
        return INT_MAX;
    long long int mid = getMid(ss, se);
    return minVal(RMQUtil(st, ss, mid, qs, qe, 2 * index + 1),
                  RMQUtil(st, mid + 1, se, qs, qe, 2 * index + 2));
}

long long int RMQ(long long int *st, long long int n, long long int qs, long long int qe) {
    if (qs < 0 || qe > n - 1 || qs > qe) {
        return 0;
    }

    return RMQUtil(st, 0, n - 1, qs, qe, 0);
}

long long int constructSTUtil(long long int arr[], long long int ss, long long int se, long long int *st,
                              long long int si) {
    if (ss == se) {
        st[si] = arr[ss];
        return arr[ss];
    }

    long long int mid = getMid(ss, se);
    st[si] = minVal(constructSTUtil(arr, ss, mid, st, si * 2 + 1),
                    constructSTUtil(arr, mid + 1, se, st, si * 2 + 2));
    return st[si];
}

long long int *constructST(long long int arr[], long long int n) {
    long long int x = (long long int) (ceil(log2(n)));
    long long int max_size = 2 * (long long int) pow(2, x) - 1;

    long long int *st = new long long int[max_size];
    constructSTUtil(arr, 0, n - 1, st, 0);

    return st;
}

int main() {
    long long int n;
    cin >> n;
    long long int arr[n];

    for (long long int i = 0; i < n; i++)
        cin >> arr[i];
    long long int ans = 0;
    long long int *st = constructST(arr, n);
    long long int qs = 1;
    long long int qe = 2;
    long long int a, b, c, d;
    long long kk = 0, kkq = 0;
    for (a = 0; a < n; a++)
        for (b = a; b < n; b++)
            for (c = b + 1; c < n; c++)
                for (d = c; d < n; d++) {

                    if (a == b) {
                        fact[a][b] = arr[a];//[b];
                        kk = arr[a];
                    }
                    else if (fact[a][b] != 0)
                        kk = fact[a][b];
                    else if (fact[a][b] == 0)
                        kk = RMQ(st, n, a, b);

                    if (c == d) {
                        fact[c][d] = arr[c];//[b];
                        kkq = arr[c];
                    }
                    else if (fact[c][d] != 0)
                        kkq = fact[c][d];
                    else if (fact[c][d] == 0)
                        kkq = RMQ(st, n, c, d);
                    ans = ans % mod + min(kk, kkq) % mod;

                }
//                ans = ans%mod + min(RMQ(st, n,a, b),RMQ(st, n,c, d))%mod;

    cout << ans;

    return 0;
}
