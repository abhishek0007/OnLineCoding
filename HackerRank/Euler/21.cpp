//
// Created by a on 31/3/16.
//

#include<bits/stdc++.h>

using namespace std;

/*long amicable(long n)
{
    long k=0,M=0;
    for(long long  i=1; i<=n/2; ++i)
        if(n%i==0)
        {
            k+=i;
        }
    return k;
}
*/


long long amicable(long long n) {
    long k = 0, M = 0;
    for (long long i = 1; i * i < n; ++i)
        if (n % i == 0) {
            k += i + n / i;
        }
    return k - n;
}


int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long sum = 0;
        for (long long i = 1; i <= n; i++) {
            long long x = amicable(i);

            long long y = amicable(x);

            if (i == y && x != i)
                sum += i;
        }
        cout << sum - 1 << endl;
    }
    return 0;
}
