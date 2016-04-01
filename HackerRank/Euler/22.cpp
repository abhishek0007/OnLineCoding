//
// Created by a on 31/3/16.
//

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
            // cout<<(int)ss[i]-64<<" ";
            sum += (int) ss[i] - 64;
//        cout<<endl;
        it = find(v.begin(), v.end(), ss);
        cout << ((it - v.begin()) + 1) * sum << endl;

    }

    return 0;
}
