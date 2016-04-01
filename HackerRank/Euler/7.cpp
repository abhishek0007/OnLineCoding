#include<bits/stdc++.h>
using namespace std;

int main() {
    long a[1000000];
    for (long i = 0; i < 1000000; i++)
        a[i] = 0;
    long j;
    for (long i = 2; i < 1000000; i++) {
        if (i * j < 1000000 && a[i] == 0) {
            for (j = 2; i * j < 1000000; j++)
                a[i * j] = -1;
    }

    }
    for (long i = 1; i <= 1000000; i++)
        if (a[i] == 0)
            cout << i << ",";
    return 0;
}
