#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    vector<string> v;
    string sp;

    while (ss >> sp)
        v.push_back(sp);

//for(int i=v.size()-1;i>=0;i--)
//cout<<v[i]<<" ";

    reverse(v.begin(), v.end());
    for (vector<string>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";


    return 0;
}
