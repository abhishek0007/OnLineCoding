#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> v;// =  new vector<int>;
    char ch;
    int a, b, c;

    while (ss >> a)// >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56// Complete this function
    {
        ss >> ch;
        v.push_back((int) a);
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
