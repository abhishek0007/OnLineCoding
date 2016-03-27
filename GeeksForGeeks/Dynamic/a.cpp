#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<set>
//#include <unordered_set>
#define mod 2147483647
using namespace std;


int main() {
    long int n;
    cin >> n;
    int S, P, Q, count = 0;
    cin >> S >> P >> Q;
    int *a = new int[n];
    a[0] = S % mod;
    for (long int i = 1; i < n - 1; i++)
        a[i] = (((a[i - 1]) % mod) * ((P % mod) % mod)) + Q % mod;

    // sort(a,a+n);
    //unordered_set< int> s(a,a+n);
    cout << s.size() << endl;
    return 0;
}
