#include<bits/stdc++.h>
using namespace std;

int gcd1(int a, int b) {
    if (a == 0)
        return b;
    else return gcd1(b, a % b);

}

int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int lcm(int a, int b) {
    return (a * b) / (gcd(a, b));
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << lcm(a, b) << " " << gcd(a, b) << endl;

    }
    return 0;
}
