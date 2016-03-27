#include <iostream>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int lr[n];
        int rr[n];
        lr[0] = 0;
        rr[n - 1] = 0;

        int maxl = a[0];
        for (int i = 1; i < n; i++) {
            if (maxl - a[i] > 0)
                lr[i] = maxl - a[i];
            else
                lr[i] = 0;
            if (maxl < a[i])
                maxl = a[i];

        }
        int maxr = a[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            if (maxr - a[i] > 0)
                rr[i] = maxr - a[i];
            else rr[i] = 0;

            if (maxr < a[i])
                maxr = a[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += min(lr[i], rr[i]);
        cout << sum << endl;
    }
    return 0;
}
