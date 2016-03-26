#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    assert(1 <= tt and tt <= 100);
    for (int i = 0; i < tt; i++) {
        int n, m, s;
        cin >> n >> m >> s;
        assert(n >= 1 and n <= 1000000000);
        assert(m >= 1 and m <= 1000000000);
        assert(s >= 1 and s <= n);
        cout << (m - 1 + s - 1) % n + 1 << "\n";
    }
    return 0;
}
