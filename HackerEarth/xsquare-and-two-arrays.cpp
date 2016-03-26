//
// Created by a on 26/3/16.
//

#include <iostream>

using namespace std;

int main() {

    long long int n, q;
    cin >> n >> q;
    long long int a[n + 1];
    long long int b[n + 1];
    for (long long int i = 1; i <= n; i++)
        cin >> a[i];
    for (long long int i = 1; i <= n; i++)
        cin >> b[i];
    while (q--) {
        long long int tt, l, r;
        cin >> tt >> l >> r;
        long long int sum = 0;
        if (tt == 1) {
            long long int aa = l;
            for (long long int i = 0; aa < r; i++) {
                aa = i + l;
                if (i % 2 == 0)
                    sum += a[aa];
                else sum += b[aa];
            }
        } else {
            long long int aa = l;

            for (long long int i = 0; aa < r; i++) {
                aa = i + l;
                if (i % 2 == 0)
                    sum += b[aa];
                else sum += a[aa];
            }

        }

        cout << sum << endl;
    }


    return 0;
}
