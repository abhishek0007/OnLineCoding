#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int n, k;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> k >> s;
        long long int max = -1, product = 1, m = 0;
        for (int i = 0; i < s.length(); i++) {
            product = 1;
            for (int j = i; j < i + k && j < s.length(); j++) {
                product *= (int) s[j] - 48;

            }
            if (product > max)
                max = product;
        }
        cout << max << endl;
    }
    return 0;
}
