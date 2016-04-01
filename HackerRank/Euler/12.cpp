#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long number(long long n) {
    return ((n * (n + 1)) / 2);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long num = 0, p = 2;
        long long k = 1;
        while (num < n) {
            k += p;
            p++;
            num = 0;
            for (long j = 1; j < sqrt(k); j++) {
                if (k % j == 0)
                    num += 2;
            }


        }
        cout << num << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
