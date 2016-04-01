#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int T;
//   cin>>T;
    T = 1;

    long long N;
    while (T--) {
//        cin>>N;
        N = 99999;
        long long sum = 0;
        bool a[N];
        //  memset(a,0,N);
        for (int i = 2; i <= N; i++) {
            a[i] = 0;
        }
        for (int i = 2; i <= sqrt(N); i++) {
            if (a[i] == 0) {
                for (int j = 2; i * j <= N; j++)
                    a[i * j] = -1;

            }
        }

        for (int i = 2; i <= N; i++)
            if (a[i] == 0)
                sum += i;
        cout << sum << endl;

    }
    return 0;
}
