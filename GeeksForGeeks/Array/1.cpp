#include<bits/stdc++.h>

using namespace std;

bool FindPair(int a[], int n, int num) {
    map<int, int> m;
    for (int i = 0; i < n; i++)
        m[a[i]]++;

    for (int i = 0; i < n; i++) {
        if (m[num - a[i]])
            return 1;
    }
    return 0;
}

int main() {

    int a[] = {1, 4, 45, 6, 10, -8};
    int Arry_size = sizeof(a) / sizeof(a[1]);
    int num = 16;
    cout << FindPair(a, Arry_size, num);
    return 0;
}
