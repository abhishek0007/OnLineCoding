#include<bits/bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string key, value;
    map <string, string> m;
    while (n--) {
        cin >> key;
        cin >> value;
        m[key] = value;
    }


    return 0;
}
