//
// Created by a on 30/3/16.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>

#define MOD 1000000007

#include <algorithm>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        n = n + 1;
        m = m + 1;
        int a[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 || j == 0)
                    a[i][j] = 1;
                else {
                    a[i][j] = ((a[i - 1][j]) % MOD + (a[i][j - 1]) % MOD) % MOD;

                }
            }
        }
        cout << a[n - 1][m - 1] << endl;

    }
    return 0;
}