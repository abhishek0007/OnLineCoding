#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[] = {1, 2, -3, 4, 5, 6, -1};
    int s = sizeof(a) / sizeof(a[1]);
    int ans = 0;
    int sm = 0;
    for (int i = 0; i < s; i++) {
        sm += a[i];
        sm = max(sm, 0);
        ans = max(ans, sm);
    }
    cout << ans;
    return 0;
}
