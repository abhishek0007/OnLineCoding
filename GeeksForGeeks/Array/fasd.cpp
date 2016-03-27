#include<bits/stdc++.h>

#define M 1299709
#define N 21
using namespace std;
long long a[N][N];

void wfgg(long long int n) {
    for (int i = 1; i <= pow(2, n - 1); i++)
        a[1][i] = i;

    for (int i = 2; i <= n; i++) {
        int m = 1;
        for (int k = 1; k <= pow(2, n - 1); k += 2) {
            a[i][m++] = (a[i - 1][k] * a[i - 1][k + 1]) % M;

        }
    }



/*
    for(int i=0; i<=pow(2,n-1); i++)
    {
        for(int j=0; j<=pow(2,n-1); j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    */

}

int main() {
    long long int l, q, p, k;
    cin >> l >> q;
    wfgg(l);
    while (q--) {
        cin >> p >> k;
        int m = l - p + 1;
        int n = l - k + 1;
        int sum = 0;
        // cout<<m<<n<<endl;
        for (int i = m; i >= n; i--) {
            for (int j = 1; j <= pow(2, l - 1); j++) {
                sum = sum + a[i][j];
                sum = sum % M;
                //  cout<<a[i][j]<<" ****"<<sum<<endl;

            }

        }

        cout << sum << endl;
    }


    return 0;
}
