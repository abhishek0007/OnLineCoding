#include<bits/stdc++.h>

using namespace std;

int main() {
    string s = "I work at xyz";
    string s1;
    vector<string> v;
    stringstream ss(s);
    while (ss >> s1) {
        v.push_back(s1);
    }
    string sss;
    vector<string>::iterator it;
    for (int i = v.size() - 1; i >= 0; i--) {
        sss.append(v[i]);
        sss.append(" ");
    }
    cout << sss;
    return 0;
}
