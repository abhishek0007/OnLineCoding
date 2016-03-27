#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 1; i < n; i++) //1 2 3 4
            cin >> a[i];
        for (int i = 1; i < n; i++)
            cin >> b[i];
        int c = 0;
        for (int i = 1; i < n; i++) {
            for (int j = 1; j <= i; j++) {
                if (a[j] > 0 || b[j] > 0)
                    c++;
                a[j] = a[j] - 1;
                b[j] = b[j] - 1;
            }

        }

        cout << c + 1 << endl;
    }

    return 0;
}
