//
// Created by a on 30/3/16.
//

#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

const int MAX = 1000007;
long long a[MAX];

int main() {
    for (int i = 2; i <= (MAX); i++) {
        if (a[i] == 0) {
            for (int j = 2; i * j <= MAX; j++)
                a[i * j] = 1;

        }
    }
    for (int i = 2; i <= MAX; i++) {
        a[i] = a[i - 1] + (a[i] ? 0 : i);
    }

    int T;
    cin >> T;
    long long N;


    while (T--) {
        cin >> N;

        long long sum = 0;
        cout << a[N] << endl;
    }
    return 0;
}