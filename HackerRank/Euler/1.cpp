//
// Created by a on 28/3/16.
//

#include<bits/stdc++.h>

using namespace std;

long long s(long long n) { return ((n * (n + 1)) / 2); }

int main() {
    int t;
    long n;
    long long sum = 0, tt, f, tf;
    cin >> t;
    while (t--) {
        cin >> n;
        n--;
        sum = 0;
        cout << 3 * s(n / 3) + 5 * s(n / 5) - 15 * s(n / 15) << endl;
    }


    return 0;
}
