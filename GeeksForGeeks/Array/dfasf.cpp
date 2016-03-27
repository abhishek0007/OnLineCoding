#include<bits/stdc++.h>

using namespace std;

int maxLiters(long long n, long long g, long long p) {

    if (n < g && n < p)
        return 0;
    if (n >= g && n < p) {
        return n / g;
    }
    if (n < g && n >= p) {
        return n / p;
    }
    return 1 + max(maxLiters(n - g, g, p), maxLiters(n - p, g, p));
}

int main() {
    long long int n, a, b, c;
    cin >> n >> a >> b >> c;
    long long g = b - c;

    cout << maxLiters(n, g, a);

    return 0;
}
