#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[] = {5, 7, 8, 9};

    int s = sizeof(a) / sizeof(a[0]);
    int b[s];
    int k, m, sum = 0;
    for (int i = 0; i < s - 1; i++) {
        m = 0;
        for (int j = 1; j < s - i; j++) {
            k = (a[j] - a[j - 1]);
            //cout<<k<<" ";

            sum += k;
            a[m++] = k;
        }

    }
    cout << sum;

    return 0;
}
