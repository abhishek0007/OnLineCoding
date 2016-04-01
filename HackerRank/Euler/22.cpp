#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    vector<string> v;
    vector<string>::iterator it;

    for (int i = 0; i < n; i++) {
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end());
    int q;
    cin >> q;
    string ss;
    while (q--) {
        cin >> ss;
        long sum = 0;
        for (int i = 0; i < ss.length(); i++)
            sum += (int) ss[i] - 65;
        it = find(v.begin(), v.end(), ss);
        cout << (it - v.begin()) * sum << endl;

    }

    return 0;
}
