#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    string s = "Abhishek Kumar Singh";
    stringstream ss(s);
    vector<string> v;
    string sss;
    while (ss >> sss)
        v.push_back(sss);
    reverse(v.begin(), v.end());
    string finalstr;
    for (vector<string>::iterator it = v.begin(); it != v.end(); it++) {
        finalstr.append(*it);
        finalstr.append(" ");
    }
    cout << finalstr;
    return 0;
}
