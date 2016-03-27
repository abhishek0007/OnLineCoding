#include<bits/stdc++.h>

using namespace std;

int Floor(int a[], int n, int key) {
    int l = 0;
    int r = n;
    int mid;
    while (l <= r) {
        mid = (r + l) / 2;
        if (a[mid] == key)
            return a[mid];
        if (a[mid] < key)
            l = mid + 1;
        else r = mid - 1;
        mid = (r + l) / 2;

        if (a[mid] == key)
            return a[mid];

        if (l == r)
            return a[l + 1];
    }
    return -1;
}

int main() {
    int a[] = {1, 2, 4, 8, 9, 11, 17, 18};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 12;
    cout << Floor(a, n, x);
    //Ciel(arr,n,x);

    return 0;
}
