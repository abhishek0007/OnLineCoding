#include<bits/stdc++.h>

using namespace std;

int main() {
    string s = "I Love India";
    stringstream s1(s);
    string p;
    vector<string> v;
    while (s1 >> p)
        v.push_back(p);
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}
