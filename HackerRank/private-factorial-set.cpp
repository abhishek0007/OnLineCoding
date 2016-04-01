//
// Created by a on 1/4/16.
//

#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
ll a[1000001];

void find() {

    for (ll i = 0; i < 1000001; ++i)
        a[i] = 0;
    for (ll i = 2; i < 1000001; i++) {
        for (ll j = i; j < 1000001; j++)
            if (a[i] == 0) {
                if (j % i == 0)
                    a[j]++;
            }
    }

}