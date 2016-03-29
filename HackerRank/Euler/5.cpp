//
// Created by a on 29/3/16.
//

#include<bits/stdc++.h>

using namespace std;

int gcd1(int a, int b) {
    if (a == 0)
        return b;
    else return gcd1(b, a % b);

}

int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int lcm(int a, int b) {
    return (a * b) / (gcd(a, b));
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m = 1;
        for (int i = 1; i <= n; i++)
            m = lcm(m, i);
        cout << m << endl;
    }
    return 0;
}
