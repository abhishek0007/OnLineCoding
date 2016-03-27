#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (n < 2) {
        cout << 0 << endl;
        return 0;
    }

    int min1 = a[0];
    int max1 = a[n - 1];
    int maxpro = 0;

    int l[n];
    int r[n];

    l[0] = 0;
    r[n - 1] = 0;
    for (int i = 1; i < n; i++) {
        l[i] = max(l[i - 1], a[i] - min1);
        min1 = min(min1, a[i]);

    }
    for (int i = n - 2; i >= 0; i--) {
        r[i] = max(r[i + 1], max1 - a[i]);
        min1 = max(max1, a[i]);

    }

    for (int i = 0; i < n; i++)
        maxpro = max(maxpro, l[i] + r[i]);
    cout << maxpro;
    return 0;
}
