//
// Created by a on 28/3/16.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        long p, i;
        for (i = 2; i * i <= n; ++i) {
            while (n % i == 0) {
                p = i;
                n = n / i;
            }
            // cout<<p<<"    "<<n<<endl;
        }
        if (n > 1)
            p = n;
        //cout<<p<<"    "<<n<<endl;
        cout << p << endl;
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
