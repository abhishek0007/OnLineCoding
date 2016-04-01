#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
const int max1 = 5000 + 7;
int value[max1];
int ans[max1];

long c(long n) {
    if (n == 0) return 0;
    if (n < max1 && value[n])
        return value[n];
    long r;
    if (n % 2 == 0)
        r = c(n / 2) + 1;
    else
        r = c(3 * n + 1) + 1;

    if (n < max1)
        value[n] = r;
    return r;
}

int main() {
    for (int i = 1; i < max1; ++i) {
        int act = c(i);
        if (act >= value[ans[i - 1]])
            ans[i] = ans[i - 1];
        else ans[i] = 1;

    }
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;


        cout << ans[n] << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
