#include<bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    string s;
    cin >> s;
    int a[256];
    for (int i = 0; i < 256; i++)
        a[i] = 0;

    int len = s.length();
    cout << len << endl;
    for (ll i = 0; i < s.length(); i++) {
        ll kk = i - 1;
        ll number = 0;
        while (!(s[i] >= 97 && s[i] <= 122) && i < s.length()) {
            number = 10 * number + (int) s[i] - 48;
            i++;
        }
        a[kk] += number;

    }
    for (int i = 97; i < 122; i++)
        cout << a[i] << " ";


    ll q;
    cin >> q;

    for (ll i = 0; i < q; i++) {
        ll index;
        cin >> index;

        for (int i = 97; i < 123; i++) {
            index = index - a[i];
            if (index <= 0) {
                cout << (char) i << endl;
                break;
            }
        }
    }

    return 0;
}
