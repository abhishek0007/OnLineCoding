#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int n, k;
    string s;
    cin >> t;
    while (t--) {
        int n, k = 0, max = -1;
        cin >> n;
        for (int a = 0; a <= n; a++)
            for (int b = 0; b < a; b++)
                for (int c = 0; c < b; c++)
                    if ((a + b + c) == n && (c * c + b * b) == (a * a)) if (max < a * b * c)
                        max = a * b * c;
        cout << max << endl;
    }
    return 0;
}
