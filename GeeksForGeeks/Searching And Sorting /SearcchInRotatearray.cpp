#include<bits/stdc++.h>

using namespace std;

int Binrat(int a[], int n, int K) {
    int l = 0, r = n - 1, mid;
    while (r > l) {
        mid = ((r + l) / 2);//+l;
        cout << a[mid - 1] << " " << a[mid] << " " << a[mid + 1] << endl;
        if (a[mid - 1] < K && K > a[mid + 1])
            return mid;
        if (a[mid] < a[mid + 1])
            l = mid + 1;
        else if (a[mid] > a[mid + 1])
            r = mid - 1;

    }
    return -1;

}

int main() {
    int a[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 10;
    cin >> k;
    cout << Binrat(a, n, k);

    return 0;
}
