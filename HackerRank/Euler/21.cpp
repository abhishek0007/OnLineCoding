#include<bits/stdc++.h>
using namespace std;

long amicable(long n)
{
    long k=0,M=0;
    for (int i = 1; i * i < n; ++i)
        if(n%i==0)
        {
            k += i + n / i;
        }
    return k - n;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long sum = 0;
        for (int i = 1; i <= n; i++) {
            int x = amicable(i);

            int y = amicable(x);

            if (i == y && x != i) {
                cout << i << " ";
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
