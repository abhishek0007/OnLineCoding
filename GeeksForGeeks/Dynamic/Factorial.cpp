//
// Created by a on 1/4/16.
//

#include<bits/stdc++.h>

using namespace std;
int fact[100];

int factor(int n) {
    if (n == 0 || n == 1)
        fact[n] = 1;
    fact[n] = n * factor(n - 1);
    return fact[n];
}

int main() {

    int n;
    cout << "Working";

    return 0;
}
