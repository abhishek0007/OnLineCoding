#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool is_Palindrome(long n) {
    long k, p = n, num = 0;
    while (p > 0) {
        k = p % 10;
        num = num * 10 + k;
        p = p / 10;
    }
    if (num == n)
        return true;
    else return false;
}

int main() {
    long t;
    cin >> t;
    //  cout<<is_Palindrome(t);
    while (t--) {
        long n, max1 = -1;
        cin >> n;
        for (int i = 100; i <= 999; i++) {
            for (int j = 100; j <= i; j++) {
                // long m =  ;
                if (is_Palindrome(i * j) && i * j <= n && max1 < i * j) {
                    max1 = i * j;
                }
            }
        }

        cout << max1 << endl;
    }
//

    return 0;
}
