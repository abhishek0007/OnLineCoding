#include<bits/stdc++.h>

#define Mysize(X) ((char*)(&X+1)-((char*)(&X)))
using namespace std;

int chek(int a[], int n, int k) {
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        if (m[a[i]])
            return 1;
        m[a[i]]++;
        if (i >= k)
            m[a[i - k]] = 0;

    }
    return 0;
}

int main() {
    int a[] = {10, 5, 3, 4, 3, 5, 6};
    int s = Mysize(a) / Mysize(a[0]);
    cout << chek(a, s, 3);
    return 0;
}
