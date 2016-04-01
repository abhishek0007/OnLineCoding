//
// Created by a on 1/4/16.
//

#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int k, n;
        cin >> k >> n;
        long long numerator = pow(k, (n + 1)) - 1;
        long long denemarator = k - 1;
        long long NUumberOfNodes = numerator / denemarator;
        long long ans = 0;
        while (NUumberOfNodes > 0) {
            ans = ans + NUumberOfNodes % 10;
            NUumberOfNodes /= 10;
        }

        cout << ans << endl;


    }


    return 0;
}