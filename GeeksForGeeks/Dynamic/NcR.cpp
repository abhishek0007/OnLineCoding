#include<bits/stdc++.h>

using namespace std;
#define mod 1000000007
int a[1000][1000];

long NcR(long n, long r) {

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= r; j++) {
            if (i == j)
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= r; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return a[n][r];
}

int main() {
    //code
    long t, r, n;
    cin >> t;
    while (t--) {
        cin >> n >> r;
        for (int i = 0; i <= r; i++)
            for (int j = 0; j <= n; j++)
                if (i == 0 || j == 0 || i == j || i < j)
                    a[i][j] = 1;
                else
                    a[i][j] = 0;
        cout << NcR(n, r);
    }
    return 0;
}
