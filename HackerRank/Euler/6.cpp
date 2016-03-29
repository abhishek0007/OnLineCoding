//
// Created by a on 29/3/16.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    long long int t, n, sq, sqq;
    cin >> t;
    while (t--) {
        cin >> n;
        sqq = (n * (n + 1) * (2 * n + 1)) / 6;
        sq = (n * (n + 1)) / 2;
        sq = pow(sq, 2);
        // cout<<sqq<<" "<<sq<<endl;

        cout << sq - sqq << endl;

    }
    return 0;
}
